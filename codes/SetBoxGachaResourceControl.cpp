void SetBoxGachaResourceControl___ctor(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetBoxGachaResourceControl__ClickMultiGacha(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  SetBoxGachaResourceControl__ExeGacha(this, this->fields.gachaTime, 0, v2);
}


void SetBoxGachaResourceControl__ClickOneGacha(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  SetBoxGachaResourceControl__ExeGacha(this, 1, 0, v2);
}


void SetBoxGachaResourceControl__ExeGacha(
        SetBoxGachaResourceControl_o *this,
        int32_t time,
        bool isLongPress,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct SetBoxGachaResourceControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_5932809 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetBoxGachaResourceControl_ExeGacha__);
    byte_5932809 = 1;
  }
  v7 = Method_SetBoxGachaResourceControl_ExeGacha__;
  if ( (*((_BYTE *)Method_SetBoxGachaResourceControl_ExeGacha__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_21FFC68(Method_SetBoxGachaResourceControl_ExeGacha__);
  v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, bool, intptr_t))clickCallbackFunc->fields.invoke_impl)(
      clickCallbackFunc->fields.method_code,
      (unsigned int)time,
      isLongPress,
      clickCallbackFunc->fields.method);
}


void SetBoxGachaResourceControl__LongPressMultiGacha(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *multiGachaBtn; // x0
  const MethodInfo *v4; // x3

  multiGachaBtn = this->fields.multiGachaBtn;
  if ( !multiGachaBtn )
    sub_21FFECC(0, method);
  if ( (((__int64 (__fastcall *)(struct UICommonButton_o *, const MethodInfo *))multiGachaBtn->klass->vtable._4_get_isEnabled.methodPtr)(
          multiGachaBtn,
          multiGachaBtn->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
    SetBoxGachaResourceControl__ExeGacha(this, this->fields.gachaTime, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
void SetBoxGachaResourceControl__SetLimitReset(
        SetBoxGachaResourceControl_o *this,
        bool isReset,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *oneBoxGachaBtn; // x0
  unsigned int v6; // w21
  struct UICommonButton_o *v7; // x8
  unsigned __int128 v8; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_593280A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_434/*"#4C4C4C"*/);
    byte_593280A = 1;
  }
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
  v8 = 0u;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, const char *))oneBoxGachaBtn->klass[1]._1.name)(
    oneBoxGachaBtn,
    isReset,
    oneBoxGachaBtn->klass[1]._1.namespaze);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  v6 = isReset ? 0 : 3;
  UnityEngine_Behaviour__set_enabled(oneBoxGachaBtn, isReset, 0);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                (System_String_o *)StringLiteral_434/*"#4C4C4C"*/,
                                                (UnityEngine_Color_o *)&v8,
                                                0);
  v7 = this->fields.oneBoxGachaBtn;
  if ( !v7 )
    goto LABEL_18;
  v7->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v8;
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))oneBoxGachaBtn->klass[1]._1.nestedTypes)(
    oneBoxGachaBtn,
    v6,
    0,
    oneBoxGachaBtn->klass[1]._1.implementedInterfaces);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiOneBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, const char *))oneBoxGachaBtn->klass[1]._1.name)(
    oneBoxGachaBtn,
    isReset,
    oneBoxGachaBtn->klass[1]._1.namespaze);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiOneBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled(oneBoxGachaBtn, isReset, 0);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiOneBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))oneBoxGachaBtn->klass[1]._1.nestedTypes)(
    oneBoxGachaBtn,
    v6,
    0,
    oneBoxGachaBtn->klass[1]._1.implementedInterfaces);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiGachaBtn;
  if ( !oneBoxGachaBtn
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, const char *))oneBoxGachaBtn->klass[1]._1.name)(
          oneBoxGachaBtn,
          isReset,
          oneBoxGachaBtn->klass[1]._1.namespaze),
        (oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiGachaBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled(oneBoxGachaBtn, isReset, 0),
        (oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiGachaBtn) == 0)
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppClass **))oneBoxGachaBtn->klass[1]._1.nestedTypes)(
          oneBoxGachaBtn,
          v6,
          0,
          oneBoxGachaBtn->klass[1]._1.implementedInterfaces),
        (oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.boxGachaDetailBtn) == 0) )
  {
LABEL_18:
    sub_21FFECC(oneBoxGachaBtn, isReset);
  }
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, const char *))oneBoxGachaBtn->klass[1]._1.name)(
    oneBoxGachaBtn,
    isReset,
    oneBoxGachaBtn->klass[1]._1.namespaze);
}


