void __fastcall SetBoxGachaResourceControl___ctor(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetBoxGachaResourceControl__ClickMultiGacha(
        SetBoxGachaResourceControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  SetBoxGachaResourceControl__ExeGacha(this, this->fields.gachaTime, 0, v2);
}


void __fastcall SetBoxGachaResourceControl__ClickOneGacha(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  SetBoxGachaResourceControl__ExeGacha(this, 1, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetBoxGachaResourceControl__ExeGacha(
        SetBoxGachaResourceControl_o *this,
        int32_t time,
        bool isLongPress,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct SetBoxGachaResourceControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4B6AD54 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SetBoxGachaResourceControl_ExeGacha__, *(_QWORD *)&time);
    byte_4B6AD54 = 1;
  }
  v7 = Method_SetBoxGachaResourceControl_ExeGacha__;
  if ( (*((_BYTE *)Method_SetBoxGachaResourceControl_ExeGacha__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BE4AE4(Method_SetBoxGachaResourceControl_ExeGacha__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, bool, _QWORD))clickCallbackFunc->fields.m_target)(
      clickCallbackFunc->fields.original_method_info,
      (unsigned int)time,
      isLongPress,
      *(_QWORD *)&clickCallbackFunc->fields.extra_arg);
}


void __fastcall SetBoxGachaResourceControl__LongPressMultiGacha(
        SetBoxGachaResourceControl_o *this,
        const MethodInfo *method)
{
  struct UICommonButton_o *multiGachaBtn; // x0
  const MethodInfo *v4; // x3

  multiGachaBtn = this->fields.multiGachaBtn;
  if ( !multiGachaBtn )
    sub_1BE4D28(0LL, method);
  if ( (((__int64 (__fastcall *)(struct UICommonButton_o *, Il2CppMethodPointer))multiGachaBtn->klass->vtable._4_get_isEnabled.method)(
          multiGachaBtn,
          multiGachaBtn->klass->vtable._5_set_isEnabled.methodPtr) & 1) != 0 )
    SetBoxGachaResourceControl__ExeGacha(this, this->fields.gachaTime, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetBoxGachaResourceControl__SetLimitReset(
        SetBoxGachaResourceControl_o *this,
        bool isReset,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *oneBoxGachaBtn; // x0
  unsigned int v6; // w21
  struct UICommonButton_o *v7; // x8
  unsigned __int128 v8; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B6AD55 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_436/*"#4C4C4C"*/, isReset);
    byte_4B6AD55 = 1;
  }
  v8 = 0uLL;
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, void *))oneBoxGachaBtn->klass[1]._1.namespaze)(
    oneBoxGachaBtn,
    isReset,
    oneBoxGachaBtn->klass[1]._1.byval_arg.data);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  v6 = isReset ? 0 : 3;
  UnityEngine_Behaviour__set_enabled(oneBoxGachaBtn, isReset, 0LL);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                                (System_String_o *)StringLiteral_436/*"#4C4C4C"*/,
                                                (UnityEngine_Color_o *)&v8,
                                                0LL);
  v7 = this->fields.oneBoxGachaBtn;
  if ( !v7 )
    goto LABEL_18;
  v7->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v8;
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))oneBoxGachaBtn->klass[1]._1.implementedInterfaces)(
    oneBoxGachaBtn,
    v6,
    0LL,
    oneBoxGachaBtn->klass[1]._1.interfaceOffsets);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiOneBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, void *))oneBoxGachaBtn->klass[1]._1.namespaze)(
    oneBoxGachaBtn,
    isReset,
    oneBoxGachaBtn->klass[1]._1.byval_arg.data);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiOneBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled(oneBoxGachaBtn, isReset, 0LL);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiOneBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))oneBoxGachaBtn->klass[1]._1.implementedInterfaces)(
    oneBoxGachaBtn,
    v6,
    0LL,
    oneBoxGachaBtn->klass[1]._1.interfaceOffsets);
  oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiGachaBtn;
  if ( !oneBoxGachaBtn
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, void *))oneBoxGachaBtn->klass[1]._1.namespaze)(
          oneBoxGachaBtn,
          isReset,
          oneBoxGachaBtn->klass[1]._1.byval_arg.data),
        (oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiGachaBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(oneBoxGachaBtn, isReset, 0LL),
        (oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiGachaBtn) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))oneBoxGachaBtn->klass[1]._1.implementedInterfaces)(
          oneBoxGachaBtn,
          v6,
          0LL,
          oneBoxGachaBtn->klass[1]._1.interfaceOffsets),
        (oneBoxGachaBtn = (UnityEngine_Behaviour_o *)this->fields.boxGachaDetailBtn) == 0LL) )
  {
LABEL_18:
    sub_1BE4D28(oneBoxGachaBtn, isReset);
  }
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, bool, void *))oneBoxGachaBtn->klass[1]._1.namespaze)(
    oneBoxGachaBtn,
    isReset,
    oneBoxGachaBtn->klass[1]._1.byval_arg.data);
}


