void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4188F8A & 1) == 0 )
  {
    sub_B2C35C(&InputUserBirthDayWindow_TypeInfo, v1);
    byte_4188F8A = 1;
  }
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y = 40;
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y = -6;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4188F89 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4188F89 = 1;
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
    sub_B2C2F8(
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

  InputUserBirthDayWindow__Close_27375844(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_27375844(
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
  __int64 v12; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v14; // x20

  if ( (byte_4188F84 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B2C35C(&Method_InputUserBirthDayWindow_EndClose__, v11);
    byte_4188F84 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
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
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       birthMonthInput,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B2C434(birthMonthInput, v12);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4188F83 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4188F83 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         birthMonthInput,
                                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         birthMonthInput,
                                                         (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_B2C434(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4188F80 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4188F80 = 1;
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
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_B2C434(gameObject, v4);
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
    sub_B2C434(birthMonthInput, method);
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
  __int64 v17; // x1
  int32_t v18; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v20; // x0
  int v21; // w20
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Int32_array *paramList; // x8
  struct System_Int32_array *v25; // x8
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v27; // x1
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v30; // x23
  System_String_o *v31; // x24
  System_Object_array *v32; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v34; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v45; // x2
  System_String_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x26
  InputUserBirthDayWindow_o *v54; // x0
  const MethodInfo *v55; // x2
  System_String_o *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x21
  InputUserBirthDayWindow_o *v64; // x0
  const MethodInfo *v65; // x2
  System_String_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x20
  System_String_o *v74; // x20
  System_String_o *v75; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v76; // x24
  __int64 v77; // x1
  const MethodInfo *v78; // x7
  InputUserBirthDayWindow_c *v79; // x0
  InputUserBirthDayConfirmWindow_o *v80; // x22
  System_String_o *v81; // x23
  System_String_o *v82; // x24
  Il2CppObject *v83; // x21
  Il2CppObject *v84; // x2
  System_String_o *v85; // x20
  System_String_o *v86; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v87; // x24
  __int64 v88; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x7
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  int v101; // [xsp+3Ch] [xbp-54h] BYREF
  __int64 v102; // [xsp+40h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v104; // 0:x0.8
  System_DateTime_o v105; // 0:x0.8
  System_DateTime_o v106; // 0:x0.8

  if ( (byte_4188F85 & 1) == 0 )
  {
    sub_B2C35C(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_InputUserBirthDayWindow_OnConfirm__, v3);
    sub_B2C35C(&InputUserBirthDayWindow_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&object___TypeInfo, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_11084/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v10);
    sub_B2C35C(&StringLiteral_12067/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, v11);
    sub_B2C35C(&StringLiteral_12066/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, v12);
    sub_B2C35C(&StringLiteral_11083/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, v13);
    sub_B2C35C(&StringLiteral_12065/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, v14);
    byte_4188F85 = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_B2C434(0LL, method);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v18 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_B2C434(0LL, v17);
    v20 = UILineInput__GetText(birthDayInput, 0LL);
    v21 = System_Int32__Parse(v20, 0LL);
    v102 = 0LL;
    v104.fields.dateData = (uint64_t)&v102;
    System_DateTime___ctor_15270084(v104, 2000, v18, v21, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_B2C434(v22, v23);
    if ( !paramList->max_length )
    {
      v91 = sub_B2C460(v22);
      sub_B2C400(v91, 0LL);
    }
    paramList->m_Items[1] = v18;
    v25 = this->fields.paramList;
    if ( !v25 )
      sub_B2C434(v22, v23);
    if ( v25->max_length <= 1 )
    {
      v92 = sub_B2C460(v22);
      sub_B2C400(v92, 0LL);
    }
    v25->m_Items[2] = v21;
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
        sub_B2C434(0LL, v27);
      birthDay = SelfUserGame->fields.birthDay;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getDateTime_26271468(birthDay, 0LL).fields.dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11084/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11083/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v32 = (System_Object_array *)sub_B2C374(object___TypeInfo, 4LL);
      v105.fields.dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v105, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v34);
      if ( !v32 )
        sub_B2C434(PaddingBirthday, v36);
      v43 = (System_Int32_array **)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_B2C41C(PaddingBirthday, v32->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v97 = sub_B2C454(0LL);
          sub_B2C400(v97, 0LL);
        }
      }
      if ( !v32->max_length )
      {
        v93 = sub_B2C460(PaddingBirthday);
        sub_B2C400(v93, 0LL);
      }
      v32->m_Items[0] = (Il2CppObject *)v43;
      sub_B2C2F8((BattleServantConfConponent_o *)v32->m_Items, v43, v37, v38, v39, v40, v41, v42);
      v106.fields.dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v106, 0LL);
      v46 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v45);
      v53 = (System_Int32_array **)v46;
      if ( v46 )
      {
        v46 = (System_String_o *)sub_B2C41C(v46, v32->obj.klass->_1.element_class);
        if ( !v46 )
        {
          v98 = sub_B2C454(0LL);
          sub_B2C400(v98, 0LL);
        }
      }
      if ( v32->max_length <= 1 )
      {
        v94 = sub_B2C460(v46);
        sub_B2C400(v94, 0LL);
      }
      v32->m_Items[1] = (Il2CppObject *)v53;
      sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[1], v53, v47, v48, v49, v50, v51, v52);
      v56 = InputUserBirthDayWindow__getPaddingBirthday(v54, v18, v55);
      v63 = (System_Int32_array **)v56;
      if ( v56 )
      {
        v56 = (System_String_o *)sub_B2C41C(v56, v32->obj.klass->_1.element_class);
        if ( !v56 )
        {
          v99 = sub_B2C454(0LL);
          sub_B2C400(v99, 0LL);
        }
      }
      if ( v32->max_length <= 2 )
      {
        v95 = sub_B2C460(v56);
        sub_B2C400(v95, 0LL);
      }
      v32->m_Items[2] = (Il2CppObject *)v63;
      sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[2], v63, v57, v58, v59, v60, v61, v62);
      v66 = InputUserBirthDayWindow__getPaddingBirthday(v64, v21, v65);
      v73 = (System_Int32_array **)v66;
      if ( v66 )
      {
        v66 = (System_String_o *)sub_B2C41C(v66, v32->obj.klass->_1.element_class);
        if ( !v66 )
        {
          v100 = sub_B2C454(0LL);
          sub_B2C400(v100, 0LL);
        }
      }
      if ( v32->max_length <= 3 )
      {
        v96 = sub_B2C460(v66);
        sub_B2C400(v96, 0LL);
      }
      v32->m_Items[3] = (Il2CppObject *)v73;
      sub_B2C2F8((BattleServantConfConponent_o *)&v32->m_Items[3], v73, v67, v68, v69, v70, v71, v72);
      v74 = System_String__Format_44384256(v31, v32, 0LL);
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v76 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B2C42C(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v76,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      v79 = InputUserBirthDayWindow_TypeInfo;
      if ( (BYTE3(InputUserBirthDayWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v79 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_B2C434(v79, v77);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v30,
        v74,
        v75,
        v76,
        v79->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v79->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v78);
    }
    else
    {
      v80 = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12067/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12065/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v102) = v18;
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
      v101 = v21;
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101);
      v85 = System_String__Format_44301068(v82, v83, v84, 0LL);
      v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12066/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v87 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B2C42C(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v87,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      if ( !v80 )
        sub_B2C434(v88, v89);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v80, v81, v85, v86, v87, 30, 0, v90);
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
    sub_B2C434(0LL, isDecide);
  InputUserBirthDayConfirmWindow__Close_27373628(confirmWindow, 0LL, method);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool IsOpen; // w0
  UILabel_o *titleLb; // x20
  System_String_o **v26; // x8
  System_String_o *v27; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v30; // x8
  System_String_o *v31; // x21
  struct System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Action_o *v39; // x20

  if ( (byte_4188F81 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_InputUserBirthDayWindow_EndOpen__, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_7297/*"INPUT_BIRTHDAY_INFO"*/, v10);
    sub_B2C35C(&StringLiteral_7298/*"INPUT_BIRTHDAY_NOTICE"*/, v11);
    sub_B2C35C(&StringLiteral_11086/*"RESET_BIRTHDAY_TITLE"*/, v12);
    sub_B2C35C(&StringLiteral_7299/*"INPUT_BIRTHDAY_TITLE"*/, v13);
    sub_B2C35C(&StringLiteral_11085/*"RESET_BIRTHDAY_NOTICE"*/, v14);
    byte_4188F81 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v17);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  titleLb = this->fields.titleLb;
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v26 = (System_String_o **)&StringLiteral_11086/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v26 = (System_String_o **)&StringLiteral_7299/*"INPUT_BIRTHDAY_TITLE"*/;
  v27 = *v26;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v27, 0LL);
  if ( !titleLb )
    goto LABEL_27;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7297/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_27;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v30 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11085/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7298/*"INPUT_BIRTHDAY_NOTICE"*/);
  v31 = *v30;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v31, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_27:
    sub_B2C434(gameObject, v16);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  v32 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  this->fields.paramList = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.paramList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
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

  if ( (byte_4188F7E & 1) == 0 )
  {
    sub_B2C35C(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4188F7E = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_B2C728(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4188F86 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4188F86 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
  if ( (byte_4188F88 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_81/*"  "*/, *(_QWORD *)&num);
    byte_4188F88 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_44305532((System_String_o *)StringLiteral_81/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188F87 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2742/*"BaseWindow/CancleBtn"*/, method);
    byte_4188F87 = 1;
  }
  return (System_String_o *)StringLiteral_2742/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4188F7F & 1) == 0 )
  {
    sub_B2C35C(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4188F7F = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_B2C728(v8);
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

  if ( (byte_4188F82 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    byte_4188F82 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_9;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              confirmBtnBg,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B2C434(confirmBtnBg, method);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_41841FB & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41841FB = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, result, param, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v11, v13);
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