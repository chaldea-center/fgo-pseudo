void __fastcall RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1

  if ( (byte_4B19C4B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v11, v12);
    byte_4B19C4B = 1;
  }
  v13 = StringLiteral_17643/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17643/*"btn_bg_03"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ON_BTN_SPRITE_NAME, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_17644/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17644/*"btn_bg_04"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.OFF_BTN_SPRITE_NAME, v14, v15, v16, v17, v18, v19, v20);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v21);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_45869404(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_45869404(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_4B19C44 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_RecommenededConfigDialog_EndClose__, v10, v11);
    byte_4B19C44 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeFunc, 0LL, v12, v13, v14, v15, v16, v17);
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
}


void __fastcall RecommenededConfigDialog__EndClose(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommenededConfigDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall RecommenededConfigDialog__EndOpen(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall RecommenededConfigDialog__Init(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  il2cpp_array_size_t v7; // w22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v9; // w21
  il2cpp_array_size_t v10; // w22

  if ( (byte_4B19C40 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19C40 = 1;
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
    v7 = 0;
    while ( v7 < classButtonLabelList->max_length )
    {
      titleLabel = classButtonLabelList->m_Items[v7];
      if ( !titleLabel )
        goto LABEL_29;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( max_length == ++v7 )
        goto LABEL_15;
      classButtonLabelList = this->fields.classButtonLabelList;
      if ( !classButtonLabelList )
        goto LABEL_29;
    }
LABEL_30:
    sub_1BCAA44(titleLabel, method);
  }
LABEL_15:
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_29;
  v9 = rarityButtonLabelList->max_length;
  if ( v9 >= 1 )
  {
    v10 = 0;
    while ( v10 < rarityButtonLabelList->max_length )
    {
      titleLabel = rarityButtonLabelList->m_Items[v10];
      if ( !titleLabel )
        goto LABEL_29;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( v9 == ++v10 )
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
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4B19C4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommenededConfigDialog_OnClickCancel__, method, v2);
    byte_4B19C4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RecommenededConfigDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog__OnClickClass(
        RecommenededConfigDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  struct UICommonButton_array *classButtonList; // x8
  il2cpp_array_size_t max_length; // w8
  bool v11; // vf
  int v12; // w8
  struct RecommendedConfigSaveData_o *saveData; // x8

  if ( (byte_4B19C45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommenededConfigDialog_OnClickClass__, *(_QWORD *)&kind, method);
    byte_4B19C45 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickClass__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_RecommenededConfigDialog_OnClickClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    classButtonList = this->fields.classButtonList;
    if ( classButtonList )
    {
      max_length = classButtonList->max_length;
      v11 = __OFSUB__(max_length, 1);
      v12 = max_length - 1;
      if ( v12 < 0 != v11 || v12 < (unsigned int)kind )
        goto LABEL_11;
      saveData = this->fields.saveData;
      if ( saveData )
      {
        saveData->fields.selectClass = kind;
LABEL_11:
        RecommenededConfigDialog__SetButtonState(this, v8);
        return;
      }
    }
    sub_1BCAA3C(v7, v8);
  }
}


void __fastcall RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct RecommendedConfigSaveData_o *saveData; // x9
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  int v12; // w9

  if ( (byte_4B19C48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, method, v2);
    sub_1BCA7E0(&Method_RecommenededConfigDialog_OnClickClear__, v4, v5);
    byte_4B19C48 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_RecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_RecommenededConfigDialog_OnClickClear__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList, saveData->fields.selectClass = 0, !selectRarityList) )
    {
      sub_1BCAA3C(v8, v9);
    }
    v12 = selectRarityList->fields._version + 1;
    selectRarityList->fields._size = 0;
    selectRarityList->fields._version = v12;
    RecommenededConfigDialog__SetButtonState(this, v9);
  }
}


void __fastcall RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  struct RecommendedConfigSaveData_o *saveData; // x0
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4B19C49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_RecommenededConfigDialog_OnClickDecide__, v6, v7);
    byte_4B19C49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommenededConfigDialog_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList) == 0LL
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            saveData->fields.selectRarityList,
            (const MethodInfo_358657C *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0LL), (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1BCAA3C(saveData, v10);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog__OnClickRarity(
        RecommenededConfigDialog_o *this,
        int32_t rarity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  const MethodInfo *v14; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v16; // x9
  char v17; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4B19C46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&rarity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v7, v8);
    sub_1BCA7E0(&Method_RecommenededConfigDialog_OnClickRarity__, v9, v10);
    byte_4B19C46 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v11 = Method_RecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_RecommenededConfigDialog_OnClickRarity__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectRarityList = saveData->fields.selectRarityList;
      if ( selectRarityList )
      {
        selectRarityList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                       selectRarityList,
                                                                       rarity,
                                                                       (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        v16 = this->fields.saveData;
        if ( v16 )
        {
          v17 = (char)selectRarityList;
          selectRarityList = v16->fields.selectRarityList;
          if ( selectRarityList )
          {
            if ( (v17 & 1) != 0 )
            {
              System_Collections_Generic_List_int___Remove(
                selectRarityList,
                rarity,
                (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              RecommenededConfigDialog__SetButtonState(this, v14);
              return;
            }
            items = selectRarityList->fields._items;
            v19 = Method_System_Collections_Generic_List_int__Add__;
            ++selectRarityList->fields._version;
            if ( items )
            {
              size = selectRarityList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectRarityList,
                  rarity,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                selectRarityList->fields._size = size + 1;
                items->m_Items[size + 1] = rarity;
              }
              goto LABEL_17;
            }
          }
        }
      }
    }
    sub_1BCAA3C(selectRarityList, v14);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4B19C47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommenededConfigDialog_OnClickReset__, method, v2);
    byte_4B19C47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RecommenededConfigDialog_OnClickReset__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    RecommenededConfigDialog__SetInitConfig(this, v6);
    RecommenededConfigDialog__SetButtonState(this, v7);
  }
}


void __fastcall RecommenededConfigDialog__OpenRecommendedConfig(
        RecommenededConfigDialog_o *this,
        RecommenededConfigDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  RecommendedConfigSaveData_o *v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v58; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w25
  __int64 v65; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct UILabel_array *v72; // x8
  UILabel_o *v73; // x23
  System_String_o *v74; // x0
  __int64 v75; // x1
  System_String_o *v76; // x24
  __int64 v77; // x3
  int v78; // w9
  struct UICommonButton_array *classButtonList; // x8
  UICommonButton_o *v80; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  __int64 size; // x2
  int v83; // w11
  UICommonButton_o *v84; // x8
  System_Collections_Generic_List_object__o *v85; // x23
  EventDelegate_Callback_o *v86; // x24
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  EventDelegate_o *v90; // x22
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  struct UICommonButton_array *v101; // x8
  UILabel_o *rarityLabel; // x22
  __int64 v103; // x2
  __int64 v104; // x3
  struct UILabel_array *rarityButtonLabelList; // x8
  int v106; // w20
  __int64 v107; // x22
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  struct UILabel_array *v114; // x8
  UILabel_o *v115; // x23
  System_String_o *v116; // x0
  __int64 v117; // x1
  System_String_o *v118; // x24
  __int64 v119; // x3
  int v120; // w9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v122; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v123; // x10
  __int64 v124; // x2
  int v125; // w11
  UICommonButton_o *v126; // x8
  System_Collections_Generic_List_object__o *v127; // x23
  EventDelegate_Callback_o *v128; // x24
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  EventDelegate_o *v132; // x22
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v147; // x1
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  const MethodInfo *v155; // x1
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x3
  System_Action_o *v165; // x20
  PartyOrganizationUtility_o *p_saveData; // [xsp+10h] [xbp-70h]
  unsigned int v167; // [xsp+18h] [xbp-68h] BYREF
  unsigned int v168; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4B19C41 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, closeCallback, method);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v6, v7);
    sub_1BCA7E0(&EventDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&RecommendedConfigSaveData_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_RecommenededConfigDialog_EndOpen__, v18, v19);
    sub_1BCA7E0(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__, v20, v21);
    sub_1BCA7E0(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__, v24, v25);
    sub_1BCA7E0(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_11130/*"RECOMMENDED_DIALOG_TITLE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_11136/*"RECOMMENDED_RARITY_TITLE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_11135/*"RECOMMENDED_RARITY_"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_11128/*"RECOMMENDED_CLEAR"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_11137/*"RECOMMENDED_RESET"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_11127/*"RECOMMENDED_CLASS_TITLE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_11126/*"RECOMMENDED_CLASS_"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_11129/*"RECOMMENDED_DIALOG_MESSAGE"*/, v46, v47);
    byte_4B19C41 = 1;
  }
  v167 = 0;
  v48 = (RecommendedConfigSaveData_o *)sub_1BCAA2C(RecommendedConfigSaveData_TypeInfo, closeCallback, method, v3);
  RecommendedConfigSaveData___ctor(v48, 0LL);
  this->fields.saveData = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.saveData, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  titleLabel = this->fields.titleLabel;
  p_saveData = (PartyOrganizationUtility_o *)&this->fields.saveData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11130/*"RECOMMENDED_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_74;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11129/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_74;
  UILabel__set_text(messageLabel, gameObject, 0LL);
  classLabel = this->fields.classLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11127/*"RECOMMENDED_CLASS_TITLE"*/, 0LL);
  if ( !classLabel )
    goto LABEL_74;
  UILabel__set_text(classLabel, gameObject, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_74;
  max_length = classButtonLabelList->max_length;
  v168 = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v65 = sub_1BCAA2C(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v58, v61, v62);
      System_Object___ctor((Il2CppObject *)v65, 0LL);
      if ( !v65 )
        break;
      *(_QWORD *)(v65 + 24) = this;
      sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 24), (int64_t)this, v66, v67, v68, v69, v70, v71);
      v72 = this->fields.classButtonLabelList;
      if ( !v72 )
        break;
      if ( v168 >= v72->max_length )
        goto LABEL_75;
      v73 = v72->m_Items[v168];
      v74 = System_Int32__ToString((int32_t)&v168, 0LL);
      v76 = System_String__Concat_62401220((System_String_o *)StringLiteral_11126/*"RECOMMENDED_CLASS_"*/, v74, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v75);
      gameObject = LocalizationManager__Get(v76, 0LL);
      if ( !v73 )
        break;
      UILabel__set_text(v73, gameObject, 0LL);
      v78 = v168;
      *(_DWORD *)(v65 + 16) = v168;
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( v78 >= classButtonList->max_length )
        goto LABEL_75;
      v80 = classButtonList->m_Items[v78];
      if ( !v80 )
        break;
      onClick = v80->fields.onClick;
      if ( !onClick )
        break;
      size = (unsigned int)onClick->fields._size;
      v83 = onClick->fields._version + 1;
      onClick->fields._size = 0;
      onClick->fields._version = v83;
      if ( (int)size >= 1 )
      {
        System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
        classButtonList = this->fields.classButtonList;
        if ( !classButtonList )
          break;
        v78 = v168;
      }
      if ( v78 >= classButtonList->max_length )
