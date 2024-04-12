void __fastcall RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B3A00 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&StringLiteral_17075/*"btn_bg_04"*/);
    sub_B52984(&StringLiteral_17074/*"btn_bg_03"*/);
    byte_42B3A00 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_17074/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17074/*"btn_bg_03"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.ON_BTN_SPRITE_NAME, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_17075/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17075/*"btn_bg_04"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.OFF_BTN_SPRITE_NAME, v10, v11, v12, v13, v14, v15, v16);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_31967812(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_31967812(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_42B39F9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_RecommenededConfigDialog_EndClose__);
    byte_42B39F9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42B39F5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B39F5 = 1;
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
    v10 = sub_B52A88(titleLabel);
    sub_B52A28(v10, 0LL);
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
    sub_B52A5C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_42B39FF & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B39FF = 1;
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
      sub_B52A5C(0LL, v3);
    RecommenededConfigDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


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

  if ( (byte_42B39FA & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B39FA = 1;
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
    sub_B52A5C(v5, v6);
  }
}


void __fastcall RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  __int64 v4; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v6; // x8
  const MethodInfo *v7; // x1

  if ( (byte_42B39FD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B39FD = 1;
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
      sub_B52A5C(selectRarityList, v4);
    }
    System_Collections_Generic_List_int___Clear(
      selectRarityList,
      (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
    RecommenededConfigDialog__SetButtonState(this, v7);
  }
}


void __fastcall RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  const MethodInfo *v4; // x2
  struct RecommendedConfigSaveData_o *saveData; // x1

  if ( (byte_42B39FE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B39FE = 1;
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
            (const MethodInfo_3058ED0 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig((RecommendedConfigSaveData_o *)selectRarityList, saveData, v4),
          (selectRarityList = (System_Collections_Generic_List_int__o *)this->fields.closeFunc) == 0LL) )
    {
      sub_B52A5C(selectRarityList, saveData);
    }
    RecommenededConfigDialog_ClickDelegate__Invoke((RecommenededConfigDialog_ClickDelegate_o *)selectRarityList, 1, 0LL);
  }
}


void __fastcall RecommenededConfigDialog__OnClickRarity(
        RecommenededConfigDialog_o *this,
        int32_t rarity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  __int64 v6; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v8; // x9
  char v9; // w8
  const MethodInfo *v10; // x1

  if ( (byte_42B39FB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B39FB = 1;
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
                                                                         (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__),
          (v8 = this->fields.saveData) == 0LL)
      || (v9 = (char)selectRarityList, (selectRarityList = v8->fields.selectRarityList) == 0LL) )
    {
      sub_B52A5C(selectRarityList, v6);
    }
    if ( (v9 & 1) != 0 )
      System_Collections_Generic_List_int___Remove(
        selectRarityList,
        rarity,
        (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
    else
      System_Collections_Generic_List_int___Add(
        selectRarityList,
        rarity,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    RecommenededConfigDialog__SetButtonState(this, v10);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  if ( (byte_42B39FC & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B39FC = 1;
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
  RecommendedConfigSaveData_o *v4; // x22
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *onClick; // x0
  const MethodInfo *v14; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w27
  __int64 v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UILabel_array *v26; // x8
  UILabel_o *v27; // x23
  System_String_o *v28; // x0
  System_String_o *v29; // x24
  __int64 v30; // x8
  struct UICommonButton_array *classButtonList; // x9
  UICommonButton_o *v32; // x8
  struct UICommonButton_array *v33; // x8
  UICommonButton_o *v34; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x23
  EventDelegate_Callback_o *v36; // x24
  EventDelegate_o *v37; // x22
  struct UICommonButton_array *v38; // x8
  UILabel_o *rarityLabel; // x22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v41; // w20
  __int64 v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UILabel_array *v49; // x8
  UILabel_o *v50; // x23
  System_String_o *v51; // x0
  System_String_o *v52; // x24
  __int64 v53; // x8
  struct UICommonButton_array *rarityButtonList; // x9
  UICommonButton_o *v55; // x8
  struct UICommonButton_array *v56; // x8
  UICommonButton_o *v57; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x23
  EventDelegate_Callback_o *v59; // x24
  EventDelegate_o *v60; // x22
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v65; // x1
  RecommendedConfigSaveData_c *v66; // x0
  System_Int32_array **ConfigSaveData; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Action_o *v81; // x20
  __int64 v82; // x0
  BattleServantConfConponent_o *p_saveData; // [xsp+8h] [xbp-68h]
  __int64 v85; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B39F6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&RecommendedConfigSaveData_TypeInfo);
    sub_B52984(&Method_RecommenededConfigDialog_EndOpen__);
    sub_B52984(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__);
    sub_B52984(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo);
    sub_B52984(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__);
    sub_B52984(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo);
    sub_B52984(&StringLiteral_11141/*"RECOMMENDED_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_11147/*"RECOMMENDED_RARITY_TITLE"*/);
    sub_B52984(&StringLiteral_11146/*"RECOMMENDED_RARITY_"*/);
    sub_B52984(&StringLiteral_11139/*"RECOMMENDED_CLEAR"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_11148/*"RECOMMENDED_RESET"*/);
    sub_B52984(&StringLiteral_11138/*"RECOMMENDED_CLASS_TITLE"*/);
    sub_B52984(&StringLiteral_11137/*"RECOMMENDED_CLASS_"*/);
    sub_B52984(&StringLiteral_11140/*"RECOMMENDED_DIALOG_MESSAGE"*/);
    byte_42B39F6 = 1;
  }
  v85 = 0LL;
  v4 = (RecommendedConfigSaveData_o *)sub_B52A54(RecommendedConfigSaveData_TypeInfo);
  RecommendedConfigSaveData___ctor(v4, v5);
  this->fields.saveData = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.saveData,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11141/*"RECOMMENDED_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_68;
  UILabel__set_text(titleLabel, onClick, 0LL);
  messageLabel = this->fields.messageLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11140/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_68;
  UILabel__set_text(messageLabel, onClick, 0LL);
  classLabel = this->fields.classLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11138/*"RECOMMENDED_CLASS_TITLE"*/, 0LL);
  if ( !classLabel )
    goto LABEL_68;
  UILabel__set_text(classLabel, onClick, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_68;
  max_length = classButtonLabelList->max_length;
  HIDWORD(v85) = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v19 = sub_B52A54(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo);
      RecommenededConfigDialog___c__DisplayClass23_0___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_0_o *)v19,
        0LL);
      if ( !v19 )
        break;
      *(_QWORD *)(v19 + 24) = this;
      sub_B52920((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
      v26 = this->fields.classButtonLabelList;
      if ( !v26 )
        break;
      if ( HIDWORD(v85) >= v26->max_length )
        goto LABEL_69;
      v27 = v26->m_Items[SHIDWORD(v85)];
      v28 = System_Int32__ToString((int32_t)&v85 + 4, 0LL);
      v29 = System_String__Concat_44568316((System_String_o *)StringLiteral_11137/*"RECOMMENDED_CLASS_"*/, v28, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      onClick = LocalizationManager__Get(v29, 0LL);
      if ( !v27 )
        break;
      UILabel__set_text(v27, onClick, 0LL);
      v30 = SHIDWORD(v85);
      *(_DWORD *)(v19 + 16) = HIDWORD(v85);
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( (unsigned int)v30 >= classButtonList->max_length )
        goto LABEL_69;
      v32 = classButtonList->m_Items[v30];
      if ( !v32 )
        break;
      onClick = (System_String_o *)v32->fields.onClick;
      if ( !onClick )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)onClick,
        (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
      v33 = this->fields.classButtonList;
      if ( !v33 )
        break;
      if ( HIDWORD(v85) >= v33->max_length )
        goto LABEL_69;
      v34 = v33->m_Items[SHIDWORD(v85)];
      if ( !v34 )
        break;
      v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34->fields.onClick;
      v36 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v36,
        (Il2CppObject *)v19,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v37 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
      EventDelegate___ctor_29649660(v37, v36, 0LL);
      if ( !v35 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v35,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      v38 = this->fields.classButtonList;
      if ( !v38 )
        break;
      if ( HIDWORD(v85) >= v38->max_length )
      {
LABEL_69:
        v82 = sub_B52A88(onClick);
        sub_B52A28(v82, 0LL);
      }
      onClick = (System_String_o *)v38->m_Items[SHIDWORD(v85)];
      if ( !onClick )
        break;
      onClick = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)onClick, 0LL);
      if ( !onClick )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)onClick, 1, 0LL);
      ++HIDWORD(v85);
      if ( SHIDWORD(v85) >= max_length )
        goto LABEL_31;
    }
