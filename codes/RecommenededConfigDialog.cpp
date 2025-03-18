void __fastcall RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C25B78 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17805/*"combine_tutorial_alpha"*/, v9);
    sub_1C3B764(&StringLiteral_17804/*"combine_fodder02"*/, v10);
    byte_4C25B78 = 1;
  }
  v11 = StringLiteral_17804/*"combine_fodder02"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17804/*"combine_fodder02"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.ON_BTN_SPRITE_NAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_17805/*"combine_tutorial_alpha"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17805/*"combine_tutorial_alpha"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.OFF_BTN_SPRITE_NAME, v12, v13, v14, v15, v16, v17, v18);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_46735092(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_46735092(
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Action_o *v17; // x20

  if ( (byte_4C25B71 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_RecommenededConfigDialog_EndClose__, v10);
    byte_4C25B71 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeFunc, 0LL, v11, v12, v13, v14, v15, v16);
  v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v17, 0LL);
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
    sub_1C3B708(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *titleLabel; // x0
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  il2cpp_array_size_t v6; // w22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v8; // w21
  il2cpp_array_size_t v9; // w22

  if ( (byte_4C25B6D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C25B6D = 1;
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
      if ( max_length == ++v6 )
        goto LABEL_15;
      classButtonLabelList = this->fields.classButtonLabelList;
      if ( !classButtonLabelList )
        goto LABEL_29;
    }
LABEL_30:
    sub_1C3B9C8(titleLabel, method);
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
      if ( v8 == ++v9 )
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
    sub_1C3B9C0(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C25B77 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommenededConfigDialog_OnClickCancel__, method);
    byte_4C25B77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_RecommenededConfigDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1C3B9C0(v5, v6);
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

  if ( (byte_4C25B72 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommenededConfigDialog_OnClickClass__, *(_QWORD *)&kind);
    byte_4C25B72 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickClass__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_RecommenededConfigDialog_OnClickClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
    sub_1C3B9C0(v7, v8);
  }
}


void __fastcall RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct RecommendedConfigSaveData_o *saveData; // x9
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  int v10; // w9

  if ( (byte_4C25B75 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, method);
    sub_1C3B764(&Method_RecommenededConfigDialog_OnClickClear__, v3);
    byte_4C25B75 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_RecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_RecommenededConfigDialog_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList, saveData->fields.selectClass = 0, !selectRarityList) )
    {
      sub_1C3B9C0(v6, v7);
    }
    v10 = selectRarityList->fields._version + 1;
    selectRarityList->fields._size = 0;
    selectRarityList->fields._version = v10;
    RecommenededConfigDialog__SetButtonState(this, v7);
  }
}


void __fastcall RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  struct RecommendedConfigSaveData_o *saveData; // x0
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C25B76 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Sort__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1C3B764(&Method_RecommenededConfigDialog_OnClickDecide__, v4);
    byte_4C25B76 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_RecommenededConfigDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList) == 0LL
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            saveData->fields.selectRarityList,
            (const MethodInfo_367058C *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0LL), (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1C3B9C0(saveData, v7);
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
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  const MethodInfo *v11; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v13; // x9
  char v14; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4C25B73 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&rarity);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Remove__, v6);
    sub_1C3B764(&Method_RecommenededConfigDialog_OnClickRarity__, v7);
    byte_4C25B73 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_RecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C3B77C(Method_RecommenededConfigDialog_OnClickRarity__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectRarityList = saveData->fields.selectRarityList;
      if ( selectRarityList )
      {
        selectRarityList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                       selectRarityList,
                                                                       rarity,
                                                                       (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
        v13 = this->fields.saveData;
        if ( v13 )
        {
          v14 = (char)selectRarityList;
          selectRarityList = v13->fields.selectRarityList;
          if ( selectRarityList )
          {
            if ( (v14 & 1) != 0 )
            {
              System_Collections_Generic_List_int___Remove(
                selectRarityList,
                rarity,
                (const MethodInfo_3670144 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              RecommenededConfigDialog__SetButtonState(this, v11);
              return;
            }
            items = selectRarityList->fields._items;
            v16 = Method_System_Collections_Generic_List_int__Add__;
            ++selectRarityList->fields._version;
            if ( items )
            {
              size = selectRarityList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectRarityList,
                  rarity,
                  *(const MethodInfo_366EC48 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
    sub_1C3B9C0(selectRarityList, v11);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C25B74 & 1) == 0 )
  {
    sub_1C3B764(&Method_RecommenededConfigDialog_OnClickReset__, method);
    byte_4C25B74 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_RecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    RecommenededConfigDialog__SetInitConfig(this, v5);
    RecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void __fastcall RecommenededConfigDialog__OpenRecommendedConfig(
        RecommenededConfigDialog_o *this,
        RecommenededConfigDialog_ClickDelegate_o *closeCallback,
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
  RecommendedConfigSaveData_o *v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v35; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w25
  __int64 v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct UILabel_array *v47; // x8
  UILabel_o *v48; // x23
  System_String_o *v49; // x0
  System_String_o *v50; // x24
  int v51; // w9
  struct UICommonButton_array *classButtonList; // x8
  UICommonButton_o *v53; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  int32_t size; // w2
  int v56; // w11
  UICommonButton_o *v57; // x8
  System_Collections_Generic_List_object__o *v58; // x23
  EventDelegate_Callback_o *v59; // x24
  EventDelegate_o *v60; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  struct UICommonButton_array *v71; // x8
  UILabel_o *rarityLabel; // x22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v74; // w20
  __int64 v75; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct UILabel_array *v82; // x8
  UILabel_o *v83; // x23
  System_String_o *v84; // x0
  System_String_o *v85; // x24
  int v86; // w9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v88; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v89; // x10
  int32_t v90; // w2
  int v91; // w11
  UICommonButton_o *v92; // x8
  System_Collections_Generic_List_object__o *v93; // x23
  EventDelegate_Callback_o *v94; // x24
  EventDelegate_o *v95; // x22
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v110; // x1
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  const MethodInfo *v118; // x1
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_Action_o *v125; // x20
  PartyOrganizationUtility_o *p_saveData; // [xsp+10h] [xbp-70h]
  unsigned int v127; // [xsp+18h] [xbp-68h] BYREF
  unsigned int v128; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C25B6E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, closeCallback);
    sub_1C3B764(&EventDelegate_Callback_TypeInfo, v5);
    sub_1C3B764(&EventDelegate_TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDelegate__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventDelegate__Clear__, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&RecommendedConfigSaveData_TypeInfo, v10);
    sub_1C3B764(&Method_RecommenededConfigDialog_EndOpen__, v11);
    sub_1C3B764(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__, v12);
    sub_1C3B764(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo, v13);
    sub_1C3B764(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__, v14);
    sub_1C3B764(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_11222/*"SDK_INT"*/, v16);
    sub_1C3B764(&StringLiteral_11228/*"SELECT"*/, v17);
    sub_1C3B764(&StringLiteral_11227/*"SEAL_COMBINE_LIMIT_THIRD"*/, v18);
    sub_1C3B764(&StringLiteral_11220/*"SCRIPT_PLAY_SELECT_CANCEL"*/, v19);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v20);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v21);
    sub_1C3B764(&StringLiteral_11229/*"SELECTCARD"*/, v22);
    sub_1C3B764(&StringLiteral_11219/*"SCRIPT_FINISHED"*/, v23);
    sub_1C3B764(&StringLiteral_11218/*"SCRIPT_CHAPTER_SUB_TITLE_BASE"*/, v24);
    sub_1C3B764(&StringLiteral_11221/*"SCRIPT_PLAY_SELECT_OK"*/, v25);
    byte_4C25B6E = 1;
  }
  v127 = 0;
  v26 = (RecommendedConfigSaveData_o *)sub_1C3B9B0(RecommendedConfigSaveData_TypeInfo);
  RecommendedConfigSaveData___ctor(v26, 0LL);
  this->fields.saveData = v26;
  p_saveData = (PartyOrganizationUtility_o *)&this->fields.saveData;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.saveData, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11222/*"SDK_INT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_74;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11221/*"SCRIPT_PLAY_SELECT_OK"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_74;
  UILabel__set_text(messageLabel, gameObject, 0LL);
  classLabel = this->fields.classLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11219/*"SCRIPT_FINISHED"*/, 0LL);
  if ( !classLabel )
    goto LABEL_74;
  UILabel__set_text(classLabel, gameObject, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_74;
  max_length = classButtonLabelList->max_length;
  v128 = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v40 = sub_1C3B9B0(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      if ( !v40 )
        break;
      *(_QWORD *)(v40 + 24) = this;
      sub_1C3B708((PartyOrganizationUtility_o *)(v40 + 24), (int64_t)this, v41, v42, v43, v44, v45, v46);
      v47 = this->fields.classButtonLabelList;
      if ( !v47 )
        break;
      if ( v128 >= v47->max_length )
        goto LABEL_75;
      v48 = v47->m_Items[v128];
      v49 = System_Int32__ToString((int32_t)&v128, 0LL);
      v50 = System_String__Concat_63368612((System_String_o *)StringLiteral_11218/*"SCRIPT_CHAPTER_SUB_TITLE_BASE"*/, v49, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v50, 0LL);
      if ( !v48 )
        break;
      UILabel__set_text(v48, gameObject, 0LL);
      v51 = v128;
      *(_DWORD *)(v40 + 16) = v128;
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( v51 >= classButtonList->max_length )
        goto LABEL_75;
      v53 = classButtonList->m_Items[v51];
      if ( !v53 )
        break;
      onClick = v53->fields.onClick;
      if ( !onClick )
        break;
      size = onClick->fields._size;
      v56 = onClick->fields._version + 1;
      onClick->fields._size = 0;
      onClick->fields._version = v56;
      if ( size >= 1 )
      {
        System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
        classButtonList = this->fields.classButtonList;
        if ( !classButtonList )
          break;
        v51 = v128;
      }
      if ( v51 >= classButtonList->max_length )
LABEL_75:
        sub_1C3B9C8(gameObject, v35);
      v57 = classButtonList->m_Items[v51];
      if ( !v57 )
        break;
      v58 = (System_Collections_Generic_List_object__o *)v57->fields.onClick;
      v59 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v59,
        (Il2CppObject *)v40,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v60 = (EventDelegate_o *)sub_1C3B9B0(EventDelegate_TypeInfo);
      EventDelegate___ctor_48222576(v60, v59, 0LL);
      if ( !v58 )
        break;
      items = v58->fields._items;
      v68 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v58->fields._version;
      if ( !items )
        break;
      v69 = v58->fields._size;
      if ( (unsigned int)v69 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v58,
          (Il2CppObject *)v60,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &items->obj.klass + v69;
        v58->fields._size = v69 + 1;
        v70[4] = (Il2CppClass *)v60;
        sub_1C3B708((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v60, v61, v62, v63, v64, v65, v66);
      }
      v71 = this->fields.classButtonList;
      if ( !v71 )
        break;
      if ( v128 >= v71->max_length )
        goto LABEL_75;
      gameObject = (System_String_o *)v71->m_Items[v128];
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( (int)++v128 >= max_length )
        goto LABEL_35;
    }
LABEL_74:
    sub_1C3B9C0(gameObject, v35);
  }
LABEL_35:
  rarityLabel = this->fields.rarityLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11228/*"SELECT"*/, 0LL);
  if ( !rarityLabel )
    goto LABEL_74;
  UILabel__set_text(rarityLabel, gameObject, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_74;
  v74 = rarityButtonLabelList->max_length;
  v127 = 0;
  if ( v74 >= 1 )
  {
    do
    {
      v75 = sub_1C3B9B0(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v75, 0LL);
      if ( !v75 )
        goto LABEL_74;
      *(_QWORD *)(v75 + 24) = this;
      sub_1C3B708((PartyOrganizationUtility_o *)(v75 + 24), (int64_t)this, v76, v77, v78, v79, v80, v81);
      v82 = this->fields.rarityButtonLabelList;
      if ( !v82 )
        goto LABEL_74;
      if ( v127 >= v82->max_length )
        goto LABEL_75;
      v83 = v82->m_Items[v127];
      v84 = System_Int32__ToString((int32_t)&v127, 0LL);
      v85 = System_String__Concat_63368612((System_String_o *)StringLiteral_11227/*"SEAL_COMBINE_LIMIT_THIRD"*/, v84, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v85, 0LL);
      if ( !v83 )
        goto LABEL_74;
      UILabel__set_text(v83, gameObject, 0LL);
      v86 = v127;
      *(_DWORD *)(v75 + 16) = v127 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_74;
      if ( v86 >= rarityButtonList->max_length )
        goto LABEL_75;
      v88 = rarityButtonList->m_Items[v86];
      if ( !v88 )
        goto LABEL_74;
      v89 = v88->fields.onClick;
      if ( !v89 )
        goto LABEL_74;
      v90 = v89->fields._size;
      v91 = v89->fields._version + 1;
      v89->fields._size = 0;
      v89->fields._version = v91;
      if ( v90 >= 1 )
      {
        System_Array__Clear((System_Array_o *)v89->fields._items, 0, v90, 0LL);
        rarityButtonList = this->fields.rarityButtonList;
        if ( !rarityButtonList )
          goto LABEL_74;
        v86 = v127;
      }
      if ( v86 >= rarityButtonList->max_length )
        goto LABEL_75;
      v92 = rarityButtonList->m_Items[v86];
      if ( !v92 )
        goto LABEL_74;
      v93 = (System_Collections_Generic_List_object__o *)v92->fields.onClick;
      v94 = (EventDelegate_Callback_o *)sub_1C3B9B0(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v94,
        (Il2CppObject *)v75,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v95 = (EventDelegate_o *)sub_1C3B9B0(EventDelegate_TypeInfo);
      EventDelegate___ctor_48222576(v95, v94, 0LL);
      if ( !v93 )
        goto LABEL_74;
      v102 = v93->fields._items;
      v103 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v93->fields._version;
      if ( !v102 )
        goto LABEL_74;
      v104 = v93->fields._size;
      if ( (unsigned int)v104 >= v102->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v93,
          (Il2CppObject *)v95,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
      }
      else
      {
        v105 = &v102->obj.klass + v104;
        v93->fields._size = v104 + 1;
        v105[4] = (Il2CppClass *)v95;
        sub_1C3B708((PartyOrganizationUtility_o *)(v105 + 4), (int64_t)v95, v96, v97, v98, v99, v100, v101);
      }
    }
    while ( (int)++v127 < v74 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11229/*"SELECTCARD"*/, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_74;
  UILabel__set_text(resetButtonLabel, gameObject, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11220/*"SCRIPT_PLAY_SELECT_CANCEL"*/, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_74;
  UILabel__set_text(clearButtonLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_74;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
  if ( !cancelButtonLabel )
    goto LABEL_74;
  UILabel__set_text(cancelButtonLabel, gameObject, 0LL);
  gameObject = (System_String_o *)p_saveData->klass;
  if ( !p_saveData->klass )
    goto LABEL_74;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)gameObject, 0LL) )
  {
    if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0LL);
    p_saveData->klass = (PartyOrganizationUtility_c *)ConfigSaveData;
    sub_1C3B708(p_saveData, (int64_t)ConfigSaveData, v112, v113, v114, v115, v116, v117);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v110);
  }
  RecommenededConfigDialog__SetButtonState(this, v118);
  this->fields.closeFunc = closeCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeFunc,
    (int64_t)closeCallback,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  v125 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v125, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v125, 0, 0LL);
}


