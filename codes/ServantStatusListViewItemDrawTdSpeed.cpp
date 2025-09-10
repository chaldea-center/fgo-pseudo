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
  __int64 v9; // x2
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v11; // x22
  struct UIRangeLabel_array *v12; // x8
  UIRangeLabel_o *v13; // x22
  struct UIRangeLabel_array *v14; // x8
  UIRangeLabel_o *v15; // x22
  UILabel_o *explanationLabel; // x22
  float *fields; // x8
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s11
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w22
  float *v24; // x8
  unsigned int v25; // w23
  float v26; // s12
  float v27; // s13
  float v28; // s14
  float v29; // s15
  struct UICommonButton_array *v30; // x8
  int v31; // w21
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v33; // x8
  struct UIRangeLabel_array *v34; // x8
  float v35; // s1 OVERLAPPED
  float v36; // s0
  float v37; // s2
  float v38; // s3

  if ( (byte_4C24B25 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11987/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_11985/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1C2D490(&StringLiteral_11986/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11981/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C24B25 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
  if ( item && mode )
  {
    tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
    if ( !tdSpeedRangeLabelList )
      goto LABEL_54;
    if ( !LODWORD(tdSpeedRangeLabelList->max_length) )
      goto LABEL_55;
    v11 = tdSpeedRangeLabelList->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0);
    if ( !v11 )
      goto LABEL_54;
    UIRangeLabel__Set(v11, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    v12 = this->fields.tdSpeedRangeLabelList;
    if ( !v12 )
      goto LABEL_54;
    if ( LODWORD(v12->max_length) <= 1 )
      goto LABEL_55;
    v13 = v12->m_Items[1];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11981/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0);
    if ( !v13 )
      goto LABEL_54;
    UIRangeLabel__Set(v13, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    v14 = this->fields.tdSpeedRangeLabelList;
    if ( !v14 )
      goto LABEL_54;
    if ( LODWORD(v14->max_length) <= 2 )
LABEL_55:
      sub_1C2D6F4(TreasureDeviceSpeedSelect, v8, v9);
    v15 = v14->m_Items[2];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11987/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0);
    if ( !v15 )
      goto LABEL_54;
    UIRangeLabel__Set(v15, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    explanationLabel = this->fields.explanationLabel;
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11986/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_54;
    UILabel__set_text(explanationLabel, TreasureDeviceSpeedSelect, 0);
    if ( !byte_4C21AC5 )
    {
      sub_1C2D490(&LocalizationManager_TypeInfo);
      byte_4C21AC5 = 1;
    }
    TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    }
    fields = (float *)TreasureDeviceSpeedSelect[7].fields;
    v18 = fields[20];
    v19 = fields[21];
    v20 = fields[22];
    v21 = fields[23];
    if ( !byte_4C21AC6 )
    {
      sub_1C2D490(&LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
      byte_4C21AC6 = 1;
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
      v24 = (float *)TreasureDeviceSpeedSelect[7].fields;
      v25 = 0;
      v26 = v24[24];
      v27 = v24[25];
      v28 = v24[26];
      v29 = v24[27];
      while ( 1 )
      {
        TreasureDeviceSpeedSelect = (System_String_o *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0);
        v30 = this->fields.tdSpeedButtonList;
        if ( !v30 )
          break;
        if ( v25 >= LODWORD(v30->max_length) )
          goto LABEL_55;
        v31 = (int)TreasureDeviceSpeedSelect;
        TreasureDeviceSpeedSelect = (System_String_o *)v30->m_Items[v25];
        if ( !TreasureDeviceSpeedSelect )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)TreasureDeviceSpeedSelect, v25 != v31, 1, 0);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( v25 >= LODWORD(tdSpeedButtonSpriteList->max_length) )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (System_String_o *)tdSpeedButtonSpriteList->m_Items[v25];
        if ( !TreasureDeviceSpeedSelect )
          break;
        v33 = (System_String_o **)(v25 == v31 ? &StringLiteral_17442/*"btn_bg_21"*/ : &StringLiteral_17441/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)TreasureDeviceSpeedSelect, *v33, 0);
        v34 = this->fields.tdSpeedRangeLabelList;
        if ( !v34 )
          break;
        if ( v25 >= LODWORD(v34->max_length) )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (System_String_o *)v34->m_Items[v25];
        v35 = v25 == v31 ? v27 : v19;
        v36 = v25 == v31 ? v26 : v18;
        v37 = v25 == v31 ? v28 : v20;
        v38 = v25 == v31 ? v29 : v21;
        if ( !TreasureDeviceSpeedSelect )
          break;
        UIRangeLabel__set_effectColor(
          (UIRangeLabel_o *)TreasureDeviceSpeedSelect,
          *(UnityEngine_Color_o *)(&v35 - 1),
          0);
        if ( max_length == ++v25 )
          return;
      }
LABEL_54:
      sub_1C2D6EC(TreasureDeviceSpeedSelect, v8);
    }
  }
}