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

  if ( (byte_40F82EF & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16891, v9);
    sub_B16FFC(&StringLiteral_16890, v10);
    byte_40F82EF = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_16890;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_16890;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.ON_BTN_SPRITE_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_16891;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_16891;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.OFF_BTN_SPRITE_NAME, v12, v13, v14, v15, v16, v17, v18);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_21577940(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_21577940(
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
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20

  if ( (byte_40F82E8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_RecommenededConfigDialog_EndClose__, v10);
    byte_40F82E8 = 1;
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
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *messageLabel; // x0
  UILabel_o *classLabel; // x0
  UILabel_o *rarityLabel; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  il2cpp_array_size_t v12; // w22
  UILabel_o *v13; // x0
  struct UILabel_array *rarityButtonLabelList; // x8
  int v15; // w21
  il2cpp_array_size_t v16; // w22
  UILabel_o *v17; // x0
  UILabel_o *resetButtonLabel; // x0
  UILabel_o *clearButtonLabel; // x0
  UILabel_o *decideButtonLabel; // x0
  UILabel_o *cancelButtonLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F82E4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F82E4 = 1;
  }
  titleLabel = this->fields.titleLabel;
  this->fields.state = 0;
  if ( !titleLabel )
    goto LABEL_29;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_29;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  classLabel = this->fields.classLabel;
  if ( !classLabel )
    goto LABEL_29;
  UILabel__set_text(classLabel, (System_String_o *)StringLiteral_1, 0LL);
  rarityLabel = this->fields.rarityLabel;
  if ( !rarityLabel )
    goto LABEL_29;
  UILabel__set_text(rarityLabel, (System_String_o *)StringLiteral_1, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_29;
  max_length = classButtonLabelList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < classButtonLabelList->max_length )
    {
      v13 = classButtonLabelList->m_Items[v12];
      if ( !v13 )
        goto LABEL_29;
      UILabel__set_text(v13, (System_String_o *)StringLiteral_1, 0LL);
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
      classButtonLabelList = this->fields.classButtonLabelList;
      if ( !classButtonLabelList )
        goto LABEL_29;
    }
LABEL_30:
    sub_B17100(v7, v8, v9);
    sub_B170A0();
  }
LABEL_15:
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_29;
  v15 = rarityButtonLabelList->max_length;
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( v16 < rarityButtonLabelList->max_length )
    {
      v17 = rarityButtonLabelList->m_Items[v16];
      if ( !v17 )
        goto LABEL_29;
      UILabel__set_text(v17, (System_String_o *)StringLiteral_1, 0LL);
      if ( (int)++v16 >= v15 )
        goto LABEL_23;
      rarityButtonLabelList = this->fields.rarityButtonLabelList;
      if ( !rarityButtonLabelList )
        goto LABEL_29;
    }
    goto LABEL_30;
  }
LABEL_23:
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( !resetButtonLabel )
    goto LABEL_29;
  UILabel__set_text(resetButtonLabel, (System_String_o *)StringLiteral_1, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  if ( !clearButtonLabel
    || (UILabel__set_text(clearButtonLabel, (System_String_o *)StringLiteral_1, 0LL),
        (decideButtonLabel = this->fields.decideButtonLabel) == 0LL)
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)StringLiteral_1, 0LL),
        (cancelButtonLabel = this->fields.cancelButtonLabel) == 0LL)
    || (UILabel__set_text(cancelButtonLabel, (System_String_o *)StringLiteral_1, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_40F82EE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F82EE = 1;
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
      sub_B170D4();
    RecommenededConfigDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog__OnClickClass(
        RecommenededConfigDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  struct UICommonButton_array *classButtonList; // x8
  int max_length; // w8
  int v8; // w9
  struct RecommendedConfigSaveData_o *saveData; // x8

  if ( (byte_40F82E9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_40F82E9 = 1;
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
        RecommenededConfigDialog__SetButtonState(this, v5);
        return;
      }
      v8 = 0;
      while ( kind != v8 )
      {
        if ( ++v8 >= max_length )
          goto LABEL_16;
      }
      saveData = this->fields.saveData;
      if ( saveData )
      {
        saveData->fields.selectClass = kind;
        goto LABEL_16;
      }
    }
    sub_B170D4();
  }
}


void __fastcall RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v5; // x8
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40F82EC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F82EC = 1;
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
      || (saveData->fields.selectClass = 0, (v5 = this->fields.saveData) == 0LL)
      || (selectRarityList = v5->fields.selectRarityList) == 0LL )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_int___Clear(
      selectRarityList,
      (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    RecommenededConfigDialog__SetButtonState(this, v7);
  }
}


