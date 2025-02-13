void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4BD7942 & 1) == 0 )
  {
    sub_1C21E38(&InputUserBirthDayWindow_TypeInfo);
    byte_4BD7942 = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4BD7941 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD7941 = 1;
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
    sub_1C21DDC(p_callbackFunc, 0LL);
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

  InputUserBirthDayWindow__Close_32068628(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_32068628(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v7; // x20

  if ( (byte_4BD793C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C21E38(&Method_InputUserBirthDayWindow_EndClose__);
    byte_4BD793C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C21DDC(&this->fields.closeCallbackFunc, callback);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1C22094(birthMonthInput, v5);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C21DDC(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4BD793B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4BD793B = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1C22094(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4BD7938 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4BD7938 = 1;
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
                                                   (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_1C22094(gameObject, v4);
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
    sub_1C22094(birthMonthInput, method);
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
  il2cpp_array_size_t max_length; // w9
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
  Il2CppObject *v27; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v29; // x2
  System_String_o *v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x26
  InputUserBirthDayWindow_o *v33; // x0
  const MethodInfo *v34; // x2
  System_String_o *v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x21
  InputUserBirthDayWindow_o *v38; // x0
  const MethodInfo *v39; // x2
  System_String_o *v40; // x0
  __int64 v41; // x1
  Il2CppObject *v42; // x20
  System_String_o *v43; // x20
  System_String_o *v44; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v45; // x24
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  const MethodInfo *v48; // x7
  InputUserBirthDayWindow_c *v49; // x0
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  InputUserBirthDayConfirmWindow_o *v52; // x22
  System_String_o *v53; // x23
  System_String_o *v54; // x24
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x21
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x2
  System_String_o *v63; // x20
  System_String_o *v64; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v65; // x24
  const MethodInfo *v66; // x3
  __int64 v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x7
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  int v74; // [xsp+34h] [xbp-5Ch] BYREF
  __int64 v75; // [xsp+38h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v77; // 0:x0.8
  System_DateTime_o v78; // 0:x0.8
  System_DateTime_o v79; // 0:x0.8

  if ( (byte_4BD793D & 1) == 0 )
  {
    sub_1C21E38(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&Method_InputUserBirthDayWindow_OnClickDecide__);
    sub_1C21E38(&Method_InputUserBirthDayWindow_OnConfirm__);
    sub_1C21E38(&InputUserBirthDayWindow_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&StringLiteral_11279/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C21E38(&StringLiteral_12181/*"SET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C21E38(&StringLiteral_12180/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/);
    sub_1C21E38(&StringLiteral_11278/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12179/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    byte_4BD793D = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1C22094(0LL, method);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v6 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1C22094(0LL, v5);
    v8 = UILineInput__GetText(birthDayInput, 0LL);
    v9 = System_Int32__Parse(v8, 0LL);
    v75 = 0LL;
    v77.fields._dateData = (uint64_t)&v75;
    System_DateTime___ctor_63793684(v77, 2000, v6, v9, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1C22094(v10, v11);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1C2209C(v10, v11);
    paramList->m_Items[1] = v6;
    if ( max_length == 1 )
      sub_1C2209C(v10, v11);
    paramList->m_Items[2] = v9;
    v14 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C21E50(Method_InputUserBirthDayWindow_OnClickDecide__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        sub_1C22094(0LL, v17);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_39807076(birthDay, 0LL).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11279/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11278/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v22 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v78.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v78, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v24);
      if ( !v22 )
        sub_1C22094(PaddingBirthday, v26);
      v27 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1C21F74(PaddingBirthday, v22->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v70 = sub_1C220B8();
          sub_1C21F60(v70, 0LL);
        }
      }
      if ( !v22->max_length )
        sub_1C2209C(PaddingBirthday, v26);
      v22->m_Items[0] = v27;
      sub_1C21DDC(v22->m_Items, v27);
      v79.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v79, 0LL);
      v30 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v29);
      v32 = (Il2CppObject *)v30;
      if ( v30 )
      {
        v30 = (System_String_o *)sub_1C21F74(v30, v22->obj.klass->_1.element_class);
        if ( !v30 )
        {
          v71 = sub_1C220B8();
          sub_1C21F60(v71, 0LL);
        }
      }
      if ( v22->max_length <= 1 )
        sub_1C2209C(v30, v31);
      v22->m_Items[1] = v32;
      v33 = (InputUserBirthDayWindow_o *)sub_1C21DDC(&v22->m_Items[1], v32);
      v35 = InputUserBirthDayWindow__getPaddingBirthday(v33, v6, v34);
      v37 = (Il2CppObject *)v35;
      if ( v35 )
      {
        v35 = (System_String_o *)sub_1C21F74(v35, v22->obj.klass->_1.element_class);
        if ( !v35 )
        {
          v72 = sub_1C220B8();
          sub_1C21F60(v72, 0LL);
        }
      }
      if ( v22->max_length <= 2 )
        sub_1C2209C(v35, v36);
      v22->m_Items[2] = v37;
      v38 = (InputUserBirthDayWindow_o *)sub_1C21DDC(&v22->m_Items[2], v37);
      v40 = InputUserBirthDayWindow__getPaddingBirthday(v38, v9, v39);
      v42 = (Il2CppObject *)v40;
      if ( v40 )
      {
        v40 = (System_String_o *)sub_1C21F74(v40, v22->obj.klass->_1.element_class);
        if ( !v40 )
        {
          v73 = sub_1C220B8();
          sub_1C21F60(v73, 0LL);
        }
      }
      if ( v22->max_length <= 3 )
        sub_1C2209C(v40, v41);
      v22->m_Items[3] = v42;
      sub_1C21DDC(&v22->m_Items[3], v42);
      v43 = System_String__Format_63129984(v21, v22, 0LL);
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12180/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v45 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C22084(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v45,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v46);
      v49 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v49 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1C22094(v49, v47);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v20,
        v43,
        v44,
        v45,
        v49->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v49->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v48);
    }
    else
    {
      v52 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12181/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12179/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v75) = v6;
      v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75, v55, v56, v57);
      v74 = v9;
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v59, v60, v61);
      v63 = System_String__Format_63129848(v54, v58, v62, 0LL);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12180/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v65 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C22084(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v65,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v66);
      if ( !v52 )
        sub_1C22094(v67, v68);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v52, v53, v63, v64, v65, 30, 0, v69);
    }
  }
  else
  {
    v50 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v50 = (_QWORD *)sub_1C21E50(Method_InputUserBirthDayWindow_OnClickDecide__);
    v51 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v50, v50[4]);
    OverwriteAssetSoundName__PlaySystemSe(v51, 2, 0, 0LL);
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
    sub_1C22094(0LL, isDecide);
  InputUserBirthDayConfirmWindow__Close_32066116(confirmWindow, 0LL, method);
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
  bool IsOpen; // w0
  System_String_o **v9; // x8
  UILabel_o *titleLb; // x20
  System_String_o *v11; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v14; // x8
  System_String_o *v15; // x21
  struct System_Int32_array *v16; // x0
  System_Action_o *v17; // x20

  if ( (byte_4BD7939 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_InputUserBirthDayWindow_EndOpen__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_7554/*"INPUT_BIRTHDAY_INFO"*/);
    sub_1C21E38(&StringLiteral_7555/*"INPUT_BIRTHDAY_NOTICE"*/);
    sub_1C21E38(&StringLiteral_11281/*"RESET_BIRTHDAY_TITLE"*/);
    sub_1C21E38(&StringLiteral_7556/*"INPUT_BIRTHDAY_TITLE"*/);
    sub_1C21E38(&StringLiteral_11280/*"RESET_BIRTHDAY_NOTICE"*/);
    byte_4BD7939 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v7);
  this->fields.callbackFunc = callback;
  sub_1C21DDC(&this->fields.callbackFunc, callback);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v9 = (System_String_o **)&StringLiteral_11281/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v9 = (System_String_o **)&StringLiteral_7556/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v11 = *v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v11, 0LL);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7554/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v14 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11280/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7555/*"INPUT_BIRTHDAY_NOTICE"*/);
  v15 = *v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v15, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_24:
    sub_1C22094(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  v16 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  this->fields.paramList = v16;
  sub_1C21DDC(&this->fields.paramList, v16);
  v17 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
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

  if ( (byte_4BD7936 & 1) == 0 )
  {
    sub_1C21E38(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4BD7936 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C22354(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD793E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD793E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


System_String_o *__fastcall InputUserBirthDayWindow__getPaddingBirthday(
        InputUserBirthDayWindow_o *this,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x1
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = num;
  if ( (byte_4BD7940 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_118/*"  "*/);
    byte_4BD7940 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_63115476((System_String_o *)StringLiteral_118/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD793F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3242/*"BaseWindow/CancleBtn"*/);
    byte_4BD793F = 1;
  }
  return (System_String_o *)StringLiteral_3242/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4BD7937 & 1) == 0 )
  {
    sub_1C21E38(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4BD7937 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C22354(v8);
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

  if ( (byte_4BD793A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4BD793A = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C22094(confirmBtnBg, method);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5C15C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5C104;
}


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
  if ( (byte_4BD7943 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BD7943 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, param, callback, object);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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