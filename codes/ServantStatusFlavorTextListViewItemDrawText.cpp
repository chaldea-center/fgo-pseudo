void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F8944 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v1);
    byte_49F8944 = 1;
  }
  *ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields = (struct ServantStatusFlavorTextListViewItemDrawText_StaticFields)0xFFFFFFAD0000009ALL;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___ctor(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_object__o *v49; // x20
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x1
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x1
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x1
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  Il2CppObject *v74; // x1
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  Il2CppObject *v81; // x1
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  __int64 v88; // x1
  __int64 v89; // x2
  System_Collections_Generic_List_object__o *v90; // x20
  int32_t v91; // w2
  int32_t v92; // w3
  _QWORD *v93; // x9
  Il2CppObject *v94; // x1
  struct System_Object_array *v95; // x8
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  Il2CppObject *v100; // x1
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  Il2CppObject *v107; // x1
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  Il2CppObject *v114; // x1
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  Il2CppObject *v121; // x1
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  __int64 v128; // x1
  __int64 v129; // x2
  System_Collections_Generic_List_object__o *v130; // x20
  int32_t v131; // w2
  int32_t v132; // w3
  _QWORD *v133; // x9
  Il2CppObject *v134; // x1
  struct System_Object_array *v135; // x8
  __int64 v136; // x10
  Il2CppClass **v137; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  Il2CppObject *v140; // x1
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  Il2CppObject *v147; // x1
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  Il2CppObject *v154; // x1
  struct System_Object_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  Il2CppClass **v158; // x0
  int32_t v159; // w2
  int32_t v160; // w3

  if ( (byte_49F8943 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1B640C8(&StringLiteral_17097/*"bg(Clone)/bg10500"*/, v7);
    sub_1B640C8(&StringLiteral_13010/*"SummonBgRoot"*/, v8);
    sub_1B640C8(&StringLiteral_13168/*"SystemUICamera"*/, v9);
    sub_1B640C8(&StringLiteral_3247/*"Bg/10500"*/, v10);
    sub_1B640C8(&StringLiteral_6048/*"EquipGraphListMenuPrefab(Clone)"*/, v11);
    sub_1B640C8(&StringLiteral_12585/*"ServantStatusDialogPrefab(Clone)"*/, v12);
    sub_1B640C8(&StringLiteral_3326/*"BtnBg"*/, v13);
    sub_1B640C8(&StringLiteral_14468/*"TouchCamera"*/, v14);
    sub_1B640C8(&StringLiteral_4437/*"ChoiceButton"*/, v15);
    sub_1B640C8(&StringLiteral_3249/*"BgCamera"*/, v16);
    sub_1B640C8(&StringLiteral_4613/*"CommonUI"*/, v17);
    sub_1B640C8(&StringLiteral_6825/*"FrontCommonUICamera"*/, v18);
    sub_1B640C8(&StringLiteral_17096/*"bg"*/, v19);
    sub_1B640C8(&StringLiteral_4622/*"CommonUICamera"*/, v20);
    sub_1B640C8(&StringLiteral_13026/*"SupportServantEquipListMenuPrefab(Clone)"*/, v21);
    sub_1B640C8(&StringLiteral_8428/*"LockButton"*/, v22);
    sub_1B640C8(&StringLiteral_12569/*"ServantEquipStatusDialogPrefab(Clone)"*/, v23);
    sub_1B640C8(&StringLiteral_12921/*"StatusButton"*/, v24);
    sub_1B640C8(&StringLiteral_11144/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/, v25);
    sub_1B640C8(&StringLiteral_20246/*"img_index_02"*/, v26);
    sub_1B640C8(&StringLiteral_7052/*"Ground/Field/bg(Clone)"*/, v27);
    byte_49F8943 = 1;
  }
  v28 = StringLiteral_20246/*"img_index_02"*/;
  this->fields.TITLE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20246/*"img_index_02"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TITLE_SPRITE_NAME, v28, v2, v3);
  this->fields.MESSAGE_LABEL_ADD_POS_Y = -45.0;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = 0xC25C0000C2080000LL;
  v29 = StringLiteral_4613/*"CommonUI"*/;
  this->fields.COMMON_UI = (struct System_String_o *)StringLiteral_4613/*"CommonUI"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.COMMON_UI, v29, v30, v31);
  v32 = StringLiteral_7052/*"Ground/Field/bg(Clone)"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_7052/*"Ground/Field/bg(Clone)"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.BATTLE_BG_OBJECT, v32, v33, v34);
  v35 = StringLiteral_17097/*"bg(Clone)/bg10500"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_17097/*"bg(Clone)/bg10500"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SUMMON_BG_OBJECT, v35, v36, v37);
  v38 = StringLiteral_13010/*"SummonBgRoot"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_13010/*"SummonBgRoot"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SUMMON_BG_ROOT, v38, v39, v40);
  v41 = StringLiteral_3247/*"Bg/10500"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_3247/*"Bg/10500"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SUMMON_BG_ASSET_NAME, v41, v42, v43);
  v44 = StringLiteral_17096/*"bg"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_17096/*"bg"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v44, v45, v46);
  v49 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v49 )
    goto LABEL_63;
  v53 = (Il2CppObject *)StringLiteral_12585/*"ServantStatusDialogPrefab(Clone)"*/;
  items = v49->fields._items;
  v55 = Method_System_Collections_Generic_List_string__Add__;
  ++v49->fields._version;
  if ( !items )
    goto LABEL_63;
  size = v49->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      v53,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &items->obj.klass + size;
    v49->fields._size = size + 1;
    v57[4] = (Il2CppClass *)v53;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v53, v51, v52);
  }
  v60 = (Il2CppObject *)StringLiteral_12569/*"ServantEquipStatusDialogPrefab(Clone)"*/;
  v61 = v49->fields._items;
  v62 = Method_System_Collections_Generic_List_string__Add__;
  ++v49->fields._version;
  if ( !v61 )
    goto LABEL_63;
  v63 = v49->fields._size;
  if ( (unsigned int)v63 >= v61->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      v60,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &v61->obj.klass + v63;
    v49->fields._size = v63 + 1;
    v64[4] = (Il2CppClass *)v60;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v60, v58, v59);
  }
  v67 = (Il2CppObject *)StringLiteral_6048/*"EquipGraphListMenuPrefab(Clone)"*/;
  v68 = v49->fields._items;
  v69 = Method_System_Collections_Generic_List_string__Add__;
  ++v49->fields._version;
  if ( !v68 )
    goto LABEL_63;
  v70 = v49->fields._size;
  if ( (unsigned int)v70 >= v68->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      v67,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = &v68->obj.klass + v70;
    v49->fields._size = v70 + 1;
    v71[4] = (Il2CppClass *)v67;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v67, v65, v66);
  }
  v74 = (Il2CppObject *)StringLiteral_13026/*"SupportServantEquipListMenuPrefab(Clone)"*/;
  v75 = v49->fields._items;
  v76 = Method_System_Collections_Generic_List_string__Add__;
  ++v49->fields._version;
  if ( !v75 )
    goto LABEL_63;
  v77 = v49->fields._size;
  if ( (unsigned int)v77 >= v75->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      v74,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = &v75->obj.klass + v77;
    v49->fields._size = v77 + 1;
    v78[4] = (Il2CppClass *)v74;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v74, v72, v73);
  }
  v81 = (Il2CppObject *)StringLiteral_11144/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/;
  v82 = v49->fields._items;
  v83 = Method_System_Collections_Generic_List_string__Add__;
  ++v49->fields._version;
  if ( !v82 )
    goto LABEL_63;
  v84 = v49->fields._size;
  if ( (unsigned int)v84 >= v82->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      v81,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = &v82->obj.klass + v84;
    v49->fields._size = v84 + 1;
    v85[4] = (Il2CppClass *)v81;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v81, v79, v80);
  }
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.INACTIVE_PREFABS, (int32_t)v49, v86, v87);
  v90 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v88,
                                                       v89);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v90 )
    goto LABEL_63;
  v93 = Method_System_Collections_Generic_List_string__Add__;
  v94 = (Il2CppObject *)StringLiteral_3249/*"BgCamera"*/;
  v95 = v90->fields._items;
  ++v90->fields._version;
  if ( !v95 )
    goto LABEL_63;
  v96 = v90->fields._size;
  if ( (unsigned int)v96 >= v95->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v90,
      v94,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v97 = &v95->obj.klass + v96;
    v90->fields._size = v96 + 1;
    v97[4] = (Il2CppClass *)v94;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 4), (int32_t)v94, v91, v92);
  }
  v100 = (Il2CppObject *)StringLiteral_4622/*"CommonUICamera"*/;
  v101 = v90->fields._items;
  v102 = Method_System_Collections_Generic_List_string__Add__;
  ++v90->fields._version;
  if ( !v101 )
    goto LABEL_63;
  v103 = v90->fields._size;
  if ( (unsigned int)v103 >= v101->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v90,
      v100,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v104 = &v101->obj.klass + v103;
    v90->fields._size = v103 + 1;
    v104[4] = (Il2CppClass *)v100;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v104 + 4), (int32_t)v100, v98, v99);
  }
  v107 = (Il2CppObject *)StringLiteral_6825/*"FrontCommonUICamera"*/;
  v108 = v90->fields._items;
  v109 = Method_System_Collections_Generic_List_string__Add__;
  ++v90->fields._version;
  if ( !v108 )
    goto LABEL_63;
  v110 = v90->fields._size;
  if ( (unsigned int)v110 >= v108->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v90,
      v107,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v111 = &v108->obj.klass + v110;
    v90->fields._size = v110 + 1;
    v111[4] = (Il2CppClass *)v107;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v111 + 4), (int32_t)v107, v105, v106);
  }
  v114 = (Il2CppObject *)StringLiteral_13168/*"SystemUICamera"*/;
  v115 = v90->fields._items;
  v116 = Method_System_Collections_Generic_List_string__Add__;
  ++v90->fields._version;
  if ( !v115 )
    goto LABEL_63;
  v117 = v90->fields._size;
  if ( (unsigned int)v117 >= v115->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v90,
      v114,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
  }
  else
  {
    v118 = &v115->obj.klass + v117;
    v90->fields._size = v117 + 1;
    v118[4] = (Il2CppClass *)v114;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v118 + 4), (int32_t)v114, v112, v113);
  }
  v121 = (Il2CppObject *)StringLiteral_14468/*"TouchCamera"*/;
  v122 = v90->fields._items;
  v123 = Method_System_Collections_Generic_List_string__Add__;
  ++v90->fields._version;
  if ( !v122 )
    goto LABEL_63;
  v124 = v90->fields._size;
  if ( (unsigned int)v124 >= v122->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v90,
      v121,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
  }
  else
  {
    v125 = &v122->obj.klass + v124;
    v90->fields._size = v124 + 1;
    v125[4] = (Il2CppClass *)v121;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v125 + 4), (int32_t)v121, v119, v120);
  }
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v90;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SCRIPT_CAMERAS, (int32_t)v90, v126, v127);
  v130 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v128,
                                                        v129);
  System_Collections_Generic_List_object____ctor(
    v130,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v130 )
    goto LABEL_63;
  v133 = Method_System_Collections_Generic_List_string__Add__;
  v134 = (Il2CppObject *)StringLiteral_3326/*"BtnBg"*/;
  v135 = v130->fields._items;
  ++v130->fields._version;
  if ( !v135 )
    goto LABEL_63;
  v136 = v130->fields._size;
  if ( (unsigned int)v136 >= v135->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v130,
      v134,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
  }
  else
  {
    v137 = &v135->obj.klass + v136;
    v130->fields._size = v136 + 1;
    v137[4] = (Il2CppClass *)v134;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v137 + 4), (int32_t)v134, v131, v132);
  }
  v140 = (Il2CppObject *)StringLiteral_12921/*"StatusButton"*/;
  v141 = v130->fields._items;
  v142 = Method_System_Collections_Generic_List_string__Add__;
  ++v130->fields._version;
  if ( !v141 )
    goto LABEL_63;
  v143 = v130->fields._size;
  if ( (unsigned int)v143 >= v141->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v130,
      v140,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
  }
  else
  {
    v144 = &v141->obj.klass + v143;
    v130->fields._size = v143 + 1;
    v144[4] = (Il2CppClass *)v140;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v144 + 4), (int32_t)v140, v138, v139);
  }
  v147 = (Il2CppObject *)StringLiteral_8428/*"LockButton"*/;
  v148 = v130->fields._items;
  v149 = Method_System_Collections_Generic_List_string__Add__;
  ++v130->fields._version;
  if ( !v148 )
    goto LABEL_63;
  v150 = v130->fields._size;
  if ( (unsigned int)v150 >= v148->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v130,
      v147,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
  }
  else
  {
    v151 = &v148->obj.klass + v150;
    v130->fields._size = v150 + 1;
    v151[4] = (Il2CppClass *)v147;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v151 + 4), (int32_t)v147, v145, v146);
  }
  v154 = (Il2CppObject *)StringLiteral_4437/*"ChoiceButton"*/;
  v155 = v130->fields._items;
  v156 = Method_System_Collections_Generic_List_string__Add__;
  ++v130->fields._version;
  if ( !v155 )
