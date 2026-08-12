void JinglePlayer___ctor(JinglePlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void JinglePlayer__ExecuteCallback(JinglePlayer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_jingleCallbackFunc; // x0
  System_Action_o *jingleCallbackFunc; // t1

  jingleCallbackFunc = this->fields.jingleCallbackFunc;
  p_jingleCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.jingleCallbackFunc;
  p_jingleCallbackFunc->klass = 0;
  sub_2213A04(p_jingleCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(jingleCallbackFunc, 0);
}


BgmPlayArgs_o *JinglePlayer__ExportPlayArgs(JinglePlayer_o *this, const MethodInfo *method)
{
  return 0;
}


bool JinglePlayer__FadeoutBgm(JinglePlayer_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  bool v10; // w19
  System_Action_o *jingleCallbackFunc; // x21

  v10 = BgmPlayerBase__FadeoutBgm((BgmPlayerBase_o *)this, fadeoutTime, method);
  if ( v10 )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jingleCallbackFunc, 0, v4, v5, v6, v7, v8, v9);
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
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_Action_o *jingleCallbackFunc; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  BgmManager_c *v22; // x0
  float v23; // s0

  if ( (byte_596FE1E & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596FE1E = 1;
  }
  if ( this->fields.bgmName )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.jingleCallbackFunc,
      0,
      (System_String_o *)callbackFunc,
      (System_String_o *)method,
      v5,
      v6,
      v7,
      v8);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  this->fields.bgmName = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bgmName,
    (int32_t)name,
    (System_String_o *)callbackFunc,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.jingleCallbackFunc = callbackFunc;
  this->fields.bgmVolume = volume;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.jingleCallbackFunc,
    (int32_t)callbackFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v20);
  if ( !byte_596DB2C )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596DB2C = 1;
  }
  v22 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v20);
    v22 = BgmManager_TypeInfo;
  }
  v23 = 0.0;
  if ( !v22->static_fields->isMute )
    v23 = volume;
  BgmPlayerBase__PlayLocal((BgmPlayerBase_o *)this, name, v23, -1.0, 0, v21);
}


void JinglePlayer__Reset(JinglePlayer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *jingleCallbackFunc; // x20

  if ( this->fields.bgmName )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jingleCallbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_596FE1F & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596FE1F = 1;
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
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, isMute);
    if ( !byte_596B2FF )
    {
      sub_2213A60(&BgmManager_TypeInfo);
      byte_596B2FF = 1;
    }
    bgmPlayer = (CriAtomSource_o *)BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, isMute);
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
    sub_2213CDC(bgmPlayer, isMute);
  }
}


bool JinglePlayer__StopBgm(JinglePlayer_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  bool v10; // w19
  System_Action_o *jingleCallbackFunc; // x21

  v10 = BgmPlayerBase__StopBgm((BgmPlayerBase_o *)this, keepPlayArgs, method);
  if ( v10 )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jingleCallbackFunc, 0, v4, v5, v6, v7, v8, v9);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  return v10;
}