LABEL_68:
    sub_B52A5C(onClick, v14);
  }
LABEL_31:
  rarityLabel = this->fields.rarityLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11147/*"RECOMMENDED_RARITY_TITLE"*/, 0LL);
  if ( !rarityLabel )
    goto LABEL_68;
  UILabel__set_text(rarityLabel, onClick, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_68;
  v41 = rarityButtonLabelList->max_length;
  LODWORD(v85) = 0;
  if ( v41 >= 1 )
  {
    do
    {
      v42 = sub_B52A54(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo);
      RecommenededConfigDialog___c__DisplayClass23_1___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_1_o *)v42,
        0LL);
      if ( !v42 )
        goto LABEL_68;
      *(_QWORD *)(v42 + 24) = this;
      sub_B52920((BattleServantConfConponent_o *)(v42 + 24), (System_Int32_array **)this, v43, v44, v45, v46, v47, v48);
      v49 = this->fields.rarityButtonLabelList;
      if ( !v49 )
        goto LABEL_68;
      if ( (unsigned int)v85 >= v49->max_length )
        goto LABEL_69;
      v50 = v49->m_Items[(int)v85];
      v51 = System_Int32__ToString((int32_t)&v85, 0LL);
      v52 = System_String__Concat_44568316((System_String_o *)StringLiteral_11146/*"RECOMMENDED_RARITY_"*/, v51, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      onClick = LocalizationManager__Get(v52, 0LL);
      if ( !v50 )
        goto LABEL_68;
      UILabel__set_text(v50, onClick, 0LL);
      v53 = (int)v85;
      *(_DWORD *)(v42 + 16) = v85 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_68;
      if ( (unsigned int)v53 >= rarityButtonList->max_length )
        goto LABEL_69;
      v55 = rarityButtonList->m_Items[v53];
      if ( !v55 )
        goto LABEL_68;
      onClick = (System_String_o *)v55->fields.onClick;
      if ( !onClick )
        goto LABEL_68;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)onClick,
        (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
      v56 = this->fields.rarityButtonList;
      if ( !v56 )
        goto LABEL_68;
      if ( (unsigned int)v85 >= v56->max_length )
        goto LABEL_69;
      v57 = v56->m_Items[(int)v85];
      if ( !v57 )
        goto LABEL_68;
      v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v57->fields.onClick;
      v59 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v59,
        (Il2CppObject *)v42,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v60 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
      EventDelegate___ctor_29649660(v60, v59, 0LL);
      if ( !v58 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v58,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      LODWORD(v85) = v85 + 1;
    }
    while ( (int)v85 < v41 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11148/*"RECOMMENDED_RESET"*/, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_68;
  UILabel__set_text(resetButtonLabel, onClick, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11139/*"RECOMMENDED_CLEAR"*/, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_68;
  UILabel__set_text(clearButtonLabel, onClick, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_68;
  UILabel__set_text(decideButtonLabel, onClick, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_68;
  UILabel__set_text(cancelButtonLabel, onClick, 0LL);
  p_saveData = (BattleServantConfConponent_o *)&this->fields.saveData;
  if ( !this->fields.saveData )
    goto LABEL_68;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)onClick, v14) )
  {
    v66 = RecommendedConfigSaveData_TypeInfo;
    if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    }
    ConfigSaveData = (System_Int32_array **)RecommendedConfigSaveData__LoadConfigSaveData((const MethodInfo *)v66);
    p_saveData->klass = (BattleServantConfConponent_c *)ConfigSaveData;
    sub_B52920(p_saveData, ConfigSaveData, v68, v69, v70, v71, v72, v73);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v65);
  }
  RecommenededConfigDialog__SetButtonState(this, v74);
  this->fields.closeFunc = closeCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
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
  if ( (byte_42B39F8 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    byte_42B39F8 = 1;
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
        v19 = sub_B52A88(this);
        sub_B52A28(v19, 0LL);
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
    sub_B52A5C(this, method);
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
                                             (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
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
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v4; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  int max_length; // w21
  int v7; // w20
  struct RecommendedConfigSaveData_o *v8; // x8

  v2 = this;
  if ( (byte_42B39F7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    this = (RecommenededConfigDialog_o *)sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    byte_42B39F7 = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_13;
  saveData->fields.selectClass = 0;
  v4 = v2->fields.saveData;
  if ( !v4 )
    goto LABEL_13;
  this = (RecommenededConfigDialog_o *)v4->fields.selectRarityList;
  if ( !this )
    goto LABEL_13;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_13;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v2->fields.saveData;
      if ( !v8 )
        break;
      this = (RecommenededConfigDialog_o *)v8->fields.selectRarityList;
      if ( !this )
        break;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        ++v7,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( v7 >= max_length )
        return;
    }
LABEL_13:
    sub_B52A5C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog_ClickDelegate___ctor(
        RecommenededConfigDialog_ClickDelegate_o *this,
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
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_42AF29D & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AF29D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  RecommenededConfigDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  RecommenededConfigDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
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
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
  RecommenededConfigDialog__OnClickRarity(_4__this, this->fields.rarityKind, 0LL);
}