void InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4C51E21 & 1) == 0 )
  {
    sub_1C3E564(&InputUserBirthDayWindow_TypeInfo);
    byte_4C51E21 = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C51E20 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C51E20 = 1;
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
    sub_1C3E508((CGThumbnailListItem_o *)p_callbackFunc, 0, (int32_t)param, method);
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

  InputUserBirthDayWindow__Close_33263500(this, 0, v2);
}


void InputUserBirthDayWindow__Close_33263500(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v8; // x20

  if ( (byte_4C51E1B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C3E564(&Method_InputUserBirthDayWindow_EndClose__);
    byte_4C51E1B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C3E7C0(birthMonthInput, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0);
  v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
    sub_1C3E7C0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C3E508(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4C51E1A & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C51E1A = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
    {
      sub_1C3E7C0(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0);
  }
}


void InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C51E17 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4C51E17 = 1;
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
                                                   (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_9:
    sub_1C3E7C0(gameObject, v4);
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
    sub_1C3E7C0(birthMonthInput, method);
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
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x26
  InputUserBirthDayWindow_o *v40; // x0
  const MethodInfo *v41; // x2
  System_String_o *v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x21
  InputUserBirthDayWindow_o *v47; // x0
  const MethodInfo *v48; // x2
  System_String_o *v49; // x0
  __int64 v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x20
  System_String_o *v54; // x20
  System_String_o *v55; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v56; // x24
  const MethodInfo *v57; // x3
  __int64 v58; // x1
  const MethodInfo *v59; // x7
  InputUserBirthDayWindow_c *v60; // x0
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  InputUserBirthDayConfirmWindow_o *v63; // x22
  System_String_o *v64; // x23
  System_String_o *v65; // x24
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  Il2CppObject *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  __int64 v76; // x5
  __int64 v77; // x6
  __int64 v78; // x7
  Il2CppObject *v79; // x2
  System_String_o *v80; // x20
  System_String_o *v81; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v82; // x24
  const MethodInfo *v83; // x3
  __int64 v84; // x0
  __int64 v85; // x1
  const MethodInfo *v86; // x7
  __int64 v87; // x0
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x0
  int32_t v91; // [xsp+44h] [xbp-5Ch] BYREF
  __int64 v92; // [xsp+48h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4C51E1C & 1) == 0 )
  {
    sub_1C3E564(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&Method_InputUserBirthDayWindow_OnClickDecide__);
    sub_1C3E564(&Method_InputUserBirthDayWindow_OnConfirm__);
    sub_1C3E564(&InputUserBirthDayWindow_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&StringLiteral_11091/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C3E564(&StringLiteral_12022/*"SET_BIRTHDAY_CONFIRM_TITLE"*/);
    sub_1C3E564(&StringLiteral_12021/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/);
    sub_1C3E564(&StringLiteral_11090/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_12020/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/);
    byte_4C51E1C = 1;
  }
  dateData = 0;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1C3E7C0(0, method);
    Text = UILineInput__GetText(birthMonthInput, 0);
    v6 = System_Int32__Parse(Text, 0);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1C3E7C0(0, v5);
    v8 = UILineInput__GetText(birthDayInput, 0);
    v9 = System_Int32__Parse(v8, 0);
    v92 = 0;
    v10.fields._dateData = (uint64_t)&v92;
    System_DateTime___ctor_65022244(v10, 2000, v6, v9, 0);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1C3E7C0(v11, v12);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1C3E7C8(v11, v12);
    paramList->m_Items[0] = v6;
    if ( max_length == 1 )
      sub_1C3E7C8(v11, v12);
    paramList->m_Items[1] = v9;
    v15 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C3E57C(Method_InputUserBirthDayWindow_OnClickDecide__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C3E548(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !SelfUserGame )
        sub_1C3E7C0(0, v18);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_41415676(birthDay, 0).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11091/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_11090/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      v23 = (System_Object_array *)sub_1C3E60C(object___TypeInfo, 4);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v24.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v24, 0);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v26);
      if ( !v23 )
        sub_1C3E7C0(PaddingBirthday, v28);
      v31 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1C3E6A0(PaddingBirthday, v23->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v87 = sub_1C3E7E4();
          sub_1C3E68C(v87, 0);
        }
      }
      if ( !LODWORD(v23->max_length) )
        sub_1C3E7C8(PaddingBirthday, v28);
      v23->m_Items[0] = v31;
      sub_1C3E508((CGThumbnailListItem_o *)v23->m_Items, (int32_t)v31, v29, v30);
      v32.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v32, 0);
      v35 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v34);
      v39 = (Il2CppObject *)v35;
      if ( v35 )
      {
        v35 = (System_String_o *)sub_1C3E6A0(v35, v23->obj.klass->_1.element_class);
        if ( !v35 )
        {
          v88 = sub_1C3E7E4();
          sub_1C3E68C(v88, 0);
        }
      }
      if ( LODWORD(v23->max_length) <= 1 )
        sub_1C3E7C8(v35, v36);
      v23->m_Items[1] = v39;
      sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[1], (int32_t)v39, v37, v38);
      v42 = InputUserBirthDayWindow__getPaddingBirthday(v40, v6, v41);
      v46 = (Il2CppObject *)v42;
      if ( v42 )
      {
        v42 = (System_String_o *)sub_1C3E6A0(v42, v23->obj.klass->_1.element_class);
        if ( !v42 )
        {
          v89 = sub_1C3E7E4();
          sub_1C3E68C(v89, 0);
        }
      }
      if ( LODWORD(v23->max_length) <= 2 )
        sub_1C3E7C8(v42, v43);
      v23->m_Items[2] = v46;
      sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[2], (int32_t)v46, v44, v45);
      v49 = InputUserBirthDayWindow__getPaddingBirthday(v47, v9, v48);
      v53 = (Il2CppObject *)v49;
      if ( v49 )
      {
        v49 = (System_String_o *)sub_1C3E6A0(v49, v23->obj.klass->_1.element_class);
        if ( !v49 )
        {
          v90 = sub_1C3E7E4();
          sub_1C3E68C(v90, 0);
        }
      }
      if ( LODWORD(v23->max_length) <= 3 )
        sub_1C3E7C8(v49, v50);
      v23->m_Items[3] = v53;
      sub_1C3E508((CGThumbnailListItem_o *)&v23->m_Items[3], (int32_t)v53, v51, v52);
      v54 = System_String__Format_63677896(v22, v23, 0);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v56 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C3E7B0(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v56,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v57);
      v60 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v60 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1C3E7C0(v60, v58);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v21,
        v54,
        v55,
        v56,
        v60->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v60->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v59);
    }
    else
    {
      v63 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_12020/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0);
      LODWORD(v92) = v6;
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v66, v67, v68, v69, v70, v71);
      v91 = v9;
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91, v73, v74, v75, v76, v77, v78);
      v80 = System_String__Format_63677760(v65, v72, v79, 0);
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12021/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0);
      v82 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1C3E7B0(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v82,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v83);
      if ( !v63 )
        sub_1C3E7C0(v84, v85);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v63, v64, v80, v81, v82, 30, 0, v86);
    }
  }
  else
  {
    v61 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v61 = (_QWORD *)sub_1C3E57C(Method_InputUserBirthDayWindow_OnClickDecide__);
    v62 = (System_Reflection_MethodBase_o *)sub_1C3E548(v61, v61[4]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 2, 0, 0);
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
    sub_1C3E7C0(0, isDecide);
  InputUserBirthDayConfirmWindow__Close_33260984(confirmWindow, 0, method);
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

  if ( (byte_4C51E18 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_InputUserBirthDayWindow_EndOpen__);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_7466/*"INPUT_BIRTHDAY_INFO"*/);
    sub_1C3E564(&StringLiteral_7467/*"INPUT_BIRTHDAY_NOTICE"*/);
    sub_1C3E564(&StringLiteral_11093/*"RESET_BIRTHDAY_TITLE"*/);
    sub_1C3E564(&StringLiteral_7468/*"INPUT_BIRTHDAY_TITLE"*/);
    sub_1C3E564(&StringLiteral_11092/*"RESET_BIRTHDAY_NOTICE"*/);
    byte_4C51E18 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v7);
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v8, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0, 0, 0, 0);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v11 = (System_String_o **)&StringLiteral_11093/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v11 = (System_String_o **)&StringLiteral_7468/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v13 = *v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v13, 0);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7466/*"INPUT_BIRTHDAY_INFO"*/, 0);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0);
  noticeLb = this->fields.noticeLb;
  v16 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11092/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7467/*"INPUT_BIRTHDAY_NOTICE"*/);
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
                                                   (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
LABEL_24:
    sub_1C3E7C0(gameObject, v6);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  v18 = (struct System_Int32_array *)sub_1C3E60C(int___TypeInfo, 2);
  this->fields.paramList = v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.paramList, (int32_t)v18, v19, v20);
  v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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

  if ( (byte_4C51E15 & 1) == 0 )
  {
    sub_1C3E564(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4C51E15 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C3EA80(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C51E1D & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C51E1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
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
  if ( (byte_4C51E1F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_114/*"  "*/);
    byte_4C51E1F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  if ( num <= 9 )
    return System_String__Concat_63636468((System_String_o *)StringLiteral_114/*"  "*/, v4, 0);
  return v4;
}


System_String_o *InputUserBirthDayWindow__get_closeBtnPath(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C51E1E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3073/*"BaseWindow/CancleBtn"*/);
    byte_4C51E1E = 1;
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

  if ( (byte_4C51E16 & 1) == 0 )
  {
    sub_1C3E564(&InputUserBirthDayWindow_CallbackFunc_TypeInfo);
    byte_4C51E16 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1C3EA80(v8);
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

  if ( (byte_4C51E19 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C51E19 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1C3E7C0(confirmBtnBg, method);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7B820;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7B7C8;
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
  if ( (byte_4C51E22 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    byte_4C51E22 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v14, param, callback, object, method, v6, v7);
  v13[1] = param;
  return (System_IAsyncResult_o *)sub_1C3E518(this, v13, callback, object);
}


void InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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