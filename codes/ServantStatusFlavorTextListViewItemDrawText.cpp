void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B18C11 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v1);
    byte_4B18C11 = 1;
  }
  *ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields = (struct ServantStatusFlavorTextListViewItemDrawText_StaticFields)0xFFFFFFAD0000009ALL;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___ctor(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
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
  int32_t v28; // w1
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_List_object__o *v47; // x20
  __int64 v48; // x0
  Il2CppObject *v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Collections_Generic_List_object__o *v82; // x20
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  _QWORD *v85; // x9
  struct System_Object_array *v86; // x8
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  System_Collections_Generic_List_object__o *v115; // x20
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  _QWORD *v118; // x9
  struct System_Object_array *v119; // x8
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3

  if ( (byte_4B18C10 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_16997/*"bg(Clone)/bg10500"*/, v7);
    sub_1BCAFF8(&StringLiteral_13052/*"SummonBgRoot"*/, v8);
    sub_1BCAFF8(&StringLiteral_13203/*"SystemUICamera"*/, v9);
    sub_1BCAFF8(&StringLiteral_3127/*"Bg/10500"*/, v10);
    sub_1BCAFF8(&StringLiteral_6061/*"EquipGraphListMenuPrefab(Clone)"*/, v11);
    sub_1BCAFF8(&StringLiteral_12633/*"ServantStatusDialogPrefab(Clone)"*/, v12);
    sub_1BCAFF8(&StringLiteral_3207/*"BtnBg"*/, v13);
    sub_1BCAFF8(&StringLiteral_14441/*"TouchCamera"*/, v14);
    sub_1BCAFF8(&StringLiteral_4384/*"ChoiceButton"*/, v15);
    sub_1BCAFF8(&StringLiteral_3130/*"BgCamera"*/, v16);
    sub_1BCAFF8(&StringLiteral_4568/*"CommonUI"*/, v17);
    sub_1BCAFF8(&StringLiteral_6831/*"FrontCommonUICamera"*/, v18);
    sub_1BCAFF8(&StringLiteral_16996/*"bg"*/, v19);
    sub_1BCAFF8(&StringLiteral_4577/*"CommonUICamera"*/, v20);
    sub_1BCAFF8(&StringLiteral_13069/*"SupportServantEquipListMenuPrefab(Clone)"*/, v21);
    sub_1BCAFF8(&StringLiteral_8419/*"LockButton"*/, v22);
    sub_1BCAFF8(&StringLiteral_12616/*"ServantEquipStatusDialogPrefab(Clone)"*/, v23);
    sub_1BCAFF8(&StringLiteral_12967/*"StatusButton"*/, v24);
    sub_1BCAFF8(&StringLiteral_11123/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/, v25);
    sub_1BCAFF8(&StringLiteral_20233/*"img_index_02"*/, v26);
    sub_1BCAFF8(&StringLiteral_7113/*"Ground/Field/bg(Clone)"*/, v27);
    byte_4B18C10 = 1;
  }
  v28 = StringLiteral_20233/*"img_index_02"*/;
  this->fields.TITLE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20233/*"img_index_02"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.TITLE_SPRITE_NAME, v28, v2, v3);
  this->fields.MESSAGE_LABEL_ADD_POS_Y = -45.0;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = 0xC25C0000C2080000LL;
  v29 = StringLiteral_4568/*"CommonUI"*/;
  this->fields.COMMON_UI = (struct System_String_o *)StringLiteral_4568/*"CommonUI"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.COMMON_UI, v29, v30, v31);
  v32 = StringLiteral_7113/*"Ground/Field/bg(Clone)"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_7113/*"Ground/Field/bg(Clone)"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.BATTLE_BG_OBJECT, v32, v33, v34);
  v35 = StringLiteral_16997/*"bg(Clone)/bg10500"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_16997/*"bg(Clone)/bg10500"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.SUMMON_BG_OBJECT, v35, v36, v37);
  v38 = StringLiteral_13052/*"SummonBgRoot"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_13052/*"SummonBgRoot"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.SUMMON_BG_ROOT, v38, v39, v40);
  v41 = StringLiteral_3127/*"Bg/10500"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_3127/*"Bg/10500"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.SUMMON_BG_ASSET_NAME, v41, v42, v43);
  v44 = StringLiteral_16996/*"bg"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_16996/*"bg"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v44, v45, v46);
  v47 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v47 )
    goto LABEL_63;
  v49 = (Il2CppObject *)StringLiteral_12633/*"ServantStatusDialogPrefab(Clone)"*/;
  items = v47->fields._items;
  v53 = Method_System_Collections_Generic_List_string__Add__;
  ++v47->fields._version;
  if ( !items )
    goto LABEL_63;
  size = v47->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v47,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &items->obj.klass + size;
    v47->fields._size = size + 1;
    v55[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v49, v50, v51);
  }
  v49 = (Il2CppObject *)StringLiteral_12616/*"ServantEquipStatusDialogPrefab(Clone)"*/;
  v58 = v47->fields._items;
  v59 = Method_System_Collections_Generic_List_string__Add__;
  ++v47->fields._version;
  if ( !v58 )
    goto LABEL_63;
  v60 = v47->fields._size;
  if ( (unsigned int)v60 >= v58->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v47,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = &v58->obj.klass + v60;
    v47->fields._size = v60 + 1;
    v61[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v49, v56, v57);
  }
  v49 = (Il2CppObject *)StringLiteral_6061/*"EquipGraphListMenuPrefab(Clone)"*/;
  v64 = v47->fields._items;
  v65 = Method_System_Collections_Generic_List_string__Add__;
  ++v47->fields._version;
  if ( !v64 )
    goto LABEL_63;
  v66 = v47->fields._size;
  if ( (unsigned int)v66 >= v64->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v47,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = &v64->obj.klass + v66;
    v47->fields._size = v66 + 1;
    v67[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v49, v62, v63);
  }
  v49 = (Il2CppObject *)StringLiteral_13069/*"SupportServantEquipListMenuPrefab(Clone)"*/;
  v70 = v47->fields._items;
  v71 = Method_System_Collections_Generic_List_string__Add__;
  ++v47->fields._version;
  if ( !v70 )
    goto LABEL_63;
  v72 = v47->fields._size;
  if ( (unsigned int)v72 >= v70->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v47,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = &v70->obj.klass + v72;
    v47->fields._size = v72 + 1;
    v73[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v49, v68, v69);
  }
  v49 = (Il2CppObject *)StringLiteral_11123/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/;
  v76 = v47->fields._items;
  v77 = Method_System_Collections_Generic_List_string__Add__;
  ++v47->fields._version;
  if ( !v76 )
    goto LABEL_63;
  v78 = v47->fields._size;
  if ( (unsigned int)v78 >= v76->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v47,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = &v76->obj.klass + v78;
    v47->fields._size = v78 + 1;
    v79[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v49, v74, v75);
  }
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)v47;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.INACTIVE_PREFABS, (int32_t)v47, v80, v81);
  v82 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v82,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v82 )
    goto LABEL_63;
  v85 = Method_System_Collections_Generic_List_string__Add__;
  v49 = (Il2CppObject *)StringLiteral_3130/*"BgCamera"*/;
  v86 = v82->fields._items;
  ++v82->fields._version;
  if ( !v86 )
    goto LABEL_63;
  v87 = v82->fields._size;
  if ( (unsigned int)v87 >= v86->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v82,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v88 = &v86->obj.klass + v87;
    v82->fields._size = v87 + 1;
    v88[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v88 + 4), (int32_t)v49, v83, v84);
  }
  v49 = (Il2CppObject *)StringLiteral_4577/*"CommonUICamera"*/;
  v91 = v82->fields._items;
  v92 = Method_System_Collections_Generic_List_string__Add__;
  ++v82->fields._version;
  if ( !v91 )
    goto LABEL_63;
  v93 = v82->fields._size;
  if ( (unsigned int)v93 >= v91->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v82,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v91->obj.klass + v93;
    v82->fields._size = v93 + 1;
    v94[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v94 + 4), (int32_t)v49, v89, v90);
  }
  v49 = (Il2CppObject *)StringLiteral_6831/*"FrontCommonUICamera"*/;
  v97 = v82->fields._items;
  v98 = Method_System_Collections_Generic_List_string__Add__;
  ++v82->fields._version;
  if ( !v97 )
    goto LABEL_63;
  v99 = v82->fields._size;
  if ( (unsigned int)v99 >= v97->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v82,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  }
  else
  {
    v100 = &v97->obj.klass + v99;
    v82->fields._size = v99 + 1;
    v100[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v100 + 4), (int32_t)v49, v95, v96);
  }
  v49 = (Il2CppObject *)StringLiteral_13203/*"SystemUICamera"*/;
  v103 = v82->fields._items;
  v104 = Method_System_Collections_Generic_List_string__Add__;
  ++v82->fields._version;
  if ( !v103 )
    goto LABEL_63;
  v105 = v82->fields._size;
  if ( (unsigned int)v105 >= v103->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v82,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
  }
  else
  {
    v106 = &v103->obj.klass + v105;
    v82->fields._size = v105 + 1;
    v106[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v106 + 4), (int32_t)v49, v101, v102);
  }
  v49 = (Il2CppObject *)StringLiteral_14441/*"TouchCamera"*/;
  v109 = v82->fields._items;
  v110 = Method_System_Collections_Generic_List_string__Add__;
  ++v82->fields._version;
  if ( !v109 )
    goto LABEL_63;
  v111 = v82->fields._size;
  if ( (unsigned int)v111 >= v109->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v82,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = &v109->obj.klass + v111;
    v82->fields._size = v111 + 1;
    v112[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v112 + 4), (int32_t)v49, v107, v108);
  }
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v82;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.SCRIPT_CAMERAS, (int32_t)v82, v113, v114);
  v115 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v115 )
    goto LABEL_63;
  v118 = Method_System_Collections_Generic_List_string__Add__;
  v49 = (Il2CppObject *)StringLiteral_3207/*"BtnBg"*/;
  v119 = v115->fields._items;
  ++v115->fields._version;
  if ( !v119 )
    goto LABEL_63;
  v120 = v115->fields._size;
  if ( (unsigned int)v120 >= v119->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v115,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
  }
  else
  {
    v121 = &v119->obj.klass + v120;
    v115->fields._size = v120 + 1;
    v121[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v121 + 4), (int32_t)v49, v116, v117);
  }
  v49 = (Il2CppObject *)StringLiteral_12967/*"StatusButton"*/;
  v124 = v115->fields._items;
  v125 = Method_System_Collections_Generic_List_string__Add__;
  ++v115->fields._version;
  if ( !v124 )
    goto LABEL_63;
  v126 = v115->fields._size;
  if ( (unsigned int)v126 >= v124->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v115,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
  }
  else
  {
    v127 = &v124->obj.klass + v126;
    v115->fields._size = v126 + 1;
    v127[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v127 + 4), (int32_t)v49, v122, v123);
  }
  v49 = (Il2CppObject *)StringLiteral_8419/*"LockButton"*/;
  v130 = v115->fields._items;
  v131 = Method_System_Collections_Generic_List_string__Add__;
  ++v115->fields._version;
  if ( !v130 )
    goto LABEL_63;
  v132 = v115->fields._size;
  if ( (unsigned int)v132 >= v130->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v115,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
  }
  else
  {
    v133 = &v130->obj.klass + v132;
    v115->fields._size = v132 + 1;
    v133[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v133 + 4), (int32_t)v49, v128, v129);
  }
  v49 = (Il2CppObject *)StringLiteral_4384/*"ChoiceButton"*/;
  v136 = v115->fields._items;
  v137 = Method_System_Collections_Generic_List_string__Add__;
  ++v115->fields._version;
  if ( !v136 )