void __fastcall RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct RecommendedConfigSaveData_o *saveData; // x1
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_40F82ED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F82ED = 1;
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
            (const MethodInfo_2F12410 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig((RecommendedConfigSaveData_o *)selectRarityList, saveData, v5),
          (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_B170D4();
    }
    RecommenededConfigDialog_ClickDelegate__Invoke(closeFunc, 1, 0LL);
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
  struct RecommendedConfigSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  bool v10; // w0
  struct RecommendedConfigSaveData_o *v11; // x9
  bool v12; // w8
  System_Collections_Generic_List_int__o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40F82EA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&rarity);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40F82EA = 1;
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
      || (v10 = System_Collections_Generic_List_int___Contains(
                  selectRarityList,
                  rarity,
                  (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__),
          (v11 = this->fields.saveData) == 0LL)
      || (v12 = v10, (v13 = v11->fields.selectRarityList) == 0LL) )
    {
      sub_B170D4();
    }
    if ( v12 )
      System_Collections_Generic_List_int___Remove(
        v13,
        rarity,
        (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
    else
      System_Collections_Generic_List_int___Add(
        v13,
        rarity,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    RecommenededConfigDialog__SetButtonState(this, v14);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  if ( (byte_40F82EB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F82EB = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v25; // x1
  __int64 v26; // x1
  RecommendedConfigSaveData_o *v27; // x22
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *v36; // x0
  UILabel_o *messageLabel; // x22
  System_String_o *v38; // x0
  UILabel_o *classLabel; // x22
  System_String_o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w27
  __int64 v47; // x22
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  struct UILabel_array *v57; // x8
  UILabel_o *v58; // x23
  System_String_o *v59; // x0
  System_String_o *v60; // x24
  System_String_o *v61; // x0
  __int64 v62; // x8
  struct UICommonButton_array *classButtonList; // x9
  UICommonButton_o *v64; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *onClick; // x0
  __int64 v66; // x3
  __int64 v67; // x4
  struct UICommonButton_array *v68; // x8
  UICommonButton_o *v69; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x23
  EventDelegate_Callback_o *v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  EventDelegate_o *v76; // x22
  struct UICommonButton_array *v77; // x8
  UnityEngine_Component_o *v78; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *rarityLabel; // x22
  System_String_o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  struct UILabel_array *rarityButtonLabelList; // x8
  int v87; // w20
  __int64 v88; // x22
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct UILabel_array *v95; // x8
  UILabel_o *v96; // x23
  System_String_o *v97; // x0
  System_String_o *v98; // x24
  System_String_o *v99; // x0
  __int64 v100; // x8
  struct UICommonButton_array *rarityButtonList; // x9
  UICommonButton_o *v102; // x8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v103; // x0
  __int64 v104; // x3
  __int64 v105; // x4
  struct UICommonButton_array *v106; // x8
  UICommonButton_o *v107; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // x23
  EventDelegate_Callback_o *v109; // x24
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  EventDelegate_o *v114; // x22
  UILabel_o *resetButtonLabel; // x22
  System_String_o *v116; // x0
  UILabel_o *clearButtonLabel; // x22
  System_String_o *v118; // x0
  UILabel_o *decideButtonLabel; // x22
  System_String_o *v120; // x0
  UILabel_o *cancelButtonLabel; // x22
  System_String_o *v122; // x0
  RecommendedConfigSaveData_o *v123; // x0
  const MethodInfo *v124; // x1
  const MethodInfo *v125; // x1
  RecommendedConfigSaveData_c *v126; // x0
  System_Int32_array **ConfigSaveData; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  const MethodInfo *v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  System_Action_o *v145; // x20
  BattleServantConfConponent_o *p_saveData; // [xsp+8h] [xbp-68h]
  __int64 v148; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F82E5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, closeCallback);
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, v6);
    sub_B16FFC(&EventDelegate_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&RecommendedConfigSaveData_TypeInfo, v11);
    sub_B16FFC(&Method_RecommenededConfigDialog_EndOpen__, v12);
    sub_B16FFC(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__, v13);
    sub_B16FFC(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v14);
    sub_B16FFC(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__, v15);
    sub_B16FFC(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_11018, v17);
    sub_B16FFC(&StringLiteral_11024, v18);
    sub_B16FFC(&StringLiteral_11023, v19);
    sub_B16FFC(&StringLiteral_11016, v20);
    sub_B16FFC(&StringLiteral_3253, v21);
    sub_B16FFC(&StringLiteral_3251, v22);
    sub_B16FFC(&StringLiteral_11025, v23);
    sub_B16FFC(&StringLiteral_11015, v24);
    sub_B16FFC(&StringLiteral_11014, v25);
    sub_B16FFC(&StringLiteral_11017, v26);
    byte_40F82E5 = 1;
  }
  v148 = 0LL;
  v27 = (RecommendedConfigSaveData_o *)sub_B170CC(RecommendedConfigSaveData_TypeInfo, closeCallback, method, v3, v4);
  RecommendedConfigSaveData___ctor(v27, v28);
  this->fields.saveData = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.saveData,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11018, 0LL);
  if ( !titleLabel )
    goto LABEL_68;
  UILabel__set_text(titleLabel, v36, 0LL);
  messageLabel = this->fields.messageLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11017, 0LL);
  if ( !messageLabel )
    goto LABEL_68;
  UILabel__set_text(messageLabel, v38, 0LL);
  classLabel = this->fields.classLabel;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_11015, 0LL);
  if ( !classLabel )
    goto LABEL_68;
  UILabel__set_text(classLabel, v40, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_68;
  max_length = classButtonLabelList->max_length;
  HIDWORD(v148) = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v47 = sub_B170CC(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v41, v42, v43, v44);
      RecommenededConfigDialog___c__DisplayClass23_0___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_0_o *)v47,
        0LL);
      if ( !v47 )
        break;
      *(_QWORD *)(v47 + 24) = this;
      sub_B16F98((BattleServantConfConponent_o *)(v47 + 24), (System_Int32_array **)this, v48, v49, v50, v51, v52, v53);
      v57 = this->fields.classButtonLabelList;
      if ( !v57 )
        break;
      if ( HIDWORD(v148) >= v57->max_length )
        goto LABEL_69;
      v58 = v57->m_Items[SHIDWORD(v148)];
      v59 = System_Int32__ToString((int32_t)&v148 + 4, 0LL);
      v60 = System_String__Concat_43743732((System_String_o *)StringLiteral_11014, v59, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v61 = LocalizationManager__Get(v60, 0LL);
      if ( !v58 )
        break;
      UILabel__set_text(v58, v61, 0LL);
      v62 = SHIDWORD(v148);
      *(_DWORD *)(v47 + 16) = HIDWORD(v148);
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( (unsigned int)v62 >= classButtonList->max_length )
        goto LABEL_69;
      v64 = classButtonList->m_Items[v62];
      if ( !v64 )
        break;
      onClick = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v64->fields.onClick;
      if ( !onClick )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        onClick,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
      v68 = this->fields.classButtonList;
      if ( !v68 )
        break;
      if ( HIDWORD(v148) >= v68->max_length )
        goto LABEL_69;
      v69 = v68->m_Items[SHIDWORD(v148)];
      if ( !v69 )
        break;
      v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v69->fields.onClick;
      v71 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v55, v56, v66, v67);
      EventDelegate_Callback___ctor(
        v71,
        (Il2CppObject *)v47,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v76 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v72, v73, v74, v75);
      EventDelegate___ctor_29412484(v76, v71, 0LL);
      if ( !v70 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v70,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      v77 = this->fields.classButtonList;
      if ( !v77 )
        break;
      if ( HIDWORD(v148) >= v77->max_length )
      {
LABEL_69:
        sub_B17100(v54, v55, v56);
        sub_B170A0();
      }
      v78 = (UnityEngine_Component_o *)v77->m_Items[SHIDWORD(v148)];
      if ( !v78 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v78, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      ++HIDWORD(v148);
      if ( SHIDWORD(v148) >= max_length )
        goto LABEL_31;
    }
LABEL_68:
    sub_B170D4();
  }
