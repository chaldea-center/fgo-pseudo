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
  void *TreasureDeviceSpeedSelect; // x0
  __int64 v8; // x1
  struct UICommonButton_array *tdSpeedButtonList; // x8
  UIRangeLabel_o *v10; // x22
  struct UICommonButton_array *v11; // x8
  UIRangeLabel_o *v12; // x22
  struct UICommonButton_array *v13; // x8
  UIRangeLabel_o *v14; // x22
  UILabel_o *tdSpeedRangeLabelList; // x22
  float *v16; // x8
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s11
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  int max_length; // w22
  float *v23; // x8
  __int64 v24; // x23
  float v25; // s12
  float v26; // s13
  float v27; // s14
  float v28; // s15
  struct UISprite_array *v29; // x8
  il2cpp_array_size_t v30; // w26
  int v31; // w21
  struct UnityEngine_GameObject_o *clickEventObject; // x8
  System_String_o **v33; // x8
  struct UICommonButton_array *v34; // x8
  float v35; // s3
  float v36; // s2
  float v37; // s1
  float v38; // s0
  __int64 v39; // x0

  if ( (byte_438F2F3 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12273/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_B775C4(&StringLiteral_17304/*"btn_bg_20"*/);
    sub_B775C4(&StringLiteral_12271/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_B775C4(&StringLiteral_12272/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12267/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    sub_B775C4(&StringLiteral_17305/*"btn_bg_21"*/);
    byte_438F2F3 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_57;
    if ( !tdSpeedButtonList->max_length )
      goto LABEL_58;
    v10 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[0];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12271/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
    if ( !v10 )
      goto LABEL_57;
    UIRangeLabel__Set(v10, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    v11 = this->fields.tdSpeedButtonList;
    if ( !v11 )
      goto LABEL_57;
    if ( v11->max_length <= 1 )
      goto LABEL_58;
    v12 = (UIRangeLabel_o *)v11->m_Items[1];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12267/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
    if ( !v12 )
      goto LABEL_57;
    UIRangeLabel__Set(v12, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    v13 = this->fields.tdSpeedButtonList;
    if ( !v13 )
      goto LABEL_57;
    if ( v13->max_length <= 2 )
    {
LABEL_58:
      v39 = sub_B776C8(TreasureDeviceSpeedSelect);
      sub_B77668(v39, 0LL);
    }
    v14 = (UIRangeLabel_o *)v13->m_Items[2];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12273/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
    if ( !v14 )
      goto LABEL_57;
    UIRangeLabel__Set(v14, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    tdSpeedRangeLabelList = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
    if ( !tdSpeedRangeLabelList )
      goto LABEL_57;
    UILabel__set_text(tdSpeedRangeLabelList, (System_String_o *)TreasureDeviceSpeedSelect, 0LL);
    if ( !byte_4387FCE )
    {
      sub_B775C4(&LocalizationManager_TypeInfo);
      byte_4387FCE = 1;
    }
    TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    }
    v16 = (float *)*((_QWORD *)TreasureDeviceSpeedSelect + 23);
    v17 = v16[20];
    v18 = v16[21];
    v19 = v16[22];
    v20 = v16[23];
    if ( !byte_4387FCF )
    {
      sub_B775C4(&LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
      byte_4387FCF = 1;
    }
    if ( (*((_BYTE *)TreasureDeviceSpeedSelect + 307) & 4) != 0 && !*((_DWORD *)TreasureDeviceSpeedSelect + 56) )
    {
      j_il2cpp_runtime_class_init_0(TreasureDeviceSpeedSelect);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    }
    tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
    if ( !tdSpeedButtonSpriteList )
      goto LABEL_57;
    max_length = tdSpeedButtonSpriteList->max_length;
    if ( max_length >= 1 )
    {
      v23 = (float *)*((_QWORD *)TreasureDeviceSpeedSelect + 23);
      v24 = 4LL;
      v25 = v23[24];
      v26 = v23[25];
      v27 = v23[26];
      v28 = v23[27];
      while ( 1 )
      {
        TreasureDeviceSpeedSelect = (void *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0LL);
        v29 = this->fields.tdSpeedButtonSpriteList;
        if ( !v29 )
          break;
        v30 = v24 - 4;
        if ( (unsigned int)(v24 - 4) >= v29->max_length )
          goto LABEL_58;
        v31 = (int)TreasureDeviceSpeedSelect;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&v29->obj.klass + v24);
        if ( !TreasureDeviceSpeedSelect )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)TreasureDeviceSpeedSelect, v30 != v31, 1, 0LL);
        clickEventObject = this->fields.clickEventObject;
        if ( !clickEventObject )
          break;
        if ( v30 >= LODWORD(clickEventObject[1].klass) )
          goto LABEL_58;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&clickEventObject->klass + v24);
        if ( !TreasureDeviceSpeedSelect )
          break;
        v33 = (System_String_o **)(v30 == v31 ? &StringLiteral_17305/*"btn_bg_21"*/ : &StringLiteral_17304/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)TreasureDeviceSpeedSelect, *v33, 0LL);
        v34 = this->fields.tdSpeedButtonList;
        if ( !v34 )
          break;
        if ( v30 >= v34->max_length )
          goto LABEL_58;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&v34->obj.klass + v24);
        if ( !TreasureDeviceSpeedSelect )
          break;
        if ( v30 == v31 )
          v35 = v28;
        else
          v35 = v20;
        if ( v30 == v31 )
          v36 = v27;
        else
          v36 = v19;
        if ( v30 == v31 )
          v37 = v26;
        else
          v37 = v18;
        if ( v30 == v31 )
          v38 = v25;
        else
          v38 = v17;
        UIRangeLabel__set_effectColor(
          (UIRangeLabel_o *)TreasureDeviceSpeedSelect,
          *(UnityEngine_Color_o *)(&v35 - 3),
          0LL);
        if ( (int)++v24 - 4 >= max_length )
          return;
      }
LABEL_57:
      sub_B7769C(TreasureDeviceSpeedSelect, v8);
    }
  }
}