LABEL_63:
    sub_1BCB254(v48, v49);
  v138 = v115->fields._size;
  if ( (unsigned int)v138 >= v136->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v115,
      v49,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
  }
  else
  {
    v139 = &v136->obj.klass + v138;
    v115->fields._size = v138 + 1;
    v139[4] = (Il2CppClass *)v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v139 + 4), (int32_t)v49, v134, v135);
  }
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v115;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.TARGET_BUTTON_NAME, (int32_t)v115, v140, v141);
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__Awake(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText__GetKind(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__OnClickPlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  System_Collections_Generic_List_object__o *INACTIVE_PREFABS; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  unsigned int allCamerasCount; // w0
  UnityEngine_Camera_array *v28; // x22
  System_Collections_Generic_List_object__o *v29; // x23
  System_Collections_Generic_List_GameObject__o **v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_GameObject_o *v33; // x23
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_object__o *v38; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  System_Collections_Generic_List_object__o *v43; // x24
  System_Collections_Generic_List_Camera__o **v44; // x23
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x2
  int max_length; // w8
  unsigned int v49; // w26
  Il2CppClass **v50; // x8
  UnityEngine_Behaviour_o *v51; // x24
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x8
  UnityEngine_GameObject_o *v58; // x22
  struct UnityEngine_GameObject_o *Deep; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  UnityEngine_Object_o *summonBgRoot; // x22
  struct UnityEngine_GameObject_o *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  UnityEngine_Object_o *v66; // x22
  const MethodInfo *v67; // x3
  UnityEngine_Object_o *summonBg; // x22
  System_String_o *SUMMON_BG_ASSET_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v70; // x21
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18C0D & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Camera___TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Camera__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Camera___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_Camera__TypeInfo, v14);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v16);
    sub_1BCAFF8(&Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__, v17);
    sub_1BCAFF8(
      &Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
      v18);
    sub_1BCAFF8(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, v19);
    byte_4B18C0D = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v20 = sub_1BCB244(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_53;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  if ( this->fields.svtId && !this->fields.isScriptPlaying )
  {
    this->fields.isScriptPlaying = 1;
    v25 = Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__;
    if ( (*((_BYTE *)Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1BCB010(Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    v26 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 8, 0, 0LL);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0LL);
    v28 = (UnityEngine_Camera_array *)sub_1BCB0A0(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras(v28, 0LL);
    v29 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v20 + 32) = v29;
    v30 = (System_Collections_Generic_List_GameObject__o **)(v20 + 32);
    sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v29, v31, v32);
    INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.INACTIVE_PREFABS;
    if ( !INACTIVE_PREFABS )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v71,
      INACTIVE_PREFABS,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v72 = v71;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v72,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v33 = UnityEngine_GameObject__Find((System_String_o *)v72.fields._current, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v33, 0, v34);
        v38 = (System_Collections_Generic_List_object__o *)*v30;
        if ( !*v30 )
          sub_1BCB254(0LL, v35);
        items = v38->fields._items;
        v40 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v38->fields._version;
        if ( !items )
          sub_1BCB254(v38, v35);
        size = v38->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v38,
            (Il2CppObject *)v33,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v38->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v33;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v33, v36, v37);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v72,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v43 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_Camera__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v43,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v20 + 24) = v43;
    v44 = (System_Collections_Generic_List_Camera__o **)(v20 + 24);
    sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 24), (int32_t)v43, v45, v46);
    if ( !v28 )
      goto LABEL_53;
    max_length = v28->max_length;
    if ( max_length >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        if ( v49 >= max_length )
          sub_1BCB25C(INACTIVE_PREFABS, v22, v47);
        v50 = &v28->obj.klass + (int)v49;
        v51 = (UnityEngine_Behaviour_o *)v50[4];
        if ( !v51 )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v50[4],
                                                                          0LL);
        if ( !INACTIVE_PREFABS )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Object__get_name(
                                                                          (UnityEngine_Object_o *)INACTIVE_PREFABS,
                                                                          0LL);
        if ( !this->fields.SCRIPT_CAMERAS )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                                          (System_Collections_Generic_List_object__o *)this->fields.SCRIPT_CAMERAS,
                                                                          (Il2CppObject *)INACTIVE_PREFABS,
                                                                          (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)INACTIVE_PREFABS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v51, 0, 0LL);
          INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)*v44;
          if ( !*v44 )
            break;
          v54 = INACTIVE_PREFABS->fields._items;
          v55 = Method_System_Collections_Generic_List_Camera__Add__;
          ++INACTIVE_PREFABS->fields._version;
          if ( !v54 )
            break;
          v56 = INACTIVE_PREFABS->fields._size;
          if ( (unsigned int)v56 >= v54->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              INACTIVE_PREFABS,
              (Il2CppObject *)v51,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &v54->obj.klass + v56;
            INACTIVE_PREFABS->fields._size = v56 + 1;
            v57[4] = (Il2CppClass *)v51;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v51, v52, v53);
          }
        }
        max_length = v28->max_length;
        if ( (int)++v49 >= max_length )
          goto LABEL_33;
      }