LABEL_63:
    sub_1B64324(v50);
  v157 = v130->fields._size;
  if ( (unsigned int)v157 >= v155->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v130,
      v154,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
  }
  else
  {
    v158 = &v155->obj.klass + v157;
    v130->fields._size = v157 + 1;
    v158[4] = (Il2CppClass *)v154;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v158 + 4), (int32_t)v154, v152, v153);
  }
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v130;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TARGET_BUTTON_NAME, (int32_t)v130, v159, v160);
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
  __int64 v2; // x2
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
  __int64 v21; // x20
  System_Collections_Generic_List_object__o *INACTIVE_PREFABS; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  unsigned int allCamerasCount; // w0
  UnityEngine_Camera_array *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x23
  System_Collections_Generic_List_GameObject__o **v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_GameObject_o *v35; // x23
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_List_object__o *v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_List_object__o *v46; // x24
  System_Collections_Generic_List_Camera__o **v47; // x23
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x1
  int max_length; // w8
  unsigned int v52; // w26
  Il2CppClass **v53; // x8
  UnityEngine_Behaviour_o *v54; // x24
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x8
  UnityEngine_GameObject_o *v61; // x22
  struct UnityEngine_GameObject_o *Deep; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  UnityEngine_Object_o *summonBgRoot; // x22
  struct UnityEngine_GameObject_o *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  UnityEngine_Object_o *v69; // x22
  const MethodInfo *v70; // x3
  UnityEngine_Object_o *summonBg; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  System_String_o *SUMMON_BG_ASSET_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v75; // x21
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49F8940 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Camera___TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Camera__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Camera___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_Camera__TypeInfo, v15);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__, v18);
    sub_1B640C8(
      &Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
      v19);
    sub_1B640C8(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, v20);
    byte_49F8940 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v21 = sub_1B64314(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_53;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v23, v24);
  if ( this->fields.svtId && !this->fields.isScriptPlaying )
  {
    this->fields.isScriptPlaying = 1;
    v25 = Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__;
    if ( (*((_BYTE *)Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B640E0(Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    v26 = (System_Reflection_MethodBase_o *)sub_1B640AC(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 8, 0LL);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0LL);
    v28 = (UnityEngine_Camera_array *)sub_1B64170(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras(v28, 0LL);
    v31 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         v29,
                                                         v30);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v21 + 32) = v31;
    v32 = (System_Collections_Generic_List_GameObject__o **)(v21 + 32);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v31, v33, v34);
    INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.INACTIVE_PREFABS;
    if ( !INACTIVE_PREFABS )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v76,
      INACTIVE_PREFABS,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v77 = v76;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v77,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v35 = UnityEngine_GameObject__Find((System_String_o *)v77.fields._current, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v35, 0, v36);
        v39 = (System_Collections_Generic_List_object__o *)*v32;
        if ( !*v32 )
          sub_1B64324(0LL);
        items = v39->fields._items;
        v41 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v39->fields._version;
        if ( !items )
          sub_1B64324(v39);
        size = v39->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v39,
            (Il2CppObject *)v35,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v39->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v35;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 4), (int32_t)v35, v37, v38);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v77,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v46 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_Camera__TypeInfo,
                                                         v44,
                                                         v45);
    System_Collections_Generic_List_object____ctor(
      v46,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v21 + 24) = v46;
    v47 = (System_Collections_Generic_List_Camera__o **)(v21 + 24);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)v46, v48, v49);
    if ( !v28 )
      goto LABEL_53;
    max_length = v28->max_length;
    if ( max_length >= 1 )
    {
      v52 = 0;
      while ( 1 )
      {
        if ( v52 >= max_length )
          sub_1B6432C(INACTIVE_PREFABS, v50);
        v53 = &v28->obj.klass + (int)v52;
        v54 = (UnityEngine_Behaviour_o *)v53[4];
        if ( !v54 )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v53[4],
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
                                                                          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)INACTIVE_PREFABS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v54, 0, 0LL);
          INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)*v47;
          if ( !*v47 )
            break;
          v57 = INACTIVE_PREFABS->fields._items;
          v58 = Method_System_Collections_Generic_List_Camera__Add__;
          ++INACTIVE_PREFABS->fields._version;
          if ( !v57 )
            break;
          v59 = INACTIVE_PREFABS->fields._size;
          if ( (unsigned int)v59 >= v57->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              INACTIVE_PREFABS,
              (Il2CppObject *)v54,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = &v57->obj.klass + v59;
            INACTIVE_PREFABS->fields._size = v59 + 1;
            v60[4] = (Il2CppClass *)v54;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v54, v55, v56);
          }
        }
        max_length = v28->max_length;
        if ( (int)++v52 >= max_length )
          goto LABEL_33;
      }
