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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v20; // x22
  struct UIRangeLabel_array *v21; // x8
  UIRangeLabel_o *v22; // x22
  struct UIRangeLabel_array *v23; // x8
  UIRangeLabel_o *v24; // x22
  UILabel_o *explanationLabel; // x22
  __int64 v26; // x2
  float *m_CancellationTokenSource; // x8
  float v28; // s8
  float v29; // s9
  float v30; // s10
  float v31; // s11
  struct UICommonButton_array *tdSpeedButtonList; // x8
  int max_length; // w22
  float *v34; // x8
  il2cpp_array_size_t v35; // w23
  float v36; // s12
  float v37; // s13
  float v38; // s14
  float v39; // s15
  struct UICommonButton_array *v40; // x8
  int v41; // w21
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  System_String_o **v43; // x8
  struct UIRangeLabel_array *v44; // x8
  float v45; // s1
  float v46; // s0
  float v47; // s2
  float v48; // s3

  v6 = this;
  if ( (byte_4B13226 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12072/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_12068/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v15, v16);
    this = (ServantStatusListViewItemDrawTdSpeed_o *)sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v17, v18);
    byte_4B13226 = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode )
  {
    tdSpeedRangeLabelList = v6->fields.tdSpeedRangeLabelList;
    if ( !tdSpeedRangeLabelList )
      goto LABEL_54;
    if ( !tdSpeedRangeLabelList->max_length )
      goto LABEL_55;
    v20 = tdSpeedRangeLabelList->m_Items[0];
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
                                                       0LL);
    if ( !v20 )
      goto LABEL_54;
    UIRangeLabel__Set(v20, (System_String_o *)this, 0LL, 1, 0, 0LL);
    v21 = v6->fields.tdSpeedRangeLabelList;
    if ( !v21 )
      goto LABEL_54;
    if ( v21->max_length <= 1 )
      goto LABEL_55;
    v22 = v21->m_Items[1];
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12068/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
                                                       0LL);
    if ( !v22 )
      goto LABEL_54;
    UIRangeLabel__Set(v22, (System_String_o *)this, 0LL, 1, 0, 0LL);
    v23 = v6->fields.tdSpeedRangeLabelList;
    if ( !v23 )
      goto LABEL_54;
    if ( v23->max_length <= 2 )
LABEL_55:
      sub_1BCAA44(this, item);
    v24 = v23->m_Items[2];
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_TWICE"*/,
                                                       0LL);
    if ( !v24 )
      goto LABEL_54;
    UIRangeLabel__Set(v24, (System_String_o *)this, 0LL, 1, 0, 0LL);
    explanationLabel = v6->fields.explanationLabel;
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/,
                                                       0LL);
    if ( !explanationLabel )
      goto LABEL_54;
    UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
    if ( !byte_4B11133 )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, item, v26);
      byte_4B11133 = 1;
    }
    this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
      this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
    }
    m_CancellationTokenSource = (float *)this[2].fields.m_CancellationTokenSource;
    v28 = m_CancellationTokenSource[20];
    v29 = m_CancellationTokenSource[21];
    v30 = m_CancellationTokenSource[22];
    v31 = m_CancellationTokenSource[23];
    if ( !byte_4B11134 )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, item, v26);
      this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
      byte_4B11134 = 1;
    }
    if ( !LODWORD(this[2].fields.tdSpeedButtonSpriteList) )
    {
      j_il2cpp_runtime_class_init_0(this, item);
      this = (ServantStatusListViewItemDrawTdSpeed_o *)LocalizationManager_TypeInfo;
    }
    tdSpeedButtonList = v6->fields.tdSpeedButtonList;
    if ( !tdSpeedButtonList )
      goto LABEL_54;
    max_length = tdSpeedButtonList->max_length;
    if ( max_length >= 1 )
    {
      v34 = (float *)this[2].fields.m_CancellationTokenSource;
      v35 = 0;
      v36 = v34[24];
      v37 = v34[25];
      v38 = v34[26];
      v39 = v34[27];
      while ( 1 )
      {
        this = (ServantStatusListViewItemDrawTdSpeed_o *)ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(
                                                           item,
                                                           0LL);
        v40 = v6->fields.tdSpeedButtonList;
        if ( !v40 )
          break;
        if ( v35 >= v40->max_length )
          goto LABEL_55;
        v41 = (int)this;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)v40->m_Items[v35];
        if ( !this )
          break;
        UICommonButton__SetColliderEnable((UICommonButton_o *)this, v35 != v41, 1, 0LL);
        tdSpeedButtonSpriteList = v6->fields.tdSpeedButtonSpriteList;
        if ( !tdSpeedButtonSpriteList )
          break;
        if ( v35 >= tdSpeedButtonSpriteList->max_length )
          goto LABEL_55;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)tdSpeedButtonSpriteList->m_Items[v35];
        if ( !this )
          break;
        v43 = (System_String_o **)(v35 == v41 ? &StringLiteral_17653/*"btn_bg_21"*/ : &StringLiteral_17652/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)this, *v43, 0LL);
        v44 = v6->fields.tdSpeedRangeLabelList;
        if ( !v44 )
          break;
        if ( v35 >= v44->max_length )
          goto LABEL_55;
        this = (ServantStatusListViewItemDrawTdSpeed_o *)v44->m_Items[v35];
        v45 = v35 == v41 ? v37 : v29;
        v46 = v35 == v41 ? v36 : v28;
        v47 = v35 == v41 ? v38 : v30;
        v48 = v35 == v41 ? v39 : v31;
        if ( !this )
          break;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)this, *(UnityEngine_Color_o *)(&v45 - 1), 0LL);
        if ( max_length == ++v35 )
          return;
      }
LABEL_54:
      sub_1BCAA3C(this, item);
    }
  }
}