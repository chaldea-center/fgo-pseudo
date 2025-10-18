void ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  if ( (byte_4C3F311 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    byte_4C3F311 = 1;
  }
  *ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields = (struct ServantStatusFlavorTextListViewItemDrawText_StaticFields)0xFFFFFFAD0000009ALL;
}


void ServantStatusFlavorTextListViewItemDrawText___ctor(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x20
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x1
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x1
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x1
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x1
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_List_object__o *v63; // x20
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  _QWORD *v66; // x9
  Il2CppObject *v67; // x1
  struct System_Object_array *v68; // x8
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  Il2CppObject *v73; // x1
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x1
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  Il2CppObject *v87; // x1
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  Il2CppObject *v94; // x1
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  System_Collections_Generic_List_object__o *v101; // x20
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  _QWORD *v104; // x9
  Il2CppObject *v105; // x1
  struct System_Object_array *v106; // x8
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  Il2CppObject *v111; // x1
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  Il2CppObject *v118; // x1
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  Il2CppObject *v125; // x1
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3

  if ( (byte_4C3F310 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&StringLiteral_17137/*"bg(Clone)/bg10500"*/);
    sub_1C37058(&StringLiteral_13168/*"SummonBgRoot"*/);
    sub_1C37058(&StringLiteral_13319/*"SystemUICamera"*/);
    sub_1C37058(&StringLiteral_3150/*"Bg/10500"*/);
    sub_1C37058(&StringLiteral_6113/*"EquipGraphListMenuPrefab(Clone)"*/);
    sub_1C37058(&StringLiteral_12747/*"ServantStatusDialogPrefab(Clone)"*/);
    sub_1C37058(&StringLiteral_3232/*"BtnBg"*/);
    sub_1C37058(&StringLiteral_14562/*"TouchCamera"*/);
    sub_1C37058(&StringLiteral_4420/*"ChoiceButton"*/);
    sub_1C37058(&StringLiteral_3153/*"BgCamera"*/);
    sub_1C37058(&StringLiteral_4606/*"CommonUI"*/);
    sub_1C37058(&StringLiteral_6884/*"FrontCommonUICamera"*/);
    sub_1C37058(&StringLiteral_17136/*"bg"*/);
    sub_1C37058(&StringLiteral_4615/*"CommonUICamera"*/);
    sub_1C37058(&StringLiteral_13185/*"SupportServantEquipListMenuPrefab(Clone)"*/);
    sub_1C37058(&StringLiteral_8490/*"LockButton"*/);
    sub_1C37058(&StringLiteral_12730/*"ServantEquipStatusDialogPrefab(Clone)"*/);
    sub_1C37058(&StringLiteral_13083/*"StatusButton"*/);
    sub_1C37058(&StringLiteral_11227/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/);
    sub_1C37058(&StringLiteral_20419/*"img_index_02"*/);
    sub_1C37058(&StringLiteral_7180/*"Ground/Field/bg(Clone)"*/);
    byte_4C3F310 = 1;
  }
  v5 = StringLiteral_20419/*"img_index_02"*/;
  this->fields.TITLE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20419/*"img_index_02"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.TITLE_SPRITE_NAME, v5, v2, v3);
  this->fields.MESSAGE_LABEL_ADD_POS_Y = -45.0;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = 0xC25C0000C2080000LL;
  v6 = StringLiteral_4606/*"CommonUI"*/;
  this->fields.COMMON_UI = (struct System_String_o *)StringLiteral_4606/*"CommonUI"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.COMMON_UI, v6, v7, v8);
  v9 = StringLiteral_7180/*"Ground/Field/bg(Clone)"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_7180/*"Ground/Field/bg(Clone)"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.BATTLE_BG_OBJECT, v9, v10, v11);
  v12 = StringLiteral_17137/*"bg(Clone)/bg10500"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_17137/*"bg(Clone)/bg10500"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SUMMON_BG_OBJECT, v12, v13, v14);
  v15 = StringLiteral_13168/*"SummonBgRoot"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_13168/*"SummonBgRoot"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SUMMON_BG_ROOT, v15, v16, v17);
  v18 = StringLiteral_3150/*"Bg/10500"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_3150/*"Bg/10500"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SUMMON_BG_ASSET_NAME, v18, v19, v20);
  v21 = StringLiteral_17136/*"bg"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_17136/*"bg"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v24 )
    goto LABEL_63;
  v28 = (Il2CppObject *)StringLiteral_12747/*"ServantStatusDialogPrefab(Clone)"*/;
  items = v24->fields._items;
  v30 = Method_System_Collections_Generic_List_string__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_63;
  size = v24->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v28,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v28;
    sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v28, v26, v27);
  }
  v35 = (Il2CppObject *)StringLiteral_12730/*"ServantEquipStatusDialogPrefab(Clone)"*/;
  v36 = v24->fields._items;
  v37 = Method_System_Collections_Generic_List_string__Add__;
  ++v24->fields._version;
  if ( !v36 )
    goto LABEL_63;
  v38 = v24->fields._size;
  if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v35,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v36->obj.klass + v38;
    v24->fields._size = v38 + 1;
    v39[4] = (Il2CppClass *)v35;
    sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v35, v33, v34);
  }
  v42 = (Il2CppObject *)StringLiteral_6113/*"EquipGraphListMenuPrefab(Clone)"*/;
  v43 = v24->fields._items;
  v44 = Method_System_Collections_Generic_List_string__Add__;
  ++v24->fields._version;
  if ( !v43 )
    goto LABEL_63;
  v45 = v24->fields._size;
  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v42,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v24->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v42;
    sub_1C36FFC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v42, v40, v41);
  }
  v49 = (Il2CppObject *)StringLiteral_13185/*"SupportServantEquipListMenuPrefab(Clone)"*/;
  v50 = v24->fields._items;
  v51 = Method_System_Collections_Generic_List_string__Add__;
  ++v24->fields._version;
  if ( !v50 )
    goto LABEL_63;
  v52 = v24->fields._size;
  if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v49,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &v50->obj.klass + v52;
    v24->fields._size = v52 + 1;
    v53[4] = (Il2CppClass *)v49;
    sub_1C36FFC((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v49, v47, v48);
  }
  v56 = (Il2CppObject *)StringLiteral_11227/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/;
  v57 = v24->fields._items;
  v58 = Method_System_Collections_Generic_List_string__Add__;
  ++v24->fields._version;
  if ( !v57 )
    goto LABEL_63;
  v59 = v24->fields._size;
  if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      v56,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &v57->obj.klass + v59;
    v24->fields._size = v59 + 1;
    v60[4] = (Il2CppClass *)v56;
    sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v56, v54, v55);
  }
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.INACTIVE_PREFABS, (int32_t)v24, v61, v62);
  v63 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v63 )
    goto LABEL_63;
  v66 = Method_System_Collections_Generic_List_string__Add__;
  v67 = (Il2CppObject *)StringLiteral_3153/*"BgCamera"*/;
  v68 = v63->fields._items;
  ++v63->fields._version;
  if ( !v68 )
    goto LABEL_63;
  v69 = v63->fields._size;
  if ( (unsigned int)v69 >= LODWORD(v68->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v63,
      v67,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &v68->obj.klass + v69;
    v63->fields._size = v69 + 1;
    v70[4] = (Il2CppClass *)v67;
    sub_1C36FFC((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v67, v64, v65);
  }
  v73 = (Il2CppObject *)StringLiteral_4615/*"CommonUICamera"*/;
  v74 = v63->fields._items;
  v75 = Method_System_Collections_Generic_List_string__Add__;
  ++v63->fields._version;
  if ( !v74 )
    goto LABEL_63;
  v76 = v63->fields._size;
  if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v63,
      v73,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = &v74->obj.klass + v76;
    v63->fields._size = v76 + 1;
    v77[4] = (Il2CppClass *)v73;
    sub_1C36FFC((CGThumbnailListItem_o *)(v77 + 4), (int32_t)v73, v71, v72);
  }
  v80 = (Il2CppObject *)StringLiteral_6884/*"FrontCommonUICamera"*/;
  v81 = v63->fields._items;
  v82 = Method_System_Collections_Generic_List_string__Add__;
  ++v63->fields._version;
  if ( !v81 )
    goto LABEL_63;
  v83 = v63->fields._size;
  if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v63,
      v80,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &v81->obj.klass + v83;
    v63->fields._size = v83 + 1;
    v84[4] = (Il2CppClass *)v80;
    sub_1C36FFC((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v80, v78, v79);
  }
  v87 = (Il2CppObject *)StringLiteral_13319/*"SystemUICamera"*/;
  v88 = v63->fields._items;
  v89 = Method_System_Collections_Generic_List_string__Add__;
  ++v63->fields._version;
  if ( !v88 )
    goto LABEL_63;
  v90 = v63->fields._size;
  if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v63,
      v87,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = &v88->obj.klass + v90;
    v63->fields._size = v90 + 1;
    v91[4] = (Il2CppClass *)v87;
    sub_1C36FFC((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v87, v85, v86);
  }
  v94 = (Il2CppObject *)StringLiteral_14562/*"TouchCamera"*/;
  v95 = v63->fields._items;
  v96 = Method_System_Collections_Generic_List_string__Add__;
  ++v63->fields._version;
  if ( !v95 )
    goto LABEL_63;
  v97 = v63->fields._size;
  if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v63,
      v94,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
  }
  else
  {
    v98 = &v95->obj.klass + v97;
    v63->fields._size = v97 + 1;
    v98[4] = (Il2CppClass *)v94;
    sub_1C36FFC((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v94, v92, v93);
  }
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v63;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SCRIPT_CAMERAS, (int32_t)v63, v99, v100);
  v101 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v101 )
    goto LABEL_63;
  v104 = Method_System_Collections_Generic_List_string__Add__;
  v105 = (Il2CppObject *)StringLiteral_3232/*"BtnBg"*/;
  v106 = v101->fields._items;
  ++v101->fields._version;
  if ( !v106 )
    goto LABEL_63;
  v107 = v101->fields._size;
  if ( (unsigned int)v107 >= LODWORD(v106->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v105,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = &v106->obj.klass + v107;
    v101->fields._size = v107 + 1;
    v108[4] = (Il2CppClass *)v105;
    sub_1C36FFC((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v105, v102, v103);
  }
  v111 = (Il2CppObject *)StringLiteral_13083/*"StatusButton"*/;
  v112 = v101->fields._items;
  v113 = Method_System_Collections_Generic_List_string__Add__;
  ++v101->fields._version;
  if ( !v112 )
    goto LABEL_63;
  v114 = v101->fields._size;
  if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v111,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
  }
  else
  {
    v115 = &v112->obj.klass + v114;
    v101->fields._size = v114 + 1;
    v115[4] = (Il2CppClass *)v111;
    sub_1C36FFC((CGThumbnailListItem_o *)(v115 + 4), (int32_t)v111, v109, v110);
  }
  v118 = (Il2CppObject *)StringLiteral_8490/*"LockButton"*/;
  v119 = v101->fields._items;
  v120 = Method_System_Collections_Generic_List_string__Add__;
  ++v101->fields._version;
  if ( !v119 )
    goto LABEL_63;
  v121 = v101->fields._size;
  if ( (unsigned int)v121 >= LODWORD(v119->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v118,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
  }
  else
  {
    v122 = &v119->obj.klass + v121;
    v101->fields._size = v121 + 1;
    v122[4] = (Il2CppClass *)v118;
    sub_1C36FFC((CGThumbnailListItem_o *)(v122 + 4), (int32_t)v118, v116, v117);
  }
  v125 = (Il2CppObject *)StringLiteral_4420/*"ChoiceButton"*/;
  v126 = v101->fields._items;
  v127 = Method_System_Collections_Generic_List_string__Add__;
  ++v101->fields._version;
  if ( !v126 )
LABEL_63:
    sub_1C372B4(v25);
  v128 = v101->fields._size;
  if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v125,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
  }
  else
  {
    v129 = &v126->obj.klass + v128;
    v101->fields._size = v128 + 1;
    v129[4] = (Il2CppClass *)v125;
    sub_1C36FFC((CGThumbnailListItem_o *)(v129 + 4), (int32_t)v125, v123, v124);
  }
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v101;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.TARGET_BUTTON_NAME, (int32_t)v101, v130, v131);
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusFlavorTextListViewItemDrawText__Awake(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t ServantStatusFlavorTextListViewItemDrawText__GetKind(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  return 1;
}


void ServantStatusFlavorTextListViewItemDrawText__OnClickPlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_object__o *INACTIVE_PREFABS; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  unsigned int allCamerasCount; // w0
  __int64 v10; // x22
  System_Collections_Generic_List_object__o *v11; // x23
  System_Collections_Generic_List_GameObject__o **v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *v15; // x23
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  System_Collections_Generic_List_object__o *v24; // x24
  System_Collections_Generic_List_Camera__o **v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int v28; // w8
  unsigned int v29; // w26
  __int64 v30; // x8
  UnityEngine_Behaviour_o *v31; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x8
  UnityEngine_GameObject_o *v38; // x22
  struct UnityEngine_GameObject_o *Deep; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_Object_o *summonBgRoot; // x22
  struct UnityEngine_GameObject_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UnityEngine_Object_o *v46; // x22
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *summonBg; // x22
  System_String_o *SUMMON_BG_ASSET_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v50; // x21
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3F30D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&UnityEngine_Camera___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Camera__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_Camera___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_Camera__TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    sub_1C37058(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__);
    sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
    byte_4C3F30D = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v3 = sub_1C372A4(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_53;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  if ( this->fields.svtId && !this->fields.isScriptPlaying )
  {
    this->fields.isScriptPlaying = 1;
    v7 = Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__;
    if ( (*((_BYTE *)Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C37070(Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0);
    v10 = sub_1C37100(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras((UnityEngine_Camera_array *)v10, 0);
    v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v3 + 32) = v11;
    v12 = (System_Collections_Generic_List_GameObject__o **)(v3 + 32);
    sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v11, v13, v14);
    INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.INACTIVE_PREFABS;
    if ( !INACTIVE_PREFABS )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v51,
      INACTIVE_PREFABS,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v52 = v51;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v15 = UnityEngine_GameObject__Find((System_String_o *)v52.fields._current, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v15, 0, v16);
        v19 = (System_Collections_Generic_List_object__o *)*v12;
        if ( !*v12 )
          sub_1C372B4(0);
        items = v19->fields._items;
        v21 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v19->fields._version;
        if ( !items )
          sub_1C372B4(v19);
        size = v19->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)v15,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v15;
          sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v15, v17, v18);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v24 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Camera__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v24,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v3 + 24) = v24;
    v25 = (System_Collections_Generic_List_Camera__o **)(v3 + 24);
    sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v24, v26, v27);
    if ( !v10 )
      goto LABEL_53;
    v28 = *(_DWORD *)(v10 + 24);
    if ( v28 >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= v28 )
          sub_1C372BC(INACTIVE_PREFABS);
        v30 = v10 + 8LL * (int)v29;
        v31 = *(UnityEngine_Behaviour_o **)(v30 + 32);
        if ( !v31 )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          *(UnityEngine_Component_o **)(v30 + 32),
                                                                          0);
        if ( !INACTIVE_PREFABS )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Object__get_name(
                                                                          (UnityEngine_Object_o *)INACTIVE_PREFABS,
                                                                          0);
        if ( !this->fields.SCRIPT_CAMERAS )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                                          (System_Collections_Generic_List_object__o *)this->fields.SCRIPT_CAMERAS,
                                                                          (Il2CppObject *)INACTIVE_PREFABS,
                                                                          (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)INACTIVE_PREFABS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v31, 0, 0);
          INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)*v25;
          if ( !*v25 )
            break;
          v34 = INACTIVE_PREFABS->fields._items;
          v35 = Method_System_Collections_Generic_List_Camera__Add__;
          ++INACTIVE_PREFABS->fields._version;
          if ( !v34 )
            break;
          v36 = INACTIVE_PREFABS->fields._size;
          if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              INACTIVE_PREFABS,
              (Il2CppObject *)v31,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &v34->obj.klass + v36;
            INACTIVE_PREFABS->fields._size = v36 + 1;
            v37[4] = (Il2CppClass *)v31;
            sub_1C36FFC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v31, v32, v33);
          }
        }
        v28 = *(_DWORD *)(v10 + 24);
        if ( (int)++v29 >= v28 )
          goto LABEL_33;
      }
