void InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  if ( (byte_5933539 & 1) == 0 )
  {
    sub_21FFC50(&InputUserBirthDayWindow_TypeInfo);
    byte_5933539 = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933538 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5933538 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void InputUserBirthDayWindow__Callback(
        InputUserBirthDayWindow_o *this,
        bool result,
        System_Int32_array *param,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x0
  struct InputUserBirthDayWindow_CallbackFunc_o *v10; // x21
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)p_callbackFunc,
      0,
      (System_String_o *)param,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
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

  InputUserBirthDayWindow__Close_39929208(this, 0, v2);
}


void InputUserBirthDayWindow__Close_39929208(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v12; // x20

  if ( (byte_5933533 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&Method_InputUserBirthDayWindow_EndClose__);
    byte_5933533 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
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
                                                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_21FFECC(birthMonthInput, v10);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0);
  v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_5933532 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_5933532 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
    {
      sub_21FFECC(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0);
  }
}


void InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_593352F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_593352F = 1;
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
                                                   (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_9:
    sub_21FFECC(gameObject, v4);
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
    sub_21FFECC(birthMonthInput, method);
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
  _BOOL4 isInput; // w8
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v9; // x0
  int32_t v10; // w20
  System_DateTime_o v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Int32_array *paramList; // x8
  int max_length; // w9
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t birthDay; // x22
  System_DateTime_o v24; // x0
  System_DateTime_o v25; // x1
  System_DateTime_o v26; // x2
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  System_Object_array *v32; // x25
  System_DateTime_o v33; // x0
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v35; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x26
  __int64 v45; // x1
  System_DateTime_o v46; // x0
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v48; // x2
  System_String_o *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  Il2CppObject *v56; // x26
  __int64 v57; // x1
  InputUserBirthDayWindow_o *v58; // x0
  const MethodInfo *v59; // x2
  System_String_o *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  Il2CppObject *v67; // x21
  __int64 v68; // x1
  InputUserBirthDayWindow_o *v69; // x0
  const MethodInfo *v70; // x2
  System_String_o *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  Il2CppObject *v78; // x20
  __int64 v79; // x1
  System_String_o *v80; // x20
  System_String_o *v81; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v82; // x24
  const MethodInfo *v83; // x3
  __int64 v84; // x1
  __int64 v85; // x2
  const MethodInfo *v86; // x7
  InputUserBirthDayWindow_c *v87; // x0
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  InputUserBirthDayConfirmWindow_o *v90; // x22
  System_String_o *v91; // x23
  System_String_o *v92; // x24
  Il2CppObject *v93; // x21
  Il2CppObject *v94; // x0
  System_String_o *v95; // x20
  System_String_o *v96; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v97; // x24
  const MethodInfo *v98; // x3
  __int64 v99; // x0
  __int64 v100; // x1
  const MethodInfo *v101; // x7
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  int32_t v106; // [xsp+44h] [xbp-6Ch] BYREF
  __int64 v107; // [xsp+48h] [xbp-68h] BYREF
  int v108; // [xsp+58h] [xbp-58h]
  uint64_t dateData; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_5933534 & 1) == 0 )
  {
    sub_21FFC50(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&Method_InputUserBirthDayWindow_OnClickDecide__);
    sub_21FFC50(&Method_InputUserBirthDayWindow_OnConfirm__);
    sub_21FFC50(&InputUserBirthDayWindow_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_11550/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_12509/*"SET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_12508/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/);
    sub_21FFC50(&StringLiteral_11549/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12507/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    byte_5933534 = 1;
  }
  isInput = this->fields.isInput;
  dateData = 0;
  v108 = 0;
  if ( isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_21FFECC(0, method);
    Text = UILineInput__GetText(birthMonthInput, 0);
    v7 = System_Int32__Parse(Text, 0);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_21FFECC(0, v6);
    v9 = UILineInput__GetText(birthDayInput, 0);
    v10 = System_Int32__Parse(v9, 0);
    v107 = 0;
    v11.fields._dateData = (uint64_t)&v107;
    System_DateTime___ctor_76800448(v11, 2000, v7, v10, 0);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_21FFECC(v12, v13);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_21FFED4(v12);
    paramList->m_Items[0] = v7;
    if ( max_length == 1 )
      sub_21FFED4(v12);
    paramList->m_Items[1] = v10;
    v16 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_21FFC68(Method_InputUserBirthDayWindow_OnClickDecide__);
    v17 = (System_Reflection_MethodBase_o *)sub_21FFC34(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !SelfUserGame )
        sub_21FFECC(0, v21);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21, v22);
      v24.fields._dateData = NetworkManager__getDateTime_48311376(birthDay, 0).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      dateData = v24.fields._dateData;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25.fields._dateData, v26.fields._dateData);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11550/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11549/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      v32 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 4);
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v30, v31);
      v33.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v33, 0);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v35);
      if ( !v32 )
        sub_21FFECC(PaddingBirthday, v37);
      v44 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_21FFDA4(PaddingBirthday, v32->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v102 = sub_21FFEF0(0, v45);
          sub_21FFD90(v102, 0);
        }
      }
      if ( !LODWORD(v32->max_length) )
        sub_21FFED4(PaddingBirthday);
      v32->m_Items[0] = v44;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v32->m_Items, (int32_t)v44, v38, v39, v40, v41, v42, v43);
      v46.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v46, 0);
      v49 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v48);
      v56 = (Il2CppObject *)v49;
      if ( v49 )
      {
        v49 = (System_String_o *)sub_21FFDA4(v49, v32->obj.klass->_1.element_class);
        if ( !v49 )
        {
          v103 = sub_21FFEF0(0, v57);
          sub_21FFD90(v103, 0);
        }
      }
      if ( (v32->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(v49);
      v32->m_Items[1] = v56;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->m_Items[1], (int32_t)v56, v50, v51, v52, v53, v54, v55);
      v60 = InputUserBirthDayWindow__getPaddingBirthday(v58, v7, v59);
      v67 = (Il2CppObject *)v60;
      if ( v60 )
      {
        v60 = (System_String_o *)sub_21FFDA4(v60, v32->obj.klass->_1.element_class);
        if ( !v60 )
        {
          v104 = sub_21FFEF0(0, v68);
          sub_21FFD90(v104, 0);
        }
      }
      if ( LODWORD(v32->max_length) <= 2 )
        sub_21FFED4(v60);
      v32->m_Items[2] = v67;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->m_Items[2], (int32_t)v67, v61, v62, v63, v64, v65, v66);
      v71 = InputUserBirthDayWindow__getPaddingBirthday(v69, v10, v70);
      v78 = (Il2CppObject *)v71;
      if ( v71 )
      {
        v71 = (System_String_o *)sub_21FFDA4(v71, v32->obj.klass->_1.element_class);
        if ( !v71 )
        {
          v105 = sub_21FFEF0(0, v79);
          sub_21FFD90(v105, 0);
        }
      }
      if ( (v32->max_length & 0xFFFFFFFC) == 0 )
        sub_21FFED4(v71);
      v32->m_Items[3] = v78;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->m_Items[3], (int32_t)v78, v72, v73, v74, v75, v76, v77);
      v80 = System_String__Format_75484712(v29, v32, 0);
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12508/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v82 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_21FFEBC(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v82,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v83);
      v87 = InputUserBirthDayWindow_TypeInfo;
      if ( !*(&InputUserBirthDayWindow_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo, v84, v85);
      if ( !confirmWindow )
        sub_21FFECC(v87, v84);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v28,
        v80,
        v81,
        v82,
        InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v86);
    }
    else
    {
      v90 = this->fields.confirmWindow;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12509/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      LODWORD(v107) = v7;
      v93 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v107);
      v106 = v10;
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v106);
      v95 = System_String__Format_75484576(v92, v93, v94, 0);
      v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12508/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v97 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_21FFEBC(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v97,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v98);
      if ( !v90 )
        sub_21FFECC(v99, v100);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v90, v91, v95, v96, v97, 30, 0, v101);
    }
  }
  else
  {
    v88 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v88 = (_QWORD *)sub_21FFC68(Method_InputUserBirthDayWindow_OnClickDecide__);
    v89 = (System_Reflection_MethodBase_o *)sub_21FFC34(v88, v88[4]);
    OverwriteAssetSoundName__PlaySystemSe(v89, 2, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void InputUserBirthDayWindow__OnConfirm(InputUserBirthDayWindow_o *this, bool isDecide, const MethodInfo *method)
{
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x0
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  confirmWindow = this->fields.confirmWindow;
  if ( !confirmWindow )
    sub_21FFECC(0, isDecide);
  InputUserBirthDayConfirmWindow__Close_39926700(confirmWindow, 0, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  bool IsOpen; // w8
  LocalizationManager_c *v19; // x0
  UILabel_o *titleLb; // x20
  _BOOL4 v21; // w8
  System_String_o **v22; // x8
  System_String_o *v23; // x21
  UILabel_o *inputInfoLb; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *noticeLb; // x20
  System_String_o **v28; // x8
  System_String_o *v29; // x21
  struct System_Int32_array *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Action_o *v37; // x20

  if ( (byte_5933530 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_InputUserBirthDayWindow_EndOpen__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7775/*"INPUT_BIRTHDAY_INFO"*/);
    sub_21FFC50(&StringLiteral_7776/*"INPUT_BIRTHDAY_NOTICE"*/);
    sub_21FFC50(&StringLiteral_11552/*"RESET_BIRTHDAY_TITLE"*/);
    sub_21FFC50(&StringLiteral_7777/*"INPUT_BIRTHDAY_TITLE"*/);
    sub_21FFC50(&StringLiteral_11551/*"RESET_BIRTHDAY_NOTICE"*/);
    byte_5933530 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v7);
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v14, v15);
  IsOpen = CondType__IsOpen(144, 0, 0, 0, 0, 0);
  v19 = LocalizationManager_TypeInfo;
  titleLb = this->fields.titleLb;
  v21 = IsOpen;
  this->fields.isResetBirthday = v21;
  if ( v21 )
    v22 = (System_String_o **)&StringLiteral_11552/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v22 = (System_String_o **)&StringLiteral_7777/*"INPUT_BIRTHDAY_TITLE"*/;
  v23 = *v22;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, v16, v17);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v23, 0);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7775/*"INPUT_BIRTHDAY_INFO"*/, 0);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0);
  noticeLb = this->fields.noticeLb;
  v28 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11551/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7776/*"INPUT_BIRTHDAY_NOTICE"*/);
  v29 = *v28;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v29, 0);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_24:
    sub_21FFECC(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  v30 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 2);
  this->fields.paramList = v30;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.paramList, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  InputUserBirthDayWindow_o *v13; // x0
  InputUserBirthDayWindow_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_593352D & 1) == 0 )
  {
    sub_21FFC50(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_593352D = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (InputUserBirthDayWindow_o *)sub_220024C(v8, InputUserBirthDayWindow_CallbackFunc_TypeInfo, v9, v10);
  InputUserBirthDayWindow__remove_callbackFunc(v13, v14, v15);
}


void InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5933535 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933535 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
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
  if ( (byte_5933537 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_114/*"  "*/);
    byte_5933537 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  if ( num <= 9 )
    return System_String__Concat_75438412((System_String_o *)StringLiteral_114/*"  "*/, v4, 0);
  return v4;
}


System_String_o *InputUserBirthDayWindow__get_closeBtnPath(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_5933536 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3191/*"BaseWindow/CancleBtn"*/);
    byte_5933536 = 1;
  }
  return (System_String_o *)StringLiteral_3191/*"BaseWindow/CancleBtn"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  InputUserBirthDayWindow_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_593352E & 1) == 0 )
  {
    sub_21FFC50(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_593352E = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (InputUserBirthDayWindow_o *)sub_220024C(v8, InputUserBirthDayWindow_CallbackFunc_TypeInfo, v9, v10);
  InputUserBirthDayWindow__Init(v13, v14);
}


void InputUserBirthDayWindow__setExeBtnState(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confirmBtnBg; // x0
  _BOOL4 isInput; // w9
  UIWidget_o *confirmTxt; // x8
  UIWidget_o *v6; // x19
  float v7; // s8
  float v8; // s9
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5933531 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_5933531 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_12;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  isInput = this->fields.isInput;
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  v6 = (UIWidget_o *)confirmBtnBg;
  if ( !isInput )
  {
    if ( confirmTxt )
    {
      v10.fields.r = 0.0;
      v10.fields.g = 0.0;
      v10.fields.b = 0.0;
      v10.fields.a = 1.0;
      v8 = 1.0;
      UIWidget__set_color(confirmTxt, v10, 0);
      if ( v6 )
      {
        v7 = 0.5;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_21FFECC(confirmBtnBg, method);
  }
  if ( !confirmTxt )
    goto LABEL_12;
  v9.fields.r = 0.0;
  v9.fields.g = 0.0;
  v9.fields.b = 0.0;
  v9.fields.a = 1.0;
  v7 = 1.0;
  UIWidget__set_color(confirmTxt, v9, 0);
  if ( !v6 )
    goto LABEL_12;
  v8 = 1.0;
LABEL_11:
  v11.fields.r = v7;
  v11.fields.g = v7;
  v11.fields.b = v7;
  v11.fields.a = v8;
  UIWidget__set_color(v6, v11, 0);
}


void InputUserBirthDayWindow_CallbackFunc___ctor(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FEF2CC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEF274;
}


System_IAsyncResult_o *InputUserBirthDayWindow_CallbackFunc__BeginInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        bool result,
        System_Int32_array *param,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-48h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(qword_594C050, v12);
  v11[1] = param;
  return (System_IAsyncResult_o *)sub_21FFC04(this, v11, callback, object);
}


void InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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