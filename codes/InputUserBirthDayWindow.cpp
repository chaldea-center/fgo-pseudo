void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B176BF & 1) == 0 )
  {
    sub_1BCAFF8(&InputUserBirthDayWindow_TypeInfo, v1);
    byte_4B176BF = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4B176BE & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B176BE = 1;
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
    sub_1BCAF9C((CGThumbnailListItem_o *)p_callbackFunc, 0, (int32_t)param, method);
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

  InputUserBirthDayWindow__Close_32502072(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_32502072(
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

  if ( (byte_4B176B9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, v6);
    sub_1BCAFF8(&Method_InputUserBirthDayWindow_EndClose__, v7);
    byte_4B176B9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCB254(birthMonthInput, v8);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4B176B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4B176B8 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1BCB254(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4B176B5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4B176B5 = 1;
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
                                                   (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(gameObject, v4);
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
    sub_1BCB254(birthMonthInput, method);
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
  __int64 v25; // x2
  struct System_Int32_array *paramList; // x8
  il2cpp_array_size_t max_length; // w9
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v31; // x1
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v34; // x23
  System_String_o *v35; // x24
  System_Object_array *v36; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v38; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v45; // x2
  System_String_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x26
  InputUserBirthDayWindow_o *v51; // x0
  const MethodInfo *v52; // x2
  System_String_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x21
  InputUserBirthDayWindow_o *v58; // x0
  const MethodInfo *v59; // x2
  System_String_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x20
  System_String_o *v65; // x20
  System_String_o *v66; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v67; // x24
  const MethodInfo *v68; // x3
  __int64 v69; // x1
  const MethodInfo *v70; // x7
  InputUserBirthDayWindow_c *v71; // x0
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  InputUserBirthDayConfirmWindow_o *v74; // x22
  System_String_o *v75; // x23
  System_String_o *v76; // x24
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x21
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  Il2CppObject *v84; // x2
  System_String_o *v85; // x20
  System_String_o *v86; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v87; // x24
  const MethodInfo *v88; // x3
  __int64 v89; // x0
  __int64 v90; // x1
  const MethodInfo *v91; // x7
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  int v96; // [xsp+44h] [xbp-5Ch] BYREF
  __int64 v97; // [xsp+48h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-48h] BYREF
  System_DateTime_o v99; // 0:x0.8
  System_DateTime_o v100; // 0:x0.8
  System_DateTime_o v101; // 0:x0.8

  if ( (byte_4B176BA & 1) == 0 )
  {
    sub_1BCAFF8(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&System_DateTime_TypeInfo, v3);
    sub_1BCAFF8(&Method_InputUserBirthDayWindow_OnClickDecide__, v4);
    sub_1BCAFF8(&Method_InputUserBirthDayWindow_OnConfirm__, v5);
    sub_1BCAFF8(&InputUserBirthDayWindow_TypeInfo, v6);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    sub_1BCAFF8(&object___TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_10992/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v11);
    sub_1BCAFF8(&StringLiteral_11915/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, v12);
    sub_1BCAFF8(&StringLiteral_11914/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, v13);
    sub_1BCAFF8(&StringLiteral_10991/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, v14);
    sub_1BCAFF8(&StringLiteral_11913/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, v15);
    byte_4B176BA = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1BCB254(0LL, method);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v19 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1BCB254(0LL, v18);
    v21 = UILineInput__GetText(birthDayInput, 0LL);
    v22 = System_Int32__Parse(v21, 0LL);
    v97 = 0LL;
    v99.fields._dateData = (uint64_t)&v97;
    System_DateTime___ctor_63834804(v99, 2000, v19, v22, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1BCB254(v23, v24);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1BCB25C(v23, v24, v25);
    paramList->m_Items[1] = v19;
    if ( max_length == 1 )
      sub_1BCB25C(v23, v24, v25);
    paramList->m_Items[2] = v22;
    v28 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BCB010(Method_InputUserBirthDayWindow_OnClickDecide__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0LL);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        sub_1BCB254(0LL, v31);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_40542964(birthDay, 0LL).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_10992/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10991/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v36 = (System_Object_array *)sub_1BCB0A0(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v100.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v100, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v38);
      if ( !v36 )
        sub_1BCB254(PaddingBirthday, v40);
      v43 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1BCB134(PaddingBirthday, v36->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v92 = sub_1BCB278();
          sub_1BCB120(v92, 0LL);
        }
      }
      if ( !v36->max_length )
        sub_1BCB25C(PaddingBirthday, v40, v41);
      v36->m_Items[0] = v43;
      sub_1BCAF9C((CGThumbnailListItem_o *)v36->m_Items, (int32_t)v43, v41, v42);
      v101.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v101, 0LL);
      v46 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v45);
      v50 = (Il2CppObject *)v46;
      if ( v46 )
      {
        v46 = (System_String_o *)sub_1BCB134(v46, v36->obj.klass->_1.element_class);
        if ( !v46 )
        {
          v93 = sub_1BCB278();
          sub_1BCB120(v93, 0LL);
        }
      }
      if ( v36->max_length <= 1 )
        sub_1BCB25C(v46, v47, v48);
      v36->m_Items[1] = v50;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v36->m_Items[1], (int32_t)v50, v48, v49);
      v53 = InputUserBirthDayWindow__getPaddingBirthday(v51, v19, v52);
      v57 = (Il2CppObject *)v53;
      if ( v53 )
      {
        v53 = (System_String_o *)sub_1BCB134(v53, v36->obj.klass->_1.element_class);
        if ( !v53 )
        {
          v94 = sub_1BCB278();
          sub_1BCB120(v94, 0LL);
        }
      }
      if ( v36->max_length <= 2 )
        sub_1BCB25C(v53, v54, v55);
      v36->m_Items[2] = v57;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v36->m_Items[2], (int32_t)v57, v55, v56);
      v60 = InputUserBirthDayWindow__getPaddingBirthday(v58, v22, v59);
      v64 = (Il2CppObject *)v60;
      if ( v60 )
      {
        v60 = (System_String_o *)sub_1BCB134(v60, v36->obj.klass->_1.element_class);
        if ( !v60 )
        {
          v95 = sub_1BCB278();
          sub_1BCB120(v95, 0LL);
        }
      }
      if ( v36->max_length <= 3 )
        sub_1BCB25C(v60, v61, v62);
      v36->m_Items[3] = v64;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v36->m_Items[3], (int32_t)v64, v62, v63);
      v65 = System_String__Format_62491852(v35, v36, 0LL);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v67 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1BCB244(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v67,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v68);
      v71 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v71 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1BCB254(v71, v69);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v34,
        v65,
        v66,
        v67,
        v71->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v71->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v70);
    }
    else
    {
      v74 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11915/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11913/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v97) = v19;
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v77, v78, v79);
      v96 = v22;
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96, v81, v82, v83);
      v85 = System_String__Format_62491716(v76, v80, v84, 0LL);
      v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11914/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v87 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1BCB244(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v87,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v88);
      if ( !v74 )
        sub_1BCB254(v89, v90);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v74, v75, v85, v86, v87, 30, 0, v91);
    }
  }
  else
  {
    v72 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v72 = (_QWORD *)sub_1BCB010(Method_InputUserBirthDayWindow_OnClickDecide__);
    v73 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v72, v72[4]);
    OverwriteAssetSoundName__PlaySystemSe(v73, 2, 0, 0LL);
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
    sub_1BCB254(0LL, isDecide);
  InputUserBirthDayConfirmWindow__Close_32499560(confirmWindow, 0LL, method);
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

  if ( (byte_4B176B6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1BCAFF8(&CondType_TypeInfo, v6);
    sub_1BCAFF8(&Method_InputUserBirthDayWindow_EndOpen__, v7);
    sub_1BCAFF8(&int___TypeInfo, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_7399/*"INPUT_BIRTHDAY_INFO"*/, v10);
    sub_1BCAFF8(&StringLiteral_7400/*"INPUT_BIRTHDAY_NOTICE"*/, v11);
    sub_1BCAFF8(&StringLiteral_10994/*"RESET_BIRTHDAY_TITLE"*/, v12);
    sub_1BCAFF8(&StringLiteral_7401/*"INPUT_BIRTHDAY_TITLE"*/, v13);
    sub_1BCAFF8(&StringLiteral_10993/*"RESET_BIRTHDAY_NOTICE"*/, v14);
    byte_4B176B6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v17);
  this->fields.callbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v21 = (System_String_o **)&StringLiteral_10994/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v21 = (System_String_o **)&StringLiteral_7401/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v23 = *v21;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v23, 0LL);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7399/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v26 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_10993/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7400/*"INPUT_BIRTHDAY_NOTICE"*/);
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
                                                   (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_24:
    sub_1BCB254(gameObject, v16);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  v28 = (struct System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 2LL);
  this->fields.paramList = v28;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.paramList, (int32_t)v28, v29, v30);
  v31 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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

  if ( (byte_4B176B3 & 1) == 0 )
  {
    sub_1BCAFF8(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4B176B3 = 1;
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
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1BCB514(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B176BB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B176BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
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
  if ( (byte_4B176BD & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_114/*"  "*/, *(_QWORD *)&num);
    byte_4B176BD = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_62450424((System_String_o *)StringLiteral_114/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B176BC & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3054/*"BaseWindow/CancleBtn"*/, method);
    byte_4B176BC = 1;
  }
  return (System_String_o *)StringLiteral_3054/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4B176B4 & 1) == 0 )
  {
    sub_1BCAFF8(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4B176B4 = 1;
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
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1BCB514(v8);
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

  if ( (byte_4B176B7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    byte_4B176B7 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1BCB254(confirmBtnBg, method);
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0E108;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E0B0;
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
  if ( (byte_4B176C0 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, result);
    byte_4B176C0 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, param, callback, object);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
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