void __fastcall SetBoxGachaResourceControl__init(
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
    || (EventItemComponent__Set((EventItemComponent_o *)this, v4, 0LL),
        (this = (SetBoxGachaResourceControl_o *)v3->fields.oneBoxGachaInfo) == 0LL)
    || (BoxGachaItemComponent__Set((BoxGachaItemComponent_o *)this, v3->fields.itemId, v3->fields.payValue, 0LL),
        (this = (SetBoxGachaResourceControl_o *)v3->fields.singleBoxGachaInfo) == 0LL)
    || (BoxGachaItemComponent__Set((BoxGachaItemComponent_o *)this, v3->fields.itemId, v3->fields.payValue, 0LL),
        (this = (SetBoxGachaResourceControl_o *)v3->fields.multiBoxGachaInfo) == 0LL) )
  {
LABEL_7:
    sub_1BE4D28(this, boxGachaEnt);
  }
  BoxGachaItemComponent__Set(
    (BoxGachaItemComponent_o *)this,
    v3->fields.itemId,
    v3->fields.payValue * v3->fields.gachaTime,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetBoxGachaResourceControl__setBoxGachaItemInfo(
        SetBoxGachaResourceControl_o *this,
        int32_t canDrawNum,
        SetBoxGachaResourceControl_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  UnityEngine_GameObject_o *oneBoxGachaObj; // x0
  int32_t gachaTime; // w20
  __int64 v14; // x1
  int32_t v15; // w22
  UISprite_o *multiPoint2DigitNumImg; // x20
  UISprite_o *multiPoint1DigitNumImg; // x21
  UISprite_o *multiPoint3DigitNumImg; // x19

  if ( (byte_4B6AD53 & 1) == 0 )
  {
    sub_1BE4ACC(&BoxGachaUtility_TypeInfo, *(_QWORD *)&canDrawNum);
    byte_4B6AD53 = 1;
  }
  this->fields.clickCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.clickCallbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  oneBoxGachaObj = this->fields.oneBoxGachaObj;
  this->fields.gachaTime = canDrawNum;
  if ( !oneBoxGachaObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 0, 0LL);
  oneBoxGachaObj = this->fields.multiBoxGachaObj;
  if ( !oneBoxGachaObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 0, 0LL);
  if ( canDrawNum < 2 )
  {
    oneBoxGachaObj = this->fields.oneBoxGachaObj;
    if ( oneBoxGachaObj )
    {
      UnityEngine_GameObject__SetActive(oneBoxGachaObj, 1, 0LL);
      oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.oneBoxGachaBtn;
      if ( oneBoxGachaObj )
      {
        gachaTime = this->fields.gachaTime;
        ((void (__fastcall *)(UnityEngine_GameObject_o *, bool, void *))oneBoxGachaObj->klass[1]._1.namespaze)(
          oneBoxGachaObj,
          gachaTime > 0,
          oneBoxGachaObj->klass[1]._1.byval_arg.data);
        oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.oneBoxGachaBtn;
        if ( oneBoxGachaObj )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)oneBoxGachaObj, gachaTime > 0, 0LL);
          oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.oneBoxGachaBtn;
          if ( oneBoxGachaObj )
          {
            if ( gachaTime <= 0 )
              v14 = 3LL;
            else
              v14 = 0LL;
            ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))oneBoxGachaObj->klass[1]._1.implementedInterfaces)(
              oneBoxGachaObj,
              v14,
              0LL,
              oneBoxGachaObj->klass[1]._1.interfaceOffsets);
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1BE4D28(oneBoxGachaObj, v11);
  }
  oneBoxGachaObj = this->fields.multiBoxGachaObj;
  if ( !oneBoxGachaObj )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 1, 0LL);
  oneBoxGachaObj = (UnityEngine_GameObject_o *)this->fields.multiBoxGachaInfo;
  if ( !oneBoxGachaObj )
    goto LABEL_19;
  BoxGachaItemComponent__Set(
    (BoxGachaItemComponent_o *)oneBoxGachaObj,
    this->fields.itemId,
    this->fields.payValue * this->fields.gachaTime,
    0LL);
  v15 = this->fields.gachaTime;
  multiPoint1DigitNumImg = this->fields.multiPoint1DigitNumImg;
  multiPoint2DigitNumImg = this->fields.multiPoint2DigitNumImg;
  multiPoint3DigitNumImg = this->fields.multiPoint3DigitNumImg;
  if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v15,
    multiPoint1DigitNumImg,
    multiPoint2DigitNumImg,
    multiPoint3DigitNumImg,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetBoxGachaResourceControl_ClickDelegate___ctor(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2BD8C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2BD34;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SetBoxGachaResourceControl_ClickDelegate__BeginInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        bool isLongPress,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  char v15[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v16 = gachaTime;
  v15[0] = isLongPress;
  if ( (byte_4B6AD56 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, *(_QWORD *)&gachaTime);
    sub_1BE4ACC(&int_TypeInfo, v9);
    byte_4B6AD56 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(int_TypeInfo, &v16, isLongPress, callback, object);
  v14[1] = j_il2cpp_value_box_0(bool_TypeInfo, v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall SetBoxGachaResourceControl_ClickDelegate__EndInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall SetBoxGachaResourceControl_ClickDelegate__Invoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        bool isLongPress,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    gachaTime,
    isLongPress,
    *(_QWORD *)&this->fields.extra_arg);
}