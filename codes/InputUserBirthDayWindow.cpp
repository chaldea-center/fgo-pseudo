void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F7AEA & 1) == 0 )
  {
    sub_1B640C8(&InputUserBirthDayWindow_TypeInfo, v1);
    byte_49F7AEA = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_49F7AE9 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F7AE9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayWindow__Callback(
        InputUserBirthDayWindow_o *this,
        bool result,
        System_Int32_array *param,
        const MethodInfo *method)
{
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x0
  struct InputUserBirthDayWindow_CallbackFunc_o *v6; // x21
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1B6406C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, struct System_Int32_array *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      result,
      this->fields.paramList,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayWindow__Close(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayWindow__Close_30859016(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_30859016(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20

  if ( (byte_49F7AE4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1B640C8(&Method_InputUserBirthDayWindow_EndClose__, v6);
    byte_49F7AE4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(&this->fields.closeCallbackFunc);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1B64324(birthMonthInput);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B6406C(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_49F7AE3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_49F7AE3 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1B64324(birthMonthInput);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F7AE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_49F7AE0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  UnityEngine_Input__set_imeCompositionMode(0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput;
  this->fields.state = 0;
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_1B64324(gameObject);
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
    sub_1B64324(birthMonthInput);
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
  __int64 v15; // x1
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  int32_t v18; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v20; // x0
  int v21; // w20
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Int32_array *paramList; // x8
  il2cpp_array_size_t max_length; // w9
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v31; // x23
  System_String_o *v32; // x24
  System_Object_array *v33; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v35; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v37; // x1
  Il2CppObject *v38; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v40; // x2
  System_String_o *v41; // x0
  __int64 v42; // x1
  Il2CppObject *v43; // x26
  InputUserBirthDayWindow_o *v44; // x0
  const MethodInfo *v45; // x2
  System_String_o *v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  InputUserBirthDayWindow_o *v49; // x0
  const MethodInfo *v50; // x2
  System_String_o *v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x20
  System_String_o *v54; // x20
  System_String_o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v58; // x24
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x7
  InputUserBirthDayWindow_c *v61; // x0
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  InputUserBirthDayConfirmWindow_o *v64; // x22
  System_String_o *v65; // x23
  System_String_o *v66; // x24
  Il2CppObject *v67; // x21
  Il2CppObject *v68; // x2
  System_String_o *v69; // x20
  System_String_o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v73; // x24
  const MethodInfo *v74; // x3
  __int64 v75; // x0
  const MethodInfo *v76; // x7
  __int64 v77; // x0
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x0
  int v81; // [xsp+34h] [xbp-5Ch] BYREF
  __int64 v82; // [xsp+38h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v84; // 0:x0.8
  System_DateTime_o v85; // 0:x0.8
  System_DateTime_o v86; // 0:x0.8

  if ( (byte_49F7AE5 & 1) == 0 )
  {
    sub_1B640C8(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&System_DateTime_TypeInfo, v3);
    sub_1B640C8(&Method_InputUserBirthDayWindow_OnClickDecide__, v4);
    sub_1B640C8(&Method_InputUserBirthDayWindow_OnConfirm__, v5);
    sub_1B640C8(&InputUserBirthDayWindow_TypeInfo, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&object___TypeInfo, v10);
    sub_1B640C8(&StringLiteral_11011/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v11);
    sub_1B640C8(&StringLiteral_11907/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_11906/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, v13);
    sub_1B640C8(&StringLiteral_11010/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, v14);
    sub_1B640C8(&StringLiteral_11905/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, v15);
    byte_49F7AE5 = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1B64324(0LL);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v18 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1B64324(0LL);
    v20 = UILineInput__GetText(birthDayInput, 0LL);
    v21 = System_Int32__Parse(v20, 0LL);
    v82 = 0LL;
    v84.fields._dateData = (uint64_t)&v82;
    System_DateTime___ctor_62053268(v84, 2000, v18, v21, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1B64324(v22);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1B6432C(v22, v23);
    paramList->m_Items[1] = v18;
    if ( max_length == 1 )
      sub_1B6432C(v22, v23);
    paramList->m_Items[2] = v21;
    v26 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1B640E0(Method_InputUserBirthDayWindow_OnClickDecide__);
    v27 = (System_Reflection_MethodBase_o *)sub_1B640AC(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        sub_1B64324(0LL);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_38073412(birthDay, 0LL).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11011/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11010/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v33 = (System_Object_array *)sub_1B64170(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v85.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v85, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v35);
      if ( !v33 )
        sub_1B64324(PaddingBirthday);
      v38 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1B64204(PaddingBirthday, v33->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v77 = sub_1B64348();
          sub_1B641F0(v77, 0LL);
        }
      }
      if ( !v33->max_length )
        sub_1B6432C(PaddingBirthday, v37);
      v33->m_Items[0] = v38;
      sub_1B6406C(v33->m_Items);
      v86.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v86, 0LL);
      v41 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v40);
      v43 = (Il2CppObject *)v41;
      if ( v41 )
      {
        v41 = (System_String_o *)sub_1B64204(v41, v33->obj.klass->_1.element_class);
        if ( !v41 )
        {
          v78 = sub_1B64348();
          sub_1B641F0(v78, 0LL);
        }
      }
      if ( v33->max_length <= 1 )
        sub_1B6432C(v41, v42);
      v33->m_Items[1] = v43;
      v44 = (InputUserBirthDayWindow_o *)sub_1B6406C(&v33->m_Items[1]);
      v46 = InputUserBirthDayWindow__getPaddingBirthday(v44, v18, v45);
      v48 = (Il2CppObject *)v46;
      if ( v46 )
      {
        v46 = (System_String_o *)sub_1B64204(v46, v33->obj.klass->_1.element_class);
        if ( !v46 )
        {
          v79 = sub_1B64348();
          sub_1B641F0(v79, 0LL);
        }
      }
      if ( v33->max_length <= 2 )
        sub_1B6432C(v46, v47);
      v33->m_Items[2] = v48;
      v49 = (InputUserBirthDayWindow_o *)sub_1B6406C(&v33->m_Items[2]);
      v51 = InputUserBirthDayWindow__getPaddingBirthday(v49, v21, v50);
      v53 = (Il2CppObject *)v51;
      if ( v51 )
      {
        v51 = (System_String_o *)sub_1B64204(v51, v33->obj.klass->_1.element_class);
        if ( !v51 )
        {
          v80 = sub_1B64348();
          sub_1B641F0(v80, 0LL);
        }
      }
      if ( v33->max_length <= 3 )
        sub_1B6432C(v51, v52);
      v33->m_Items[3] = v53;
      sub_1B6406C(&v33->m_Items[3]);
      v54 = System_String__Format_61389904(v32, v33, 0LL);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v58 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1B64314(
                                                               InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo,
                                                               v56,
                                                               v57);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v58,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v59);
      v61 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v61 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1B64324(v61);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v31,
        v54,
        v55,
        v58,
        v61->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v61->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v60);
    }
    else
    {
      v64 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11907/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11905/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v82) = v18;
      v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
      v81 = v21;
      v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
      v69 = System_String__Format_61389768(v66, v67, v68, 0LL);
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11906/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v73 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1B64314(
                                                               InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo,
                                                               v71,
                                                               v72);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v73,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v74);
      if ( !v64 )
        sub_1B64324(v75);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v64, v65, v69, v70, v73, 30, 0, v76);
    }
  }
  else
  {
    v62 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v62 = (_QWORD *)sub_1B640E0(Method_InputUserBirthDayWindow_OnClickDecide__);
    v63 = (System_Reflection_MethodBase_o *)sub_1B640AC(v62, v62[4]);
    OverwriteAssetSoundName__PlaySystemSe(v63, 2, 0LL);
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
    sub_1B64324(0LL);
  InputUserBirthDayConfirmWindow__Close_30856512(confirmWindow, 0LL, method);
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
  bool IsOpen; // w0
  System_String_o **v18; // x8
  UILabel_o *titleLb; // x20
  System_String_o *v20; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v23; // x8
  System_String_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x20

  if ( (byte_49F7AE1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1B640C8(&CondType_TypeInfo, v6);
    sub_1B640C8(&Method_InputUserBirthDayWindow_EndOpen__, v7);
    sub_1B640C8(&int___TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_7347/*"INPUT_BIRTHDAY_INFO"*/, v10);
    sub_1B640C8(&StringLiteral_7348/*"INPUT_BIRTHDAY_NOTICE"*/, v11);
    sub_1B640C8(&StringLiteral_11013/*"RESET_BIRTHDAY_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_7349/*"INPUT_BIRTHDAY_TITLE"*/, v13);
    sub_1B640C8(&StringLiteral_11012/*"RESET_BIRTHDAY_NOTICE"*/, v14);
    byte_49F7AE1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v16);
  this->fields.callbackFunc = callback;
  sub_1B6406C(&this->fields.callbackFunc);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v18 = (System_String_o **)&StringLiteral_11013/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v18 = (System_String_o **)&StringLiteral_7349/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v20 = *v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v20, 0LL);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7347/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v23 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11012/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7348/*"INPUT_BIRTHDAY_NOTICE"*/);
  v24 = *v23;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v24, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_24:
    sub_1B64324(gameObject);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  this->fields.paramList = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  sub_1B6406C(&this->fields.paramList);
  v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
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

  if ( (byte_49F7ADE & 1) == 0 )
  {
    sub_1B640C8(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_49F7ADE = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1B645E4(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F7AE6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F7AE6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
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
  if ( (byte_49F7AE8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_118/*"  "*/, *(_QWORD *)&num);
    byte_49F7AE8 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_61375396((System_String_o *)StringLiteral_118/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F7AE7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3175/*"BaseWindow/CancleBtn"*/, method);
    byte_49F7AE7 = 1;
  }
  return (System_String_o *)StringLiteral_3175/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_49F7ADF & 1) == 0 )
  {
    sub_1B640C8(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_49F7ADF = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1B645E4(v8);
  InputUserBirthDayWindow__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow__setExeBtnState(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confirmBtnBg; // x0
  UIWidget_o *confirmTxt; // x8
  _BOOL4 isInput; // w20
  UIWidget_o *v6; // x19
  float v7; // s8
  float v8; // s3
  float v9; // s0
  float v10; // s1
  float v11; // s2
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F7AE2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    byte_49F7AE2 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  if ( !confirmTxt )
    goto LABEL_11;
  isInput = this->fields.isInput;
  v6 = (UIWidget_o *)confirmBtnBg;
  v12.fields.r = 0.0;
  v12.fields.g = 0.0;
  v12.fields.b = 0.0;
  v12.fields.a = 1.0;
  v7 = 1.0;
  UIWidget__set_color(confirmTxt, v12, 0LL);
  if ( !isInput )
  {
    if ( v6 )
    {
      v8 = 1.0;
      v7 = 0.5;
      goto LABEL_10;
    }
LABEL_11:
    sub_1B64324(confirmBtnBg);
  }
  if ( !v6 )
    goto LABEL_11;
  v8 = 1.0;
LABEL_10:
  v9 = v7;
  v10 = v7;
  v11 = v7;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)(&v8 - 3), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow_CallbackFunc___ctor(
        InputUserBirthDayWindow_CallbackFunc_o *this,
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A5284;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A522C;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_49F7AEB & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, result);
    byte_49F7AEB = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__Invoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        bool result,
        System_Int32_array *param,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_Int32_array *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    param,
    *(_QWORD *)&this->fields.extra_arg);
}