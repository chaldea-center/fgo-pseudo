void InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  if ( (byte_596B641 & 1) == 0 )
  {
    sub_2213A60(&InputUserBirthDayWindow_TypeInfo);
    byte_596B641 = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B640 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B640 = 1;
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
    sub_2213A04(
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

  InputUserBirthDayWindow__Close_39930616(this, 0, v2);
}


void InputUserBirthDayWindow__Close_39930616(
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

  if ( (byte_596B63B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_InputUserBirthDayWindow_EndClose__);
    byte_596B63B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
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
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_2213CDC(birthMonthInput, v10);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_596B63A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_596B63A = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
    {
      sub_2213CDC(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0);
  }
}


void InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_596B637 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_596B637 = 1;
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
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_9:
    sub_2213CDC(gameObject, v4);
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
    sub_2213CDC(birthMonthInput, method);
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
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Int32_array *paramList; // x8
  int max_length; // w9
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t birthDay; // x22
  System_DateTime_o v23; // x0
  System_DateTime_o v24; // x1
  System_DateTime_o v25; // x2
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v27; // x23
  System_String_o *v28; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  System_Object_array *v31; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v33; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *v42; // x26
  __int64 v43; // x1
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v45; // x2
  System_String_o *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  Il2CppObject *v53; // x26
  __int64 v54; // x1
  InputUserBirthDayWindow_o *v55; // x0
  const MethodInfo *v56; // x2
  System_String_o *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x21
  __int64 v65; // x1
  InputUserBirthDayWindow_o *v66; // x0
  const MethodInfo *v67; // x2
  System_String_o *v68; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  Il2CppObject *v75; // x20
  __int64 v76; // x1
  System_String_o *v77; // x20
  System_String_o *v78; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v79; // x24
  const MethodInfo *v80; // x3
  __int64 v81; // x1
  __int64 v82; // x2
  const MethodInfo *v83; // x7
  InputUserBirthDayWindow_c *v84; // x0
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  InputUserBirthDayConfirmWindow_o *v87; // x22
  System_String_o *v88; // x23
  System_String_o *v89; // x24
  Il2CppObject *v90; // x21
  Il2CppObject *v91; // x0
  System_String_o *v92; // x20
  System_String_o *v93; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v94; // x24
  const MethodInfo *v95; // x3
  __int64 v96; // x0
  __int64 v97; // x1
  const MethodInfo *v98; // x7
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  int32_t v103; // [xsp+44h] [xbp-6Ch] BYREF
  __int64 v104; // [xsp+48h] [xbp-68h] BYREF
  int v105; // [xsp+58h] [xbp-58h]
  uint64_t dateData; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_596B63C & 1) == 0 )
  {
    sub_2213A60(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&Method_InputUserBirthDayWindow_OnClickDecide__);
    sub_2213A60(&Method_InputUserBirthDayWindow_OnConfirm__);
    sub_2213A60(&InputUserBirthDayWindow_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_11570/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_12535/*"SET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_2213A60(&StringLiteral_12534/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/);
    sub_2213A60(&StringLiteral_11569/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12533/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    byte_596B63C = 1;
  }
  isInput = this->fields.isInput;
  dateData = 0;
  v105 = 0;
  if ( isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_2213CDC(0, method);
    Text = UILineInput__GetText(birthMonthInput, 0);
    v7 = System_Int32__Parse(Text, 0);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_2213CDC(0, v6);
    v9 = UILineInput__GetText(birthDayInput, 0);
    v10 = System_Int32__Parse(v9, 0);
    v104 = 0;
    System_DateTime___ctor_77013752((System_DateTime_o)&v104, 2000, v7, v10, 0);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_2213CDC(v11, v12);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_2213CE4(v11);
    paramList->m_Items[0] = v7;
    if ( max_length == 1 )
      sub_2213CE4(v11);
    paramList->m_Items[1] = v10;
    v15 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_2213A78(Method_InputUserBirthDayWindow_OnClickDecide__);
    v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !SelfUserGame )
        sub_2213CDC(0, v20);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20, v21);
      v23.fields._dateData = NetworkManager__getDateTime_48347260(birthDay, 0).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      dateData = v23.fields._dateData;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24.fields._dateData, v25.fields._dateData);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11570/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11569/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      v31 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v29, v30);
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v33);
      if ( !v31 )
        sub_2213CDC(PaddingBirthday, v35);
      v42 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_2213BB4(PaddingBirthday, v31->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v99 = sub_2213D00(0, v43);
          sub_2213BA0(v99, 0);
        }
      }
      if ( !LODWORD(v31->max_length) )
        sub_2213CE4(PaddingBirthday);
      v31->m_Items[0] = v42;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v31->m_Items, (int32_t)v42, v36, v37, v38, v39, v40, v41);
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
      v46 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v45);
      v53 = (Il2CppObject *)v46;
      if ( v46 )
      {
        v46 = (System_String_o *)sub_2213BB4(v46, v31->obj.klass->_1.element_class);
        if ( !v46 )
        {
          v100 = sub_2213D00(0, v54);
          sub_2213BA0(v100, 0);
        }
      }
      if ( (v31->max_length & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v46);
      v31->m_Items[1] = v53;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->m_Items[1], (int32_t)v53, v47, v48, v49, v50, v51, v52);
      v57 = InputUserBirthDayWindow__getPaddingBirthday(v55, v7, v56);
      v64 = (Il2CppObject *)v57;
      if ( v57 )
      {
        v57 = (System_String_o *)sub_2213BB4(v57, v31->obj.klass->_1.element_class);
        if ( !v57 )
        {
          v101 = sub_2213D00(0, v65);
          sub_2213BA0(v101, 0);
        }
      }
      if ( LODWORD(v31->max_length) <= 2 )
        sub_2213CE4(v57);
      v31->m_Items[2] = v64;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->m_Items[2], (int32_t)v64, v58, v59, v60, v61, v62, v63);
      v68 = InputUserBirthDayWindow__getPaddingBirthday(v66, v10, v67);
      v75 = (Il2CppObject *)v68;
      if ( v68 )
      {
        v68 = (System_String_o *)sub_2213BB4(v68, v31->obj.klass->_1.element_class);
        if ( !v68 )
        {
          v102 = sub_2213D00(0, v76);
          sub_2213BA0(v102, 0);
        }
      }
      if ( (v31->max_length & 0xFFFFFFFC) == 0 )
        sub_2213CE4(v68);
      v31->m_Items[3] = v75;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31->m_Items[3], (int32_t)v75, v69, v70, v71, v72, v73, v74);
      v77 = System_String__Format_75698016(v28, v31, 0);
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12534/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v79 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_2213CCC(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v79,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v80);
      v84 = InputUserBirthDayWindow_TypeInfo;
      if ( !*(&InputUserBirthDayWindow_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo, v81, v82);
      if ( !confirmWindow )
        sub_2213CDC(v84, v81);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v27,
        v77,
        v78,
        v79,
        InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v83);
    }
    else
    {
      v87 = this->fields.confirmWindow;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12535/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12533/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      LODWORD(v104) = v7;
      v90 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v104);
      v103 = v10;
      v91 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v103);
      v92 = System_String__Format_75697880(v89, v90, v91, 0);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12534/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v94 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_2213CCC(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v94,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v95);
      if ( !v87 )
        sub_2213CDC(v96, v97);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v87, v88, v92, v93, v94, 30, 0, v98);
    }
  }
  else
  {
    v85 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v85 = (_QWORD *)sub_2213A78(Method_InputUserBirthDayWindow_OnClickDecide__);
    v86 = (System_Reflection_MethodBase_o *)sub_2213A44(v85, v85[4]);
    OverwriteAssetSoundName__PlaySystemSe(v86, 2, 0, 0);
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
    sub_2213CDC(0, isDecide);
  InputUserBirthDayConfirmWindow__Close_39928108(confirmWindow, 0, method);
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

  if ( (byte_596B638 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_InputUserBirthDayWindow_EndOpen__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7787/*"INPUT_BIRTHDAY_INFO"*/);
    sub_2213A60(&StringLiteral_7788/*"INPUT_BIRTHDAY_NOTICE"*/);
    sub_2213A60(&StringLiteral_11572/*"RESET_BIRTHDAY_TITLE"*/);
    sub_2213A60(&StringLiteral_7789/*"INPUT_BIRTHDAY_TITLE"*/);
    sub_2213A60(&StringLiteral_11571/*"RESET_BIRTHDAY_NOTICE"*/);
    byte_596B638 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v7);
  this->fields.callbackFunc = callback;
  sub_2213A04(
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
    v22 = (System_String_o **)&StringLiteral_11572/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v22 = (System_String_o **)&StringLiteral_7789/*"INPUT_BIRTHDAY_TITLE"*/;
  v23 = *v22;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, v16, v17);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v23, 0);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7787/*"INPUT_BIRTHDAY_INFO"*/, 0);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0);
  noticeLb = this->fields.noticeLb;
  v28 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11571/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7788/*"INPUT_BIRTHDAY_NOTICE"*/);
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
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_24:
    sub_2213CDC(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  v30 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 2);
  this->fields.paramList = v30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.paramList, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_596B635 & 1) == 0 )
  {
    sub_2213A60(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_596B635 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (InputUserBirthDayWindow_o *)sub_221405C(v8, InputUserBirthDayWindow_CallbackFunc_TypeInfo, v9, v10);
  InputUserBirthDayWindow__remove_callbackFunc(v13, v14, v15);
}


void InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596B63D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B63D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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
  if ( (byte_596B63F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_114/*"  "*/);
    byte_596B63F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  if ( num <= 9 )
    return System_String__Concat_75651716((System_String_o *)StringLiteral_114/*"  "*/, v4, 0);
  return v4;
}


System_String_o *InputUserBirthDayWindow__get_closeBtnPath(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_596B63E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3195/*"BaseWindow/CancleBtn"*/);
    byte_596B63E = 1;
  }
  return (System_String_o *)StringLiteral_3195/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_596B636 & 1) == 0 )
  {
    sub_2213A60(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_596B636 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (InputUserBirthDayWindow_o *)sub_221405C(v8, InputUserBirthDayWindow_CallbackFunc_TypeInfo, v9, v10);
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

  if ( (byte_596B639 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_596B639 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_12;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_2213CDC(confirmBtnBg, method);
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20021B8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2002160;
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
  v11[0] = j_il2cpp_value_box_0(qword_5984328, v12);
  v11[1] = param;
  return sub_2213A14(this, v11, callback, object);
}


void InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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