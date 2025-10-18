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
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v9; // x22
  struct UIRangeLabel_array *v10; // x8
  UIRangeLabel_o *v11; // x22
  struct UIRangeLabel_array *v12; // x8
  UIRangeLabel_o *v13; // x22
  UILabel_o *explanationLabel; // x22
  float *fields; // x8
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s11
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w22
  float *v22; // x8
  unsigned int v23; // w23
  float v24; // s12
  float v25; // s13
  float v26; // s14
  float v27; // s15
  struct UICommonButton_array *v28; // x8
  int v29; // w21
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v31; // x8
  struct UIRangeLabel_array *v32; // x8
  float v33; // s1 OVERLAPPED
  float v34; // s0
  float v35; // s2
  float v36; // s3

  if ( (byte_4C4063B & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11994/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1C37058(&StringLiteral_17447/*"btn_bg_20"*/);
    sub_1C37058(&StringLiteral_11992/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1C37058(&StringLiteral_11993/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1C37058(&StringLiteral_11988/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    sub_1C37058(&StringLiteral_17448/*"btn_bg_21"*/);
    byte_4C4063B = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0);
  if ( item && mode )
  {
    tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
    if ( !tdSpeedRangeLabelList )
      goto LABEL_54;
    if ( !LODWORD(tdSpeedRangeLabelList->max_length) )
      goto LABEL_55;
    v9 = tdSpeedRangeLabelList->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11992/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0);
    if ( !v9 )
      goto LABEL_54;
    UIRangeLabel__Set(v9, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    v10 = this->fields.tdSpeedRangeLabelList;
    if ( !v10 )
      goto LABEL_54;
    if ( LODWORD(v10->max_length) <= 1 )
      goto LABEL_55;
    v11 = v10->m_Items[1];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11988/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0);
    if ( !v11 )
      goto LABEL_54;
    UIRangeLabel__Set(v11, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    v12 = this->fields.tdSpeedRangeLabelList;
    if ( !v12 )
      goto LABEL_54;
    if ( LODWORD(v12->max_length) <= 2 )
LABEL_55:
      sub_1C372BC(TreasureDeviceSpeedSelect);
    v13 = v12->m_Items[2];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0);
    if ( !v13 )
      goto LABEL_54;
    UIRangeLabel__Set(v13, TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    explanationLabel = this->fields.explanationLabel;
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_11993/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_54;
    UILabel__set_text(explanationLabel, TreasureDeviceSpeedSelect, 0);
    if ( !byte_4C3D77E )
    {
      sub_1C37058(&LocalizationManager_TypeInfo);
      byte_4C3D77E = 1;
    }
    TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
    }
    fields = (float *)TreasureDeviceSpeedSelect[7].fields;
    v16 = fields[20];
    v17 = fields[21];
    v18 = fields[22];
    v19 = fields[23];
    if ( !byte_4C3D77F )
    {
      sub_1C37058(&LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = (System_String_o *)LocalizationManager_TypeInfo;
      byte_4C3D77F = 1;
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
      v22 = (float *)TreasureDeviceSpeedSelect[7].fields;
      v23 = 0;
      v24 = v22[24];
      v25 = v22[25];
      v26 = v22[26];
      v27 = v22[27];
      while ( 1 )
      {
        TreasureDeviceSpeedSelect = (System_String_o *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0);
        v28 = this->fields.tdSpeedButtonList;
        if ( !v28 )
          break;
        if ( v23 >= LODWORD(v28->max_length) )
          goto LABEL_55;
        v29 = (int)TreasureDeviceSpeedSelect;
        TreasureDeviceSpeedSelect = (System_String_o *)v28->m_Items[v23];
        if ( !TreasureDeviceSpeedSelect )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)TreasureDeviceSpeedSelect, v23 != v29, 1, 0);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( v23 >= LODWORD(tdSpeedButtonSpriteList->max_length) )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (System_String_o *)tdSpeedButtonSpriteList->m_Items[v23];
        if ( !TreasureDeviceSpeedSelect )
          break;
        v31 = (System_String_o **)(v23 == v29 ? &StringLiteral_17448/*"btn_bg_21"*/ : &StringLiteral_17447/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)TreasureDeviceSpeedSelect, *v31, 0);
        v32 = this->fields.tdSpeedRangeLabelList;
        if ( !v32 )
          break;
        if ( v23 >= LODWORD(v32->max_length) )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (System_String_o *)v32->m_Items[v23];
        v33 = v23 == v29 ? v25 : v17;
        v34 = v23 == v29 ? v24 : v16;
        v35 = v23 == v29 ? v26 : v18;
        v36 = v23 == v29 ? v27 : v19;
        if ( !TreasureDeviceSpeedSelect )
          break;
        UIRangeLabel__set_effectColor(
          (UIRangeLabel_o *)TreasureDeviceSpeedSelect,
          *(UnityEngine_Color_o *)(&v33 - 1),
          0);
        if ( max_length == ++v23 )
          return;
      }
LABEL_54:
      sub_1C372B4(TreasureDeviceSpeedSelect);
    }
  }
}