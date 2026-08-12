void RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2

  if ( (byte_596A215 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596A215 = 1;
  }
  v9 = StringLiteral_18200/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_18200/*"btn_bg_03"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.ON_BTN_SPRITE_NAME, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_18201/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_18201/*"btn_bg_04"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.OFF_BTN_SPRITE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_18275/*"btn_on"*/;
  this->fields.autoSetOnBtnSpriteName = (struct System_String_o *)StringLiteral_18275/*"btn_on"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.autoSetOnBtnSpriteName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_18274/*"btn_off"*/;
  this->fields.autoSetOffSpriteName = (struct System_String_o *)StringLiteral_18274/*"btn_off"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.autoSetOffSpriteName, v24, v25, v26, v27, v28, v29, v30);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v31, v32);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecommenededConfigDialog__Close(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Action_o *v16; // x20

  if ( (byte_596A20C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommenededConfigDialog_EndClose__);
    byte_596A20C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc, 0, v10, v11, v12, v13, v14, v15);
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v16, 0);
}


void RecommenededConfigDialog__EndClose(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  RecommenededConfigDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void RecommenededConfigDialog__Init(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct UILabel_array *classButtonLabelList; // x8
  il2cpp_array_size_t max_length; // x21
  __int64 v6; // x22
  struct UILabel_array *v7; // x8
  struct UILabel_array *rarityButtonLabelList; // x8
  il2cpp_array_size_t v9; // x21
  __int64 v10; // x22
  struct UILabel_array *v11; // x8

  if ( (byte_596A208 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A208 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.classLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.rarityLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_26;
  max_length = classButtonLabelList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = this->fields.classButtonLabelList;
      if ( !v7 )
        break;
      if ( (unsigned int)v6 >= LODWORD(v7->max_length) )
LABEL_27:
        sub_2213CE4(titleLabel);
      titleLabel = v7->m_Items[v6];
      if ( !titleLabel )
        break;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( (_DWORD)max_length == (_DWORD)++v6 )
        goto LABEL_14;
    }
LABEL_26:
    sub_2213CDC(titleLabel, method);
  }
LABEL_14:
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_26;
  v9 = rarityButtonLabelList->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0;
    do
    {
      v11 = this->fields.rarityButtonLabelList;
      if ( !v11 )
        goto LABEL_26;
      if ( (unsigned int)v10 >= LODWORD(v11->max_length) )
        goto LABEL_27;
      titleLabel = v11->m_Items[v10];
      if ( !titleLabel )
        goto LABEL_26;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    while ( (_DWORD)v9 != (_DWORD)++v10 );
  }
  titleLabel = this->fields.resetButtonLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.clearButtonLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideButtonLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelButtonLabel;
  if ( !titleLabel )
    goto LABEL_26;
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

  if ( (byte_596A20F & 1) == 0 )
  {
    sub_2213A60(&Method_RecommenededConfigDialog_OnClickAutoSet__);
    byte_596A20F = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickAutoSet__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickAutoSet__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommenededConfigDialog_OnClickAutoSet__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596A213 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_RecommenededConfigDialog_OnClickCancel__);
    byte_596A213 = 1;
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
        (const MethodInfo_4468B78 *)Method_System_Collections_Generic_List_int__Sort__);
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
        (const MethodInfo_4468B78 *)Method_System_Collections_Generic_List_int__Sort__);
      saveData = this->fields.saveData;
      if ( !saveData )
        goto LABEL_16;
    }
    RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0);
    v6 = Method_RecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_RecommenededConfigDialog_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
LABEL_16:
      sub_2213CDC(saveData, method);
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
  struct RecommendedConfigSaveData_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_596A20D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_RecommenededConfigDialog_OnClickClass__);
    byte_596A20D = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickClass__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_RecommenededConfigDialog_OnClickClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
                                                                          (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( ((unsigned __int8)selectClassTypeList & 1) != 0 )
        {
          if ( v10 )
          {
            selectClassTypeList = v10->fields.selectClassTypeList;
            if ( selectClassTypeList )
            {
              System_Collections_Generic_List_int___Remove(
                selectClassTypeList,
                kind,
                (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_19:
              RecommenededConfigDialog__SetButtonState(this, v8);
              return;
            }
          }
        }
        else if ( v10 )
        {
          selectClassTypeList = v10->fields.selectClassTypeList;
          if ( selectClassTypeList )
          {
            items = selectClassTypeList->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++selectClassTypeList->fields._version;
            if ( items )
            {
              size = selectClassTypeList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectClassTypeList,
                  kind,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
              }
              else
              {
                selectClassTypeList->fields._size = size + 1;
                items->m_Items[size] = kind;
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
    sub_2213CDC(selectClassTypeList, v8);
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
  struct System_Collections_Generic_List_int__o *selectRarityList; // x10
  int v10; // w11
  int32_t version; // w9

  if ( (byte_596A211 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_RecommenededConfigDialog_OnClickClear__);
    byte_596A211 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommenededConfigDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectClassTypeList = saveData->fields.selectClassTypeList) == 0
      || (selectRarityList = saveData->fields.selectRarityList,
          v10 = selectClassTypeList->fields._version + 1,
          selectClassTypeList->fields._size = 0,
          selectClassTypeList->fields._version = v10,
          !selectRarityList) )
    {
      sub_2213CDC(v5, v6);
    }
    version = selectRarityList->fields._version;
    saveData->fields.isAutoSet = 0;
    selectRarityList->fields._size = 0;
    selectRarityList->fields._version = version + 1;
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

  if ( (byte_596A212 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_RecommenededConfigDialog_OnClickDecide__);
    byte_596A212 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommenededConfigDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
        (const MethodInfo_4468B78 *)Method_System_Collections_Generic_List_int__Sort__);
      saveData = this->fields.saveData;
      if ( !saveData )
        goto LABEL_16;
    }
    if ( (selectRarityList = saveData->fields.selectRarityList) == 0
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            saveData->fields.selectRarityList,
            (const MethodInfo_4468B78 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0)
      || (RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0), (closeFunc = this->fields.closeFunc) == 0) )
    {
LABEL_16:
      sub_2213CDC(saveData, v5);
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
  struct RecommendedConfigSaveData_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_596A20E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Remove__);
    sub_2213A60(&Method_RecommenededConfigDialog_OnClickRarity__);
    byte_596A20E = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_RecommenededConfigDialog_OnClickRarity__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
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
                                                                       (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        v10 = this->fields.saveData;
        if ( ((unsigned __int8)selectRarityList & 1) != 0 )
        {
          if ( v10 )
          {
            selectRarityList = v10->fields.selectRarityList;
            if ( selectRarityList )
            {
              System_Collections_Generic_List_int___Remove(
                selectRarityList,
                rarity,
                (const MethodInfo_4468730 *)Method_System_Collections_Generic_List_int__Remove__);
LABEL_19:
              RecommenededConfigDialog__SetButtonState(this, v8);
              return;
            }
          }
        }
        else if ( v10 )
        {
          selectRarityList = v10->fields.selectRarityList;
          if ( selectRarityList )
          {
            items = selectRarityList->fields._items;
            v12 = Method_System_Collections_Generic_List_int__Add__;
            ++selectRarityList->fields._version;
            if ( items )
            {
              size = selectRarityList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  selectRarityList,
                  rarity,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
              }
              else
              {
                selectRarityList->fields._size = size + 1;
                items->m_Items[size] = rarity;
              }
              goto LABEL_19;
            }
          }
        }
      }
    }
    sub_2213CDC(selectRarityList, v8);
  }
}


void RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_596A210 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommenededConfigDialog_OnClickReset__);
    byte_596A210 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  RecommendedConfigSaveData_o *v4; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *titleLabel; // x21
  System_String_o *gameObject; // x0
  __int64 v15; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *classLabel; // x21
  __int64 v18; // x2
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w29
  __int64 v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct UILabel_array *v28; // x8
  UILabel_o *v29; // x22
  System_String_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_String_o *v33; // x23
  __int64 v34; // x9
  struct UICommonButton_array *classButtonList; // x8
  UICommonButton_o *v36; // x9
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x9
  int32_t size; // w2
  int v39; // w10
  UICommonButton_o *v40; // x8
  System_Collections_Generic_List_object__o *v41; // x22
  EventDelegate_Callback_o *v42; // x23
  EventDelegate_o *v43; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  struct UICommonButton_array *v54; // x8
  UILabel_o *rarityLabel; // x21
  __int64 v56; // x2
  struct UILabel_array *rarityButtonLabelList; // x8
  int v58; // w20
  __int64 v59; // x21
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct UILabel_array *v66; // x8
  UILabel_o *v67; // x22
  System_String_o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  System_String_o *v71; // x23
  __int64 v72; // x9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v74; // x9
  struct System_Collections_Generic_List_EventDelegate__o *v75; // x9
  int32_t v76; // w2
  int v77; // w10
  UICommonButton_o *v78; // x8
  System_Collections_Generic_List_object__o *v79; // x22
  EventDelegate_Callback_o *v80; // x23
  EventDelegate_o *v81; // x21
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  UILabel_o *autoSetLabel; // x21
  UILabel_o *resetButtonLabel; // x21
  UILabel_o *clearButtonLabel; // x21
  UILabel_o *decideButtonLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  const MethodInfo *v97; // x1
  __int64 v98; // x2
  struct RecommendedConfigSaveData_o *ConfigSaveData; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  const MethodInfo *v106; // x1
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  __int64 v114; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596A209 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&RecommendedConfigSaveData_TypeInfo);
    sub_2213A60(&Method_RecommenededConfigDialog___c__DisplayClass26_0__OpenRecommendedConfig_b__0__);
    sub_2213A60(&RecommenededConfigDialog___c__DisplayClass26_0_TypeInfo);
    sub_2213A60(&Method_RecommenededConfigDialog___c__DisplayClass26_1__OpenRecommendedConfig_b__1__);
    sub_2213A60(&RecommenededConfigDialog___c__DisplayClass26_1_TypeInfo);
    sub_2213A60(&StringLiteral_11484/*"RECOMMENDED_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_11482/*"RECOMMENDED_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_11478/*"RECOMMENDED_AUTO_SET_TITLE"*/);
    sub_2213A60(&StringLiteral_11490/*"RECOMMENDED_RARITY_TITLE"*/);
    sub_2213A60(&StringLiteral_11489/*"RECOMMENDED_RARITY_"*/);
    sub_2213A60(&StringLiteral_11481/*"RECOMMENDED_CLEAR"*/);
    sub_2213A60(&StringLiteral_11491/*"RECOMMENDED_RESET"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_11480/*"RECOMMENDED_CLASS_TITLE"*/);
    sub_2213A60(&StringLiteral_11479/*"RECOMMENDED_CLASS_"*/);
    sub_2213A60(&StringLiteral_11483/*"RECOMMENDED_DIALOG_MESSAGE"*/);
    byte_596A209 = 1;
  }
  v114 = 0;
  v4 = (RecommendedConfigSaveData_o *)sub_2213CCC(RecommendedConfigSaveData_TypeInfo);
  RecommendedConfigSaveData___ctor(v4, 0);
  this->fields.saveData = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.saveData, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11484/*"RECOMMENDED_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_73;
  UILabel__set_text(titleLabel, gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11483/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_73;
  UILabel__set_text(messageLabel, gameObject, 0);
  classLabel = this->fields.classLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11480/*"RECOMMENDED_CLASS_TITLE"*/, 0);
  if ( !classLabel )
    goto LABEL_73;
  UILabel__set_text(classLabel, gameObject, 0);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_73;
  max_length = classButtonLabelList->max_length;
  HIDWORD(v114) = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v21 = sub_2213CCC(RecommenededConfigDialog___c__DisplayClass26_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v21, 0);
      if ( !v21 )
        break;
      *(_QWORD *)(v21 + 24) = this;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 24), (int32_t)this, v22, v23, v24, v25, v26, v27);
      v28 = this->fields.classButtonLabelList;
      if ( !v28 )
        break;
      if ( HIDWORD(v114) >= LODWORD(v28->max_length) )
        goto LABEL_74;
      v29 = v28->m_Items[SHIDWORD(v114)];
      v30 = System_Int32__ToString((int32_t)&v114 + 4, 0);
      v33 = System_String__Concat_75651716((System_String_o *)StringLiteral_11479/*"RECOMMENDED_CLASS_"*/, v30, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
      gameObject = LocalizationManager__Get(v33, 0);
      if ( !v29 )
        break;
      UILabel__set_text(v29, gameObject, 0);
      v34 = SHIDWORD(v114);
      classButtonList = this->fields.classButtonList;
      *(_DWORD *)(v21 + 16) = HIDWORD(v114);
      if ( !classButtonList )
        break;
      if ( (unsigned int)v34 >= LODWORD(classButtonList->max_length) )
        goto LABEL_74;
      v36 = classButtonList->m_Items[v34];
      if ( !v36 )
        break;
      onClick = v36->fields.onClick;
      if ( !onClick )
        break;
      size = onClick->fields._size;
      v39 = onClick->fields._version + 1;
      onClick->fields._size = 0;
      onClick->fields._version = v39;
      if ( size >= 1 )
      {
        System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
        classButtonList = this->fields.classButtonList;
        if ( !classButtonList )
          break;
      }
      if ( HIDWORD(v114) >= LODWORD(classButtonList->max_length) )
        goto LABEL_74;
      v40 = classButtonList->m_Items[SHIDWORD(v114)];
      if ( !v40 )
        break;
      v41 = (System_Collections_Generic_List_object__o *)v40->fields.onClick;
      v42 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v42,
        (Il2CppObject *)v21,
        Method_RecommenededConfigDialog___c__DisplayClass26_0__OpenRecommendedConfig_b__0__,
        0);
      v43 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
      EventDelegate___ctor_56337280(v43, v42, 0);
      if ( !v41 )
        break;
      items = v41->fields._items;
      v51 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v41->fields._version;
      if ( !items )
        break;
      v52 = v41->fields._size;
      if ( (unsigned int)v52 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v41,
          (Il2CppObject *)v43,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + v52;
        v41->fields._size = v52 + 1;
        v53[4] = (Il2CppClass *)v43;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v43, v44, v45, v46, v47, v48, v49);
      }
      v54 = this->fields.classButtonList;
      if ( !v54 )
        break;
      if ( HIDWORD(v114) >= LODWORD(v54->max_length) )
