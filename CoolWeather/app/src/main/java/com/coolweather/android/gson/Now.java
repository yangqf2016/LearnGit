package com.coolweather.android.gson;

import com.google.gson.annotations.SerializedName;

public class Now {

    @SerializedName("tmp")
    public String temperature;

    @SerializedName("cond")
    public More more;

    @SerializedName("wind_dir")
    public String wind_dir;

    @SerializedName("wind_sc")
    public String wind_sc;

    @SerializedName("fl")
    public String fl;

    @SerializedName("hum")
    public String hum;

    @SerializedName("pcpn")
    public String pcpn;

    @SerializedName("vis")
    public String vis;

    public class More {

        @SerializedName("txt")
        public String info;

    }



}