LABEL_75:
        sub_1BCAA44(gameObject, v58);
      v84 = classButtonList->m_Items[v78];
      if ( !v84 )
        break;
      v85 = (System_Collections_Generic_List_object__o *)v84->fields.onClick;
      v86 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v58, size, v77);
      EventDelegate_Callback___ctor(
        v86,
        (Il2CppObject *)v65,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v90 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v87, v88, v89);
      EventDelegate___ctor_47348668(v90, v86, 0LL);
      if ( !v85 )
        break;
      items = v85->fields._items;
      v98 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v85->fields._version;
      if ( !items )
        break;
      v99 = v85->fields._size;
      if ( (unsigned int)v99 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v85,
          (Il2CppObject *)v90,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = &items->obj.klass + v99;
        v85->fields._size = v99 + 1;
        v100[4] = (Il2CppClass *)v90;
        sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 4), (int64_t)v90, v91, v92, v93, v94, v95, v96);
      }
      v101 = this->fields.classButtonList;
      if ( !v101 )
        break;
      if ( v168 >= v101->max_length )
        goto LABEL_75;
      gameObject = (System_String_o *)v101->m_Items[v168];
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( (int)++v168 >= max_length )
        goto LABEL_35;
    }
LABEL_74:
    sub_1BCAA3C(gameObject, v58);
  }