LABEL_53:
      sub_1B64324(INACTIVE_PREFABS);
    }
LABEL_33:
    v61 = UnityEngine_GameObject__Find(this->fields.COMMON_UI, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v61, 0LL, 0LL) )
    {
      Deep = GameObjectExtensions__FindDeep(v61, this->fields.SUMMON_BG_ROOT, 1, 0LL);
      this->fields.summonBgRoot = Deep;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.summonBgRoot, (int32_t)Deep, v63, v64);
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
    v66 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    this->fields.battleBg = v66;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleBg, (int32_t)v66, v67, v68);
    v69 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
      goto LABEL_48;
    summonBg = (UnityEngine_Object_o *)this->fields.summonBg;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL) )
    {
LABEL_48:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(this, *v47, *v32, v70);
    }
    else
    {
      SUMMON_BG_ASSET_NAME = this->fields.SUMMON_BG_ASSET_NAME;
      v75 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v72, v73);
      AssetLoader_LoadEndDataHandler___ctor(
        v75,
        (Il2CppObject *)v21,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(SUMMON_BG_ASSET_NAME, v75, 1, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_49F8941 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, inactiveCameras);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__, v9);
    sub_1B640C8(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo, v10);
    byte_49F8941 = 1;
  }
  v11 = sub_1B64314(
          ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo,
          inactiveCameras,
          inactivePrefabs);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = inactivePrefabs;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)inactivePrefabs, v15, v16);
  *(_QWORD *)(v11 + 32) = inactiveCameras;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)inactiveCameras, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  v23 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0LL);
  if ( !v23 )
