void __fastcall SubBgmPlayer___ctor(SubBgmPlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall SubBgmPlayer__ExportPlayArgs(SubBgmPlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  const MethodInfo *v8; // x1
  int32_t PlayTime; // w21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  BgmPlayArgs_o *v13; // x0
  BgmPlayArgs_o *v14; // x20
  const MethodInfo *v15; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v19; // 0:x2.8

  if ( (byte_4B15829 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, method, v2);
    sub_1BCA7E0(&SubBgmPlayArgs_TypeInfo, v4, v5);
    byte_4B15829 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v8);
  v13 = (BgmPlayArgs_o *)sub_1BCAA2C(SubBgmPlayArgs_TypeInfo, v10, v11, v12);
  v19 = volume;
  v14 = v13;
  BgmPlayArgs___ctor(v13, bgmName, v19, 0.0, PlayTime, v15);
  return v14;
}