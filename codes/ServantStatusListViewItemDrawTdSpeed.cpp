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
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v14; // x22
  struct UIRangeLabel_array *v15; // x8
  UIRangeLabel_o *v16; // x22
  struct UIRangeLabel_array *v17; // x8
  UIRangeLabel_o *v18; // x22
  UILabel_o *explanationLabel; // x22
  __int64 v20; // x1
  float *m_CancellationTokenSource; // x8
  float v22; // s8
  float v23; // s9
  float v24; // s10
  float v25; // s11
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w22
  float *v28; // x8
  il2cpp_array_size_t v29; // w23
  float v30; // s12
  float v31; // s13
  float v32; // s14
  float v33; // s15
  struct UICommonButton_array *v34; // x8
  int v35; // w21
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v37; // x8
  struct UIRangeLabel_array *v38; // x8
  float v39; // s1
  float v40; // s0
  float v41; // s2
  float v42; // s3

  v6 = this;
  if ( (byte_49F929C & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&StringLiteral_11881/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v7);
    sub_1B640C8(&StringLiteral_17409/*"btn_bg_20"*/, v8);
    sub_1B640C8(&StringLiteral_11879/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v9);
    sub_1B640C8(&StringLiteral_11880/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v10);
    sub_1B640C8(&StringLiteral_11875/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v11);
    this = (ServantStatusListViewItemDrawTdSpeed_o *)sub_1B640C8(&StringLiteral_17410/*"btn_bg_21"*/, v12);
    byte_49F929C = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    tdSpeedRangeLabelList = v6->fields.tdSpeedRangeLabelList;
    if ( !tdSpeedRangeLabelList )
      goto LABEL_54;
    if ( !tdSpeedRangeLabelList->max_length )
      goto LABEL_55;
    v14 = tdSpeedRangeLabelList->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11879/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
                                                       0LL);
    if ( !v14 )
      goto LABEL_54;
    UIRangeLabel__Set(v14, (System_String_o *)this, 0LL, 1, 0, 0LL);
    v15 = v6->fields.tdSpeedRangeLabelList;
    if ( !v15 )
      goto LABEL_54;
    if ( v15->max_length <= 1 )
      goto LABEL_55;
    v16 = v15->m_Items[1];
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11875/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
                                                       0LL);
    if ( !v16 )
      goto LABEL_54;
    UIRangeLabel__Set(v16, (System_String_o *)this, 0LL, 1, 0, 0LL);
    v17 = v6->fields.tdSpeedRangeLabelList;
    if ( !v17 )
      goto LABEL_54;
    if ( v17->max_length <= 2 )
LABEL_55:
      sub_1B6432C(this, item);
    v18 = v17->m_Items[2];
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11881/*"SERVANT_STATUS_TD_SPEED_TWICE"*/,
                                                       0LL);
    if ( !v18 )
      goto LABEL_54;
    UIRangeLabel__Set(v18, (System_String_o *)this, 0LL, 1, 0, 0LL);
    explanationLabel = v6->fields.explanationLabel;
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11880/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/,
                                                       0LL);
    if ( !explanationLabel )
      goto LABEL_54;
    UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
    if ( !byte_49F779B )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v20);
      byte_49F779B = 1;
    }
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
    }
    m_CancellationTokenSource = (float *)this[2].fields.m_CancellationTokenSource;
    v22 = m_CancellationTokenSource[20];
    v23 = m_CancellationTokenSource[21];
    v24 = m_CancellationTokenSource[22];
    v25 = m_CancellationTokenSource[23];
    if ( !byte_49F779C )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v20);
      this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
      byte_49F779C = 1;
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
      v28 = (float *)this[2].fields.m_CancellationTokenSource;
      v29 = 0;
      v30 = v28[24];
      v31 = v28[25];
      v32 = v28[26];
      v33 = v28[27];
      while ( 1 )
      {
        this = (ServantStatusListViewItemDrawTdSpeed_o *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(
                                                           item,
                                                           0LL);
        v34 = v6->fields.tdSpeedButtonList;
        if ( !v34 )
          break;
        if ( v29 >= v34->max_length )
          goto LABEL_55;
        v35 = (int)this;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)v34->m_Items[v29];
        if ( !this )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)this, v29 != v35, 1, 0LL);
        tdSpeedButtonSpriteList = v6->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( v29 >= tdSpeedButtonSpriteList->max_length )
          goto LABEL_55;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)tdSpeedButtonSpriteList->m_Items[v29];
        if ( !this )
          break;
        v37 = (System_String_o **)(v29 == v35 ? &StringLiteral_17410/*"btn_bg_21"*/ : &StringLiteral_17409/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)this, *v37, 0LL);
        v38 = v6->fields.tdSpeedRangeLabelList;
        if ( !v38 )
          break;
        if ( v29 >= v38->max_length )
          goto LABEL_55;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)v38->m_Items[v29];
        v39 = v29 == v35 ? v31 : v23;
        v40 = v29 == v35 ? v30 : v22;
        v41 = v29 == v35 ? v32 : v24;
        v42 = v29 == v35 ? v33 : v25;
        if ( !this )
          break;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)this, *(UnityEngine_Color_o *)(&v39 - 1), 0LL);
        if ( max_length == ++v29 )
          return;
      }
LABEL_54:
      sub_1B64324(this);
    }
  }
}