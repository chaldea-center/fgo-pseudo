void __fastcall SetBoxGachaResourceControl___ctor(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetBoxGachaResourceControl__ClickMultiGacha(
        SetBoxGachaResourceControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SetBoxGachaResourceControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4A02A01 & 1) == 0 )
  {
    sub_1B64A00(&Method_SetBoxGachaResourceControl_ClickMultiGacha__, method);
    byte_4A02A01 = 1;
  }
  v3 = Method_SetBoxGachaResourceControl_ClickMultiGacha__;
  if ( (*((_BYTE *)Method_SetBoxGachaResourceControl_ClickMultiGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_SetBoxGachaResourceControl_ClickMultiGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickCallbackFunc->fields.m_target)(
      clickCallbackFunc->fields.original_method_info,
      (unsigned int)this->fields.gachaTime,
      *(_QWORD *)&clickCallbackFunc->fields.extra_arg);
}


void __fastcall SetBoxGachaResourceControl__ClickOneGacha(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SetBoxGachaResourceControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4A02A00 & 1) == 0 )
  {
    sub_1B64A00(&Method_SetBoxGachaResourceControl_ClickOneGacha__, method);
    byte_4A02A00 = 1;
  }
  v3 = Method_SetBoxGachaResourceControl_ClickOneGacha__;
  if ( (*((_BYTE *)Method_SetBoxGachaResourceControl_ClickOneGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B64A18(Method_SetBoxGachaResourceControl_ClickOneGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  this->fields.gachaTime = 1;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickCallbackFunc->fields.m_target)(
      clickCallbackFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&clickCallbackFunc->fields.extra_arg);
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

  if ( (byte_4A02A02 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_442/*"#4C4C4C"*/, isReset);
    byte_4A02A02 = 1;
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
                                                (System_String_o *)StringLiteral_442/*"#4C4C4C"*/,
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
    sub_1B64C5C(oneBoxGachaBtn, isReset);
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
    sub_1B64C5C(this, boxGachaEnt);
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
  __int64 v7; // x1
  UnityEngine_GameObject_o *oneBoxGachaObj; // x0
  int32_t gachaTime; // w20
  __int64 v10; // x1
  int32_t v11; // w22
  UISprite_o *multiPoint2DigitNumImg; // x20
  UISprite_o *multiPoint1DigitNumImg; // x21
  UISprite_o *multiPoint3DigitNumImg; // x19

  if ( (byte_4A029FF & 1) == 0 )
  {
    sub_1B64A00(&BoxGachaUtility_TypeInfo, *(_QWORD *)&canDrawNum);
    byte_4A029FF = 1;
  }
  this->fields.clickCallbackFunc = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
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
              v10 = 3LL;
            else
              v10 = 0LL;
            ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))oneBoxGachaObj->klass[1]._1.implementedInterfaces)(
              oneBoxGachaObj,
              v10,
              0LL,
              oneBoxGachaObj->klass[1]._1.interfaceOffsets);
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1B64C5C(oneBoxGachaObj, v7);
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
  v11 = this->fields.gachaTime;
  multiPoint1DigitNumImg = this->fields.multiPoint1DigitNumImg;
  multiPoint2DigitNumImg = this->fields.multiPoint2DigitNumImg;
  multiPoint3DigitNumImg = this->fields.multiPoint3DigitNumImg;
  if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v11,
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
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B1ABC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B1A74;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SetBoxGachaResourceControl_ClickDelegate__BeginInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = gachaTime;
  if ( (byte_4A02A03 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&gachaTime);
    byte_4A02A03 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall SetBoxGachaResourceControl_ClickDelegate__EndInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
}


void __fastcall SetBoxGachaResourceControl_ClickDelegate__Invoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    gachaTime,
    *(_QWORD *)&this->fields.extra_arg);
}