LABEL_53:
      sub_1BCB254(INACTIVE_PREFABS, v22);
    }
LABEL_33:
    v58 = UnityEngine_GameObject__Find(this->fields.COMMON_UI, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v58, 0LL, 0LL) )
    {
      Deep = GameObjectExtensions__FindDeep(v58, this->fields.SUMMON_BG_ROOT, 1, 0LL);
      this->fields.summonBgRoot = Deep;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.summonBgRoot, (int32_t)Deep, v60, v61);
    }
    summonBgRoot = (UnityEngine_Object_o *)this->fields.summonBgRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBgRoot, 0LL, 0LL) )
    {
      INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.summonBgRoot;
      if ( !INACTIVE_PREFABS )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)INACTIVE_PREFABS, 1, 0LL);
    }
    v63 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    this->fields.battleBg = v63;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleBg, (int32_t)v63, v64, v65);
    v66 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
      goto LABEL_48;
    summonBg = (UnityEngine_Object_o *)this->fields.summonBg;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL) )
    {
LABEL_48:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(this, *v44, *v30, v67);
    }
    else
    {
      SUMMON_BG_ASSET_NAME = this->fields.SUMMON_BG_ASSET_NAME;
      v70 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v70,
        (Il2CppObject *)v20,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(SUMMON_BG_ASSET_NAME, v70, 1, 0LL);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_4B18C0E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, inactiveCameras);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BCAFF8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__, v9);
    sub_1BCAFF8(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo, v10);
    byte_4B18C0E = 1;
  }
  v11 = sub_1BCB244(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = inactivePrefabs;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)inactivePrefabs, v16, v17);
  *(_QWORD *)(v11 + 32) = inactiveCameras;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)inactiveCameras, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  v22 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0LL);
  if ( !v22 )
