void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  if ( (byte_42B1BBD & 1) == 0 )
  {
    sub_B52984(&InputUserBirthDayWindow_TypeInfo);
    byte_42B1BBD = 1;
  }
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y = 40;
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y = -6;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_42B1BBC & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1BBC = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayWindow__Callback(
        InputUserBirthDayWindow_o *this,
        bool result,
        System_Int32_array *param,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x0
  InputUserBirthDayWindow_CallbackFunc_o *v10; // x19
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)p_callbackFunc,
      0LL,
      (System_String_array **)param,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    InputUserBirthDayWindow_CallbackFunc__Invoke(v10, result, this->fields.paramList, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Close(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayWindow__Close_28290212(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_28290212(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v12; // x20

  if ( (byte_42B1BB7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&Method_InputUserBirthDayWindow_EndClose__);
    byte_42B1BB7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       birthMonthInput,
                                                       (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       birthMonthInput,
                                                       (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B52A5C(birthMonthInput, v10);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_42B1BB6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_42B1BB6 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         birthMonthInput,
                                                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         birthMonthInput,
                                                         (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_B52A5C(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_42B1BB3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_42B1BB3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  UnityEngine_Input__set_imeCompositionMode(0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput;
  this->fields.state = 0;
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_B52A5C(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayWindow__OnChangeInput(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UILineInput_o *birthMonthInput; // x0
  System_String_o *v4; // x20
  System_String_o *Text; // x21
  const MethodInfo *v6; // x1
  bool v7; // w8

  birthMonthInput = this->fields.birthMonthInput;
  if ( !birthMonthInput
    || (birthMonthInput = (UILineInput_o *)UILineInput__GetText(birthMonthInput, 0LL), !this->fields.birthDayInput) )
  {
    sub_B52A5C(birthMonthInput, method);
  }
  v4 = (System_String_o *)birthMonthInput;
  Text = UILineInput__GetText(this->fields.birthDayInput, 0LL);
  v7 = !System_String__IsNullOrEmpty(v4, 0LL) && !System_String__IsNullOrEmpty(Text, 0LL);
  this->fields.isInput = v7;
  InputUserBirthDayWindow__setExeBtnState(this, v6);
}


void __fastcall InputUserBirthDayWindow__OnClickCancel(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  System_Int32_array *v2; // x2
  const MethodInfo *v3; // x3

  InputUserBirthDayWindow__Callback(this, 0, v2, v3);
}


void __fastcall InputUserBirthDayWindow__OnClickDecide(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v8; // x0
  int v9; // w20
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Int32_array *paramList; // x8
  struct System_Int32_array *v13; // x8
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v15; // x1
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v18; // x23
  System_String_o *v19; // x24
  System_Object_array *v20; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v22; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v33; // x2
  System_String_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x26
  InputUserBirthDayWindow_o *v42; // x0
  const MethodInfo *v43; // x2
  System_String_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  InputUserBirthDayWindow_o *v52; // x0
  const MethodInfo *v53; // x2
  System_String_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x20
  System_String_o *v62; // x20
  System_String_o *v63; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v64; // x24
  __int64 v65; // x1
  const MethodInfo *v66; // x7
  InputUserBirthDayWindow_c *v67; // x0
  InputUserBirthDayConfirmWindow_o *v68; // x22
  System_String_o *v69; // x23
  System_String_o *v70; // x24
  Il2CppObject *v71; // x21
  Il2CppObject *v72; // x2
  System_String_o *v73; // x20
  System_String_o *v74; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v75; // x24
  __int64 v76; // x0
  __int64 v77; // x1
  const MethodInfo *v78; // x7
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  int v89; // [xsp+3Ch] [xbp-54h] BYREF
  __int64 v90; // [xsp+40h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v92; // 0:x0.8
  System_DateTime_o v93; // 0:x0.8
  System_DateTime_o v94; // 0:x0.8

  if ( (byte_42B1BB8 & 1) == 0 )
  {
    sub_B52984(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    sub_B52984(&Method_InputUserBirthDayWindow_OnConfirm__);
    sub_B52984(&InputUserBirthDayWindow_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_11171/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_B52984(&StringLiteral_12156/*"SET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_B52984(&StringLiteral_12155/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/);
    sub_B52984(&StringLiteral_11170/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    sub_B52984(&StringLiteral_12154/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    byte_42B1BB8 = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_B52A5C(0LL, method);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v6 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_B52A5C(0LL, v5);
    v8 = UILineInput__GetText(birthDayInput, 0LL);
    v9 = System_Int32__Parse(v8, 0LL);
    v90 = 0LL;
    v92.fields.dateData = (uint64_t)&v90;
    System_DateTime___ctor_15505916(v92, 2000, v6, v9, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_B52A5C(v10, v11);
    if ( !paramList->max_length )
    {
      v79 = sub_B52A88(v10);
      sub_B52A28(v79, 0LL);
    }
    paramList->m_Items[1] = v6;
    v13 = this->fields.paramList;
    if ( !v13 )
      sub_B52A5C(v10, v11);
    if ( v13->max_length <= 1 )
    {
      v80 = sub_B52A88(v10);
      sub_B52A28(v80, 0LL);
    }
    v13->m_Items[2] = v9;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        sub_B52A5C(0LL, v15);
      birthDay = SelfUserGame->fields.birthDay;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getDateTime_25741912(birthDay, 0LL).fields.dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11171/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11170/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v20 = (System_Object_array *)sub_B5299C(object___TypeInfo, 4LL);
      v93.fields.dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v93, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v22);
      if ( !v20 )
        sub_B52A5C(PaddingBirthday, v24);
      v31 = (System_Int32_array **)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_B52A44(PaddingBirthday, v20->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v85 = sub_B52A7C(0LL);
          sub_B52A28(v85, 0LL);
        }
      }
      if ( !v20->max_length )
      {
        v81 = sub_B52A88(PaddingBirthday);
        sub_B52A28(v81, 0LL);
      }
      v20->m_Items[0] = (Il2CppObject *)v31;
      sub_B52920((BattleServantConfConponent_o *)v20->m_Items, v31, v25, v26, v27, v28, v29, v30);
      v94.fields.dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v94, 0LL);
      v34 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v33);
      v41 = (System_Int32_array **)v34;
      if ( v34 )
      {
        v34 = (System_String_o *)sub_B52A44(v34, v20->obj.klass->_1.element_class);
        if ( !v34 )
        {
          v86 = sub_B52A7C(0LL);
          sub_B52A28(v86, 0LL);
        }
      }
      if ( v20->max_length <= 1 )
      {
        v82 = sub_B52A88(v34);
        sub_B52A28(v82, 0LL);
      }
      v20->m_Items[1] = (Il2CppObject *)v41;
      sub_B52920((BattleServantConfConponent_o *)&v20->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
      v44 = InputUserBirthDayWindow__getPaddingBirthday(v42, v6, v43);
      v51 = (System_Int32_array **)v44;
      if ( v44 )
      {
        v44 = (System_String_o *)sub_B52A44(v44, v20->obj.klass->_1.element_class);
        if ( !v44 )
        {
          v87 = sub_B52A7C(0LL);
          sub_B52A28(v87, 0LL);
        }
      }
      if ( v20->max_length <= 2 )
      {
        v83 = sub_B52A88(v44);
        sub_B52A28(v83, 0LL);
      }
      v20->m_Items[2] = (Il2CppObject *)v51;
      sub_B52920((BattleServantConfConponent_o *)&v20->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
      v54 = InputUserBirthDayWindow__getPaddingBirthday(v52, v9, v53);
      v61 = (System_Int32_array **)v54;
      if ( v54 )
      {
        v54 = (System_String_o *)sub_B52A44(v54, v20->obj.klass->_1.element_class);
        if ( !v54 )
        {
          v88 = sub_B52A7C(0LL);
          sub_B52A28(v88, 0LL);
        }
      }
      if ( v20->max_length <= 3 )
      {
        v84 = sub_B52A88(v54);
        sub_B52A28(v84, 0LL);
      }
      v20->m_Items[3] = (Il2CppObject *)v61;
      sub_B52920((BattleServantConfConponent_o *)&v20->m_Items[3], v61, v55, v56, v57, v58, v59, v60);
      v62 = System_String__Format_44647040(v19, v20, 0LL);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_12155/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v64 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B52A54(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v64,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      v67 = InputUserBirthDayWindow_TypeInfo;
      if ( (BYTE3(InputUserBirthDayWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v67 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_B52A5C(v67, v65);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v18,
        v62,
        v63,
        v64,
        v67->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v67->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v66);
    }
    else
    {
      v68 = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12156/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12154/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v90) = v6;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90);
      v89 = v9;
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89);
      v73 = System_String__Format_44563852(v70, v71, v72, 0LL);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12155/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v75 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B52A54(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v75,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      if ( !v68 )
        sub_B52A5C(v76, v77);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v68, v69, v73, v74, v75, 30, 0, v78);
    }
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__OnConfirm(
        InputUserBirthDayWindow_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x0
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  confirmWindow = this->fields.confirmWindow;
  if ( !confirmWindow )
    sub_B52A5C(0LL, isDecide);
  InputUserBirthDayConfirmWindow__Close_28287996(confirmWindow, 0LL, method);
  if ( isDecide )
    InputUserBirthDayWindow__Callback(this, 1, v6, v7);
}


void __fastcall InputUserBirthDayWindow__OpenInputBirthDayWindow(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool IsOpen; // w0
  UILabel_o *titleLb; // x20
  System_String_o **v16; // x8
  System_String_o *v17; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v20; // x8
  System_String_o *v21; // x21
  struct System_Int32_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *v29; // x20

  if ( (byte_42B1BB4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_InputUserBirthDayWindow_EndOpen__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_7343/*"INPUT_BIRTHDAY_INFO"*/);
    sub_B52984(&StringLiteral_7344/*"INPUT_BIRTHDAY_NOTICE"*/);
    sub_B52984(&StringLiteral_11173/*"RESET_BIRTHDAY_TITLE"*/);
    sub_B52984(&StringLiteral_7345/*"INPUT_BIRTHDAY_TITLE"*/);
    sub_B52984(&StringLiteral_11172/*"RESET_BIRTHDAY_NOTICE"*/);
    byte_42B1BB4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v7);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  titleLb = this->fields.titleLb;
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v16 = (System_String_o **)&StringLiteral_11173/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v16 = (System_String_o **)&StringLiteral_7345/*"INPUT_BIRTHDAY_TITLE"*/;
  v17 = *v16;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v17, 0LL);
  if ( !titleLb )
    goto LABEL_27;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7343/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_27;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v20 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11172/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7344/*"INPUT_BIRTHDAY_NOTICE"*/);
  v21 = *v20;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v21, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_27:
    sub_B52A5C(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  v22 = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 2LL);
  this->fields.paramList = v22;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.paramList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
}


void __fastcall InputUserBirthDayWindow__add_callbackFunc(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  InputUserBirthDayWindow_o *v11; // x0
  InputUserBirthDayWindow_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B1BB1 & 1) == 0 )
  {
    sub_B52984(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_42B1BB1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (InputUserBirthDayWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_B52D50(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42B1BB9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B1BB9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


System_String_o *__fastcall InputUserBirthDayWindow__getPaddingBirthday(
        InputUserBirthDayWindow_o *this,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x1
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = num;
  if ( (byte_42B1BBB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_82/*"  "*/);
    byte_42B1BBB = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_44568316((System_String_o *)StringLiteral_82/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1BBA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2774/*"BaseWindow/CancleBtn"*/);
    byte_42B1BBA = 1;
  }
  return (System_String_o *)StringLiteral_2774/*"BaseWindow/CancleBtn"*/;
}


void __fastcall InputUserBirthDayWindow__remove_callbackFunc(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  InputUserBirthDayWindow_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B1BB2 & 1) == 0 )
  {
    sub_B52984(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_42B1BB2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (InputUserBirthDayWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_B52D50(v8);
  InputUserBirthDayWindow__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow__setExeBtnState(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confirmBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 isInput; // w21
  UIWidget_o *confirmTxt; // x20
  UIWidget_o *v7; // x19
  int v8; // s0
  int v12; // s0

  if ( (byte_42B1BB5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_42B1BB5 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_9;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              confirmBtnBg,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  isInput = this->fields.isInput;
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  v7 = (UIWidget_o *)Component_WebViewObject;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_black(0LL);
  if ( !confirmTxt )
    goto LABEL_9;
  UIWidget__set_color(confirmTxt, *(UnityEngine_Color_o *)&v8, 0LL);
  if ( !isInput )
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
    if ( v7 )
      goto LABEL_7;
LABEL_9:
    sub_B52A5C(confirmBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
  if ( !v7 )
    goto LABEL_9;
LABEL_7:
  UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow_CallbackFunc___ctor(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall InputUserBirthDayWindow_CallbackFunc__BeginInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        bool result,
        System_Int32_array *param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  if ( (byte_42ACE48 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42ACE48 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow_CallbackFunc__Invoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        bool result,
        System_Int32_array *param,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  InputUserBirthDayWindow_CallbackFunc_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, System_Int32_array *, _QWORD); // x0
  InputUserBirthDayWindow_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, System_Int32_array *, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  InputUserBirthDayWindow_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (InputUserBirthDayWindow_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, System_Int32_array *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, result, param, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(result, param, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AEB880(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, result, param, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))v17)(
            v22,
            result,
            param,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))(*v22
                                                                                + 16LL * *(unsigned __int16 *)(v23 + 72)
                                                                                + 312))(
            v22,
            result,
            param,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_Int32_array *, __int64))v24)(v22, result, param, v23);
    goto LABEL_36;
  }
}