LABEL_53:
      sub_1C372B4(INACTIVE_PREFABS);
    }
LABEL_33:
    v38 = UnityEngine_GameObject__Find(this->fields.COMMON_UI, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0, 0) )
    {
      Deep = GameObjectExtensions__FindDeep(v38, this->fields.SUMMON_BG_ROOT, 1, 0);
      this->fields.summonBgRoot = Deep;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.summonBgRoot, (int32_t)Deep, v40, v41);
    }
    summonBgRoot = (UnityEngine_Object_o *)this->fields.summonBgRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBgRoot, 0, 0) )
    {
      INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.summonBgRoot;
      if ( !INACTIVE_PREFABS )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)INACTIVE_PREFABS, 1, 0);
    }
    v43 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0);
    this->fields.battleBg = v43;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.battleBg, (int32_t)v43, v44, v45);
    v46 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v46, 0, 0) )
      goto LABEL_48;
    summonBg = (UnityEngine_Object_o *)this->fields.summonBg;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBg, 0, 0) )
    {
LABEL_48:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(this, *v25, *v12, v47);
    }
    else
    {
      SUMMON_BG_ASSET_NAME = this->fields.SUMMON_BG_ASSET_NAME;
      v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v50,
        (Il2CppObject *)v3,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(SUMMON_BG_ASSET_NAME, v50, 1, 0);
    }
  }
}


void ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4C3F30E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__);
    sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
    byte_4C3F30E = 1;
  }
  v7 = sub_1C372A4(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = inactivePrefabs;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)inactivePrefabs, v11, v12);
  *(_QWORD *)(v7 + 32) = inactiveCameras;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)inactiveCameras, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0);
  if ( !v17 )
LABEL_8:
    sub_1C372B4(v8);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0);
}


void ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v16; // x8
  CommonUI_o *v17; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x21

  if ( (byte_4C3F30F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__);
    sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
    byte_4C3F30F = 1;
  }
  v7 = sub_1C372A4(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = inactiveCameras;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)inactiveCameras, v11, v12);
  *(_QWORD *)(v7 + 32) = inactivePrefabs;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)inactivePrefabs, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0);
  if ( !v17 )
LABEL_8:
    sub_1C372B4(v8);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0);
}


void ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *TARGET_BUTTON_NAME; // x0
  UnityEngine_Object_o *Deep; // x21
  _BOOL8 v9; // x0
  Il2CppObject *Component_object; // x22
  _BOOL8 v11; // x0
  Il2CppObject *v12; // x21
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3F30C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C37058(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F30C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  TARGET_BUTTON_NAME = this->fields.TARGET_BUTTON_NAME;
  if ( !TARGET_BUTTON_NAME )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)TARGET_BUTTON_NAME,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v15.fields._current,
                                     1,
                                     0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality(Deep, 0, 0);
    if ( !v9 )
    {
      if ( !Deep )
        sub_1C372B4(v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Deep,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( v11 )
      {
        if ( !Component_object )
          sub_1C372B4(v11);
        ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))Component_object->klass->vtable[5].methodPtr)(
          Component_object,
          isEnable,
          Component_object->klass->vtable[5].method);
      }
      v12 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)Deep,
              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( v13 )
      {
        if ( !v12 )
          sub_1C372B4(v13);
        ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))v12->klass->vtable[5].methodPtr)(
          v12,
          isEnable,
          v12->klass->vtable[5].method);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void ServantStatusFlavorTextListViewItemDrawText__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *titleServantBase; // x0
  Il2CppObject *Component_object; // x21
  float v7; // s8
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v11; // s8
  float v12; // s8
  UILabel_o *v13; // x19

  if ( (byte_4C3F30B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F30B = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0) )
  {
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( Component_object )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Component_object,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0);
        return;
      }
