void InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4CB1369 & 1) == 0 )
  {
    sub_1C6BA08(&InputUserBirthDayWindow_TypeInfo);
    byte_4CB1369 = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4CB1368 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB1368 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void InputUserBirthDayWindow__Callback(
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
    this->fields.callbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_callbackFunc, 0, (int32_t)param, method);
    ((void (__fastcall *)(intptr_t, bool, struct System_Int32_array *, intptr_t))v6->fields.invoke_impl)(
      v6->fields.method_code,
      result,
      this->fields.paramList,
      v6->fields.method);
  }
}


void InputUserBirthDayWindow__Close(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayWindow__Close_33443100(this, 0, v2);
}


void InputUserBirthDayWindow__Close_33443100(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v8; // x20

  if ( (byte_4CB1363 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C6BA08(&Method_InputUserBirthDayWindow_EndClose__);
    byte_4CB1363 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C6BC60(birthMonthInput, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


void InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C6B9AC(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4CB1362 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CB1362 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
    {
      sub_1C6BC60(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0);
  }
}


void InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4CB135F & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CB135F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  UnityEngine_Input__set_imeCompositionMode(0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput;
  this->fields.state = 0;
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_9:
    sub_1C6BC60(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void InputUserBirthDayWindow__OnChangeInput(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UILineInput_o *birthMonthInput; // x0
  System_String_o *v4; // x20
  System_String_o *Text; // x21
  const MethodInfo *v6; // x1
  bool v7; // w8

  birthMonthInput = this->fields.birthMonthInput;
  if ( !birthMonthInput
    || (birthMonthInput = (UILineInput_o *)UILineInput__GetText(birthMonthInput, 0), !this->fields.birthDayInput) )
  {
    sub_1C6BC60(birthMonthInput, method);
  }
  v4 = (System_String_o *)birthMonthInput;
  Text = UILineInput__GetText(this->fields.birthDayInput, 0);
  v7 = !System_String__IsNullOrEmpty(v4, 0) && !System_String__IsNullOrEmpty(Text, 0);
  this->fields.isInput = v7;
  InputUserBirthDayWindow__setExeBtnState(this, v6);
}


void InputUserBirthDayWindow__OnClickCancel(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  System_Int32_array *v2; // x2
  const MethodInfo *v3; // x3

  InputUserBirthDayWindow__Callback(this, 0, v2, v3);
}


void InputUserBirthDayWindow__OnClickDecide(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  __int64 v5; // x1
  int32_t v6; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v8; // x0
  int32_t v9; // w20
  System_DateTime_o v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Int32_array *paramList; // x8
  int max_length; // w9
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v18; // x1
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v21; // x23
  System_String_o *v22; // x24
  System_Object_array *v23; // x25
  System_DateTime_o v24; // x0
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v26; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x26
  System_DateTime_o v32; // x0
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v34; // x2
  System_String_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x26
  InputUserBirthDayWindow_o *v39; // x0
  const MethodInfo *v40; // x2
  System_String_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x21
  InputUserBirthDayWindow_o *v45; // x0
  const MethodInfo *v46; // x2
  System_String_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x20
  System_String_o *v51; // x20
  System_String_o *v52; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v53; // x24
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  const MethodInfo *v56; // x7
  InputUserBirthDayWindow_c *v57; // x0
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  InputUserBirthDayConfirmWindow_o *v60; // x22
  System_String_o *v61; // x23
  System_String_o *v62; // x24
  Il2CppObject *v63; // x21
  Il2CppObject *v64; // x2
  System_String_o *v65; // x20
  System_String_o *v66; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v67; // x24
  const MethodInfo *v68; // x3
  __int64 v69; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x7
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  int32_t v76; // [xsp+44h] [xbp-5Ch] BYREF
  __int64 v77; // [xsp+48h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4CB1364 & 1) == 0 )
  {
    sub_1C6BA08(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&Method_InputUserBirthDayWindow_OnClickDecide__);
    sub_1C6BA08(&Method_InputUserBirthDayWindow_OnConfirm__);
    sub_1C6BA08(&InputUserBirthDayWindow_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&StringLiteral_11087/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C6BA08(&StringLiteral_12019/*"SET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C6BA08(&StringLiteral_12018/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/);
    sub_1C6BA08(&StringLiteral_11086/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_12017/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    byte_4CB1364 = 1;
  }
  dateData = 0;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1C6BC60(0, method);
    Text = UILineInput__GetText(birthMonthInput, 0);
    v6 = System_Int32__Parse(Text, 0);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1C6BC60(0, v5);
    v8 = UILineInput__GetText(birthDayInput, 0);
    v9 = System_Int32__Parse(v8, 0);
    v77 = 0;
    v10.fields._dateData = (uint64_t)&v77;
    System_DateTime___ctor_65350956(v10, 2000, v6, v9, 0);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1C6BC60(v11, v12);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1C6BC68(v11);
    paramList->m_Items[0] = v6;
    if ( max_length == 1 )
      sub_1C6BC68(v11);
    paramList->m_Items[1] = v9;
    v15 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C6BA20(Method_InputUserBirthDayWindow_OnClickDecide__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !SelfUserGame )
        sub_1C6BC60(0, v18);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_41600544(birthDay, 0).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11087/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11086/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      v23 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v24.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v24, 0);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v26);
      if ( !v23 )
        sub_1C6BC60(PaddingBirthday, v28);
      v31 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1C6BB44(PaddingBirthday, v23->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v72 = sub_1C6BC84();
          sub_1C6BB30(v72, 0);
        }
      }
      if ( !LODWORD(v23->max_length) )
        sub_1C6BC68(PaddingBirthday);
      v23->m_Items[0] = v31;
      sub_1C6B9AC((CGThumbnailListItem_o *)v23->m_Items, (int32_t)v31, v29, v30);
      v32.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v32, 0);
      v35 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v34);
      v38 = (Il2CppObject *)v35;
      if ( v35 )
      {
        v35 = (System_String_o *)sub_1C6BB44(v35, v23->obj.klass->_1.element_class);
        if ( !v35 )
        {
          v73 = sub_1C6BC84();
          sub_1C6BB30(v73, 0);
        }
      }
      if ( LODWORD(v23->max_length) <= 1 )
        sub_1C6BC68(v35);
      v23->m_Items[1] = v38;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v23->m_Items[1], (int32_t)v38, v36, v37);
      v41 = InputUserBirthDayWindow__getPaddingBirthday(v39, v6, v40);
      v44 = (Il2CppObject *)v41;
      if ( v41 )
      {
        v41 = (System_String_o *)sub_1C6BB44(v41, v23->obj.klass->_1.element_class);
        if ( !v41 )
        {
          v74 = sub_1C6BC84();
          sub_1C6BB30(v74, 0);
        }
      }
      if ( LODWORD(v23->max_length) <= 2 )
        sub_1C6BC68(v41);
      v23->m_Items[2] = v44;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v23->m_Items[2], (int32_t)v44, v42, v43);
      v47 = InputUserBirthDayWindow__getPaddingBirthday(v45, v9, v46);
      v50 = (Il2CppObject *)v47;
      if ( v47 )
      {
        v47 = (System_String_o *)sub_1C6BB44(v47, v23->obj.klass->_1.element_class);
        if ( !v47 )
        {
          v75 = sub_1C6BC84();
          sub_1C6BB30(v75, 0);
        }
      }
      if ( LODWORD(v23->max_length) <= 3 )
        sub_1C6BC68(v47);
      v23->m_Items[3] = v50;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v23->m_Items[3], (int32_t)v50, v48, v49);
      v51 = System_String__Format_64008236(v22, v23, 0);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v53 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C6BC54(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v53,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v54);
      v57 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v57 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1C6BC60(v57, v55);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v21,
        v51,
        v52,
        v53,
        v57->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v57->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v56);
    }
    else
    {
      v60 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12019/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_12017/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      LODWORD(v77) = v6;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
      v76 = v9;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
      v65 = System_String__Format_64008100(v62, v63, v64, 0);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v67 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C6BC54(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v67,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v68);
      if ( !v60 )
        sub_1C6BC60(v69, v70);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v60, v61, v65, v66, v67, 30, 0, v71);
    }
  }
  else
  {
    v58 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v58 = (_QWORD *)sub_1C6BA20(Method_InputUserBirthDayWindow_OnClickDecide__);
    v59 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v58, v58[4]);
    OverwriteAssetSoundName__PlaySystemSe(v59, 2, 0, 0);
  }
}


void InputUserBirthDayWindow__OnConfirm(InputUserBirthDayWindow_o *this, bool isDecide, const MethodInfo *method)
{
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x0
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  confirmWindow = this->fields.confirmWindow;
  if ( !confirmWindow )
    sub_1C6BC60(0, isDecide);
  InputUserBirthDayConfirmWindow__Close_33440584(confirmWindow, 0, method);
  if ( isDecide )
    InputUserBirthDayWindow__Callback(this, 1, v6, v7);
}


void InputUserBirthDayWindow__OpenInputBirthDayWindow(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool IsOpen; // w0
  System_String_o **v11; // x8
  UILabel_o *titleLb; // x20
  System_String_o *v13; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v16; // x8
  System_String_o *v17; // x21
  struct System_Int32_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_4CB1360 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_InputUserBirthDayWindow_EndOpen__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_7460/*"INPUT_BIRTHDAY_INFO"*/);
    sub_1C6BA08(&StringLiteral_7461/*"INPUT_BIRTHDAY_NOTICE"*/);
    sub_1C6BA08(&StringLiteral_11089/*"RESET_BIRTHDAY_TITLE"*/);
    sub_1C6BA08(&StringLiteral_7462/*"INPUT_BIRTHDAY_TITLE"*/);
    sub_1C6BA08(&StringLiteral_11088/*"RESET_BIRTHDAY_NOTICE"*/);
    byte_4CB1360 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v7);
  this->fields.callbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v8, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0, 0, 0, 0);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v11 = (System_String_o **)&StringLiteral_11089/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v11 = (System_String_o **)&StringLiteral_7462/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v13 = *v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v13, 0);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7460/*"INPUT_BIRTHDAY_INFO"*/, 0);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0);
  noticeLb = this->fields.noticeLb;
  v16 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11088/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7461/*"INPUT_BIRTHDAY_NOTICE"*/);
  v17 = *v16;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v17, 0);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_24:
    sub_1C6BC60(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  v18 = (struct System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 2);
  this->fields.paramList = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.paramList, (int32_t)v18, v19, v20);
  v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0, 0);
}


