void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B116CC & 1) == 0 )
  {
    sub_1BCA7E0(&InputUserBirthDayWindow_TypeInfo, v1, v2);
    byte_4B116CC = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B116CB & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B116CB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL);
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

  InputUserBirthDayWindow__Close_31690100(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_31690100(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x20

  if ( (byte_4B116C6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v5, v6);
    sub_1BCA7E0(&Method_InputUserBirthDayWindow_EndClose__, v7, v8);
    byte_4B116C6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1BCAA3C(birthMonthInput, v9);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4B116C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    byte_4B116C5 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1BCAA3C(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B116C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, method, v2);
    byte_4B116C2 = 1;
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
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(gameObject, v5);
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
    sub_1BCAA3C(birthMonthInput, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  __int64 v32; // x1
  int32_t v33; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v35; // x0
  int v36; // w20
  __int64 v37; // x0
  __int64 v38; // x1
  struct System_Int32_array *paramList; // x8
  il2cpp_array_size_t max_length; // w9
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  __int64 v43; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v45; // x1
  int64_t birthDay; // x22
  __int64 v47; // x1
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v49; // x23
  System_String_o *v50; // x24
  __int64 v51; // x1
  System_Object_array *v52; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v54; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v59; // x2
  System_String_o *v60; // x0
  __int64 v61; // x1
  Il2CppObject *v62; // x26
  InputUserBirthDayWindow_o *v63; // x0
  const MethodInfo *v64; // x2
  System_String_o *v65; // x0
  __int64 v66; // x1
  Il2CppObject *v67; // x21
  InputUserBirthDayWindow_o *v68; // x0
  const MethodInfo *v69; // x2
  System_String_o *v70; // x0
  __int64 v71; // x1
  Il2CppObject *v72; // x20
  System_String_o *v73; // x20
  System_String_o *v74; // x21
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v78; // x24
  const MethodInfo *v79; // x3
  __int64 v80; // x1
  const MethodInfo *v81; // x7
  InputUserBirthDayWindow_c *v82; // x0
  _QWORD *v83; // x0
  System_Reflection_MethodBase_o *v84; // x0
  InputUserBirthDayConfirmWindow_o *v85; // x22
  System_String_o *v86; // x23
  System_String_o *v87; // x24
  Il2CppObject *v88; // x21
  Il2CppObject *v89; // x2
  System_String_o *v90; // x20
  System_String_o *v91; // x21
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v95; // x24
  const MethodInfo *v96; // x3
  __int64 v97; // x0
  __int64 v98; // x1
  const MethodInfo *v99; // x7
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  int v104; // [xsp+34h] [xbp-5Ch] BYREF
  __int64 v105; // [xsp+38h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v107; // 0:x0.8
  System_DateTime_o v108; // 0:x0.8
  System_DateTime_o v109; // 0:x0.8

  if ( (byte_4B116C7 & 1) == 0 )
  {
    sub_1BCA7E0(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_InputUserBirthDayWindow_OnClickDecide__, v6, v7);
    sub_1BCA7E0(&Method_InputUserBirthDayWindow_OnConfirm__, v8, v9);
    sub_1BCA7E0(&InputUserBirthDayWindow_TypeInfo, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&object___TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_11202/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_12100/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_12099/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11201/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_12098/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, v28, v29);
    byte_4B116C7 = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1BCAA3C(0LL, method);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v33 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1BCAA3C(0LL, v32);
    v35 = UILineInput__GetText(birthDayInput, 0LL);
    v36 = System_Int32__Parse(v35, 0LL);
    v105 = 0LL;
    v107.fields._dateData = (uint64_t)&v105;
    System_DateTime___ctor_63079428(v107, 2000, v33, v36, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1BCAA3C(v37, v38);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1BCAA44(v37, v38);
    paramList->m_Items[1] = v33;
    if ( max_length == 1 )
      sub_1BCAA44(v37, v38);
    paramList->m_Items[2] = v36;
    v41 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1BCA7F8(Method_InputUserBirthDayWindow_OnClickDecide__);
    v42 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v41, v41[4]);
    OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0LL);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        sub_1BCAA3C(0LL, v45);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v45);
      dateData = NetworkManager__getDateTime_39270164(birthDay, 0LL).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11202/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11201/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v52 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v51);
      v108.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v108, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v54);
      if ( !v52 )
        sub_1BCAA3C(PaddingBirthday, v56);
      v57 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1BCA91C(PaddingBirthday, v52->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v100 = sub_1BCAA60();
          sub_1BCA908(v100, 0LL);
        }
      }
      if ( !v52->max_length )
        sub_1BCAA44(PaddingBirthday, v56);
      v52->m_Items[0] = v57;
      sub_1BCA784(v52->m_Items, v57);
      v109.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v109, 0LL);
      v60 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v59);
      v62 = (Il2CppObject *)v60;
      if ( v60 )
      {
        v60 = (System_String_o *)sub_1BCA91C(v60, v52->obj.klass->_1.element_class);
        if ( !v60 )
        {
          v101 = sub_1BCAA60();
          sub_1BCA908(v101, 0LL);
        }
      }
      if ( v52->max_length <= 1 )
        sub_1BCAA44(v60, v61);
      v52->m_Items[1] = v62;
      v63 = (InputUserBirthDayWindow_o *)sub_1BCA784(&v52->m_Items[1], v62);
      v65 = InputUserBirthDayWindow__getPaddingBirthday(v63, v33, v64);
      v67 = (Il2CppObject *)v65;
      if ( v65 )
      {
        v65 = (System_String_o *)sub_1BCA91C(v65, v52->obj.klass->_1.element_class);
        if ( !v65 )
        {
          v102 = sub_1BCAA60();
          sub_1BCA908(v102, 0LL);
        }
      }
      if ( v52->max_length <= 2 )
        sub_1BCAA44(v65, v66);
      v52->m_Items[2] = v67;
      v68 = (InputUserBirthDayWindow_o *)sub_1BCA784(&v52->m_Items[2], v67);
      v70 = InputUserBirthDayWindow__getPaddingBirthday(v68, v36, v69);
      v72 = (Il2CppObject *)v70;
      if ( v70 )
      {
        v70 = (System_String_o *)sub_1BCA91C(v70, v52->obj.klass->_1.element_class);
        if ( !v70 )
        {
          v103 = sub_1BCAA60();
          sub_1BCA908(v103, 0LL);
        }
      }
      if ( v52->max_length <= 3 )
        sub_1BCAA44(v70, v71);
      v52->m_Items[3] = v72;
      sub_1BCA784(&v52->m_Items[3], v72);
      v73 = System_String__Format_62415728(v50, v52, 0LL);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v78 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1BCAA2C(
                                                               InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo,
                                                               v75,
                                                               v76,
                                                               v77);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v78,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v79);
      v82 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo, v80);
        v82 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1BCAA3C(v82, v80);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v49,
        v73,
        v74,
        v78,
        v82->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v82->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v81);
    }
    else
    {
      v85 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
      v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12100/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12098/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v105) = v33;
      v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
      v104 = v36;
      v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
      v90 = System_String__Format_62415592(v87, v88, v89, 0LL);
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v95 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1BCAA2C(
                                                               InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo,
                                                               v92,
                                                               v93,
                                                               v94);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v95,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v96);
      if ( !v85 )
        sub_1BCAA3C(v97, v98);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v85, v86, v90, v91, v95, 30, 0, v99);
    }
  }
  else
  {
    v83 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v83 = (_QWORD *)sub_1BCA7F8(Method_InputUserBirthDayWindow_OnClickDecide__);
    v84 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v83, v83[4]);
    OverwriteAssetSoundName__PlaySystemSe(v84, 2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(0LL, isDecide);
  InputUserBirthDayConfirmWindow__Close_31687592(confirmWindow, 0LL, method);
  if ( isDecide )
    InputUserBirthDayWindow__Callback(this, 1, v6, v7);
}


