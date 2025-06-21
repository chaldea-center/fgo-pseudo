void __fastcall ServantStatusListViewItemDrawTdSpeed___ctor(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawTdSpeed__Awake(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusListViewItemDrawTdSpeed__GetKind(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        const MethodInfo *method)
{
  return 16;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawTdSpeed__SetItem(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *TreasureDeviceSpeedSelect; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v17; // x22
  struct UIRangeLabel_array *v18; // x8
  UIRangeLabel_o *v19; // x22
  struct UIRangeLabel_array *v20; // x8
  UIRangeLabel_o *v21; // x22
  UILabel_o *explanationLabel; // x22
  float *fields; // x8
  float v24; // s8
  float v25; // s9
  float v26; // s10
  float v27; // s11
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w22
  float *v30; // x8
  il2cpp_array_size_t v31; // w23
  float v32; // s12
  float v33; // s13
  float v34; // s14
  float v35; // s15
  struct UICommonButton_array *v36; // x8
  int v37; // w21
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v39; // x8
  struct UIRangeLabel_array *v40; // x8
  float v41; // s1
  float v42; // s0
  float v43; // s2
  float v44; // s3

  if ( (byte_4B19F3A & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    sub_1BCAFF8(&StringLiteral_11889/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v7);
    sub_1BCAFF8(&StringLiteral_17307/*"btn_bg_20"*/, v8);
    sub_1BCAFF8(&StringLiteral_11887/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v9);
    sub_1BCAFF8(&StringLiteral_11888/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v10);
    sub_1BCAFF8(&StringLiteral_11883/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v11);
    sub_1BCAFF8(&StringLiteral_17308/*"btn_bg_21"*/, v12);
    byte_4B19F3A = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
    if ( !tdSpeedRangeLabelList )
      goto LABEL_54;
    if ( !tdSpeedRangeLabelList->max_length )
      goto LABEL_55;
    v17 = tdSpeedRangeLabelList->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11887/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
    if ( !v17 )
      goto LABEL_54;
    UIRangeLabel__Set(v17, TreasureDeviceSpeedSelect, 0LL, 1, 0, 0, 0LL);
    v18 = this->fields.tdSpeedRangeLabelList;
    if ( !v18 )
      goto LABEL_54;
    if ( v18->max_length <= 1 )
      goto LABEL_55;
    v19 = v18->m_Items[1];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11883/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
    if ( !v19 )
      goto LABEL_54;
    UIRangeLabel__Set(v19, TreasureDeviceSpeedSelect, 0LL, 1, 0, 0, 0LL);
    v20 = this->fields.tdSpeedRangeLabelList;
    if ( !v20 )
      goto LABEL_54;
    if ( v20->max_length <= 2 )
LABEL_55:
      sub_1BCB25C(TreasureDeviceSpeedSelect, v14, v15);
    v21 = v20->m_Items[2];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11889/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
    if ( !v21 )
      goto LABEL_54;
    UIRangeLabel__Set(v21, TreasureDeviceSpeedSelect, 0LL, 1, 0, 0, 0LL);
    explanationLabel = this->fields.explanationLabel;
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
    if ( !explanationLabel )
      goto LABEL_54;
    UILabel__set_text(explanationLabel, TreasureDeviceSpeedSelect, 0LL);
    if ( !byte_4B16DC5 )
    {
      sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
      byte_4B16DC5 = 1;
    }
    TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    }
    fields = (float *)TreasureDeviceSpeedSelect[7].fields;
    v24 = fields[20];
    v25 = fields[21];
    v26 = fields[22];
    v27 = fields[23];
    if ( !byte_4B16DC6 )
    {
      sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
      byte_4B16DC6 = 1;
    }
    if ( !LODWORD(TreasureDeviceSpeedSelect[9].monitor) )
    {
      j_il2cpp_runtime_class_init_0(TreasureDeviceSpeedSelect);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    }
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_54;
    max_length = tdSpeedButtonList->max_length;
    if ( max_length >= 1 )
    {
      v30 = (float *)TreasureDeviceSpeedSelect[7].fields;
      v31 = 0;
      v32 = v30[24];
      v33 = v30[25];
      v34 = v30[26];
      v35 = v30[27];
      while ( 1 )
      {
        TreasureDeviceSpeedSelect = (System_String_o *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(
                                                         item,
                                                         0LL);
        v36 = this->fields.tdSpeedButtonList;
        if ( !v36 )
          break;
        if ( v31 >= v36->max_length )
          goto LABEL_55;
        v37 = (int)TreasureDeviceSpeedSelect;
        TreasureDeviceSpeedSelect = (System_String_o *)v36->m_Items[v31];
        if ( !TreasureDeviceSpeedSelect )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)TreasureDeviceSpeedSelect, v31 != v37, 1, 0LL);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( v31 >= tdSpeedButtonSpriteList->max_length )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (System_String_o *)tdSpeedButtonSpriteList->m_Items[v31];
        if ( !TreasureDeviceSpeedSelect )
          break;
        v39 = (System_String_o **)(v31 == v37 ? &StringLiteral_17308/*"btn_bg_21"*/ : &StringLiteral_17307/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)TreasureDeviceSpeedSelect, *v39, 0LL);
        v40 = this->fields.tdSpeedRangeLabelList;
        if ( !v40 )
          break;
        if ( v31 >= v40->max_length )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (System_String_o *)v40->m_Items[v31];
        v41 = v31 == v37 ? v33 : v25;
        v42 = v31 == v37 ? v32 : v24;
        v43 = v31 == v37 ? v34 : v26;
        v44 = v31 == v37 ? v35 : v27;
        if ( !TreasureDeviceSpeedSelect )
          break;
        UIRangeLabel__set_effectColor(
          (UIRangeLabel_o *)TreasureDeviceSpeedSelect,
          *(UnityEngine_Color_o *)(&v41 - 1),
          0LL);
        if ( max_length == ++v31 )
          return;
      }
LABEL_54:
      sub_1BCB254(TreasureDeviceSpeedSelect, v14);
    }
  }
}