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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  void *TreasureDeviceSpeedSelect; // x0
  __int64 v26; // x1
  struct UICommonButton_array *tdSpeedButtonList; // x8
  UIRangeLabel_o *v28; // x22
  struct UICommonButton_array *v29; // x8
  UIRangeLabel_o *v30; // x22
  struct UICommonButton_array *v31; // x8
  UIRangeLabel_o *v32; // x22
  UILabel_o *tdSpeedRangeLabelList; // x22
  int v34; // w2
  __int64 v35; // x3
  float *v36; // x8
  float v37; // s8
  float v38; // s9
  float v39; // s10
  float v40; // s11
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  int max_length; // w22
  float *v43; // x8
  __int64 v44; // x23
  float v45; // s12
  float v46; // s13
  float v47; // s14
  float v48; // s15
  struct UISprite_array *v49; // x8
  il2cpp_array_size_t v50; // w26
  int v51; // w21
  struct UnityEngine_GameObject_o *clickEventObject; // x8
  System_String_o **v53; // x8
  struct UICommonButton_array *v54; // x8
  float v55; // s3
  float v56; // s2
  float v57; // s1
  float v58; // s0
  __int64 v59; // x0

  if ( (byte_42ECB7D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12187/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v22, v23, v24);
    byte_42ECB7D = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    tdSpeedButtonList = this->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_57;
    if ( !tdSpeedButtonList->max_length )
      goto LABEL_58;
    v28 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[0];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
    if ( !v28 )
      goto LABEL_57;
    UIRangeLabel__Set(v28, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    v29 = this->fields.tdSpeedButtonList;
    if ( !v29 )
      goto LABEL_57;
    if ( v29->max_length <= 1 )
      goto LABEL_58;
    v30 = (UIRangeLabel_o *)v29->m_Items[1];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
    if ( !v30 )
      goto LABEL_57;
    UIRangeLabel__Set(v30, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    v31 = this->fields.tdSpeedButtonList;
    if ( !v31 )
      goto LABEL_57;
    if ( v31->max_length <= 2 )
    {
LABEL_58:
      v59 = sub_B5D6C8(TreasureDeviceSpeedSelect);
      sub_B5D668(v59, 0LL);
    }
    v32 = (UIRangeLabel_o *)v31->m_Items[2];
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
    if ( !v32 )
      goto LABEL_57;
    UIRangeLabel__Set(v32, (System_String_o *)TreasureDeviceSpeedSelect, 0LL, 1, 0, 0LL);
    tdSpeedRangeLabelList = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
    TreasureDeviceSpeedSelect = LocalizationManager__Get((System_String_o *)StringLiteral_12187/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
    if ( !tdSpeedRangeLabelList )
      goto LABEL_57;
    UILabel__set_text(tdSpeedRangeLabelList, (System_String_o *)TreasureDeviceSpeedSelect, 0LL);
    if ( !byte_42E563C )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v34, v35);
      byte_42E563C = 1;
    }
    TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
    }
    v36 = (float *)*((_QWORD *)TreasureDeviceSpeedSelect + 23);
    v37 = v36[20];
    v38 = v36[21];
    v39 = v36[22];
    v40 = v36[23];
    if ( !byte_42E563D )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v34, v35);
      TreasureDeviceSpeedSelect = LocalizationManager_TypeInfo;
      byte_42E563D = 1;
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
      v43 = (float *)*((_QWORD *)TreasureDeviceSpeedSelect + 23);
      v44 = 4LL;
      v45 = v43[24];
      v46 = v43[25];
      v47 = v43[26];
      v48 = v43[27];
      while ( 1 )
      {
        TreasureDeviceSpeedSelect = (void *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0LL);
        v49 = this->fields.tdSpeedButtonSpriteList;
        if ( !v49 )
          break;
        v50 = v44 - 4;
        if ( (unsigned int)(v44 - 4) >= v49->max_length )
          goto LABEL_58;
        v51 = (int)TreasureDeviceSpeedSelect;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&v49->obj.klass + v44);
        if ( !TreasureDeviceSpeedSelect )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)TreasureDeviceSpeedSelect, v50 != v51, 1, 0LL);
        clickEventObject = this->fields.clickEventObject;
        if ( !clickEventObject )
          break;
        if ( v50 >= LODWORD(clickEventObject[1].klass) )
          goto LABEL_58;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&clickEventObject->klass + v44);
        if ( !TreasureDeviceSpeedSelect )
          break;
        v53 = (System_String_o **)(v50 == v51 ? &StringLiteral_17175/*"btn_bg_21"*/ : &StringLiteral_17174/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)TreasureDeviceSpeedSelect, *v53, 0LL);
        v54 = this->fields.tdSpeedButtonList;
        if ( !v54 )
          break;
        if ( v50 >= v54->max_length )
          goto LABEL_58;
        TreasureDeviceSpeedSelect = (void *)*((_QWORD *)&v54->obj.klass + v44);
        if ( !TreasureDeviceSpeedSelect )
          break;
        if ( v50 == v51 )
          v55 = v48;
        else
          v55 = v40;
        if ( v50 == v51 )
          v56 = v47;
        else
          v56 = v39;
        if ( v50 == v51 )
          v57 = v46;
        else
          v57 = v38;
        if ( v50 == v51 )
          v58 = v45;
        else
          v58 = v37;
        UIRangeLabel__set_effectColor(
          (UIRangeLabel_o *)TreasureDeviceSpeedSelect,
          *(UnityEngine_Color_o *)(&v55 - 3),
          0LL);
        if ( (int)++v44 - 4 >= max_length )
          return;
      }
LABEL_57:
      sub_B5D69C(TreasureDeviceSpeedSelect, v26);
    }
  }
}