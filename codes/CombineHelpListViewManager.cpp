void __fastcall CombineHelpListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  struct CombineHelpInfo_array *v40; // x19
  CombineHelpInfo_o *v41; // x20
  const MethodInfo *v42; // x5
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  const MethodInfo *v46; // x3
  CombineHelpInfo_o *v47; // x20
  const MethodInfo *v48; // x5
  const MethodInfo *v49; // x3
  CombineHelpInfo_o *v50; // x20
  const MethodInfo *v51; // x5
  const MethodInfo *v52; // x3
  CombineHelpInfo_o *v53; // x20
  const MethodInfo *v54; // x5
  const MethodInfo *v55; // x3
  CombineHelpInfo_o *v56; // x20
  const MethodInfo *v57; // x5
  const MethodInfo *v58; // x3
  CombineHelpInfo_o *v59; // x20
  const MethodInfo *v60; // x5
  const MethodInfo *v61; // x3
  CombineHelpInfo_o *v62; // x20
  const MethodInfo *v63; // x5
  const MethodInfo *v64; // x3
  CombineHelpInfo_o *v65; // x20
  const MethodInfo *v66; // x5
  const MethodInfo *v67; // x3
  CombineHelpInfo_o *v68; // x20
  const MethodInfo *v69; // x5
  const MethodInfo *v70; // x3
  CombineHelpInfo_o *v71; // x20
  const MethodInfo *v72; // x5
  const MethodInfo *v73; // x3
  CombineHelpInfo_o *v74; // x20
  const MethodInfo *v75; // x5
  const MethodInfo *v76; // x3
  CombineHelpInfo_o *v77; // x20
  const MethodInfo *v78; // x5
  const MethodInfo *v79; // x3
  CombineHelpInfo_o *v80; // x20
  const MethodInfo *v81; // x5
  const MethodInfo *v82; // x3
  CombineHelpInfo_o *v83; // x20
  const MethodInfo *v84; // x5
  const MethodInfo *v85; // x3
  CombineHelpInfo_o *v86; // x20
  const MethodInfo *v87; // x5
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_Array_o *v91; // x0
  System_Array_o *v92; // x19
  struct CombineHelpListViewManager_StaticFields *static_fields; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t v96; // w1
  struct CombineHelpListViewManager_StaticFields *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  struct CombineHelpListViewManager_StaticFields *v101; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  int32_t v104; // w1
  struct CombineHelpListViewManager_StaticFields *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w1
  struct CombineHelpListViewManager_StaticFields *v109; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  __int64 v112; // x0
  System_RuntimeFieldHandle_o v113; // 0:w1.4

  if ( (byte_4B4880F & 1) == 0 )
  {
    sub_1BDB878(&CombineHelpInfo___TypeInfo, v1);
    sub_1BDB878(&CombineHelpInfo_TypeInfo, v2);
    sub_1BDB878(&CombineHelpListViewManager_TypeInfo, v3);
    sub_1BDB878(&CombineHelpListViewManager_ItemKind___TypeInfo, v4);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__DA617C7DA2D7AF1918BC783DA92A42F0574C2DA2909E869D12CB5B78BE84C339,
      v5);
    sub_1BDB878(&StringLiteral_3626/*"COMBINE_HELP_COMBINE_SKILL"*/, v6);
    sub_1BDB878(&StringLiteral_20366/*"img_combine_12"*/, v7);
    sub_1BDB878(&StringLiteral_3618/*"COMBINE_HELP_COMBINE_CLASS_BOARD"*/, v8);
    sub_1BDB878(&StringLiteral_3624/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, v9);
    sub_1BDB878(&StringLiteral_14584/*"Tutorial/tutorial_alpha"*/, v10);
    sub_1BDB878(&StringLiteral_3616/*"COMBINE_HELP_APPEND_SKILL"*/, v11);
    sub_1BDB878(&StringLiteral_3628/*"COMBINE_HELP_COMBINE_SVT_EQ"*/, v12);
    sub_1BDB878(&StringLiteral_3622/*"COMBINE_HELP_COMBINE_FRIENDSHIP_EXCEED"*/, v13);
    sub_1BDB878(&StringLiteral_20371/*"img_combine_4"*/, v14);
    sub_1BDB878(&StringLiteral_20370/*"img_combine_3"*/, v15);
    sub_1BDB878(&StringLiteral_20362/*"img_combine_0"*/, v16);
    sub_1BDB878(&StringLiteral_20367/*"img_combine_13"*/, v17);
    sub_1BDB878(&StringLiteral_24289/*"tutorial_0006"*/, v18);
    sub_1BDB878(&StringLiteral_20365/*"img_combine_11"*/, v19);
    sub_1BDB878(&StringLiteral_20373/*"img_combine_6"*/, v20);
    sub_1BDB878(&StringLiteral_3621/*"COMBINE_HELP_COMBINE_COSTUME"*/, v21);
    sub_1BDB878(&StringLiteral_20374/*"img_combine_7"*/, v22);
    sub_1BDB878(&StringLiteral_20375/*"img_combine_8"*/, v23);
    sub_1BDB878(&StringLiteral_20369/*"img_combine_2"*/, v24);
    sub_1BDB878(&StringLiteral_20372/*"img_combine_5"*/, v25);
    sub_1BDB878(&StringLiteral_3619/*"COMBINE_HELP_COMBINE_CMD_CARD_EXCEED"*/, v26);
    sub_1BDB878(&StringLiteral_14583/*"Tutorial/tutorial_0006"*/, v27);
    sub_1BDB878(&StringLiteral_1/*""*/, v28);
    sub_1BDB878(&StringLiteral_3625/*"COMBINE_HELP_COMBINE_NP"*/, v29);
    sub_1BDB878(&StringLiteral_3617/*"COMBINE_HELP_COMBINE"*/, v30);
    sub_1BDB878(&StringLiteral_3623/*"COMBINE_HELP_COMBINE_LIMIT"*/, v31);
    sub_1BDB878(&StringLiteral_20368/*"img_combine_14"*/, v32);
    sub_1BDB878(&StringLiteral_24290/*"tutorial_alpha"*/, v33);
    sub_1BDB878(&StringLiteral_20364/*"img_combine_10"*/, v34);
    sub_1BDB878(&StringLiteral_3601/*"COMBINE_APPEND_SKILL_EXCHANG"*/, v35);
    sub_1BDB878(&StringLiteral_20376/*"img_combine_9"*/, v36);
    sub_1BDB878(&StringLiteral_3627/*"COMBINE_HELP_COMBINE_SPECIAL_ASCENSION"*/, v37);
    sub_1BDB878(&StringLiteral_3620/*"COMBINE_HELP_COMBINE_CMD_CODE"*/, v38);
    sub_1BDB878(&StringLiteral_20363/*"img_combine_1"*/, v39);
    byte_4B4880F = 1;
  }
  v40 = (struct CombineHelpInfo_array *)sub_1BDB920(CombineHelpInfo___TypeInfo, 15LL);
  v41 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v41, 1, (System_String_o *)StringLiteral_3617/*"COMBINE_HELP_COMBINE"*/, (System_String_o *)StringLiteral_20363/*"img_combine_1"*/, 2, v42);
  if ( !v40 )
    sub_1BDBAD4(v43, v44);
  if ( v41 )
  {
    v43 = sub_1BDB9B4(v41, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( !v40->max_length )
    goto LABEL_50;
  v40->m_Items[0] = v41;
  sub_1BDB81C((CGThumbnailListItem_o *)v40->m_Items, (int32_t)v41, v45, v46);
  v47 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v47, 2, (System_String_o *)StringLiteral_3626/*"COMBINE_HELP_COMBINE_SKILL"*/, (System_String_o *)StringLiteral_20369/*"img_combine_2"*/, 2, v48);
  if ( v47 )
  {
    v43 = sub_1BDB9B4(v47, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 1 )
    goto LABEL_50;
  v40->m_Items[1] = v47;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[1], (int32_t)v47, v45, v49);
  v50 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v50, 3, (System_String_o *)StringLiteral_3628/*"COMBINE_HELP_COMBINE_SVT_EQ"*/, (System_String_o *)StringLiteral_20372/*"img_combine_5"*/, 3, v51);
  if ( v50 )
  {
    v43 = sub_1BDB9B4(v50, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 2 )
    goto LABEL_50;
  v40->m_Items[2] = v50;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[2], (int32_t)v50, v45, v52);
  v53 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v53, 4, (System_String_o *)StringLiteral_3623/*"COMBINE_HELP_COMBINE_LIMIT"*/, (System_String_o *)StringLiteral_20371/*"img_combine_4"*/, 2, v54);
  if ( v53 )
  {
    v43 = sub_1BDB9B4(v53, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 3 )
    goto LABEL_50;
  v40->m_Items[3] = v53;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[3], (int32_t)v53, v45, v55);
  v56 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v56, 10, (System_String_o *)StringLiteral_3627/*"COMBINE_HELP_COMBINE_SPECIAL_ASCENSION"*/, (System_String_o *)StringLiteral_20364/*"img_combine_10"*/, 2, v57);
  if ( v56 )
  {
    v43 = sub_1BDB9B4(v56, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 4 )
    goto LABEL_50;
  v40->m_Items[4] = v56;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[4], (int32_t)v56, v45, v58);
  v59 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v59, 9, (System_String_o *)StringLiteral_3622/*"COMBINE_HELP_COMBINE_FRIENDSHIP_EXCEED"*/, (System_String_o *)StringLiteral_20376/*"img_combine_9"*/, 2, v60);
  if ( v59 )
  {
    v43 = sub_1BDB9B4(v59, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 5 )
    goto LABEL_50;
  v40->m_Items[5] = v59;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[5], (int32_t)v59, v45, v61);
  v62 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v62, 8, (System_String_o *)StringLiteral_3620/*"COMBINE_HELP_COMBINE_CMD_CODE"*/, (System_String_o *)StringLiteral_20375/*"img_combine_8"*/, 2, v63);
  if ( v62 )
  {
    v43 = sub_1BDB9B4(v62, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 6 )
    goto LABEL_50;
  v40->m_Items[6] = v62;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[6], (int32_t)v62, v45, v64);
  v65 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v65, 11, (System_String_o *)StringLiteral_3619/*"COMBINE_HELP_COMBINE_CMD_CARD_EXCEED"*/, (System_String_o *)StringLiteral_20365/*"img_combine_11"*/, 2, v66);
  if ( v65 )
  {
    v43 = sub_1BDB9B4(v65, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 7 )
    goto LABEL_50;
  v40->m_Items[7] = v65;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[7], (int32_t)v65, v45, v67);
  v68 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v68, 12, (System_String_o *)StringLiteral_3616/*"COMBINE_HELP_APPEND_SKILL"*/, (System_String_o *)StringLiteral_20366/*"img_combine_12"*/, 3, v69);
  if ( v68 )
  {
    v43 = sub_1BDB9B4(v68, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 8 )
    goto LABEL_50;
  v40->m_Items[8] = v68;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[8], (int32_t)v68, v45, v70);
  v71 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v71, 14, (System_String_o *)StringLiteral_3601/*"COMBINE_APPEND_SKILL_EXCHANG"*/, (System_String_o *)StringLiteral_20368/*"img_combine_14"*/, 2, v72);
  if ( v71 )
  {
    v43 = sub_1BDB9B4(v71, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 9 )
    goto LABEL_50;
  v40->m_Items[9] = v71;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[9], (int32_t)v71, v45, v73);
  v74 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v74, 5, (System_String_o *)StringLiteral_3625/*"COMBINE_HELP_COMBINE_NP"*/, (System_String_o *)StringLiteral_20370/*"img_combine_3"*/, 2, v75);
  if ( v74 )
  {
    v43 = sub_1BDB9B4(v74, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 0xA )
    goto LABEL_50;
  v40->m_Items[10] = v74;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[10], (int32_t)v74, v45, v76);
  v77 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v77, 6, (System_String_o *)StringLiteral_3624/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, (System_String_o *)StringLiteral_20374/*"img_combine_7"*/, 2, v78);
  if ( v77 )
  {
    v43 = sub_1BDB9B4(v77, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 0xB )
    goto LABEL_50;
  v40->m_Items[11] = v77;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[11], (int32_t)v77, v45, v79);
  v80 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v80, 7, (System_String_o *)StringLiteral_3621/*"COMBINE_HELP_COMBINE_COSTUME"*/, (System_String_o *)StringLiteral_20373/*"img_combine_6"*/, 2, v81);
  if ( v80 )
  {
    v43 = sub_1BDB9B4(v80, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 0xC )
    goto LABEL_50;
  v40->m_Items[12] = v80;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[12], (int32_t)v80, v45, v82);
  v83 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v83, 13, (System_String_o *)StringLiteral_3618/*"COMBINE_HELP_COMBINE_CLASS_BOARD"*/, (System_String_o *)StringLiteral_20367/*"img_combine_13"*/, 3, v84);
  if ( v83 )
  {
    v43 = sub_1BDB9B4(v83, v40->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_51;
  }
  if ( v40->max_length <= 0xD )
    goto LABEL_50;
  v40->m_Items[13] = v83;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[13], (int32_t)v83, v45, v85);
  v86 = (CombineHelpInfo_o *)sub_1BDBAC4(CombineHelpInfo_TypeInfo);
  CombineHelpInfo___ctor(v86, 15, (System_String_o *)StringLiteral_1/*""*/, (System_String_o *)StringLiteral_20362/*"img_combine_0"*/, 1, v87);
  if ( v86 )
  {
    v43 = sub_1BDB9B4(v86, v40->obj.klass->_1.element_class);
    if ( !v43 )
    {
LABEL_51:
      v112 = sub_1BDBAF8(v43);
      sub_1BDB9A0(v112, 0LL);
    }
  }
  if ( v40->max_length <= 0xE )