void __fastcall RecommenededConfigDialog__SetButtonState(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  struct UISprite_array *classButtonSpriteList; // x8
  __int64 v4; // x8
  unsigned __int64 v5; // x20
  __int64 v6; // x21
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct UISprite_array *v8; // x9
  System_String_o **p_ON_BTN_SPRITE_NAME; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x25
  __int64 v13; // x22
  struct RecommendedConfigSaveData_o *v14; // x8
  unsigned __int64 v15; // x20
  struct UISprite_array *v16; // x9
  char v17; // w8
  System_String_o **p_OFF_BTN_SPRITE_NAME; // x8

  v2 = this;
  if ( (byte_4C25B70 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, method);
    byte_4C25B70 = 1;
  }
  classButtonSpriteList = v2->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_27;
  v4 = *(_QWORD *)&classButtonSpriteList->max_length;
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    v6 = (unsigned int)v4;
    while ( 1 )
    {
      saveData = v2->fields.saveData;
      if ( !saveData )
        break;
      v8 = v2->fields.classButtonSpriteList;
      if ( !v8 )
        break;
      if ( v5 >= v8->max_length )
LABEL_28:
        sub_1C3B9C8(this, method);
      this = (RecommenededConfigDialog_o *)v8->m_Items[v5];
      if ( v5 == saveData->fields.selectClass )
      {
        p_ON_BTN_SPRITE_NAME = &v2->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      else
      {
        p_ON_BTN_SPRITE_NAME = &v2->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_ON_BTN_SPRITE_NAME, 0LL);
      if ( v6 == ++v5 )
        goto LABEL_14;
    }
LABEL_27:
    sub_1C3B9C0(this, method);
  }
LABEL_14:
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_27;
  v11 = *(_QWORD *)&rarityButtonSpriteList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    v13 = (unsigned int)v11;
    while ( 1 )
    {
      v14 = v2->fields.saveData;
      if ( !v14 )
        goto LABEL_27;
      this = (RecommenededConfigDialog_o *)v14->fields.selectRarityList;
      if ( !this )
        goto LABEL_27;
      v15 = v12 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v12 + 1,
                                             (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
      v16 = v2->fields.rarityButtonSpriteList;
      if ( !v16 )
        goto LABEL_27;
      if ( v12 >= v16->max_length )
        goto LABEL_28;
      v17 = (char)this;
      this = (RecommenededConfigDialog_o *)v16->m_Items[v12];
      if ( (v17 & 1) != 0 )
      {
        p_OFF_BTN_SPRITE_NAME = &v2->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_27;
      }
      else
      {
        p_OFF_BTN_SPRITE_NAME = &v2->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_27;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_OFF_BTN_SPRITE_NAME, 0LL);
      ++v12;
      if ( v13 == v15 )
        return;
    }
  }
}


