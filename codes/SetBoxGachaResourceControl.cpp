void __fastcall SetBoxGachaResourceControl___ctor(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetBoxGachaResourceControl__ClickMultiGacha(
        SetBoxGachaResourceControl_o *this,
        const MethodInfo *method)
{
  SetBoxGachaResourceControl_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_40FC35B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC35B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    SetBoxGachaResourceControl_ClickDelegate__Invoke(clickCallbackFunc, this->fields.gachaTime, 0LL);
}


void __fastcall SetBoxGachaResourceControl__ClickOneGacha(SetBoxGachaResourceControl_o *this, const MethodInfo *method)
{
  SetBoxGachaResourceControl_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_40FC35A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC35A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  this->fields.gachaTime = 1;
  if ( clickCallbackFunc )
    SetBoxGachaResourceControl_ClickDelegate__Invoke(clickCallbackFunc, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetBoxGachaResourceControl__SetLimitReset(
        SetBoxGachaResourceControl_o *this,
        bool isReset,
        const MethodInfo *method)
{
  struct UICommonButton_o *oneBoxGachaBtn; // x0
  UnityEngine_Behaviour_o *v6; // x0
  unsigned int v7; // w21
  struct UICommonButton_o *v8; // x8
  struct UICommonButton_o *v9; // x0
  struct UICommonButton_o *multiOneBtn; // x0
  UnityEngine_Behaviour_o *v11; // x0
  struct UICommonButton_o *v12; // x0
  struct UICommonButton_o *multiGachaBtn; // x0
  UnityEngine_Behaviour_o *v14; // x0
  struct UICommonButton_o *v15; // x0
  struct UIButton_o *boxGachaDetailBtn; // x0
  unsigned __int128 v17; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_40FC35C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_352/*"#4C4C4C"*/, isReset);
    byte_40FC35C = 1;
  }
  v17 = 0uLL;
  oneBoxGachaBtn = this->fields.oneBoxGachaBtn;
  if ( !oneBoxGachaBtn )
    goto LABEL_18;
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))oneBoxGachaBtn->klass->vtable._5_set_isEnabled.method)(
    oneBoxGachaBtn,
    isReset,
    oneBoxGachaBtn->klass->vtable._6_OnInit.methodPtr);
  v6 = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
  if ( !v6 )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled(v6, isReset, 0LL);
  v7 = isReset ? 0 : 3;
  UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_352/*"#4C4C4C"*/, (UnityEngine_Color_o *)&v17, 0LL);
  v8 = this->fields.oneBoxGachaBtn;
  if ( !v8 )
    goto LABEL_18;
  v8->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v17;
  v9 = this->fields.oneBoxGachaBtn;
  if ( !v9 )
    goto LABEL_18;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v9->klass->vtable._14_SetState.method)(
    v9,
    v7,
    0LL,
    v9->klass->vtable._15_OnPress.methodPtr);
  multiOneBtn = this->fields.multiOneBtn;
  if ( !multiOneBtn )
    goto LABEL_18;
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))multiOneBtn->klass->vtable._5_set_isEnabled.method)(
    multiOneBtn,
    isReset,
    multiOneBtn->klass->vtable._6_OnInit.methodPtr);
  v11 = (UnityEngine_Behaviour_o *)this->fields.multiOneBtn;
  if ( !v11 )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled(v11, isReset, 0LL);
  v12 = this->fields.multiOneBtn;
  if ( !v12 )
    goto LABEL_18;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v12->klass->vtable._14_SetState.method)(
    v12,
    v7,
    0LL,
    v12->klass->vtable._15_OnPress.methodPtr);
  multiGachaBtn = this->fields.multiGachaBtn;
  if ( !multiGachaBtn
    || (((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))multiGachaBtn->klass->vtable._5_set_isEnabled.method)(
          multiGachaBtn,
          isReset,
          multiGachaBtn->klass->vtable._6_OnInit.methodPtr),
        (v14 = (UnityEngine_Behaviour_o *)this->fields.multiGachaBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(v14, isReset, 0LL), (v15 = this->fields.multiGachaBtn) == 0LL)
    || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v15->klass->vtable._14_SetState.method)(
          v15,
          v7,
          0LL,
          v15->klass->vtable._15_OnPress.methodPtr),
        (boxGachaDetailBtn = this->fields.boxGachaDetailBtn) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))boxGachaDetailBtn->klass->vtable._5_set_isEnabled.method)(
    boxGachaDetailBtn,
    isReset,
    boxGachaDetailBtn->klass->vtable._6_OnInit.methodPtr);
}


