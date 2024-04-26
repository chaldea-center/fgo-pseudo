void __fastcall JinglePlayer___ctor(JinglePlayer_o *this, const MethodInfo *method)
{
  BgmPlayerBase___ctor((BgmPlayerBase_o *)this, 0LL);
}


void __fastcall JinglePlayer__ExecuteCallback(JinglePlayer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_jingleCallbackFunc; // x0
  System_Action_o *jingleCallbackFunc; // t1

  jingleCallbackFunc = this->fields.jingleCallbackFunc;
  p_jingleCallbackFunc = (BattleServantConfConponent_o *)&this->fields.jingleCallbackFunc;
  p_jingleCallbackFunc->klass = 0LL;
  sub_B70630(p_jingleCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(jingleCallbackFunc, 0LL);
}


BgmPlayArgs_o *__fastcall JinglePlayer__ExportPlayArgs(JinglePlayer_o *this, const MethodInfo *method)
{
  return 0LL;
}


bool __fastcall JinglePlayer__FadeoutBgm(JinglePlayer_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_o *jingleCallbackFunc; // x20

  if ( !BgmPlayerBase__FadeoutBgm((BgmPlayerBase_o *)this, fadeoutTime, 0LL) )
    return 0;
  jingleCallbackFunc = this->fields.jingleCallbackFunc;
  this->fields.jingleCallbackFunc = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.jingleCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
  ActionExtensions__Call(jingleCallbackFunc, 0LL);
  return 1;
}


void __fastcall JinglePlayer__LateUpdate(JinglePlayer_o *this, const MethodInfo *method)
{
  BgmPlayerBase__LateUpdate((BgmPlayerBase_o *)this, 0LL);
  if ( this->fields.bgmName )
  {
    if ( !BgmPlayerBase__IsPlaying((BgmPlayerBase_o *)this, 0LL) )
      ((void (__fastcall *)(JinglePlayer_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._11_StopBgm.method)(
        this,
        0LL,
        this->klass->vtable._12_ExportPlayArgs.methodPtr);
  }
}


void __fastcall JinglePlayer__PlayBgm(
        JinglePlayer_o *this,
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  struct System_Action_o **p_jingleCallbackFunc; // x22
  System_Action_o *v14; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BgmManager_c *v21; // x0
  float v22; // s0

  if ( (byte_435117B & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_435117B = 1;
  }
  p_jingleCallbackFunc = &this->fields.jingleCallbackFunc;
  if ( this->fields.bgmName )
  {
    v14 = *p_jingleCallbackFunc;
    *p_jingleCallbackFunc = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.jingleCallbackFunc,
      0LL,
      (System_String_array **)callbackFunc,
      (System_String_array **)method,
      v5,
      v6,
      v7,
      v8);
    ActionExtensions__Call(v14, 0LL);
  }
  this->fields.bgmName = name;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)name,
    (System_String_array **)callbackFunc,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  this->fields.bgmVolume = volume;
  this->fields.jingleCallbackFunc = callbackFunc;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.jingleCallbackFunc,
    (System_Int32_array **)callbackFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_434F26C )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_434F26C = 1;
  }
  v21 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v21 = BgmManager_TypeInfo;
  }
  v22 = 0.0;
  if ( !v21->static_fields->isMute )
    v22 = volume;
  BgmPlayerBase__PlayLocal((BgmPlayerBase_o *)this, name, v22, -1.0, 0, 0LL);
}


void __fastcall JinglePlayer__Reset(JinglePlayer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *jingleCallbackFunc; // x20

  if ( this->fields.bgmName )
  {
    jingleCallbackFunc = this->fields.jingleCallbackFunc;
    this->fields.jingleCallbackFunc = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.jingleCallbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ActionExtensions__Call(jingleCallbackFunc, 0LL);
  }
  BgmPlayerBase__Reset((BgmPlayerBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall JinglePlayer__SetMute(JinglePlayer_o *this, bool isMute, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x0
  float v6; // s0
  struct CriAtomSource_o *v7; // x19
  float bgmVolume; // s8
  float *monitor; // x8

  if ( (byte_435117C & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_435117C = 1;
  }
  if ( isMute )
  {
    bgmPlayer = this->fields.bgmPlayer;
    if ( bgmPlayer )
    {
      v6 = 0.0;
LABEL_18:
      CriAtomSource__set_volume(bgmPlayer, v6, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0 )
  {
    v7 = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_434E401 )
    {
      sub_B70694(&BgmManager_TypeInfo);
      byte_434E401 = 1;
    }
    bgmPlayer = (CriAtomSource_o *)BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      bgmPlayer = (CriAtomSource_o *)BgmManager_TypeInfo;
    }
    if ( v7 )
    {
      monitor = (float *)bgmPlayer[1].monitor;
      bgmPlayer = v7;
      v6 = bgmVolume * monitor[8];
      goto LABEL_18;
    }
LABEL_20:
    sub_B7076C(bgmPlayer, isMute);
  }
}


bool __fastcall JinglePlayer__StopBgm(JinglePlayer_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_o *jingleCallbackFunc; // x20

  if ( !BgmPlayerBase__StopBgm((BgmPlayerBase_o *)this, keepPlayArgs, 0LL) )
    return 0;
  jingleCallbackFunc = this->fields.jingleCallbackFunc;
  this->fields.jingleCallbackFunc = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.jingleCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
  ActionExtensions__Call(jingleCallbackFunc, 0LL);
  return 1;
}