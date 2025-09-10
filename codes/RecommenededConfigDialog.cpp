void RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C2B3CB & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&StringLiteral_17501/*"btn_on"*/);
    sub_1C2D490(&StringLiteral_17433/*"btn_bg_04"*/);
    sub_1C2D490(&StringLiteral_17500/*"btn_off"*/);
    sub_1C2D490(&StringLiteral_17432/*"btn_bg_03"*/);
    byte_4C2B3CB = 1;
  }
  v5 = StringLiteral_17432/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17432/*"btn_bg_03"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ON_BTN_SPRITE_NAME, v5, v2, v3);
  v6 = StringLiteral_17433/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17433/*"btn_bg_04"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.OFF_BTN_SPRITE_NAME, v6, v7, v8);
  v9 = StringLiteral_17501/*"btn_on"*/;
  this->fields.autoSetOnBtnSpriteName = (struct System_String_o *)StringLiteral_17501/*"btn_on"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.autoSetOnBtnSpriteName, v9, v10, v11);
  v12 = StringLiteral_17500/*"btn_off"*/;
  this->fields.autoSetOffSpriteName = (struct System_String_o *)StringLiteral_17500/*"btn_off"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.autoSetOffSpriteName, v12, v13, v14);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecommenededConfigDialog__Close(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4C2B3C2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_RecommenededConfigDialog_EndClose__);
    byte_4C2B3C2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.closeFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeFunc, 0, v6, v7);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v8, 0);
}


void RecommenededConfigDialog__EndClose(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  RecommenededConfigDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void RecommenededConfigDialog__Init(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v4; // x2
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  unsigned int v7; // w22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v9; // w21
  unsigned int v10; // w22

  if ( (byte_4C2B3BE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2B3BE = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.classLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.rarityLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_28;
  max_length = classButtonLabelList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( v7 < LODWORD(classButtonLabelList->max_length) )
    {
      titleLabel = classButtonLabelList->m_Items[v7];
      if ( !titleLabel )
        goto LABEL_28;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( max_length == ++v7 )
        goto LABEL_15;
      classButtonLabelList = this->fields.classButtonLabelList;
      if ( !classButtonLabelList )
        goto LABEL_28;
    }
LABEL_29:
    sub_1C2D6F4(titleLabel, method, v4);
  }
LABEL_15:
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_28;
  v9 = rarityButtonLabelList->max_length;
  if ( v9 >= 1 )
  {
    v10 = 0;
    while ( v10 < LODWORD(rarityButtonLabelList->max_length) )
    {
      titleLabel = rarityButtonLabelList->m_Items[v10];
      if ( !titleLabel )
        goto LABEL_28;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( v9 == ++v10 )
        goto LABEL_23;
      rarityButtonLabelList = this->fields.rarityButtonLabelList;
      if ( !rarityButtonLabelList )
        goto LABEL_28;
    }
    goto LABEL_29;
  }
LABEL_23:
  titleLabel = this->fields.resetButtonLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.clearButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideButtonLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelButtonLabel) == 0) )
  {
LABEL_28:
    sub_1C2D6EC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecommenededConfigDialog__OnClickAutoSet(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8

  if ( (byte_4C2B3C5 & 1) == 0 )
  {
    sub_1C2D490(&Method_RecommenededConfigDialog_OnClickAutoSet__);
    byte_4C2B3C5 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickAutoSet__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickAutoSet__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecommenededConfigDialog_OnClickAutoSet__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData )
      sub_1C2D6EC(v5, v6);
    saveData->fields.isAutoSet = saveData->fields.isAutoSet != 1;
    RecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void RecommenededConfigDialog__OnClickCancel(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  struct RecommendedConfigSaveData_o *saveData; // x0
  struct System_Collections_Generic_List_int__o *selectClassTypeList; // x8
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C2B3C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_RecommenededConfigDialog_OnClickCancel__);
    byte_4C2B3C9 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    saveData = this->fields.saveData;
    if ( !saveData )
      goto LABEL_16;
    selectClassTypeList = saveData->fields.selectClassTypeList;
    if ( !selectClassTypeList )
      goto LABEL_16;
    if ( selectClassTypeList->fields._size >= 1 )
    {
      System_Collections_Generic_List_int___Sort(
        saveData->fields.selectClassTypeList,
        (const MethodInfo_376E4A4 *)Method_System_Collections_Generic_List_int__Sort__);
      saveData = this->fields.saveData;
      if ( !saveData )
        goto LABEL_16;
    }
    selectRarityList = saveData->fields.selectRarityList;
    if ( !selectRarityList )
      goto LABEL_16;
    if ( selectRarityList->fields._size >= 1 )
    {
      System_Collections_Generic_List_int___Sort(
        saveData->fields.selectRarityList,
        (const MethodInfo_376E4A4 *)Method_System_Collections_Generic_List_int__Sort__);
      saveData = this->fields.saveData;
      if ( !saveData )
        goto LABEL_16;
    }
    RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0);
    v6 = Method_RecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2D4A8(Method_RecommenededConfigDialog_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
LABEL_16:
      sub_1C2D6EC(saveData, method);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      0,
      closeFunc->fields.method);
  }
}


void RecommenededConfigDialog__OnClickClass(RecommenededConfigDialog_o *this, int32_t kind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Collections_Generic_List_int__o *selectClassTypeList; // x0
  const MethodInfo *v8; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct RecommendedConfigSaveData_o *v10; // x9
  char v11; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C2B3C3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C2D490(&Method_RecommenededConfigDialog_OnClickClass__);
    byte_4C2B3C3 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickClass__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_RecommenededConfigDialog_OnClickClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectClassTypeList = saveData->fields.selectClassTypeList;
      if ( selectClassTypeList )
      {
        selectClassTypeList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                          selectClassTypeList,
                                                                          kind,
                                                                          (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( v10 )
        {
          v11 = (char)selectClassTypeList;
          selectClassTypeList = v10->fields.selectClassTypeList;
          if ( selectClassTypeList )
          {
            if ( (v11 & 1) != 0 )
            {
              System_Collections_Generic_List_int___Remove(
                selectClassTypeList,
                kind,
                (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_17:
              RecommenededConfigDialog__SetButtonState(this, v8);
              return;
            }
            items = selectClassTypeList->fields._items;
            v13 = Method_System_Collections_Generic_List_int__Add__;
            ++selectClassTypeList->fields._version;
            if ( items )
            {
              size = selectClassTypeList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectClassTypeList,
                  kind,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
              }
              else
              {
                selectClassTypeList->fields._size = size + 1;
                items->m_Items[size] = kind;
              }
              goto LABEL_17;
            }
          }
        }
      }
    }
    sub_1C2D6EC(selectClassTypeList, v8);
  }
}


void RecommenededConfigDialog__OnClickClear(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectClassTypeList; // x9
  int v9; // w10
  struct System_Collections_Generic_List_int__o *selectRarityList; // x9
  int v11; // w10

  if ( (byte_4C2B3C7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C2D490(&Method_RecommenededConfigDialog_OnClickClear__);
    byte_4C2B3C7 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecommenededConfigDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectClassTypeList = saveData->fields.selectClassTypeList) == 0
      || (v9 = selectClassTypeList->fields._version + 1,
          selectClassTypeList->fields._size = 0,
          selectClassTypeList->fields._version = v9,
          (selectRarityList = saveData->fields.selectRarityList) == 0) )
    {
      sub_1C2D6EC(v5, v6);
    }
    v11 = selectRarityList->fields._version + 1;
    selectRarityList->fields._size = 0;
    selectRarityList->fields._version = v11;
    saveData->fields.isAutoSet = 0;
    RecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void RecommenededConfigDialog__OnClickDecide(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct RecommendedConfigSaveData_o *saveData; // x0
  struct System_Collections_Generic_List_int__o *selectClassTypeList; // x8
  struct System_Collections_Generic_List_int__o *selectRarityList; // x8
  struct RecommenededConfigDialog_ClickDelegate_o *closeFunc; // x8

  if ( (byte_4C2B3C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_RecommenededConfigDialog_OnClickDecide__);
    byte_4C2B3C8 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecommenededConfigDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData )
      goto LABEL_16;
    selectClassTypeList = saveData->fields.selectClassTypeList;
    if ( !selectClassTypeList )
      goto LABEL_16;
    if ( selectClassTypeList->fields._size >= 1 )
    {
      System_Collections_Generic_List_int___Sort(
        saveData->fields.selectClassTypeList,
        (const MethodInfo_376E4A4 *)Method_System_Collections_Generic_List_int__Sort__);
      saveData = this->fields.saveData;
      if ( !saveData )
        goto LABEL_16;
    }
    if ( (selectRarityList = saveData->fields.selectRarityList) == 0
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            saveData->fields.selectRarityList,
            (const MethodInfo_376E4A4 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0)
      || (RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0), (closeFunc = this->fields.closeFunc) == 0) )
    {
LABEL_16:
      sub_1C2D6EC(saveData, v5);
    }
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeFunc->fields.invoke_impl)(
      closeFunc->fields.method_code,
      1,
      closeFunc->fields.method);
  }
}


void RecommenededConfigDialog__OnClickRarity(
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

  if ( (byte_4C2B3C4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C2D490(&Method_RecommenededConfigDialog_OnClickRarity__);
    byte_4C2B3C4 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_RecommenededConfigDialog_OnClickRarity__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( saveData )
    {
      selectRarityList = saveData->fields.selectRarityList;
      if ( selectRarityList )
      {
        selectRarityList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                       selectRarityList,
                                                                       rarity,
                                                                       (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
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
                (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
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
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectRarityList,
                  rarity,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
              }
              else
              {
                selectRarityList->fields._size = size + 1;
                items->m_Items[size] = rarity;
              }
              goto LABEL_17;
            }
          }
        }
      }
    }
    sub_1C2D6EC(selectRarityList, v8);
  }
}


void RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C2B3C6 & 1) == 0 )
  {
    sub_1C2D490(&Method_RecommenededConfigDialog_OnClickReset__);
    byte_4C2B3C6 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_RecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    RecommenededConfigDialog__SetInitConfig(this, v5);
    RecommenededConfigDialog__SetButtonState(this, v6);
  }
}


void RecommenededConfigDialog__OpenRecommendedConfig(
        RecommenededConfigDialog_o *this,
        RecommenededConfigDialog_ClickDelegate_o *closeCallback,
        const MethodInfo *method)
{
  RecommendedConfigSaveData_o *v4; // x22
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v9; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w25
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 size; // x2
  struct UILabel_array *v18; // x8
  UILabel_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x24
  unsigned int v22; // w9
  struct UICommonButton_array *classButtonList; // x8
  UICommonButton_o *v24; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  int v26; // w11
  UICommonButton_o *v27; // x8
  System_Collections_Generic_List_object__o *v28; // x23
  EventDelegate_Callback_o *v29; // x24
  EventDelegate_o *v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  struct UICommonButton_array *v37; // x8
  UILabel_o *rarityLabel; // x22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v40; // w20
  __int64 v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UILabel_array *v44; // x8
  UILabel_o *v45; // x23
  System_String_o *v46; // x0
  System_String_o *v47; // x24
  unsigned int v48; // w9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v50; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v51; // x10
  int v52; // w11
  UICommonButton_o *v53; // x8
  System_Collections_Generic_List_object__o *v54; // x23
  EventDelegate_Callback_o *v55; // x24
  EventDelegate_o *v56; // x22
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  UILabel_o *autoSetLabel; // x22
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v68; // x1
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  CGThumbnailListItem_o *p_saveData; // [xsp+10h] [xbp-70h]
  unsigned int v77; // [xsp+18h] [xbp-68h] BYREF
  unsigned int v78; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4C2B3BF & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&RecommendedConfigSaveData_TypeInfo);
    sub_1C2D490(&Method_RecommenededConfigDialog___c__DisplayClass26_0__OpenRecommendedConfig_b__0__);
    sub_1C2D490(&RecommenededConfigDialog___c__DisplayClass26_0_TypeInfo);
    sub_1C2D490(&Method_RecommenededConfigDialog___c__DisplayClass26_1__OpenRecommendedConfig_b__1__);
    sub_1C2D490(&RecommenededConfigDialog___c__DisplayClass26_1_TypeInfo);
    sub_1C2D490(&StringLiteral_11000/*"RECOMMENDED_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_10998/*"RECOMMENDED_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_10994/*"RECOMMENDED_AUTO_SET_TITLE"*/);
    sub_1C2D490(&StringLiteral_11006/*"RECOMMENDED_RARITY_TITLE"*/);
    sub_1C2D490(&StringLiteral_11005/*"RECOMMENDED_RARITY_"*/);
    sub_1C2D490(&StringLiteral_10997/*"RECOMMENDED_CLEAR"*/);
    sub_1C2D490(&StringLiteral_11007/*"RECOMMENDED_RESET"*/);
    sub_1C2D490(&StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C2D490(&StringLiteral_10996/*"RECOMMENDED_CLASS_TITLE"*/);
    sub_1C2D490(&StringLiteral_10995/*"RECOMMENDED_CLASS_"*/);
    sub_1C2D490(&StringLiteral_10999/*"RECOMMENDED_DIALOG_MESSAGE"*/);
    byte_4C2B3BF = 1;
  }
  v77 = 0;
  v4 = (RecommendedConfigSaveData_o *)sub_1C2D6DC(RecommendedConfigSaveData_TypeInfo);
  RecommendedConfigSaveData___ctor(v4, 0);
  this->fields.saveData = v4;
  p_saveData = (CGThumbnailListItem_o *)&this->fields.saveData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.saveData, (int32_t)v4, v5, v6);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11000/*"RECOMMENDED_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_75;
  UILabel__set_text(titleLabel, gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10999/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_75;
  UILabel__set_text(messageLabel, gameObject, 0);
  classLabel = this->fields.classLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10996/*"RECOMMENDED_CLASS_TITLE"*/, 0);
  if ( !classLabel )
    goto LABEL_75;
  UILabel__set_text(classLabel, gameObject, 0);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_75;
  max_length = classButtonLabelList->max_length;
  v78 = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v14 = sub_1C2D6DC(RecommenededConfigDialog___c__DisplayClass26_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      if ( !v14 )
        break;
      *(_QWORD *)(v14 + 24) = this;
      sub_1C2D434((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v15, v16);
      v18 = this->fields.classButtonLabelList;
      if ( !v18 )
        break;
      if ( v78 >= LODWORD(v18->max_length) )
        goto LABEL_76;
      v19 = v18->m_Items[v78];
      v20 = System_Int32__ToString((int32_t)&v78, 0);
      v21 = System_String__Concat_63457864((System_String_o *)StringLiteral_10995/*"RECOMMENDED_CLASS_"*/, v20, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v21, 0);
      if ( !v19 )
        break;
      UILabel__set_text(v19, gameObject, 0);
      v22 = v78;
      *(_DWORD *)(v14 + 16) = v78;
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( v22 >= LODWORD(classButtonList->max_length) )
        goto LABEL_76;
      v24 = classButtonList->m_Items[v22];
      if ( !v24 )
        break;
      onClick = v24->fields.onClick;
      if ( !onClick )
        break;
      size = (unsigned int)onClick->fields._size;
      v26 = onClick->fields._version + 1;
      onClick->fields._size = 0;
      onClick->fields._version = v26;
      if ( (int)size >= 1 )
      {
        System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
        classButtonList = this->fields.classButtonList;
        if ( !classButtonList )
          break;
        v22 = v78;
      }
      if ( v22 >= LODWORD(classButtonList->max_length) )
LABEL_76:
        sub_1C2D6F4(gameObject, v9, size);
      v27 = classButtonList->m_Items[v22];
      if ( !v27 )
        break;
      v28 = (System_Collections_Generic_List_object__o *)v27->fields.onClick;
      v29 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v29,
        (Il2CppObject *)v14,
        Method_RecommenededConfigDialog___c__DisplayClass26_0__OpenRecommendedConfig_b__0__,
        0);
      v30 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
      EventDelegate___ctor_49170772(v30, v29, 0);
      if ( !v28 )
        break;
      items = v28->fields._items;
      v34 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v28->fields._version;
      if ( !items )
        break;
      v35 = v28->fields._size;
      if ( (unsigned int)v35 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)v30,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + v35;
        v28->fields._size = v35 + 1;
        v36[4] = (Il2CppClass *)v30;
        sub_1C2D434((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
      }
      v37 = this->fields.classButtonList;
      if ( !v37 )
        break;
      if ( v78 >= LODWORD(v37->max_length) )
        goto LABEL_76;
      gameObject = (System_String_o *)v37->m_Items[v78];
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( (int)++v78 >= max_length )
        goto LABEL_35;
    }
LABEL_75:
    sub_1C2D6EC(gameObject, v9);
  }