LABEL_31:
  rarityLabel = this->fields.rarityLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_11024, 0LL);
  if ( !rarityLabel )
    goto LABEL_68;
  UILabel__set_text(rarityLabel, v81, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_68;
  v87 = rarityButtonLabelList->max_length;
  LODWORD(v148) = 0;
  if ( v87 >= 1 )
  {
    do
    {
      v88 = sub_B170CC(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v82, v83, v84, v85);
      RecommenededConfigDialog___c__DisplayClass23_1___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_1_o *)v88,
        0LL);
      if ( !v88 )
        goto LABEL_68;
      *(_QWORD *)(v88 + 24) = this;
      sub_B16F98((BattleServantConfConponent_o *)(v88 + 24), (System_Int32_array **)this, v89, v90, v91, v92, v93, v94);
      v95 = this->fields.rarityButtonLabelList;
      if ( !v95 )
        goto LABEL_68;
      if ( (unsigned int)v148 >= v95->max_length )
        goto LABEL_69;
      v96 = v95->m_Items[(int)v148];
      v97 = System_Int32__ToString((int32_t)&v148, 0LL);
      v98 = System_String__Concat_43743732((System_String_o *)StringLiteral_11023, v97, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v99 = LocalizationManager__Get(v98, 0LL);
      if ( !v96 )
        goto LABEL_68;
      UILabel__set_text(v96, v99, 0LL);
      v100 = (int)v148;
      *(_DWORD *)(v88 + 16) = v148 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_68;
      if ( (unsigned int)v100 >= rarityButtonList->max_length )
        goto LABEL_69;
      v102 = rarityButtonList->m_Items[v100];
      if ( !v102 )
        goto LABEL_68;
      v103 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v102->fields.onClick;
      if ( !v103 )
        goto LABEL_68;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        v103,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
      v106 = this->fields.rarityButtonList;
      if ( !v106 )
        goto LABEL_68;
      if ( (unsigned int)v148 >= v106->max_length )
        goto LABEL_69;
      v107 = v106->m_Items[(int)v148];
      if ( !v107 )
        goto LABEL_68;
      v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v107->fields.onClick;
      v109 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v55, v56, v104, v105);
      EventDelegate_Callback___ctor(
        v109,
        (Il2CppObject *)v88,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v114 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v110, v111, v112, v113);
      EventDelegate___ctor_29412484(v114, v109, 0LL);
      if ( !v108 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v108,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v114,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      LODWORD(v148) = v148 + 1;
    }
    while ( (int)v148 < v87 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v116 = LocalizationManager__Get((System_String_o *)StringLiteral_11025, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_68;
  UILabel__set_text(resetButtonLabel, v116, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  v118 = LocalizationManager__Get((System_String_o *)StringLiteral_11016, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_68;
  UILabel__set_text(clearButtonLabel, v118, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_68;
  UILabel__set_text(decideButtonLabel, v120, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  v122 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_68;
  UILabel__set_text(cancelButtonLabel, v122, 0LL);
  p_saveData = (BattleServantConfConponent_o *)&this->fields.saveData;
  if ( !this->fields.saveData )
    goto LABEL_68;
  if ( RecommendedConfigSaveData__IsExist(v123, v124) )
  {
    v126 = RecommendedConfigSaveData_TypeInfo;
    if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    }
    ConfigSaveData = (System_Int32_array **)RecommendedConfigSaveData__LoadConfigSaveData((const MethodInfo *)v126);
    p_saveData->klass = (BattleServantConfConponent_c *)ConfigSaveData;
    sub_B16F98(p_saveData, ConfigSaveData, v128, v129, v130, v131, v132, v133);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v125);
  }
  RecommenededConfigDialog__SetButtonState(this, v134);
  this->fields.closeFunc = closeCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  v145 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v141, v142, v143, v144);
  System_Action___ctor(v145, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v145, 0, 0LL);
}


void __fastcall RecommenededConfigDialog__SetButtonState(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RecommenededConfigDialog_o *v3; // x19
  struct UISprite_array *classButtonSpriteList; // x8
  __int64 v5; // x8
  unsigned __int64 v6; // x20
  signed __int64 v7; // x21
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct UISprite_array *v9; // x9
  UISprite_o *v10; // x0
  System_String_o *ON_BTN_SPRITE_NAME; // x1
  struct UISprite_array *rarityButtonSpriteList; // x8
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  signed __int64 v15; // x21
  struct RecommendedConfigSaveData_o *v16; // x8
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  signed __int64 v18; // x20
  struct UISprite_array *v19; // x9
  char v20; // w8
  UISprite_o *v21; // x0
  System_String_o *OFF_BTN_SPRITE_NAME; // x1

  v3 = this;
  if ( (byte_40F82E7 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, method);
    byte_40F82E7 = 1;
  }
  classButtonSpriteList = v3->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_29;
  v5 = *(_QWORD *)&classButtonSpriteList->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = (int)v5;
    while ( 1 )
    {
      saveData = v3->fields.saveData;
      if ( !saveData )
        break;
      v9 = v3->fields.classButtonSpriteList;
      if ( !v9 )
        break;
      if ( v6 >= v9->max_length )
      {
LABEL_30:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v10 = v9->m_Items[v6];
      if ( v6 == saveData->fields.selectClass )
      {
        if ( !v10 )
          break;
        ON_BTN_SPRITE_NAME = v3->fields.ON_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !v10 )
          break;
        ON_BTN_SPRITE_NAME = v3->fields.OFF_BTN_SPRITE_NAME;
      }
      UISprite__set_spriteName(v10, ON_BTN_SPRITE_NAME, 0LL);
      if ( (__int64)++v6 >= v7 )
        goto LABEL_15;
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_15:
  rarityButtonSpriteList = v3->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_29;
  v13 = *(_QWORD *)&rarityButtonSpriteList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = (int)v13;
    while ( 1 )
    {
      v16 = v3->fields.saveData;
      if ( !v16 )
        goto LABEL_29;
      selectRarityList = v16->fields.selectRarityList;
      if ( !selectRarityList )
        goto LABEL_29;
      v18 = v14 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             selectRarityList,
                                             v14 + 1,
                                             (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
      v19 = v3->fields.rarityButtonSpriteList;
      if ( !v19 )
        goto LABEL_29;
      if ( v14 >= v19->max_length )
        goto LABEL_30;
      v20 = (char)this;
      v21 = v19->m_Items[v14];
      if ( (v20 & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_29;
        OFF_BTN_SPRITE_NAME = v3->fields.ON_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !v21 )
          goto LABEL_29;
        OFF_BTN_SPRITE_NAME = v3->fields.OFF_BTN_SPRITE_NAME;
      }
      UISprite__set_spriteName(v21, OFF_BTN_SPRITE_NAME, 0LL);
      ++v14;
      if ( v18 >= v15 )
        return;
    }
  }
}


void __fastcall RecommenededConfigDialog__SetInitConfig(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v5; // x8
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  struct UISprite_array *rarityButtonSpriteList; // x8
  int max_length; // w21
  int v9; // w20
  struct RecommendedConfigSaveData_o *v10; // x8
  System_Collections_Generic_List_int__o *v11; // x0

  if ( (byte_40F82E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v3);
    byte_40F82E6 = 1;
  }
  saveData = this->fields.saveData;
  if ( !saveData )
    goto LABEL_13;
  saveData->fields.selectClass = 0;
  v5 = this->fields.saveData;
  if ( !v5 )
    goto LABEL_13;
  selectRarityList = v5->fields.selectRarityList;
  if ( !selectRarityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___Clear(
    selectRarityList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  rarityButtonSpriteList = this->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_13;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = this->fields.saveData;
      if ( !v10 )
        break;
      v11 = v10->fields.selectRarityList;
      if ( !v11 )
        break;
      System_Collections_Generic_List_int___Add(
        v11,
        ++v9,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( v9 >= max_length )
        return;
    }
LABEL_13:
    sub_B170D4();
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
  if ( (byte_40F741A & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F741A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog_ClickDelegate__Invoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  RecommenededConfigDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  RecommenededConfigDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  RecommenededConfigDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (RecommenededConfigDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
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
    sub_B170D4();
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
    sub_B170D4();
  RecommenededConfigDialog__OnClickRarity(_4__this, this->fields.rarityKind, 0LL);
}