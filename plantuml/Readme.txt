https://plantuml.com/
https://hittheroad.dev/using-plantuml-inside-vscode-and-wsl2/
To preview in VS Code requires Graphvis and Java:
sudo apt-get update
sudo apt install openjdk-18-jre-headless
sudo apt install graphviz

Edit Remote settings: /home/.../.vscode-server/data/Machine/settings.json
Add: "plantuml.render": "Local"

Voila