void InputUserBirthDayWindow__add_callbackFunc(
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

  if ( (byte_4CB135D & 1) == 0 )
  {
    sub_1C6BA08(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4CB135D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (InputUserBirthDayWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C6BFFC(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CB1365 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB1365 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


System_String_o *InputUserBirthDayWindow__getPaddingBirthday(
        InputUserBirthDayWindow_o *this,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x1
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = num;
  if ( (byte_4CB1367 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_114/*"  "*/);
    byte_4CB1367 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  if ( num <= 9 )
    return System_String__Concat_63966792((System_String_o *)StringLiteral_114/*"  "*/, v4, 0);
  return v4;
}


System_String_o *InputUserBirthDayWindow__get_closeBtnPath(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4CB1366 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_3065/*"BaseWindow/CancleBtn"*/);
    byte_4CB1366 = 1;
  }
  return (System_String_o *)StringLiteral_3065/*"BaseWindow/CancleBtn"*/;
}


void InputUserBirthDayWindow__remove_callbackFunc(
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

  if ( (byte_4CB135E & 1) == 0 )
  {
    sub_1C6BA08(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4CB135E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (InputUserBirthDayWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C6BFFC(v8);
  InputUserBirthDayWindow__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void InputUserBirthDayWindow__setExeBtnState(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confirmBtnBg; // x0
  UIWidget_o *confirmTxt; // x8
  _BOOL4 isInput; // w20
  UIWidget_o *v6; // x19
  float v7; // s8
  float v8; // s3 OVERLAPPED
  float v9; // s0
  float v10; // s1
  float v11; // s2
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB1361 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CB1361 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  UIWidget__set_color(confirmTxt, v12, 0);
  if ( !isInput )
  {
    if ( v6 )
    {
      v8 = 1.0;
      v7 = 0.5;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C6BC60(confirmBtnBg, method);
  }
  if ( !v6 )
    goto LABEL_11;
  v8 = 1.0;
LABEL_10:
  v9 = v7;
  v10 = v7;
  v11 = v7;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)(&v8 - 3), 0);
}


void InputUserBirthDayWindow_CallbackFunc___ctor(
        InputUserBirthDayWindow_CallbackFunc_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9A298;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9A240;
}


System_IAsyncResult_o *InputUserBirthDayWindow_CallbackFunc__BeginInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        bool result,
        System_Int32_array *param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_4CB136A & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB136A = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = param;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v11, callback, object);
}


void InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void InputUserBirthDayWindow_CallbackFunc__Invoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        bool result,
        System_Int32_array *param,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, System_Int32_array *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    param,
    this->fields.method);
}