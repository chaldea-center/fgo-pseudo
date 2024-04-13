void __fastcall RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42EC4F0 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v12, v13, v14);
    byte_42EC4F0 = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_17165/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17165/*"btn_bg_03"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.ON_BTN_SPRITE_NAME, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_17166/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17166/*"btn_bg_04"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.OFF_BTN_SPRITE_NAME, v16, v17, v18, v19, v20, v21, v22);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_32309148(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_32309148(
        RecommenededConfigDialog_o *this,
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o *v19; // x20

  if ( (byte_42EC4E9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_RecommenededConfigDialog_EndClose__, v10, v11, v12);
    byte_42EC4E9 = 1;
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
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeFunc, 0LL, v13, v14, v15, v16, v17, v18);
  v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall RecommenededConfigDialog__EndOpen(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall RecommenededConfigDialog__Init(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  il2cpp_array_size_t v8; // w22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v10; // w21
  il2cpp_array_size_t v11; // w22
  __int64 v12; // x0

  if ( (byte_42EC4E5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EC4E5 = 1;
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
    v8 = 0;
    while ( v8 < classButtonLabelList->max_length )
    {
      titleLabel = classButtonLabelList->m_Items[v8];
      if ( !titleLabel )
        goto LABEL_29;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( (int)++v8 >= max_length )
        goto LABEL_15;
      classButtonLabelList = this->fields.classButtonLabelList;
      if ( !classButtonLabelList )
        goto LABEL_29;
    }
LABEL_30:
    v12 = sub_B5D6C8(titleLabel);
    sub_B5D668(v12, 0LL);
  }
LABEL_15:
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_29;
  v10 = rarityButtonLabelList->max_length;
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( v11 < rarityButtonLabelList->max_length )
    {
      titleLabel = rarityButtonLabelList->m_Items[v11];
      if ( !titleLabel )
        goto LABEL_29;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( (int)++v11 >= v10 )
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
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x0

  if ( (byte_42EC4EF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4EF = 1;
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
      sub_B5D69C(0LL, v5);
    RecommenededConfigDialog_ClickDelegate__Invoke(closeFunc, 0, 0LL);
  }
}


void __fastcall RecommenededConfigDialog__OnClickClass(
        RecommenededConfigDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct UICommonButton_array *classButtonList; // x8
  int max_length; // w8
  int v10; // w9
  struct RecommendedConfigSaveData_o *saveData; // x8

  if ( (byte_42EC4EA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42EC4EA = 1;
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
        RecommenededConfigDialog__SetButtonState(this, v7);
        return;
      }
      v10 = 0;
      while ( kind != v10 )
      {
        if ( ++v10 >= max_length )
          goto LABEL_16;
      }
      saveData = this->fields.saveData;
      if ( saveData )
      {
        saveData->fields.selectClass = kind;
        goto LABEL_16;
      }
    }
    sub_B5D69C(v6, v7);
  }
}


void __fastcall RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  __int64 v9; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v11; // x8
  const MethodInfo *v12; // x1

  if ( (byte_42EC4ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC4ED = 1;
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
      || (saveData->fields.selectClass = 0, (v11 = this->fields.saveData) == 0LL)
      || (selectRarityList = v11->fields.selectRarityList) == 0LL )
    {
      sub_B5D69C(selectRarityList, v9);
    }
    System_Collections_Generic_List_int___Clear(
      selectRarityList,
      (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
    RecommenededConfigDialog__SetButtonState(this, v12);
  }
}


void __fastcall RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  const MethodInfo *v12; // x2
  struct RecommendedConfigSaveData_o *saveData; // x1

  if ( (byte_42EC4EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EC4EE = 1;
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
            (const MethodInfo_308632C *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig((RecommendedConfigSaveData_o *)selectRarityList, saveData, v12),
          (selectRarityList = (System_Collections_Generic_List_int__o *)this->fields.closeFunc) == 0LL) )
    {
      sub_B5D69C(selectRarityList, saveData);
    }
    RecommenededConfigDialog_ClickDelegate__Invoke((RecommenededConfigDialog_ClickDelegate_o *)selectRarityList, 1, 0LL);
  }
}


void __fastcall RecommenededConfigDialog__OnClickRarity(
        RecommenededConfigDialog_o *this,
        int32_t rarity,
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
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  __int64 v16; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v18; // x9
  char v19; // w8
  const MethodInfo *v20; // x1

  if ( (byte_42EC4EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, rarity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42EC4EB = 1;
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
                                                                         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__),
          (v18 = this->fields.saveData) == 0LL)
      || (v19 = (char)selectRarityList, (selectRarityList = v18->fields.selectRarityList) == 0LL) )
    {
      sub_B5D69C(selectRarityList, v16);
    }
    if ( (v19 & 1) != 0 )
      System_Collections_Generic_List_int___Remove(
        selectRarityList,
        rarity,
        (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
    else
      System_Collections_Generic_List_int___Add(
        selectRarityList,
        rarity,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    RecommenededConfigDialog__SetButtonState(this, v20);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_42EC4EC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC4EC = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    RecommenededConfigDialog__SetInitConfig(this, v5);
    RecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void __fastcall RecommenededConfigDialog__OpenRecommendedConfig(
        RecommenededConfigDialog_o *this,
        RecommenededConfigDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
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
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  RecommendedConfigSaveData_o *v68; // x22
  const MethodInfo *v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *onClick; // x0
  const MethodInfo *v78; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w27
  __int64 v83; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct UILabel_array *v90; // x8
  UILabel_o *v91; // x23
  System_String_o *v92; // x0
  System_String_o *v93; // x24
  __int64 v94; // x8
  struct UICommonButton_array *classButtonList; // x9
  UICommonButton_o *v96; // x8
  struct UICommonButton_array *v97; // x8
  UICommonButton_o *v98; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x23
  EventDelegate_Callback_o *v100; // x24
  EventDelegate_o *v101; // x22
  struct UICommonButton_array *v102; // x8
  UILabel_o *rarityLabel; // x22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v105; // w20
  __int64 v106; // x22
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  struct UILabel_array *v113; // x8
  UILabel_o *v114; // x23
  System_String_o *v115; // x0
  System_String_o *v116; // x24
  __int64 v117; // x8
  struct UICommonButton_array *rarityButtonList; // x9
  UICommonButton_o *v119; // x8
  struct UICommonButton_array *v120; // x8
  UICommonButton_o *v121; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v122; // x23
  EventDelegate_Callback_o *v123; // x24
  EventDelegate_o *v124; // x22
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v129; // x1
  RecommendedConfigSaveData_c *v130; // x0
  System_Int32_array **ConfigSaveData; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  const MethodInfo *v138; // x1
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Action_o *v145; // x20
  __int64 v146; // x0
  BattleServantConfConponent_o *p_saveData; // [xsp+8h] [xbp-68h]
  __int64 v149; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EC4E6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)closeCallback, (_DWORD)method, v3);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&EventDelegate_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&RecommendedConfigSaveData_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_RecommenededConfigDialog_EndOpen__, v23, v24, v25);
    sub_B5D5C4(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__, v26, v27, v28);
    sub_B5D5C4(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__, v32, v33, v34);
    sub_B5D5C4(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_11187/*"RECOMMENDED_DIALOG_TITLE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_11193/*"RECOMMENDED_RARITY_TITLE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_11192/*"RECOMMENDED_RARITY_"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_11185/*"RECOMMENDED_CLEAR"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_11194/*"RECOMMENDED_RESET"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_11184/*"RECOMMENDED_CLASS_TITLE"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_11183/*"RECOMMENDED_CLASS_"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_11186/*"RECOMMENDED_DIALOG_MESSAGE"*/, v65, v66, v67);
    byte_42EC4E6 = 1;
  }
  v149 = 0LL;
  v68 = (RecommendedConfigSaveData_o *)sub_B5D694(RecommendedConfigSaveData_TypeInfo);
  RecommendedConfigSaveData___ctor(v68, v69);
  this->fields.saveData = v68;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.saveData,
    (System_Int32_array **)v68,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11187/*"RECOMMENDED_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_68;
  UILabel__set_text(titleLabel, onClick, 0LL);
  messageLabel = this->fields.messageLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11186/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_68;
  UILabel__set_text(messageLabel, onClick, 0LL);
  classLabel = this->fields.classLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11184/*"RECOMMENDED_CLASS_TITLE"*/, 0LL);
  if ( !classLabel )
    goto LABEL_68;
  UILabel__set_text(classLabel, onClick, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_68;
  max_length = classButtonLabelList->max_length;
  HIDWORD(v149) = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v83 = sub_B5D694(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo);
      RecommenededConfigDialog___c__DisplayClass23_0___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_0_o *)v83,
        0LL);
      if ( !v83 )
        break;
      *(_QWORD *)(v83 + 24) = this;
      sub_B5D560((BattleServantConfConponent_o *)(v83 + 24), (System_Int32_array **)this, v84, v85, v86, v87, v88, v89);
      v90 = this->fields.classButtonLabelList;
      if ( !v90 )
        break;
      if ( HIDWORD(v149) >= v90->max_length )
        goto LABEL_69;
      v91 = v90->m_Items[SHIDWORD(v149)];
      v92 = System_Int32__ToString((int32_t)&v149 + 4, 0LL);
      v93 = System_String__Concat_44577788((System_String_o *)StringLiteral_11183/*"RECOMMENDED_CLASS_"*/, v92, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      onClick = LocalizationManager__Get(v93, 0LL);
      if ( !v91 )
        break;
      UILabel__set_text(v91, onClick, 0LL);
      v94 = SHIDWORD(v149);
      *(_DWORD *)(v83 + 16) = HIDWORD(v149);
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( (unsigned int)v94 >= classButtonList->max_length )
        goto LABEL_69;
      v96 = classButtonList->m_Items[v94];
      if ( !v96 )
        break;
      onClick = (System_String_o *)v96->fields.onClick;
      if ( !onClick )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)onClick,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
      v97 = this->fields.classButtonList;
      if ( !v97 )
        break;
      if ( HIDWORD(v149) >= v97->max_length )
        goto LABEL_69;
      v98 = v97->m_Items[SHIDWORD(v149)];
      if ( !v98 )
        break;
      v99 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v98->fields.onClick;
      v100 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v100,
        (Il2CppObject *)v83,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v101 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
      EventDelegate___ctor_29822308(v101, v100, 0LL);
      if ( !v99 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v99,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v101,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      v102 = this->fields.classButtonList;
      if ( !v102 )
        break;
      if ( HIDWORD(v149) >= v102->max_length )
      {
LABEL_69:
        v146 = sub_B5D6C8(onClick);
        sub_B5D668(v146, 0LL);
      }
      onClick = (System_String_o *)v102->m_Items[SHIDWORD(v149)];
      if ( !onClick )
        break;
      onClick = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)onClick, 0LL);
      if ( !onClick )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)onClick, 1, 0LL);
      ++HIDWORD(v149);
      if ( SHIDWORD(v149) >= max_length )
        goto LABEL_31;
    }
