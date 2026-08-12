void SubBgmPlayer___ctor(SubBgmPlayer_o *this, const MethodInfo *method)
{
  this->fields.channelId = -1;
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubBgmPlayer__ClearChannelInfo(SubBgmPlayer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_channelName; // x0

  this->fields.channelName = 0;
  p_channelName = &this->fields.channelName;
  *((_DWORD *)p_channelName - 2) = -1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_channelName, 0, v2, v3, v4, v5, v6, v7);
}


BgmPlayArgs_o *SubBgmPlayer__ExportPlayArgs(SubBgmPlayer_o *this, const MethodInfo *method)
{
  System_String_o *bgmName; // x19
  bool IsNullOrEmpty; // w0
  float bgmVolume; // s0
  const MethodInfo *v6; // x1
  int32_t PlayTime; // w20
  BgmPlayArgs_o *v8; // x0
  int64_t v9; // x3
  BgmPlayArgs_o *v10; // x20
  const MethodInfo *v11; // x4
  float v12; // s0
  int32_t channelId; // w21
  const MethodInfo *v14; // x1
  int32_t v15; // w20
  BgmPlayArgs_o *v16; // x0
  int64_t v17; // x3
  const MethodInfo *v18; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596FE1C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&SubBgmPlayArgsWithChannel_TypeInfo);
    sub_2213A60(&SubBgmPlayArgs_TypeInfo);
    byte_596FE1C = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0;
  if ( this->fields.channelId < 0
    || (IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.channelName, 0),
        bgmName = this->fields.bgmName,
        IsNullOrEmpty) )
  {
    bgmVolume = this->fields.bgmVolume;
    volume = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&volume,
      bgmVolume,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v6);
    v8 = (BgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgs_TypeInfo);
    v9 = PlayTime;
    v10 = v8;
    BgmPlayArgs___ctor(v8, bgmName, volume, 0.0, v9, v11);
  }
  else
  {
    v12 = this->fields.bgmVolume;
    channelId = this->fields.channelId;
    volume = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&volume,
      v12,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v15 = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v14);
    v16 = (BgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgsWithChannel_TypeInfo);
    v17 = v15;
    v10 = v16;
    BgmPlayArgs___ctor(v16, bgmName, volume, 0.0, v17, v18);
    LODWORD(v10[1].klass) = channelId;
  }
  return v10;
}


void SubBgmPlayer__Reset(SubBgmPlayer_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  BgmPlayerBase__Reset((BgmPlayerBase_o *)this, method);
  this->fields.channelName = 0;
  this->fields.channelId = -1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.channelName, 0, v3, v4, v5, v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void SubBgmPlayer__SetChannelInfo(
        SubBgmPlayer_o *this,
        System_String_o *name,
        int32_t subBgmChannelId,
        const MethodInfo *method)
{
  struct System_String_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  this->fields.channelId = subBgmChannelId;
  v5 = SubBgmPlayArgsWithChannel__BuildChannelName(name, subBgmChannelId, *(const MethodInfo **)&subBgmChannelId);
  this->fields.channelName = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.channelName, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


bool SubBgmPlayer__StopBgm(SubBgmPlayer_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  bool v11; // w20

  v11 = BgmPlayerBase__StopBgm((BgmPlayerBase_o *)this, keepPlayArgs, method);
  if ( v11 && !keepPlayArgs )
  {
    this->fields.channelName = 0;
    this->fields.channelId = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.channelName, 0, v5, v6, v7, v8, v9, v10);
  }
  return v11;
}


int32_t SubBgmPlayer__get_ChannelId(SubBgmPlayer_o *this, const MethodInfo *method)
{
  return this->fields.channelId;
}


System_String_o *SubBgmPlayer__get_ChannelName(SubBgmPlayer_o *this, const MethodInfo *method)
{
  return this->fields.channelName;
}


bool SubBgmPlayer__get_HasChannel(SubBgmPlayer_o *this, const MethodInfo *method)
{
  return (this->fields.channelId & 0x80000000) == 0 && !System_String__IsNullOrEmpty(this->fields.channelName, 0);
}