void __fastcall InputUserBirthDayWindow__OpenInputBirthDayWindow(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x1
  __int64 v28; // x1
  bool IsOpen; // w0
  __int64 v30; // x1
  System_String_o **v31; // x8
  UILabel_o *titleLb; // x20
  System_String_o *v33; // x21
  UILabel_o *inputInfoLb; // x20
  __int64 v35; // x1
  UILabel_o *noticeLb; // x20
  System_String_o **v37; // x8
  System_String_o *v38; // x21
  struct System_Int32_array *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x20

  if ( (byte_4B116C3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v5, v6);
    sub_1BCA7E0(&CondType_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_InputUserBirthDayWindow_EndOpen__, v9, v10);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_7502/*"INPUT_BIRTHDAY_INFO"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_7503/*"INPUT_BIRTHDAY_NOTICE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11204/*"RESET_BIRTHDAY_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_7504/*"INPUT_BIRTHDAY_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11203/*"RESET_BIRTHDAY_NOTICE"*/, v23, v24);
    byte_4B116C3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v27);
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v28);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v31 = (System_String_o **)&StringLiteral_11204/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v31 = (System_String_o **)&StringLiteral_7504/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v33 = *v31;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v33, 0LL);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7502/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v37 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11203/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7503/*"INPUT_BIRTHDAY_NOTICE"*/);
  v38 = *v37;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v38, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_24:
    sub_1BCAA3C(gameObject, v26);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  v39 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  this->fields.paramList = v39;
  sub_1BCA784(&this->fields.paramList, v39);
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
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

  if ( (byte_4B116C0 & 1) == 0 )
  {
    sub_1BCA7E0(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value, method);
    byte_4B116C0 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1BCACFC(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B116C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B116C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
  if ( (byte_4B116CA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_117/*"  "*/, *(_QWORD *)&num, method);
    byte_4B116CA = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_62401220((System_String_o *)StringLiteral_117/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B116C9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3219/*"BaseWindow/CancleBtn"*/, method, v2);
    byte_4B116C9 = 1;
  }
  return (System_String_o *)StringLiteral_3219/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4B116C1 & 1) == 0 )
  {
    sub_1BCA7E0(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value, method);
    byte_4B116C1 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1BCACFC(v8);
  InputUserBirthDayWindow__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow__setExeBtnState(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *confirmBtnBg; // x0
  UIWidget_o *confirmTxt; // x8
  _BOOL4 isInput; // w20
  UIWidget_o *v7; // x19
  float v8; // s8
  float v9; // s3
  float v10; // s0
  float v11; // s1
  float v12; // s2
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B116C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    byte_4B116C4 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  if ( !confirmTxt )
    goto LABEL_11;
  isInput = this->fields.isInput;
  v7 = (UIWidget_o *)confirmBtnBg;
  v13.fields.r = 0.0;
  v13.fields.g = 0.0;
  v13.fields.b = 0.0;
  v13.fields.a = 1.0;
  v8 = 1.0;
  UIWidget__set_color(confirmTxt, v13, 0LL);
  if ( !isInput )
  {
    if ( v7 )
    {
      v9 = 1.0;
      v8 = 0.5;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(confirmBtnBg, method);
  }
  if ( !v7 )
    goto LABEL_11;
  v9 = 1.0;
LABEL_10:
  v10 = v8;
  v11 = v8;
  v12 = v8;
  UIWidget__set_color(v7, *(UnityEngine_Color_o *)(&v9 - 3), 0LL);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05EB4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05E5C;
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
  if ( (byte_4B116CD & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, param);
    byte_4B116CD = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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