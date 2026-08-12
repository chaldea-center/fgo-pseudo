void VoiceEffectSelectDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596C2AE & 1) == 0 )
  {
    sub_2213A60(&VoiceEffectSelectDialog_TypeInfo);
    sub_2213A60(&StringLiteral_13135/*"SaveKeyVoiceEffectBattleVoiceEffect"*/);
    byte_596C2AE = 1;
  }
  v7 = StringLiteral_13135/*"SaveKeyVoiceEffectBattleVoiceEffect"*/;
  VoiceEffectSelectDialog_TypeInfo->static_fields->SaveKeyVoiceEffectBattleVoiceEffect = (struct System_String_o *)StringLiteral_13135/*"SaveKeyVoiceEffectBattleVoiceEffect"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)VoiceEffectSelectDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void VoiceEffectSelectDialog___ctor(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C2AD & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C2AD = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void VoiceEffectSelectDialog__Awake(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void VoiceEffectSelectDialog__Callback(VoiceEffectSelectDialog_o *this, int32_t result, const MethodInfo *method)
{
  VoiceEffectSelectDialog_c *v5; // x0
  struct VoiceEffectSelectDialog_CallbackFunc_o *CallbackFunction; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596C2A9 & 1) == 0 )
  {
    sub_2213A60(&VoiceEffectSelectDialog_TypeInfo);
    byte_596C2A9 = 1;
  }
  v5 = VoiceEffectSelectDialog_TypeInfo;
  if ( !*(&VoiceEffectSelectDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(VoiceEffectSelectDialog_TypeInfo, *(_QWORD *)&result, method);
    v5 = VoiceEffectSelectDialog_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    v5->static_fields->SaveKeyVoiceEffectBattleVoiceEffect,
    this->fields.isVoiceEffectOn,
    0);
  UnityEngine_PlayerPrefs__Save(0);
  CallbackFunction = this->fields.CallbackFunction;
  this->fields.CallbackFunction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunction, 0, v7, v8, v9, v10, v11, v12);
  if ( CallbackFunction )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CallbackFunction->fields.invoke_impl)(
      CallbackFunction->fields.method_code,
      (unsigned int)result,
      CallbackFunction->fields.method);
}


void VoiceEffectSelectDialog__Close(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596C2A8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_VoiceEffectSelectDialog_Init__);
    byte_596C2A8 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_VoiceEffectSelectDialog_Init__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v4, 0);
}


void VoiceEffectSelectDialog__Init(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void VoiceEffectSelectDialog__OnClickBattleStart(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C2AB & 1) == 0 )
  {
    sub_2213A60(&Method_VoiceEffectSelectDialog_OnClickBattleStart__);
    byte_596C2AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_VoiceEffectSelectDialog_OnClickBattleStart__;
    if ( (*((_BYTE *)Method_VoiceEffectSelectDialog_OnClickBattleStart__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_VoiceEffectSelectDialog_OnClickBattleStart__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    VoiceEffectSelectDialog__Callback(this, 1, v5);
  }
}


void VoiceEffectSelectDialog__OnClickOnOffSwitch(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596C2AC & 1) == 0 )
  {
    sub_2213A60(&Method_VoiceEffectSelectDialog_OnClickOnOffSwitch__);
    byte_596C2AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_VoiceEffectSelectDialog_OnClickOnOffSwitch__;
    if ( (*((_BYTE *)Method_VoiceEffectSelectDialog_OnClickOnOffSwitch__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_VoiceEffectSelectDialog_OnClickOnOffSwitch__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.isVoiceEffectOn ^= 1u;
    VoiceEffectSelectDialog__SetOnOffSwitchSprite(this, v5);
  }
}


void VoiceEffectSelectDialog__OnClickReturn(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C2AA & 1) == 0 )
  {
    sub_2213A60(&Method_VoiceEffectSelectDialog_OnClickReturn__);
    byte_596C2AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_VoiceEffectSelectDialog_OnClickReturn__;
    if ( (*((_BYTE *)Method_VoiceEffectSelectDialog_OnClickReturn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_VoiceEffectSelectDialog_OnClickReturn__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    VoiceEffectSelectDialog__Callback(this, 0, v5);
  }
}


void VoiceEffectSelectDialog__Open(
        VoiceEffectSelectDialog_o *this,
        VoiceEffectSelectDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  VoiceEffectSelectDialog_c *v15; // x0
  const MethodInfo *v16; // x1
  System_Action_o *v17; // x20

  if ( (byte_596C2A6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_VoiceEffectSelectDialog__Open_b__13_0__);
    sub_2213A60(&VoiceEffectSelectDialog_TypeInfo);
    byte_596C2A6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.state = 1;
  this->fields.CallbackFunction = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunction,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v15 = VoiceEffectSelectDialog_TypeInfo;
  if ( !*(&VoiceEffectSelectDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(VoiceEffectSelectDialog_TypeInfo, v13, v14);
    v15 = VoiceEffectSelectDialog_TypeInfo;
  }
  this->fields.isVoiceEffectOn = UnityEngine_PlayerPrefs__GetInt(
                                   v15->static_fields->SaveKeyVoiceEffectBattleVoiceEffect,
                                   1,
                                   0) == 1;
  VoiceEffectSelectDialog__SetOnOffSwitchSprite(this, v16);
  AndroidBackKeyManager__AddBackBtn(this->fields.returnBtn, 0);
  v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_VoiceEffectSelectDialog__Open_b__13_0__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v17, 0, 0);
}


void VoiceEffectSelectDialog__SetOnOffSwitchSprite(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  UISprite_o *onOffSwitchSprite; // x0
  __int64 *v4; // x8

  if ( (byte_596C2A7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_596C2A7 = 1;
  }
  onOffSwitchSprite = this->fields.onOffSwitchSprite;
  if ( !onOffSwitchSprite )
    sub_2213CDC(0, method);
  v4 = &StringLiteral_18274/*"btn_off"*/;
  if ( this->fields.isVoiceEffectOn )
    v4 = &StringLiteral_18275/*"btn_on"*/;
  UISprite__set_spriteName(onOffSwitchSprite, (System_String_o *)*v4, 0);
}


