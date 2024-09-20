void __fastcall RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EAFA & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_17471/*"btn_bg_04"*/);
    sub_1B885B0(&StringLiteral_17470/*"btn_bg_03"*/);
    byte_4A5EAFA = 1;
  }
  v5 = StringLiteral_17470/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17470/*"btn_bg_03"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ON_BTN_SPRITE_NAME, v5, v2, v3);
  v6 = StringLiteral_17471/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17471/*"btn_bg_04"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.OFF_BTN_SPRITE_NAME, v6, v7, v8);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommenededConfigDialog__Close(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  RecommenededConfigDialog__Close_45062848(this, 0LL, v2);
}


void __fastcall RecommenededConfigDialog__Close_45062848(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_4A5EAF3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommenededConfigDialog_EndClose__);
    byte_4A5EAF3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 3;
  this->fields.closeFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, 0, v6, v7);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall RecommenededConfigDialog__EndClose(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommenededConfigDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
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

  if ( (byte_4A5EAEF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EAEF = 1;
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
    sub_1B88814(titleLabel, method);
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
    sub_1B8880C(titleLabel, method);
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

  if ( (byte_4A5EAF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommenededConfigDialog_OnClickCancel__);
    byte_4A5EAF9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommenededConfigDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      0LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


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

  if ( (byte_4A5EAF4 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommenededConfigDialog_OnClickClass__);
    byte_4A5EAF4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickClass__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_RecommenededConfigDialog_OnClickClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
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
    sub_1B8880C(v7, v8);
  }
}


void __fastcall RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct RecommendedConfigSaveData_o *saveData; // x9
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  int v9; // w9

  if ( (byte_4A5EAF7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_RecommenededConfigDialog_OnClickClear__);
    byte_4A5EAF7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommenededConfigDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList, saveData->fields.selectClass = 0, !selectRarityList) )
    {
      sub_1B8880C(v5, v6);
    }
    v9 = selectRarityList->fields._version + 1;
    selectRarityList->fields._size = 0;
    selectRarityList->fields._version = v9;
    RecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void __fastcall RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct RecommendedConfigSaveData_o *saveData; // x0
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4A5EAF8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_RecommenededConfigDialog_OnClickDecide__);
    byte_4A5EAF8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommenededConfigDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectRarityList = saveData->fields.selectRarityList) == 0LL
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            saveData->fields.selectRarityList,
            (const MethodInfo_34E2154 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0LL)
      || (RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0LL), (closeFunc = this->fields.closeFunc) == 0LL) )
    {
      sub_1B8880C(saveData, v5);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      1LL,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall RecommenededConfigDialog__OnClickRarity(
        RecommenededConfigDialog_o *this,
        int32_t rarity,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Collections_Generic_List_int__o *selectRarityList; // x0
  const MethodInfo *v8; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v10; // x9
  char v11; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4A5EAF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_RecommenededConfigDialog_OnClickRarity__);
    byte_4A5EAF5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_RecommenededConfigDialog_OnClickRarity__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectRarityList = saveData->fields.selectRarityList;
      if ( selectRarityList )
      {
        selectRarityList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                       selectRarityList,
                                                                       rarity,
                                                                       (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( v10 )
        {
          v11 = (char)selectRarityList;
          selectRarityList = v10->fields.selectRarityList;
          if ( selectRarityList )
          {
            if ( (v11 & 1) != 0 )
            {
              System_Collections_Generic_List_int___Remove(
                selectRarityList,
                rarity,
                (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              RecommenededConfigDialog__SetButtonState(this, v8);
              return;
            }
            items = selectRarityList->fields._items;
            v13 = Method_System_Collections_Generic_List_int__Add__;
            ++selectRarityList->fields._version;
            if ( items )
            {
              size = selectRarityList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectRarityList,
                  rarity,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1B8880C(selectRarityList, v8);
  }
}


void __fastcall RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4A5EAF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommenededConfigDialog_OnClickReset__);
    byte_4A5EAF6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    RecommenededConfigDialog__SetInitConfig(this, v5);
    RecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void __fastcall RecommenededConfigDialog__OpenRecommendedConfig(
        RecommenededConfigDialog_o *this,
        RecommenededConfigDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  RecommendedConfigSaveData_o *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v10; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w25
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  struct UILabel_array *v18; // x8
  UILabel_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x24
  int v22; // w9
  struct UICommonButton_array *classButtonList; // x8
  UICommonButton_o *v24; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  int32_t size; // w2
  int v27; // w11
  UICommonButton_o *v28; // x8
  System_Collections_Generic_List_object__o *v29; // x23
  EventDelegate_Callback_o *v30; // x24
  EventDelegate_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  struct UICommonButton_array *v38; // x8
  UILabel_o *rarityLabel; // x22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v41; // w20
  __int64 v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  struct UILabel_array *v45; // x8
  UILabel_o *v46; // x23
  System_String_o *v47; // x0
  System_String_o *v48; // x24
  int v49; // w9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v51; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v52; // x10
  int32_t v53; // w2
  int v54; // w11
  UICommonButton_o *v55; // x8
  System_Collections_Generic_List_object__o *v56; // x23
  EventDelegate_Callback_o *v57; // x24
  EventDelegate_o *v58; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v69; // x1
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  const MethodInfo *v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  System_Action_o *v76; // x20
  ServantStatusBattleListViewItem_o *p_saveData; // [xsp+10h] [xbp-70h]
  unsigned int v78; // [xsp+18h] [xbp-68h] BYREF
  unsigned int v79; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5EAF0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&RecommendedConfigSaveData_TypeInfo);
    sub_1B885B0(&Method_RecommenededConfigDialog_EndOpen__);
    sub_1B885B0(&Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__);
    sub_1B885B0(&RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo);
    sub_1B885B0(&Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__);
    sub_1B885B0(&RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo);
    sub_1B885B0(&StringLiteral_10994/*"RECOMMENDED_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_11000/*"RECOMMENDED_RARITY_TITLE"*/);
    sub_1B885B0(&StringLiteral_10999/*"RECOMMENDED_RARITY_"*/);
    sub_1B885B0(&StringLiteral_10992/*"RECOMMENDED_CLEAR"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11001/*"RECOMMENDED_RESET"*/);
    sub_1B885B0(&StringLiteral_10991/*"RECOMMENDED_CLASS_TITLE"*/);
    sub_1B885B0(&StringLiteral_10990/*"RECOMMENDED_CLASS_"*/);
    sub_1B885B0(&StringLiteral_10993/*"RECOMMENDED_DIALOG_MESSAGE"*/);
    byte_4A5EAF0 = 1;
  }
  v78 = 0;
  v5 = (RecommendedConfigSaveData_o *)sub_1B887FC(RecommendedConfigSaveData_TypeInfo);
  RecommendedConfigSaveData___ctor(v5, 0LL);
  this->fields.saveData = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.saveData, (int32_t)v5, v6, v7);
  titleLabel = this->fields.titleLabel;
  p_saveData = (ServantStatusBattleListViewItem_o *)&this->fields.saveData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10994/*"RECOMMENDED_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_74;
  UILabel__set_text(titleLabel, gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10993/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_74;
  UILabel__set_text(messageLabel, gameObject, 0LL);
  classLabel = this->fields.classLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10991/*"RECOMMENDED_CLASS_TITLE"*/, 0LL);
  if ( !classLabel )
    goto LABEL_74;
  UILabel__set_text(classLabel, gameObject, 0LL);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_74;
  max_length = classButtonLabelList->max_length;
  v79 = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v15 = sub_1B887FC(RecommenededConfigDialog___c__DisplayClass23_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      if ( !v15 )
        break;
      *(_QWORD *)(v15 + 24) = this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)this, v16, v17);
      v18 = this->fields.classButtonLabelList;
      if ( !v18 )
        break;
      if ( v79 >= v18->max_length )
        goto LABEL_75;
      v19 = v18->m_Items[v79];
      v20 = System_Int32__ToString((int32_t)&v79, 0LL);
      v21 = System_String__Concat_61707032((System_String_o *)StringLiteral_10990/*"RECOMMENDED_CLASS_"*/, v20, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v21, 0LL);
      if ( !v19 )
        break;
      UILabel__set_text(v19, gameObject, 0LL);
      v22 = v79;
      *(_DWORD *)(v15 + 16) = v79;
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( v22 >= classButtonList->max_length )
        goto LABEL_75;
      v24 = classButtonList->m_Items[v22];
      if ( !v24 )
        break;
      onClick = v24->fields.onClick;
      if ( !onClick )
        break;
      size = onClick->fields._size;
      v27 = onClick->fields._version + 1;
      onClick->fields._size = 0;
      onClick->fields._version = v27;
      if ( size >= 1 )
      {
        System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0LL);
        classButtonList = this->fields.classButtonList;
        if ( !classButtonList )
          break;
        v22 = v79;
      }
      if ( v22 >= classButtonList->max_length )
