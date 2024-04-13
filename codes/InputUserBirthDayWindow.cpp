void __fastcall InputUserBirthDayWindow___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4E2 & 1) == 0 )
  {
    sub_B5D5C4(&InputUserBirthDayWindow_TypeInfo, v1, v2, v3);
    byte_42EA4E2 = 1;
  }
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y = 40;
  InputUserBirthDayWindow_TypeInfo->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y = -6;
}


void __fastcall InputUserBirthDayWindow___ctor(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4E1 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA4E1 = 1;
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
    sub_B5D560(
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

  InputUserBirthDayWindow__Close_28478848(this, 0LL, v2);
}


void __fastcall InputUserBirthDayWindow__Close_28478848(
        InputUserBirthDayWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x1
  UnityEngine_Component_o *birthMonthInput; // x0
  System_Action_o *v18; // x20

  if ( (byte_42EA4DC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v10, v11, v12);
    sub_B5D5C4(&Method_InputUserBirthDayWindow_EndClose__, v13, v14, v15);
    byte_42EA4DC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
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
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       birthMonthInput,
                                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL),
        (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
    || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       birthMonthInput,
                                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_B5D69C(birthMonthInput, v16);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 0, 0LL);
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
}


void __fastcall InputUserBirthDayWindow__EndClose(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__EndOpen(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *birthMonthInput; // x0

  if ( (byte_42EA4DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)method, v2, v3);
    byte_42EA4DB = 1;
  }
  if ( this->fields.state == 1 )
  {
    birthMonthInput = (UnityEngine_Component_o *)this->fields.birthMonthInput;
    this->fields.state = 2;
    if ( !birthMonthInput
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         birthMonthInput,
                                                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL),
          (birthMonthInput = (UnityEngine_Component_o *)this->fields.birthDayInput) == 0LL)
      || (birthMonthInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         birthMonthInput,
                                                         (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_B5D69C(birthMonthInput, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)birthMonthInput, 1, 0LL);
  }
}


void __fastcall InputUserBirthDayWindow__Init(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42EA4D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)method, v2, v3);
    byte_42EA4D8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  UnityEngine_Input__set_imeCompositionMode(0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput;
  this->fields.state = 0;
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_9:
    sub_B5D69C(gameObject, v6);
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
    sub_B5D69C(birthMonthInput, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UILineInput_o *birthMonthInput; // x0
  System_String_o *Text; // x0
  __int64 v43; // x1
  int32_t v44; // w21
  UILineInput_o *birthDayInput; // x0
  System_String_o *v46; // x0
  int v47; // w20
  __int64 v48; // x0
  __int64 v49; // x1
  struct System_Int32_array *paramList; // x8
  struct System_Int32_array *v51; // x8
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v53; // x1
  int64_t birthDay; // x22
  InputUserBirthDayConfirmWindow_o *confirmWindow; // x22
  System_String_o *v56; // x23
  System_String_o *v57; // x24
  System_Object_array *v58; // x25
  InputUserBirthDayWindow_o *Month; // x0
  const MethodInfo *v60; // x2
  System_String_o *PaddingBirthday; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x26
  InputUserBirthDayWindow_o *Day; // x0
  const MethodInfo *v71; // x2
  System_String_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x26
  InputUserBirthDayWindow_o *v80; // x0
  const MethodInfo *v81; // x2
  System_String_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x21
  InputUserBirthDayWindow_o *v90; // x0
  const MethodInfo *v91; // x2
  System_String_o *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x20
  System_String_o *v100; // x20
  System_String_o *v101; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v102; // x24
  __int64 v103; // x1
  const MethodInfo *v104; // x7
  InputUserBirthDayWindow_c *v105; // x0
  InputUserBirthDayConfirmWindow_o *v106; // x22
  System_String_o *v107; // x23
  System_String_o *v108; // x24
  Il2CppObject *v109; // x21
  Il2CppObject *v110; // x2
  System_String_o *v111; // x20
  System_String_o *v112; // x21
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v113; // x24
  __int64 v114; // x0
  __int64 v115; // x1
  const MethodInfo *v116; // x7
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 v120; // x0
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x0
  __int64 v124; // x0
  __int64 v125; // x0
  __int64 v126; // x0
  int v127; // [xsp+3Ch] [xbp-54h] BYREF
  __int64 v128; // [xsp+40h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+48h] [xbp-48h] BYREF
  System_DateTime_o v130; // 0:x0.8
  System_DateTime_o v131; // 0:x0.8
  System_DateTime_o v132; // 0:x0.8

  if ( (byte_42EA4DD & 1) == 0 )
  {
    sub_B5D5C4(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_InputUserBirthDayWindow_OnConfirm__, v5, v6, v7);
    sub_B5D5C4(&InputUserBirthDayWindow_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&object___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SoundManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_11217/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12214/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12213/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_11216/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_12212/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, v38, v39, v40);
    byte_42EA4DD = 1;
  }
  dateData = 0LL;
  if ( this->fields.isInput )
  {
    birthMonthInput = this->fields.birthMonthInput;
    if ( !birthMonthInput )
      sub_B5D69C(0LL, method);
    Text = UILineInput__GetText(birthMonthInput, 0LL);
    v44 = System_Int32__Parse(Text, 0LL);
    birthDayInput = this->fields.birthDayInput;
    if ( !birthDayInput )
      sub_B5D69C(0LL, v43);
    v46 = UILineInput__GetText(birthDayInput, 0LL);
    v47 = System_Int32__Parse(v46, 0LL);
    v128 = 0LL;
    v130.fields.dateData = (uint64_t)&v128;
    System_DateTime___ctor_15564744(v130, 2000, v44, v47, 0LL);
    paramList = this->fields.paramList;
    if ( !paramList )
      sub_B5D69C(v48, v49);
    if ( !paramList->max_length )
    {
      v117 = sub_B5D6C8(v48);
      sub_B5D668(v117, 0LL);
    }
    paramList->m_Items[1] = v44;
    v51 = this->fields.paramList;
    if ( !v51 )
      sub_B5D69C(v48, v49);
    if ( v51->max_length <= 1 )
    {
      v118 = sub_B5D6C8(v48);
      sub_B5D668(v118, 0LL);
    }
    v51->m_Items[2] = v47;
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
        sub_B5D69C(0LL, v53);
      birthDay = SelfUserGame->fields.birthDay;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getDateTime_26077468(birthDay, 0LL).fields.dateData;
      confirmWindow = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11217/*"RESET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11216/*"RESET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      v58 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 4LL);
      v131.fields.dateData = (uint64_t)&dateData;
      Month = (InputUserBirthDayWindow_o *)System_DateTime__get_Month(v131, 0LL);
      PaddingBirthday = InputUserBirthDayWindow__getPaddingBirthday(Month, (int32_t)Month, v60);
      if ( !v58 )
        sub_B5D69C(PaddingBirthday, v62);
      v69 = (System_Int32_array **)PaddingBirthday;
      if ( PaddingBirthday )
      {
        PaddingBirthday = (System_String_o *)sub_B5D684(PaddingBirthday, v58->obj.klass->_1.element_class);
        if ( !PaddingBirthday )
        {
          v123 = sub_B5D6BC(0LL);
          sub_B5D668(v123, 0LL);
        }
      }
      if ( !v58->max_length )
      {
        v119 = sub_B5D6C8(PaddingBirthday);
        sub_B5D668(v119, 0LL);
      }
      v58->m_Items[0] = (Il2CppObject *)v69;
      sub_B5D560((BattleServantConfConponent_o *)v58->m_Items, v69, v63, v64, v65, v66, v67, v68);
      v132.fields.dateData = (uint64_t)&dateData;
      Day = (InputUserBirthDayWindow_o *)System_DateTime__get_Day(v132, 0LL);
      v72 = InputUserBirthDayWindow__getPaddingBirthday(Day, (int32_t)Day, v71);
      v79 = (System_Int32_array **)v72;
      if ( v72 )
      {
        v72 = (System_String_o *)sub_B5D684(v72, v58->obj.klass->_1.element_class);
        if ( !v72 )
        {
          v124 = sub_B5D6BC(0LL);
          sub_B5D668(v124, 0LL);
        }
      }
      if ( v58->max_length <= 1 )
      {
        v120 = sub_B5D6C8(v72);
        sub_B5D668(v120, 0LL);
      }
      v58->m_Items[1] = (Il2CppObject *)v79;
      sub_B5D560((BattleServantConfConponent_o *)&v58->m_Items[1], v79, v73, v74, v75, v76, v77, v78);
      v82 = InputUserBirthDayWindow__getPaddingBirthday(v80, v44, v81);
      v89 = (System_Int32_array **)v82;
      if ( v82 )
      {
        v82 = (System_String_o *)sub_B5D684(v82, v58->obj.klass->_1.element_class);
        if ( !v82 )
        {
          v125 = sub_B5D6BC(0LL);
          sub_B5D668(v125, 0LL);
        }
      }
      if ( v58->max_length <= 2 )
      {
        v121 = sub_B5D6C8(v82);
        sub_B5D668(v121, 0LL);
      }
      v58->m_Items[2] = (Il2CppObject *)v89;
      sub_B5D560((BattleServantConfConponent_o *)&v58->m_Items[2], v89, v83, v84, v85, v86, v87, v88);
      v92 = InputUserBirthDayWindow__getPaddingBirthday(v90, v47, v91);
      v99 = (System_Int32_array **)v92;
      if ( v92 )
      {
        v92 = (System_String_o *)sub_B5D684(v92, v58->obj.klass->_1.element_class);
        if ( !v92 )
        {
          v126 = sub_B5D6BC(0LL);
          sub_B5D668(v126, 0LL);
        }
      }
      if ( v58->max_length <= 3 )
      {
        v122 = sub_B5D6C8(v92);
        sub_B5D668(v122, 0LL);
      }
      v58->m_Items[3] = (Il2CppObject *)v99;
      sub_B5D560((BattleServantConfConponent_o *)&v58->m_Items[3], v99, v93, v94, v95, v96, v97, v98);
      v100 = System_String__Format_44656512(v57, v58, 0LL);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12213/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v102 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B5D694(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v102,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      v105 = InputUserBirthDayWindow_TypeInfo;
      if ( (BYTE3(InputUserBirthDayWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !InputUserBirthDayWindow_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(InputUserBirthDayWindow_TypeInfo);
        v105 = InputUserBirthDayWindow_TypeInfo;
      }
      if ( !confirmWindow )
        sub_B5D69C(v105, v103);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        confirmWindow,
        v56,
        v100,
        v101,
        v102,
        v105->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_POSITION_Y,
        v105->static_fields->RESET_BIRTH_DAY_CONFIRM_INFO_SPACING_Y,
        v104);
    }
    else
    {
      v106 = this->fields.confirmWindow;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12214/*"SET_BIRTHDAY_CONFIRM_TITLE"*/, 0LL);
      v108 = LocalizationManager__Get((System_String_o *)StringLiteral_12212/*"SET_BIRTHDAY_CONFIRM_MESSAGE"*/, 0LL);
      LODWORD(v128) = v44;
      v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
      v127 = v47;
      v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
      v111 = System_String__Format_44573324(v108, v109, v110, 0LL);
      v112 = LocalizationManager__Get((System_String_o *)StringLiteral_12213/*"SET_BIRTHDAY_CONFIRM_NOTICE"*/, 0LL);
      v113 = (InputUserBirthDayConfirmWindow_CallbackFunc_o *)sub_B5D694(InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo);
      InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        v113,
        (Il2CppObject *)this,
        Method_InputUserBirthDayWindow_OnConfirm__,
        0LL);
      if ( !v106 )
        sub_B5D69C(v114, v115);
      InputUserBirthDayConfirmWindow__OpenConfirmWindow(v106, v107, v111, v112, v113, 30, 0, v116);
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
    sub_B5D69C(0LL, isDecide);
  InputUserBirthDayConfirmWindow__Close_28476632(confirmWindow, 0LL, method);
  if ( isDecide )
    InputUserBirthDayWindow__Callback(this, 1, v6, v7);
}


