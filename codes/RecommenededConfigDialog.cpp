void __fastcall RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4212F51 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17008/*"btn_bg_04"*/, v9);
    sub_B0D8A4(&StringLiteral_17007/*"btn_bg_03"*/, v10);
    byte_4212F51 = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_17007/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17007/*"btn_bg_03"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.ON_BTN_SPRITE_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_17008/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17008/*"btn_bg_04"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.OFF_BTN_SPRITE_NAME, v12, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_21537616(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_21537616(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x20

  if ( (byte_4212F4A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_RecommenededConfigDialog_EndClose__, v10);
    byte_4212F4A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
}


void __fastcall RecommenededConfigDialog__EndClose(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommenededConfigDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall RecommenededConfigDialog__EndOpen(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall RecommenededConfigDialog__Init(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  il2cpp_array_size_t v6; // w22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v8; // w21
  il2cpp_array_size_t v9; // w22
  __int64 v10; // x0

  if ( (byte_4212F46 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4212F46 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.classLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.rarityLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_29;
  max_length = classButtonLabelList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( v6 < classButtonLabelList->max_length )
    {
      titleLabel = classButtonLabelList->m_Items[v6];
      if ( !titleLabel )
        goto LABEL_29;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( (int)++v6 >= max_length )
        goto LABEL_15;
      classButtonLabelList = this->fields.classButtonLabelList;
      if ( !classButtonLabelList )
        goto LABEL_29;
    }
LABEL_30:
    v10 = sub_B0D9A8(titleLabel);
    sub_B0D948(v10, 0LL);
  }
LABEL_15:
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_29;
  v8 = rarityButtonLabelList->max_length;
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( v9 < rarityButtonLabelList->max_length )
    {
      titleLabel = rarityButtonLabelList->m_Items[v9];
      if ( !titleLabel )
        goto LABEL_29;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( (int)++v9 >= v8 )
        goto LABEL_23;
      rarityButtonLabelList = this->fields.rarityButtonLabelList;
      if ( !rarityButtonLabelList )
        goto LABEL_29;
    }
    goto LABEL_30;
  }
LABEL_23:
  titleLabel = this->fields.resetButtonLabel;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.clearButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelButtonLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_29:
    sub_B0D97C(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_4212F50 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212F50 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_B0D97C(0LL);
    RecommenededConfigDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog__OnClickClass(
        RecommenededConfigDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct UICommonButton_array *classButtonList; // x8
  int max_length; // w8
  int v9; // w9
  struct RecommendedConfigSaveData_o *saveData; // x8

  if ( (byte_4212F4B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4212F4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    classButtonList = this->fields.classButtonList;
    if ( classButtonList )
    {
      max_length = classButtonList->max_length;
      if ( max_length < 1 )
      {
LABEL_16:
        RecommenededConfigDialog__SetButtonState(this, v6);
        return;
      }
      v9 = 0;
      while ( kind != v9 )
      {
        if ( ++v9 >= max_length )
          goto LABEL_16;
      }
      saveData = this->fields.saveData;
      if ( saveData )
      {
        saveData->fields.selectClass = kind;
        goto LABEL_16;
      }
    }
    sub_B0D97C(v5);
  }
}


void __fastcall RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v6; // x8
  const MethodInfo *v7; // x1

  if ( (byte_4212F4E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4212F4E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (saveData->fields.selectClass = 0, (v6 = this->fields.saveData) == 0LL)
      || (selectRarityList = v6->fields.selectRarityList) == 0LL )
    {
      sub_B0D97C(selectRarityList);
    }
    System_Collections_Generic_List_int___Clear(
      selectRarityList,
      (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
    RecommenededConfigDialog__SetButtonState(this, v7);
  }
}


void __fastcall RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  const MethodInfo *v6; // x2
  struct RecommendedConfigSaveData_o *saveData; // x1

  if ( (byte_4212F4F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Sort__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4212F4F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList) == 0LL
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            selectRarityList,
            (const MethodInfo_2FB1E20 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig((RecommendedConfigSaveData_o *)selectRarityList, saveData, v6),
          (selectRarityList = (System_Collections_Generic_List_int__o *)this->fields.closeFunc) == 0LL) )
    {
      sub_B0D97C(selectRarityList);
    }
    RecommenededConfigDialog_ClickDelegate__Invoke((RecommenededConfigDialog_ClickDelegate_o *)selectRarityList, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog__OnClickRarity(
        RecommenededConfigDialog_o *this,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v10; // x9
  char v11; // w8
  const MethodInfo *v12; // x1

  if ( (byte_4212F4C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&rarity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    byte_4212F4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList) == 0LL
      || (selectRarityList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                         selectRarityList,
                                                                         rarity,
                                                                         (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__),
          (v10 = this->fields.saveData) == 0LL)
      || (v11 = (char)selectRarityList, (selectRarityList = v10->fields.selectRarityList) == 0LL) )
    {
      sub_B0D97C(selectRarityList);
    }
    if ( (v11 & 1) != 0 )
      System_Collections_Generic_List_int___Remove(
        selectRarityList,
        rarity,
        (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
    else
      System_Collections_Generic_List_int___Add(
        selectRarityList,
        rarity,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    RecommenededConfigDialog__SetButtonState(this, v12);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  if ( (byte_4212F4D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212F4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    RecommenededConfigDialog__SetInitConfig(this, v3);
    RecommenededConfigDialog__SetButtonState(this, v4);
  }
}


void __fastcall RecommenededConfigDialog__OpenRecommendedConfig(
        RecommenededConfigDialog_o *this,
        RecommenededConfigDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  RecommendedConfigSaveData_o *v25; // x22
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *onClick; // x0
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w27
  __int64 v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UILabel_array *v48; // x8
  UILabel_o *v49; // x23
  System_String_o *v50; // x0
  System_String_o *v51; // x24
  __int64 v52; // x8
  struct UICommonButton_array *classButtonList; // x9
  UICommonButton_o *v54; // x8
  __int64 v55; // x1
  __int64 v56; // x2
  struct UICommonButton_array *v57; // x8
  UICommonButton_o *v58; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x23
  EventDelegate_Callback_o *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  EventDelegate_o *v63; // x22
  struct UICommonButton_array *v64; // x8
  UILabel_o *rarityLabel; // x22
  __int64 v66; // x1
  __int64 v67; // x2
  struct UILabel_array *rarityButtonLabelList; // x8
  int v69; // w20
  __int64 v70; // x22
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct UILabel_array *v77; // x8
  UILabel_o *v78; // x23
  System_String_o *v79; // x0
  System_String_o *v80; // x24
  __int64 v81; // x8
  struct UICommonButton_array *rarityButtonList; // x9
  UICommonButton_o *v83; // x8
  __int64 v84; // x1
  __int64 v85; // x2
  struct UICommonButton_array *v86; // x8
  UICommonButton_o *v87; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x23
  EventDelegate_Callback_o *v89; // x24
  __int64 v90; // x1
  __int64 v91; // x2
  EventDelegate_o *v92; // x22
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // x1
  RecommendedConfigSaveData_c *v99; // x0
  System_Int32_array **ConfigSaveData; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  const MethodInfo *v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  __int64 v114; // x1
  __int64 v115; // x2
  System_Action_o *v116; // x20
  __int64 v117; // x0
  BattleServantConfConponent_o *p_saveData; // [xsp+8h] [xbp-68h]
  __int64 v120; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4212F47 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, closeCallback);
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, v4);
    sub_B0D8A4(&EventDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&RecommendedConfigSaveData_TypeInfo, v9);
    sub_B0D8A4(&Method_RecommenededConfigDialog_EndOpen__, v10);
    sub_B0D8A4(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__, v11);
    sub_B0D8A4(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v12);
    sub_B0D8A4(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__, v13);
    sub_B0D8A4(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_11081/*"RECOMMENDED_DIALOG_TITLE"*/, v15);
    sub_B0D8A4(&StringLiteral_11087/*"RECOMMENDED_RARITY_TITLE"*/, v16);
    sub_B0D8A4(&StringLiteral_11086/*"RECOMMENDED_RARITY_"*/, v17);
    sub_B0D8A4(&StringLiteral_11079/*"RECOMMENDED_CLEAR"*/, v18);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v19);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v20);
    sub_B0D8A4(&StringLiteral_11088/*"RECOMMENDED_RESET"*/, v21);
    sub_B0D8A4(&StringLiteral_11078/*"RECOMMENDED_CLASS_TITLE"*/, v22);
    sub_B0D8A4(&StringLiteral_11077/*"RECOMMENDED_CLASS_"*/, v23);
    sub_B0D8A4(&StringLiteral_11080/*"RECOMMENDED_DIALOG_MESSAGE"*/, v24);
    byte_4212F47 = 1;
  }
  v120 = 0LL;
  v25 = (RecommendedConfigSaveData_o *)sub_B0D974(RecommendedConfigSaveData_TypeInfo, closeCallback, method);
  RecommendedConfigSaveData___ctor(v25, v26);
  this->fields.saveData = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.saveData,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11081/*"RECOMMENDED_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_68;
  UILabel__set_text(titleLabel, onClick, 0LL);
  messageLabel = this->fields.messageLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11080/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_68;
  UILabel__set_text(messageLabel, onClick, 0LL);
  classLabel = this->fields.classLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11078/*"RECOMMENDED_CLASS_TITLE"*/, 0LL);
  if ( !classLabel )
    goto LABEL_68;
  UILabel__set_text(classLabel, onClick, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_68;
  max_length = classButtonLabelList->max_length;
  HIDWORD(v120) = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v41 = sub_B0D974(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v37, v38);
      RecommenededConfigDialog___c__DisplayClass23_0___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_0_o *)v41,
        0LL);
      if ( !v41 )
        break;
      *(_QWORD *)(v41 + 24) = this;
      sub_B0D840((BattleServantConfConponent_o *)(v41 + 24), (System_Int32_array **)this, v42, v43, v44, v45, v46, v47);
      v48 = this->fields.classButtonLabelList;
      if ( !v48 )
        break;
      if ( HIDWORD(v120) >= v48->max_length )
        goto LABEL_69;
      v49 = v48->m_Items[SHIDWORD(v120)];
      v50 = System_Int32__ToString((int32_t)&v120 + 4, 0LL);
      v51 = System_String__Concat_43849904((System_String_o *)StringLiteral_11077/*"RECOMMENDED_CLASS_"*/, v50, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      onClick = LocalizationManager__Get(v51, 0LL);
      if ( !v49 )
        break;
      UILabel__set_text(v49, onClick, 0LL);
      v52 = SHIDWORD(v120);
      *(_DWORD *)(v41 + 16) = HIDWORD(v120);
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( (unsigned int)v52 >= classButtonList->max_length )
        goto LABEL_69;
      v54 = classButtonList->m_Items[v52];
      if ( !v54 )
        break;
      onClick = (System_String_o *)v54->fields.onClick;
      if ( !onClick )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)onClick,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
      v57 = this->fields.classButtonList;
      if ( !v57 )
        break;
      if ( HIDWORD(v120) >= v57->max_length )
        goto LABEL_69;
      v58 = v57->m_Items[SHIDWORD(v120)];
      if ( !v58 )
        break;
      v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v58->fields.onClick;
      v60 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v55, v56);
      EventDelegate_Callback___ctor(
        v60,
        (Il2CppObject *)v41,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v63 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v61, v62);
      EventDelegate___ctor_28889248(v63, v60, 0LL);
      if ( !v59 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v59,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      v64 = this->fields.classButtonList;
      if ( !v64 )
        break;
      if ( HIDWORD(v120) >= v64->max_length )
      {
LABEL_69:
        v117 = sub_B0D9A8(onClick);
        sub_B0D948(v117, 0LL);
      }
      onClick = (System_String_o *)v64->m_Items[SHIDWORD(v120)];
      if ( !onClick )
        break;
      onClick = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)onClick, 0LL);
      if ( !onClick )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)onClick, 1, 0LL);
      ++HIDWORD(v120);
      if ( SHIDWORD(v120) >= max_length )
        goto LABEL_31;
    }