LABEL_35:
  rarityLabel = this->fields.rarityLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11006/*"RECOMMENDED_RARITY_TITLE"*/, 0);
  if ( !rarityLabel )
    goto LABEL_75;
  UILabel__set_text(rarityLabel, gameObject, 0);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_75;
  v40 = rarityButtonLabelList->max_length;
  v77 = 0;
  if ( v40 >= 1 )
  {
    do
    {
      v41 = sub_1C2D6DC(RecommenededConfigDialog___c__DisplayClass26_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v41, 0);
      if ( !v41 )
        goto LABEL_75;
      *(_QWORD *)(v41 + 24) = this;
      sub_1C2D434((CGThumbnailListItem_o *)(v41 + 24), (int32_t)this, v42, v43);
      v44 = this->fields.rarityButtonLabelList;
      if ( !v44 )
        goto LABEL_75;
      if ( v77 >= LODWORD(v44->max_length) )
        goto LABEL_76;
      v45 = v44->m_Items[v77];
      v46 = System_Int32__ToString((int32_t)&v77, 0);
      v47 = System_String__Concat_63457864((System_String_o *)StringLiteral_11005/*"RECOMMENDED_RARITY_"*/, v46, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v47, 0);
      if ( !v45 )
        goto LABEL_75;
      UILabel__set_text(v45, gameObject, 0);
      v48 = v77;
      *(_DWORD *)(v41 + 16) = v77 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_75;
      if ( v48 >= LODWORD(rarityButtonList->max_length) )
        goto LABEL_76;
      v50 = rarityButtonList->m_Items[v48];
      if ( !v50 )
        goto LABEL_75;
      v51 = v50->fields.onClick;
      if ( !v51 )
        goto LABEL_75;
      size = (unsigned int)v51->fields._size;
      v52 = v51->fields._version + 1;
      v51->fields._size = 0;
      v51->fields._version = v52;
      if ( (int)size >= 1 )
      {
        System_Array__Clear((System_Array_o *)v51->fields._items, 0, size, 0);
        rarityButtonList = this->fields.rarityButtonList;
        if ( !rarityButtonList )
          goto LABEL_75;
        v48 = v77;
      }
      if ( v48 >= LODWORD(rarityButtonList->max_length) )
        goto LABEL_76;
      v53 = rarityButtonList->m_Items[v48];
      if ( !v53 )
        goto LABEL_75;
      v54 = (System_Collections_Generic_List_object__o *)v53->fields.onClick;
      v55 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v55,
        (Il2CppObject *)v41,
        Method_RecommenededConfigDialog___c__DisplayClass26_1__OpenRecommendedConfig_b__1__,
        0);
      v56 = (EventDelegate_o *)sub_1C2D6DC(EventDelegate_TypeInfo);
      EventDelegate___ctor_49170772(v56, v55, 0);
      if ( !v54 )
        goto LABEL_75;
      v59 = v54->fields._items;
      v60 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v54->fields._version;
      if ( !v59 )
        goto LABEL_75;
      v61 = v54->fields._size;
      if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          (Il2CppObject *)v56,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &v59->obj.klass + v61;
        v54->fields._size = v61 + 1;
        v62[4] = (Il2CppClass *)v56;
        sub_1C2D434((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
      }
    }
    while ( (int)++v77 < v40 );
  }
  autoSetLabel = this->fields.autoSetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10994/*"RECOMMENDED_AUTO_SET_TITLE"*/, 0);
  if ( !autoSetLabel )
    goto LABEL_75;
  UILabel__set_text(autoSetLabel, gameObject, 0);
  resetButtonLabel = this->fields.resetButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11007/*"RECOMMENDED_RESET"*/, 0);
  if ( !resetButtonLabel )
    goto LABEL_75;
  UILabel__set_text(resetButtonLabel, gameObject, 0);
  clearButtonLabel = this->fields.clearButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10997/*"RECOMMENDED_CLEAR"*/, 0);
  if ( !clearButtonLabel )
    goto LABEL_75;
  UILabel__set_text(clearButtonLabel, gameObject, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10998/*"RECOMMENDED_DIALOG_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_75;
  UILabel__set_text(decideButtonLabel, gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_75;
  UILabel__set_text(cancelButtonLabel, gameObject, 0);
  gameObject = (System_String_o *)p_saveData->klass;
  if ( !p_saveData->klass )
    goto LABEL_75;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)gameObject, 0) )
  {
    if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0);
    p_saveData->klass = (CGThumbnailListItem_c *)ConfigSaveData;
    sub_1C2D434(p_saveData, (int32_t)ConfigSaveData, v70, v71);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v68);
  }
  RecommenededConfigDialog__SetButtonState(this, v72);
  this->fields.closeFunc = closeCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeCallback, v73, v74);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void RecommenededConfigDialog__SetButtonState(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  struct UISprite_array *classButtonSpriteList; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x20
  __int64 v6; // x22
  struct RecommendedConfigSaveData_o *saveData; // x8
  __int64 v8; // x2
  struct UISprite_array *v9; // x9
  char v10; // w8
  System_String_o **p_ON_BTN_SPRITE_NAME; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  il2cpp_array_size_t v13; // x8
  unsigned __int64 v14; // x25
  __int64 v15; // x22
  struct RecommendedConfigSaveData_o *v16; // x8
  unsigned __int64 v17; // x20
  struct UISprite_array *v18; // x9
  char v19; // w8
  System_String_o **p_OFF_BTN_SPRITE_NAME; // x8
  UISprite_o *autoSetButtonSprite; // x20
  __int64 v22; // x8

  v2 = this;
  if ( (byte_4C2B3C1 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C2B3C1 = 1;
  }
  classButtonSpriteList = v2->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_32;
  max_length = classButtonSpriteList->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = (unsigned int)max_length;
    while ( 1 )
    {
      saveData = v2->fields.saveData;
      if ( !saveData )
        break;
      this = (RecommenededConfigDialog_o *)saveData->fields.selectClassTypeList;
      if ( !this )
        break;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v5,
                                             (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
      v9 = v2->fields.classButtonSpriteList;
      if ( !v9 )
        break;
      if ( v5 >= LODWORD(v9->max_length) )
LABEL_33:
        sub_1C2D6F4(this, method, v8);
      v10 = (char)this;
      this = (RecommenededConfigDialog_o *)v9->m_Items[v5];
      if ( (v10 & 1) != 0 )
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
      UISprite__set_spriteName((UISprite_o *)this, *p_ON_BTN_SPRITE_NAME, 0);
      if ( v6 == ++v5 )
        goto LABEL_15;
    }
LABEL_32:
    sub_1C2D6EC(this, method);
  }
LABEL_15:
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_32;
  v13 = rarityButtonSpriteList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0;
    v15 = (unsigned int)v13;
    do
    {
      v16 = v2->fields.saveData;
      if ( !v16 )
        goto LABEL_32;
      this = (RecommenededConfigDialog_o *)v16->fields.selectRarityList;
      if ( !this )
        goto LABEL_32;
      v17 = v14 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v14 + 1,
                                             (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
      v18 = v2->fields.rarityButtonSpriteList;
      if ( !v18 )
        goto LABEL_32;
      if ( v14 >= LODWORD(v18->max_length) )
        goto LABEL_33;
      v19 = (char)this;
      this = (RecommenededConfigDialog_o *)v18->m_Items[v14];
      if ( (v19 & 1) != 0 )
      {
        p_OFF_BTN_SPRITE_NAME = &v2->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_32;
      }
      else
      {
        p_OFF_BTN_SPRITE_NAME = &v2->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_32;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_OFF_BTN_SPRITE_NAME, 0);
      ++v14;
    }
    while ( v15 != v17 );
  }
  this = (RecommenededConfigDialog_o *)v2->fields.saveData;
  if ( !this )
    goto LABEL_32;
  autoSetButtonSprite = v2->fields.autoSetButtonSprite;
  this = (RecommenededConfigDialog_o *)RecommendedConfigSaveData__IsAutoSetOn((RecommendedConfigSaveData_o *)this, 0);
  if ( !autoSetButtonSprite )
    goto LABEL_32;
  v22 = 128;
  if ( ((unsigned __int8)this & 1) != 0 )
    v22 = 120;
  UISprite__set_spriteName(autoSetButtonSprite, *(System_String_o **)((char *)&v2->klass + v22), 0);
}


void RecommenededConfigDialog__SetInitConfig(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectClassTypeList; // x9
  int v5; // w10
  struct System_Collections_Generic_List_int__o *selectRarityList; // x9
  int v7; // w10
  struct UISprite_array *rarityButtonSpriteList; // x9
  int32_t v9; // w20
  int v10; // w22
  intptr_t m_CachedPtr; // x9
  _QWORD *v12; // x10
  __int64 m_CancellationTokenSource_low; // x11

  v2 = this;
  if ( (byte_4C2B3C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    this = (RecommenededConfigDialog_o *)sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4C2B3C0 = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_14;
  selectClassTypeList = saveData->fields.selectClassTypeList;
  if ( !selectClassTypeList )
    goto LABEL_14;
  v5 = selectClassTypeList->fields._version + 1;
  selectClassTypeList->fields._size = 0;
  selectClassTypeList->fields._version = v5;
  selectRarityList = saveData->fields.selectRarityList;
  if ( !selectRarityList
    || (v7 = selectRarityList->fields._version + 1,
        selectRarityList->fields._size = 0,
        selectRarityList->fields._version = v7,
        (rarityButtonSpriteList = v2->fields.rarityButtonSpriteList) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(this, method);
  }
  v9 = 0;
  v10 = rarityButtonSpriteList->max_length & ~(SLODWORD(rarityButtonSpriteList->max_length) >> 31);
  while ( v10 != v9 )
  {
    this = (RecommenededConfigDialog_o *)saveData->fields.selectRarityList;
    if ( !this )
      goto LABEL_14;
    m_CachedPtr = this->fields.m_CachedPtr;
    v12 = Method_System_Collections_Generic_List_int__Add__;
    ++HIDWORD(this->fields.m_CancellationTokenSource);
    if ( !m_CachedPtr )
      goto LABEL_14;
    m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
    ++v9;
    if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)this,
        v9,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      saveData = v2->fields.saveData;
      if ( !saveData )
        goto LABEL_14;
    }
    else
    {
      LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
      *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v9;
    }
  }
  saveData->fields.isAutoSet = 0;
}


UnityEngine_GameObject_o *RecommenededConfigDialog__get_closeBtnObject(
        RecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C2B3CA & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B3CA = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void RecommenededConfigDialog_ClickDelegate___ctor(
        RecommenededConfigDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A767FC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A767B4;
}


System_IAsyncResult_o *RecommenededConfigDialog_ClickDelegate__BeginInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4C2B3CC & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2B3CC = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void RecommenededConfigDialog_ClickDelegate__Invoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void RecommenededConfigDialog___c__DisplayClass26_0___ctor(
        RecommenededConfigDialog___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommenededConfigDialog___c__DisplayClass26_0___OpenRecommendedConfig_b__0(
        RecommenededConfigDialog___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, method);
  RecommenededConfigDialog__OnClickClass(this->fields.__4__this, this->fields.classKind, v2);
}


void RecommenededConfigDialog___c__DisplayClass26_1___ctor(
        RecommenededConfigDialog___c__DisplayClass26_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommenededConfigDialog___c__DisplayClass26_1___OpenRecommendedConfig_b__1(
        RecommenededConfigDialog___c__DisplayClass26_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, method);
  RecommenededConfigDialog__OnClickRarity(this->fields.__4__this, this->fields.rarityKind, v2);
}