LABEL_50:
    sub_1BDBADC(v43, v44, v45);
  v40->m_Items[14] = v86;
  sub_1BDB81C((CGThumbnailListItem_o *)&v40->m_Items[14], (int32_t)v86, v45, v88);
  CombineHelpListViewManager_TypeInfo->static_fields->itemInfo = v40;
  sub_1BDB81C((CGThumbnailListItem_o *)CombineHelpListViewManager_TypeInfo->static_fields, (int32_t)v40, v89, v90);
  v91 = (System_Array_o *)sub_1BDB920(CombineHelpListViewManager_ItemKind___TypeInfo, 14LL);
  v113.fields.value = Field__PrivateImplementationDetails__DA617C7DA2D7AF1918BC783DA92A42F0574C2DA2909E869D12CB5B78BE84C339;
  v92 = v91;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v91, v113, 0LL);
  static_fields = CombineHelpListViewManager_TypeInfo->static_fields;
  static_fields->KindList = (struct CombineHelpListViewManager_ItemKind_array *)v92;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->KindList, (int32_t)v92, v94, v95);
  v96 = StringLiteral_14583/*"Tutorial/tutorial_0006"*/;
  v97 = CombineHelpListViewManager_TypeInfo->static_fields;
  v97->HELP_BASE_SPRITE_PATH = (struct System_String_o *)StringLiteral_14583/*"Tutorial/tutorial_0006"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v97->HELP_BASE_SPRITE_PATH, v96, v98, v99);
  v100 = StringLiteral_24289/*"tutorial_0006"*/;
  v101 = CombineHelpListViewManager_TypeInfo->static_fields;
  v101->HELP_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_24289/*"tutorial_0006"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v101->HELP_BASE_SPRITE_NAME, v100, v102, v103);
  v104 = StringLiteral_14584/*"Tutorial/tutorial_alpha"*/;
  v105 = CombineHelpListViewManager_TypeInfo->static_fields;
  v105->HELP_BASE_ALPHA_PATH = (struct System_String_o *)StringLiteral_14584/*"Tutorial/tutorial_alpha"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v105->HELP_BASE_ALPHA_PATH, v104, v106, v107);
  v108 = StringLiteral_24290/*"tutorial_alpha"*/;
  v109 = CombineHelpListViewManager_TypeInfo->static_fields;
  v109->HELP_BASE_ALPHA_NAME = (struct System_String_o *)StringLiteral_24290/*"tutorial_alpha"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v109->HELP_BASE_ALPHA_NAME, v108, v110, v111);
}


void __fastcall CombineHelpListViewManager___ctor(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CombineHelpListViewManager__Callback(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct CombineHelpListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall CombineHelpListViewManager__CloseHelpDialog(
        CombineHelpListViewManager_o *this,
        CombineHelpListViewManager_CallbackFunc2_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  CombineHelpMenu_o *baseDialog; // x20
  CombineHelpMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B48809 & 1) == 0 )
  {
    sub_1BDB878(&CombineHelpMenu_CallbackFunc_TypeInfo, callback);
    sub_1BDB878(&Method_CombineHelpListViewManager_WaitFadeOut__, v6);
    byte_4B48809 = 1;
  }
  this->fields.callbackFunc2 = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v8 = (CombineHelpMenu_CallbackFunc_o *)sub_1BDBAC4(CombineHelpMenu_CallbackFunc_TypeInfo);
  CombineHelpMenu_CallbackFunc___ctor(v8, (Il2CppObject *)this, Method_CombineHelpListViewManager_WaitFadeOut__, v9);
  if ( !baseDialog )
    sub_1BDBAD4(v10, v11);
  CombineHelpMenu__Close(baseDialog, v8, v12);
}


void __fastcall CombineHelpListViewManager__CreateList(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BaseDialog_o *baseDialog; // x0
  CombineHelpListViewManager_c *v13; // x0
  struct CombineHelpListViewManager_ItemKind_array *KindList; // x24
  int32_t max_length; // w20
  __int64 v16; // x2
  unsigned __int64 v17; // x26
  unsigned __int8 v18; // w27
  __int64 v19; // x28
  int32_t v20; // w21
  System_Collections_Generic_Dictionary_UIPanel__int__c *klass; // x8
  int namespaze; // w9
  int v23; // w10
  __int64 v24; // x20
  BalanceConfig_c *v25; // x0
  int32_t ClassBoardReleaseQuestId; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  __int64 v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v37; // x8

  if ( (byte_4B48808 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&CombineHelpListViewItem_TypeInfo, v5);
    sub_1BDB878(&CombineHelpListViewManager_TypeInfo, v6);
    sub_1BDB878(&CombineRootComponent_TypeInfo, v7);
    sub_1BDB878(&CondType_TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v10);
    byte_4B48808 = 1;
  }
  this->fields.callbackFunc2 = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v2, v3);
  baseDialog = (BaseDialog_o *)this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_43;
  BaseDialog__Open(baseDialog, 0LL, 0, 0LL);
  v13 = CombineHelpListViewManager_TypeInfo;
  if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
    v13 = CombineHelpListViewManager_TypeInfo;
  }
  KindList = v13->static_fields->KindList;
  if ( KindList )
    max_length = KindList->max_length;
  else
    max_length = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0LL);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  baseDialog = (BaseDialog_o *)CombineRootComponent__IsEnableSpecialAscension(0LL);
  if ( max_length >= 1 )
  {
    if ( KindList )
    {
      v17 = 0LL;
      v18 = (unsigned __int8)baseDialog ^ 1;
      v19 = (unsigned int)max_length;
      while ( 1 )
      {
        if ( v17 >= KindList->max_length )
LABEL_42:
          sub_1BDBADC(baseDialog, v11, v16);
        baseDialog = (BaseDialog_o *)CombineHelpListViewManager_TypeInfo;
        v20 = KindList->m_Items[v17 + 1];
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
          v23 = 0;
          while ( 1 )
          {
            if ( namespaze == v23 )
              goto LABEL_42;
            v24 = *((_QWORD *)&klass->_1.byval_arg.data + v23);
            if ( !v24 )
              goto LABEL_43;
            if ( *(_DWORD *)(v24 + 16) == v20 )
              break;
            if ( namespaze == ++v23 )
              goto LABEL_40;
          }
          if ( ((v20 == 10) & v18) == 0 )
          {
            if ( v20 != 13 )
              goto LABEL_34;
            v25 = BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v25 = BalanceConfig_TypeInfo;
            }
            ClassBoardReleaseQuestId = v25->static_fields->ClassBoardReleaseQuestId;
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            baseDialog = (BaseDialog_o *)CondType__IsQuestClear_39349364(ClassBoardReleaseQuestId, -1, 0, 0LL);
            if ( ((unsigned __int8)baseDialog & 1) != 0 )
            {
LABEL_34:
              itemList = this->fields.itemList;
              if ( !itemList )
                break;
              size = itemList->fields._size;
              v29 = sub_1BDBAC4(CombineHelpListViewItem_TypeInfo);
              ListViewItem___ctor_42734232((ListViewItem_o *)v29, size, 0LL);
              *(_QWORD *)(v29 + 112) = v24;
              sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 112), v24, v30, v31);
              *(_BYTE *)(v29 + 120) = 1;
              baseDialog = (BaseDialog_o *)this->fields.itemList;
              if ( !baseDialog )
                break;
              v34 = *(_QWORD *)&baseDialog->fields.m_CachedPtr;
              v35 = Method_System_Collections_Generic_List_ListViewItem__Add__;
              ++HIDWORD(baseDialog->fields.m_CancellationTokenSource);
              if ( !v34 )
                break;
              m_CancellationTokenSource_low = SLODWORD(baseDialog->fields.m_CancellationTokenSource);
              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)baseDialog,
                  (Il2CppObject *)v29,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v37 = v34 + 8 * m_CancellationTokenSource_low;
                LODWORD(baseDialog->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                *(_QWORD *)(v37 + 32) = v29;
                sub_1BDB81C((CGThumbnailListItem_o *)(v37 + 32), v29, v32, v33);
              }
            }
          }
        }
LABEL_40:
        if ( ++v17 == v19 )
          goto LABEL_41;
      }
    }
LABEL_43:
    sub_1BDBAD4(baseDialog, v11);
  }
LABEL_41:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CombineHelpListViewItem_o *__fastcall CombineHelpListViewManager__GetItem(
        CombineHelpListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CombineHelpListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B4880A & 1) == 0 )
  {
    sub_1BDB878(&CombineHelpListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B4880A = 1;
  }
  result = (CombineHelpListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineHelpListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)result,
                                            index,
                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CombineHelpListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineHelpListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall CombineHelpListViewManager__LoadBaseSprite(
        CombineHelpListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  __int64 v15; // x21
  CombineHelpListViewManager_c *v16; // x8
  struct System_String_o *HELP_BASE_SPRITE_PATH; // x1
  const MethodInfo *v18; // x3
  struct System_String_o *HELP_BASE_ALPHA_PATH; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_String_array *v22; // x19
  System_Action_o *v23; // x21

  if ( (byte_4B48806 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AssetManager_TypeInfo, v3);
    sub_1BDB878(&CombineHelpListViewManager_TypeInfo, v4);
    sub_1BDB878(&string___TypeInfo, v5);
    sub_1BDB878(&Method_CombineHelpListViewManager___c__DisplayClass24_0__LoadBaseSprite_b__0__, v6);
    sub_1BDB878(&CombineHelpListViewManager___c__DisplayClass24_0_TypeInfo, v7);
    byte_4B48806 = 1;
  }
  v8 = sub_1BDBAC4(CombineHelpListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_13;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  if ( this->fields.initMode )
    return;
  v9 = sub_1BDB920(string___TypeInfo, 2LL);
  v15 = v9;
  v16 = CombineHelpListViewManager_TypeInfo;
  if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
    v16 = CombineHelpListViewManager_TypeInfo;
  }
  if ( !v15 )
LABEL_13:
    sub_1BDBAD4(v9, v10);
  if ( !*(_DWORD *)(v15 + 24)
    || (HELP_BASE_SPRITE_PATH = v16->static_fields->HELP_BASE_SPRITE_PATH,
        *(_QWORD *)(v15 + 32) = HELP_BASE_SPRITE_PATH,
        sub_1BDB81C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)HELP_BASE_SPRITE_PATH, v13, v14),
        *(_DWORD *)(v15 + 24) <= 1u) )
  {
    sub_1BDBADC(v9, v10, v13);
  }
  HELP_BASE_ALPHA_PATH = CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH;
  *(_QWORD *)(v15 + 40) = HELP_BASE_ALPHA_PATH;
  sub_1BDB81C((CGThumbnailListItem_o *)(v15 + 40), (int32_t)HELP_BASE_ALPHA_PATH, v13, v18);
  *(_QWORD *)(v8 + 24) = v15;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 24), v15, v20, v21);
  this->fields.initMode = 1;
  v22 = *(System_String_array **)(v8 + 24);
  v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_CombineHelpListViewManager___c__DisplayClass24_0__LoadBaseSprite_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39560804(v22, v23, 1, 0LL);
}


void __fastcall CombineHelpListViewManager__OnMoveEnd(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4B4880E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4880E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject )
          goto LABEL_17;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_17;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
            gameObject,
            1LL,
            gameObject->klass[1]._1.declaringType);
          return;
        }
LABEL_17:
        sub_1BDBAD4(gameObject, v7);
      }
    }
  }
}


void __fastcall CombineHelpListViewManager__ReleaseBaseSprite(
        CombineHelpListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CombineHelpListViewManager_c *v5; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  if ( (byte_4B48807 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&CombineHelpListViewManager_TypeInfo, v3);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UITexture___, v4);
    byte_4B48807 = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v5 = CombineHelpListViewManager_TypeInfo;
    if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
      v5 = CombineHelpListViewManager_TypeInfo;
    }
    HELP_BASE_SPRITE_PATH = v5->static_fields->HELP_BASE_SPRITE_PATH;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0LL);
    AssetManager__releaseAssetStorage(CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0LL);
    BaseWindow = this->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1BDBAD4(BaseWindow, v7);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))BaseWindow->klass[2]._1.gc_desc)(
      BaseWindow,
      0LL,
      BaseWindow->klass[2]._1.name);
  }
  this->fields.initMode = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewManager__RequestListObject(
        CombineHelpListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B4880C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_CombineHelpListViewManager_OnMoveEnd__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__Dispose__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__MoveNext__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__get_Current__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineHelpListViewObject__GetEnumerator__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineHelpListViewObject__get_Count__, v12);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v13);
    byte_4B4880C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_CombineHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CombineHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v19, v20);
      CombineHelpListViewObject__Init_47263572((CombineHelpListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewManager__RequestListObject_47263656(
        CombineHelpListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B4880D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_CombineHelpListViewManager_OnMoveEnd__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineHelpListViewObject__GetEnumerator__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineHelpListViewObject__get_Count__, v10);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4B4880D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_CombineHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v17, v18);
      CombineHelpListViewObject__Init_47264160((CombineHelpListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_CombineHelpListViewObject__Dispose__);
  }
}


void __fastcall CombineHelpListViewManager__SetObjectItem(
        CombineHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B4880B & 1) == 0 )
  {
    this = (CombineHelpListViewManager_o *)sub_1BDB878(&CombineHelpListViewObject_TypeInfo, obj);
    byte_4B4880B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CombineHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CombineHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineHelpListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  CombineHelpListViewObject__Init_47262976((CombineHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall CombineHelpListViewManager__WaitFadeOut(CombineHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct CombineHelpListViewManager_CallbackFunc2_o *callbackFunc2; // x19

  callbackFunc2 = this->fields.callbackFunc2;
  this->fields.callbackFunc2 = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v2, v3);
  if ( callbackFunc2 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
      callbackFunc2->fields.original_method_info,
      *(_QWORD *)&callbackFunc2->fields.extra_arg);
}


void __fastcall CombineHelpListViewManager__add_callbackFunc(
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

  if ( (byte_4B48800 & 1) == 0 )
  {
    sub_1BDB878(&CombineHelpListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B48800 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineHelpListViewManager_CallbackFunc_c *)v7->klass != CombineHelpListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  CombineHelpListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall CombineHelpListViewManager__add_callbackFunc2(
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

  if ( (byte_4B48802 & 1) == 0 )
  {
    sub_1BDB878(&CombineHelpListViewManager_CallbackFunc2_TypeInfo, value);
    byte_4B48802 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineHelpListViewManager_CallbackFunc2_c *)v7->klass != CombineHelpListViewManager_CallbackFunc2_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  CombineHelpListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineHelpListViewObject__o *__fastcall CombineHelpListViewManager__get_ClippingObjectList(
        CombineHelpListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B48805 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineHelpListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_CombineHelpListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B48805 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_CombineHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_CombineHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BDBAD4(0LL, v18);
      Item = (ListViewItem_o *)CombineHelpListViewObject__GetItem((CombineHelpListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1BDBAD4(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42750172((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BDBAD4(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BDBAD4(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BDBAD4(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BDBAD4(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineHelpListViewObject__o *)v11;
}


System_Collections_Generic_List_CombineHelpListViewObject__o *__fastcall CombineHelpListViewManager__get_ObjectList(
        CombineHelpListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B48804 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineHelpListViewObject___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_CombineHelpListViewObject__TypeInfo, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B48804 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_CombineHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_CombineHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BDBAD4(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BDBAD4(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_CombineHelpListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BDBAD4(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_CombineHelpListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BDBAD4(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineHelpListViewObject__o *)v11;
}


void __fastcall CombineHelpListViewManager__remove_callbackFunc(
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

  if ( (byte_4B48801 & 1) == 0 )
  {
    sub_1BDB878(&CombineHelpListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B48801 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineHelpListViewManager_CallbackFunc_c *)v7->klass != CombineHelpListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  CombineHelpListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineHelpListViewManager__remove_callbackFunc2(
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

  if ( (byte_4B48803 & 1) == 0 )
  {
    sub_1BDB878(&CombineHelpListViewManager_CallbackFunc2_TypeInfo, value);
    byte_4B48803 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineHelpListViewManager_CallbackFunc2_c *)v7->klass != CombineHelpListViewManager_CallbackFunc2_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BDBD94(v7);
  CombineHelpListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewManager_CallbackFunc___ctor(
        CombineHelpListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A297B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A29778;
}


System_IAsyncResult_o *__fastcall CombineHelpListViewManager_CallbackFunc__BeginInvoke(
        CombineHelpListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BDB82C(this, &v5, callback, object);
}


void __fastcall CombineHelpListViewManager_CallbackFunc__EndInvoke(
        CombineHelpListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall CombineHelpListViewManager_CallbackFunc__Invoke(
        CombineHelpListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineHelpListViewManager_CallbackFunc2___ctor(
        CombineHelpListViewManager_CallbackFunc2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2980C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A297CC;
}


System_IAsyncResult_o *__fastcall CombineHelpListViewManager_CallbackFunc2__BeginInvoke(
        CombineHelpListViewManager_CallbackFunc2_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BDB82C(this, &v5, callback, object);
}


void __fastcall CombineHelpListViewManager_CallbackFunc2__EndInvoke(
        CombineHelpListViewManager_CallbackFunc2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall CombineHelpListViewManager_CallbackFunc2__Invoke(
        CombineHelpListViewManager_CallbackFunc2_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CombineHelpListViewManager___c__DisplayClass24_0___ctor(
        CombineHelpListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineHelpListViewManager___c__DisplayClass24_0___LoadBaseSprite_b__0(
        CombineHelpListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CombineHelpListViewManager___c__DisplayClass24_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct CombineHelpListViewManager_o *_4__this; // x8
  struct System_String_array *path; // x8
  System_String_o *v12; // x20
  AssetData_o *v13; // x20
  struct System_String_array *v14; // x8
  CombineHelpListViewManager___c__DisplayClass24_0_o *v15; // x20
  struct CombineHelpListViewManager_o *v16; // x8
  CombineHelpListViewManager___c__DisplayClass24_0_o *v17; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Shader_o *v19; // x24
  UnityEngine_Material_o *v20; // x22
  struct CombineHelpListViewManager_o *v21; // x8
  CombineHelpListViewManager_c *v22; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x19

  v3 = this;
  if ( (byte_4B48810 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_Texture2D____77074040, method);
    sub_1BDB878(&AssetManager_TypeInfo, v4);
    sub_1BDB878(&CombineHelpListViewManager_TypeInfo, v5);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UITexture___, v6);
    sub_1BDB878(&UnityEngine_Material_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_4979/*"Custom/SpriteWithMask"*/, v8);
    this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)sub_1BDB878(&StringLiteral_16248/*"_MaskTex"*/, v9);
    byte_4B48810 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  if ( _4__this->fields.initMode == 1 )
  {
    path = v3->fields.path;
    if ( !path )
      goto LABEL_27;
    if ( !path->max_length )
      goto LABEL_28;
    v12 = path->m_Items[0];
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)AssetManager__getAssetStorage(v12, 0LL);
    v13 = (AssetData_o *)this;
    if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
    if ( !v13 )
      goto LABEL_27;
    this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)AssetData__GetObject_object__50417328(
                                                                   v13,
                                                                   CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_SPRITE_NAME,
                                                                   (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_Texture2D____77074040);
    v14 = v3->fields.path;
    if ( !v14 )
      goto LABEL_27;
    if ( v14->max_length <= 1 )
LABEL_28:
      sub_1BDBADC(this, method, v2);
    v15 = this;
    this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)AssetManager__getAssetStorage(v14->m_Items[1], 0LL);
    if ( this )
    {
      this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)AssetData__GetObject_object__50417328(
                                                                     (AssetData_o *)this,
                                                                     CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_NAME,
                                                                     (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_Texture2D____77074040);
      v16 = v3->fields.__4__this;
      if ( v16 )
      {
        v17 = this;
        this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)v16->fields.BaseWindow;
        if ( this )
        {
          this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0LL);
          if ( this )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UITexture___);
            v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4979/*"Custom/SpriteWithMask"*/, 0LL);
            v20 = (UnityEngine_Material_o *)sub_1BDBAC4(UnityEngine_Material_TypeInfo);
            UnityEngine_Material___ctor(v20, v19, 0LL);
            if ( Component_object )
            {
              this = (CombineHelpListViewManager___c__DisplayClass24_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                                                                             Component_object,
                                                                             v20,
                                                                             Component_object->klass->vtable[26].methodPtr);
              if ( v20 )
              {
                UnityEngine_Material__set_mainTexture(v20, (UnityEngine_Texture_o *)v15, 0LL);
                UnityEngine_Material__SetTexture(
                  v20,
                  (System_String_o *)StringLiteral_16248/*"_MaskTex"*/,
                  (UnityEngine_Texture_o *)v17,
                  0LL);
                v21 = v3->fields.__4__this;
                if ( v21 )
                {
                  v21->fields.initMode = 2;
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BDBAD4(this, method);
  }
  v22 = CombineHelpListViewManager_TypeInfo;
  if ( !CombineHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineHelpListViewManager_TypeInfo);
    v22 = CombineHelpListViewManager_TypeInfo;
  }
  HELP_BASE_SPRITE_PATH = v22->static_fields->HELP_BASE_SPRITE_PATH;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0LL);
  AssetManager__releaseAssetStorage(CombineHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0LL);
}