LABEL_68:
    sub_B5D69C(onClick, v78);
  }
LABEL_31:
  rarityLabel = this->fields.rarityLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11193/*"RECOMMENDED_RARITY_TITLE"*/, 0LL);
  if ( !rarityLabel )
    goto LABEL_68;
  UILabel__set_text(rarityLabel, onClick, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_68;
  v105 = rarityButtonLabelList->max_length;
  LODWORD(v149) = 0;
  if ( v105 >= 1 )
  {
    do
    {
      v106 = sub_B5D694(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo);
      RecommenededConfigDialog___c__DisplayClass23_1___ctor(
        (RecommenededConfigDialog___c__DisplayClass23_1_o *)v106,
        0LL);
      if ( !v106 )
        goto LABEL_68;
      *(_QWORD *)(v106 + 24) = this;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v106 + 24),
        (System_Int32_array **)this,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      v113 = this->fields.rarityButtonLabelList;
      if ( !v113 )
        goto LABEL_68;
      if ( (unsigned int)v149 >= v113->max_length )
        goto LABEL_69;
      v114 = v113->m_Items[(int)v149];
      v115 = System_Int32__ToString((int32_t)&v149, 0LL);
      v116 = System_String__Concat_44577788((System_String_o *)StringLiteral_11192/*"RECOMMENDED_RARITY_"*/, v115, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      onClick = LocalizationManager__Get(v116, 0LL);
      if ( !v114 )
        goto LABEL_68;
      UILabel__set_text(v114, onClick, 0LL);
      v117 = (int)v149;
      *(_DWORD *)(v106 + 16) = v149 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_68;
      if ( (unsigned int)v117 >= rarityButtonList->max_length )
        goto LABEL_69;
      v119 = rarityButtonList->m_Items[v117];
      if ( !v119 )
        goto LABEL_68;
      onClick = (System_String_o *)v119->fields.onClick;
      if ( !onClick )
        goto LABEL_68;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)onClick,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventDelegate__Clear__);
      v120 = this->fields.rarityButtonList;
      if ( !v120 )
        goto LABEL_68;
      if ( (unsigned int)v149 >= v120->max_length )
        goto LABEL_69;
      v121 = v120->m_Items[(int)v149];
      if ( !v121 )
        goto LABEL_68;
      v122 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v121->fields.onClick;
      v123 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v123,
        (Il2CppObject *)v106,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v124 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
      EventDelegate___ctor_29822308(v124, v123, 0LL);
      if ( !v122 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v122,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v124,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
      LODWORD(v149) = v149 + 1;
    }
    while ( (int)v149 < v105 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11194/*"RECOMMENDED_RESET"*/, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_68;
  UILabel__set_text(resetButtonLabel, onClick, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_11185/*"RECOMMENDED_CLEAR"*/, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_68;
  UILabel__set_text(clearButtonLabel, onClick, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_68;
  UILabel__set_text(decideButtonLabel, onClick, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  onClick = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_68;
  UILabel__set_text(cancelButtonLabel, onClick, 0LL);
  p_saveData = (BattleServantConfConponent_o *)&this->fields.saveData;
  if ( !this->fields.saveData )
    goto LABEL_68;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)onClick, v78) )
  {
    v130 = RecommendedConfigSaveData_TypeInfo;
    if ( (BYTE3(RecommendedConfigSaveData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    }
    ConfigSaveData = (System_Int32_array **)RecommendedConfigSaveData__LoadConfigSaveData((const MethodInfo *)v130);
    p_saveData->klass = (BattleServantConfConponent_c *)ConfigSaveData;
    sub_B5D560(p_saveData, ConfigSaveData, v132, v133, v134, v135, v136, v137);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v129);
  }
  RecommenededConfigDialog__SetButtonState(this, v138);
  this->fields.closeFunc = closeCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeCallback,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  v145 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v145, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v145, 0, 0LL);
}


void __fastcall RecommenededConfigDialog__SetButtonState(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RecommenededConfigDialog_o *v4; // x19
  struct UISprite_array *classButtonSpriteList; // x8
  __int64 v6; // x8
  unsigned __int64 v7; // x20
  signed __int64 v8; // x21
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct UISprite_array *v10; // x9
  System_String_o *ON_BTN_SPRITE_NAME; // x1
  struct UISprite_array *rarityButtonSpriteList; // x8
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  signed __int64 v15; // x21
  struct RecommendedConfigSaveData_o *v16; // x8
  signed __int64 v17; // x20
  struct UISprite_array *v18; // x9
  char v19; // w8
  System_String_o *OFF_BTN_SPRITE_NAME; // x1
  __int64 v21; // x0

  v4 = this;
  if ( (byte_42EC4E8 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_int__Contains__,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42EC4E8 = 1;
  }
  classButtonSpriteList = v4->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_29;
  v6 = *(_QWORD *)&classButtonSpriteList->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = (int)v6;
    while ( 1 )
    {
      saveData = v4->fields.saveData;
      if ( !saveData )
        break;
      v10 = v4->fields.classButtonSpriteList;
      if ( !v10 )
        break;
      if ( v7 >= v10->max_length )
      {
LABEL_30:
        v21 = sub_B5D6C8(this);
        sub_B5D668(v21, 0LL);
      }
      this = (RecommenededConfigDialog_o *)v10->m_Items[v7];
      if ( v7 == saveData->fields.selectClass )
      {
        if ( !this )
          break;
        ON_BTN_SPRITE_NAME = v4->fields.ON_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !this )
          break;
        ON_BTN_SPRITE_NAME = v4->fields.OFF_BTN_SPRITE_NAME;
      }
      UISprite__set_spriteName((UISprite_o *)this, ON_BTN_SPRITE_NAME, 0LL);
      if ( (__int64)++v7 >= v8 )
        goto LABEL_15;
    }
LABEL_29:
    sub_B5D69C(this, method);
  }
LABEL_15:
  rarityButtonSpriteList = v4->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_29;
  v13 = *(_QWORD *)&rarityButtonSpriteList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    v15 = (int)v13;
    while ( 1 )
    {
      v16 = v4->fields.saveData;
      if ( !v16 )
        goto LABEL_29;
      this = (RecommenededConfigDialog_o *)v16->fields.selectRarityList;
      if ( !this )
        goto LABEL_29;
      v17 = v14 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v14 + 1,
                                             (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      v18 = v4->fields.rarityButtonSpriteList;
      if ( !v18 )
        goto LABEL_29;
      if ( v14 >= v18->max_length )
        goto LABEL_30;
      v19 = (char)this;
      this = (RecommenededConfigDialog_o *)v18->m_Items[v14];
      if ( (v19 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_29;
        OFF_BTN_SPRITE_NAME = v4->fields.ON_BTN_SPRITE_NAME;
      }
      else
      {
        if ( !this )
          goto LABEL_29;
        OFF_BTN_SPRITE_NAME = v4->fields.OFF_BTN_SPRITE_NAME;
      }
      UISprite__set_spriteName((UISprite_o *)this, OFF_BTN_SPRITE_NAME, 0LL);
      ++v14;
      if ( v17 >= v15 )
        return;
    }
  }
}


void __fastcall RecommenededConfigDialog__SetInitConfig(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RecommenededConfigDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v9; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  int max_length; // w21
  int v12; // w20
  struct RecommendedConfigSaveData_o *v13; // x8

  v4 = this;
  if ( (byte_42EC4E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    this = (RecommenededConfigDialog_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v5, v6, v7);
    byte_42EC4E7 = 1;
  }
  saveData = v4->fields.saveData;
  if ( !saveData )
    goto LABEL_13;
  saveData->fields.selectClass = 0;
  v9 = v4->fields.saveData;
  if ( !v9 )
    goto LABEL_13;
  this = (RecommenededConfigDialog_o *)v9->fields.selectRarityList;
  if ( !this )
    goto LABEL_13;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  rarityButtonSpriteList = v4->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_13;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = v4->fields.saveData;
      if ( !v13 )
        break;
      this = (RecommenededConfigDialog_o *)v13->fields.selectRarityList;
      if ( !this )
        break;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        ++v12,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      if ( v12 >= max_length )
        return;
    }
LABEL_13:
    sub_B5D69C(this, method);
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
  sub_B5D560(
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
  if ( (byte_42E7F41 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E7F41 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  RecommenededConfigDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  RecommenededConfigDialog__OnClickRarity(_4__this, this->fields.rarityKind, 0LL);
}