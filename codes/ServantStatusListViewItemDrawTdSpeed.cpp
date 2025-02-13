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
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v8; // x22
  struct UIRangeLabel_array *v9; // x8
  UIRangeLabel_o *v10; // x22
  struct UIRangeLabel_array *v11; // x8
  UIRangeLabel_o *v12; // x22
  UILabel_o *explanationLabel; // x22
  float *m_CancellationTokenSource; // x8
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s11
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w22
  float *v21; // x8
  il2cpp_array_size_t v22; // w23
  float v23; // s12
  float v24; // s13
  float v25; // s14
  float v26; // s15
  struct UICommonButton_array *v27; // x8
  int v28; // w21
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v30; // x8
  struct UIRangeLabel_array *v31; // x8
  float v32; // s1
  float v33; // s0
  float v34; // s2
  float v35; // s3

  v6 = this;
  if ( (byte_4BD94F9 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12155/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1C21E38(&StringLiteral_17768/*"btn_bg_20"*/);
    sub_1C21E38(&StringLiteral_12153/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1C21E38(&StringLiteral_12154/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12149/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    this = (ServantStatusListViewItemDrawTdSpeed_o *)sub_1C21E38(&StringLiteral_17769/*"btn_bg_21"*/);
    byte_4BD94F9 = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    tdSpeedRangeLabelList = v6->fields.tdSpeedRangeLabelList;
    if ( !tdSpeedRangeLabelList )
      goto LABEL_54;
    if ( !tdSpeedRangeLabelList->max_length )
      goto LABEL_55;
    v8 = tdSpeedRangeLabelList->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12153/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
                                                       0LL);
    if ( !v8 )
      goto LABEL_54;
    UIRangeLabel__Set(v8, (System_String_o *)this, 0LL, 1, 0, 0LL);
    v9 = v6->fields.tdSpeedRangeLabelList;
    if ( !v9 )
      goto LABEL_54;
    if ( v9->max_length <= 1 )
      goto LABEL_55;
    v10 = v9->m_Items[1];
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12149/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
                                                       0LL);
    if ( !v10 )
      goto LABEL_54;
    UIRangeLabel__Set(v10, (System_String_o *)this, 0LL, 1, 0, 0LL);
    v11 = v6->fields.tdSpeedRangeLabelList;
    if ( !v11 )
      goto LABEL_54;
    if ( v11->max_length <= 2 )
LABEL_55:
      sub_1C2209C(this, item);
    v12 = v11->m_Items[2];
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12155/*"SERVANT_STATUS_TD_SPEED_TWICE"*/,
                                                       0LL);
    if ( !v12 )
      goto LABEL_54;
    UIRangeLabel__Set(v12, (System_String_o *)this, 0LL, 1, 0, 0LL);
    explanationLabel = v6->fields.explanationLabel;
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12154/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/,
                                                       0LL);
    if ( !explanationLabel )
      goto LABEL_54;
    UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
    if ( !byte_4BD7362 )
    {
      sub_1C21E38(&LocalizationManager_TypeInfo);
      byte_4BD7362 = 1;
    }
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
    }
    m_CancellationTokenSource = (float *)this[2].fields.m_CancellationTokenSource;
    v15 = m_CancellationTokenSource[20];
    v16 = m_CancellationTokenSource[21];
    v17 = m_CancellationTokenSource[22];
    v18 = m_CancellationTokenSource[23];
    if ( !byte_4BD7363 )
    {
      sub_1C21E38(&LocalizationManager_TypeInfo);
      this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
      byte_4BD7363 = 1;
    }
    if ( !LODWORD(this[2].fields.tdSpeedButtonSpriteList) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
    }
    tdSpeedButtonList = v6->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_54;
    max_length = tdSpeedButtonList->max_length;
    if ( max_length >= 1 )
    {
      v21 = (float *)this[2].fields.m_CancellationTokenSource;
      v22 = 0;
      v23 = v21[24];
      v24 = v21[25];
      v25 = v21[26];
      v26 = v21[27];
      while ( 1 )
      {
        this = (ServantStatusListViewItemDrawTdSpeed_o *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(
                                                           item,
                                                           0LL);
        v27 = v6->fields.tdSpeedButtonList;
        if ( !v27 )
          break;
        if ( v22 >= v27->max_length )
          goto LABEL_55;
        v28 = (int)this;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)v27->m_Items[v22];
        if ( !this )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)this, v22 != v28, 1, 0LL);
        tdSpeedButtonSpriteList = v6->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( v22 >= tdSpeedButtonSpriteList->max_length )
          goto LABEL_55;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)tdSpeedButtonSpriteList->m_Items[v22];
        if ( !this )
          break;
        v30 = (System_String_o **)(v22 == v28 ? &StringLiteral_17769/*"btn_bg_21"*/ : &StringLiteral_17768/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)this, *v30, 0LL);
        v31 = v6->fields.tdSpeedRangeLabelList;
        if ( !v31 )
          break;
        if ( v22 >= v31->max_length )
          goto LABEL_55;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)v31->m_Items[v22];
        v32 = v22 == v28 ? v24 : v16;
        v33 = v22 == v28 ? v23 : v15;
        v34 = v22 == v28 ? v25 : v17;
        v35 = v22 == v28 ? v26 : v18;
        if ( !this )
          break;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)this, *(UnityEngine_Color_o *)(&v32 - 1), 0LL);
        if ( max_length == ++v22 )
          return;
      }
LABEL_54:
      sub_1C22094(this, item);
    }
  }
}