void __fastcall RecommenededConfigDialog__SetInitConfig(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  __int64 v3; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectRarityList; // x9
  int v6; // w10
  struct UISprite_array *rarityButtonSpriteList; // x9
  int max_length; // w21
  int32_t v9; // w20
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v2 = this;
  if ( (byte_4C25B6F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (RecommenededConfigDialog_o *)sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v3);
    byte_4C25B6F = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_15;
  selectRarityList = saveData->fields.selectRarityList;
  saveData->fields.selectClass = 0;
  if ( !selectRarityList )
    goto LABEL_15;
  v6 = selectRarityList->fields._version + 1;
  selectRarityList->fields._size = 0;
  selectRarityList->fields._version = v6;
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_15;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v9 = 1;
    do
    {
      this = (RecommenededConfigDialog_o *)saveData->fields.selectRarityList;
      if ( !this )
        break;
      v10 = *(_QWORD *)&this->fields.m_CachedPtr;
      v11 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v10 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v10 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          v9,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_DWORD *)(v10 + 4 * m_CancellationTokenSource_low + 32) = v9;
      }
      if ( max_length == v9 )
        return;
      saveData = v2->fields.saveData;
      ++v9;
    }
    while ( saveData );
LABEL_15:
    sub_1C3B9C0(this, method);
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A80F2C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A80EE4;
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
  if ( (byte_4C25B79 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isDecide);
    byte_4C25B79 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, method);
  RecommenededConfigDialog__OnClickRarity(this->fields.__4__this, this->fields.rarityKind, v2);
}