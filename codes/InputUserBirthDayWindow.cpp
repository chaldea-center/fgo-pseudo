void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC195 & 1) == 0 )
  {
    sub_B16FFC(&InputUserBirthDayWindow_TypeInfo, v1);
    byte_40FC195 = 1;
  }
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y = 40;
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y = -6;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  if ( (byte_40FC194 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FC194 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayWindow__Callback(
        InputUserBirthDayWindow_o *this,
        bool result,
        System_Int32_array *param,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x0
  InputUserBirthDayWindow_CallbackFunc_o *v10; // x19
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v10 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_callbackFunc,
      0LL,
      (System_String_array **)param,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    InputUserBirthDayWindow_CallbackFunc__Invoke(v10, result, this->fields.paramList, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Close(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayWindow__Close_28901496(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_28901496(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *birthDayInput; // x0
  UnityEngine_Collider_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x20

  if ( (byte_40FC18F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v10);
    sub_B16FFC(&Method_InputUserBirthDayWindow_EndClose__, v11);
    byte_40FC18F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 3;
  if ( !birthMonthInput
    || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              birthMonthInput,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL),
        (birthDayInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (v15 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          birthDayInput,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(v15, 0, 0LL);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0LL);
}


void __fastcall InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *birthMonthInput; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *birthDayInput; // x0
  UnityEngine_Collider_o *v6; // x0

  if ( (byte_40FC18E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_40FC18E = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                birthMonthInput,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled(Component_WebViewObject, 1, 0LL),
          (birthDayInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (v6 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           birthDayInput,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_Collider__set_enabled(v6, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *birthMonthInput; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *birthDayInput; // x0
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_40FC18B & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_40FC18B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  UnityEngine_Input__set_imeCompositionMode(0, 0LL);
  birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
  this->fields.state = 0;
  if ( !birthMonthInput
    || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              birthMonthInput,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL),
        (birthDayInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (v7 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                         birthDayInput,
                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(v7, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayWindow__OnChangeInput(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  const MethodInfo *v7; // x1
  bool v8; // w8

  birthMonthInput = this->fields.birthMonthInput;
  if ( !birthMonthInput || (Text = UILineInput__GetText(birthMonthInput, 0LL), !this->fields.birthDayInput) )
    sub_B170D4();
  v5 = Text;
  v6 = UILineInput__GetText(this->fields.birthDayInput, 0LL);
  v8 = !System_String__IsNullOrEmpty(v5, 0LL) && !System_String__IsNullOrEmpty(v6, 0LL);
  this->fields.isInput = v8;
  InputUserBirthDayWindow__setExeBtnState(this, v7);
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
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  int32_t v17; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v19; // x0
  int v20; // w20
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Int32_array *paramList; // x8
  struct System_Int32_array *v25; // x8
  UserGameEntity_o *SelfUserGame; // x0
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  __int64 v31; // x2
  System_Object_array *v32; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v34; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v45; // x2
  System_String_o *v46; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x26
  InputUserBirthDayWindow_o *v55; // x0
  const MethodInfo *v56; // x2
  System_String_o *v57; // x0
  __int64 v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x21
  InputUserBirthDayWindow_o *v66; // x0
  const MethodInfo *v67; // x2
  System_String_o *v68; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x20
  System_String_o *v77; // x20
  System_String_o *v78; // x21
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v83; // x24
  const MethodInfo *v84; // x7
  InputUserBirthDayWindow_c *v85; // x0
  InputUserBirthDayConfirmWindow_o *v86; // x22
  System_String_o *v87; // x23
  System_String_o *v88; // x24
  Il2CppObject *v89; // x21
  Il2CppObject *v90; // x2
  System_String_o *v91; // x20
  System_String_o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v97; // x24
  const MethodInfo *v98; // x7
  int v99; // [xsp+3Ch] [xbp-54h] BYREF
  __int64 v100; // [xsp+40h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v102; // 0:x0.8
  System_DateTime_o v103; // 0:x0.8
  System_DateTime_o v104; // 0:x0.8

  if ( (byte_40FC190 & 1) == 0 )
  {
    sub_B16FFC(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_InputUserBirthDayWindow_OnConfirm__, v3);
    sub_B16FFC(&InputUserBirthDayWindow_TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&object___TypeInfo, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_11048, v10);
    sub_B16FFC(&StringLiteral_12016, v11);
    sub_B16FFC(&StringLiteral_12015, v12);
    sub_B16FFC(&StringLiteral_11047, v13);
    sub_B16FFC(&StringLiteral_12014, v14);
    byte_40FC190 = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_B170D4();
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v17 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_B170D4();
    v19 = UILineInput__GetText(birthDayInput, 0LL);
    v20 = System_Int32__Parse(v19, 0LL);
    v100 = 0LL;
    v102.fields.dateData = (uint64_t)&v100;
    System_DateTime___ctor_15184400(v102, 2000, v17, v20, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_B170D4();
    if ( !paramList->max_length )
    {
      sub_B17100(v21, v22, v23);
      sub_B170A0();
    }
    paramList->m_Items[1] = v17;
    v25 = this->fields.paramList;
    if ( !v25 )
      sub_B170D4();
    if ( v25->max_length <= 1 )
    {
      sub_B17100(v21, v22, v23);
      sub_B170A0();
    }
    v25->m_Items[2] = v20;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.isResetBirthday )
    {
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        sub_B170D4();
      birthDay = SelfUserGame->fields.birthDay;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getDateTime_23685272(birthDay, 0LL).fields.dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11048, 0LL);
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11047, 0LL);
      v32 = (System_Object_array *)sub_B17014(object___TypeInfo, 4LL, v31);
      v103.fields.dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v103, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v34);
      if ( !v32 )
        sub_B170D4();
      v43 = (System_Int32_array **)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_B170BC(PaddingBirthday, v32->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( !v32->max_length )
      {
        sub_B17100(PaddingBirthday, v36, v37);
        sub_B170A0();
      }
      v32->m_Items[0] = (Il2CppObject *)v43;
      sub_B16F98((BattleServantConfConponent_o *)v32->m_Items, v43, v37, v38, v39, v40, v41, v42);
      v104.fields.dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v104, 0LL);
      v46 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v45);
      v54 = (System_Int32_array **)v46;
      if ( v46 )
      {
        v46 = (System_String_o *)sub_B170BC(v46, v32->obj.klass->_1.element_class);
        if ( !v46 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v32->max_length <= 1 )
      {
        sub_B17100(v46, v47, v48);
        sub_B170A0();
      }
      v32->m_Items[1] = (Il2CppObject *)v54;
      sub_B16F98((BattleServantConfConponent_o *)&v32->m_Items[1], v54, v48, v49, v50, v51, v52, v53);
      v57 = InputUserBirthDayWindow__getPaddingBirthday(v55, v17, v56);
      v65 = (System_Int32_array **)v57;
      if ( v57 )
      {
        v57 = (System_String_o *)sub_B170BC(v57, v32->obj.klass->_1.element_class);
        if ( !v57 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v32->max_length <= 2 )
      {
        sub_B17100(v57, v58, v59);
        sub_B170A0();
      }
      v32->m_Items[2] = (Il2CppObject *)v65;
      sub_B16F98((BattleServantConfConponent_o *)&v32->m_Items[2], v65, v59, v60, v61, v62, v63, v64);
      v68 = InputUserBirthDayWindow__getPaddingBirthday(v66, v20, v67);
      v76 = (System_Int32_array **)v68;
      if ( v68 )
      {
        v68 = (System_String_o *)sub_B170BC(v68, v32->obj.klass->_1.element_class);
        if ( !v68 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v32->max_length <= 3 )
      {
        sub_B17100(v68, v69, v70);
        sub_B170A0();
      }
      v32->m_Items[3] = (Il2CppObject *)v76;
      sub_B16F98((BattleServantConfConponent_o *)&v32->m_Items[3], v76, v70, v71, v72, v73, v74, v75);
      v77 = System_String__Format_43822456(v30, v32, 0LL);
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12015, 0LL);
      v83 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B170CC(
                                                               InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo,
                                                               v79,
                                                               v80,
                                                               v81,
                                                               v82);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v83,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      v85 = InputUserBirthDayWindow_TypeInfo;
      if ( (BYTE3(InputUserBirthDayWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v85 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_B170D4();
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v29,
        v77,
        v78,
        v83,
        v85->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v85->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v84);
    }
    else
    {
      v86 = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12016, 0LL);
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_12014, 0LL);
      LODWORD(v100) = v17;
      v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100);
      v99 = v20;
      v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99);
      v91 = System_String__Format_43739268(v88, v89, v90, 0LL);
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_12015, 0LL);
      v97 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B170CC(
                                                               InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo,
                                                               v93,
                                                               v94,
                                                               v95,
                                                               v96);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v97,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      if ( !v86 )
        sub_B170D4();
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v86, v87, v91, v92, v97, 30, 0, v98);
    }
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
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
    sub_B170D4();
  InputUserBirthDayConfirmWindow__Close_28899280(confirmWindow, 0LL, method);
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
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  bool IsOpen; // w0
  UILabel_o *titleLb; // x20
  System_String_o **v25; // x8
  System_String_o *v26; // x21
  System_String_o *v27; // x0
  UILabel_o *inputInfoLb; // x20
  System_String_o *v29; // x0
  UILabel_o *noticeLb; // x20
  System_String_o **v31; // x8
  System_String_o *v32; // x21
  System_String_o *v33; // x0
  UnityEngine_Component_o *birthMonthInput; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *birthDayInput; // x0
  UnityEngine_Collider_o *v37; // x0
  __int64 v38; // x2
  struct System_Int32_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x20

  if ( (byte_40FC18C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_InputUserBirthDayWindow_EndOpen__, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_7269, v10);
    sub_B16FFC(&StringLiteral_7270, v11);
    sub_B16FFC(&StringLiteral_11050, v12);
    sub_B16FFC(&StringLiteral_7271, v13);
    sub_B16FFC(&StringLiteral_11049, v14);
    byte_40FC18C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v16);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  titleLb = this->fields.titleLb;
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v25 = (System_String_o **)&StringLiteral_11050;
  else
    v25 = (System_String_o **)&StringLiteral_7271;
  v26 = *v25;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get(v26, 0LL);
  if ( !titleLb )
    goto LABEL_27;
  UILabel__set_text(titleLb, v27, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_7269, 0LL);
  if ( !inputInfoLb )
    goto LABEL_27;
  UILabel__set_text(inputInfoLb, v29, 0LL);
  noticeLb = this->fields.noticeLb;
  v31 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11049 : &StringLiteral_7270);
  v32 = *v31;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get(v32, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, v33, 0LL),
        birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !birthMonthInput)
    || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              birthMonthInput,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL),
        (birthDayInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (v37 = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          birthDayInput,
                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_27:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(v37, 0, 0LL);
  v39 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v38);
  this->fields.paramList = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.paramList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
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

  if ( (byte_40FC189 & 1) == 0 )
  {
    sub_B16FFC(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_40FC189 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  InputUserBirthDayWindow__remove_callbackFunc(v11, v12, v13);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FC191 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FC191 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
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
  if ( (byte_40FC193 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_81, *(_QWORD *)&num);
    byte_40FC193 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( num <= 9 )
    return System_String__Concat_43743732((System_String_o *)StringLiteral_81, v4, 0LL);
  return v4;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC192 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2730, method);
    byte_40FC192 = 1;
  }
  return (System_String_o *)StringLiteral_2730;
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

  if ( (byte_40FC18A & 1) == 0 )
  {
    sub_B16FFC(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, value);
    byte_40FC18A = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  InputUserBirthDayWindow__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow__setExeBtnState(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confirmBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 isInput; // w21
  UIWidget_o *confirmTxt; // x20
  UIWidget_o *v7; // x19
  int v8; // s0
  int v12; // s0

  if ( (byte_40FC18D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    byte_40FC18D = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_9;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              confirmBtnBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  isInput = this->fields.isInput;
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  v7 = (UIWidget_o *)Component_WebViewObject;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_black(0LL);
  if ( !confirmTxt )
    goto LABEL_9;
  UIWidget__set_color(confirmTxt, *(UnityEngine_Color_o *)&v8, 0LL);
  if ( !isInput )
  {
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
    if ( v7 )
      goto LABEL_7;
LABEL_9:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
  if ( !v7 )
    goto LABEL_9;
LABEL_7:
  UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow_CallbackFunc___ctor(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  if ( (byte_40F68E5 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F68E5 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow_CallbackFunc__Invoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        bool result,
        System_Int32_array *param,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  InputUserBirthDayWindow_CallbackFunc_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, System_Int32_array *, _QWORD); // x0
  InputUserBirthDayWindow_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(bool, System_Int32_array *, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  InputUserBirthDayWindow_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (InputUserBirthDayWindow_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, System_Int32_array *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, result, param);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23(result, param, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_AAFEF8(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, result, param, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))v16)(
            v21,
            result,
            param,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))(*v21
                                                                                + 16LL * *(unsigned __int16 *)(v22 + 72)
                                                                                + 312))(
            v21,
            result,
            param,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_Int32_array *, __int64))v23)(v21, result, param, v22);
    goto LABEL_36;
  }
}