LABEL_68:
    sub_B0D97C(onClick);
  }
LABEL_31:
  rarityLabel = this->fields.rarityLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11087/*"RECOMMENDED_RARITY_TITLE"*/, 0LL);
  if ( !rarityLabel )
    goto LABEL_68;
  UILabel__set_text(rarityLabel, onClick, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_68;
  v69 = rarityButtonLabelList->max_length;
  LODWORD(v120) = 0;
  if ( v69 >= 1 )
  {
    do
    {
      v70 = sub_B0D974(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v66, v67);
      RecommenededConfigDialog___c__DisplayClass23_1___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_1_o *)v70,
        0LL);
      if ( !v70 )
        goto LABEL_68;
      *(_QWORD *)(v70 + 24) = this;
      sub_B0D840((BattleServantConfConponent_o *)(v70 + 24), (System_Int32_array **)this, v71, v72, v73, v74, v75, v76);
      v77 = this->fields.rarityButtonLabelList;
      if ( !v77 )
        goto LABEL_68;
      if ( (unsigned int)v120 >= v77->max_length )
        goto LABEL_69;
      v78 = v77->m_Items[(int)v120];
      v79 = System_Int32__ToString((int32_t)&v120, 0LL);
      v80 = System_String__Concat_43849904((System_String_o *)StringLiteral_11086/*"RECOMMENDED_RARITY_"*/, v79, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      onClick = LocalizationManager__Get(v80, 0LL);
      if ( !v78 )
        goto LABEL_68;
      UILabel__set_text(v78, onClick, 0LL);
      v81 = (int)v120;
      *(_DWORD *)(v70 + 16) = v120 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_68;
      if ( (unsigned int)v81 >= rarityButtonList->max_length )
        goto LABEL_69;
      v83 = rarityButtonList->m_Items[v81];
      if ( !v83 )
        goto LABEL_68;
      onClick = (System_String_o *)v83->fields.onClick;
      if ( !onClick )
        goto LABEL_68;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)onClick,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
      v86 = this->fields.rarityButtonList;
      if ( !v86 )
        goto LABEL_68;
      if ( (unsigned int)v120 >= v86->max_length )
        goto LABEL_69;
      v87 = v86->m_Items[(int)v120];
      if ( !v87 )
        goto LABEL_68;
      v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v87->fields.onClick;
      v89 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v84, v85);
      EventDelegate_Callback___ctor(
        v89,
        (Il2CppObject *)v70,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v92 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v90, v91);
      EventDelegate___ctor_28889248(v92, v89, 0LL);
      if ( !v88 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v88,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v92,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      LODWORD(v120) = v120 + 1;
    }
    while ( (int)v120 < v69 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11088/*"RECOMMENDED_RESET"*/, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_68;
  UILabel__set_text(resetButtonLabel, onClick, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11079/*"RECOMMENDED_CLEAR"*/, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_68;
  UILabel__set_text(clearButtonLabel, onClick, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_68;
  UILabel__set_text(decideButtonLabel, onClick, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_68;
  UILabel__set_text(cancelButtonLabel, onClick, 0LL);
  p_saveData = (BattleServantConfConponent_o *)&this->fields.saveData;
  if ( !this->fields.saveData )
    goto LABEL_68;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)onClick, v97) )
  {
    v99 = RecommendedConfigSaveData_TypeInfo;
    if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    }
    ConfigSaveData = (System_Int32_array **)RecommendedConfigSaveData__LoadConfigSaveData((const MethodInfo *)v99);
    p_saveData->klass = (BattleServantConfConponent_c *)ConfigSaveData;
    sub_B0D840(p_saveData, ConfigSaveData, v101, v102, v103, v104, v105, v106);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v98);
  }
  RecommenededConfigDialog__SetButtonState(this, v107);
  this->fields.closeFunc = closeCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v116 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v114, v115);
  System_Action___ctor(v116, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v116, 0, 0LL);
}


