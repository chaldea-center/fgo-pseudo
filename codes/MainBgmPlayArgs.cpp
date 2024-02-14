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
  __int64 v3; // x1
  System_String_o *BgmName_k__BackingField; // x20
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  BgmPlayArgs_o *v10; // x0
  BgmPlayArgs_o *v11; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v15; // 0:x2.8

  if ( (byte_4212F9C & 1) == 0 )
  {
    sub_B0D8A4(&MainBgmPlayArgs_TypeInfo, method);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v3);
    byte_4212F9C = 1;
  }
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v10 = (BgmPlayArgs_o *)sub_B0D974(MainBgmPlayArgs_TypeInfo, v8, v9);
  v15 = volume;
  v11 = v10;
  BgmPlayArgs___ctor(v10, BgmName_k__BackingField, v15, FadeTime_k__BackingField, StartTime_k__BackingField, 0LL);
  return v11;
}