LABEL_8:
    sub_1BCB254(v12, v13);
  CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_4B18C0F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, inactiveCameras);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BCAFF8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__, v9);
    sub_1BCAFF8(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo, v10);
    byte_4B18C0F = 1;
  }
  v11 = sub_1BCB244(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = inactiveCameras;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)inactiveCameras, v16, v17);
  *(_QWORD *)(v11 + 32) = inactivePrefabs;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)inactivePrefabs, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  v22 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0LL);
  if ( !v22 )
LABEL_8:
    sub_1BCB254(v12, v13);
  CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_string__o *TARGET_BUTTON_NAME; // x0
  UnityEngine_Object_o *Deep; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B18C0C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, gameObject);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v12);
    byte_4B18C0C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  TARGET_BUTTON_NAME = this->fields.TARGET_BUTTON_NAME;
  if ( !TARGET_BUTTON_NAME )
    sub_1BCB254(0LL, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)TARGET_BUTTON_NAME,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v24.fields._current,
                                     1,
                                     0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality(Deep, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !Deep )
        sub_1BCB254(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Deep,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v18 )
      {
        if ( !Component_object )
          sub_1BCB254(v18, v19);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
          Component_object,
          isEnable,
          Component_object->klass->vtable[6].methodPtr);
      }
      v20 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)Deep,
              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
      if ( v21 )
      {
        if ( !v20 )
          sub_1BCB254(v21, v22);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))v20->klass->vtable[5].method)(
          v20,
          isEnable,
          v20->klass->vtable[6].methodPtr);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *titleServantBase; // x0
  Il2CppObject *Component_object; // x21
  float v11; // s8
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v15; // s8
  float v16; // s8
  UILabel_o *v17; // x19

  if ( (byte_4B18C0B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v6);
    sub_1BCAFF8(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    byte_4B18C0B = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( Component_object )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Component_object,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_45:
      sub_1BCB254(titleServantBase, title);
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( !Component_object )
        goto LABEL_45;
      UISprite__set_spriteName(
        (UISprite_o *)Component_object,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0LL);
    }
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 2, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_alignment((UILabel_o *)titleServantBase, 2, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, title, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleServantBase->klass[2]._1.typeMetadataHandle)(
      titleServantBase,
      titleServantBase->klass[2]._1.interopData);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    LODWORD(v11) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleServantBase->klass[1]._2.naturalAligment)(
                       titleServantBase,
                       titleServantBase->klass[1].vtable._0_Equals.methodPtr));
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v11 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0LL);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)titleServantBase,
                                     0LL);
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v16 = (float)(1.0 - v15)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = v16
                          + (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 0, 0LL);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      UILabel__set_alignment((UILabel_o *)titleServantBase, 1, 0LL);
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
      titleName = (UIWidget_o *)this->fields.titleName;
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      if ( !titleName )
        goto LABEL_45;
      UIWidget__set_width(
        titleName,
        ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
    v17 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    if ( !v17 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v17,
      ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetItem(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *messageLabel; // x0
  int v19; // w28
  UILabel_o *v20; // x25
  UnityEngine_GameObject_o *mainPrefab; // x26
  UnityEngine_GameObject_o *rubyPrefab; // x27
  RubyLabelHelper_o *v23; // x24
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w21
  Il2CppObject *Master_object; // x24
  const MethodInfo *v27; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v30; // x24
  _BOOL4 v31; // w26
  UnityEngine_Object_o *baseCollider; // x24
  int v33; // w27
  int v34; // s0
  float v35; // s1
  float v37; // s1
  UnityEngine_Object_o *baseSprite; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v40; // w27
  _BOOL4 v41; // w24
  float v42; // s0
  float v43; // s2
  float v44; // s9
  float v45; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v47; // s1
  float v48; // s8
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  float v51; // s0
  float v52; // s2
  float v53; // s8
  float v54; // s9
  UnityEngine_Object_o *newIcon; // x21
  Il2CppObject *Component_object; // x23
  float v57; // s0
  float v58; // s3
  float v59; // s1
  float v60; // s2
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18C0A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantVoiceMaster___, item);
    sub_1BCAFF8(&DataManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v16);
    sub_1BCAFF8(&RubyLabelHelper_TypeInfo, v17);
    byte_4B18C0A = 1;
  }
  this->fields.dispMode = mode;
  if ( !item || !mode || !this->fields.isFirst )
    return;
  messageLabel = this->fields.messageLabel;
  this->fields.isFirst = 0;
  if ( !messageLabel )
    goto LABEL_86;
  if ( !text )
    goto LABEL_86;
  v19 = *((_DWORD *)messageLabel + 43);
  UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 106) * text->fields._stringLength, 0LL);
  v20 = this->fields.messageLabel;
  rubyPrefab = this->fields.rubyPrefab;
  mainPrefab = this->fields.mainPrefab;
  v23 = (RubyLabelHelper_o *)sub_1BCB244(RubyLabelHelper_TypeInfo);
  RubyLabelHelper___ctor(v23, v20, mainPrefab, rubyPrefab, 0LL);
  if ( !v23 )
    goto LABEL_86;
  RubyLabelHelper__SetText(v23, text, 0LL);
  Size = RubyLabelHelper__get_Size(v23, 0LL);
  if ( Size.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)Size.fields.y;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v27);
  messageLabel = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  this->fields.svtId = (int)messageLabel;
  if ( !Master_object )
    goto LABEL_86;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          (ServantVoiceMaster_o *)Master_object,
                          (int32_t)messageLabel,
                          0LL);
  v31 = item->fields.svtEntity
     && (v30 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v30 != 0LL;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v33 = y - v19;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)messageLabel, 0LL);
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    v37 = v35 + (float)v33;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)messageLabel, *(UnityEngine_Vector3_o *)&v34, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + v33, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v40 = 0;
  else
    v40 = v31;
  if ( commandCodeEntity )
  {
    messageLabel = this->fields.titleCommandCodeBase;
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
    messageLabel = this->fields.titleServantBase;
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    goto LABEL_46;
  }
  messageLabel = item->fields.svtEntity;
  if ( !messageLabel
    || ((messageLabel = (void *)ServantEntity__get_IsServantEquip((ServantEntity_o *)messageLabel, 0LL),
         ((unsigned __int8)messageLabel & 1) == 0)
      ? (v41 = v40)
      : (v41 = 0),
        !this->fields.titleServantBase) )
  {
LABEL_86:
    sub_1BCB254(messageLabel, item);
  }
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.titleServantBase, 0, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( messageLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
      messageLabel = this->fields.titleCommandCodeBase;
      if ( messageLabel )
      {
LABEL_46:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
        goto LABEL_47;
      }
    }
    goto LABEL_86;
  }
  UnityEngine_GameObject__SetActive(this->fields.titleServantBase, 1, 0LL);
  messageLabel = this->fields.titleEquipBase;
  if ( !messageLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = this->fields.titleCommandCodeBase;
  if ( !messageLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = this->fields.titleServantBase;
  if ( !messageLabel )
    goto LABEL_86;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)messageLabel,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v31 = v40;
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
    goto LABEL_47;
  v57 = 0.5;
  if ( isOpen )
    v57 = 1.0;
  if ( !Component_object )
    goto LABEL_86;
  v58 = 1.0;
  v59 = v57;
  v60 = v57;
  UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v57, 0LL);
  v31 = v41;