LABEL_35:
  rarityLabel = this->fields.rarityLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11136/*"RECOMMENDED_RARITY_TITLE"*/, 0LL);
  if ( !rarityLabel )
    goto LABEL_74;
  UILabel__set_text(rarityLabel, gameObject, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_74;
  v106 = rarityButtonLabelList->max_length;
  v167 = 0;
  if ( v106 >= 1 )
  {
    do
    {
      v107 = sub_1BCAA2C(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v58, v103, v104);
      System_Object___ctor((Il2CppObject *)v107, 0LL);
      if ( !v107 )
        goto LABEL_74;
      *(_QWORD *)(v107 + 24) = this;
      sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 24), (int64_t)this, v108, v109, v110, v111, v112, v113);
      v114 = this->fields.rarityButtonLabelList;
      if ( !v114 )
        goto LABEL_74;
      if ( v167 >= v114->max_length )
        goto LABEL_75;
      v115 = v114->m_Items[v167];
      v116 = System_Int32__ToString((int32_t)&v167, 0LL);
      v118 = System_String__Concat_62401220((System_String_o *)StringLiteral_11135/*"RECOMMENDED_RARITY_"*/, v116, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117);
      gameObject = LocalizationManager__Get(v118, 0LL);
      if ( !v115 )
        goto LABEL_74;
      UILabel__set_text(v115, gameObject, 0LL);
      v120 = v167;
      *(_DWORD *)(v107 + 16) = v167 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_74;
      if ( v120 >= rarityButtonList->max_length )
        goto LABEL_75;
      v122 = rarityButtonList->m_Items[v120];
      if ( !v122 )
        goto LABEL_74;
      v123 = v122->fields.onClick;
      if ( !v123 )
        goto LABEL_74;
      v124 = (unsigned int)v123->fields._size;
      v125 = v123->fields._version + 1;
      v123->fields._size = 0;
      v123->fields._version = v125;
      if ( (int)v124 >= 1 )
      {
        System_Array__Clear((System_Array_o *)v123->fields._items, 0, v124, 0LL);
        rarityButtonList = this->fields.rarityButtonList;
        if ( !rarityButtonList )
          goto LABEL_74;
        v120 = v167;
      }
      if ( v120 >= rarityButtonList->max_length )
        goto LABEL_75;
      v126 = rarityButtonList->m_Items[v120];
      if ( !v126 )
        goto LABEL_74;
      v127 = (System_Collections_Generic_List_object__o *)v126->fields.onClick;
      v128 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v58, v124, v119);
      EventDelegate_Callback___ctor(
        v128,
        (Il2CppObject *)v107,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v132 = (EventDelegate_o *)sub_1BCAA2C(EventDelegate_TypeInfo, v129, v130, v131);
      EventDelegate___ctor_47348668(v132, v128, 0LL);
      if ( !v127 )
        goto LABEL_74;
      v139 = v127->fields._items;
      v140 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v127->fields._version;
      if ( !v139 )
        goto LABEL_74;
      v141 = v127->fields._size;
      if ( (unsigned int)v141 >= v139->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v127,
          (Il2CppObject *)v132,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
      }
      else
      {
        v142 = &v139->obj.klass + v141;
        v127->fields._size = v141 + 1;
        v142[4] = (Il2CppClass *)v132;
        sub_1BCA784((PartyOrganizationUtility_o *)(v142 + 4), (int64_t)v132, v133, v134, v135, v136, v137, v138);
      }
    }
    while ( (int)++v167 < v106 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11137/*"RECOMMENDED_RESET"*/, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_74;
  UILabel__set_text(resetButtonLabel, gameObject, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11128/*"RECOMMENDED_CLEAR"*/, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_74;
  UILabel__set_text(clearButtonLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_74;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_74;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  gameObject = (System_String_o *)p_saveData->klass;
  if ( !p_saveData->klass )
    goto LABEL_74;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)gameObject, 0LL) )
  {
    if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v147);
    ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0LL);
    p_saveData->klass = (PartyOrganizationUtility_c *)ConfigSaveData;
    sub_1BCA784(p_saveData, (int64_t)ConfigSaveData, v149, v150, v151, v152, v153, v154);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v147);
  }
  RecommenededConfigDialog__SetButtonState(this, v155);
  this->fields.closeFunc = closeCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  v165 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v162, v163, v164);
  System_Action___ctor(v165, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v165, 0, 0LL);
}


