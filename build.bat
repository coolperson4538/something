echo "Please run this as administrator or else installing choco and G++ won't work."

echo "Installing chocolatey package manager..."
Set-ExecutionPolicy Bypass -Scope Process -Force; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
cd Desktop
.\install-choco.ps1
echo "Installing G++.."
choco install g++
echo "Please close this window and execute on build2.bat"