LABEL_8:
    sub_1B64324(v12);
  CommonUI__maskFadeout(v23, 1, DEFAULT_FADE_TIME, v25, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_49F8942 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, inactiveCameras);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__, v9);
    sub_1B640C8(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo, v10);
    byte_49F8942 = 1;
  }
  v11 = sub_1B64314(
          ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo,
          inactiveCameras,
          inactivePrefabs);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = inactiveCameras;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)inactiveCameras, v15, v16);
  *(_QWORD *)(v11 + 32) = inactivePrefabs;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)inactivePrefabs, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  v23 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0LL);
  if ( !v23 )
LABEL_8:
    sub_1B64324(v12);
  CommonUI__maskFadeout(v23, 1, DEFAULT_FADE_TIME, v25, 0LL);
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
  Il2CppObject *Component_object; // x22
  _BOOL8 v17; // x0
  Il2CppObject *v18; // x21
  _BOOL8 v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F893F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, gameObject);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_49F893F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  TARGET_BUTTON_NAME = this->fields.TARGET_BUTTON_NAME;
  if ( !TARGET_BUTTON_NAME )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)TARGET_BUTTON_NAME,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v21.fields._current,
                                     1,
                                     0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality(Deep, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !Deep )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Deep,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v17 )
      {
        if ( !Component_object )
          sub_1B64324(v17);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
          Component_object,
          isEnable,
          Component_object->klass->vtable[6].methodPtr);
      }
      v18 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)Deep,
              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
      if ( v19 )
      {
        if ( !v18 )
          sub_1B64324(v19);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))v18->klass->vtable[5].method)(
          v18,
          isEnable,
          v18->klass->vtable[6].methodPtr);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_49F893E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v6);
    sub_1B640C8(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49F893E = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      sub_1B64324(titleServantBase);
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
  __int64 v23; // x1
  __int64 v24; // x2
  RubyLabelHelper_o *v25; // x24
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w21
  Il2CppObject *Master_object; // x24
  const MethodInfo *v29; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v32; // x24
  _BOOL4 v33; // w26
  UnityEngine_Object_o *baseCollider; // x24
  int v35; // w27
  int v36; // s0
  float v37; // s1
  float v39; // s1
  UnityEngine_Object_o *baseSprite; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v42; // w27
  _BOOL4 v43; // w24
  float v44; // s0
  float v45; // s2
  float v46; // s9
  float v47; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v49; // s1
  float v50; // s8
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  float v53; // s0
  float v54; // s2
  float v55; // s8
  float v56; // s9
  UnityEngine_Object_o *newIcon; // x21
  Il2CppObject *Component_object; // x23
  float v59; // s0
  float v60; // s3
  float v61; // s1
  float v62; // s2
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F893D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantVoiceMaster___, item);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&RubyLabelHelper_TypeInfo, v17);
    byte_49F893D = 1;
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
  v25 = (RubyLabelHelper_o *)sub_1B64314(RubyLabelHelper_TypeInfo, v23, v24);
  RubyLabelHelper___ctor(v25, v20, mainPrefab, rubyPrefab, 0LL);
  if ( !v25 )
    goto LABEL_86;
  RubyLabelHelper__SetText(v25, text, 0LL);
  Size = RubyLabelHelper__get_Size(v25, 0LL);
  if ( Size.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)Size.fields.y;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v29);
  messageLabel = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  this->fields.svtId = (int)messageLabel;
  if ( !Master_object )
    goto LABEL_86;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          (ServantVoiceMaster_o *)Master_object,
                          (int32_t)messageLabel,
                          0LL);
  v33 = item->fields.svtEntity
     && (v32 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v32 != 0LL;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v35 = y - v19;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v36 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)messageLabel, 0LL);
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    v39 = v37 + (float)v35;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)messageLabel, *(UnityEngine_Vector3_o *)&v36, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + v35, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v42 = 0;
  else
    v42 = v33;
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
      ? (v43 = v42)
      : (v43 = 0),
        !this->fields.titleServantBase) )
  {
LABEL_86:
    sub_1B64324(messageLabel);
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
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v33 = v42;
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
    goto LABEL_47;
  v59 = 0.5;
  if ( isOpen )
    v59 = 1.0;
  if ( !Component_object )
    goto LABEL_86;
  v60 = 1.0;
  v61 = v59;
  v62 = v59;
  UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v59, 0LL);
  v33 = v43;