void __fastcall RecommenededConfigDialog__SetButtonState(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RecommenededConfigDialog_o *v3; // x19
  struct UISprite_array *classButtonSpriteList; // x8
  __int64 v5; // x8
  unsigned __int64 v6; // x20
  __int64 v7; // x21
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct UISprite_array *v9; // x9
  System_String_o **p_ON_BTN_SPRITE_NAME; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  __int64 v12; // x8
  unsigned __int64 v13; // x25
  __int64 v14; // x22
  struct RecommendedConfigSaveData_o *v15; // x8
  unsigned __int64 v16; // x20
  struct UISprite_array *v17; // x9
  char v18; // w8
  System_String_o **p_OFF_BTN_SPRITE_NAME; // x8

  v3 = this;
  if ( (byte_4B19C43 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_int__Contains__,
                                           method,
                                           v2);
    byte_4B19C43 = 1;
  }
  classButtonSpriteList = v3->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_27;
  v5 = *(_QWORD *)&classButtonSpriteList->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    v7 = (unsigned int)v5;
    while ( 1 )
    {
      saveData = v3->fields.saveData;
      if ( !saveData )
        break;
      v9 = v3->fields.classButtonSpriteList;
      if ( !v9 )
        break;
      if ( v6 >= v9->max_length )
LABEL_28:
        sub_1BCAA44(this, method);
      this = (RecommenededConfigDialog_o *)v9->m_Items[v6];
      if ( v6 == saveData->fields.selectClass )
      {
        p_ON_BTN_SPRITE_NAME = &v3->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      else
      {
        p_ON_BTN_SPRITE_NAME = &v3->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_ON_BTN_SPRITE_NAME, 0LL);
      if ( v7 == ++v6 )
        goto LABEL_14;
    }
LABEL_27:
    sub_1BCAA3C(this, method);
  }
LABEL_14:
  rarityButtonSpriteList = v3->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_27;
  v12 = *(_QWORD *)&rarityButtonSpriteList->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)v12;
    while ( 1 )
    {
      v15 = v3->fields.saveData;
      if ( !v15 )
        goto LABEL_27;
      this = (RecommenededConfigDialog_o *)v15->fields.selectRarityList;
      if ( !this )
        goto LABEL_27;
      v16 = v13 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v13 + 1,
                                             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
      v17 = v3->fields.rarityButtonSpriteList;
      if ( !v17 )
        goto LABEL_27;
      if ( v13 >= v17->max_length )
        goto LABEL_28;
      v18 = (char)this;
      this = (RecommenededConfigDialog_o *)v17->m_Items[v13];
      if ( (v18 & 1) != 0 )
      {
        p_OFF_BTN_SPRITE_NAME = &v3->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_27;
      }
      else
      {
        p_OFF_BTN_SPRITE_NAME = &v3->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_27;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_OFF_BTN_SPRITE_NAME, 0LL);
      ++v13;
      if ( v14 == v16 )
        return;
    }
  }
}


