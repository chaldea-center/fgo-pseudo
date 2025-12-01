void JinglePlayer___ctor(JinglePlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void JinglePlayer__ExecuteCallback(JinglePlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_jingleCallbackFunc; // x0
  System_Action_o *jingleCallbackFunc; // t1

  jingleCallbackFunc = this->fields.jingleCallbackFunc;
  p_jingleCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.jingleCallbackFunc;
  p_jingleCallbackFunc->klass = 0;
  sub_1C71354(p_jingleCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(jingleCallbackFunc, 0);
}


BgmPlayArgs_o *JinglePlayer__ExportPlayArgs(JinglePlayer_o *this, const MethodInfo *method)
{
  return 0;
}


bool JinglePlayer__FadeoutBgm(JinglePlayer_o *this, float fadeoutTime, const MethodInfo *method)
{
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  bool v10; // w19
  System_Action_o *jingleCallbackFunc; // x21

  v10 = BgmPlayerBase__FadeoutBgm((BgmPlayerBase_o *)this, fadeoutTime, method);
  if ( v10 )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.jingleCallbackFunc, 0, v4, v5, v6, v7, v8, v9);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  return v10;
}


void JinglePlayer__FixedUpdate(JinglePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BgmPlayerBase__FixedUpdate((BgmPlayerBase_o *)this, method);
  if ( this->fields.bgmName )
  {
    if ( !BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)this, v3) )
      ((void (__fastcall *)(JinglePlayer_o *, _QWORD, const MethodInfo *))this->klass->vtable._11_StopBgm.methodPtr)(
        this,
        0,
        this->klass->vtable._11_StopBgm.method);
  }
}


void JinglePlayer__PlayBgm(
        JinglePlayer_o *this,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  System_Action_o *jingleCallbackFunc; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x3
  BgmManager_c *v21; // x0
  float v22; // s0

  if ( (byte_4CC6A34 & 1) == 0 )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    byte_4CC6A34 = 1;
  }
  if ( this->fields.bgmName )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.jingleCallbackFunc,
      0,
      (int32_t)callbackFunc,
      (int32_t)method,
      v5,
      v6,
      v7,
      v8);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  this->fields.bgmName = name;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.bgmName,
    (int32_t)name,
    (int32_t)callbackFunc,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.jingleCallbackFunc = callbackFunc;
  this->fields.bgmVolume = volume;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.jingleCallbackFunc,
    (int32_t)callbackFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4CC47D9 )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    byte_4CC47D9 = 1;
  }
  v21 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v21 = BgmManager_TypeInfo;
  }
  v22 = 0.0;
  if ( !v21->static_fields->isMute )
    v22 = volume;
  BgmPlayerBase__PlayLocal((BgmPlayerBase_o *)this, name, v22, -1.0, 0, v20);
}


void JinglePlayer__Reset(JinglePlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *jingleCallbackFunc; // x20

  if ( this->fields.bgmName )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.jingleCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  BgmPlayerBase__Reset((BgmPlayerBase_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void JinglePlayer__SetMute(JinglePlayer_o *this, bool isMute, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x0
  float v6; // s0
  struct CriAtomSource_o *v7; // x19
  float bgmVolume; // s8
  CriAtomSource_c *klass; // x8

  if ( (byte_4CC6A35 & 1) == 0 )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    byte_4CC6A35 = 1;
  }
  if ( isMute )
  {
    bgmPlayer = this->fields.bgmPlayer;
    if ( bgmPlayer )
    {
      v6 = 0.0;
LABEL_16:
      CriAtomSource__set_volume(bgmPlayer, v6, 0);
      return;
    }
    goto LABEL_18;
  }
  if ( this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0 )
  {
    v7 = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4CC21CB )
    {
      sub_1C713B0(&BgmManager_TypeInfo);
      byte_4CC21CB = 1;
    }
    bgmPlayer = (CriAtomSource_o *)BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      bgmPlayer = (CriAtomSource_o *)BgmManager_TypeInfo;
    }
    if ( v7 )
    {
      klass = bgmPlayer[1].klass;
      bgmPlayer = v7;
      v6 = bgmVolume * *((float *)&klass->_1.byval_arg.data + 1);
      goto LABEL_16;
    }
LABEL_18:
    sub_1C71608(bgmPlayer, isMute);
  }
}


bool JinglePlayer__StopBgm(JinglePlayer_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  bool v10; // w19
  System_Action_o *jingleCallbackFunc; // x21

  v10 = BgmPlayerBase__StopBgm((BgmPlayerBase_o *)this, keepPlayArgs, method);
  if ( v10 )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.jingleCallbackFunc, 0, v4, v5, v6, v7, v8, v9);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  return v10;
}