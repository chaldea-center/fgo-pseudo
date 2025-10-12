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

  if ( (byte_4C31F3F & 1) == 0 )
  {
    sub_1C32C20(&Method_SetBoxGachaResourceControl_ExeGacha__);
    byte_4C31F3F = 1;
  }
  v7 = Method_SetBoxGachaResourceControl_ExeGacha__;
  if ( (*((_BYTE *)Method_SetBoxGachaResourceControl_ExeGacha__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C32C38(Method_SetBoxGachaResourceControl_ExeGacha__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
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
    sub_1C32E7C(0);
  if ( (((__int64 (__fastcall *)(struct UICommonButton_o *, const MethodInfo *))multiGachaBtn->klass->vtable._4_get_isEnabled.methodPtr)(
          multiGachaBtn,
          multiGachaBtn->klass->vtable._4_get_isEnabled.method)
      & 1) != 0 )
    SetBoxGachaResourceControl__ExeGacha(this, this->fields.gachaTime, 1, v4);
}


void SetBoxGachaResourceControl__SetLimitReset(
        SetBoxGachaResourceControl_o *this,
        bool isReset,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *oneBoxGachaBtn; // x0
  unsigned int v6; // w21
  struct UICommonButton_o *v7; // x8
  unsigned __int128 v8; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4C31F40 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_409/*"#4C4C4C"*/);
    byte_4C31F40 = 1;
  }
  v8 = 0u;
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
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
                                                (System_String_o *)StringLiteral_409/*"#4C4C4C"*/,
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
    sub_1C32E7C(oneBoxGachaBtn);
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
    sub_1C32E7C(this);
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
  UnityEngine_GameObject_o *oneBoxGachaObj; // x0
  int32_t gachaTime; // w20
  __int64 v9; // x1
  int32_t v10; // w22
  UISprite_o *multiPoint2DigitNumImg; // x20
  UISprite_o *multiPoint1DigitNumImg; // x21
  UISprite_o *multiPoint3DigitNumImg; // x19

  if ( (byte_4C31F3E & 1) == 0 )
  {
    sub_1C32C20(&BoxGachaUtility_TypeInfo);
    byte_4C31F3E = 1;
  }
  this->fields.clickCallbackFunc = callback;
  sub_1C32BC4(&this->fields.clickCallbackFunc, callback);
  oneBoxGachaObj = this->fields.oneBoxGachaObj;
  this->fields.gachaTime = canDrawNum;
  if ( !oneBoxGachaObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 0, 0);
  oneBoxGachaObj = this->fields.multiBoxGachaObj;
  if ( !oneBoxGachaObj )
    goto LABEL_19;
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
            if ( gachaTime <= 0 )
              v9 = 3;
            else
              v9 = 0;
            ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppClass **))oneBoxGachaObj->klass[1]._1.nestedTypes)(
              oneBoxGachaObj,
              v9,
              0,
              oneBoxGachaObj->klass[1]._1.implementedInterfaces);
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1C32E7C(oneBoxGachaObj);
  }
  oneBoxGachaObj = this->fields.multiBoxGachaObj;
  if ( !oneBoxGachaObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 1, 0);
  oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.multiBoxGachaInfo;
  if ( !oneBoxGachaObj )
    goto LABEL_19;
  BoxGachaItemComponent__Set(
    (BoxGachaItemComponent_o *)oneBoxGachaObj,
    this->fields.itemId,
    this->fields.payValue * this->fields.gachaTime,
    0);
  v10 = this->fields.gachaTime;
  multiPoint1DigitNumImg = this->fields.multiPoint1DigitNumImg;
  multiPoint2DigitNumImg = this->fields.multiPoint2DigitNumImg;
  multiPoint3DigitNumImg = this->fields.multiPoint3DigitNumImg;
  if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v10,
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6ED30;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6ECD8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *SetBoxGachaResourceControl_ClickDelegate__BeginInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        bool isLongPress,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v19[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v20 = gachaTime;
  v19[0] = isLongPress;
  if ( (byte_4C31F41 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    byte_4C31F41 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(int_TypeInfo, &v20, isLongPress, callback, object, method, v6, v7);
  v18[1] = j_il2cpp_value_box_0(bool_TypeInfo, v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v18, callback, object);
}


void SetBoxGachaResourceControl_ClickDelegate__EndInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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