LABEL_74:
        sub_2213CE4(gameObject);
      gameObject = (System_String_o *)v54->m_Items[SHIDWORD(v114)];
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      ++HIDWORD(v114);
      if ( SHIDWORD(v114) >= max_length )
        goto LABEL_34;
    }
LABEL_73:
    sub_2213CDC(gameObject, v15);
  }
LABEL_34:
  rarityLabel = this->fields.rarityLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v18);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11490/*"RECOMMENDED_RARITY_TITLE"*/, 0);
  if ( !rarityLabel )
    goto LABEL_73;
  UILabel__set_text(rarityLabel, gameObject, 0);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_73;
  v58 = rarityButtonLabelList->max_length;
  LODWORD(v114) = 0;
  if ( v58 >= 1 )
  {
    do
    {
      v59 = sub_2213CCC(RecommenededConfigDialog___c__DisplayClass26_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v59, 0);
      if ( !v59 )
        goto LABEL_73;
      *(_QWORD *)(v59 + 24) = this;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 24), (int32_t)this, v60, v61, v62, v63, v64, v65);
      v66 = this->fields.rarityButtonLabelList;
      if ( !v66 )
        goto LABEL_73;
      if ( (unsigned int)v114 >= LODWORD(v66->max_length) )
        goto LABEL_74;
      v67 = v66->m_Items[(int)v114];
      v68 = System_Int32__ToString((int32_t)&v114, 0);
      v71 = System_String__Concat_75651716((System_String_o *)StringLiteral_11489/*"RECOMMENDED_RARITY_"*/, v68, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
      gameObject = LocalizationManager__Get(v71, 0);
      if ( !v67 )
        goto LABEL_73;
      UILabel__set_text(v67, gameObject, 0);
      v72 = (int)v114;
      rarityButtonList = this->fields.rarityButtonList;
      *(_DWORD *)(v59 + 16) = v114 + 1;
      if ( !rarityButtonList )
        goto LABEL_73;
      if ( (unsigned int)v72 >= LODWORD(rarityButtonList->max_length) )
        goto LABEL_74;
      v74 = rarityButtonList->m_Items[v72];
      if ( !v74 )
        goto LABEL_73;
      v75 = v74->fields.onClick;
      if ( !v75 )
        goto LABEL_73;
      v76 = v75->fields._size;
      v77 = v75->fields._version + 1;
      v75->fields._size = 0;
      v75->fields._version = v77;
      if ( v76 >= 1 )
      {
        System_Array__Clear((System_Array_o *)v75->fields._items, 0, v76, 0);
        rarityButtonList = this->fields.rarityButtonList;
        if ( !rarityButtonList )
          goto LABEL_73;
      }
      if ( (unsigned int)v114 >= LODWORD(rarityButtonList->max_length) )
        goto LABEL_74;
      v78 = rarityButtonList->m_Items[(int)v114];
      if ( !v78 )
        goto LABEL_73;
      v79 = (System_Collections_Generic_List_object__o *)v78->fields.onClick;
      v80 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v80,
        (Il2CppObject *)v59,
        Method_RecommenededConfigDialog___c__DisplayClass26_1__OpenRecommendedConfig_b__1__,
        0);
      v81 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
      EventDelegate___ctor_56337280(v81, v80, 0);
      if ( !v79 )
        goto LABEL_73;
      v88 = v79->fields._items;
      v89 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v79->fields._version;
      if ( !v88 )
        goto LABEL_73;
      v90 = v79->fields._size;
      if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v79,
          (Il2CppObject *)v81,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &v88->obj.klass + v90;
        v79->fields._size = v90 + 1;
        v91[4] = (Il2CppClass *)v81;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v91 + 4), (int32_t)v81, v82, v83, v84, v85, v86, v87);
      }
      LODWORD(v114) = v114 + 1;
    }
    while ( (int)v114 < v58 );
  }
  autoSetLabel = this->fields.autoSetLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v56);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11478/*"RECOMMENDED_AUTO_SET_TITLE"*/, 0);
  if ( !autoSetLabel )
    goto LABEL_73;
  UILabel__set_text(autoSetLabel, gameObject, 0);
  resetButtonLabel = this->fields.resetButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11491/*"RECOMMENDED_RESET"*/, 0);
  if ( !resetButtonLabel )
    goto LABEL_73;
  UILabel__set_text(resetButtonLabel, gameObject, 0);
  clearButtonLabel = this->fields.clearButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11481/*"RECOMMENDED_CLEAR"*/, 0);
  if ( !clearButtonLabel )
    goto LABEL_73;
  UILabel__set_text(clearButtonLabel, gameObject, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11482/*"RECOMMENDED_DIALOG_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_73;
  UILabel__set_text(decideButtonLabel, gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_73;
  UILabel__set_text(cancelButtonLabel, gameObject, 0);
  gameObject = (System_String_o *)this->fields.saveData;
  if ( !gameObject )
    goto LABEL_73;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)gameObject, 0) )
  {
    if ( !*(&RecommendedConfigSaveData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo, v97, v98);
    ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0);
    this->fields.saveData = ConfigSaveData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.saveData,
      (int32_t)ConfigSaveData,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v97);
  }
  RecommenededConfigDialog__SetButtonState(this, v106);
  this->fields.closeFunc = closeCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeCallback,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
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
  struct UISprite_array *v8; // x8
  System_String_o **p_ON_BTN_SPRITE_NAME; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  il2cpp_array_size_t v11; // x8
  unsigned __int64 v12; // x25
  __int64 v13; // x22
  struct RecommendedConfigSaveData_o *v14; // x8
  unsigned __int64 v15; // x20
  struct UISprite_array *v16; // x8
  System_String_o **p_OFF_BTN_SPRITE_NAME; // x8
  UISprite_o *autoSetButtonSprite; // x20
  __int64 v19; // x8

  v2 = this;
  if ( (byte_596A20B & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596A20B = 1;
  }
  classButtonSpriteList = v2->fields.classButtonSpriteList;
  if ( !classButtonSpriteList )
    goto LABEL_36;
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
                                             (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      v8 = v2->fields.classButtonSpriteList;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v8 )
          break;
        if ( v5 >= LODWORD(v8->max_length) )
          goto LABEL_37;
        this = (RecommenededConfigDialog_o *)v8->m_Items[v5];
        p_ON_BTN_SPRITE_NAME = &v2->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      else
      {
        if ( !v8 )
          break;
        if ( v5 >= LODWORD(v8->max_length) )
LABEL_37:
          sub_2213CE4(this);
        this = (RecommenededConfigDialog_o *)v8->m_Items[v5];
        p_ON_BTN_SPRITE_NAME = &v2->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          break;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_ON_BTN_SPRITE_NAME, 0);
      if ( v6 == ++v5 )
        goto LABEL_17;
    }
LABEL_36:
    sub_2213CDC(this, method);
  }
LABEL_17:
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_36;
  v11 = rarityButtonSpriteList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    v13 = (unsigned int)v11;
    do
    {
      v14 = v2->fields.saveData;
      if ( !v14 )
        goto LABEL_36;
      this = (RecommenededConfigDialog_o *)v14->fields.selectRarityList;
      if ( !this )
        goto LABEL_36;
      v15 = v12 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v12 + 1,
                                             (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
      v16 = v2->fields.rarityButtonSpriteList;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_36;
        if ( v12 >= LODWORD(v16->max_length) )
          goto LABEL_37;
        this = (RecommenededConfigDialog_o *)v16->m_Items[v12];
        p_OFF_BTN_SPRITE_NAME = &v2->fields.ON_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_36;
      }
      else
      {
        if ( !v16 )
          goto LABEL_36;
        if ( v12 >= LODWORD(v16->max_length) )
          goto LABEL_37;
        this = (RecommenededConfigDialog_o *)v16->m_Items[v12];
        p_OFF_BTN_SPRITE_NAME = &v2->fields.OFF_BTN_SPRITE_NAME;
        if ( !this )
          goto LABEL_36;
      }
      UISprite__set_spriteName((UISprite_o *)this, *p_OFF_BTN_SPRITE_NAME, 0);
      ++v12;
    }
    while ( v13 != v15 );
  }
  this = (RecommenededConfigDialog_o *)v2->fields.saveData;
  if ( !this )
    goto LABEL_36;
  autoSetButtonSprite = v2->fields.autoSetButtonSprite;
  this = (RecommenededConfigDialog_o *)RecommendedConfigSaveData__IsAutoSetOn((RecommendedConfigSaveData_o *)this, 0);
  if ( !autoSetButtonSprite )
    goto LABEL_36;
  v19 = 128;
  if ( ((unsigned __int8)this & 1) != 0 )
    v19 = 120;
  UISprite__set_spriteName(autoSetButtonSprite, *(System_String_o **)((char *)&v2->klass + v19), 0);
}


void RecommenededConfigDialog__SetInitConfig(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  RecommenededConfigDialog_o *v2; // x19
  struct RecommendedConfigSaveData_o *saveData; // x8
  struct System_Collections_Generic_List_int__o *selectClassTypeList; // x10
  struct System_Collections_Generic_List_int__o *selectRarityList; // x9
  int v6; // w11
  struct UISprite_array *rarityButtonSpriteList; // x10
  int v8; // w11
  int max_length; // w21
  int32_t v10; // w20
  struct RecommendedConfigSaveData_o *v11; // x8
  intptr_t m_CachedPtr; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10

  v2 = this;
  if ( (byte_596A20A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    this = (RecommenededConfigDialog_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    byte_596A20A = 1;
  }
  saveData = v2->fields.saveData;
  if ( !saveData )
    goto LABEL_18;
  selectClassTypeList = saveData->fields.selectClassTypeList;
  if ( !selectClassTypeList )
    goto LABEL_18;
  selectRarityList = saveData->fields.selectRarityList;
  v6 = selectClassTypeList->fields._version + 1;
  selectClassTypeList->fields._size = 0;
  selectClassTypeList->fields._version = v6;
  if ( !selectRarityList )
    goto LABEL_18;
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  v8 = selectRarityList->fields._version + 1;
  selectRarityList->fields._size = 0;
  selectRarityList->fields._version = v8;
  if ( !rarityButtonSpriteList )
    goto LABEL_18;
  max_length = rarityButtonSpriteList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    do
    {
      v11 = v2->fields.saveData;
      if ( !v11 )
        goto LABEL_18;
      this = (RecommenededConfigDialog_o *)v11->fields.selectRarityList;
      if ( !this )
        goto LABEL_18;
      m_CachedPtr = this->fields.m_CachedPtr;
      v13 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_18;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      ++v10;
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          v10,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v10;
      }
    }
    while ( max_length != v10 );
    saveData = v2->fields.saveData;
    if ( !saveData )
LABEL_18:
      sub_2213CDC(this, method);
  }
  saveData->fields.isAutoSet = 0;
}


UnityEngine_GameObject_o *RecommenededConfigDialog__get_closeBtnObject(
        RecommenededConfigDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A214 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A214 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void RecommenededConfigDialog_ClickDelegate___ctor(
        RecommenededConfigDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFEC98;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFEC50;
}


System_IAsyncResult_o *RecommenededConfigDialog_ClickDelegate__BeginInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  RecommenededConfigDialog__OnClickRarity(this->fields.__4__this, this->fields.rarityKind, v2);
}