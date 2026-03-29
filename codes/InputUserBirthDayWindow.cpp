void InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4D2B9F2 & 1) == 0 )
  {
    sub_1C93AD4(&InputUserBirthDayWindow_TypeInfo);
    byte_4D2B9F2 = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B9F1 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2B9F1 = 1;
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x0
  struct InputUserBirthDayWindow_CallbackFunc_o *v10; // x21
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_callbackFunc, 0, (int32_t)param, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, struct System_Int32_array *, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      result,
      this->fields.paramList,
      v10->fields.method);
  }
}


void InputUserBirthDayWindow__Close(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayWindow__Close_33828504(this, 0, v2);
}


void InputUserBirthDayWindow__Close_33828504(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v12; // x20

  if ( (byte_4D2B9EC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&Method_InputUserBirthDayWindow_EndClose__);
    byte_4D2B9EC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C93D2C(birthMonthInput, v10);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0);
  v12 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4D2B9EB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4D2B9EB = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
    {
      sub_1C93D2C(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0);
  }
}


void InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4D2B9E8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4D2B9E8 = 1;
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
                                                   (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_9:
    sub_1C93D2C(gameObject, v4);
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
    sub_1C93D2C(birthMonthInput, method);
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
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Int32_array *paramList; // x8
  int max_length; // w9
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v17; // x1
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v20; // x23
  System_String_o *v21; // x24
  System_Object_array *v22; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v24; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v35; // x2
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  Il2CppObject *v43; // x26
  InputUserBirthDayWindow_o *v44; // x0
  const MethodInfo *v45; // x2
  System_String_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  Il2CppObject *v53; // x21
  InputUserBirthDayWindow_o *v54; // x0
  const MethodInfo *v55; // x2
  System_String_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  Il2CppObject *v63; // x20
  System_String_o *v64; // x20
  System_String_o *v65; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v66; // x24
  const MethodInfo *v67; // x3
  __int64 v68; // x1
  const MethodInfo *v69; // x7
  InputUserBirthDayWindow_c *v70; // x0
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  InputUserBirthDayConfirmWindow_o *v73; // x22
  System_String_o *v74; // x23
  System_String_o *v75; // x24
  Il2CppObject *v76; // x21
  Il2CppObject *v77; // x2
  System_String_o *v78; // x20
  System_String_o *v79; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v80; // x24
  const MethodInfo *v81; // x3
  __int64 v82; // x0
  __int64 v83; // x1
  const MethodInfo *v84; // x7
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x0
  int32_t v89; // [xsp+44h] [xbp-5Ch] BYREF
  __int64 v90; // [xsp+48h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4D2B9ED & 1) == 0 )
  {
    sub_1C93AD4(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&Method_InputUserBirthDayWindow_OnClickDecide__);
    sub_1C93AD4(&Method_InputUserBirthDayWindow_OnConfirm__);
    sub_1C93AD4(&InputUserBirthDayWindow_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&StringLiteral_11168/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12107/*"SET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12106/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/);
    sub_1C93AD4(&StringLiteral_11167/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_12105/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    byte_4D2B9ED = 1;
  }
  dateData = 0;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1C93D2C(0, method);
    Text = UILineInput__GetText(birthMonthInput, 0);
    v6 = System_Int32__Parse(Text, 0);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1C93D2C(0, v5);
    v8 = UILineInput__GetText(birthDayInput, 0);
    v9 = System_Int32__Parse(v8, 0);
    v90 = 0;
    System_DateTime___ctor_65809888((System_DateTime_o)&v90, 2000, v6, v9, 0);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1C93D2C(v10, v11);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1C93D34(v10);
    paramList->m_Items[0] = v6;
    if ( max_length == 1 )
      sub_1C93D34(v10);
    paramList->m_Items[1] = v9;
    v14 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C93AEC(Method_InputUserBirthDayWindow_OnClickDecide__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !SelfUserGame )
        sub_1C93D2C(0, v17);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_42096756(birthDay, 0).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11168/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11167/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      v22 = (System_Object_array *)sub_1C93B7C(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v24);
      if ( !v22 )
        sub_1C93D2C(PaddingBirthday, v26);
      v33 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1C93C10(PaddingBirthday, v22->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v85 = sub_1C93D50();
          sub_1C93BFC(v85, 0);
        }
      }
      if ( !LODWORD(v22->max_length) )
        sub_1C93D34(PaddingBirthday);
      v22->m_Items[0] = v33;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v22->m_Items, (int32_t)v33, v27, v28, v29, v30, v31, v32);
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
      v36 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v35);
      v43 = (Il2CppObject *)v36;
      if ( v36 )
      {
        v36 = (System_String_o *)sub_1C93C10(v36, v22->obj.klass->_1.element_class);
        if ( !v36 )
        {
          v86 = sub_1C93D50();
          sub_1C93BFC(v86, 0);
        }
      }
      if ( LODWORD(v22->max_length) <= 1 )
        sub_1C93D34(v36);
      v22->m_Items[1] = v43;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v22->m_Items[1], (int32_t)v43, v37, v38, v39, v40, v41, v42);
      v46 = InputUserBirthDayWindow__getPaddingBirthday(v44, v6, v45);
      v53 = (Il2CppObject *)v46;
      if ( v46 )
      {
        v46 = (System_String_o *)sub_1C93C10(v46, v22->obj.klass->_1.element_class);
        if ( !v46 )
        {
          v87 = sub_1C93D50();
          sub_1C93BFC(v87, 0);
        }
      }
      if ( LODWORD(v22->max_length) <= 2 )
        sub_1C93D34(v46);
      v22->m_Items[2] = v53;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v22->m_Items[2], (int32_t)v53, v47, v48, v49, v50, v51, v52);
      v56 = InputUserBirthDayWindow__getPaddingBirthday(v54, v9, v55);
      v63 = (Il2CppObject *)v56;
      if ( v56 )
      {
        v56 = (System_String_o *)sub_1C93C10(v56, v22->obj.klass->_1.element_class);
        if ( !v56 )
        {
          v88 = sub_1C93D50();
          sub_1C93BFC(v88, 0);
        }
      }
      if ( LODWORD(v22->max_length) <= 3 )
        sub_1C93D34(v56);
      v22->m_Items[3] = v63;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v22->m_Items[3], (int32_t)v63, v57, v58, v59, v60, v61, v62);
      v64 = System_String__Format_64467168(v21, v22, 0);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12106/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v66 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C93D20(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v66,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v67);
      v70 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v70 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1C93D2C(v70, v68);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v20,
        v64,
        v65,
        v66,
        v70->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v70->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v69);
    }
    else
    {
      v73 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12105/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      LODWORD(v90) = v6;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90);
      v89 = v9;
      v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89);
      v78 = System_String__Format_64467032(v75, v76, v77, 0);
      v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12106/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v80 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C93D20(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v80,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v81);
      if ( !v73 )
        sub_1C93D2C(v82, v83);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v73, v74, v78, v79, v80, 30, 0, v84);
    }
  }
  else
  {
    v71 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v71 = (_QWORD *)sub_1C93AEC(Method_InputUserBirthDayWindow_OnClickDecide__);
    v72 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v71, v71[4]);
    OverwriteAssetSoundName__PlaySystemSe(v72, 2, 0, 0);
  }
}


void InputUserBirthDayWindow__OnConfirm(InputUserBirthDayWindow_o *this, bool isDecide, const MethodInfo *method)
{
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x0
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  confirmWindow = this->fields.confirmWindow;
  if ( !confirmWindow )
    sub_1C93D2C(0, isDecide);
  InputUserBirthDayConfirmWindow__Close_33825988(confirmWindow, 0, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool IsOpen; // w0
  System_String_o **v15; // x8
  UILabel_o *titleLb; // x20
  System_String_o *v17; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v20; // x8
  System_String_o *v21; // x21
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Action_o *v29; // x20

  if ( (byte_4D2B9E9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_InputUserBirthDayWindow_EndOpen__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_7507/*"INPUT_BIRTHDAY_INFO"*/);
    sub_1C93AD4(&StringLiteral_7508/*"INPUT_BIRTHDAY_NOTICE"*/);
    sub_1C93AD4(&StringLiteral_11170/*"RESET_BIRTHDAY_TITLE"*/);
    sub_1C93AD4(&StringLiteral_7509/*"INPUT_BIRTHDAY_TITLE"*/);
    sub_1C93AD4(&StringLiteral_11169/*"RESET_BIRTHDAY_NOTICE"*/);
    byte_4D2B9E9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v7);
  this->fields.callbackFunc = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)callback, v8, v9, v10, v11, v12, v13);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0, 0, 0, 0);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v15 = (System_String_o **)&StringLiteral_11170/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v15 = (System_String_o **)&StringLiteral_7509/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v17 = *v15;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v17, 0);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7507/*"INPUT_BIRTHDAY_INFO"*/, 0);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0);
  noticeLb = this->fields.noticeLb;
  v20 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11169/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7508/*"INPUT_BIRTHDAY_NOTICE"*/);
  v21 = *v20;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v21, 0);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_24:
    sub_1C93D2C(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  v22 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 2);
  this->fields.paramList = v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.paramList, (int32_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0, 0);
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

  if ( (byte_4D2B9E6 & 1) == 0 )
  {
    sub_1C93AD4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4D2B9E6 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C940C8(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2B9EE & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B9EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
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
  if ( (byte_4D2B9F0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_114/*"  "*/);
    byte_4D2B9F0 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  if ( num <= 9 )
    return System_String__Concat_64425724((System_String_o *)StringLiteral_114/*"  "*/, v4, 0);
  return v4;
}


System_String_o *InputUserBirthDayWindow__get_closeBtnPath(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B9EF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_3087/*"BaseWindow/CancleBtn"*/);
    byte_4D2B9EF = 1;
  }
  return (System_String_o *)StringLiteral_3087/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4D2B9E7 & 1) == 0 )
  {
    sub_1C93AD4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4D2B9E7 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C940C8(v8);
  InputUserBirthDayWindow__Init(v11, v12);
}


