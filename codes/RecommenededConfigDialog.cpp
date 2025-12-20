void RecommenededConfigDialog___ctor(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1

  if ( (byte_4D265EF & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    sub_1C94098(&StringLiteral_17593/*"btn_on"*/);
    sub_1C94098(&StringLiteral_17525/*"btn_bg_04"*/);
    sub_1C94098(&StringLiteral_17592/*"btn_off"*/);
    sub_1C94098(&StringLiteral_17524/*"btn_bg_03"*/);
    byte_4D265EF = 1;
  }
  v3 = StringLiteral_17524/*"btn_bg_03"*/;
  this->fields.ON_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17524/*"btn_bg_03"*/;
  sub_1C9403C(&this->fields.ON_BTN_SPRITE_NAME, v3);
  v4 = StringLiteral_17525/*"btn_bg_04"*/;
  this->fields.OFF_BTN_SPRITE_NAME = (struct System_String_o *)StringLiteral_17525/*"btn_bg_04"*/;
  sub_1C9403C(&this->fields.OFF_BTN_SPRITE_NAME, v4);
  v5 = StringLiteral_17593/*"btn_on"*/;
  this->fields.autoSetOnBtnSpriteName = (struct System_String_o *)StringLiteral_17593/*"btn_on"*/;
  sub_1C9403C(&this->fields.autoSetOnBtnSpriteName, v5);
  v6 = StringLiteral_17592/*"btn_off"*/;
  this->fields.autoSetOffSpriteName = (struct System_String_o *)StringLiteral_17592/*"btn_off"*/;
  sub_1C9403C(&this->fields.autoSetOffSpriteName, v6);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecommenededConfigDialog__Close(
        RecommenededConfigDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4D265E6 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_RecommenededConfigDialog_EndClose__);
    byte_4D265E6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(&this->fields.closeCallbackFunc, callback);
  this->fields.closeFunc = 0;
  sub_1C9403C(&this->fields.closeFunc, 0);
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_RecommenededConfigDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
}


void RecommenededConfigDialog__EndClose(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  RecommenededConfigDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C9403C(&this->fields.closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void RecommenededConfigDialog__Init(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w21
  unsigned int v6; // w22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v8; // w21
  unsigned int v9; // w22

  if ( (byte_4D265E2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D265E2 = 1;
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
    v6 = 0;
    while ( v6 < LODWORD(classButtonLabelList->max_length) )
    {
      titleLabel = classButtonLabelList->m_Items[v6];
      if ( !titleLabel )
        goto LABEL_28;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( max_length == ++v6 )
        goto LABEL_15;
      classButtonLabelList = this->fields.classButtonLabelList;
      if ( !classButtonLabelList )
        goto LABEL_28;
    }
LABEL_29:
    sub_1C942F8(titleLabel);
  }
LABEL_15:
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_28;
  v8 = rarityButtonLabelList->max_length;
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( v9 < LODWORD(rarityButtonLabelList->max_length) )
    {
      titleLabel = rarityButtonLabelList->m_Items[v9];
      if ( !titleLabel )
        goto LABEL_28;
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( v8 == ++v9 )
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
    sub_1C942F0(titleLabel, method);
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

  if ( (byte_4D265E9 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommenededConfigDialog_OnClickAutoSet__);
    byte_4D265E9 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickAutoSet__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickAutoSet__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommenededConfigDialog_OnClickAutoSet__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData )
      sub_1C942F0(v5, v6);
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

  if ( (byte_4D265ED & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_RecommenededConfigDialog_OnClickCancel__);
    byte_4D265ED = 1;
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
        (const MethodInfo_384F754 *)Method_System_Collections_Generic_List_int__Sort__);
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
        (const MethodInfo_384F754 *)Method_System_Collections_Generic_List_int__Sort__);
      saveData = this->fields.saveData;
      if ( !saveData )
        goto LABEL_16;
    }
    RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0);
    v6 = Method_RecommenededConfigDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C940B0(Method_RecommenededConfigDialog_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C9407C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
LABEL_16:
      sub_1C942F0(saveData, method);
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

  if ( (byte_4D265E7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C94098(&Method_RecommenededConfigDialog_OnClickClass__);
    byte_4D265E7 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickClass__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClass__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_RecommenededConfigDialog_OnClickClass__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
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
                                                                          (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
                (const MethodInfo_384F30C *)Method_System_Collections_Generic_List_int__Remove__);
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
                  *(const MethodInfo_384DE10 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C942F0(selectClassTypeList, v8);
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

  if ( (byte_4D265EB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C94098(&Method_RecommenededConfigDialog_OnClickClear__);
    byte_4D265EB = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommenededConfigDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    saveData = this->fields.saveData;
    if ( !saveData
      || (selectClassTypeList = saveData->fields.selectClassTypeList) == 0
      || (v9 = selectClassTypeList->fields._version + 1,
          selectClassTypeList->fields._size = 0,
          selectClassTypeList->fields._version = v9,
          (selectRarityList = saveData->fields.selectRarityList) == 0) )
    {
      sub_1C942F0(v5, v6);
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

  if ( (byte_4D265EC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_RecommenededConfigDialog_OnClickDecide__);
    byte_4D265EC = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommenededConfigDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
        (const MethodInfo_384F754 *)Method_System_Collections_Generic_List_int__Sort__);
      saveData = this->fields.saveData;
      if ( !saveData )
        goto LABEL_16;
    }
    if ( (selectRarityList = saveData->fields.selectRarityList) == 0
      || selectRarityList->fields._size >= 1
      && (System_Collections_Generic_List_int___Sort(
            saveData->fields.selectRarityList,
            (const MethodInfo_384F754 *)Method_System_Collections_Generic_List_int__Sort__),
          (saveData = this->fields.saveData) == 0)
      || (RecommendedConfigSaveData__SaveConfig(saveData, saveData, 0), (closeFunc = this->fields.closeFunc) == 0) )
    {
LABEL_16:
      sub_1C942F0(saveData, v5);
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

  if ( (byte_4D265E8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C94098(&Method_RecommenededConfigDialog_OnClickRarity__);
    byte_4D265E8 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v5 = Method_RecommenededConfigDialog_OnClickRarity__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickRarity__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_RecommenededConfigDialog_OnClickRarity__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
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
                                                                       (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
                (const MethodInfo_384F30C *)Method_System_Collections_Generic_List_int__Remove__);
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
                  *(const MethodInfo_384DE10 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C942F0(selectRarityList, v8);
  }
}


void RecommenededConfigDialog__OnClickReset(RecommenededConfigDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4D265EA & 1) == 0 )
  {
    sub_1C94098(&Method_RecommenededConfigDialog_OnClickReset__);
    byte_4D265EA = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_RecommenededConfigDialog_OnClickReset__;
    if ( (*((_BYTE *)Method_RecommenededConfigDialog_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_RecommenededConfigDialog_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
  UILabel_o *titleLabel; // x22
  System_String_o *gameObject; // x0
  __int64 v7; // x1
  UILabel_o *messageLabel; // x22
  UILabel_o *classLabel; // x22
  struct UILabel_array *classButtonLabelList; // x8
  int max_length; // w25
  __int64 v12; // x22
  struct UILabel_array *v13; // x8
  UILabel_o *v14; // x23
  System_String_o *v15; // x0
  System_String_o *v16; // x24
  unsigned int v17; // w9
  struct UICommonButton_array *classButtonList; // x8
  UICommonButton_o *v19; // x10
  struct System_Collections_Generic_List_EventDelegate__o *onClick; // x10
  int32_t size; // w2
  int v22; // w11
  UICommonButton_o *v23; // x8
  System_Collections_Generic_List_object__o *v24; // x23
  EventDelegate_Callback_o *v25; // x24
  EventDelegate_o *v26; // x22
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  struct UICommonButton_array *v31; // x8
  UILabel_o *rarityLabel; // x22
  struct UILabel_array *rarityButtonLabelList; // x8
  int v34; // w20
  __int64 v35; // x22
  struct UILabel_array *v36; // x8
  UILabel_o *v37; // x23
  System_String_o *v38; // x0
  System_String_o *v39; // x24
  unsigned int v40; // w9
  struct UICommonButton_array *rarityButtonList; // x8
  UICommonButton_o *v42; // x10
  struct System_Collections_Generic_List_EventDelegate__o *v43; // x10
  int32_t v44; // w2
  int v45; // w11
  UICommonButton_o *v46; // x8
  System_Collections_Generic_List_object__o *v47; // x23
  EventDelegate_Callback_o *v48; // x24
  EventDelegate_o *v49; // x22
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  UILabel_o *autoSetLabel; // x22
  UILabel_o *resetButtonLabel; // x22
  UILabel_o *clearButtonLabel; // x22
  UILabel_o *decideButtonLabel; // x22
  UILabel_o *cancelButtonLabel; // x22
  const MethodInfo *v59; // x1
  RecommendedConfigSaveData_o *ConfigSaveData; // x0
  const MethodInfo *v61; // x1
  struct RecommendedConfigSaveData_o **p_saveData; // [xsp+10h] [xbp-70h]
  unsigned int v64; // [xsp+18h] [xbp-68h] BYREF
  unsigned int v65; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4D265E3 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&RecommendedConfigSaveData_TypeInfo);
    sub_1C94098(&Method_RecommenededConfigDialog___c__DisplayClass26_0__OpenRecommendedConfig_b__0__);
    sub_1C94098(&RecommenededConfigDialog___c__DisplayClass26_0_TypeInfo);
    sub_1C94098(&Method_RecommenededConfigDialog___c__DisplayClass26_1__OpenRecommendedConfig_b__1__);
    sub_1C94098(&RecommenededConfigDialog___c__DisplayClass26_1_TypeInfo);
    sub_1C94098(&StringLiteral_11048/*"RECOMMENDED_DIALOG_TITLE"*/);
    sub_1C94098(&StringLiteral_11046/*"RECOMMENDED_DIALOG_DECIDE"*/);
    sub_1C94098(&StringLiteral_11042/*"RECOMMENDED_AUTO_SET_TITLE"*/);
    sub_1C94098(&StringLiteral_11054/*"RECOMMENDED_RARITY_TITLE"*/);
    sub_1C94098(&StringLiteral_11053/*"RECOMMENDED_RARITY_"*/);
    sub_1C94098(&StringLiteral_11045/*"RECOMMENDED_CLEAR"*/);
    sub_1C94098(&StringLiteral_11055/*"RECOMMENDED_RESET"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_11044/*"RECOMMENDED_CLASS_TITLE"*/);
    sub_1C94098(&StringLiteral_11043/*"RECOMMENDED_CLASS_"*/);
    sub_1C94098(&StringLiteral_11047/*"RECOMMENDED_DIALOG_MESSAGE"*/);
    byte_4D265E3 = 1;
  }
  v64 = 0;
  v4 = (RecommendedConfigSaveData_o *)sub_1C942E4(RecommendedConfigSaveData_TypeInfo);
  RecommendedConfigSaveData___ctor(v4, 0);
  this->fields.saveData = v4;
  p_saveData = &this->fields.saveData;
  sub_1C9403C(&this->fields.saveData, v4);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11048/*"RECOMMENDED_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_75;
  UILabel__set_text(titleLabel, gameObject, 0);
  messageLabel = this->fields.messageLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11047/*"RECOMMENDED_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_75;
  UILabel__set_text(messageLabel, gameObject, 0);
  classLabel = this->fields.classLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11044/*"RECOMMENDED_CLASS_TITLE"*/, 0);
  if ( !classLabel )
    goto LABEL_75;
  UILabel__set_text(classLabel, gameObject, 0);
  classButtonLabelList = this->fields.classButtonLabelList;
  if ( !classButtonLabelList )
    goto LABEL_75;
  max_length = classButtonLabelList->max_length;
  v65 = 0;
  if ( max_length >= 1 )
  {
    while ( 1 )
    {
      v12 = sub_1C942E4(RecommenededConfigDialog___c__DisplayClass26_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v12, 0);
      if ( !v12 )
        break;
      *(_QWORD *)(v12 + 24) = this;
      gameObject = (System_String_o *)sub_1C9403C(v12 + 24, this);
      v13 = this->fields.classButtonLabelList;
      if ( !v13 )
        break;
      if ( v65 >= LODWORD(v13->max_length) )
        goto LABEL_76;
      v14 = v13->m_Items[v65];
      v15 = System_Int32__ToString((int32_t)&v65, 0);
      v16 = System_String__Concat_64417744((System_String_o *)StringLiteral_11043/*"RECOMMENDED_CLASS_"*/, v15, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v16, 0);
      if ( !v14 )
        break;
      UILabel__set_text(v14, gameObject, 0);
      v17 = v65;
      *(_DWORD *)(v12 + 16) = v65;
      classButtonList = this->fields.classButtonList;
      if ( !classButtonList )
        break;
      if ( v17 >= LODWORD(classButtonList->max_length) )
        goto LABEL_76;
      v19 = classButtonList->m_Items[v17];
      if ( !v19 )
        break;
      onClick = v19->fields.onClick;
      if ( !onClick )
        break;
      size = onClick->fields._size;
      v22 = onClick->fields._version + 1;
      onClick->fields._size = 0;
      onClick->fields._version = v22;
      if ( size >= 1 )
      {
        System_Array__Clear((System_Array_o *)onClick->fields._items, 0, size, 0);
        classButtonList = this->fields.classButtonList;
        if ( !classButtonList )
          break;
        v17 = v65;
      }
      if ( v17 >= LODWORD(classButtonList->max_length) )
LABEL_76:
        sub_1C942F8(gameObject);
      v23 = classButtonList->m_Items[v17];
      if ( !v23 )
        break;
      v24 = (System_Collections_Generic_List_object__o *)v23->fields.onClick;
      v25 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v25,
        (Il2CppObject *)v12,
        Method_RecommenededConfigDialog___c__DisplayClass26_0__OpenRecommendedConfig_b__0__,
        0);
      v26 = (EventDelegate_o *)sub_1C942E4(EventDelegate_TypeInfo);
      EventDelegate___ctor_49964596(v26, v25, 0);
      if ( !v24 )
        break;
      items = v24->fields._items;
      v28 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v24->fields._version;
      if ( !items )
        break;
      v29 = v24->fields._size;
      if ( (unsigned int)v29 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)v26,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + v29;
        v24->fields._size = v29 + 1;
        v30[4] = (Il2CppClass *)v26;
        gameObject = (System_String_o *)sub_1C9403C(v30 + 4, v26);
      }
      v31 = this->fields.classButtonList;
      if ( !v31 )
        break;
      if ( v65 >= LODWORD(v31->max_length) )
        goto LABEL_76;
      gameObject = (System_String_o *)v31->m_Items[v65];
      if ( !gameObject )
        break;
      gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( (int)++v65 >= max_length )
        goto LABEL_35;
    }
LABEL_75:
    sub_1C942F0(gameObject, v7);
  }
LABEL_35:
  rarityLabel = this->fields.rarityLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11054/*"RECOMMENDED_RARITY_TITLE"*/, 0);
  if ( !rarityLabel )
    goto LABEL_75;
  UILabel__set_text(rarityLabel, gameObject, 0);
  rarityButtonLabelList = this->fields.rarityButtonLabelList;
  if ( !rarityButtonLabelList )
    goto LABEL_75;
  v34 = rarityButtonLabelList->max_length;
  v64 = 0;
  if ( v34 >= 1 )
  {
    do
    {
      v35 = sub_1C942E4(RecommenededConfigDialog___c__DisplayClass26_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v35, 0);
      if ( !v35 )
        goto LABEL_75;
      *(_QWORD *)(v35 + 24) = this;
      gameObject = (System_String_o *)sub_1C9403C(v35 + 24, this);
      v36 = this->fields.rarityButtonLabelList;
      if ( !v36 )
        goto LABEL_75;
      if ( v64 >= LODWORD(v36->max_length) )
        goto LABEL_76;
      v37 = v36->m_Items[v64];
      v38 = System_Int32__ToString((int32_t)&v64, 0);
      v39 = System_String__Concat_64417744((System_String_o *)StringLiteral_11053/*"RECOMMENDED_RARITY_"*/, v38, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get(v39, 0);
      if ( !v37 )
        goto LABEL_75;
      UILabel__set_text(v37, gameObject, 0);
      v40 = v64;
      *(_DWORD *)(v35 + 16) = v64 + 1;
      rarityButtonList = this->fields.rarityButtonList;
      if ( !rarityButtonList )
        goto LABEL_75;
      if ( v40 >= LODWORD(rarityButtonList->max_length) )
        goto LABEL_76;
      v42 = rarityButtonList->m_Items[v40];
      if ( !v42 )
        goto LABEL_75;
      v43 = v42->fields.onClick;
      if ( !v43 )
        goto LABEL_75;
      v44 = v43->fields._size;
      v45 = v43->fields._version + 1;
      v43->fields._size = 0;
      v43->fields._version = v45;
      if ( v44 >= 1 )
      {
        System_Array__Clear((System_Array_o *)v43->fields._items, 0, v44, 0);
        rarityButtonList = this->fields.rarityButtonList;
        if ( !rarityButtonList )
          goto LABEL_75;
        v40 = v64;
      }
      if ( v40 >= LODWORD(rarityButtonList->max_length) )
        goto LABEL_76;
      v46 = rarityButtonList->m_Items[v40];
      if ( !v46 )
        goto LABEL_75;
      v47 = (System_Collections_Generic_List_object__o *)v46->fields.onClick;
      v48 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(
        v48,
        (Il2CppObject *)v35,
        Method_RecommenededConfigDialog___c__DisplayClass26_1__OpenRecommendedConfig_b__1__,
        0);
      v49 = (EventDelegate_o *)sub_1C942E4(EventDelegate_TypeInfo);
      EventDelegate___ctor_49964596(v49, v48, 0);
      if ( !v47 )
        goto LABEL_75;
      v50 = v47->fields._items;
      v51 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++v47->fields._version;
      if ( !v50 )
        goto LABEL_75;
      v52 = v47->fields._size;
      if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v47,
          (Il2CppObject *)v49,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &v50->obj.klass + v52;
        v47->fields._size = v52 + 1;
        v53[4] = (Il2CppClass *)v49;
        sub_1C9403C(v53 + 4, v49);
      }
    }
    while ( (int)++v64 < v34 );
  }
  autoSetLabel = this->fields.autoSetLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11042/*"RECOMMENDED_AUTO_SET_TITLE"*/, 0);
  if ( !autoSetLabel )
    goto LABEL_75;
  UILabel__set_text(autoSetLabel, gameObject, 0);
  resetButtonLabel = this->fields.resetButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11055/*"RECOMMENDED_RESET"*/, 0);
  if ( !resetButtonLabel )
    goto LABEL_75;
  UILabel__set_text(resetButtonLabel, gameObject, 0);
  clearButtonLabel = this->fields.clearButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11045/*"RECOMMENDED_CLEAR"*/, 0);
  if ( !clearButtonLabel )
    goto LABEL_75;
  UILabel__set_text(clearButtonLabel, gameObject, 0);
  decideButtonLabel = this->fields.decideButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_11046/*"RECOMMENDED_DIALOG_DECIDE"*/, 0);
  if ( !decideButtonLabel )
    goto LABEL_75;
  UILabel__set_text(decideButtonLabel, gameObject, 0);
  cancelButtonLabel = this->fields.cancelButtonLabel;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !cancelButtonLabel )
    goto LABEL_75;
  UILabel__set_text(cancelButtonLabel, gameObject, 0);
  gameObject = (System_String_o *)*p_saveData;
  if ( !*p_saveData )
    goto LABEL_75;
  if ( RecommendedConfigSaveData__IsExist((RecommendedConfigSaveData_o *)gameObject, 0) )
  {
    if ( !RecommendedConfigSaveData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RecommendedConfigSaveData_TypeInfo);
    ConfigSaveData = RecommendedConfigSaveData__LoadConfigSaveData(0);
    *p_saveData = ConfigSaveData;
    sub_1C9403C(p_saveData, ConfigSaveData);
  }
  else
  {
    RecommenededConfigDialog__SetInitConfig(this, v59);
  }
  RecommenededConfigDialog__SetButtonState(this, v61);
  this->fields.closeFunc = closeCallback;
  sub_1C9403C(&this->fields.closeFunc, closeCallback);
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
  struct UISprite_array *v8; // x9
  char v9; // w8
  System_String_o **p_ON_BTN_SPRITE_NAME; // x8
  struct UISprite_array *rarityButtonSpriteList; // x8
  il2cpp_array_size_t v12; // x8
  unsigned __int64 v13; // x25
  __int64 v14; // x22
  struct RecommendedConfigSaveData_o *v15; // x8
  unsigned __int64 v16; // x20
  struct UISprite_array *v17; // x9
  char v18; // w8
  System_String_o **p_OFF_BTN_SPRITE_NAME; // x8
  UISprite_o *autoSetButtonSprite; // x20
  __int64 v21; // x8

  v2 = this;
  if ( (byte_4D265E5 & 1) == 0 )
  {
    this = (RecommenededConfigDialog_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D265E5 = 1;
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
                                             (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
      v8 = v2->fields.classButtonSpriteList;
      if ( !v8 )
        break;
      if ( v5 >= LODWORD(v8->max_length) )
LABEL_33:
        sub_1C942F8(this);
      v9 = (char)this;
      this = (RecommenededConfigDialog_o *)v8->m_Items[v5];
      if ( (v9 & 1) != 0 )
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
    sub_1C942F0(this, method);
  }
LABEL_15:
  rarityButtonSpriteList = v2->fields.rarityButtonSpriteList;
  if ( !rarityButtonSpriteList )
    goto LABEL_32;
  v12 = rarityButtonSpriteList->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0;
    v14 = (unsigned int)v12;
    do
    {
      v15 = v2->fields.saveData;
      if ( !v15 )
        goto LABEL_32;
      this = (RecommenededConfigDialog_o *)v15->fields.selectRarityList;
      if ( !this )
        goto LABEL_32;
      v16 = v13 + 1;
      this = (RecommenededConfigDialog_o *)System_Collections_Generic_List_int___Contains(
                                             (System_Collections_Generic_List_int__o *)this,
                                             v13 + 1,
                                             (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
      v17 = v2->fields.rarityButtonSpriteList;
      if ( !v17 )
        goto LABEL_32;
      if ( v13 >= LODWORD(v17->max_length) )
        goto LABEL_33;
      v18 = (char)this;
      this = (RecommenededConfigDialog_o *)v17->m_Items[v13];
      if ( (v18 & 1) != 0 )
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
      ++v13;
    }
    while ( v14 != v16 );
  }
  this = (RecommenededConfigDialog_o *)v2->fields.saveData;
  if ( !this )
    goto LABEL_32;
  autoSetButtonSprite = v2->fields.autoSetButtonSprite;
  this = (RecommenededConfigDialog_o *)RecommendedConfigSaveData__IsAutoSetOn((RecommendedConfigSaveData_o *)this, 0);
  if ( !autoSetButtonSprite )
    goto LABEL_32;
  v21 = 128;
  if ( ((unsigned __int8)this & 1) != 0 )
    v21 = 120;
  UISprite__set_spriteName(autoSetButtonSprite, *(System_String_o **)((char *)&v2->klass + v21), 0);
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
  if ( (byte_4D265E4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    this = (RecommenededConfigDialog_o *)sub_1C94098(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4D265E4 = 1;
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
    sub_1C942F0(this, method);
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
        *(const MethodInfo_384DE10 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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

  if ( (byte_4D265EE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D265EE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C942F0(0, v4);
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
  sub_1C9403C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ABF18C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ABF144;
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
  if ( (byte_4D265F0 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D265F0 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void RecommenededConfigDialog_ClickDelegate__EndInvoke(
        RecommenededConfigDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
  RecommenededConfigDialog__OnClickRarity(this->fields.__4__this, this->fields.rarityKind, v2);
}