void __fastcall InputUserBirthDayWindow__OpenInputBirthDayWindow(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  bool IsOpen; // w0
  UILabel_o *titleLb; // x20
  System_String_o **v47; // x8
  System_String_o *v48; // x21
  UILabel_o *inputInfoLb; // x20
  UILabel_o *noticeLb; // x20
  System_String_o **v51; // x8
  System_String_o *v52; // x21
  struct System_Int32_array *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Action_o *v60; // x20

  if ( (byte_42EA4D9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v6, v7, v8);
    sub_B5D5C4(&CondType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_InputUserBirthDayWindow_EndOpen__, v12, v13, v14);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_7379/*"INPUT_BIRTHDAY_INFO"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_7380/*"INPUT_BIRTHDAY_NOTICE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11219/*"RESET_BIRTHDAY_TITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_7381/*"INPUT_BIRTHDAY_TITLE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_11218/*"RESET_BIRTHDAY_NOTICE"*/, v33, v34, v35);
    byte_42EA4D9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  UnityEngine_Input__set_imeCompositionMode(1, 0LL);
  this->fields.isInput = 0;
  InputUserBirthDayWindow__setExeBtnState(this, v38);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(144, 0, 0LL, 0, 0LL);
  titleLb = this->fields.titleLb;
  this->fields.isResetBirthday = IsOpen;
  if ( IsOpen )
    v47 = (System_String_o **)&StringLiteral_11219/*"RESET_BIRTHDAY_TITLE"*/;
  else
    v47 = (System_String_o **)&StringLiteral_7381/*"INPUT_BIRTHDAY_TITLE"*/;
  v48 = *v47;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v48, 0LL);
  if ( !titleLb )
    goto LABEL_27;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0LL);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7379/*"INPUT_BIRTHDAY_INFO"*/, 0LL);
  if ( !inputInfoLb )
    goto LABEL_27;
  UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0LL);
  noticeLb = this->fields.noticeLb;
  v51 = (System_String_o **)(this->fields.isResetBirthday ? &StringLiteral_11218/*"RESET_BIRTHDAY_NOTICE"*/ : &StringLiteral_7380/*"INPUT_BIRTHDAY_NOTICE"*/);
  v52 = *v51;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v52, 0LL);
  if ( !noticeLb
    || (UILabel__set_text(noticeLb, (System_String_o *)gameObject, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.birthMonthInput,
        this->fields.state = 1,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.birthDayInput) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
LABEL_27:
    sub_B5D69C(gameObject, v37);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  v53 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  this->fields.paramList = v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.paramList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_InputUserBirthDayWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
}


void __fastcall InputUserBirthDayWindow__add_callbackFunc(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  InputUserBirthDayWindow_o *v12; // x0
  InputUserBirthDayWindow_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA4D6 & 1) == 0 )
  {
    sub_B5D5C4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA4D6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (InputUserBirthDayWindow_CallbackFunc_c *)v9->klass != InputUserBirthDayWindow_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (InputUserBirthDayWindow_o *)sub_B5D990(v9);
  InputUserBirthDayWindow__remove_callbackFunc(v12, v13, v14);
}