void InputUserBirthDayWindow__setExeBtnState(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confirmBtnBg; // x0
  UIWidget_o *confirmTxt; // x8
  _BOOL4 isInput; // w20
  UIWidget_o *v6; // x19
  float v7; // s8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2B9EA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4D2B9EA = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  if ( !confirmTxt )
    goto LABEL_11;
  isInput = this->fields.isInput;
  v6 = (UIWidget_o *)confirmBtnBg;
  v8.fields.r = 0.0;
  v8.fields.g = 0.0;
  v8.fields.b = 0.0;
  v8.fields.a = 1.0;
  v7 = 1.0;
  UIWidget__set_color(confirmTxt, v8, 0);
  if ( !isInput )
  {
    if ( v6 )
    {
      v9.fields.a = 1.0;
      v7 = 0.5;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C93D2C(confirmBtnBg, method);
  }
  if ( !v6 )
    goto LABEL_11;
  v9.fields.a = 1.0;
LABEL_10:
  v9.fields.r = v7;
  v9.fields.g = v7;
  v9.fields.b = v7;
  UIWidget__set_color(v6, v9, 0);
}


void InputUserBirthDayWindow_CallbackFunc___ctor(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC1438;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC13E0;
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
  if ( (byte_4D2B9F3 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2B9F3 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = param;
  return sub_1C93A88(this, v11, callback, object);
}


void InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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