LABEL_47:
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)messageLabel,
                                     0LL);
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  v44 = v42;
  v45 = v43;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  v61.fields.x = v44;
  v61.fields.y = (float)(Size.fields.y * 0.5) + 20.0;
  v61.fields.z = v45;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v61, 0LL);
  if ( v31 )
  {
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      gameObject,
      (float)((float)(Size.fields.y * 0.5) + 20.0) + this->fields.SCRIPT_BUTTON_ADD_POS_Y,
      0LL);
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)(&v47 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)messageLabel,
                                             0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v48 = v47;
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v49, v48 + this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v50, this->fields.BASE_SPRITE_ADD_POS_Y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + 64, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)messageLabel,
                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !messageLabel )
      goto LABEL_86;
    UISprite__set_spriteName((UISprite_o *)messageLabel, this->fields.TITLE_SPRITE_NAME, 0LL);
  }
  else
  {
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)messageLabel,
                                       0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v53 = v51;
    v54 = v52;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    v62.fields.y = (float)(Size.fields.y * 0.5) + -14.0;
    v62.fields.x = v53;
    v62.fields.z = v54;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v62, 0LL);
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    messageLabel = this->fields.newIcon;
    if ( !messageLabel )
      goto LABEL_86;
    ShiningIconComponent__Set_40206624((ShiningIconComponent_o *)messageLabel, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B18C12 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1);
    byte_4B18C12 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewItemDrawText___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___PlayScript_b__41_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___RefreshUI_b__42_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___OnClickPlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  Il2CppObject *Object_object__50315216; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v12; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v13; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v14; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v15; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v16; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v17; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v18; // x20
  const MethodInfo *v19; // x3

  v4 = this;
  if ( (byte_4B18C13 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, data);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1BCAFF8(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    v6);
    byte_4B18C13 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_24;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              data,
                              _4__this->fields.SUMMON_BG_OBJECT_NAME,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         Object_object__50315216,
         (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBg = (struct UnityEngine_GameObject_o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.summonBg, (int32_t)v9, v10, v11);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v12->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_24;
  v14 = this;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v13->fields.summonBgRoot;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  if ( !v14 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v14, (UnityEngine_Transform_o *)this, 0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v15->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v16 = this;
  if ( !byte_4B16191 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1BCAFF8(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    data);
    byte_4B16191 = 1;
  }
  if ( !v16 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v17->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v18 = this;
  if ( !byte_4B16196 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1BCAFF8(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    data);
    byte_4B16196 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v18,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_24:
    sub_1BCB254(this, data);
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    (ServantStatusFlavorTextListViewItemDrawText_o *)this,
    v4->fields.inactiveCameras,
    v4->fields.inactivePrefabs,
    v19);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  void *inactivePrefabs; // x0
  __int64 v16; // x1
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v21; // x8
  UnityEngine_Object_o *battleBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v23; // x8
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v28; // x8
  CommonUI_o *v29; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21
  Il2CppObject *v32; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v36; // x8
  int32_t svtId; // w20
  System_Action_o *_9__2; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18C14 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&ScriptManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BCAFF8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, v11);
    sub_1BCAFF8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__, v12);
    sub_1BCAFF8(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v13);
    byte_4B18C14 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v17 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_34;
  _4__this->fields.ambientLight.fields.r = v17;
  _4__this->fields.ambientLight.fields.g = v18;
  _4__this->fields.ambientLight.fields.b = v19;
  _4__this->fields.ambientLight.fields.a = v20;
  v43.fields.r = 1.0;
  v43.fields.g = 1.0;
  v43.fields.b = 1.0;
  v43.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v43, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_34;
  battleBg = (UnityEngine_Object_o *)v21->fields.battleBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(battleBg, 0LL, 0LL);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v23 = this->fields.__4__this;
    if ( !v23 )
      goto LABEL_34;
    inactivePrefabs = v23->fields.battleBg;
    if ( !inactivePrefabs )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inactivePrefabs, 0, 0LL);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)inactivePrefabs,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v42.fields._current )
      sub_1BCB254(0LL, v24);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v42.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCB254(0LL, v26);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  v29 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  v31 = *(System_Action_o **)(*((_QWORD *)inactivePrefabs + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)inactivePrefabs + 56) )
    {
      j_il2cpp_runtime_class_init_0(inactivePrefabs);
      inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)inactivePrefabs + 23);
    v31 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v31, v32, Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__41_1 = v31;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__41_1, (int32_t)v31, v34, v35);
  }
  if ( !v29
    || (inactivePrefabs = (void *)CommonUI__maskFadein(v29, DEFAULT_FADE_TIME, v31, 0LL),
        (v36 = this->fields.__4__this) == 0LL) )
  {
LABEL_34:
    sub_1BCB254(inactivePrefabs, v16);
  }
  svtId = v36->fields.svtId;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v39, v40);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayGacha(svtId, 0, 0, _9__2, 0, -1, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__2(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BCB254(this, method);
  ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
    this->fields.__4__this,
    this->fields.inactiveCameras,
    this->fields.inactivePrefabs,
    v2);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___RefreshUI_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **v2; // x19
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
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v17; // x8
  UnityEngine_Object_o *monitor; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v19; // x8
  UnityEngine_Object_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v23; // x8
  System_String_o *_4__this; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v25; // x8
  UnityEngine_Object_o *v26; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v27; // x8
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Color_o *v30; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v31; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v33; // x8
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  ServantStatusFlavorTextListViewItemDrawText_o *v39; // x0
  Il2CppObject *current; // x20
  __int64 v41; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v45; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v47; // x8
  CommonUI_o *v48; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *items; // x20
  Il2CppObject *v51; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF

  v2 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_4B18C15 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AssetManager_TypeInfo, v3);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Camera__GetEnumerator__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BCAFF8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, v15);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_1BCAFF8(
                                                                                    &ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo,
                                                                                    v16);
    byte_4B18C15 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v56, 0, sizeof(v56));
  v17 = v2[2];
  if ( !v17 )
    goto LABEL_59;
  monitor = (UnityEngine_Object_o *)v17[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  monitor,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = v2[2];
    if ( !v19 )
      goto LABEL_59;
    v20 = (UnityEngine_Object_o *)v19[2].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v20, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].monitor = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this[2].monitor, 0, v21, v22);
  }
  v23 = v2[2];
  if ( !v23 )
    goto LABEL_59;
  _4__this = (System_String_o *)v23[3].fields.__4__this;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(_4__this, 0LL);
  v25 = v2[2];
  if ( !v25 )
    goto LABEL_59;
  v26 = (UnityEngine_Object_o *)v25[2].fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  v26,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v27 = v2[2];
    if ( !v27 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v27[2].fields.__4__this;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].fields.__4__this = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this[2].fields, 0, v28, v29);
  }
  v30 = (UnityEngine_Color_o *)v2[2];
  if ( !v30 )
    goto LABEL_59;
  UnityEngine_RenderSettings__set_ambientLight(v30[4], 0LL);
  v31 = v2[2];
  if ( !v31 )
    goto LABEL_59;
  klass = (UnityEngine_Object_o *)v31[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  klass,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v33 = v2[2];
    if ( !v33 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v33[2].klass;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].klass = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this[2], 0, v34, v35);
  }
  this = v2[3];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v55;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1BCB254(0LL, v36);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  this = v2[4];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v56 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v39 = (ServantStatusFlavorTextListViewItemDrawText_o *)v2[2];
    if ( !v39 )
      sub_1BCB254(0LL, v37);
    current = v56.fields._current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v39,
      (UnityEngine_GameObject_o *)v56.fields._current,
      1,
      v38);
    if ( !current )
      sub_1BCB254(v41, v42);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_1BCB254(0LL, v44);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v45 = v2[2];
  if ( !v45 )
    goto LABEL_59;
  BYTE4(v45[1].fields.__4__this) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v47 = AvalonSceneManager_TypeInfo;
  v48 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v47 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v47->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  items = (System_Action_o *)this[4].fields.inactiveCameras->fields._items;
  if ( !items )
  {
    if ( !LODWORD(this[5].fields.inactiveCameras) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v51 = (Il2CppObject *)this[4].fields.inactiveCameras->klass;
    items = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(items, v51, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = items;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__42_1, (int32_t)items, v53, v54);
  }
  if ( !v48 )
LABEL_59:
    sub_1BCB254(this, method);
  CommonUI__maskFadein(v48, DEFAULT_FADE_TIME, items, 0LL);
}