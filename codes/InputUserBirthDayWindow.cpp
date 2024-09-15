void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2959E & 1) == 0 )
  {
    sub_1B761C0(&InputUserBirthDayWindow_TypeInfo, v1);
    byte_4A2959E = 1;
  }
  *InputUserBirthDayWindow_TypeInfo->static_fields = (struct InputUserBirthDayWindow_StaticFields)0xFFFFFFFA00000028LL;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4A2959D & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A2959D = 1;
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
    sub_1B76164(p_callbackFunc);
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

  InputUserBirthDayWindow__Close_30946660(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_30946660(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v9; // x20

  if ( (byte_4A29598 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, callback);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1B761C0(&Method_InputUserBirthDayWindow_EndClose__, v6);
    byte_4A29598 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B76164(&this->fields.closeCallbackFunc);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       birthMonthInput,
                                                       (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1B7641C(birthMonthInput, v7);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v9 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
    sub_1B7641C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B76164(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_4A29597 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4A29597 = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                         birthMonthInput,
                                                         (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1B7641C(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4A29594 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4A29594 = 1;
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
                                                   (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_1B7641C(gameObject, v4);
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
    sub_1B7641C(birthMonthInput, method);
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
  Il2CppObject *v40; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v42; // x2
  System_String_o *v43; // x0
  __int64 v44; // x1
  Il2CppObject *v45; // x26
  InputUserBirthDayWindow_o *v46; // x0
  const MethodInfo *v47; // x2
  System_String_o *v48; // x0
  __int64 v49; // x1
  Il2CppObject *v50; // x21
  InputUserBirthDayWindow_o *v51; // x0
  const MethodInfo *v52; // x2
  System_String_o *v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x20
  System_String_o *v56; // x20
  System_String_o *v57; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v58; // x24
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  const MethodInfo *v61; // x7
  InputUserBirthDayWindow_c *v62; // x0
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  InputUserBirthDayConfirmWindow_o *v65; // x22
  System_String_o *v66; // x23
  System_String_o *v67; // x24
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x21
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x2
  System_String_o *v76; // x20
  System_String_o *v77; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v78; // x24
  const MethodInfo *v79; // x3
  __int64 v80; // x0
  __int64 v81; // x1
  const MethodInfo *v82; // x7
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0
  int v87; // [xsp+34h] [xbp-5Ch] BYREF
  __int64 v88; // [xsp+38h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v90; // 0:x0.8
  System_DateTime_o v91; // 0:x0.8
  System_DateTime_o v92; // 0:x0.8

  if ( (byte_4A29599 & 1) == 0 )
  {
    sub_1B761C0(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&System_DateTime_TypeInfo, v3);
    sub_1B761C0(&Method_InputUserBirthDayWindow_OnClickDecide__, v4);
    sub_1B761C0(&Method_InputUserBirthDayWindow_OnConfirm__, v5);
    sub_1B761C0(&InputUserBirthDayWindow_TypeInfo, v6);
    sub_1B761C0(&int_TypeInfo, v7);
    sub_1B761C0(&LocalizationManager_TypeInfo, v8);
    sub_1B761C0(&NetworkManager_TypeInfo, v9);
    sub_1B761C0(&object___TypeInfo, v10);
    sub_1B761C0(&StringLiteral_11061/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v11);
    sub_1B761C0(&StringLiteral_11958/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, v12);
    sub_1B761C0(&StringLiteral_11957/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, v13);
    sub_1B761C0(&StringLiteral_11060/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, v14);
    sub_1B761C0(&StringLiteral_11956/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, v15);
    byte_4A29599 = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_1B7641C(0LL, method);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v19 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_1B7641C(0LL, v18);
    v21 = UILineInput__GetText(birthDayInput, 0LL);
    v22 = System_Int32__Parse(v21, 0LL);
    v88 = 0LL;
    v90.fields._dateData = (uint64_t)&v88;
    System_DateTime___ctor_62212940(v90, 2000, v19, v22, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_1B7641C(v23, v24);
    max_length = paramList->max_length;
    if ( !max_length )
      sub_1B76424(v23, v24);
    paramList->m_Items[1] = v19;
    if ( max_length == 1 )
      sub_1B76424(v23, v24);
    paramList->m_Items[2] = v22;
    v27 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1B761D8(Method_InputUserBirthDayWindow_OnClickDecide__);
    v28 = (System_Reflection_MethodBase_o *)sub_1B761A4(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0LL);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        sub_1B7641C(0LL, v30);
      birthDay = SelfUserGame->fields.birthDay;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      dateData = NetworkManager__getDateTime_38208192(birthDay, 0LL).fields._dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_11061/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11060/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v35 = (System_Object_array *)sub_1B76268(object___TypeInfo, 4LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v91.fields._dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v91, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v37);
      if ( !v35 )
        sub_1B7641C(PaddingBirthday, v39);
      v40 = (Il2CppObject *)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_1B762FC(PaddingBirthday, v35->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v83 = sub_1B76440();
          sub_1B762E8(v83, 0LL);
        }
      }
      if ( !v35->max_length )
        sub_1B76424(PaddingBirthday, v39);
      v35->m_Items[0] = v40;
      sub_1B76164(v35->m_Items);
      v92.fields._dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v92, 0LL);
      v43 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v42);
      v45 = (Il2CppObject *)v43;
      if ( v43 )
      {
        v43 = (System_String_o *)sub_1B762FC(v43, v35->obj.klass->_1.element_class);
        if ( !v43 )
        {
          v84 = sub_1B76440();
          sub_1B762E8(v84, 0LL);
        }
      }
      if ( v35->max_length <= 1 )
        sub_1B76424(v43, v44);
      v35->m_Items[1] = v45;
      v46 = (InputUserBirthDayWindow_o *)sub_1B76164(&v35->m_Items[1]);
      v48 = InputUserBirthDayWindow__getPaddingBirthday(v46, v19, v47);
      v50 = (Il2CppObject *)v48;
      if ( v48 )
      {
        v48 = (System_String_o *)sub_1B762FC(v48, v35->obj.klass->_1.element_class);
        if ( !v48 )
        {
          v85 = sub_1B76440();
          sub_1B762E8(v85, 0LL);
        }
      }
      if ( v35->max_length <= 2 )
        sub_1B76424(v48, v49);
      v35->m_Items[2] = v50;
      v51 = (InputUserBirthDayWindow_o *)sub_1B76164(&v35->m_Items[2]);
      v53 = InputUserBirthDayWindow__getPaddingBirthday(v51, v22, v52);
      v55 = (Il2CppObject *)v53;
      if ( v53 )
      {
        v53 = (System_String_o *)sub_1B762FC(v53, v35->obj.klass->_1.element_class);
        if ( !v53 )
        {
          v86 = sub_1B76440();
          sub_1B762E8(v86, 0LL);
        }
      }
      if ( v35->max_length <= 3 )
        sub_1B76424(v53, v54);
      v35->m_Items[3] = v55;
      sub_1B76164(&v35->m_Items[3]);
      v56 = System_String__Format_61549568(v34, v35, 0LL);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11957/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v58 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1B7640C(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v58,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v59);
      v62 = InputUserBirthDayWindow_TypeInfo;
      if ( !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v62 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_1B7641C(v62, v60);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v33,
        v56,
        v57,
        v58,
        v62->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v62->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v61);
    }
    else
    {
      v65 = this->fields.confirmWindow;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11958/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11956/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v88) = v19;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v68, v69, v70);
      v87 = v22;
      v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87, v72, v73, v74);
      v76 = System_String__Format_61549432(v67, v71, v75, 0LL);
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11957/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v78 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_1B7640C(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v78,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        v79);
      if ( !v65 )
        sub_1B7641C(v80, v81);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v65, v66, v76, v77, v78, 30, 0, v82);
    }
  }
  else
  {
    v63 = Method_InputUserBirthDayWindow_OnClickDecide__;
    if ( (*((_BYTE *)Method_InputUserBirthDayWindow_OnClickDecide__ + 83) & 2) != 0 )
      v63 = (_QWORD *)sub_1B761D8(Method_InputUserBirthDayWindow_OnClickDecide__);
    v64 = (System_Reflection_MethodBase_o *)sub_1B761A4(v63, v63[4]);
    OverwriteAssetSoundName__PlaySystemSe(v64, 2, 0LL);
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
    sub_1B7641C(0LL, isDecide);
  InputUserBirthDayConfirmWindow__Close_30944152(confirmWindow, 0LL, method);
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
  bool IsOpen; // w0
  System_String_o **v19; // x8
  UILabel_o *titleLb; // x20
  System_String_o *v21; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v24; // x8
  System_String_o *v25; // x21
  System_Action_o *v26; // x20

  if ( (byte_4A29595 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, callback);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1B761C0(&CondType_TypeInfo, v6);
    sub_1B761C0(&Method_InputUserBirthDayWindow_EndOpen__, v7);
    sub_1B761C0(&int___TypeInfo, v8);
    sub_1B761C0(&LocalizationManager_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_7376/*"INPUT_BIRTHDAY_INFO"*/, v10);
    sub_1B761C0(&StringLiteral_7377/*"INPUT_BIRTHDAY_NOTICE"*/, v11);
    sub_1B761C0(&StringLiteral_11063/*"RESET_BIRTHDAY_TITLE"*/, v12);
    sub_1B761C0(&StringLiteral_7378/*"INPUT_BIRTHDAY_TITLE"*/, v13);
    sub_1B761C0(&StringLiteral_11062/*"RESET_BIRTHDAY_NOTICE"*/, v14);
    byte_4A29595 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v17);
  this->fields.callbackFunc = callback;
  sub_1B76164(&this->fields.callbackFunc);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL, 0LL);
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v19 = (System_String_o **)&StringLiteral_11063/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v19 = (System_String_o **)&StringLiteral_7378/*"INPUT_BIRTHDAY_TITLE"*/;
  titleLb = this->fields.titleLb;
  v21 = *v19;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v21, 0LL);
  if ( !titleLb )
    goto LABEL_24;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7376/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_24;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v24 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11062/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7377/*"INPUT_BIRTHDAY_NOTICE"*/);
  v25 = *v24;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v25, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_24:
    sub_1B7641C(gameObject, v16);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  this->fields.paramList = (struct System_Int32_array *)sub_1B76268(int___TypeInfo, 2LL);
  sub_1B76164(&this->fields.paramList);
  v26 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
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

  if ( (byte_4A29592 & 1) == 0 )
  {
    sub_1B761C0(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4A29592 = 1;
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
    v9 = sub_1BB16B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1B766DC(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A2959A & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A2959A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v3);
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
  if ( (byte_4A2959C & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_118/*"  "*/, *(_QWORD *)&num);
    byte_4A2959C = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_61535060((System_String_o *)StringLiteral_118/*"  "*/, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2959B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_3195/*"BaseWindow/CancleBtn"*/, method);
    byte_4A2959B = 1;
  }
  return (System_String_o *)StringLiteral_3195/*"BaseWindow/CancleBtn"*/;
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

  if ( (byte_4A29593 & 1) == 0 )
  {
    sub_1B761C0(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_4A29593 = 1;
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
    v9 = sub_1BB16B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayWindow_o *)sub_1B766DC(v8);
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

  if ( (byte_4A29596 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    byte_4A29596 = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_11;
  confirmBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              confirmBtnBg,
                                              (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_1B7641C(confirmBtnBg, method);
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
  sub_1B76164(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B76280(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B76438(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B762E8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B68D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B687C;
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
  if ( (byte_4A2959F & 1) == 0 )
  {
    sub_1B761C0(&bool_TypeInfo, result);
    byte_4A2959F = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, param, callback, object);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_1B76174(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B76178(result, 0LL, method);
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