LABEL_75:
        sub_1B88814(gameObject, v10);
      v28 = classButtonList->m_Items[v22];
      if ( !v28 )
        break;
      v29 = (System_Collections_Generic_List_object__o *)v28->fields.onClick;
      v30 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v30,
        (Il2CppObject *)v15,
        Method_RecommenededConfigDialog___c__DisplayClass23_0__OpenRecommendedConfig_b__0__,
        0LL);
      v31 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
      EventDelegate___ctor_46786736(v31, v30, 0LL);
      if ( !v29 )
        break;
      items = v29->fields._items;
      v35 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v29->fields._version;
      if ( !items )
        break;
      v36 = v29->fields._size;
      if ( (unsigned int)v36 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)v31,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + v36;
        v29->fields._size = v36 + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
      }
      v38 = this->fields.classButtonList;
      if ( !v38 )
        break;
      if ( v79 >= v38->max_length )
        goto LABEL_75;
      gameObject = (System_String_o *)v38->m_Items[v79];
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      if ( (int)++v79 >= max_length )
        goto LABEL_35;
    }
LABEL_74:
    sub_1B8880C(gameObject, v10);
  }
LABEL_35:
  rarityLabel = this->fields.rarityLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11000/*"RECOMMENDED_RARITY_TITLE"*/, 0LL);
  if ( !rarityLabel )
    goto LABEL_74;
  UILabel__set_text(rarityLabel, gameObject, 0LL);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_74;
  v41 = rarityButtonLabelList->max_length;
  v78 = 0;
  if ( v41 >= 1 )
  {
    do
    {
      v42 = sub_1B887FC(RecommenededConfigDialog___c__DisplayClass23_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v42, 0LL);
      if ( !v42 )
        goto LABEL_74;
      *(_QWORD *)(v42 + 24) = this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 24), (int32_t)this, v43, v44);
      v45 = this->fields.rarityButtonLabelList;
      if ( !v45 )
        goto LABEL_74;
      if ( v78 >= v45->max_length )
        goto LABEL_75;
      v46 = v45->m_Items[v78];
      v47 = System_Int32__ToString((int32_t)&v78, 0LL);
      v48 = System_String__Concat_61707032((System_String_o *)StringLiteral_10999/*"RECOMMENDED_RARITY_"*/, v47, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v48, 0LL);
      if ( !v46 )
        goto LABEL_74;
      UILabel__set_text(v46, gameObject, 0LL);
      v49 = v78;
      *(_DWORD *)(v42 + 16) = v78 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_74;
      if ( v49 >= rarityButtonList->max_length )
        goto LABEL_75;
      v51 = rarityButtonList->m_Items[v49];
      if ( !v51 )
        goto LABEL_74;
      v52 = v51->fields.onClick;
      if ( !v52 )
        goto LABEL_74;
      v53 = v52->fields._size;
      v54 = v52->fields._version + 1;
      v52->fields._size = 0;
      v52->fields._version = v54;
      if ( v53 >= 1 )
      {
        System_Array__Clear((System_Array_o *)v52->fields._items, 0, v53, 0LL);
        rarityButtonList = this->fields.rarityButtonList;
        if ( !rarityButtonList )
          goto LABEL_74;
        v49 = v78;
      }
      if ( v49 >= rarityButtonList->max_length )
        goto LABEL_75;
      v55 = rarityButtonList->m_Items[v49];
      if ( !v55 )
        goto LABEL_74;
      v56 = (System_Collections_Generic_List_object__o *)v55->fields.onClick;
      v57 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v57,
        (Il2CppObject *)v42,
        Method_RecommenededConfigDialog___c__DisplayClass23_1__OpenRecommendedConfig_b__1__,
        0LL);
      v58 = (EventDelegate_o *)sub_1B887FC(EventDelegate_TypeInfo);
      EventDelegate___ctor_46786736(v58, v57, 0LL);
      if ( !v56 )
        goto LABEL_74;
      v61 = v56->fields._items;
      v62 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v56->fields._version;
      if ( !v61 )
        goto LABEL_74;
      v63 = v56->fields._size;
      if ( (unsigned int)v63 >= v61->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v56,
          (Il2CppObject *)v58,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &v61->obj.klass + v63;
        v56->fields._size = v63 + 1;
        v64[4] = (Il2CppClass *)v58;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v58, v59, v60);
      }
    }
    while ( (int)++v78 < v41 );
  }
  resetButtonLabel = this->fields.resetButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11001/*"RECOMMENDED_RESET"*/, 0LL);
  if ( !resetButtonLabel )
    goto LABEL_74;
  UILabel__set_text(resetButtonLabel, gameObject, 0LL);
  clearButtonLabel = this->fields.clearButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10992/*"RECOMMENDED_CLEAR"*/, 0LL);
  if ( !clearButtonLabel )
    goto LABEL_74;
  UILabel__set_text(clearButtonLabel, gameObject, 0LL);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideButtonLabel )
    goto LABEL_74;
  UILabel__set_text(decideButtonLabel, gameObject, 0LL);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
    p_saveData->klass = (ServantStatusBattleListViewItem_c *)ConfigSaveData;
    sub_1B88554(p_saveData, (int32_t)ConfigSaveData, v71, v72);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v69);
  }
  RecommenededConfigDialog__SetButtonState(this, v73);
  this->fields.closeFunc = closeCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v74, v75);
  v76 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v76, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v76, 0, 0LL);
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
  if ( (byte_4A5EAF2 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5EAF2 = 1;
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
        sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
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
                                             (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
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
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectRarityList; // x9
  int v5; // w10
  struct UISprite_array *rarityButtonSpriteList; // x9
  int max_length; // w21
  int32_t v8; // w20
  __int64 v9; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v2 = this;
  if ( (byte_4A5EAF1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    this = (RecommenededConfigDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4A5EAF1 = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_15;
  selectRarityList = saveData->fields.selectRarityList;
  saveData->fields.selectClass = 0;
  if ( !selectRarityList )
    goto LABEL_15;
  v5 = selectRarityList->fields._version + 1;
  selectRarityList->fields._size = 0;
  selectRarityList->fields._version = v5;
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_15;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 1;
    do
    {
      this = (RecommenededConfigDialog_o *)saveData->fields.selectRarityList;
      if ( !this )
        break;
      v9 = *(_QWORD *)&this->fields.m_CachedPtr;
      v10 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v9 )
        break;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v9 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          v8,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_DWORD *)(v9 + 4 * m_CancellationTokenSource_low + 32) = v8;
      }
      if ( max_length == v8 )
        return;
      saveData = v2->fields.saveData;
      ++v8;
    }
    while ( saveData );
LABEL_15:
    sub_1B8880C(this, method);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D2EB8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2E70;
}


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
  if ( (byte_4A5EAFB & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5EAFB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  RecommenededConfigDialog__OnClickRarity(this->fields.__4__this, this->fields.rarityKind, v2);
}