void __fastcall RecommenededConfigDialog__SetButtonState(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  struct UISprite_array *classButtonSpriteList; // x8
  __int64 v4; // x8
  unsigned __int64 v5; // x20
  signed __int64 v6; // x21
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct UISprite_array *v8; // x9
  System_String_o *ON_BTN_SPRITE_NAME; // x1
  struct UISprite_array *rarityButtonSpriteList; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  signed __int64 v13; // x21
  struct RecommendedConfigSaveData_o *v14; // x8
  signed __int64 v15; // x20
  struct UISprite_array *v16; // x9
  char v17; // w8
  System_String_o *OFF_BTN_SPRITE_NAME; // x1
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4212F49 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, method);
    byte_4212F49 = 1;
  }
  classButtonSpriteList = v2->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_29;
  v4 = *(_QWORD *)&classButtonSpriteList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    v6 = (int)v4;
    while ( 1 )
    {
      saveData = v2->fields.saveData;
      if ( !saveData )
        break;
      v8 = v2->fields.classButtonSpriteList;
      if ( !v8 )
        break;
      if ( v5 >= v8->max_length )
      {
LABEL_30:
        v19 = sub_B0D9A8(this);
        sub_B0D948(v19, 0LL);
      }
      this = (RecommenededConfigDialog_o *)v8->m_Items[v5];
      if ( v5 == saveData->fields.selectClass )
      {
        if ( !this )
          break;
        ON_BTN_SPRITE_NAME = v2->fields.ON_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !this )
          break;
        ON_BTN_SPRITE_NAME = v2->fields.OFF_BTN_SPRITE_NAME;
      }
      UISprite__set_spriteName((UISprite_o *)this, ON_BTN_SPRITE_NAME, 0LL);
      if ( (__int64)++v5 >= v6 )
        goto LABEL_15;
    }