void __fastcall RecommenededConfigDialog__SetInitConfig(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RecommenededConfigDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectRarityList; // x9
  int v8; // w10
  struct UISprite_array *rarityButtonSpriteList; // x9
  int max_length; // w21
  int32_t v11; // w20
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v3 = this;
  if ( (byte_4B19C42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    this = (RecommenededConfigDialog_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v4, v5);
    byte_4B19C42 = 1;
  }
  saveData = v3->fields.saveData;
  if ( !saveData )
    goto LABEL_15;
  selectRarityList = saveData->fields.selectRarityList;
  saveData->fields.selectClass = 0;
  if ( !selectRarityList )
    goto LABEL_15;
  v8 = selectRarityList->fields._version + 1;
  selectRarityList->fields._size = 0;
  selectRarityList->fields._version = v8;
  rarityButtonSpriteList = v3->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_15;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 1;
    do
    {
      this = (RecommenededConfigDialog_o *)saveData->fields.selectRarityList;
      if ( !this )
        break;
      v12 = *(_QWORD *)&this->fields.m_CachedPtr;
      v13 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v12 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v12 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          v11,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_DWORD *)(v12 + 4 * m_CancellationTokenSource_low + 32) = v11;
      }
      if ( max_length == v11 )
        return;
      saveData = v3->fields.saveData;
      ++v11;
    }
    while ( saveData );
LABEL_15:
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommenededConfigDialog_ClickDelegate___ctor(
        RecommenededConfigDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A115C4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1157C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecommenededConfigDialog_ClickDelegate__BeginInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4B19C4C & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B19C4C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__Invoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  RecommenededConfigDialog__OnClickClass(this->fields.__4__this, this->fields.classKind, v2);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  RecommenededConfigDialog__OnClickRarity(this->fields.__4__this, this->fields.rarityKind, v2);
}