LABEL_45:
      sub_1C372B4(titleServantBase);
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( !Component_object )
        goto LABEL_45;
      UISprite__set_spriteName(
        (UISprite_o *)Component_object,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0);
    }
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 2, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_alignment((UILabel_o *)titleServantBase, 2, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, title, 0);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleServantBase->klass[2]._1.parent)(
      titleServantBase,
      titleServantBase->klass[2]._1.generic_class);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    LODWORD(v7) = COERCE_UNSIGNED_INT128(
                    ((long double (__fastcall *)(UnityEngine_GameObject_o *, _QWORD))*(_QWORD *)&titleServantBase->klass[1]._2.field_count)(
                      titleServantBase,
                      *(_QWORD *)&titleServantBase->klass[1]._2.interfaces_count));
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v7 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)titleServantBase, 0);
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v12 = (float)(1.0 - v11)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0);
      TITLE_NAME_LEFT_POS = v12
                          + (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 0, 0);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      UILabel__set_alignment((UILabel_o *)titleServantBase, 1, 0);
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
      titleName = (UIWidget_o *)this->fields.titleName;
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      if ( !titleName )
        goto LABEL_45;
      UIWidget__set_width(
        titleName,
        ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0);
    titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
    v13 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    if ( !v13 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v13,
      ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewItemDrawText__SetItem(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  void *messageLabel; // x0
  int v15; // w28
  UILabel_o *v16; // x25
  UnityEngine_GameObject_o *mainPrefab; // x26
  UnityEngine_GameObject_o *rubyPrefab; // x27
  RubyLabelHelper_o *v19; // x24
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w21
  Il2CppObject *Master_object; // x24
  const MethodInfo *v23; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v26; // x24
  _BOOL4 v27; // w26
  UnityEngine_Object_o *baseCollider; // x24
  int v29; // w27
  float v30; // s1
  UnityEngine_Object_o *baseSprite; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v33; // w27
  _BOOL4 v34; // w24
  float x; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v38; // s8
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  float v41; // s8
  float v42; // s9
  UnityEngine_Object_o *newIcon; // x21
  Il2CppObject *Component_object; // x23
  float v45; // s0 OVERLAPPED
  float v46; // s3
  float v47; // s1
  float v48; // s2
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F30A & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&RubyLabelHelper_TypeInfo);
    byte_4C3F30A = 1;
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
  v15 = *((_DWORD *)messageLabel + 43);
  UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 106) * text->fields._stringLength, 0);
  v16 = this->fields.messageLabel;
  rubyPrefab = this->fields.rubyPrefab;
  mainPrefab = this->fields.mainPrefab;
  v19 = (RubyLabelHelper_o *)sub_1C372A4(RubyLabelHelper_TypeInfo);
  RubyLabelHelper___ctor(v19, v16, mainPrefab, rubyPrefab, 0);
  if ( !v19 )
    goto LABEL_86;
  RubyLabelHelper__SetText(v19, text, 0);
  Size = RubyLabelHelper__get_Size(v19, 0);
  if ( Size.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)Size.fields.y;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v23);
  messageLabel = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0);
  this->fields.svtId = (int)messageLabel;
  if ( !Master_object )
    goto LABEL_86;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          (ServantVoiceMaster_o *)Master_object,
                          (int32_t)messageLabel,
                          0);
  v27 = item->fields.svtEntity
     && (v26 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0))
     && v26 != 0;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = y - v15;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    v49 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)messageLabel, 0);
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    v30 = v49.fields.y + (float)v29;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)messageLabel, v49, 0);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
  {
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + v29, 0);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v33 = 0;
  else
    v33 = v27;
  if ( commandCodeEntity )
  {
    messageLabel = this->fields.titleCommandCodeBase;
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0);
    messageLabel = this->fields.titleServantBase;
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    goto LABEL_46;
  }
  messageLabel = item->fields.svtEntity;
  if ( !messageLabel
    || ((messageLabel = (void *)ServantEntity__get_IsServantEquip((ServantEntity_o *)messageLabel, 0),
         ((unsigned __int8)messageLabel & 1) == 0)
      ? (v34 = v33)
      : (v34 = 0),
        !this->fields.titleServantBase) )
  {
LABEL_86:
    sub_1C372B4(messageLabel);
  }
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.titleServantBase, 0, 0);
    messageLabel = this->fields.titleEquipBase;
    if ( messageLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0);
      messageLabel = this->fields.titleCommandCodeBase;
      if ( messageLabel )
      {
LABEL_46:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
        goto LABEL_47;
      }
    }
    goto LABEL_86;
  }
  UnityEngine_GameObject__SetActive(this->fields.titleServantBase, 1, 0);
  messageLabel = this->fields.titleEquipBase;
  if ( !messageLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  messageLabel = this->fields.titleCommandCodeBase;
  if ( !messageLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  messageLabel = this->fields.titleServantBase;
  if ( !messageLabel )
    goto LABEL_86;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)messageLabel,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  v27 = v33;
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
    goto LABEL_47;
  v45 = 0.5;
  if ( isOpen )
    v45 = 1.0;
  if ( !Component_object )
    goto LABEL_86;
  v46 = 1.0;
  v47 = v45;
  v48 = v45;
  UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v45, 0);
  v27 = v34;