void __fastcall SetBoxGachaResourceControl__init(
        SetBoxGachaResourceControl_o *this,
        BoxGachaEntity_o *boxGachaEnt,
        const MethodInfo *method)
{
  int32_t payTargetId; // w1
  EventItemComponent_o *eventBoxGachaItemInfo; // x0
  BoxGachaItemComponent_o *oneBoxGachaInfo; // x0
  BoxGachaItemComponent_o *singleBoxGachaInfo; // x0
  BoxGachaItemComponent_o *multiBoxGachaInfo; // x0

  this->fields.gachaTime = 10;
  if ( !boxGachaEnt )
    goto LABEL_7;
  payTargetId = boxGachaEnt->fields.payTargetId;
  this->fields.itemId = payTargetId;
  eventBoxGachaItemInfo = this->fields.eventBoxGachaItemInfo;
  this->fields.payValue = boxGachaEnt->fields.payValue;
  if ( !eventBoxGachaItemInfo
    || (EventItemComponent__Set(eventBoxGachaItemInfo, payTargetId, 0LL),
        (oneBoxGachaInfo = this->fields.oneBoxGachaInfo) == 0LL)
    || (BoxGachaItemComponent__Set(oneBoxGachaInfo, this->fields.itemId, this->fields.payValue, 0LL),
        (singleBoxGachaInfo = this->fields.singleBoxGachaInfo) == 0LL)
    || (BoxGachaItemComponent__Set(singleBoxGachaInfo, this->fields.itemId, this->fields.payValue, 0LL),
        (multiBoxGachaInfo = this->fields.multiBoxGachaInfo) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  BoxGachaItemComponent__Set(
    multiBoxGachaInfo,
    this->fields.itemId,
    this->fields.payValue * this->fields.gachaTime,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetBoxGachaResourceControl__setBoxGachaItemInfo(
        SetBoxGachaResourceControl_o *this,
        int32_t canDrawNum,
        SetBoxGachaResourceControl_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *oneBoxGachaObj; // x0
  UnityEngine_GameObject_o *multiBoxGachaObj; // x0
  UnityEngine_GameObject_o *v13; // x0
  struct UICommonButton_o *oneBoxGachaBtn; // x0
  int32_t gachaTime; // w20
  UnityEngine_Behaviour_o *v16; // x0
  struct UICommonButton_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x0
  BoxGachaItemComponent_o *multiBoxGachaInfo; // x0
  int32_t v21; // w22
  UISprite_o *multiPoint2DigitNumImg; // x20
  UISprite_o *multiPoint1DigitNumImg; // x21
  UISprite_o *multiPoint3DigitNumImg; // x19

  if ( (byte_40FC359 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaUtility_TypeInfo, *(_QWORD *)&canDrawNum);
    byte_40FC359 = 1;
  }
  this->fields.clickCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  oneBoxGachaObj = this->fields.oneBoxGachaObj;
  this->fields.gachaTime = canDrawNum;
  if ( !oneBoxGachaObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(oneBoxGachaObj, 0, 0LL);
  multiBoxGachaObj = this->fields.multiBoxGachaObj;
  if ( !multiBoxGachaObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(multiBoxGachaObj, 0, 0LL);
  if ( canDrawNum < 2 )
  {
    v13 = this->fields.oneBoxGachaObj;
    if ( v13 )
    {
      UnityEngine_GameObject__SetActive(v13, 1, 0LL);
      oneBoxGachaBtn = this->fields.oneBoxGachaBtn;
      if ( oneBoxGachaBtn )
      {
        gachaTime = this->fields.gachaTime;
        ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))oneBoxGachaBtn->klass->vtable._5_set_isEnabled.method)(
          oneBoxGachaBtn,
          gachaTime > 0,
          oneBoxGachaBtn->klass->vtable._6_OnInit.methodPtr);
        v16 = (UnityEngine_Behaviour_o *)this->fields.oneBoxGachaBtn;
        if ( v16 )
        {
          UnityEngine_Behaviour__set_enabled(v16, gachaTime > 0, 0LL);
          v17 = this->fields.oneBoxGachaBtn;
          if ( v17 )
          {
            if ( gachaTime <= 0 )
              v18 = 3LL;
            else
              v18 = 0LL;
            ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))v17->klass->vtable._14_SetState.method)(
              v17,
              v18,
              0LL,
              v17->klass->vtable._15_OnPress.methodPtr);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
  v19 = this->fields.multiBoxGachaObj;
  if ( !v19 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v19, 1, 0LL);
  multiBoxGachaInfo = this->fields.multiBoxGachaInfo;
  if ( !multiBoxGachaInfo )
    goto LABEL_20;
  BoxGachaItemComponent__Set(
    multiBoxGachaInfo,
    this->fields.itemId,
    this->fields.payValue * this->fields.gachaTime,
    0LL);
  v21 = this->fields.gachaTime;
  multiPoint1DigitNumImg = this->fields.multiPoint1DigitNumImg;
  multiPoint2DigitNumImg = this->fields.multiPoint2DigitNumImg;
  multiPoint3DigitNumImg = this->fields.multiPoint3DigitNumImg;
  if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  }
  BoxGachaUtility__SetMultiGachaButtonDigitNum(
    v21,
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SetBoxGachaResourceControl_ClickDelegate__BeginInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = gachaTime;
  if ( (byte_40F767E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&gachaTime);
    byte_40F767E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SetBoxGachaResourceControl_ClickDelegate__EndInvoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetBoxGachaResourceControl_ClickDelegate__Invoke(
        SetBoxGachaResourceControl_ClickDelegate_o *this,
        int32_t gachaTime,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SetBoxGachaResourceControl_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  SetBoxGachaResourceControl_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  SetBoxGachaResourceControl_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SetBoxGachaResourceControl_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&gachaTime, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)gachaTime, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)gachaTime, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)gachaTime, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)gachaTime,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)gachaTime, v20);
    goto LABEL_37;
  }
}