void __fastcall InputUserBirthDayWindow__closeNotification(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EA4DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EA4DE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


System_String_o *__fastcall InputUserBirthDayWindow__getPaddingBirthday(
        InputUserBirthDayWindow_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x1
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  if ( (byte_42EA4E0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_82/*"  "*/, num, (_DWORD)method, v3);
    byte_42EA4E0 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  if ( num <= 9 )
    return System_String__Concat_44577788((System_String_o *)StringLiteral_82/*"  "*/, v5, 0LL);
  return v5;
}


System_String_o *__fastcall InputUserBirthDayWindow__get_closeBtnPath(
        InputUserBirthDayWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4DF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2796/*"BaseWindow/CancleBtn"*/, (_DWORD)method, v2, v3);
    byte_42EA4DF = 1;
  }
  return (System_String_o *)StringLiteral_2796/*"BaseWindow/CancleBtn"*/;
}


void __fastcall InputUserBirthDayWindow__remove_callbackFunc(
        InputUserBirthDayWindow_o *this,
        InputUserBirthDayWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct InputUserBirthDayWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct InputUserBirthDayWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  InputUserBirthDayWindow_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EA4D7 & 1) == 0 )
  {
    sub_B5D5C4(&InputUserBirthDayWindow_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA4D7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (InputUserBirthDayWindow_CallbackFunc_c *)v9->klass != InputUserBirthDayWindow_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (InputUserBirthDayWindow_o *)sub_B5D990(v9);
  InputUserBirthDayWindow__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow__setExeBtnState(InputUserBirthDayWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *confirmBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 isInput; // w21
  UIWidget_o *confirmTxt; // x20
  UIWidget_o *v9; // x19
  int v10; // s0
  int v14; // s0

  if ( (byte_42EA4DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    byte_42EA4DA = 1;
  }
  confirmBtnBg = (UnityEngine_Component_o *)this->fields.confirmBtnBg;
  if ( !confirmBtnBg )
    goto LABEL_9;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              confirmBtnBg,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  isInput = this->fields.isInput;
  confirmTxt = (UIWidget_o *)this->fields.confirmTxt;
  v9 = (UIWidget_o *)Component_WebViewObject;
  *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_black(0LL);
  if ( !confirmTxt )
    goto LABEL_9;
  UIWidget__set_color(confirmTxt, *(UnityEngine_Color_o *)&v10, 0LL);
  if ( !isInput )
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
    if ( v9 )
      goto LABEL_7;
LABEL_9:
    sub_B5D69C(confirmBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
  if ( !v9 )
    goto LABEL_9;
LABEL_7:
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayWindow_CallbackFunc___ctor(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5700 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)param, callback);
    byte_42E5700 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)param;
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall InputUserBirthDayWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, System_Int32_array *, _QWORD); // x0
  InputUserBirthDayWindow_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, System_Int32_array *, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  InputUserBirthDayWindow_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
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
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, System_Int32_array *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, result, param);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(result, param, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AF54C0(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, result, param, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))v17)(
            v22,
            result,
            param,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_Int32_array *, _QWORD))(*v22
                                                                                + 16LL * *(unsigned __int16 *)(v23 + 72)
                                                                                + 312))(
            v22,
            result,
            param,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_Int32_array *, __int64))v24)(v22, result, param, v23);
    goto LABEL_36;
  }
}