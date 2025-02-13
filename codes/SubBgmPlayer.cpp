void __fastcall SubBgmPlayer___ctor(SubBgmPlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall SubBgmPlayer__ExportPlayArgs(SubBgmPlayer_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  const MethodInfo *v5; // x1
  int32_t PlayTime; // w21
  BgmPlayArgs_o *v7; // x0
  BgmPlayArgs_o *v8; // x20
  const MethodInfo *v9; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v13; // 0:x2.8

  if ( (byte_4BDBB64 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&SubBgmPlayArgs_TypeInfo);
    byte_4BDBB64 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v5);
  v7 = (BgmPlayArgs_o *)sub_1C22084(SubBgmPlayArgs_TypeInfo);
  v13 = volume;
  v8 = v7;
  BgmPlayArgs___ctor(v7, bgmName, v13, 0.0, PlayTime, v9);
  return v8;
}