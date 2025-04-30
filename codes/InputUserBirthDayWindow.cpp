void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A496F0 & 1) == 0 )
  {
    sub_1B863B8(&InputUserBirthDayWindow_TypeInfo, v1);
    byte_4A496F0 = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4A496EF & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A496EF = 1;
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
    sub_1B8635C((CGThumbnailListItem_o *)p_callbackFunc, 0, (int32_t)param, method);
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

  InputUserBirthDayWindow__Close_31584204(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_31584204(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v10; // x20

  if ( (byte_4A496EA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_Collider___, v6);
    sub_1B863B8(&Method_InputUserBirthDayWindow_EndClose__, v7);
    byte_4A496EA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1B86614(birthMonthInput, v8);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B86614(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B8635C(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4A496E9 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4A496E9 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1B86614(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4A496E6 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4A496E6 = 1;
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
                                                   (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_1B86614(gameObject, v4);
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
    sub_1B86614(birthMonthInput, method);
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
  __int64 v18; // x1
  int32_t v19; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v21; // x0
  int v22; // w20
  __int64 v23; // x0
  __int64 v24; // x1
  struct System_Int32_array *paramList; // x8
  il2cpp_array_size_t max_length; // w9
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v30; // x1
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v33; // x23
  System_String_o *v34; // x24
  System_Object_array *v35; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v37; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v44; // x2
  System_String_o *v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x26
  InputUserBirthDayWindow_o *v50; // x0
  const MethodInfo *v51; // x2
  System_String_o *v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x21
  InputUserBirthDayWindow_o *v57; // x0
  const MethodInfo *v58; // x2
  System_String_o *v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
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
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  Il2CppObject *v79; // x21
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x2
  System_String_o *v84; // x20
  System_String_o *v85; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v86; // x24
  const MethodInfo *v87; // x3
  __int64 v88; // x0
  __int64 v89; // x1
  const MethodInfo *v90; // x7
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  int v95; // [xsp+34h] [xbp-5Ch] BYREF
  __int64 v96; // [xsp+38h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v98; // 0:x0.8
  System_DateTime_o v99; // 0:x0.8
  System_DateTime_o v100; // 0:x0.8

  if ( (byte_4A496EB & 1) == 0 )
  {
    sub_1B863B8(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&System_DateTime_TypeInfo, v3);
    sub_1B863B8(&Method_InputUserBirthDayWindow_OnClickDecide__, v4);
    sub_1B863B8(&Method_InputUserBirthDayWindow_OnConfirm__, v5);
    sub_1B863B8(&InputUserBirthDayWindow_TypeInfo, v6);
    sub_1B863B8(&int_TypeInfo, v7);
    sub_1B863B8(&LocalizationManager_TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&object___TypeInfo, v10);
    sub_1B863B8(&StringLiteral_10910/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v11);
    sub_1B863B8(&StringLiteral_11814/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, v12);
    sub_1B863B8(&StringLiteral_11813/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, v13);
    sub_1B863B8(&StringLiteral_10909/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, v14);
    sub_1B863B8(&StringLiteral_11812/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, v15);
    byte_4A496EB = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1B86614(0LL, method);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v19 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1B86614(0LL, v18);
    v21 = UILineInput__GetText(birthDayInput, 0LL);
    v22 = System_Int32__Parse(v21, 0LL);
    v96 = 0LL;
    v98.fields._dateData = (uint64_t)&v96;
    System_DateTime___ctor_63034208(v98, 2000, v19, v22, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1B86614(v23, v24);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1B8661C(v23, v24);
    paramList->m_Items[1] = v19;
    if ( max_length == 1 )
      sub_1B8661C(v23, v24);
    paramList->m_Items[2] = v22;
    v27 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1B863D0(Method_InputUserBirthDayWindow_OnClickDecide__);
    v28 = (System_Reflection_MethodBase_o *)sub_1B8639C(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0LL);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        sub_1B86614(0LL, v30);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_39522640(birthDay, 0LL).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_10910/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10909/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v35 = (System_Object_array *)sub_1B86460(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v99.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v99, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v37);
      if ( !v35 )
        sub_1B86614(PaddingBirthday, v39);
      v42 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1B864F4(PaddingBirthday, v35->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v91 = sub_1B86638();
          sub_1B864E0(v91, 0LL);
        }
      }
      if ( !v35->max_length )
        sub_1B8661C(PaddingBirthday, v39);
      v35->m_Items[0] = v42;
      sub_1B8635C((CGThumbnailListItem_o *)v35->m_Items, (int32_t)v42, v40, v41);
      v100.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v100, 0LL);
      v45 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v44);
      v49 = (Il2CppObject *)v45;
      if ( v45 )
      {
        v45 = (System_String_o *)sub_1B864F4(v45, v35->obj.klass->_1.element_class);
        if ( !v45 )
        {
          v92 = sub_1B86638();
          sub_1B864E0(v92, 0LL);
        }
      }
      if ( v35->max_length <= 1 )
        sub_1B8661C(v45, v46);
      v35->m_Items[1] = v49;
      sub_1B8635C((CGThumbnailListItem_o *)&v35->m_Items[1], (int32_t)v49, v47, v48);
      v52 = InputUserBirthDayWindow__getPaddingBirthday(v50, v19, v51);
      v56 = (Il2CppObject *)v52;
      if ( v52 )
      {
        v52 = (System_String_o *)sub_1B864F4(v52, v35->obj.klass->_1.element_class);
        if ( !v52 )
        {
          v93 = sub_1B86638();
          sub_1B864E0(v93, 0LL);
        }
      }
      if ( v35->max_length <= 2 )
        sub_1B8661C(v52, v53);
      v35->m_Items[2] = v56;
      sub_1B8635C((CGThumbnailListItem_o *)&v35->m_Items[2], (int32_t)v56, v54, v55);
      v59 = InputUserBirthDayWindow__getPaddingBirthday(v57, v22, v58);
      v63 = (Il2CppObject *)v59;
      if ( v59 )
      {
        v59 = (System_String_o *)sub_1B864F4(v59, v35->obj.klass->_1.element_class);
        if ( !v59 )
        {
          v94 = sub_1B86638();
          sub_1B864E0(v94, 0LL);
        }
      }
      if ( v35->max_length <= 3 )
        sub_1B8661C(v59, v60);
      v35->m_Items[3] = v63;
      sub_1B8635C((CGThumbnailListItem_o *)&v35->m_Items[3], (int32_t)v63, v61, v62);
      v64 = System_String__Format_61686604(v34, v35, 0LL);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v66 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1B86604(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
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
        sub_1B86614(v70, v68);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v33,
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
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_11814/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11812/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v96) = v19;
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v76, v77, v78);
      v95 = v22;
      v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95, v80, v81, v82);
      v84 = System_String__Format_61686468(v75, v79, v83, 0LL);
      v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v86 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1B86604(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v86,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v87);
      if ( !v73 )
        sub_1B86614(v88, v89);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v73, v74, v84, v85, v86, 30, 0, v90);
    }
  }
  else
  {
    v71 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v71 = (_QWORD *)sub_1B863D0(Method_InputUserBirthDayWindow_OnClickDecide__);
    v72 = (System_Reflection_MethodBase_o *)sub_1B8639C(v71, v71[4]);
    OverwriteAssetSoundName__PlaySystemSe(v72, 2, 0, 0LL);
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
    sub_1B86614(0LL, isDecide);
  InputUserBirthDayConfirmWindow__Close_31581692(confirmWindow, 0LL, method);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool IsOpen; // w0
  System_String_o **v21; // x8
  UILabel_o *titleLb; // x20
  System_String_o *v23; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v26; // x8
  System_String_o *v27; // x21
  struct System_Int32_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Action_o *v31; // x20

  if ( (byte_4A496E7 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1B863B8(&CondType_TypeInfo, v6);
    sub_1B863B8(&Method_InputUserBirthDayWindow_EndOpen__, v7);
    sub_1B863B8(&int___TypeInfo, v8);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_7324/*"INPUT_BIRTHDAY_INFO"*/, v10);
    sub_1B863B8(&StringLiteral_7325/*"INPUT_BIRTHDAY_NOTICE"*/, v11);
    sub_1B863B8(&StringLiteral_10912/*"RESET_BIRTHDAY_TITLE"*/, v12);
    sub_1B863B8(&StringLiteral_7326/*"INPUT_BIRTHDAY_TITLE"*/, v13);
    sub_1B863B8(&StringLiteral_10911/*"RESET_BIRTHDAY_NOTICE"*/, v14);
    byte_4A496E7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v17);
  this->fields.callbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v21 = (System_String_o **)&StringLiteral_10912/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v21 = (System_String_o **)&StringLiteral_7326/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v23 = *v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v23, 0LL);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7324/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v26 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_10911/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7325/*"INPUT_BIRTHDAY_NOTICE"*/);
  v27 = *v26;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v27, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_24:
    sub_1B86614(gameObject, v16);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  v28 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 2LL);
  this->fields.paramList = v28;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.paramList, (int32_t)v28, v29, v30);
  v31 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
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

  if ( (byte_4A496E4 & 1) == 0 )
  {
    sub_1B863B8(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4A496E4 = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1B868D4(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A496EC & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A496EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
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
  if ( (byte_4A496EE & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_116/*"  "*/, *(_QWORD *)&num);
    byte_4A496EE = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_61645176((System_String_o *)StringLiteral_116/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A496ED & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_3103/*"BaseWindow/CancleBtn"*/, method);
    byte_4A496ED = 1;
  }
  return (System_String_o *)StringLiteral_3103/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4A496E5 & 1) == 0 )
  {
    sub_1B863B8(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4A496E5 = 1;
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
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1B868D4(v8);
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

  if ( (byte_4A496E8 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    byte_4A496E8 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1B86614(confirmBtnBg, method);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CB550;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB4F8;
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
  if ( (byte_4A496F1 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, result);
    byte_4A496F1 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, param, callback, object);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_1B8636C(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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