LABEL_47:
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)messageLabel,
                                     0LL);
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  v46 = v44;
  v47 = v45;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  v63.fields.x = v46;
  v63.fields.y = (float)(Size.fields.y * 0.5) + 20.0;
  v63.fields.z = v47;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v63, 0LL);
  if ( v33 )
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
    *(UnityEngine_Vector3_o *)(&v49 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)messageLabel,
                                             0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v50 = v49;
    v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v51, v50 + this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v52, this->fields.BASE_SPRITE_ADD_POS_Y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + 64, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)messageLabel,
                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)messageLabel,
                                       0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v55 = v53;
    v56 = v54;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    v64.fields.y = (float)(Size.fields.y * 0.5) + -14.0;
    v64.fields.x = v55;
    v64.fields.z = v56;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v64, 0LL);
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    messageLabel = this->fields.newIcon;
    if ( !messageLabel )
      goto LABEL_86;
    ShiningIconComponent__Set_37919868((ShiningIconComponent_o *)messageLabel, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8945 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1);
    byte_49F8945 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewItemDrawText___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  Il2CppObject *Object_object__48347676; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v12; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v13; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v14; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v15; // x8
  __int64 v16; // x1
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v17; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v18; // x8
  __int64 v19; // x1
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v20; // x20
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_49F8946 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1B640C8(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    v6);
    byte_49F8946 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_24;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              data,
                              _4__this->fields.SUMMON_BG_OBJECT_NAME,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         Object_object__48347676,
         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBg = (struct UnityEngine_GameObject_o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.summonBg, (int32_t)v9, v10, v11);
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
  v17 = this;
  if ( !byte_49F7111 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1B640C8(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    v16);
    byte_49F7111 = 1;
  }
  if ( !v17 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v18->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v20 = this;
  if ( !byte_49F7116 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1B640C8(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    v19);
    byte_49F7116 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v20,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_24:
    sub_1B64324(this);
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    (ServantStatusFlavorTextListViewItemDrawText_o *)this,
    v4->fields.inactiveCameras,
    v4->fields.inactivePrefabs,
    v21);
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
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v20; // x8
  UnityEngine_Object_o *battleBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v22; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  AvalonSceneManager_c *v27; // x8
  CommonUI_o *v28; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21
  Il2CppObject *v31; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x1
  __int64 v36; // x2
  struct ServantStatusFlavorTextListViewItemDrawText_o *v37; // x8
  int32_t svtId; // w20
  System_Action_o *_9__2; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8947 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&ScriptManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, v11);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__, v12);
    sub_1B640C8(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v13);
    byte_49F8947 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v16 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_34;
  _4__this->fields.ambientLight.fields.r = v16;
  _4__this->fields.ambientLight.fields.g = v17;
  _4__this->fields.ambientLight.fields.b = v18;
  _4__this->fields.ambientLight.fields.a = v19;
  v44.fields.r = 1.0;
  v44.fields.g = 1.0;
  v44.fields.b = 1.0;
  v44.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v44, 0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_34;
  battleBg = (UnityEngine_Object_o *)v20->fields.battleBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(battleBg, 0LL, 0LL);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v22 = this->fields.__4__this;
    if ( !v22 )
      goto LABEL_34;
    inactivePrefabs = v22->fields.battleBg;
    if ( !inactivePrefabs )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inactivePrefabs, 0, 0LL);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)inactivePrefabs,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v43.fields._current )
      sub_1B64324(0LL);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v43.fields._current, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  v28 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v27 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  v30 = *(System_Action_o **)(*((_QWORD *)inactivePrefabs + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)inactivePrefabs + 56) )
    {
      j_il2cpp_runtime_class_init_0(inactivePrefabs);
      inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)inactivePrefabs + 23);
    v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(v30, v31, Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__41_1 = v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_1, (int32_t)v30, v33, v34);
  }
  if ( !v28
    || (inactivePrefabs = (void *)CommonUI__maskFadein(v28, DEFAULT_FADE_TIME, v30, 0LL),
        (v37 = this->fields.__4__this) == 0LL) )
  {
LABEL_34:
    sub_1B64324(inactivePrefabs);
  }
  svtId = v37->fields.svtId;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v35, v36);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v40, v41);
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
    sub_1B64324(this);
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
  int32_t v22; // w3
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v23; // x8
  System_String_o *_4__this; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v25; // x8
  UnityEngine_Object_o *v26; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v27; // x8
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Color_o *v30; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v31; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v33; // x8
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x3
  ServantStatusFlavorTextListViewItemDrawText_o *v37; // x0
  Il2CppObject *current; // x20
  __int64 v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v41; // x8
  Il2CppObject *Instance; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  AvalonSceneManager_c *v45; // x8
  CommonUI_o *v46; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *items; // x20
  Il2CppObject *v49; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF

  v2 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_49F8948 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Camera__GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B640C8(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, v15);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_1B640C8(
                                                                                    &ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo,
                                                                                    v16);
    byte_49F8948 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v54, 0, sizeof(v54));
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
    UnityEngine_Object__Destroy_69127736(v20, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].monitor = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this[2].monitor, 0, v21, v22);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this[2].fields, 0, v28, v29);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this[2], 0, v34, v35);
  }
  this = v2[3];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v53;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  this = v2[4];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v54 = v53;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v37 = (ServantStatusFlavorTextListViewItemDrawText_o *)v2[2];
    if ( !v37 )
      sub_1B64324(0LL);
    current = v54.fields._current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v37,
      (UnityEngine_GameObject_o *)v54.fields._current,
      1,
      v36);
    if ( !current )
      sub_1B64324(v39);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v41 = v2[2];
  if ( !v41 )
    goto LABEL_59;
  BYTE4(v41[1].fields.__4__this) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = AvalonSceneManager_TypeInfo;
  v46 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v45 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v45->static_fields->DEFAULT_FADE_TIME;
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
    v49 = (Il2CppObject *)this[4].fields.inactiveCameras->klass;
    items = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
    System_Action___ctor(items, v49, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = items;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_1, (int32_t)items, v51, v52);
  }
  if ( !v46 )
LABEL_59:
    sub_1B64324(this);
  CommonUI__maskFadein(v46, DEFAULT_FADE_TIME, items, 0LL);
}