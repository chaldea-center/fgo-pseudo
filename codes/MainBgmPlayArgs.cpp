void __fastcall MainBgmPlayArgs___ctor(
        MainBgmPlayArgs_o *this,
        System_String_o *bgmName,
        System_Nullable_float__o volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  BgmPlayArgs___ctor((BgmPlayArgs_o *)this, bgmName, volume, fadeTime, startTime, 0LL);
}


BgmPlayArgs_o *__fastcall MainBgmPlayArgs__Clone(MainBgmPlayArgs_o *this, const MethodInfo *method)
{
  System_String_o *BgmName_k__BackingField; // x20
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v7; // x0
  BgmPlayArgs_o *v8; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v12; // 0:x2.8

  if ( (byte_42AE647 & 1) == 0 )
  {
    sub_B52984(&MainBgmPlayArgs_TypeInfo);
    sub_B52984(&Method_System_Nullable_float___ctor__);
    byte_42AE647 = 1;
  }
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v7 = (BgmPlayArgs_o *)sub_B52A54(MainBgmPlayArgs_TypeInfo);
  v12 = volume;
  v8 = v7;
  BgmPlayArgs___ctor(v7, BgmName_k__BackingField, v12, FadeTime_k__BackingField, StartTime_k__BackingField, 0LL);
  return v8;
}