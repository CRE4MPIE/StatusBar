class RscStatusBar
{
        idd = -1;
		duration = 10e10;
        onLoad = "uiNamespace setVariable ['RscStatusBar', _this select 0];";
		fadein = 0;
		fadeout = 0;
		movingEnable = 0;
		objects[] = {};

        class controlsBackground
        {
                class statusBarImage
                {
                        idc = 55557;
						type = 0;
						style = 48;
                        x = safezoneX + safezoneW - 1.883;
                        y = safezoneY + safezoneH - 0.092; //0.068
                        w = 1.35;
                        h = 0.08; //0.06
                        colorText[] = {1, 1, 1, 1};
						colorBackground[]={0,0,0,0};
						sizeEx = 0.4;
						font = "OrbitronLight";
                        text = "addons\statusBar\icons\background.paa";
                };
        };
 
        class controls
        {
                class statusBarText
                {
                        idc = 55554;
                        x = safezoneX + safezoneW - 1.90;
                        y = safezoneY + safezoneH - 0.063;
                        w = 1.38;
                        h = 0.06;
                        shadow = 2;
                        font = "OrbitronLight";
                        size = 0.030;
                        type = 13;
						style = 2;
                        text = "";
 
                        class Attributes
                        {
                                align="center";
                                color = "#ffffff";
                                font = "OrbitronLight";
                        };
                };
        };
};