LABEL_47:
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_86;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0);
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  x = localPosition.fields.x;
  z = localPosition.fields.z;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_86;
  v51.fields.x = x;
  v51.fields.y = (float)(Size.fields.y * 0.5) + 20.0;
  v51.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v51, 0);
  if ( v27 )
  {
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
    GameObjectExtensions__SetLocalPositionY(
      gameObject,
      (float)((float)(Size.fields.y * 0.5) + 20.0) + this->fields.SCRIPT_BUTTON_ADD_POS_Y,
      0);
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0);
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0);
    if ( !messageLabel )
      goto LABEL_86;
    v52 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v38 = v52.fields.y;
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
    GameObjectExtensions__SetLocalPositionY(v39, v38 + this->fields.MESSAGE_LABEL_ADD_POS_Y, 0);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
    GameObjectExtensions__SetLocalPositionY(v40, this->fields.BASE_SPRITE_ADD_POS_Y, 0);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + 64, 0);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)messageLabel,
                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !messageLabel )
      goto LABEL_86;
    UISprite__set_spriteName((UISprite_o *)messageLabel, this->fields.TITLE_SPRITE_NAME, 0);
  }
  else
  {
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0);
    if ( !messageLabel )
      goto LABEL_86;
    v53 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)messageLabel, 0);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v41 = v53.fields.x;
    v42 = v53.fields.z;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0);
    if ( !messageLabel )
      goto LABEL_86;
    v54.fields.y = (float)(Size.fields.y * 0.5) + -14.0;
    v54.fields.x = v41;
    v54.fields.z = v42;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v54, 0);
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0, 0) )
  {
    messageLabel = this->fields.newIcon;
    if ( !messageLabel )
      goto LABEL_86;
    ShiningIconComponent__Set_41022000((ShiningIconComponent_o *)messageLabel, isNew, 0);
  }
}


void ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3F312 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4C3F312 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewItemDrawText___c_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void ServantStatusFlavorTextListViewItemDrawText___c___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewItemDrawText___c___PlayScript_b__41_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusFlavorTextListViewItemDrawText___c___RefreshUI_b__42_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___OnClickPlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v4; // x19
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  Il2CppObject *Object_object__51154888; // x21
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v10; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v11; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v12; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v13; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v14; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v15; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v16; // x20
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_4C3F313 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F313 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_24;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              data,
                              _4__this->fields.SUMMON_BG_OBJECT_NAME,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         Object_object__51154888,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBg = (struct UnityEngine_GameObject_o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.summonBg, (int32_t)v7, v8, v9);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v10->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_24;
  v12 = this;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v11->fields.summonBgRoot;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0);
  if ( !v12 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v12, (UnityEngine_Transform_o *)this, 0);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v13->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0);
  v14 = this;
  if ( !byte_4C3C921 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v14 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v15->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0);
  v16 = this;
  if ( !byte_4C3C926 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v16,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_24:
    sub_1C372B4(this);
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    (ServantStatusFlavorTextListViewItemDrawText_o *)this,
    v4->fields.inactiveCameras,
    v4->fields.inactivePrefabs,
    v17);
}


void ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  void *inactivePrefabs; // x0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v5; // x8
  UnityEngine_Object_o *battleBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v7; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  Il2CppObject *v14; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v18; // x8
  int32_t svtId; // w20
  System_Action_o *_9__2; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o ambientLight; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3F314 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__);
    sub_1C37058(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__);
    sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4C3F314 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  _4__this = this->fields.__4__this;
  ambientLight = UnityEngine_RenderSettings__get_ambientLight(0);
  if ( !_4__this )
    goto LABEL_34;
  _4__this->fields.ambientLight = ambientLight;
  v26.fields.r = 1.0;
  v26.fields.g = 1.0;
  v26.fields.b = 1.0;
  v26.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v26, 0);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_34;
  battleBg = (UnityEngine_Object_o *)v5->fields.battleBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(battleBg, 0, 0);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v7 = this->fields.__4__this;
    if ( !v7 )
      goto LABEL_34;
    inactivePrefabs = v7->fields.battleBg;
    if ( !inactivePrefabs )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inactivePrefabs, 0, 0);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)inactivePrefabs,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_1C372B4(0);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v24.fields._current, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  v13 = *(System_Action_o **)(*((_QWORD *)inactivePrefabs + 23) + 8LL);
  if ( !v13 )
  {
    if ( !*((_DWORD *)inactivePrefabs + 56) )
    {
      j_il2cpp_runtime_class_init_0(inactivePrefabs);
      inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v14 = (Il2CppObject *)**((_QWORD **)inactivePrefabs + 23);
    v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v13, v14, Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, 0);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__41_1 = v13;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__41_1, (int32_t)v13, v16, v17);
  }
  if ( !v11
    || (inactivePrefabs = (void *)CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0),
        (v18 = this->fields.__4__this) == 0) )
  {
LABEL_34:
    sub_1C372B4(inactivePrefabs);
  }
  svtId = v18->fields.svtId;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v21, v22);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayGacha(svtId, 0, 0, _9__2, 0, -1, 0);
}


void ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__2(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
    this->fields.__4__this,
    this->fields.inactiveCameras,
    this->fields.inactivePrefabs,
    v2);
}


void ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___RefreshUI_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **v2; // x19
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v3; // x8
  UnityEngine_Object_o *monitor; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v5; // x8
  UnityEngine_Object_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v9; // x8
  System_String_o *_4__this; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v11; // x8
  UnityEngine_Object_o *v12; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v13; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Color_o *v16; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v17; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v19; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  ServantStatusFlavorTextListViewItemDrawText_o *v23; // x0
  Il2CppObject *current; // x20
  __int64 v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v27; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v29; // x8
  CommonUI_o *v30; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *items; // x20
  Il2CppObject *v33; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF

  v2 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_4C3F315 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Camera__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_1C37058(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4C3F315 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v38, 0, sizeof(v38));
  v3 = v2[2];
  if ( !v3 )
    goto LABEL_59;
  monitor = (UnityEngine_Object_o *)v3[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  monitor,
                                                                                  0,
                                                                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2[2];
    if ( !v5 )
      goto LABEL_59;
    v6 = (UnityEngine_Object_o *)v5[2].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v6, 0);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].monitor = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this[2].monitor, 0, v7, v8);
  }
  v9 = v2[2];
  if ( !v9 )
    goto LABEL_59;
  _4__this = (System_String_o *)v9[3].fields.__4__this;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(_4__this, 0);
  v11 = v2[2];
  if ( !v11 )
    goto LABEL_59;
  v12 = (UnityEngine_Object_o *)v11[2].fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  v12,
                                                                                  0,
                                                                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v2[2];
    if ( !v13 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v13[2].fields.__4__this;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].fields.__4__this = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this[2].fields, 0, v14, v15);
  }
  v16 = (UnityEngine_Color_o *)v2[2];
  if ( !v16 )
    goto LABEL_59;
  UnityEngine_RenderSettings__set_ambientLight(v16[4], 0);
  v17 = v2[2];
  if ( !v17 )
    goto LABEL_59;
  klass = (UnityEngine_Object_o *)v17[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  klass,
                                                                                  0,
                                                                                  0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = v2[2];
    if ( !v19 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v19[2].klass;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].klass = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this[2], 0, v20, v21);
  }
  this = v2[3];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v37;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1C372B4(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  this = v2[4];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v23 = (ServantStatusFlavorTextListViewItemDrawText_o *)v2[2];
    if ( !v23 )
      sub_1C372B4(0);
    current = v38.fields._current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v23,
      (UnityEngine_GameObject_o *)v38.fields._current,
      1,
      v22);
    if ( !current )
      sub_1C372B4(v25);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v27 = v2[2];
  if ( !v27 )
    goto LABEL_59;
  BYTE4(v27[1].fields.__4__this) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  v30 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
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
    v33 = (Il2CppObject *)this[4].fields.inactiveCameras->klass;
    items = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(items, v33, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = items;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__42_1, (int32_t)items, v35, v36);
  }
  if ( !v30 )
LABEL_59:
    sub_1C372B4(this);
  CommonUI__maskFadein(v30, DEFAULT_FADE_TIME, items, 0);
}