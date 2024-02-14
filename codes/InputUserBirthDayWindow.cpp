void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4215CED & 1) == 0 )
  {
    sub_B0D8A4(&InputUserBirthDayWindow_TypeInfo, v1);
    byte_4215CED = 1;
  }
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y = 40;
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y = -6;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4215CEC & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4215CEC = 1;
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
    sub_B0D840(
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

  InputUserBirthDayWindow__Close_26837092(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_26837092(
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
  __int64 v11; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_4215CE7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B0D8A4(&Method_InputUserBirthDayWindow_EndClose__, v11);
    byte_4215CE7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
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
                                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       birthMonthInput,
                                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B0D97C(birthMonthInput);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4215CE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4215CE6 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         birthMonthInput,
                                                         (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         birthMonthInput,
                                                         (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_B0D97C(birthMonthInput);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4215CE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4215CE3 = 1;
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
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_B0D97C(gameObject);
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
    sub_B0D97C(birthMonthInput);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  int32_t v17; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v19; // x0
  int v20; // w20
  __int64 v21; // x0
  struct System_Int32_array *paramList; // x8
  struct System_Int32_array *v23; // x8
  UserGameEntity_o *SelfUserGame; // x0
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v27; // x23
  System_String_o *v28; // x24
  System_Object_array *v29; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v31; // x2
  System_String_o *PaddingBirthday; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v41; // x2
  System_String_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x26
  InputUserBirthDayWindow_o *v50; // x0
  const MethodInfo *v51; // x2
  System_String_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x21
  InputUserBirthDayWindow_o *v60; // x0
  const MethodInfo *v61; // x2
  System_String_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x20
  System_String_o *v70; // x20
  System_String_o *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v74; // x24
  const MethodInfo *v75; // x7
  InputUserBirthDayWindow_c *v76; // x0
  InputUserBirthDayConfirmWindow_o *v77; // x22
  System_String_o *v78; // x23
  System_String_o *v79; // x24
  Il2CppObject *v80; // x21
  Il2CppObject *v81; // x2
  System_String_o *v82; // x20
  System_String_o *v83; // x21
  __int64 v84; // x1
  __int64 v85; // x2
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v86; // x24
  __int64 v87; // x0
  const MethodInfo *v88; // x7
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  int v99; // [xsp+3Ch] [xbp-54h] BYREF
  __int64 v100; // [xsp+40h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v102; // 0:x0.8
  System_DateTime_o v103; // 0:x0.8
  System_DateTime_o v104; // 0:x0.8

  if ( (byte_4215CE8 & 1) == 0 )
  {
    sub_B0D8A4(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_InputUserBirthDayWindow_OnConfirm__, v3);
    sub_B0D8A4(&InputUserBirthDayWindow_TypeInfo, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&object___TypeInfo, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_11111/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v10);
    sub_B0D8A4(&StringLiteral_12105/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, v11);
    sub_B0D8A4(&StringLiteral_12104/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, v12);
    sub_B0D8A4(&StringLiteral_11110/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, v13);
    sub_B0D8A4(&StringLiteral_12103/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, v14);
    byte_4215CE8 = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_B0D97C(0LL);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v17 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_B0D97C(0LL);
    v19 = UILineInput__GetText(birthDayInput, 0LL);
    v20 = System_Int32__Parse(v19, 0LL);
    v100 = 0LL;
    v102.fields.dateData = (uint64_t)&v100;
    System_DateTime___ctor_15033292(v102, 2000, v17, v20, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_B0D97C(v21);
    if ( !paramList->max_length )
    {
      v89 = sub_B0D9A8(v21);
      sub_B0D948(v89, 0LL);
    }
    paramList->m_Items[1] = v17;
    v23 = this->fields.paramList;
    if ( !v23 )
      sub_B0D97C(v21);
    if ( v23->max_length <= 1 )
    {
      v90 = sub_B0D9A8(v21);
      sub_B0D948(v90, 0LL);
    }
    v23->m_Items[2] = v20;
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
        sub_B0D97C(0LL);
      birthDay = SelfUserGame->fields.birthDay;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getDateTime_25504560(birthDay, 0LL).fields.dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11111/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v29 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 4LL);
      v103.fields.dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v103, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v31);
      if ( !v29 )
        sub_B0D97C(PaddingBirthday);
      v39 = (System_Int32_array **)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_B0D964(PaddingBirthday, v29->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v95 = sub_B0D99C(0LL);
          sub_B0D948(v95, 0LL);
        }
      }
      if ( !v29->max_length )
      {
        v91 = sub_B0D9A8(PaddingBirthday);
        sub_B0D948(v91, 0LL);
      }
      v29->m_Items[0] = (Il2CppObject *)v39;
      sub_B0D840((BattleServantConfConponent_o *)v29->m_Items, v39, v33, v34, v35, v36, v37, v38);
      v104.fields.dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v104, 0LL);
      v42 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v41);
      v49 = (System_Int32_array **)v42;
      if ( v42 )
      {
        v42 = (System_String_o *)sub_B0D964(v42, v29->obj.klass->_1.element_class);
        if ( !v42 )
        {
          v96 = sub_B0D99C(0LL);
          sub_B0D948(v96, 0LL);
        }
      }
      if ( v29->max_length <= 1 )
      {
        v92 = sub_B0D9A8(v42);
        sub_B0D948(v92, 0LL);
      }
      v29->m_Items[1] = (Il2CppObject *)v49;
      sub_B0D840((BattleServantConfConponent_o *)&v29->m_Items[1], v49, v43, v44, v45, v46, v47, v48);
      v52 = InputUserBirthDayWindow__getPaddingBirthday(v50, v17, v51);
      v59 = (System_Int32_array **)v52;
      if ( v52 )
      {
        v52 = (System_String_o *)sub_B0D964(v52, v29->obj.klass->_1.element_class);
        if ( !v52 )
        {
          v97 = sub_B0D99C(0LL);
          sub_B0D948(v97, 0LL);
        }
      }
      if ( v29->max_length <= 2 )
      {
        v93 = sub_B0D9A8(v52);
        sub_B0D948(v93, 0LL);
      }
      v29->m_Items[2] = (Il2CppObject *)v59;
      sub_B0D840((BattleServantConfConponent_o *)&v29->m_Items[2], v59, v53, v54, v55, v56, v57, v58);
      v62 = InputUserBirthDayWindow__getPaddingBirthday(v60, v20, v61);
      v69 = (System_Int32_array **)v62;
      if ( v62 )
      {
        v62 = (System_String_o *)sub_B0D964(v62, v29->obj.klass->_1.element_class);
        if ( !v62 )
        {
          v98 = sub_B0D99C(0LL);
          sub_B0D948(v98, 0LL);
        }
      }
      if ( v29->max_length <= 3 )
      {
        v94 = sub_B0D9A8(v62);
        sub_B0D948(v94, 0LL);
      }
      v29->m_Items[3] = (Il2CppObject *)v69;
      sub_B0D840((BattleServantConfConponent_o *)&v29->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
      v70 = System_String__Format_43928628(v28, v29, 0LL);
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v74 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B0D974(
                                                               InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo,
                                                               v72,
                                                               v73);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v74,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      v76 = InputUserBirthDayWindow_TypeInfo;
      if ( (BYTE3(InputUserBirthDayWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v76 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_B0D97C(v76);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v27,
        v70,
        v71,
        v74,
        v76->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v76->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v75);
    }
    else
    {
      v77 = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12103/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v100) = v17;
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
      v99 = v20;
      v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99);
      v82 = System_String__Format_43845440(v79, v80, v81, 0LL);
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12104/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v86 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B0D974(
                                                               InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo,
                                                               v84,
                                                               v85);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v86,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      if ( !v77 )
        sub_B0D97C(v87);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v77, v78, v82, v83, v86, 30, 0, v88);
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
    sub_B0D97C(0LL);
  InputUserBirthDayConfirmWindow__Close_26834876(confirmWindow, 0LL, method);
  if ( isDecide )
    InputUserBirthDayWindow__Callback(this, 1, v6, v7);
}


void __fastcall InputUserBirthDayWindow__OpenInputBirthDayWindow(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  bool IsOpen; // w0
  UILabel_o *titleLb; // x20
  System_String_o **v25; // x8
  System_String_o *v26; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v29; // x8
  System_String_o *v30; // x21
  struct System_Int32_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x20

  if ( (byte_4215CE4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_B0D8A4(&CondType_TypeInfo, v6);
    sub_B0D8A4(&Method_InputUserBirthDayWindow_EndOpen__, v7);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_7317/*"INPUT_BIRTHDAY_INFO"*/, v10);
    sub_B0D8A4(&StringLiteral_7318/*"INPUT_BIRTHDAY_NOTICE"*/, v11);
    sub_B0D8A4(&StringLiteral_11113/*"RESET_BIRTHDAY_TITLE"*/, v12);
    sub_B0D8A4(&StringLiteral_7319/*"INPUT_BIRTHDAY_TITLE"*/, v13);
    sub_B0D8A4(&StringLiteral_11112/*"RESET_BIRTHDAY_NOTICE"*/, v14);
    byte_4215CE4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v16);
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  titleLb = this->fields.titleLb;
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v25 = (System_String_o **)&StringLiteral_11113/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v25 = (System_String_o **)&StringLiteral_7319/*"INPUT_BIRTHDAY_TITLE"*/;
  v26 = *v25;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v26, 0LL);
  if ( !titleLb )
    goto LABEL_27;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7317/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_27;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v29 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11112/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7318/*"INPUT_BIRTHDAY_NOTICE"*/);
  v30 = *v29;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v30, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_27:
    sub_B0D97C(gameObject);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  v31 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  this->fields.paramList = v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.paramList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
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

  if ( (byte_4215CE1 & 1) == 0 )
  {
    sub_B0D8A4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4215CE1 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_B0DC70(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4215CE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4215CE9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall InputUserBirthDayWindow__getPaddingBirthday(
        InputUserBirthDayWindow_o *this,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x1
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = num;
  if ( (byte_4215CEB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_81/*"  "*/, *(_QWORD *)&num);
    byte_4215CEB = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_43849904((System_String_o *)StringLiteral_81/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4215CEA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2753/*"BaseWindow/CancleBtn"*/, method);
    byte_4215CEA = 1;
  }
  return (System_String_o *)StringLiteral_2753/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4215CE2 & 1) == 0 )
  {
    sub_B0D8A4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4215CE2 = 1;
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
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_B0DC70(v8);
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

  if ( (byte_4215CE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    byte_4215CE5 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_9;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              confirmBtnBg,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B0D97C(confirmBtnBg);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4210F7C & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4210F7C = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, System_Int32_array *, _QWORD); // x0
  InputUserBirthDayWindow_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(bool, System_Int32_array *, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  InputUserBirthDayWindow_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
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
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, System_Int32_array *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, result, param, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23(result, param, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_AA67A0(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))sub_B0D954(v17, v22);
        (*v19)(v21, result, param, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AA67A0(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))v16)(
            v21,
            result,
            param,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))(*v21
                                                                                + 16LL * *(unsigned __int16 *)(v22 + 72)
                                                                                + 312))(
            v21,
            result,
            param,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_Int32_array *, __int64))v23)(v21, result, param, v22);
    goto LABEL_36;
  }
}