void SetBoxGachaResourceControl__init(
        SetBoxGachaResourceControl_o *this,
        BoxGachaEntity_o *boxGachaEnt,
        const MethodInfo *method)
{
  SetBoxGachaResourceControl_o *v3; // x19
  __int64 v4; // d0

  this->fields.gachaTime = 10;
  if ( !boxGachaEnt )
    goto LABEL_7;
  v3 = this;
  v4 = *(_QWORD *)&boxGachaEnt->fields.payTargetId;
  this = (SetBoxGachaResourceControl_o *)this->fields.eventBoxGachaItemInfo;
  *(_QWORD *)&v3->fields.itemId = v4;
  if ( !this
    || (EventItemComponent__Set((EventItemComponent_o *)this, v4, 0),
        (this = (SetBoxGachaResourceControl_o *)v3->fields.oneBoxGachaInfo) == 0)
    || (BoxGachaItemComponent__Set((BoxGachaItemComponent_o *)this, v3->fields.itemId, v3->fields.payValue, 0),
        (this = (SetBoxGachaResourceControl_o *)v3->fields.singleBoxGachaInfo) == 0)
    || (BoxGachaItemComponent__Set((BoxGachaItemComponent_o *)this, v3->fields.itemId, v3->fields.payValue, 0),
        (this = (SetBoxGachaResourceControl_o *)v3->fields.multiBoxGachaInfo) == 0) )
  {
LABEL_7:
    sub_21FFECC(this, boxGachaEnt);
  }
  BoxGachaItemComponent__Set(
    (BoxGachaItemComponent_o *)this,
    v3->fields.itemId,
    v3->fields.payValue * v3->fields.gachaTime,
    0);
}


void SetBoxGachaResourceControl__setBoxGachaItemInfo(
        SetBoxGachaResourceControl_o *this,
        int32_t canDrawNum,
        SetBoxGachaResourceControl_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  UnityEngine_GameObject_o *oneBoxGachaObj; // x0
  int32_t gachaTime; // w20
  __int64 v14; // x1
  __int64 v15; // x2
  UISprite_o *multiPoint1DigitNumImg; // x21
  UISprite_o *multiPoint2DigitNumImg; // x22
  int32_t v18; // w20
  UISprite_o *multiPoint3DigitNumImg; // x19

  if ( (byte_5932808 & 1) == 0 )
  {
    sub_21FFC50(&BoxGachaUtility_TypeInfo);
    byte_5932808 = 1;
  }
  this->fields.clickCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  oneBoxGachaObj = this->fields.oneBoxGachaObj;
  this->fields.gachaTime = canDrawNum;
  if ( !oneBoxGachaObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 0, 0);
  oneBoxGachaObj = this->fields.multiBoxGachaObj;
  if ( !oneBoxGachaObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 0, 0);
  if ( canDrawNum < 2 )
  {
    oneBoxGachaObj = this->fields.oneBoxGachaObj;
    if ( oneBoxGachaObj )
    {
      UnityEngine_GameObject__SetActive(oneBoxGachaObj, 1, 0);
      oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.oneBoxGachaBtn;
      if ( oneBoxGachaObj )
      {
        gachaTime = this->fields.gachaTime;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, const char *))oneBoxGachaObj->klass[1]._1.name)(
          oneBoxGachaObj,
          gachaTime > 0,
          oneBoxGachaObj->klass[1]._1.namespaze);
        oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.oneBoxGachaBtn;
        if ( oneBoxGachaObj )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)oneBoxGachaObj, gachaTime > 0, 0);
          oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.oneBoxGachaBtn;
          if ( oneBoxGachaObj )
          {
            ((void (*)(void))oneBoxGachaObj->klass[1]._1.nestedTypes)();
            return;
          }
        }
      }
    }
LABEL_16:
    sub_21FFECC(oneBoxGachaObj, v11);
  }
  oneBoxGachaObj = this->fields.multiBoxGachaObj;
  if ( !oneBoxGachaObj )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 1, 0);
  oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.multiBoxGachaInfo;
  if ( !oneBoxGachaObj )
    goto LABEL_16;
  BoxGachaItemComponent__Set(
    (BoxGachaItemComponent_o *)oneBoxGachaObj,
    this->fields.itemId,
    this->fields.payValue * this->fields.gachaTime,
    0);
  multiPoint1DigitNumImg = this->fields.multiPoint1DigitNumImg;
  multiPoint2DigitNumImg = this->fields.multiPoint2DigitNumImg;
  v18 = this->fields.gachaTime;
  multiPoint3DigitNumImg = this->fields.multiPoint3DigitNumImg;
  if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v14, v15);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v18,
    multiPoint1DigitNumImg,
    multiPoint2DigitNumImg,
    multiPoint3DigitNumImg,
    0);
}


void SetBoxGachaResourceControl_ClickDelegate___ctor(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FED1D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FED178;
}


System_IAsyncResult_o *SetBoxGachaResourceControl_ClickDelegate__BeginInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        bool isLongPress,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF
  bool v11[4]; // [xsp+28h] [xbp-28h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v11[0] = isLongPress;
  v12 = gachaTime;
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(qword_594C070, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C050, v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void SetBoxGachaResourceControl_ClickDelegate__EndInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void SetBoxGachaResourceControl_ClickDelegate__Invoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        bool isLongPress,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    gachaTime,
    isLongPress,
    this->fields.method);
}