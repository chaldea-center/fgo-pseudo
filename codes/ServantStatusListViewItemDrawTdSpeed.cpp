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
  void *TreasureDeviceSpeedSelect; // x0
  __int64 v14; // x1
  struct UICommonButton_array *tdSpeedButtonList; // x8
  UIRangeLabel_o *v16; // x22
  struct UICommonButton_array *v17; // x8
  UIRangeLabel_o *v18; // x22
  struct UICommonButton_array *v19; // x8
  UIRangeLabel_o *v20; // x22
  UILabel_o *tdSpeedRangeLabelList; // x22
  float *v22; // x8
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s11
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  int max_length; // w22
  float *v29; // x8
  __int64 v30; // x23
  float v31; // s12
  float v32; // s13
  float v33; // s14
  float v34; // s15
  struct UISprite_array *v35; // x8
  il2cpp_array_size_t v36; // w26
  int v37; // w21
  struct UnityEngine_GameObject_o *clickEventObject; // x8
  System_String_o **v39; // x8
  struct UICommonButton_array *v40; // x8
  float v41; // s3
  float v42; // s2
  float v43; // s1
  float v44; // s0
  __int64 v45; // x0

  if ( (byte_418A7E8 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_12041/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v7);
    sub_B2C35C(&StringLiteral_16965/*"btn_bg_20"*/, v8);
    sub_B2C35C(&StringLiteral_12039/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v9);
    sub_B2C35C(&StringLiteral_12040/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v10);
    sub_B2C35C(&StringLiteral_12035/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v11);
    sub_B2C35C(&StringLiteral_16966/*"btn_bg_21"*/, v12);
    byte_418A7E8 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_57;
    if ( !tdSpeedButtonList->max_length )
      goto LABEL_58;
    v16 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[0];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12039/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
    if ( !v16 )
      goto LABEL_57;
    UIRangeLabel__Set(v16, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    v17 = this->fields.tdSpeedButtonList;
    if ( !v17 )
      goto LABEL_57;
    if ( v17->max_length <= 1 )
      goto LABEL_58;
    v18 = (UIRangeLabel_o *)v17->m_Items[1];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
    if ( !v18 )
      goto LABEL_57;
    UIRangeLabel__Set(v18, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    v19 = this->fields.tdSpeedButtonList;
    if ( !v19 )
      goto LABEL_57;
    if ( v19->max_length <= 2 )
    {
LABEL_58:
      v45 = sub_B2C460(TreasureDeviceSpeedSelect);
      sub_B2C400(v45, 0LL);
    }
    v20 = (UIRangeLabel_o *)v19->m_Items[2];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12041/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
    if ( !v20 )
      goto LABEL_57;
    UIRangeLabel__Set(v20, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    tdSpeedRangeLabelList = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12040/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
    if ( !tdSpeedRangeLabelList )
      goto LABEL_57;
    UILabel__set_text(tdSpeedRangeLabelList, (System_String_o *)TreasureDeviceSpeedSelect, 0LL);
    if ( !byte_4184963 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, v14);
      byte_4184963 = 1;
    }
    TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    }
    v22 = (float *)*((_QWORD *)TreasureDeviceSpeedSelect + 23);
    v23 = v22[20];
    v24 = v22[21];
    v25 = v22[22];
    v26 = v22[23];
    if ( !byte_4184964 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, v14);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
      byte_4184964 = 1;
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
      v29 = (float *)*((_QWORD *)TreasureDeviceSpeedSelect + 23);
      v30 = 4LL;
      v31 = v29[24];
      v32 = v29[25];
      v33 = v29[26];
      v34 = v29[27];
      while ( 1 )
      {
        TreasureDeviceSpeedSelect = (void *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0LL);
        v35 = this->fields.tdSpeedButtonSpriteList;
        if ( !v35 )
          break;
        v36 = v30 - 4;
        if ( (unsigned int)(v30 - 4) >= v35->max_length )
          goto LABEL_58;
        v37 = (int)TreasureDeviceSpeedSelect;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&v35->obj.klass + v30);
        if ( !TreasureDeviceSpeedSelect )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)TreasureDeviceSpeedSelect, v36 != v37, 1, 0LL);
        clickEventObject = this->fields.clickEventObject;
        if ( !clickEventObject )
          break;
        if ( v36 >= LODWORD(clickEventObject[1].klass) )
          goto LABEL_58;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&clickEventObject->klass + v30);
        if ( !TreasureDeviceSpeedSelect )
          break;
        v39 = (System_String_o **)(v36 == v37 ? &StringLiteral_16966/*"btn_bg_21"*/ : &StringLiteral_16965/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)TreasureDeviceSpeedSelect, *v39, 0LL);
        v40 = this->fields.tdSpeedButtonList;
        if ( !v40 )
          break;
        if ( v36 >= v40->max_length )
          goto LABEL_58;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&v40->obj.klass + v30);
        if ( !TreasureDeviceSpeedSelect )
          break;
        if ( v36 == v37 )
          v41 = v34;
        else
          v41 = v26;
        if ( v36 == v37 )
          v42 = v33;
        else
          v42 = v25;
        if ( v36 == v37 )
          v43 = v32;
        else
          v43 = v24;
        if ( v36 == v37 )
          v44 = v31;
        else
          v44 = v23;
        UIRangeLabel__set_effectColor(
          (UIRangeLabel_o *)TreasureDeviceSpeedSelect,
          *(UnityEngine_Color_o *)(&v41 - 3),
          0LL);
        if ( (int)++v30 - 4 >= max_length )
          return;
      }
LABEL_57:
      sub_B2C434(TreasureDeviceSpeedSelect, v14);
    }
  }
}