LABEL_29:
    sub_B0D97C(this);
  }
LABEL_15:
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_29;
  v11 = *(_QWORD *)&rarityButtonSpriteList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v13 = (int)v11;
    while ( 1 )
    {
      v14 = v2->fields.saveData;
      if ( !v14 )
        goto LABEL_29;
      this = (RecommenededConfigDialog_o *)v14->fields.selectRarityList;
      if ( !this )
        goto LABEL_29;
      v15 = v12 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v12 + 1,
                                             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
      v16 = v2->fields.rarityButtonSpriteList;
      if ( !v16 )
        goto LABEL_29;
      if ( v12 >= v16->max_length )
        goto LABEL_30;
      v17 = (char)this;
      this = (RecommenededConfigDialog_o *)v16->m_Items[v12];
      if ( (v17 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_29;
        OFF_BTN_SPRITE_NAME = v2->fields.ON_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !this )
          goto LABEL_29;
        OFF_BTN_SPRITE_NAME = v2->fields.OFF_BTN_SPRITE_NAME;
      }
      UISprite__set_spriteName((UISprite_o *)this, OFF_BTN_SPRITE_NAME, 0LL);
      ++v12;
      if ( v15 >= v13 )
        return;
    }
  }
}


void __fastcall RecommenededConfigDialog__SetInitConfig(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  __int64 v3; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v5; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  int max_length; // w21
  int v8; // w20
  struct RecommendedConfigSaveData_o *v9; // x8

  v2 = this;
  if ( (byte_4212F48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (RecommenededConfigDialog_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v3);
    byte_4212F48 = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_13;
  saveData->fields.selectClass = 0;
  v5 = v2->fields.saveData;
  if ( !v5 )
    goto LABEL_13;
  this = (RecommenededConfigDialog_o *)v5->fields.selectRarityList;
  if ( !this )
    goto LABEL_13;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_13;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v2->fields.saveData;
      if ( !v9 )
        break;
      this = (RecommenededConfigDialog_o *)v9->fields.selectRarityList;
      if ( !this )
        break;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        ++v8,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      if ( v8 >= max_length )
        return;
    }
LABEL_13:
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog_ClickDelegate___ctor(
        RecommenededConfigDialog_ClickDelegate_o *this,
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecommenededConfigDialog_ClickDelegate__BeginInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_421251D & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isDecide);
    byte_421251D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog_ClickDelegate__Invoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  RecommenededConfigDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  RecommenededConfigDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  RecommenededConfigDialog_ClickDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (RecommenededConfigDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
    goto LABEL_37;
  }
}


void __fastcall RecommenededConfigDialog___c__DisplayClass23_0___ctor(
        RecommenededConfigDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommenededConfigDialog___c__DisplayClass23_0___OpenRecommendedConfig_b__0(
        RecommenededConfigDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  RecommenededConfigDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  RecommenededConfigDialog__OnClickClass(_4__this, this->fields.classKind, 0LL);
}


void __fastcall RecommenededConfigDialog___c__DisplayClass23_1___ctor(
        RecommenededConfigDialog___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommenededConfigDialog___c__DisplayClass23_1___OpenRecommendedConfig_b__1(
        RecommenededConfigDialog___c__DisplayClass23_1_o *this,
        const MethodInfo *method)
{
  RecommenededConfigDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  RecommenededConfigDialog__OnClickRarity(_4__this, this->fields.rarityKind, 0LL);
}