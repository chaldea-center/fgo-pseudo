void InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4C32AB7 & 1) == 0 )
  {
    sub_1C32C20(&InputUserBirthDayWindow_TypeInfo);
    byte_4C32AB7 = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C32AB6 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C32AB6 = 1;
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
    sub_1C32BC4((CGThumbnailListItem_o *)p_callbackFunc, 0, (int32_t)param, method);
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

  InputUserBirthDayWindow__Close_33137608(this, 0, v2);
}


void InputUserBirthDayWindow__Close_33137608(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C32AB1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&Method_InputUserBirthDayWindow_EndClose__);
    byte_4C32AB1 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C32E7C(birthMonthInput);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0);
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0);
}


void InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
  }
}


void InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4C32AB0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C32AB0 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
    {
      sub_1C32E7C(birthMonthInput);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0);
  }
}


void InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C32AAD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C32AAD = 1;
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
                                                   (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_9:
    sub_1C32E7C(gameObject);
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
    sub_1C32E7C(birthMonthInput);
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
  int32_t v5; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v7; // x0
  int32_t v8; // w20
  System_DateTime_o v9; // x0
  __int64 v10; // x0
  struct System_Int32_array *paramList; // x8
  int max_length; // w9
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v18; // x23
  System_String_o *v19; // x24
  System_Object_array *v20; // x25
  System_DateTime_o v21; // x0
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v23; // x2
  System_String_o *PaddingBirthday; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x26
  System_DateTime_o v28; // x0
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v30; // x2
  System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x26
  InputUserBirthDayWindow_o *v35; // x0
  const MethodInfo *v36; // x2
  System_String_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  InputUserBirthDayWindow_o *v41; // x0
  const MethodInfo *v42; // x2
  System_String_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x20
  System_String_o *v47; // x20
  System_String_o *v48; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v49; // x24
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x7
  InputUserBirthDayWindow_c *v52; // x0
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  InputUserBirthDayConfirmWindow_o *v55; // x22
  System_String_o *v56; // x23
  System_String_o *v57; // x24
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  Il2CppObject *v64; // x21
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  Il2CppObject *v71; // x2
  System_String_o *v72; // x20
  System_String_o *v73; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v74; // x24
  const MethodInfo *v75; // x3
  __int64 v76; // x0
  const MethodInfo *v77; // x7
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x0
  int32_t v82; // [xsp+44h] [xbp-5Ch] BYREF
  __int64 v83; // [xsp+48h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4C32AB2 & 1) == 0 )
  {
    sub_1C32C20(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&Method_InputUserBirthDayWindow_OnClickDecide__);
    sub_1C32C20(&Method_InputUserBirthDayWindow_OnConfirm__);
    sub_1C32C20(&InputUserBirthDayWindow_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_11088/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_12019/*"SET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_12018/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/);
    sub_1C32C20(&StringLiteral_11087/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_12017/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    byte_4C32AB2 = 1;
  }
  dateData = 0;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1C32E7C(0);
    Text = UILineInput__GetText(birthMonthInput, 0);
    v5 = System_Int32__Parse(Text, 0);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1C32E7C(0);
    v7 = UILineInput__GetText(birthDayInput, 0);
    v8 = System_Int32__Parse(v7, 0);
    v83 = 0;
    v9.fields._dateData = (uint64_t)&v83;
    System_DateTime___ctor_64904320(v9, 2000, v5, v8, 0);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1C32E7C(v10);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1C32E84(v10);
    paramList->m_Items[0] = v5;
    if ( max_length == 1 )
      sub_1C32E84(v10);
    paramList->m_Items[1] = v8;
    v13 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C32C38(Method_InputUserBirthDayWindow_OnClickDecide__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C32C04(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !SelfUserGame )
        sub_1C32E7C(0);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_41267668(birthDay, 0).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11088/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_11087/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      v20 = (System_Object_array *)sub_1C32CC8(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v21.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v21, 0);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v23);
      if ( !v20 )
        sub_1C32E7C(PaddingBirthday);
      v27 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1C32D5C(PaddingBirthday, v20->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v78 = sub_1C32EA0();
          sub_1C32D48(v78, 0);
        }
      }
      if ( !LODWORD(v20->max_length) )
        sub_1C32E84(PaddingBirthday);
      v20->m_Items[0] = v27;
      sub_1C32BC4((CGThumbnailListItem_o *)v20->m_Items, (int32_t)v27, v25, v26);
      v28.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v28, 0);
      v31 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v30);
      v34 = (Il2CppObject *)v31;
      if ( v31 )
      {
        v31 = (System_String_o *)sub_1C32D5C(v31, v20->obj.klass->_1.element_class);
        if ( !v31 )
        {
          v79 = sub_1C32EA0();
          sub_1C32D48(v79, 0);
        }
      }
      if ( LODWORD(v20->max_length) <= 1 )
        sub_1C32E84(v31);
      v20->m_Items[1] = v34;
      sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[1], (int32_t)v34, v32, v33);
      v37 = InputUserBirthDayWindow__getPaddingBirthday(v35, v5, v36);
      v40 = (Il2CppObject *)v37;
      if ( v37 )
      {
        v37 = (System_String_o *)sub_1C32D5C(v37, v20->obj.klass->_1.element_class);
        if ( !v37 )
        {
          v80 = sub_1C32EA0();
          sub_1C32D48(v80, 0);
        }
      }
      if ( LODWORD(v20->max_length) <= 2 )
        sub_1C32E84(v37);
      v20->m_Items[2] = v40;
      sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[2], (int32_t)v40, v38, v39);
      v43 = InputUserBirthDayWindow__getPaddingBirthday(v41, v8, v42);
      v46 = (Il2CppObject *)v43;
      if ( v43 )
      {
        v43 = (System_String_o *)sub_1C32D5C(v43, v20->obj.klass->_1.element_class);
        if ( !v43 )
        {
          v81 = sub_1C32EA0();
          sub_1C32D48(v81, 0);
        }
      }
      if ( LODWORD(v20->max_length) <= 3 )
        sub_1C32E84(v43);
      v20->m_Items[3] = v46;
      sub_1C32BC4((CGThumbnailListItem_o *)&v20->m_Items[3], (int32_t)v46, v44, v45);
      v47 = System_String__Format_63559972(v19, v20, 0);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v49 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C32E6C(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v49,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v50);
      v52 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v52 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1C32E7C(v52);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v18,
        v47,
        v48,
        v49,
        v52->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v52->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v51);
    }
    else
    {
      v55 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_12019/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12017/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      LODWORD(v83) = v5;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v58, v59, v60, v61, v62, v63);
      v82 = v8;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v65, v66, v67, v68, v69, v70);
      v72 = System_String__Format_63559836(v57, v64, v71, 0);
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12018/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v74 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C32E6C(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v74,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v75);
      if ( !v55 )
        sub_1C32E7C(v76);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v55, v56, v72, v73, v74, 30, 0, v77);
    }
  }
  else
  {
    v53 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v53 = (_QWORD *)sub_1C32C38(Method_InputUserBirthDayWindow_OnClickDecide__);
    v54 = (System_Reflection_MethodBase_o *)sub_1C32C04(v53, v53[4]);
    OverwriteAssetSoundName__PlaySystemSe(v54, 2, 0, 0);
  }
}


void InputUserBirthDayWindow__OnConfirm(InputUserBirthDayWindow_o *this, bool isDecide, const MethodInfo *method)
{
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x0
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  confirmWindow = this->fields.confirmWindow;
  if ( !confirmWindow )
    sub_1C32E7C(0);
  InputUserBirthDayConfirmWindow__Close_33135092(confirmWindow, 0, method);
  if ( isDecide )
    InputUserBirthDayWindow__Callback(this, 1, v6, v7);
}


void InputUserBirthDayWindow__OpenInputBirthDayWindow(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool IsOpen; // w0
  System_String_o **v10; // x8
  UILabel_o *titleLb; // x20
  System_String_o *v12; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v15; // x8
  System_String_o *v16; // x21
  struct System_Int32_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x20

  if ( (byte_4C32AAE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_InputUserBirthDayWindow_EndOpen__);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_7465/*"INPUT_BIRTHDAY_INFO"*/);
    sub_1C32C20(&StringLiteral_7466/*"INPUT_BIRTHDAY_NOTICE"*/);
    sub_1C32C20(&StringLiteral_11090/*"RESET_BIRTHDAY_TITLE"*/);
    sub_1C32C20(&StringLiteral_7467/*"INPUT_BIRTHDAY_TITLE"*/);
    sub_1C32C20(&StringLiteral_11089/*"RESET_BIRTHDAY_NOTICE"*/);
    byte_4C32AAE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v6);
  this->fields.callbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v7, v8);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0, 0, 0, 0);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v10 = (System_String_o **)&StringLiteral_11090/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v10 = (System_String_o **)&StringLiteral_7467/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v12 = *v10;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v12, 0);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7465/*"INPUT_BIRTHDAY_INFO"*/, 0);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0);
  noticeLb = this->fields.noticeLb;
  v15 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11089/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7466/*"INPUT_BIRTHDAY_NOTICE"*/);
  v16 = *v15;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v16, 0);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_24:
    sub_1C32E7C(gameObject);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  v17 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  this->fields.paramList = v17;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.paramList, (int32_t)v17, v18, v19);
  v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
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

  if ( (byte_4C32AAB & 1) == 0 )
  {
    sub_1C32C20(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4C32AAB = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C3313C(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C32AB3 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32AB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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
  if ( (byte_4C32AB5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_114/*"  "*/);
    byte_4C32AB5 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  if ( num <= 9 )
    return System_String__Concat_63518544((System_String_o *)StringLiteral_114/*"  "*/, v4, 0);
  return v4;
}


System_String_o *InputUserBirthDayWindow__get_closeBtnPath(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C32AB4 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3073/*"BaseWindow/CancleBtn"*/);
    byte_4C32AB4 = 1;
  }
  return (System_String_o *)StringLiteral_3073/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4C32AAC & 1) == 0 )
  {
    sub_1C32C20(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4C32AAC = 1;
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
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C3313C(v8);
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

  if ( (byte_4C32AAF & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C32AAF = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C32E7C(confirmBtnBg);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
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
  this->fields.invoke_impl = (intptr_t)sub_1A70148;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A700F0;
}


System_IAsyncResult_o *InputUserBirthDayWindow_CallbackFunc__BeginInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        bool result,
        System_Int32_array *param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v14[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v14[0] = result;
  if ( (byte_4C32AB8 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C32AB8 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v14, param, callback, object, method, v6, v7);
  v13[1] = param;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v13, callback, object);
}


void InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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