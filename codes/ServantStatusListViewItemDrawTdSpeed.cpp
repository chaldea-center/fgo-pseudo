void __fastcall ServantStatusListViewItemDrawTdSpeed___ctor(
        ServantStatusListViewItemDrawTdSpeed_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
  ServantStatusListViewItemDrawTdSpeed_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UICommonButton_array *tdSpeedButtonList; // x8
  UIRangeLabel_o *v14; // x22
  System_String_o *v15; // x0
  struct UICommonButton_array *v16; // x8
  UIRangeLabel_o *v17; // x22
  System_String_o *v18; // x0
  struct UICommonButton_array *v19; // x8
  UIRangeLabel_o *v20; // x22
  System_String_o *v21; // x0
  UILabel_o *tdSpeedRangeLabelList; // x22
  System_String_o *v23; // x0
  __int64 v24; // x1
  LocalizationManager_c *v25; // x0
  float *static_fields; // x8
  float v27; // s8
  float v28; // s9
  float v29; // s10
  float v30; // s11
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  int max_length; // w22
  float *v33; // x8
  __int64 v34; // x23
  float v35; // s12
  float v36; // s13
  float v37; // s14
  float v38; // s15
  struct UISprite_array *v39; // x8
  il2cpp_array_size_t v40; // w26
  int v41; // w21
  UICommonButton_o *v42; // x0
  struct UnityEngine_GameObject_o *clickEventObject; // x8
  UISprite_o *v44; // x0
  System_String_o **v45; // x8
  struct UICommonButton_array *v46; // x8
  UIRangeLabel_o *v47; // x0
  float v48; // s3
  float v49; // s2
  float v50; // s1
  float v51; // s0

  v6 = this;
  if ( (byte_40FDEC0 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_11991, v7);
    sub_B16FFC(&StringLiteral_16899, v8);
    sub_B16FFC(&StringLiteral_11989, v9);
    sub_B16FFC(&StringLiteral_11990, v10);
    sub_B16FFC(&StringLiteral_11985, v11);
    this = (ServantStatusListViewItemDrawTdSpeed_o *)sub_B16FFC(&StringLiteral_16900, v12);
    byte_40FDEC0 = 1;
  }
  LODWORD(v6->fields.explanationLabel) = mode;
  if ( item && mode )
  {
    tdSpeedButtonList = v6->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_57;
    if ( !tdSpeedButtonList->max_length )
      goto LABEL_58;
    v14 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[0];
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_11989, 0LL);
    if ( !v14 )
      goto LABEL_57;
    UIRangeLabel__Set(v14, v15, 0LL, 1, 0, 0LL);
    v16 = v6->fields.tdSpeedButtonList;
    if ( !v16 )
      goto LABEL_57;
    if ( v16->max_length <= 1 )
      goto LABEL_58;
    v17 = (UIRangeLabel_o *)v16->m_Items[1];
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_11985, 0LL);
    if ( !v17 )
      goto LABEL_57;
    UIRangeLabel__Set(v17, v18, 0LL, 1, 0, 0LL);
    v19 = v6->fields.tdSpeedButtonList;
    if ( !v19 )
      goto LABEL_57;
    if ( v19->max_length <= 2 )
    {
LABEL_58:
      sub_B17100(this, item, *(_QWORD *)&mode);
      sub_B170A0();
    }
    v20 = (UIRangeLabel_o *)v19->m_Items[2];
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_11991, 0LL);
    if ( !v20 )
      goto LABEL_57;
    UIRangeLabel__Set(v20, v21, 0LL, 1, 0, 0LL);
    tdSpeedRangeLabelList = (UILabel_o *)v6->fields.tdSpeedRangeLabelList;
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_11990, 0LL);
    if ( !tdSpeedRangeLabelList )
      goto LABEL_57;
    UILabel__set_text(tdSpeedRangeLabelList, v23, 0LL);
    if ( !byte_40F6254 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, v24);
      byte_40F6254 = 1;
    }
    v25 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v25->static_fields;
    v27 = static_fields[20];
    v28 = static_fields[21];
    v29 = static_fields[22];
    v30 = static_fields[23];
    if ( !byte_40F6255 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, v24);
      v25 = LocalizationManager_TypeInfo;
      byte_40F6255 = 1;
    }
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = LocalizationManager_TypeInfo;
    }
    tdSpeedButtonSpriteList = v6->fields.tdSpeedButtonSpriteList;
    if ( !tdSpeedButtonSpriteList )
      goto LABEL_57;
    max_length = tdSpeedButtonSpriteList->max_length;
    if ( max_length >= 1 )
    {
      v33 = (float *)v25->static_fields;
      v34 = 4LL;
      v35 = v33[24];
      v36 = v33[25];
      v37 = v33[26];
      v38 = v33[27];
      while ( 1 )
      {
        this = (ServantStatusListViewItemDrawTdSpeed_o *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(
                                                           item,
                                                           0LL);
        v39 = v6->fields.tdSpeedButtonSpriteList;
        if ( !v39 )
          break;
        v40 = v34 - 4;
        if ( (unsigned int)(v34 - 4) >= v39->max_length )
          goto LABEL_58;
        v41 = (int)this;
        v42 = (UICommonButton_o *)*((_QWORD *)&v39->obj.klass + v34);
        if ( !v42 )
          break;
        UICommonButton__SetColliderEnable(v42, v40 != v41, 1, 0LL);
        clickEventObject = v6->fields.clickEventObject;
        if ( !clickEventObject )
          break;
        if ( v40 >= LODWORD(clickEventObject[1].klass) )
          goto LABEL_58;
        v44 = (UISprite_o *)*((_QWORD *)&clickEventObject->klass + v34);
        if ( !v44 )
          break;
        v45 = (System_String_o **)(v40 == v41 ? &StringLiteral_16900 : &StringLiteral_16899);
        UISprite__set_spriteName(v44, *v45, 0LL);
        v46 = v6->fields.tdSpeedButtonList;
        if ( !v46 )
          break;
        if ( v40 >= v46->max_length )
          goto LABEL_58;
        v47 = (UIRangeLabel_o *)*((_QWORD *)&v46->obj.klass + v34);
        if ( !v47 )
          break;
        if ( v40 == v41 )
          v48 = v38;
        else
          v48 = v30;
        if ( v40 == v41 )
          v49 = v37;
        else
          v49 = v29;
        if ( v40 == v41 )
          v50 = v36;
        else
          v50 = v28;
        if ( v40 == v41 )
          v51 = v35;
        else
          v51 = v27;
        UIRangeLabel__set_effectColor(v47, *(UnityEngine_Color_o *)(&v48 - 3), 0LL);
        if ( (int)++v34 - 4 >= max_length )
          return;
      }
LABEL_57:
      sub_B170D4();
    }
  }
}