void VoiceEffectSelectDialog___Open_b__13_0(VoiceEffectSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void VoiceEffectSelectDialog__add_CallbackFunction(
        VoiceEffectSelectDialog_o *this,
        VoiceEffectSelectDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct VoiceEffectSelectDialog_CallbackFunc_o **p_CallbackFunction; // x20
  System_Delegate_o *v6; // x21
  struct VoiceEffectSelectDialog_CallbackFunc_o *CallbackFunction; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  VoiceEffectSelectDialog_o *v13; // x0
  VoiceEffectSelectDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C2A4 & 1) == 0 )
  {
    sub_2213A60(&VoiceEffectSelectDialog_CallbackFunc_TypeInfo);
    byte_596C2A4 = 1;
  }
  CallbackFunction = this->fields.CallbackFunction;
  p_CallbackFunction = &this->fields.CallbackFunction;
  v6 = (System_Delegate_o *)CallbackFunction;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (VoiceEffectSelectDialog_CallbackFunc_c *)v8->klass != VoiceEffectSelectDialog_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CallbackFunction, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (VoiceEffectSelectDialog_o *)sub_221405C(v8, VoiceEffectSelectDialog_CallbackFunc_TypeInfo, v9, v10);
  VoiceEffectSelectDialog__remove_CallbackFunction(v13, v14, v15);
}


void VoiceEffectSelectDialog__remove_CallbackFunction(
        VoiceEffectSelectDialog_o *this,
        VoiceEffectSelectDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct VoiceEffectSelectDialog_CallbackFunc_o **p_CallbackFunction; // x20
  System_Delegate_o *v6; // x21
  struct VoiceEffectSelectDialog_CallbackFunc_o *CallbackFunction; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  VoiceEffectSelectDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C2A5 & 1) == 0 )
  {
    sub_2213A60(&VoiceEffectSelectDialog_CallbackFunc_TypeInfo);
    byte_596C2A5 = 1;
  }
  CallbackFunction = this->fields.CallbackFunction;
  p_CallbackFunction = &this->fields.CallbackFunction;
  v6 = (System_Delegate_o *)CallbackFunction;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (VoiceEffectSelectDialog_CallbackFunc_c *)v8->klass != VoiceEffectSelectDialog_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CallbackFunction, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (VoiceEffectSelectDialog_o *)sub_221405C(v8, VoiceEffectSelectDialog_CallbackFunc_TypeInfo, v9, v10);
  VoiceEffectSelectDialog__Awake(v13, v14);
}


void VoiceEffectSelectDialog_CallbackFunc___ctor(
        VoiceEffectSelectDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2004D90;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2004D48;
}


System_IAsyncResult_o *VoiceEffectSelectDialog_CallbackFunc__BeginInvoke(
        VoiceEffectSelectDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_596C2AF & 1) == 0 )
  {
    sub_2213A60(&VoiceEffectSelectDialog_ResultKind_TypeInfo);
    byte_596C2AF = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(VoiceEffectSelectDialog_ResultKind_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void VoiceEffectSelectDialog_CallbackFunc__EndInvoke(
        VoiceEffectSelectDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void VoiceEffectSelectDialog_CallbackFunc__Invoke(
        VoiceEffectSelectDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}