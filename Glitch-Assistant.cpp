#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
#include<ctime>
using namespace std;
void bye()
{
        cout<<"Glitch : Okay ^_^\n         Have a Nice Day"<<endl<<endl;
        PlaySound(TEXT("bye.wav"), NULL, SND_FILENAME);
        _exit(0);
}
void hiihello()
{
    cout<<"Glitch : Hello, What can I do for you?"<<endl<<endl;
    PlaySound(TEXT("whtcanid.wav"), NULL, SND_FILENAME);
}
void entersomething()
{
    cout<<"Glitch : Please enter something."<<endl;
    PlaySound(TEXT("entersomething.wav"), NULL, SND_FILENAME);
}
void howareyou()
{
    cout<<"Glitch : Glad you asked, I'm absolutely great."<<endl<<endl;
    PlaySound(TEXT("howareyou.wav"), NULL, SND_FILENAME);
}
void whereareyou()
{
    cout<<"Glitch : I got stuck inside your system!\n         Help"<<endl;
    PlaySound(TEXT("location.wav"), NULL, SND_FILENAME);
    cout<<"         Haha..Just Kidding "<<endl;
    PlaySound(TEXT("jk.wav"), NULL, SND_FILENAME);
    cout<<"         I like it in here :)"<<endl<<endl;
    PlaySound(TEXT("locrev.wav"), NULL, SND_FILENAME);
}
void music()
{
    string site = "https://wynk.in/music/song/maan-meri-jaan/wm_A10302B0008060965G?q=maan+meri+jaan";
    char n;
    cout<<"Glitch : I love music too\n         Do  you want to listen my favorite song"<<(char) 14<<(char) 14<<endl<<"         Y/N : ";
    PlaySound(TEXT("lovmcs.wav"), NULL, SND_FILENAME);
    cin>>n;
    if(n == 'y' || n == 'Y')
    {
        ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
        PlaySound(TEXT("maanmerijaan.wav"), NULL, SND_FILENAME);
    }
    else
    {
        site = "https://wynk.in/music/search";
        ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
        cout<<"Glitch : Okay.."<<endl<<endl;
        PlaySound(TEXT("srchmusic.wav"), NULL, SND_FILENAME);
    }
}
void opening(string word)
{
    STARTUPINFO startInfo = {0};
    PROCESS_INFORMATION processInfo = {0};
    if(word == "notepad")
    {
        cout<<"Glitch : Opening Notepad Editor"<<endl<<endl;
        PlaySound(TEXT("notepad.wav"), NULL, SND_FILENAME);
        CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
    }
    else if(word == "panel" || word == "control")
    {
        cout<<"Glitch : Opening Control Panel"<<endl<<endl;
        PlaySound(TEXT("cntrlpnl.wav"), NULL, SND_FILENAME);
        CreateProcess(TEXT("C:\\Windows\\System32\\control.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
    }
    else if(word == "d")
    {
        cout<<"Glitch : Opening D Directory"<<endl<<endl;
        system("start D:\> dir");
        PlaySound(TEXT("ddrive.wav"), NULL, SND_FILENAME);
    }
    else if(word == "c")
    {
        cout<<"Glitch : Opening C Directory"<<endl<<endl;
        system("start C:\> dir");
        PlaySound(TEXT("cdrive.wav"), NULL, SND_FILENAME);
    }
    else if(word == "cricket")
    {
        system("start https://www.cricbuzz.com/cricket-match/live-scores");
        cout<<"Glitch : These are the live scores"<<endl<<endl;
        PlaySound(TEXT("cric.wav"), NULL, SND_FILENAME);
    }
    else if(word == "camera")
    {
        cout<<"Glitch : Opening Camera"<<endl<<endl;
        system("start microsoft.windows.camera:");
        PlaySound(TEXT("camera.wav"), NULL, SND_FILENAME);
    }
    else if(word == "linkedin")
    {
        system("start https://www.linkedin.com/feed/");
        cout<<"Glitch : Opening Linkedin"<<endl<<endl;
        PlaySound(TEXT("lin.wav"), NULL, SND_FILENAME);
    }
    else if(word == "paint")
    {
        cout<<"Glitch : Opening Microsoft Paint"<<endl<<endl;
        system("start mspaint");
        PlaySound(TEXT("paint.wav"), NULL, SND_FILENAME);
    }
    else if(word == "word")
    {
        cout<<"Glitch : Opening Microsoft Word"<<endl<<endl;
        system("start winword");
        PlaySound(TEXT("wrd.wav"), NULL, SND_FILENAME);
    }
    else if(word == "powerpoint")
    {
        cout<<"Glitch : Opening Microsoft Powerpoint"<<endl<<endl;
        system("start powerpnt");
        PlaySound(TEXT("powerpnt.wav"), NULL, SND_FILENAME);
    }
    else if(word == "excel")
    {
        cout<<"Glitch : Opening Microsoft Excel"<<endl<<endl;
        system("start excel");
        PlaySound(TEXT("excel.wav"), NULL, SND_FILENAME);
    }
    else if(word == "whatsapp")
    {
        cout<<"Glitch : Launching Whatsapp Web"<<endl<<endl;
        system("start https://web.whatsapp.com/");
        PlaySound(TEXT("whtsap.wav"), NULL, SND_FILENAME);
    }
    else if(word == "instagram")
    {
        cout<<"Glitch : Opening Instagram"<<endl<<endl;
        system("start http://instagram.com");
        PlaySound(TEXT("instagram.wav"), NULL, SND_FILENAME);
    }
    else if(word == "facebook")
    {
        cout<<"Glitch : Opening Facebook"<<endl<<endl;
        system("start http://facebook.com");
        PlaySound(TEXT("facebook.wav"), NULL, SND_FILENAME);
    }
    else if(word == "gmail")
    {
        string site = "http://gmail.com";
        cout<<"Glitch : Opening Gmail"<<endl<<endl;
        ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
        PlaySound(TEXT("gmail.wav"), NULL, SND_FILENAME);
    }
    else if(word == "weather")
    {
        string site  =  "https://weather.com/en-IN/weather/today/l/28.46,77.50?par=google";
        cout<<"Glitch : Launching Weather Guide"<<endl<<endl;
        ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
        PlaySound(TEXT("weather.wav"), NULL, SND_FILENAME);
    }
    else if(word =="news")
    {
        string site = "https://news.google.com/home";
        ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
        cout<<"Glitch : These are some today's highlights"<<endl<<endl;
        PlaySound(TEXT("new.wav"), NULL, SND_FILENAME);
    }
    else if(word == "leetcode")
    {
        string site = "https://leetcode.com/problemset/all/";
        ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
        cout<<"Glitch : Launching Leetcode's Problem Set\n         To avoid plagiarism, I am terminating the session."<<endl<<endl;
        PlaySound(TEXT("leetcode.wav"), NULL, SND_FILENAME);
        bye();
    }
    else if(word == "schedule")
    {
        cout<<"Glitch : I have an inbuilt Program Scheduler, I want you to use that instead"<<endl<<endl;
        PlaySound(TEXT("schedule.wav"), NULL, SND_FILENAME);
        system("start control schedtasks");
    }
    else if(word == "gfg" || word == "geeks")
    {
        string site = "https://practice.geeksforgeeks.org/";
        ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
        cout<<"Glitch : Launching Gfg's Practice Set\n         To avoid plagiarism, I am terminating the session."<<endl<<endl;
        PlaySound(TEXT("gfg.wav"), NULL, SND_FILENAME);
        bye();
    }
    else if(word == "liet" || word == "lloyd")
    {
        string site = "http://liet.in";
        ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
        cout<<"Glitch : Opening Lloyd Institute of Engineering and Technology"<<endl<<endl;
        PlaySound(TEXT("liet.wav"), NULL, SND_FILENAME);
    }
}
void shut(string word)
{
    if(word == "shutdown" || word == "off")
    {
        PlaySound(TEXT("shutdown.wav"), NULL, SND_FILENAME);
        cout<<"Glitch : Your system will shutdown after 6 seconds, please save your work."<<endl<<endl;
        system("C:\\Windows\\System32\\shutdown -s -t 6");
        bye();
    }
    else if(word == "restart")
    {
        cout<<"Glitch : Your system will start rebooting after 6 seconds, please save your work."<<endl<<endl;
        PlaySound(TEXT("restart.wav"), NULL, SND_FILENAME);
        system("C:\\Windows\\System32\\shutdown -r -t 6");
        bye();
    }
}
void ytb()
{
    char srch[100];
    cout<<"Glitch : What do you want to search?"<<endl;
    PlaySound(TEXT("search.wav"), NULL, SND_FILENAME);
    string site = "https://www.youtube.com/results?search_query=";
//    cout<<name<<" : ";
    gets(srch);
    site+=srch;
    ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
    PlaySound(TEXT("found.wav"), NULL, SND_FILENAME);
}
void speak(int n)
{
      string phrase = "The result of your input is" + to_string(n);
      string command = "espeak \"" + phrase + "\"";
      const char *charCommand = command.c_str();
      system(charCommand);
}
void calculator()
{
    char n;
    cout<<"Glitch : Well, I can perform the basic Addition, Subtraction,  Multiplication and Division Operations.\n         Do you want to use me for your task\n         Y/N: ";
    PlaySound(TEXT("calask.wav"), NULL, SND_FILENAME);
    cin>>n;
    if(n == 'y' || n == 'Y')
    {
        cout<<"Glitch : Choose your Operation"<<endl;
        PlaySound(TEXT("choose.wav"), NULL, SND_FILENAME);
        cout<<"         1. Addition"<<endl;
        cout<<"         2. Subtraction"<<endl;
        cout<<"         3. Multiplication"<<endl;
        cout<<"         4. Division"<<endl;
        cout<<"         ";
        int choose;
        cin>>choose;
        switch(choose)
        {
        case 1:
            {
                int n, sum = 0, num;
                cout<<"Glitch : Enter the number of inputs : ";
                PlaySound(TEXT("input.wav"), NULL, SND_FILENAME);
                cin>>n;
                PlaySound(TEXT("onebyone.wav"), NULL, SND_FILENAME);
                for(int i=1; i<=n; i++)
                {
                    cout<<"         Enter the number: ";
                    cin>>num;
                    sum = sum + num;
                }
                cout<<"Glitch : Result of your input is : "<<sum<<endl<<endl;
                speak(sum);
                break;
            }
        case 2:
            {
                int n, num, sum=0;
                PlaySound(TEXT("onebyone.wav"), NULL, SND_FILENAME);
                cout<<"Glitch : Enter 1st number : ";
                cin >> n;
                cout<<"Glitch : Enter 2nd number : ";
                cin>>num;
                if(n > num)
                sum = n-num;
                sum = num-n;
                cout<<"Glitch : Result of your input is : "<<sum<<endl<<endl;
                speak(sum);
                break;
            }
        case 3:
           {
               int n, sum = 1, num;
                cout<<"Glitch : Enter the number of inputs : ";
                PlaySound(TEXT("input.wav"), NULL, SND_FILENAME);
                cin>>n;
                PlaySound(TEXT("onebyone.wav"), NULL, SND_FILENAME);
                for(int i=1; i<=n; i++)
                {
                    cout<<"         Enter the number: ";
                    cin>>num;
                    sum = sum * num;
                }
                cout<<"Glitch : Result of your input is : "<<sum<<endl<<endl;
                speak(sum);
                break;
            }
        case 4:
            {
                int n, num, sum=0;
                PlaySound(TEXT("onebyone.wav"), NULL, SND_FILENAME);
                cout<<"Glitch : Enter 1st number : ";
                cin >> n;
                cout<<"Glitch : Enter 2nd number : ";
                cin>>num;
                if(n > num)
                sum = n/num;
                sum = num/n;
                cout<<"Glitch : Result of your input is : "<<sum<<endl<<endl;
                speak(sum);
                break;
            }
        }
    }
    else
    {
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        cout<<"Glitch : Okay, Opening Calculator"<<endl<<endl;
        PlaySound(TEXT("calculator.wav"), NULL, SND_FILENAME);
        CreateProcess(TEXT("C:\\Windows\\System32\\calc.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
    }
}
int main()
{
        system("COLOR F0");
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        char word[60];
        cout<<"\t\t\t _________________________________________________________________________"<<endl;
        cout<<"\t\t\t|\t _______             _______  _________   _______                 |"<<endl;
        cout<<"\t\t\t|\t|           |           |         |      |         |      |       |"<<endl;
        cout<<"\t\t\t|\t|           |           |         |      |         |      |       |"<<endl;
        cout<<"\t\t\t|\t|     ___   |           |         |      |         |______|       |"<<endl;
        cout<<"\t\t\t|\t|    |   |  |           |         |      |         |      |       |"<<endl;
        cout<<"\t\t\t|\t|    |   |  |           |         |      |         |      |       |"<<endl;
        cout<<"\t\t\t|\t|____|   |  |______  ___|___      |      |_______  |      |       |"<<endl;
        cout<<"\t\t\t|_________________________________________________________________________|"<<endl;
        cout<<endl<<endl<<endl;
        time_t currenttime = time(0);
        tm *loc = localtime(&currenttime);
        cout<<"\t\t\t\t\t      Hello User, I am Glitch "<<(char) 2<<endl<<"\t\t\t\t\t      Your Personal Assistant."<<endl;
        PlaySound(TEXT("hii.wav"), NULL, SND_FILENAME);
        cout<<"\t\t\t\t\t      Please write your name.."<<endl<<endl;
        PlaySound(TEXT("name.wav"), NULL, SND_FILENAME);
        char name[10];
        cout<<endl<<"User: ";
        gets(name);
        for(int i=0; i<=strlen(name); i++)
        {
            name[i] = tolower(name[i]);
        }
        if(strcmp(name, "kratak")==0 || strcmp(name, "kamlesh") == 0 || strcmp(name, "chayan")==0 || strcmp(name, "chayan rai") == 0 || strcmp(name, "ansh") == 0 || strcmp(name, "ansh verma") == 0)
        {
            if(loc->tm_hour >= 0 && loc->tm_hour <= 11)
            {
                cout<<"Glitch : Good Morning Sir, Hope you are doing great.\n         What can I do for you?"<<endl<<endl;
                PlaySound(TEXT("mrng1.wav"), NULL, SND_FILENAME);
            }
            else if(loc->tm_hour >= 12 && loc->tm_hour <= 15)
            {
                cout<<"Glitch : Good Afternoon Sir, Hope you are doing great.\n         What can I do for you?"<<endl<<endl;
                PlaySound(TEXT("af1.wav"), NULL, SND_FILENAME);
            }
            else
            {
                cout<<"Glitch : Good Evening Sir, Hope you are doing great.\n         What can I do for you?"<<endl<<endl;
                PlaySound(TEXT("eve1.wav"), NULL, SND_FILENAME);
            }
        }
        else if(strcmp(name, "aastha") == 0 || strcmp(name, "aastha kashyap") == 0 || strcmp(name, "charu") == 0 || strcmp(name, "charu goswami") == 0 || strcmp(name, "anshul") == 0 || strcmp(name, "anshu")==0 || strcmp(name, "ansha")==0 || strcmp(name, "dr ak rao")==0 || strcmp(name, "kakoli rao")==0 || strcmp(name, "prof(dr) ak rao")==0 || strcmp(name, "dr kakoli rao") == 0 || strcmp(name, "prof. kakoli") == 0 || strcmp(name, "prof kakoli rao") == 0 || strcmp(name, "prof ak rao") == 0 || strcmp(name, "kavita") == 0 ||strcmp(name, "kavita rani") == 0 || strcmp(name, "kavita dhuran") == 0  || strcmp(name, "deepika") == 0|| strcmp(name, "harshita") == 0)
        {
            if(loc->tm_hour >= 0 && loc->tm_hour <= 11)
            {
                cout<<"Glitch : Good Morning Ma'm, Hope you are doing great.\n         What can I do for you?"<<endl<<endl;
                PlaySound(TEXT("mrng2.wav"), NULL, SND_FILENAME);
            }
            else if(loc->tm_hour >= 12 && loc->tm_hour <= 15)
            {
                cout<<"Glitch : Good Afternoon Ma'm, Hope you are doing great.\n         What can I do for you?"<<endl<<endl;
                PlaySound(TEXT("af2.wav"), NULL, SND_FILENAME);
            }
            else
            {
                cout<<"Glitch : Good Evening Ma'm, Hope you are doing great.\n         What can I do for you?"<<endl<<endl;
                PlaySound(TEXT("eve2.wav"), NULL, SND_FILENAME);
            }
        }
        else
        {
            cout<<"Glitch : Okay...Nice to meet you.\n         We will be good friends :)"<<endl<<endl;
            PlaySound(TEXT("unknownfriend.wav"), NULL, SND_FILENAME);
        }
        name[0] = toupper(name[0]);
        while(1)
        {
            char user_input[100];
            cout<<name<<" : ";
            gets(user_input);
            string wrd="";
            for(int i=0; i<=strlen(user_input); i++)
            {
                user_input[i] = tolower(user_input[i]);
            }
            if(strcmp(user_input, "how are you")==0 || strcmp(user_input, "how are you?")==0 || strcmp(user_input, "what's up glitch")==0 || strcmp(user_input, "what's up")==0 || strcmp(user_input, "whats up")==0 || strcmp(user_input, "whats up glitch")==0)
            {
                howareyou();
            }
            else if(strcmp(user_input, "where are you")==0 || strcmp(user_input, "where are you?")==0)
            {
                whereareyou();
            }
            else if(strcmp(user_input, "what are you doing")==0 || strcmp(user_input, "what are you doing?")==0)
            {
                cout<<"Glitch : I'm eagerly waiting for your input. "<<(char) 1<<endl<<endl;
                PlaySound(TEXT("doing.wav"), NULL, SND_FILENAME);
            }
            else
            {
                for(int i = 0; i <= strlen(user_input); i++)
                {
                    if(user_input[i] == ' ' || i == strlen(user_input))
                    {
                        if(wrd == "hi" || wrd == "hii" || wrd == "hello" || wrd == "hey" || wrd == "hye" )
                        {
                            hiihello();
                            break;
                        }
                        else if(wrd == "shutdown" || wrd == "shut" || wrd == "off" || wrd == "restart" || wrd == "reboot")
                        {
                            shut(wrd);
                            break;
                        }
                        else if(wrd == "sleep" || wrd == "lock" || wrd == "hibernate")
                        {
                            PlaySound(TEXT("sleep.wav"), NULL, SND_FILENAME);
                            system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0");
                            PlaySound(TEXT("sleep1.wav"), NULL, SND_FILENAME);
                            break;
                        }
                        else if(wrd == "calculator" || wrd == "calculate" || wrd == "calculation" || wrd == "solve" || wrd == "math" || wrd == "mathematical" || wrd == "maths")
                        {
                            calculator();
                            break;
                        }
                        else if(wrd == "bye" || wrd == "exit")
                        {
                            bye();
                            break;
                        }
                        else if(wrd == "")
                        {
                            break;
                        }
                        else if(wrd == "?" || wrd == "." || wrd == "/" || wrd == " " )
                        {
                            entersomething();
                            break;
                        }
                        else if(wrd == "google" || wrd == "web")
                        {
                            char srch[100];
                            cout<<"Glitch : What do you want to search?"<<endl;
                            PlaySound(TEXT("search.wav"), NULL, SND_FILENAME);
                            cout<<name<<" : ";
                            gets(srch);
                            string site = "https://www.google.com/search?q=";
                            site = site + srch;
                            ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
                            PlaySound(TEXT("found.wav"), NULL, SND_FILENAME);
                            break;
                        }
                        else if(wrd == "ytb" || wrd == "youtube" || wrd == "utube")
                        {
                            char srch[100];
                            cout<<"Glitch : What do you want to search?"<<endl;
                            PlaySound(TEXT("search.wav"), NULL, SND_FILENAME);
                            string site = "https://www.youtube.com/results?search_query=";
                            cout<<name<<" : ";
                            gets(srch);
                            site+=srch;
                            ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
                            PlaySound(TEXT("found.wav"), NULL, SND_FILENAME);
                            break;
                        }
                        else if(wrd == "music" || wrd == "songs"  || wrd == "song")
                        {
                            music();
                            break;
                        }
                        else if(wrd == "time" || wrd == "time?")
                        {
                            if(loc->tm_hour == 12)
                            {
                                cout << "Glitch : "<< loc->tm_hour << ":";
                                cout << loc->tm_min << ":";
                                cout << loc->tm_sec << " PM"<<endl<<endl;
                                string phrase = to_string(loc->tm_hour) + " " + to_string(loc->tm_min) + "PM";
                                string command = "espeak \"" + phrase + "\"";
                                const char *charCommand = command.c_str();
                                system(charCommand);
                                break;
                            }
                            else if(loc->tm_hour > 12)
                            {
                                cout << "Glitch : "<< loc->tm_hour-12 << ":";
                                cout << loc->tm_min << ":";
                                cout << loc->tm_sec << " PM"<<endl<<endl;
                                string phrase = to_string(loc->tm_hour-12) + " " + to_string(loc->tm_min) + "PM";
                                string command = "espeak \"" + phrase + "\"";
                                const char *charCommand = command.c_str();
                                system(charCommand);
                                break;
                            }
                            else
                            {
                                cout << "Glitch : "<< loc->tm_hour<< ":";
                                cout << loc->tm_min << ":";
                                cout << loc->tm_sec <<" AM"<<endl<<endl;
                                string phrase = to_string(loc->tm_hour) + " " + to_string(loc->tm_min) + "AM";
                                string command = "espeak \"" + phrase + "\"";
                                const char *charCommand = command.c_str();
                                system(charCommand);
                                break;
                            }
                        }
                        else if(wrd == "date" || wrd == "date?")
                        {
                            cout <<"Glitch : "<<loc->tm_mday << "/" << 1 + loc->tm_mon <<"/"<<1900 + loc->tm_year<<endl<<endl;
                            string phrase = "Date is " + to_string(loc->tm_mday) + " " + "February" /*to_string(1+loc->tm_mon)*/ + " " + to_string(1900 + loc->tm_year);
                            string command = "espeak \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
                            break;
                        }
                        else if(wrd == "notepad" || wrd == "control" || wrd == "panel" || wrd == "d" || wrd == "c" || wrd == "cricket" || wrd == "camera" || wrd == "linkedin" || wrd == "word" || wrd == "paint" || wrd == "powerpoint" || wrd == "excel" || wrd == "whatsapp" || wrd == "instagram" || wrd == "facebook" || wrd == "gmail" || wrd == "temperature" ||wrd == "weather" || wrd == "news" || wrd == "schedule" || wrd == "gfg" || wrd == "liet" || wrd == "leetcode" || wrd == "lloyd" || wrd == "geeks")
                        {
                            opening(wrd);
                            break;
                        }
                        else
                        {
                            if(i == strlen(user_input))
                            {
                                char n;
                                cout<<"Glitch : Sorry, I don't know the answer yet.\n         Do you want to search it on web ?\n         Y/N : ";
                                PlaySound(TEXT("dontknowans.wav"), NULL, SND_FILENAME);
                                cin>>n;
                                if(n == 'n' || n == 'N')
                                {
                                    break;
                                }
                                else
                                {
                                    string site = "https://www.google.com/search?q=";
                                    site = site + user_input;
                                    ShellExecute(NULL, "open", site.c_str(), NULL, NULL, SW_SHOWNORMAL);
                                    cout<<"Glitch : This is what I found on web "<<endl<<endl;
                                    PlaySound(TEXT("unknown.wav"), NULL, SND_FILENAME);
                                    break;
                                }
                            }
                            wrd = "";
                        }
                    }
                    else
                    {
                        wrd = wrd + user_input[i];
                    }
                }
            }
        }
        return 0;
}
