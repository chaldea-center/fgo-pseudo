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
  void *TreasureDeviceSpeedSelect; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v11; // x22
  struct UIRangeLabel_array *v12; // x8
  UIRangeLabel_o *v13; // x22
  struct UIRangeLabel_array *v14; // x8
  UIRangeLabel_o *v15; // x22
  UILabel_o *explanationLabel; // x22
  __int64 v17; // x2
  float *v18; // x8
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s11
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w8
  float *v25; // x9
  int v26; // w24
  __int64 v27; // x25
  float v28; // s12
  float v29; // s13
  float v30; // s14
  float v31; // s15
  struct UICommonButton_array *v32; // x8
  unsigned int v33; // w26
  int v34; // w21
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v36; // x8
  struct UIRangeLabel_array *v37; // x8
  float v38; // s0 OVERLAPPED
  float v39; // s1
  float v40; // s2
  float v41; // s3

  if ( (byte_5935D06 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12483/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_21FFC50(&StringLiteral_18171/*"btn_bg_20"*/);
    sub_21FFC50(&StringLiteral_12481/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_21FFC50(&StringLiteral_12482/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12477/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    sub_21FFC50(&StringLiteral_18173/*"btn_bg_21"*/);
    byte_5935D06 = 1;
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12481/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0);
    if ( !v11 )
      goto LABEL_54;
    UIRangeLabel__Set(v11, (System_String_o *)TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    v12 = this->fields.tdSpeedRangeLabelList;
    if ( !v12 )
      goto LABEL_54;
    if ( (v12->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_55;
    v13 = v12->m_Items[1];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0);
    if ( !v13 )
      goto LABEL_54;
    UIRangeLabel__Set(v13, (System_String_o *)TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    v14 = this->fields.tdSpeedRangeLabelList;
    if ( !v14 )
      goto LABEL_54;
    if ( LODWORD(v14->max_length) <= 2 )
LABEL_55:
      sub_21FFED4(TreasureDeviceSpeedSelect);
    v15 = v14->m_Items[2];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0);
    if ( !v15 )
      goto LABEL_54;
    UIRangeLabel__Set(v15, (System_String_o *)TreasureDeviceSpeedSelect, 0, 1, 0, 0, 0);
    explanationLabel = this->fields.explanationLabel;
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
    if ( !explanationLabel )
      goto LABEL_54;
    UILabel__set_text(explanationLabel, (System_String_o *)TreasureDeviceSpeedSelect, 0);
    if ( !byte_5932AD3 )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      byte_5932AD3 = 1;
    }
    TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v17);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    }
    v18 = (float *)*((_QWORD *)TreasureDeviceSpeedSelect + 23);
    v19 = v18[20];
    v20 = v18[21];
    v21 = v18[22];
    v22 = v18[23];
    if ( !byte_5932AD4 )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
      byte_5932AD4 = 1;
    }
    if ( !*((_DWORD *)TreasureDeviceSpeedSelect + 57) )
    {
      j_il2cpp_runtime_class_init_0(TreasureDeviceSpeedSelect, v8, v17);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    }
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_54;
    max_length = tdSpeedButtonList->max_length;
    if ( max_length >= 1 )
    {
      v25 = (float *)*((_QWORD *)TreasureDeviceSpeedSelect + 23);
      v26 = -max_length;
      v27 = 4;
      v28 = v25[24];
      v29 = v25[25];
      v30 = v25[26];
      v31 = v25[27];
      while ( 1 )
      {
        TreasureDeviceSpeedSelect = (void *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0);
        v32 = this->fields.tdSpeedButtonList;
        if ( !v32 )
          break;
        v33 = v27 - 4;
        if ( (unsigned int)(v27 - 4) >= LODWORD(v32->max_length) )
          goto LABEL_55;
        v34 = (int)TreasureDeviceSpeedSelect;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&v32->obj.klass + v27);
        if ( !TreasureDeviceSpeedSelect )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)TreasureDeviceSpeedSelect, v33 != v34, 1, 0);
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( v33 >= LODWORD(tdSpeedButtonSpriteList->max_length) )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&tdSpeedButtonSpriteList->obj.klass + v27);
        if ( !TreasureDeviceSpeedSelect )
          break;
        v36 = (System_String_o **)(v33 == v34 ? &StringLiteral_18173/*"btn_bg_21"*/ : &StringLiteral_18171/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)TreasureDeviceSpeedSelect, *v36, 0);
        v37 = this->fields.tdSpeedRangeLabelList;
        if ( !v37 )
          break;
        if ( v33 >= LODWORD(v37->max_length) )
          goto LABEL_55;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&v37->obj.klass + v27);
        if ( !TreasureDeviceSpeedSelect )
          break;
        if ( v33 == v34 )
          v38 = v28;
        else
          v38 = v19;
        if ( v33 == v34 )
          v39 = v29;
        else
          v39 = v20;
        if ( v33 == v34 )
          v40 = v30;
        else
          v40 = v21;
        if ( v33 == v34 )
          v41 = v31;
        else
          v41 = v22;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)TreasureDeviceSpeedSelect, *(UnityEngine_Color_o *)&v38, 0);
        if ( v26 + (_DWORD)++v27 == 4 )
          return;
      }
LABEL_54:
      sub_21FFECC(TreasureDeviceSpeedSelect, v8);
    }
  }
}