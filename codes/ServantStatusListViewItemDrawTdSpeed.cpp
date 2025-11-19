void ServantStatusListViewItemDrawTdSpeed___ctor(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0);
}


void ServantStatusListViewItemDrawTdSpeed__Awake(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t ServantStatusListViewItemDrawTdSpeed__GetKind(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        const MethodInfo *method)
{
  return 16;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawTdSpeed__SetItem(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  System_String_o *TreasureDeviceSpeedSelect; // x0
  __int64 v8; // x1
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v10; // x22
  struct UIRangeLabel_array *v11; // x8
  UIRangeLabel_o *v12; // x22
  struct UIRangeLabel_array *v13; // x8
  UIRangeLabel_o *v14; // x22
  UILabel_o *explanationLabel; // x22
  float *fields; // x8
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s11
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w22
  float *v23; // x8
  unsigned int v24; // w23
  float v25; // s12
  float v26; // s13
  float v27; // s14
  float v28; // s15
  struct UICommonButton_array *v29; // x8
  int v30; // w21
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v32; // x8
  struct UIRangeLabel_array *v33; // x8
  float v34; // s1 OVERLAPPED
  float v35; // s0
  float v36; // s2
  float v37; // s3

  if ( (byte_4CB392A & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11993/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1C6BA08(&StringLiteral_17462/*"btn_bg_20"*/);
    sub_1C6BA08(&StringLiteral_11991/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1C6BA08(&StringLiteral_11992/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_11987/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    sub_1C6BA08(&StringLiteral_17463/*"btn_bg_21"*/);
    byte_4CB392A = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
  if ( item && mode )
  {
    tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
    if ( !tdSpeedRangeLabelList )
      goto LABEL_54;
    if ( !LODWORD(tdSpeedRangeLabelList->max_length) )
      goto LABEL_55;
    v10 = tdSpeedRangeLabelList->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11991/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0);
    if ( !v10 )
      goto LABEL_54;
    UIRangeLabel__Set(v10, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    v11 = this->fields.tdSpeedRangeLabelList;
    if ( !v11 )
      goto LABEL_54;
    if ( LODWORD(v11->max_length) <= 1 )
      goto LABEL_55;
    v12 = v11->m_Items[1];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11987/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0);
    if ( !v12 )
      goto LABEL_54;
    UIRangeLabel__Set(v12, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    v13 = this->fields.tdSpeedRangeLabelList;
    if ( !v13 )
      goto LABEL_54;
    if ( LODWORD(v13->max_length) <= 2 )
LABEL_55:
      sub_1C6BC68(TreasureDeviceSpeedSelect);
    v14 = v13->m_Items[2];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11993/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0);
    if ( !v14 )
      goto LABEL_54;
    UIRangeLabel__Set(v14, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    explanationLabel = this->fields.explanationLabel;
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11992/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_54;
    UILabel__set_text(explanationLabel, TreasureDeviceSpeedSelect, 0);
    if ( !byte_4CB0A46 )
    {
      sub_1C6BA08(&LocalizationManager_TypeInfo);
      byte_4CB0A46 = 1;
    }
    TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    }
    fields = (float *)TreasureDeviceSpeedSelect[7].fields;
    v17 = fields[20];
    v18 = fields[21];
    v19 = fields[22];
    v20 = fields[23];
    if ( !byte_4CB0A47 )
    {
      sub_1C6BA08(&LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
      byte_4CB0A47 = 1;
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
      v23 = (float *)TreasureDeviceSpeedSelect[7].fields;
      v24 = 0;
      v25 = v23[24];
      v26 = v23[25];
      v27 = v23[26];
      v28 = v23[27];
      while ( 1 )
      {
        TreasureDeviceSpeedSelect = (System_String_o *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0);
        v29 = this->fields.tdSpeedButtonList;
        if ( !v29 )
          break;
        if ( v24 >= LODWORD(v29->max_length) )
          goto LABEL_55;
        v30 = (int)TreasureDeviceSpeedSelect;
        TreasureDeviceSpeedSelect = (System_String_o *)v29->m_Items[v24];
        if ( !TreasureDeviceSpeedSelect )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)TreasureDeviceSpeedSelect, v24 != v30, 1, 0);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( v24 >= LODWORD(tdSpeedButtonSpriteList->max_length) )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (System_String_o *)tdSpeedButtonSpriteList->m_Items[v24];
        if ( !TreasureDeviceSpeedSelect )
          break;
        v32 = (System_String_o **)(v24 == v30 ? &StringLiteral_17463/*"btn_bg_21"*/ : &StringLiteral_17462/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)TreasureDeviceSpeedSelect, *v32, 0);
        v33 = this->fields.tdSpeedRangeLabelList;
        if ( !v33 )
          break;
        if ( v24 >= LODWORD(v33->max_length) )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (System_String_o *)v33->m_Items[v24];
        v34 = v24 == v30 ? v26 : v18;
        v35 = v24 == v30 ? v25 : v17;
        v36 = v24 == v30 ? v27 : v19;
        v37 = v24 == v30 ? v28 : v20;
        if ( !TreasureDeviceSpeedSelect )
          break;
        UIRangeLabel__set_effectColor(
          (UIRangeLabel_o *)TreasureDeviceSpeedSelect,
          *(UnityEngine_Color_o *)(&v34 - 1),
          0);
        if ( max_length == ++v24 )
          return;
      }
LABEL_54:
      sub_1C6BC60(TreasureDeviceSpeedSelect, v8);
    }
  }
}