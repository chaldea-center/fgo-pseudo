void JinglePlayer___ctor(JinglePlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void JinglePlayer__ExecuteCallback(JinglePlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_jingleCallbackFunc; // x0
  System_Action_o *jingleCallbackFunc; // t1

  jingleCallbackFunc = this->fields.jingleCallbackFunc;
  p_jingleCallbackFunc = (CGThumbnailListItem_o *)&this->fields.jingleCallbackFunc;
  p_jingleCallbackFunc->klass = 0;
  sub_1C2D434(p_jingleCallbackFunc, 0, v2, v3);
  ActionExtensions__Call(jingleCallbackFunc, 0);
}


BgmPlayArgs_o *JinglePlayer__ExportPlayArgs(JinglePlayer_o *this, const MethodInfo *method)
{
  return 0;
}


bool JinglePlayer__FadeoutBgm(JinglePlayer_o *this, float fadeoutTime, const MethodInfo *method)
{
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  bool v6; // w19
  System_Action_o *jingleCallbackFunc; // x21

  v6 = BgmPlayerBase__FadeoutBgm((BgmPlayerBase_o *)this, fadeoutTime, method);
  if ( v6 )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.jingleCallbackFunc, 0, v4, v5);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  return v6;
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
  System_Action_o *jingleCallbackFunc; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  BgmManager_c *v13; // x0
  float v14; // s0

  if ( (byte_4C2693C & 1) == 0 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    byte_4C2693C = 1;
  }
  if ( this->fields.bgmName )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.jingleCallbackFunc, 0, (int32_t)callbackFunc, method);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  this->fields.bgmName = name;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bgmName, (int32_t)name, (int32_t)callbackFunc, method);
  this->fields.jingleCallbackFunc = callbackFunc;
  this->fields.bgmVolume = volume;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.jingleCallbackFunc, (int32_t)callbackFunc, v10, v11);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4C24714 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    byte_4C24714 = 1;
  }
  v13 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v13 = BgmManager_TypeInfo;
  }
  v14 = 0.0;
  if ( !v13->static_fields->isMute )
    v14 = volume;
  BgmPlayerBase__PlayLocal((BgmPlayerBase_o *)this, name, v14, -1.0, 0, v12);
}


void JinglePlayer__Reset(JinglePlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *jingleCallbackFunc; // x20

  if ( this->fields.bgmName )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.jingleCallbackFunc, 0, v2, v3);
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

  if ( (byte_4C2693D & 1) == 0 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    byte_4C2693D = 1;
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
    if ( !byte_4C22146 )
    {
      sub_1C2D490(&BgmManager_TypeInfo);
      byte_4C22146 = 1;
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
    sub_1C2D6EC(bgmPlayer, isMute);
  }
}


bool JinglePlayer__StopBgm(JinglePlayer_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  bool v6; // w19
  System_Action_o *jingleCallbackFunc; // x21

  v6 = BgmPlayerBase__StopBgm((BgmPlayerBase_o *)this, keepPlayArgs, method);
  if ( v6 )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.jingleCallbackFunc, 0, v4, v5);
    ActionExtensions__Call(jingleCallbackFunc, 0);
  }
  return v6;
}