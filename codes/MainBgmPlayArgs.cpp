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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *BgmName_k__BackingField; // x20
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v12; // x0
  BgmPlayArgs_o *v13; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v17; // 0:x2.8

  if ( (byte_42E726A & 1) == 0 )
  {
    sub_B5D5C4(&MainBgmPlayArgs_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v5, v6, v7);
    byte_42E726A = 1;
  }
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v12 = (BgmPlayArgs_o *)sub_B5D694(MainBgmPlayArgs_TypeInfo);
  v17 = volume;
  v13 = v12;
  BgmPlayArgs___ctor(v12, BgmName_k__BackingField, v17, FadeTime_k__BackingField, StartTime_k__BackingField, 0LL);
  return v13;
}