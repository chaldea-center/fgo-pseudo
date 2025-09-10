void CombineHelpListViewManager___cctor(const MethodInfo *method)
{
  struct CombineHelpInfo_array *v1; // x19
  CombineHelpInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  CombineHelpInfo_o *v8; // x20
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x3
  CombineHelpInfo_o *v11; // x20
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x3
  CombineHelpInfo_o *v14; // x20
  const MethodInfo *v15; // x5
  const MethodInfo *v16; // x3
  CombineHelpInfo_o *v17; // x20
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x3
  CombineHelpInfo_o *v20; // x20
  const MethodInfo *v21; // x5
  const MethodInfo *v22; // x3
  CombineHelpInfo_o *v23; // x20
  const MethodInfo *v24; // x5
  const MethodInfo *v25; // x3
  CombineHelpInfo_o *v26; // x20
  const MethodInfo *v27; // x5
  const MethodInfo *v28; // x3
  CombineHelpInfo_o *v29; // x20
  const MethodInfo *v30; // x5
  const MethodInfo *v31; // x3
  CombineHelpInfo_o *v32; // x20
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x3
  CombineHelpInfo_o *v35; // x20
  const MethodInfo *v36; // x5
  const MethodInfo *v37; // x3
  CombineHelpInfo_o *v38; // x20
  const MethodInfo *v39; // x5
  const MethodInfo *v40; // x3
  CombineHelpInfo_o *v41; // x20
  const MethodInfo *v42; // x5
  const MethodInfo *v43; // x3
  CombineHelpInfo_o *v44; // x20
  const MethodInfo *v45; // x5
  const MethodInfo *v46; // x3
  CombineHelpInfo_o *v47; // x20
  const MethodInfo *v48; // x5
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Array_o *v52; // x0
  System_RuntimeFieldHandle_o v53; // x1
  System_Array_o *v54; // x19
  struct CombineHelpListViewManager_StaticFields *static_fields; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  struct CombineHelpListViewManager_StaticFields *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w1
  struct CombineHelpListViewManager_StaticFields *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  struct CombineHelpListViewManager_StaticFields *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w1
  struct CombineHelpListViewManager_StaticFields *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x0

  if ( (byte_4C2B237 & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpInfo___TypeInfo);
    sub_1C2D490(&CombineHelpInfo_TypeInfo);
    sub_1C2D490(&CombineHelpListViewManager_TypeInfo);
    sub_1C2D490(&CombineHelpListViewManager_ItemKind___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__DA617C7DA2D7AF1918BC783DA92A42F0574C2DA2909E869D12CB5B78BE84C339);
    sub_1C2D490(&StringLiteral_3587/*"COMBINE_HELP_COMBINE_SKILL"*/);
    sub_1C2D490(&StringLiteral_20336/*"img_combine_12"*/);
    sub_1C2D490(&StringLiteral_3579/*"COMBINE_HELP_COMBINE_CLASS_BOARD"*/);
    sub_1C2D490(&StringLiteral_3585/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/);
    sub_1C2D490(&StringLiteral_14612/*"Tutorial/tutorial_alpha"*/);
    sub_1C2D490(&StringLiteral_3577/*"COMBINE_HELP_APPEND_SKILL"*/);
    sub_1C2D490(&StringLiteral_3589/*"COMBINE_HELP_COMBINE_SVT_EQ"*/);
    sub_1C2D490(&StringLiteral_3583/*"COMBINE_HELP_COMBINE_FRIENDSHIP_EXCEED"*/);
    sub_1C2D490(&StringLiteral_20341/*"img_combine_4"*/);
    sub_1C2D490(&StringLiteral_20340/*"img_combine_3"*/);
    sub_1C2D490(&StringLiteral_20332/*"img_combine_0"*/);
    sub_1C2D490(&StringLiteral_20337/*"img_combine_13"*/);
    sub_1C2D490(&StringLiteral_24215/*"tutorial_0006"*/);
    sub_1C2D490(&StringLiteral_20335/*"img_combine_11"*/);
    sub_1C2D490(&StringLiteral_20343/*"img_combine_6"*/);
    sub_1C2D490(&StringLiteral_3582/*"COMBINE_HELP_COMBINE_COSTUME"*/);
    sub_1C2D490(&StringLiteral_20344/*"img_combine_7"*/);
    sub_1C2D490(&StringLiteral_20345/*"img_combine_8"*/);
    sub_1C2D490(&StringLiteral_20339/*"img_combine_2"*/);
    sub_1C2D490(&StringLiteral_20342/*"img_combine_5"*/);
    sub_1C2D490(&StringLiteral_3580/*"COMBINE_HELP_COMBINE_CMD_CARD_EXCEED"*/);
    sub_1C2D490(&StringLiteral_14611/*"Tutorial/tutorial_0006"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_3586/*"COMBINE_HELP_COMBINE_NP"*/);
    sub_1C2D490(&StringLiteral_3578/*"COMBINE_HELP_COMBINE"*/);
    sub_1C2D490(&StringLiteral_3584/*"COMBINE_HELP_COMBINE_LIMIT"*/);
    sub_1C2D490(&StringLiteral_20338/*"img_combine_14"*/);
    sub_1C2D490(&StringLiteral_24216/*"tutorial_alpha"*/);
    sub_1C2D490(&StringLiteral_20334/*"img_combine_10"*/);
    sub_1C2D490(&StringLiteral_3562/*"COMBINE_APPEND_SKILL_EXCHANG"*/);
    sub_1C2D490(&StringLiteral_20346/*"img_combine_9"*/);
    sub_1C2D490(&StringLiteral_3588/*"COMBINE_HELP_COMBINE_SPECIAL_ASCENSION"*/);
    sub_1C2D490(&StringLiteral_3581/*"COMBINE_HELP_COMBINE_CMD_CODE"*/);
    sub_1C2D490(&StringLiteral_20333/*"img_combine_1"*/);
    byte_4C2B237 = 1;
  }
  v1 = (struct CombineHelpInfo_array *)sub_1C2D538(CombineHelpInfo___TypeInfo, 15);
  v2 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v2, 1, (System_String_o *)StringLiteral_3578/*"COMBINE_HELP_COMBINE"*/, (System_String_o *)StringLiteral_20333/*"img_combine_1"*/, 2, v3);
  if ( !v1 )
    sub_1C2D6EC(v4, v5);
  if ( v2 )
  {
    v4 = sub_1C2D5CC(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_50;
  v1->m_Items[0] = v2;
  sub_1C2D434((CGThumbnailListItem_o *)v1->m_Items, (int32_t)v2, v6, v7);
  v8 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v8, 2, (System_String_o *)StringLiteral_3587/*"COMBINE_HELP_COMBINE_SKILL"*/, (System_String_o *)StringLiteral_20339/*"img_combine_2"*/, 2, v9);
  if ( v8 )
  {
    v4 = sub_1C2D5CC(v8, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 1 )
    goto LABEL_50;
  v1->m_Items[1] = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[1], (int32_t)v8, v6, v10);
  v11 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v11, 3, (System_String_o *)StringLiteral_3589/*"COMBINE_HELP_COMBINE_SVT_EQ"*/, (System_String_o *)StringLiteral_20342/*"img_combine_5"*/, 3, v12);
  if ( v11 )
  {
    v4 = sub_1C2D5CC(v11, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 2 )
    goto LABEL_50;
  v1->m_Items[2] = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[2], (int32_t)v11, v6, v13);
  v14 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v14, 4, (System_String_o *)StringLiteral_3584/*"COMBINE_HELP_COMBINE_LIMIT"*/, (System_String_o *)StringLiteral_20341/*"img_combine_4"*/, 2, v15);
  if ( v14 )
  {
    v4 = sub_1C2D5CC(v14, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 3 )
    goto LABEL_50;
  v1->m_Items[3] = v14;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[3], (int32_t)v14, v6, v16);
  v17 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v17, 10, (System_String_o *)StringLiteral_3588/*"COMBINE_HELP_COMBINE_SPECIAL_ASCENSION"*/, (System_String_o *)StringLiteral_20334/*"img_combine_10"*/, 2, v18);
  if ( v17 )
  {
    v4 = sub_1C2D5CC(v17, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 4 )
    goto LABEL_50;
  v1->m_Items[4] = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[4], (int32_t)v17, v6, v19);
  v20 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v20, 9, (System_String_o *)StringLiteral_3583/*"COMBINE_HELP_COMBINE_FRIENDSHIP_EXCEED"*/, (System_String_o *)StringLiteral_20346/*"img_combine_9"*/, 2, v21);
  if ( v20 )
  {
    v4 = sub_1C2D5CC(v20, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 5 )
    goto LABEL_50;
  v1->m_Items[5] = v20;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[5], (int32_t)v20, v6, v22);
  v23 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v23, 8, (System_String_o *)StringLiteral_3581/*"COMBINE_HELP_COMBINE_CMD_CODE"*/, (System_String_o *)StringLiteral_20345/*"img_combine_8"*/, 2, v24);
  if ( v23 )
  {
    v4 = sub_1C2D5CC(v23, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 6 )
    goto LABEL_50;
  v1->m_Items[6] = v23;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[6], (int32_t)v23, v6, v25);
  v26 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v26, 11, (System_String_o *)StringLiteral_3580/*"COMBINE_HELP_COMBINE_CMD_CARD_EXCEED"*/, (System_String_o *)StringLiteral_20335/*"img_combine_11"*/, 2, v27);
  if ( v26 )
  {
    v4 = sub_1C2D5CC(v26, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 7 )
    goto LABEL_50;
  v1->m_Items[7] = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[7], (int32_t)v26, v6, v28);
  v29 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v29, 12, (System_String_o *)StringLiteral_3577/*"COMBINE_HELP_APPEND_SKILL"*/, (System_String_o *)StringLiteral_20336/*"img_combine_12"*/, 3, v30);
  if ( v29 )
  {
    v4 = sub_1C2D5CC(v29, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 8 )
    goto LABEL_50;
  v1->m_Items[8] = v29;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[8], (int32_t)v29, v6, v31);
  v32 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v32, 14, (System_String_o *)StringLiteral_3562/*"COMBINE_APPEND_SKILL_EXCHANG"*/, (System_String_o *)StringLiteral_20338/*"img_combine_14"*/, 2, v33);
  if ( v32 )
  {
    v4 = sub_1C2D5CC(v32, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 9 )
    goto LABEL_50;
  v1->m_Items[9] = v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[9], (int32_t)v32, v6, v34);
  v35 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v35, 5, (System_String_o *)StringLiteral_3586/*"COMBINE_HELP_COMBINE_NP"*/, (System_String_o *)StringLiteral_20340/*"img_combine_3"*/, 2, v36);
  if ( v35 )
  {
    v4 = sub_1C2D5CC(v35, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 0xA )
    goto LABEL_50;
  v1->m_Items[10] = v35;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[10], (int32_t)v35, v6, v37);
  v38 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v38, 6, (System_String_o *)StringLiteral_3585/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, (System_String_o *)StringLiteral_20344/*"img_combine_7"*/, 2, v39);
  if ( v38 )
  {
    v4 = sub_1C2D5CC(v38, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 0xB )
    goto LABEL_50;
  v1->m_Items[11] = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[11], (int32_t)v38, v6, v40);
  v41 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v41, 7, (System_String_o *)StringLiteral_3582/*"COMBINE_HELP_COMBINE_COSTUME"*/, (System_String_o *)StringLiteral_20343/*"img_combine_6"*/, 2, v42);
  if ( v41 )
  {
    v4 = sub_1C2D5CC(v41, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 0xC )
    goto LABEL_50;
  v1->m_Items[12] = v41;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[12], (int32_t)v41, v6, v43);
  v44 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v44, 13, (System_String_o *)StringLiteral_3579/*"COMBINE_HELP_COMBINE_CLASS_BOARD"*/, (System_String_o *)StringLiteral_20337/*"img_combine_13"*/, 3, v45);
  if ( v44 )
  {
    v4 = sub_1C2D5CC(v44, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_51;
  }
  if ( LODWORD(v1->max_length) <= 0xD )
    goto LABEL_50;
  v1->m_Items[13] = v44;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[13], (int32_t)v44, v6, v46);
  v47 = (CombineHelpInfo_o *)sub_1C2D6DC(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v47, 15, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20332/*"img_combine_0"*/, 1, v48);
  if ( v47 )
  {
    v4 = sub_1C2D5CC(v47, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_51:
      v74 = sub_1C2D710(v4);
      sub_1C2D5B8(v74, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 0xE )
LABEL_50:
    sub_1C2D6F4(v4, v5, v6);
  v1->m_Items[14] = v47;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[14], (int32_t)v47, v6, v49);
  CombineHelpListViewManager_TypeInfo->static_fields->itemInfo = v1;
  sub_1C2D434((CGThumbnailListItem_o *)CombineHelpListViewManager_TypeInfo->static_fields, (int32_t)v1, v50, v51);
  v52 = (System_Array_o *)sub_1C2D538(CombineHelpListViewManager_ItemKind___TypeInfo, 14);
  v53.fields.value = Field__PrivateImplementationDetails__DA617C7DA2D7AF1918BC783DA92A42F0574C2DA2909E869D12CB5B78BE84C339;
  v54 = v52;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v52, v53, 0);
  static_fields = CombineHelpListViewManager_TypeInfo->static_fields;
  static_fields->KindList = (struct CombineHelpListViewManager_ItemKind_array *)v54;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->KindList, (int32_t)v54, v56, v57);
  v58 = StringLiteral_14611/*"Tutorial/tutorial_0006"*/;
  v59 = CombineHelpListViewManager_TypeInfo->static_fields;
  v59->HELP_BASE_SPRITE_PATH = (struct System_String_o *)StringLiteral_14611/*"Tutorial/tutorial_0006"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v59->HELP_BASE_SPRITE_PATH, v58, v60, v61);
  v62 = StringLiteral_24215/*"tutorial_0006"*/;
  v63 = CombineHelpListViewManager_TypeInfo->static_fields;
  v63->HELP_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_24215/*"tutorial_0006"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v63->HELP_BASE_SPRITE_NAME, v62, v64, v65);
  v66 = StringLiteral_14612/*"Tutorial/tutorial_alpha"*/;
  v67 = CombineHelpListViewManager_TypeInfo->static_fields;
  v67->HELP_BASE_ALPHA_PATH = (struct System_String_o *)StringLiteral_14612/*"Tutorial/tutorial_alpha"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v67->HELP_BASE_ALPHA_PATH, v66, v68, v69);
  v70 = StringLiteral_24216/*"tutorial_alpha"*/;
  v71 = CombineHelpListViewManager_TypeInfo->static_fields;
  v71->HELP_BASE_ALPHA_NAME = (struct System_String_o *)StringLiteral_24216/*"tutorial_alpha"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v71->HELP_BASE_ALPHA_NAME, v70, v72, v73);
}


void CombineHelpListViewManager___ctor(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CombineHelpListViewManager__Callback(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct CombineHelpListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


void CombineHelpListViewManager__CloseHelpDialog(
        CombineHelpListViewManager_o *this,
        CombineHelpListViewManager_CallbackFunc2_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CombineHelpMenu_o *baseDialog; // x20
  CombineHelpMenu_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4C2B231 & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpMenu_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_CombineHelpListViewManager_WaitFadeOut__);
    byte_4C2B231 = 1;
  }
  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v7 = (CombineHelpMenu_CallbackFunc_o *)sub_1C2D6DC(CombineHelpMenu_CallbackFunc_TypeInfo);
  CombineHelpMenu_CallbackFunc___ctor(v7, (Il2CppObject *)this, Method_CombineHelpListViewManager_WaitFadeOut__, v8);
  if ( !baseDialog )
    sub_1C2D6EC(v9, v10);
  CombineHelpMenu__Close(baseDialog, v7, v11);
}


void CombineHelpListViewManager__CreateList(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  BaseDialog_o *baseDialog; // x0
  CombineHelpListViewManager_c *v7; // x0
  struct CombineHelpListViewManager_ItemKind_array *KindList; // x24
  int32_t max_length; // w20
  __int64 v10; // x2
  unsigned __int64 v11; // x26
  unsigned __int8 v12; // w27
  __int64 v13; // x28
  int32_t v14; // w21
  System_Collections_Generic_Dictionary_UIPanel__int__c *klass; // x8
  int namespaze; // w9
  int v17; // w10
  __int64 v18; // x20
  BalanceConfig_c *v19; // x0
  int32_t ClassBoardReleaseQuestId; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  __int64 v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v31; // x8

  if ( (byte_4C2B230 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CombineHelpListViewItem_TypeInfo);
    sub_1C2D490(&CombineHelpListViewManager_TypeInfo);
    sub_1C2D490(&CombineRootComponent_TypeInfo);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C2B230 = 1;
  }
  this->fields.callbackFunc2 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v2, v3);
  baseDialog = (BaseDialog_o *)this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_43;
  BaseDialog__Open(baseDialog, 0, 0, 0);
  v7 = CombineHelpListViewManager_TypeInfo;
  if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
    v7 = CombineHelpListViewManager_TypeInfo;
  }
  KindList = v7->static_fields->KindList;
  if ( KindList )
    max_length = KindList->max_length;
  else
    max_length = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  baseDialog = (BaseDialog_o *)CombineRootComponent__IsEnableSpecialAscension(0);
  if ( max_length >= 1 )
  {
    if ( KindList )
    {
      v11 = 0;
      v12 = (unsigned __int8)baseDialog ^ 1;
      v13 = (unsigned int)max_length;
      while ( 1 )
      {
        if ( v11 >= LODWORD(KindList->max_length) )
LABEL_42:
          sub_1C2D6F4(baseDialog, v5, v10);
        baseDialog = (BaseDialog_o *)CombineHelpListViewManager_TypeInfo;
        v14 = KindList->m_Items[v11];
        if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
          baseDialog = (BaseDialog_o *)CombineHelpListViewManager_TypeInfo;
        }
        klass = baseDialog[1].fields.panelDepthList->klass;
        if ( !klass )
          break;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( namespaze == v17 )
              goto LABEL_42;
            v18 = *((_QWORD *)&klass->_1.byval_arg.data + v17);
            if ( !v18 )
              goto LABEL_43;
            if ( *(_DWORD *)(v18 + 16) == v14 )
              break;
            if ( namespaze == ++v17 )
              goto LABEL_40;
          }
          if ( ((v14 == 10) & v12) == 0 )
          {
            if ( v14 != 13 )
              goto LABEL_34;
            v19 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v19 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v19->static_fields->ClassBoardReleaseQuestId;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            baseDialog = (BaseDialog_o *)CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0);
            if ( ((unsigned __int8)baseDialog & 1) != 0 )
            {
LABEL_34:
              itemList = this->fields.itemList;
              if ( !itemList )
                break;
              size = itemList->fields._size;
              v23 = sub_1C2D6DC(CombineHelpListViewItem_TypeInfo);
              ListViewItem___ctor_43566844((ListViewItem_o *)v23, size, 0);
              *(_QWORD *)(v23 + 120) = v18;
              sub_1C2D434((CGThumbnailListItem_o *)(v23 + 120), v18, v24, v25);
              *(_BYTE *)(v23 + 128) = 1;
              baseDialog = (BaseDialog_o *)this->fields.itemList;
              if ( !baseDialog )
                break;
              m_CachedPtr = baseDialog->fields.m_CachedPtr;
              v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++HIDWORD(baseDialog->fields.m_CancellationTokenSource);
              if ( !m_CachedPtr )
                break;
              m_CancellationTokenSource_low = SLODWORD(baseDialog->fields.m_CancellationTokenSource);
              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)baseDialog,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
              }
              else
              {
                v31 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                LODWORD(baseDialog->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v31 + 32) = v23;
                sub_1C2D434((CGThumbnailListItem_o *)(v31 + 32), v23, v26, v27);
              }
            }
          }
        }
LABEL_40:
        if ( ++v11 == v13 )
          goto LABEL_41;
      }
    }
LABEL_43:
    sub_1C2D6EC(baseDialog, v5);
  }
LABEL_41:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


CombineHelpListViewItem_o *CombineHelpListViewManager__GetItem(
        CombineHelpListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineHelpListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C2B232 & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B232 = 1;
  }
  result = (CombineHelpListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineHelpListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CombineHelpListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (CombineHelpListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CombineHelpListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void CombineHelpListViewManager__LoadBaseSprite(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x21
  CombineHelpListViewManager_c *v11; // x8
  struct System_String_o *HELP_BASE_SPRITE_PATH; // x1
  const MethodInfo *v13; // x3
  struct System_String_o *HELP_BASE_ALPHA_PATH; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_array *v17; // x19
  System_Action_o *v18; // x21

  if ( (byte_4C2B22E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CombineHelpListViewManager_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Method_CombineHelpListViewManager___c__DisplayClass24_0__LoadBaseSprite_b__0__);
    sub_1C2D490(&CombineHelpListViewManager___c__DisplayClass24_0_TypeInfo);
    byte_4C2B22E = 1;
  }
  v3 = sub_1C2D6DC(CombineHelpListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  if ( this->fields.initMode )
    return;
  v4 = sub_1C2D538(string___TypeInfo, 2);
  v10 = v4;
  v11 = CombineHelpListViewManager_TypeInfo;
  if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
    v11 = CombineHelpListViewManager_TypeInfo;
  }
  if ( !v10 )
LABEL_13:
    sub_1C2D6EC(v4, v5);
  if ( !*(_DWORD *)(v10 + 24)
    || (HELP_BASE_SPRITE_PATH = v11->static_fields->HELP_BASE_SPRITE_PATH,
        *(_QWORD *)(v10 + 32) = HELP_BASE_SPRITE_PATH,
        sub_1C2D434((CGThumbnailListItem_o *)(v10 + 32), (int32_t)HELP_BASE_SPRITE_PATH, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u) )
  {
    sub_1C2D6F4(v4, v5, v8);
  }
  HELP_BASE_ALPHA_PATH = CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH;
  *(_QWORD *)(v10 + 40) = HELP_BASE_ALPHA_PATH;
  sub_1C2D434((CGThumbnailListItem_o *)(v10 + 40), (int32_t)HELP_BASE_ALPHA_PATH, v8, v13);
  *(_QWORD *)(v3 + 24) = v10;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), v10, v15, v16);
  this->fields.initMode = 1;
  v17 = *(System_String_array **)(v3 + 24);
  v18 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v3,
    Method_CombineHelpListViewManager___c__DisplayClass24_0__LoadBaseSprite_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40319912(v17, v18, 1, 0);
}


void CombineHelpListViewManager__OnMoveEnd(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4C2B236 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B236 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject )
          goto LABEL_17;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( !gameObject )
          goto LABEL_17;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.element_class)(
            gameObject,
            1,
            gameObject->klass[1]._1.castClass);
          return;
        }
LABEL_17:
        sub_1C2D6EC(gameObject, v7);
      }
    }
  }
}


void CombineHelpListViewManager__ReleaseBaseSprite(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  CombineHelpListViewManager_c *v3; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  if ( (byte_4C2B22F & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CombineHelpListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4C2B22F = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v3 = CombineHelpListViewManager_TypeInfo;
    if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
      v3 = CombineHelpListViewManager_TypeInfo;
    }
    HELP_BASE_SPRITE_PATH = v3->static_fields->HELP_BASE_SPRITE_PATH;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0);
    AssetManager__releaseAssetStorage(CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0);
    BaseWindow = this->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0)) == 0
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0 )
    {
      sub_1C2D6EC(BaseWindow, v5);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))BaseWindow->klass[1].vtable._3_ToString.method)(
      BaseWindow,
      0,
      BaseWindow->klass[2]._1.image);
  }
  this->fields.initMode = 0;
}


// local variable allocation has failed, the output may be wrong!
void CombineHelpListViewManager__RequestListObject(
        CombineHelpListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2B234 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineHelpListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineHelpListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineHelpListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2B234 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_CombineHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineHelpListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      CombineHelpListViewObject__Init_48270748((CombineHelpListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineHelpListViewManager__RequestListObject_48270832(
        CombineHelpListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2B235 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineHelpListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineHelpListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineHelpListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2B235 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_CombineHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineHelpListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      CombineHelpListViewObject__Init_48271336((CombineHelpListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__Dispose__);
  }
}


void CombineHelpListViewManager__SetObjectItem(
        CombineHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4C2B233 & 1) == 0 )
  {
    this = (CombineHelpListViewManager_o *)sub_1C2D490(&CombineHelpListViewObject_TypeInfo);
    byte_4C2B233 = 1;
  }
  if ( !obj
    || (naturalAligment = CombineHelpListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CombineHelpListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineHelpListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  CombineHelpListViewObject__Init_48270152((CombineHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void CombineHelpListViewManager__WaitFadeOut(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct CombineHelpListViewManager_CallbackFunc2_o *callbackFunc2; // x19

  callbackFunc2 = this->fields.callbackFunc2;
  this->fields.callbackFunc2 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v2, v3);
  if ( callbackFunc2 )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
      callbackFunc2->fields.method_code,
      callbackFunc2->fields.method);
}


void CombineHelpListViewManager__add_callbackFunc(
        CombineHelpListViewManager_o *this,
        CombineHelpListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineHelpListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineHelpListViewManager_o *v10; // x0
  CombineHelpListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C2B228 & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpListViewManager_CallbackFunc_TypeInfo);
    byte_4C2B228 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CombineHelpListViewManager_CallbackFunc_c *)v7->klass != CombineHelpListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineHelpListViewManager__remove_callbackFunc(v10, v11, v12);
}


void CombineHelpListViewManager__add_callbackFunc2(
        CombineHelpListViewManager_o *this,
        CombineHelpListViewManager_CallbackFunc2_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct CombineHelpListViewManager_CallbackFunc2_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineHelpListViewManager_o *v10; // x0
  CombineHelpListViewManager_CallbackFunc2_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C2B22A & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpListViewManager_CallbackFunc2_TypeInfo);
    byte_4C2B22A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CombineHelpListViewManager_CallbackFunc2_c *)v7->klass != CombineHelpListViewManager_CallbackFunc2_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineHelpListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineHelpListViewObject__o *CombineHelpListViewManager__get_ClippingObjectList(
        CombineHelpListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C2B22D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineHelpListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CombineHelpListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B22D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)CombineHelpListViewObject__GetItem((CombineHelpListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineHelpListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineHelpListViewObject__o *CombineHelpListViewManager__get_ObjectList(
        CombineHelpListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C2B22C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineHelpListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CombineHelpListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B22C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineHelpListViewObject__o *)v3;
}


void CombineHelpListViewManager__remove_callbackFunc(
        CombineHelpListViewManager_o *this,
        CombineHelpListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineHelpListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineHelpListViewManager_o *v10; // x0
  CombineHelpListViewManager_CallbackFunc2_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C2B229 & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpListViewManager_CallbackFunc_TypeInfo);
    byte_4C2B229 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CombineHelpListViewManager_CallbackFunc_c *)v7->klass != CombineHelpListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineHelpListViewManager__add_callbackFunc2(v10, v11, v12);
}


void CombineHelpListViewManager__remove_callbackFunc2(
        CombineHelpListViewManager_o *this,
        CombineHelpListViewManager_CallbackFunc2_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct CombineHelpListViewManager_CallbackFunc2_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineHelpListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C2B22B & 1) == 0 )
  {
    sub_1C2D490(&CombineHelpListViewManager_CallbackFunc2_TypeInfo);
    byte_4C2B22B = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CombineHelpListViewManager_CallbackFunc2_c *)v7->klass != CombineHelpListViewManager_CallbackFunc2_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineHelpListViewManager__get_ObjectList(v10, v11);
}


void CombineHelpListViewManager_CallbackFunc___ctor(
        CombineHelpListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A764EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A764AC;
}


System_IAsyncResult_o *CombineHelpListViewManager_CallbackFunc__BeginInvoke(
        CombineHelpListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void CombineHelpListViewManager_CallbackFunc__EndInvoke(
        CombineHelpListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void CombineHelpListViewManager_CallbackFunc__Invoke(
        CombineHelpListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void CombineHelpListViewManager_CallbackFunc2___ctor(
        CombineHelpListViewManager_CallbackFunc2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A76540;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A76500;
}


System_IAsyncResult_o *CombineHelpListViewManager_CallbackFunc2__BeginInvoke(
        CombineHelpListViewManager_CallbackFunc2_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void CombineHelpListViewManager_CallbackFunc2__EndInvoke(
        CombineHelpListViewManager_CallbackFunc2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void CombineHelpListViewManager_CallbackFunc2__Invoke(
        CombineHelpListViewManager_CallbackFunc2_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void CombineHelpListViewManager___c__DisplayClass24_0___ctor(
        CombineHelpListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineHelpListViewManager___c__DisplayClass24_0___LoadBaseSprite_b__0(
        CombineHelpListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineHelpListViewManager___c__DisplayClass24_0_o *v3; // x19
  struct CombineHelpListViewManager_o *_4__this; // x8
  struct System_String_array *path; // x8
  System_String_o *v6; // x20
  AssetData_o *v7; // x20
  struct System_String_array *v8; // x8
  CombineHelpListViewManager___c__DisplayClass24_0_o *v9; // x20
  struct CombineHelpListViewManager_o *v10; // x8
  CombineHelpListViewManager___c__DisplayClass24_0_o *v11; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Shader_o *v13; // x24
  UnityEngine_Material_o *v14; // x22
  struct CombineHelpListViewManager_o *v15; // x8
  CombineHelpListViewManager_c *v16; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x19

  v3 = this;
  if ( (byte_4C2B238 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&CombineHelpListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&StringLiteral_4932/*"Custom/SpriteWithMask"*/);
    this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)sub_1C2D490(&StringLiteral_16265/*"_MaskTex"*/);
    byte_4C2B238 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  if ( _4__this->fields.initMode == 1 )
  {
    path = v3->fields.path;
    if ( !path )
      goto LABEL_27;
    if ( !LODWORD(path->max_length) )
      goto LABEL_28;
    v6 = path->m_Items[0];
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)AssetManager__getAssetStorage(v6, 0);
    v7 = (AssetData_o *)this;
    if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
    if ( !v7 )
      goto LABEL_27;
    this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)AssetData__GetObject_object__51051712(
                                                                   v7,
                                                                   CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_SPRITE_NAME,
                                                                   (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
    v8 = v3->fields.path;
    if ( !v8 )
      goto LABEL_27;
    if ( LODWORD(v8->max_length) <= 1 )
LABEL_28:
      sub_1C2D6F4(this, method, v2);
    v9 = this;
    this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)AssetManager__getAssetStorage(v8->m_Items[1], 0);
    if ( this )
    {
      this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)AssetData__GetObject_object__51051712(
                                                                     (AssetData_o *)this,
                                                                     CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_NAME,
                                                                     (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
      v10 = v3->fields.__4__this;
      if ( v10 )
      {
        v11 = this;
        this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)v10->fields.BaseWindow;
        if ( this )
        {
          this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0);
          if ( this )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UITexture___);
            v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4932/*"Custom/SpriteWithMask"*/, 0);
            v14 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
            UnityEngine_Material___ctor(v14, v13, 0);
            if ( Component_object )
            {
              this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
                                                                             Component_object,
                                                                             v14,
                                                                             Component_object->klass->vtable[25].method);
              if ( v14 )
              {
                UnityEngine_Material__set_mainTexture(v14, (UnityEngine_Texture_o *)v9, 0);
                UnityEngine_Material__SetTexture(
                  v14,
                  (System_String_o *)StringLiteral_16265/*"_MaskTex"*/,
                  (UnityEngine_Texture_o *)v11,
                  0);
                v15 = v3->fields.__4__this;
                if ( v15 )
                {
                  v15->fields.initMode = 2;
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C2D6EC(this, method);
  }
  v16 = CombineHelpListViewManager_TypeInfo;
  if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
    v16 = CombineHelpListViewManager_TypeInfo;
  }
  HELP_BASE_SPRITE_PATH = v16->static_fields->HELP_BASE_SPRITE_PATH;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0);
  AssetManager__releaseAssetStorage(CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0);
}