#include <iostream>
#include <string>

using namespace std;

int main()
{
    string url;

    cout << "Enter the YouTube video URL: ";
    getline(cin, url);

    string downloadPath = "~/Downloads/%(title)s.mp4";

    string command = "/opt/homebrew/bin/yt-dlp -f bestvideo+bestaudio -S ext:mp4:m4a --merge-output-format mp4 --ffmpeg-location /opt/homebrew/bin/ffmpeg -o \"" + downloadPath + "\" \"" + url + "\"";

    cout << "Downloading the video..." << endl;

    int result = system(command.c_str());

    if (result == 0)
    {
        cout << "Download completed successfully" << endl;
        cout << "Check your DOWNLOADS folder" << endl;
    }
    
    else
    {
        cout << "Error downloading the video" << endl;
    }

    return 0;
}
