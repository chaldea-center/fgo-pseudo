void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_List_object__o *v32; // x20
  __int64 v33; // x0
  Il2CppObject *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  Il2CppClass **v154; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x0
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  System_Collections_Generic_List_object__o *v181; // x20
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  System_Collections_Generic_List_object__o *v188; // x20
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7

  if ( (byte_4BB761E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Material___ctor__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_Material__TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo, v8);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1C13D24(&StringLiteral_7394/*"Hidden/Particle/MultiplyAdd"*/, v11);
    sub_1C13D24(&StringLiteral_7397/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v12);
    sub_1C13D24(&StringLiteral_6528/*"FGO.acf"*/, v13);
    sub_1C13D24(&StringLiteral_7398/*"Hidden/Particle/dissolve"*/, v14);
    sub_1C13D24(&StringLiteral_7396/*"Hidden/Particle/MultiplyAdd1Pass"*/, v15);
    sub_1C13D24(&StringLiteral_6529/*"FGOActorDelete サーヴァント位置Index取得エラー\nSvtId:【{0}】UniqueID:【{1}】IsEnemy:【{2}】"*/, v16);
    sub_1C13D24(&StringLiteral_7393/*"Hidden/Particle/Base-Stencil"*/, v17);
    sub_1C13D24(&StringLiteral_7387/*"Hidden/Internal-UIRAtlasBlitCopy"*/, v18);
    sub_1C13D24(&StringLiteral_7395/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v19);
    sub_1C13D24(&StringLiteral_7389/*"Hidden/Internal-UIRDefaultWorld"*/, v20);
    sub_1C13D24(&StringLiteral_7390/*"Hidden/Ken/Distortion"*/, v21);
    sub_1C13D24(&StringLiteral_7391/*"Hidden/Ken/GradationMap"*/, v22);
    sub_1C13D24(&StringLiteral_7392/*"Hidden/Ken/MultiplyAdd"*/, v23);
    sub_1C13D24(&StringLiteral_7388/*"Hidden/Internal-UIRDefault"*/, v24);
    byte_4BB761E = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v25;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.replaceObjects, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v32 )
    goto LABEL_61;
  v34 = (Il2CppObject *)StringLiteral_6529/*"FGOActorDelete サーヴァント位置Index取得エラー\nSvtId:【{0}】UniqueID:【{1}】IsEnemy:【{2}】"*/;
  items = v32->fields._items;
  v42 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !items )
    goto LABEL_61;
  size = v32->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v32->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v34, v35, v36, v37, v38, v39, v40);
  }
  v34 = (Il2CppObject *)StringLiteral_7391/*"Hidden/Ken/GradationMap"*/;
  v51 = v32->fields._items;
  v52 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v51 )
    goto LABEL_61;
  v53 = v32->fields._size;
  if ( (unsigned int)v53 >= v51->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &v51->obj.klass + v53;
    v32->fields._size = v53 + 1;
    v54[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v34, v45, v46, v47, v48, v49, v50);
  }
  v34 = (Il2CppObject *)StringLiteral_7393/*"Hidden/Particle/Base-Stencil"*/;
  v61 = v32->fields._items;
  v62 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v61 )
    goto LABEL_61;
  v63 = v32->fields._size;
  if ( (unsigned int)v63 >= v61->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &v61->obj.klass + v63;
    v32->fields._size = v63 + 1;
    v64[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v34, v55, v56, v57, v58, v59, v60);
  }
  v34 = (Il2CppObject *)StringLiteral_7396/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  v71 = v32->fields._items;
  v72 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v71 )
    goto LABEL_61;
  v73 = v32->fields._size;
  if ( (unsigned int)v73 >= v71->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &v71->obj.klass + v73;
    v32->fields._size = v73 + 1;
    v74[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v34, v65, v66, v67, v68, v69, v70);
  }
  v34 = (Il2CppObject *)StringLiteral_7390/*"Hidden/Ken/Distortion"*/;
  v81 = v32->fields._items;
  v82 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v81 )
    goto LABEL_61;
  v83 = v32->fields._size;
  if ( (unsigned int)v83 >= v81->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &v81->obj.klass + v83;
    v32->fields._size = v83 + 1;
    v84[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)v34, v75, v76, v77, v78, v79, v80);
  }
  v34 = (Il2CppObject *)StringLiteral_7392/*"Hidden/Ken/MultiplyAdd"*/;
  v91 = v32->fields._items;
  v92 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v91 )
    goto LABEL_61;
  v93 = v32->fields._size;
  if ( (unsigned int)v93 >= v91->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v91->obj.klass + v93;
    v32->fields._size = v93 + 1;
    v94[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)v34, v85, v86, v87, v88, v89, v90);
  }
  v34 = (Il2CppObject *)StringLiteral_7394/*"Hidden/Particle/MultiplyAdd"*/;
  v101 = v32->fields._items;
  v102 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v101 )
    goto LABEL_61;
  v103 = v32->fields._size;
  if ( (unsigned int)v103 >= v101->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v104 = &v101->obj.klass + v103;
    v32->fields._size = v103 + 1;
    v104[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v104 + 4), (int64_t)v34, v95, v96, v97, v98, v99, v100);
  }
  v34 = (Il2CppObject *)StringLiteral_7398/*"Hidden/Particle/dissolve"*/;
  v111 = v32->fields._items;
  v112 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v111 )
    goto LABEL_61;
  v113 = v32->fields._size;
  if ( (unsigned int)v113 >= v111->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = &v111->obj.klass + v113;
    v32->fields._size = v113 + 1;
    v114[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v114 + 4), (int64_t)v34, v105, v106, v107, v108, v109, v110);
  }
  v34 = (Il2CppObject *)StringLiteral_7397/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/;
  v121 = v32->fields._items;
  v122 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v121 )
    goto LABEL_61;
  v123 = v32->fields._size;
  if ( (unsigned int)v123 >= v121->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
  }
  else
  {
    v124 = &v121->obj.klass + v123;
    v32->fields._size = v123 + 1;
    v124[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v124 + 4), (int64_t)v34, v115, v116, v117, v118, v119, v120);
  }
  v34 = (Il2CppObject *)StringLiteral_7395/*"Hidden/Particle/MultiplyAdd-Stencil"*/;
  v131 = v32->fields._items;
  v132 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v131 )
    goto LABEL_61;
  v133 = v32->fields._size;
  if ( (unsigned int)v133 >= v131->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v134 = &v131->obj.klass + v133;
    v32->fields._size = v133 + 1;
    v134[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v134 + 4), (int64_t)v34, v125, v126, v127, v128, v129, v130);
  }
  v34 = (Il2CppObject *)StringLiteral_6528/*"FGO.acf"*/;
  v141 = v32->fields._items;
  v142 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v141 )
    goto LABEL_61;
  v143 = v32->fields._size;
  if ( (unsigned int)v143 >= v141->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
  }
  else
  {
    v144 = &v141->obj.klass + v143;
    v32->fields._size = v143 + 1;
    v144[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v144 + 4), (int64_t)v34, v135, v136, v137, v138, v139, v140);
  }
  v34 = (Il2CppObject *)StringLiteral_7389/*"Hidden/Internal-UIRDefaultWorld"*/;
  v151 = v32->fields._items;
  v152 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v151 )
    goto LABEL_61;
  v153 = v32->fields._size;
  if ( (unsigned int)v153 >= v151->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
  }
  else
  {
    v154 = &v151->obj.klass + v153;
    v32->fields._size = v153 + 1;
    v154[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v154 + 4), (int64_t)v34, v145, v146, v147, v148, v149, v150);
  }
  v34 = (Il2CppObject *)StringLiteral_7387/*"Hidden/Internal-UIRAtlasBlitCopy"*/;
  v161 = v32->fields._items;
  v162 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v161 )
    goto LABEL_61;
  v163 = v32->fields._size;
  if ( (unsigned int)v163 >= v161->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
  }
  else
  {
    v164 = &v161->obj.klass + v163;
    v32->fields._size = v163 + 1;
    v164[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v164 + 4), (int64_t)v34, v155, v156, v157, v158, v159, v160);
  }
  v34 = (Il2CppObject *)StringLiteral_7388/*"Hidden/Internal-UIRDefault"*/;
  v171 = v32->fields._items;
  v172 = Method_System_Collections_Generic_List_string__Add__;
  ++v32->fields._version;
  if ( !v171 )
LABEL_61:
    sub_1C13F80(v33, v34);
  v173 = v32->fields._size;
  if ( (unsigned int)v173 >= v171->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v32,
      v34,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
  }
  else
  {
    v174 = &v171->obj.klass + v173;
    v32->fields._size = v173 + 1;
    v174[4] = (Il2CppClass *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v174 + 4), (int64_t)v34, v165, v166, v167, v168, v169, v170);
  }
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v32;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.autoReplaceShaderNames,
    (int64_t)v32,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
  v181 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v181,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v181;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.replaceMaterials,
    (int64_t)v181,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
  v188 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v188,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.shadowAuraList = (struct System_Collections_Generic_List_GameObject__o *)v188;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.shadowAuraList,
    (int64_t)v188,
    v189,
    v190,
    v191,
    v192,
    v193,
    v194);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
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
  __int64 v40; // x1
  __int64 v41; // x1
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_object__object__o *v43; // x20
  UnityEngine_Object_o *v44; // x20
  _BOOL8 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x4
  Il2CppObject *current; // x26
  System_Collections_Generic_List_object__o *TargetActors; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  BattleActorControl_o *v53; // x29
  bool isChocoServant; // w22
  _BOOL8 isShadowServant; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x3
  bool v58; // w23
  UnityEngine_Object_o *ActorTexture; // x24
  BattleServantData_o *battleSvtData; // x0
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x25
  _QWORD *v63; // x25
  __int64 v64; // x8
  __int64 v65; // x0
  __int64 v66; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *NodeFromName; // x1
  System_Collections_Generic_IEnumerable_T__o *appended; // x0
  System_Collections_Generic_IEnumerable_T__o *v70; // x25
  Il2CppObject *v71; // x1
  System_Collections_Generic_IEnumerable_Transform__o *v72; // x28
  System_Collections_Generic_List_object__o *shadowAuraList; // x25
  NpcServantDisplayTypeDetailEntity_o *v74; // x27
  System_Collections_Generic_IEnumerable_T__o *ShadowEffectAndAttachForEachNodes; // x0
  UnityEngine_Object_o *monitor; // x25
  __int64 v77; // x1
  UnityEngine_Object_o *v78; // x0
  System_Collections_Generic_List_object__o *v79; // x0
  __int64 v80; // x1
  System_Collections_Generic_List_T__o *v81; // x0
  Il2CppObject *v82; // x28
  const MethodInfo *v83; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  __int64 v85; // x1
  UnityEngine_Renderer_array *v86; // x27
  __int64 v87; // x8
  unsigned __int64 v88; // x9
  System_Collections_Generic_List_object__o *v89; // x0
  Il2CppObject *v90; // x25
  const MethodInfo *v91; // x4
  System_Collections_Generic_List_object__o *TargetMaterials; // x0
  __int64 v93; // x1
  Il2CppObject *v94; // x28
  _BOOL8 v95; // x0
  __int64 v96; // x1
  System_Collections_Generic_List_object__o *autoReplaceShaderNames; // x25
  UnityEngine_Object_o *shader; // x0
  __int64 v99; // x1
  Il2CppObject *name; // x0
  UnityEngine_Object_o *v101; // x0
  __int64 v102; // x1
  System_String_o *v103; // x0
  BattleEffectReplaceShaderTexture_o *v104; // x0
  const MethodInfo *v105; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x29
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v108; // x1
  Il2CppObject *Component_object; // x25
  _BOOL8 v110; // x0
  __int64 v111; // x1
  UnityEngine_Shader_o *v112; // x0
  _BOOL8 v113; // x0
  const MethodInfo *v114; // x3
  Il2CppObject *object; // x0
  const MethodInfo *v116; // x4
  BattleEffectReplaceShaderTexture_o *v117; // x0
  const MethodInfo *v118; // x5
  System_Collections_Generic_List_object__o *v119; // x25
  UnityEngine_Object_o *v120; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x0
  UnityEngine_Object_o *v123; // x0
  __int64 v124; // x1
  System_String_o *v125; // x0
  BattleEffectReplaceShaderTexture_o *v126; // x0
  const MethodInfo *v127; // x3
  UnityEngine_Object_o *v128; // x25
  const MethodInfo *v129; // x3
  BattleEffectReplaceShaderTexture_o *v130; // x0
  const MethodInfo *v131; // x5
  System_Collections_Generic_List_object__o *replaceMaterials; // x0
  __int64 v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  System_Collections_Generic_List_object__o *v140; // x0
  struct System_Object_array *items; // x8
  _QWORD *v142; // x9
  __int64 size; // x10
  Il2CppClass **v144; // x8
  System_String_o *targetShaderName; // [xsp+8h] [xbp-138h]
  Il2CppObject *v146; // [xsp+10h] [xbp-130h]
  unsigned __int64 v147; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v148; // [xsp+20h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v149; // [xsp+28h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+40h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+60h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+80h] [xbp-C0h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+98h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v154; // [xsp+A0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v155; // [xsp+C0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches; // [xsp+D8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4BB7612 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_Transform___, method);
    sub_1C13D24(&Method_BasicHelper_ExcludeNull_Transform___, v3);
    sub_1C13D24(&BattleEffectUtility_TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__, v5);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Append_Transform___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__,
      v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__,
      v13);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__,
      v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v15);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__,
      v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v20);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__,
      v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v22);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__,
      v23);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__AddRange__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_List_Material__Add__, v26);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Contains__, v27);
    sub_1C13D24(&Method_System_Collections_Generic_List_Material__Contains__, v28);
    sub_1C13D24(&Method_System_Collections_Generic_List_Renderer__Contains__, v29);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__,
      v30);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__,
      v31);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v32);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v33);
    sub_1C13D24(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v34);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__,
      v35);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v36);
    sub_1C13D24(&Method_UnityEngine_Resources_Load_Texture2D___, v37);
    sub_1C13D24(&StringLiteral_16410/*"_BloomIntensity"*/, v38);
    sub_1C13D24(&StringLiteral_16590/*"_Scale"*/, v39);
    sub_1C13D24(&StringLiteral_12963/*"SetVisibility"*/, v40);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1C13D24(&StringLiteral_5043/*"Custom/OutlineEffectShaderLUT"*/, v41);
    byte_4BB7612 = 1;
  }
  memset(&v155, 0, sizeof(v155));
  memset(&v154, 0, sizeof(v154));
  entity = 0LL;
  memset(&v152, 0, sizeof(v152));
  memset(&v151, 0, sizeof(v151));
  memset(&v150, 0, sizeof(v150));
  replaceObjects = v2->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_144;
  if ( replaceObjects->fields._size < 1 )
    return;
  v43 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v43,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches = (System_Collections_Generic_Dictionary_string__Shader__o *)v43;
  this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceObjects;
  if ( !this )
LABEL_144:
    sub_1C13F80(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v149,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v44 = 0LL;
  v155 = v149;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v155,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    if ( !v45 )
      break;
    current = v155.fields._current;
    if ( !v155.fields._current )
      sub_1C13F80(v45, v46);
    TargetActors = (System_Collections_Generic_List_object__o *)BattleEffectReplaceShaderTexture__GetTargetActors(
                                                                  v2,
                                                                  (System_Int32_array *)v155.fields._current[1].monitor,
                                                                  (bool)v155.fields._current[2].klass,
                                                                  (bool)v155.fields._current[1].klass,
                                                                  v47);
    if ( !TargetActors )
      sub_1C13F80(0LL, v50);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v149,
      TargetActors,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v154 = v149;
    while ( 1 )
    {
      v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v154,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
      if ( !v51 )
        break;
      v53 = (BattleActorControl_o *)v154.fields._current;
      if ( !v154.fields._current )
        sub_1C13F80(v51, v52);
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v154.fields._current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant(v53, 0LL);
      v58 = isShadowServant;
      if ( LOBYTE(current[12].klass) )
        ActorTexture = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getActorTexture(
                                                 (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                                                 v53,
                                                 (System_String_o *)current[2].monitor,
                                                 v57);
      else
        ActorTexture = 0LL;
      battleSvtData = v53->fields.battleSvtData;
      if ( !battleSvtData )
        sub_1C13F80(0LL, v56);
      BattleServantData__TryGetDisplayTypeDetailEntity(battleSvtData, &entity, 0LL);
      if ( (v58 & (__int64)current[3].klass & 1) != 0 )
      {
        klass = (System_Collections_Generic_IEnumerable_TSource__o *)current[4].klass;
        if ( !klass )
        {
          v63 = Method_System_Array_Empty_Transform___;
          v64 = *((_QWORD *)Method_System_Array_Empty_Transform___ + 7);
          if ( !v64 )
          {
            sub_1C65C5C(Method_System_Array_Empty_Transform___);
            v64 = v63[7];
          }
          v65 = *(_QWORD *)(v64 + 16);
          if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
            v65 = sub_1C65C00(inited);
          if ( !*(_DWORD *)(v65 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v65);
          v66 = *(_QWORD *)(v63[7] + 16LL);
          if ( (*(_BYTE *)(v66 + 309) & 1) == 0 )
            v66 = sub_1C65C00(inited);
          klass = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v66 + 184);
        }
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v53, 0LL);
        NodeFromName = (Il2CppObject *)TransformHelper__getNodeFromName(
                                         transform,
                                         (System_String_o *)current[3].monitor,
                                         0,
                                         0LL);
        appended = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Append_object_(
                                                                    klass,
                                                                    NodeFromName,
                                                                    (const MethodInfo_2F9CF20 *)Method_System_Linq_Enumerable_Append_Transform___);
        v70 = BasicHelper__ExcludeNull_object_(
                appended,
                (const MethodInfo_2F7AD2C *)Method_BasicHelper_ExcludeNull_Transform___);
        v71 = (Il2CppObject *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
        v72 = (System_Collections_Generic_IEnumerable_Transform__o *)System_Linq_Enumerable__DefaultIfEmpty_object_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v70,
                                                                       v71,
                                                                       (const MethodInfo_2FAC3EC *)Method_System_Linq_Enumerable_DefaultIfEmpty_Transform___);
        shadowAuraList = (System_Collections_Generic_List_object__o *)v2->fields.shadowAuraList;
        v74 = entity;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        ShadowEffectAndAttachForEachNodes = (System_Collections_Generic_IEnumerable_T__o *)BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
                                                                                             v72,
                                                                                             v74,
                                                                                             0LL);
        if ( !shadowAuraList )
          sub_1C13F80(ShadowEffectAndAttachForEachNodes, ShadowEffectAndAttachForEachNodes);
        System_Collections_Generic_List_object___AddRange(
          shadowAuraList,
          ShadowEffectAndAttachForEachNodes,
          (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
      }
      monitor = (UnityEngine_Object_o *)current[7].monitor;
      targetShaderName = (System_String_o *)current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v78 = (UnityEngine_Object_o *)current[7].monitor;
        if ( !v78 )
          sub_1C13F80(0LL, v77);
        targetShaderName = UnityEngine_Object__get_name(v78, 0LL);
      }
      v79 = (System_Collections_Generic_List_object__o *)current[4].monitor;
      if ( !v79 )
        sub_1C13F80(0LL, v77);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v149,
        v79,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v148 = (UnityEngine_Component_o *)v53;
      v152 = v149;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v152,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        v81 = (System_Collections_Generic_List_T__o *)current[6].klass;
        if ( !v81 )
          sub_1C13F80(0LL, v80);
        v82 = v152.fields._current;
        System_Collections_Generic_List_Int32Enum___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v149,
          v81,
          (const MethodInfo_36134A8 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v151 = v149;
        while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v151,
                  (const MethodInfo_33BB6D8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              v2,
                              (UnityEngine_GameObject_o *)v82,
                              (int32_t)v151.fields._current,
                              (bool)current[5].monitor,
                              BYTE1(current[5].monitor),
                              v83);
          v86 = TargetRenderers;
          if ( TargetRenderers )
          {
            v87 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v87 >= 1 )
            {
              v88 = 0LL;
              v146 = v82;
              do
              {
                if ( v88 >= (unsigned int)v87 )
                  sub_1C13F88(TargetRenderers, v85);
                v89 = (System_Collections_Generic_List_object__o *)current[5].klass;
                if ( !v89 )
                  sub_1C13F80(0LL, v85);
                v147 = v88;
                v90 = (Il2CppObject *)v86->m_Items[v88];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_object___Contains(
                                                                  v89,
                                                                  v90,
                                                                  (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) == 0 )
                {
                  TargetMaterials = (System_Collections_Generic_List_object__o *)BattleEffectReplaceShaderTexture__getTargetMaterials(
                                                                                   (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                                                                   (UnityEngine_Renderer_o *)v90,
                                                                                   targetShaderName,
                                                                                   (bool)current[6].monitor,
                                                                                   v91);
                  if ( !TargetMaterials )
                    sub_1C13F80(0LL, v93);
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v149,
                    TargetMaterials,
                    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                  v150 = v149;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v150,
                            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                  {
                    v94 = v150.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    v95 = UnityEngine_Object__op_Inequality(ActorTexture, 0LL, 0LL);
                    if ( v95 )
                    {
                      if ( !v94 )
                        sub_1C13F80(v95, v96);
                      UnityEngine_Material__set_mainTexture(
                        (UnityEngine_Material_o *)v94,
                        (UnityEngine_Texture_o *)ActorTexture,
                        0LL);
                    }
                    if ( isChocoServant )
                    {
                      if ( !BYTE1(current[12].klass) )
                        goto LABEL_65;
                      if ( !v94 )
                        sub_1C13F80(v95, v96);
                      autoReplaceShaderNames = (System_Collections_Generic_List_object__o *)v2->fields.autoReplaceShaderNames;
                      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v94,
                                                         0LL);
                      if ( !shader )
                        sub_1C13F80(0LL, v99);
                      name = (Il2CppObject *)UnityEngine_Object__get_name(shader, 0LL);
                      if ( !autoReplaceShaderNames )
                        sub_1C13F80(name, name);
                      if ( System_Collections_Generic_List_object___Contains(
                             autoReplaceShaderNames,
                             name,
                             (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_string__Contains__) )
                      {
                        v101 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v94,
                                                         0LL);
                        if ( !v101 )
                          sub_1C13F80(0LL, v102);
                        v103 = UnityEngine_Object__get_name(v101, 0LL);
                        v104 = (BattleEffectReplaceShaderTexture_o *)System_String__Concat_62967944(
                                                                       v103,
                                                                       (System_String_o *)StringLiteral_16410/*"_BloomIntensity"*/,
                                                                       0LL);
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                       v104,
                                                                       (System_String_o *)v104,
                                                                       &shaderCaches,
                                                                       v105);
                      }
                      else
                      {
LABEL_65:
                        ReplaceChocoShader = 0LL;
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) )
                        ReplaceChocoShader = (UnityEngine_Object_o *)current[8].klass;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) && BYTE2(current[12].klass) )
                      {
                        gameObject = UnityEngine_Component__get_gameObject(v148, 0LL);
                        if ( !gameObject )
                          sub_1C13F80(0LL, v108);
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v110 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                        if ( v110 )
                        {
                          if ( !v94 )
                            sub_1C13F80(v110, v111);
                          v112 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v94, 0LL);
                          if ( !Component_object )
                            sub_1C13F80(v112, v112);
                          ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                         (BattleServantDeadComponent_o *)Component_object,
                                                                         v112,
                                                                         0LL,
                                                                         0LL);
                        }
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      v113 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                      if ( v113 )
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                       (BattleEffectReplaceShaderTexture_o *)v113,
                                                                       (System_String_o *)StringLiteral_5043/*"Custom/OutlineEffectShaderLUT"*/,
                                                                       &shaderCaches,
                                                                       v114);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      object = (Il2CppObject *)UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
                      if ( ((unsigned __int8)object & 1) != 0 )
                      {
                        object = UnityEngine_Resources__Load_object_(
                                   (System_String_o *)StringLiteral_12963/*"SetVisibility"*/,
                                   (const MethodInfo_30245D8 *)Method_UnityEngine_Resources_Load_Texture2D___);
                        v44 = (UnityEngine_Object_o *)object;
                      }
                      BattleEffectReplaceShaderTexture__setupChocoShader(
                        (BattleEffectReplaceShaderTexture_o *)object,
                        (UnityEngine_Material_o *)v94,
                        (UnityEngine_Shader_o *)ReplaceChocoShader,
                        (UnityEngine_Texture2D_o *)v44,
                        v116);
                      BattleEffectReplaceShaderTexture__updateShaderValues(
                        v117,
                        (UnityEngine_Material_o *)v94,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].monitor,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[9].klass,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].monitor,
                        v118);
                    }
                    if ( v58 )
                    {
                      if ( !v94 )
                        sub_1C13F80(v95, v96);
                      v119 = (System_Collections_Generic_List_object__o *)v2->fields.autoReplaceShaderNames;
                      v120 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v94,
                                                       0LL);
                      if ( !v120 )
                        sub_1C13F80(0LL, v121);
                      v122 = (Il2CppObject *)UnityEngine_Object__get_name(v120, 0LL);
                      if ( !v119 )
                        sub_1C13F80(v122, v122);
                      if ( System_Collections_Generic_List_object___Contains(
                             v119,
                             v122,
                             (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_string__Contains__) )
                      {
                        v123 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v94,
                                                         0LL);
                        if ( !v123 )
                          sub_1C13F80(0LL, v124);
                        v125 = UnityEngine_Object__get_name(v123, 0LL);
                        v126 = (BattleEffectReplaceShaderTexture_o *)System_String__Concat_62967944(
                                                                       v125,
                                                                       (System_String_o *)StringLiteral_16590/*"_Scale"*/,
                                                                       0LL);
                        v128 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                         v126,
                                                         (System_String_o *)v126,
                                                         &shaderCaches,
                                                         v127);
                      }
                      else
                      {
                        v128 = 0LL;
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(v128, 0LL, 0LL) )
                        v128 = (UnityEngine_Object_o *)current[10].klass;
                      BattleEffectReplaceShaderTexture__SetupShadowShader(
                        (UnityEngine_Material_o *)v94,
                        (UnityEngine_Shader_o *)v128,
                        entity,
                        v129);
                      BattleEffectReplaceShaderTexture__updateShaderValues(
                        v130,
                        (UnityEngine_Material_o *)v94,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].monitor,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[11].klass,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].monitor,
                        v131);
                    }
                    replaceMaterials = (System_Collections_Generic_List_object__o *)v2->fields.replaceMaterials;
                    if ( !replaceMaterials )
                      sub_1C13F80(0LL, v96);
                    if ( !System_Collections_Generic_List_object___Contains(
                            replaceMaterials,
                            v94,
                            (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_Material__Contains__) )
                    {
                      v140 = (System_Collections_Generic_List_object__o *)v2->fields.replaceMaterials;
                      if ( !v140 )
                        sub_1C13F80(0LL, v133);
                      items = v140->fields._items;
                      v142 = Method_System_Collections_Generic_List_Material__Add__;
                      ++v140->fields._version;
                      if ( !items )
                        sub_1C13F80(v140, v133);
                      size = v140->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v140,
                          v94,
                          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v144 = &items->obj.klass + size;
                        v140->fields._size = size + 1;
                        v144[4] = (Il2CppClass *)v94;
                        sub_1C13CC8(
                          (PartyOrganizationUtility_o *)(v144 + 4),
                          (int64_t)v94,
                          v134,
                          v135,
                          v136,
                          v137,
                          v138,
                          v139);
                      }
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v150,
                    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                  v82 = v146;
                }
                LODWORD(v87) = v86->max_length;
                v88 = v147 + 1;
              }
              while ( (__int64)(v147 + 1) < (int)v87 );
            }
          }
        }
        System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v151,
          (const MethodInfo_33BB6D4 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v152,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v154,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v155,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
BattleActorControl_o *__fastcall BattleEffectReplaceShaderTexture__GetModelBattleActor(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t servantId,
        bool isCheckUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v9; // x1
  int max_length; // w8
  System_Object_array *v11; // x22
  unsigned int v12; // w24
  Il2CppClass **v13; // x8
  BattleActorControl_o *v14; // x23

  if ( (byte_4BB7614 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    byte_4BB7614 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3014C28 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v11 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C13F88(ObjectsOfType_object, v9);
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleActorControl_o *)v13[4];
      if ( !v14 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v13[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!isCheckUniqueId || v14->fields.uniqueID == this->fields.targetId) )
      {
        return v14;
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_1C13F80(ObjectsOfType_object, v9);
  }
  return 0LL;
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleEffectReplaceShaderTexture__GetTargetActors(
        BattleEffectReplaceShaderTexture_o *this,
        System_Int32_array *servantIds,
        bool isCheckUniqueId,
        bool useUniqueId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  System_Object_array *Instance; // x0
  int64_t v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x20
  Il2CppObject *Component_object; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  PartyOrganizationUtility_o *v32; // x0
  __int64 v33; // x8
  int64_t *i; // x9
  __int64 v35; // x8
  unsigned __int64 v36; // x25
  bool v37; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23
  int64_t v39; // x2
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x8
  System_Collections_Generic_List_object__o *v49; // x0
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0

  if ( (byte_4BB7613 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, servantIds);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleActorControl__Contains__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v11);
    sub_1C13D24(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v12);
    sub_1C13D24(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v13);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15);
    byte_4BB7613 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    v20 = (UnityEngine_Object_o *)Instance->m_Items[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_50;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v20,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v16 )
        {
          items = v16->fields._items;
          v29 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v16->fields._version;
          if ( items )
          {
            size = v16->fields._size;
            if ( (unsigned int)size < items->max_length )
            {
              v31 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v31[4] = (Il2CppClass *)Component_object;
              v32 = (PartyOrganizationUtility_o *)(v31 + 4);
              v18 = (int64_t)Component_object;
LABEL_46:
              sub_1C13CC8(v32, v18, v22, v23, v24, v25, v26, v27);
              return (System_Collections_Generic_List_BattleActorControl__o *)v16;
            }
            v48 = v29[4];
            v49 = v16;
            v18 = (int64_t)Component_object;
            goto LABEL_48;
          }
        }
        goto LABEL_50;
      }
    }
  }
  else if ( useUniqueId )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_3014C28 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( !Instance )
      goto LABEL_50;
    if ( (int)*(_QWORD *)&Instance->max_length >= 1 )
    {
      v33 = (unsigned int)*(_QWORD *)&Instance->max_length;
      for ( i = (int64_t *)Instance->m_Items; ; ++i )
      {
        v18 = *i;
        if ( !*i )
          goto LABEL_50;
        if ( *(_DWORD *)(v18 + 464) == this->fields.targetId )
          break;
        if ( !--v33 )
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
      }
      if ( v16 )
      {
        v50 = v16->fields._items;
        v51 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
        ++v16->fields._version;
        if ( v50 )
        {
          v52 = v16->fields._size;
          if ( (unsigned int)v52 < v50->max_length )
          {
            v53 = &v50->obj.klass + v52;
            v16->fields._size = v52 + 1;
            v53[4] = (Il2CppClass *)v18;
            v32 = (PartyOrganizationUtility_o *)(v53 + 4);
            goto LABEL_46;
          }
          v48 = v51[4];
          v49 = v16;
LABEL_48:
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            (Il2CppObject *)v18,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v48 + 192) + 112LL));
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
        }
      }
LABEL_50:
      sub_1C13F80(Instance, v18);
    }
  }
  else if ( servantIds )
  {
    v35 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v35 >= 1 )
    {
      v36 = 0LL;
      v37 = isCheckUniqueId;
      do
      {
        if ( v36 >= (unsigned int)v35 )
          sub_1C13F88(Instance, v18);
        ModelBattleActor = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__GetModelBattleActor(
                                                     this,
                                                     servantIds->m_Items[v36 + 1],
                                                     v37,
                                                     v19);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(ModelBattleActor, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_50;
          Instance = (System_Object_array *)System_Collections_Generic_List_object___Contains(
                                              v16,
                                              (Il2CppObject *)ModelBattleActor,
                                              (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v44 = v16->fields._items;
            v45 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
            ++v16->fields._version;
            if ( !v44 )
              goto LABEL_50;
            v46 = v16->fields._size;
            if ( (unsigned int)v46 >= v44->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)ModelBattleActor,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &v44->obj.klass + v46;
              v16->fields._size = v46 + 1;
              v47[4] = (Il2CppClass *)ModelBattleActor;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)(v47 + 4),
                (int64_t)ModelBattleActor,
                v39,
                (int32_t)v19,
                v40,
                v41,
                v42,
                v43);
            }
          }
        }
        LODWORD(v35) = servantIds->max_length;
        ++v36;
      }
      while ( (__int64)v36 < (int)v35 );
    }
  }
  return (System_Collections_Generic_List_BattleActorControl__o *)v16;
}


void __fastcall BattleEffectReplaceShaderTexture__OnDestroy(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
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
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Material__o *replaceMaterials; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Action_object__o *v18; // x21
  struct System_Collections_Generic_List_GameObject__o *shadowAuraList; // x8
  int32_t v20; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4BB7611 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_GameObject__TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_ExcludeNull_GameObject___, v3);
    sub_1C13D24(&Method_BasicHelper_ForEach_GameObject___, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Clear__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Material__Clear__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v10);
    sub_1C13D24(&Method_UnityEngine_Object_Destroy__, v11);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    byte_4BB7611 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( v2->fields.destroyReplaceShaderMaterials )
  {
    this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceMaterials;
    if ( !this )
      goto LABEL_21;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
    {
      current = v23.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_70722176((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  replaceMaterials = v2->fields.replaceMaterials;
  if ( !replaceMaterials )
    goto LABEL_21;
  size = replaceMaterials->fields._size;
  v16 = replaceMaterials->fields._version + 1;
  replaceMaterials->fields._size = 0;
  replaceMaterials->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)replaceMaterials->fields._items, 0, size, 0LL);
  v17 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)v2->fields.shadowAuraList,
          (const MethodInfo_2F7AD2C *)Method_BasicHelper_ExcludeNull_GameObject___);
  v18 = (System_Action_object__o *)sub_1C13F70(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v18, 0LL, Method_UnityEngine_Object_Destroy__, 0LL);
  BasicHelper__ForEach_object_(
    v17,
    (System_Action_T__o *)v18,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_GameObject___);
  shadowAuraList = v2->fields.shadowAuraList;
  if ( !shadowAuraList )
LABEL_21:
    sub_1C13F80(this, method);
  v20 = shadowAuraList->fields._size;
  v21 = shadowAuraList->fields._version + 1;
  shadowAuraList->fields._size = 0;
  shadowAuraList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)shadowAuraList->fields._items, 0, v20, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__SetTargetId(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleEffectReplaceShaderTexture__SetupShadowShader(
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *shadowShader,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x21
  __int64 v20; // x0

  if ( (byte_4BB761C & 1) == 0 )
  {
    sub_1C13D24(&BattleDataDefine_TypeInfo, shadowShader);
    sub_1C13D24(&BattleEffectUtility_TypeInfo, v7);
    sub_1C13D24(&UnityEngine_Material___TypeInfo, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_16430/*"_ClipArgs3"*/, v10);
    byte_4BB761C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)shadowShader, 0LL, 0LL);
  if ( (v11 & 1) != 0 )
  {
    if ( !material )
      goto LABEL_20;
    UnityEngine_Material__set_shader(material, shadowShader, 0LL);
  }
  if ( !displayTypeDetailEntity )
  {
    v11 = (__int64)BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v11 = (__int64)BattleDataDefine_TypeInfo;
    }
    if ( material )
    {
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)StringLiteral_16430/*"_ClipArgs3"*/,
        *(UnityEngine_Color_o *)(*(_QWORD *)(v11 + 184) + 48LL),
        0LL);
      return;
    }
LABEL_20:
    sub_1C13F80(v11, v12);
  }
  v11 = sub_1C13DCC(UnityEngine_Material___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_20;
  v19 = v11;
  if ( material )
  {
    v11 = sub_1C13E60(material, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
    {
      v20 = sub_1C13FA4(0LL);
      sub_1C13E4C(v20, 0LL);
    }
  }
  if ( !*(_DWORD *)(v19 + 24) )
    sub_1C13F88(v11, v12);
  *(_QWORD *)(v19 + 32) = material;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)material, v13, v14, v15, v16, v17, v18);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetShadowServantColorToMaterials(
    (System_Collections_Generic_IEnumerable_Material__o *)v19,
    displayTypeDetailEntity,
    0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__Start(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleEffectReplaceShaderTexture__Execute(this, method);
}


UnityEngine_Texture_o *__fastcall BattleEffectReplaceShaderTexture__getActorTexture(
        BattleEffectReplaceShaderTexture_o *this,
        BattleActorControl_o *actor,
        System_String_o *searchMeshWord,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  BattleEffectReplaceShaderTexture_o *v7; // x20
  unsigned int v8; // w22
  BattleEffectReplaceShaderTexture_c **v9; // x8
  UnityEngine_Object_o *v10; // x21

  if ( (byte_4BB7616 & 1) == 0 )
  {
    this = (BattleEffectReplaceShaderTexture_o *)sub_1C13D24(
                                                   &Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____77489456,
                                                   actor);
    byte_4BB7616 = 1;
  }
  if ( !actor )
    goto LABEL_16;
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)actor,
                                                 1,
                                                 (const MethodInfo_2F869FC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____77489456);
  if ( !this )
    goto LABEL_16;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( m_CancellationTokenSource < 1 )
    return 0LL;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= m_CancellationTokenSource )
      sub_1C13F88(this, actor);
    v9 = &v7->klass + (int)v8;
    v10 = (UnityEngine_Object_o *)v9[4];
    if ( !v10 )
      goto LABEL_16;
    this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v9[4], 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Object__get_name(v10, 0LL);
      if ( !this )
        goto LABEL_16;
      this = (BattleEffectReplaceShaderTexture_o *)System_String__IndexOf_62999520(
                                                     (System_String_o *)this,
                                                     searchMeshWord,
                                                     0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
        break;
    }
    m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
    if ( (int)++v8 >= m_CancellationTokenSource )
      return 0LL;
  }
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v10, 0LL);
  if ( !this )
LABEL_16:
    sub_1C13F80(this, actor);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall BattleEffectReplaceShaderTexture__getRenderer(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8
  UnityEngine_Renderer_o *result; // x0

  if ( (byte_4BB7618 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, gameObject);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___, v6);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v7);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1C13D24(
                                                   &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___,
                                                   v8);
    byte_4BB7618 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_Renderer___;
      goto LABEL_13;
    case 1:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_MeshRenderer___;
      goto LABEL_13;
    case 2:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___;
      goto LABEL_13;
    case 3:
      if ( !gameObject )
LABEL_14:
        sub_1C13F80(this, gameObject);
      v9 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_13:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2FDF9FC *)*v9);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getRenderersInChildren(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  UnityEngine_Renderer_array *result; // x0

  if ( (byte_4BB7619 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____77537192, gameObject);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____77537224, v8);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____77537232, v9);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1C13D24(
                                                   &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____77537248,
                                                   v10);
    byte_4BB7619 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____77537232;
      goto LABEL_13;
    case 1:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____77537192;
      goto LABEL_13;
    case 2:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____77537248;
      goto LABEL_13;
    case 3:
      if ( !gameObject )
LABEL_14:
        sub_1C13F80(this, gameObject);
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____77537224;
LABEL_13:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_2FE069C *)*v11);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


System_Collections_Generic_List_Material__o *__fastcall BattleEffectReplaceShaderTexture__getTargetMaterials(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Renderer_o *renderer,
        System_String_o *targetShaderName,
        bool targetShaderAll,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  UnityEngine_Object_o *materials; // x0
  __int64 v14; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v18; // x23
  UnityEngine_Object_o *shader; // x24
  System_String_o *name; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4BB761A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Material__Add__, renderer);
    sub_1C13D24(&Method_System_Collections_Generic_List_Material__Contains__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Material___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_Material__TypeInfo, v10);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v11);
    byte_4BB761A = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = (UnityEngine_Object_o *)UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_27:
    sub_1C13F80(materials, v14);
  klass = materials[1].klass;
  v16 = materials;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1C13F88(materials, v14);
      v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        goto LABEL_31;
      if ( !v18 )
        goto LABEL_27;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v18, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(shader, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
      {
LABEL_31:
        if ( targetShaderAll )
          goto LABEL_19;
        if ( !v18 )
          goto LABEL_27;
        materials = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v18, 0LL);
        if ( !materials )
          goto LABEL_27;
        name = UnityEngine_Object__get_name(materials, 0LL);
        materials = (UnityEngine_Object_o *)System_String__op_Equality(name, targetShaderName, 0LL);
        if ( ((unsigned __int8)materials & 1) != 0 )
        {
LABEL_19:
          if ( !v12 )
            goto LABEL_27;
          materials = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Contains(
                                                v12,
                                                (Il2CppObject *)v18,
                                                (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
          {
            items = v12->fields._items;
            v28 = Method_System_Collections_Generic_List_Material__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v18,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v30[4] = (Il2CppClass *)v18;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v18, v21, v22, v23, v24, v25, v26);
            }
          }
        }
      }
      LODWORD(klass) = v16[1].klass;
    }
  }
  return (System_Collections_Generic_List_Material__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getTargetRenderers(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *targetObject,
        int32_t rendererType,
        bool targetsInChildren,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v10; // x1
  UnityEngine_Object_o *Renderer; // x19
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x0

  if ( (byte_4BB7617 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, targetObject);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1C13D24(&UnityEngine_Renderer___TypeInfo, v10);
    byte_4BB7617 = 1;
  }
  if ( targetsInChildren )
    return BattleEffectReplaceShaderTexture__getRenderersInChildren(
             this,
             targetObject,
             rendererType,
             includeInactive,
             (const MethodInfo *)includeInactive);
  Renderer = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getRenderer(
                                       this,
                                       targetObject,
                                       rendererType,
                                       (const MethodInfo *)targetsInChildren);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality(Renderer, 0LL, 0LL) )
  {
    v14 = sub_1C13DCC(UnityEngine_Renderer___TypeInfo, 1LL);
    if ( !v14 )
      sub_1C13F80(0LL, v15);
    v13 = v14;
    if ( Renderer )
    {
      v14 = sub_1C13E60(Renderer, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v14 )
      {
        v22 = sub_1C13FA4(0LL);
        sub_1C13E4C(v22, 0LL);
      }
    }
    if ( !*(_DWORD *)(v13 + 24) )
      sub_1C13F88(v14, v15);
    *(_QWORD *)(v13 + 32) = Renderer;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)Renderer, v16, v17, v18, v19, v20, v21);
  }
  return (UnityEngine_Renderer_array *)v13;
}


UnityEngine_Shader_o *__fastcall BattleEffectReplaceShaderTexture__loadShader(
        BattleEffectReplaceShaderTexture_o *this,
        System_String_o *shaderName,
        System_Collections_Generic_Dictionary_string__Shader__o **shaderCaches,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_string__Shader__o *v9; // x0
  UnityEngine_Shader_o *result; // x0
  UnityEngine_Object_o *v11; // x21
  bool v12; // w8

  if ( (byte_4BB7615 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__, shaderName);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    byte_4BB7615 = 1;
  }
  v9 = *shaderCaches;
  if ( !*shaderCaches )
    goto LABEL_13;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v9,
         (Il2CppObject *)shaderName,
         (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    v9 = *shaderCaches;
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                       (Il2CppObject *)shaderName,
                                       (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_13:
    sub_1C13F80(v9, shaderName);
  }
  v11 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(shaderName, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  result = 0LL;
  if ( v12 )
  {
    v9 = *shaderCaches;
    if ( !*shaderCaches )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)v9,
      (Il2CppObject *)shaderName,
      (Il2CppObject *)v11,
      (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    return (UnityEngine_Shader_o *)v11;
  }
  return result;
}


void __fastcall BattleEffectReplaceShaderTexture__setupChocoShader(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *chocoShader,
        UnityEngine_Texture2D_o *chocoTexture,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB761B & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, material);
    sub_1C13D24(&StringLiteral_16430/*"_ClipArgs3"*/, v8);
    sub_1C13D24(&StringLiteral_16411/*"_BloomTex"*/, v9);
    sub_1C13D24(&StringLiteral_16645/*"_Transparency"*/, v10);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1C13D24(&StringLiteral_16386/*"^v"*/, v11);
    byte_4BB761B = 1;
  }
  if ( !material )
    sub_1C13F80(this, material);
  if ( UnityEngine_Material__HasProperty_70588168(material, (System_String_o *)StringLiteral_16430/*"_ClipArgs3"*/, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16430/*"_ClipArgs3"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  else
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  if ( UnityEngine_Material__HasProperty_70588168(material, (System_String_o *)StringLiteral_16386/*"^v"*/, 0LL) )
  {
    v21 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16386/*"^v"*/, 0LL);
    v16 = v21.fields.r;
    v17 = v21.fields.g;
    v18 = v21.fields.b;
    v19 = v21.fields.a;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16430/*"_ClipArgs3"*/, v22, 0LL);
  v23.fields.r = v16;
  v23.fields.g = v17;
  v23.fields.b = v18;
  v23.fields.a = v19;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16386/*"^v"*/, v23, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_16411/*"_BloomTex"*/,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_70588168(material, (System_String_o *)StringLiteral_16645/*"_Transparency"*/, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16645/*"_Transparency"*/, 1.0, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__updateShaderValues(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *replaceShaderFloatValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *replaceShaderColorValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *replaceShaderTextureValues,
        const MethodInfo *method)
{
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
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4BB761D & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__,
      material);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__,
      v10);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__,
      v11);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__,
      v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__,
      v13);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__,
      v14);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__,
      v15);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__,
      v16);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__,
      v17);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__,
      v18);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__,
      v19);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1C13D24(
                                                   &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__,
                                                   v20);
    byte_4BB761D = 1;
  }
  memset(&v33, 0, sizeof(v33));
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  if ( !replaceShaderFloatValues )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)replaceShaderFloatValues,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v33 = v30;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    if ( !v21 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1C13F80(v21, v22);
    if ( !material )
      sub_1C13F80(v21, v22);
    if ( UnityEngine_Material__HasProperty_70588168(material, (System_String_o *)v33.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  if ( !replaceShaderColorValues )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)replaceShaderColorValues,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v32 = v30;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    if ( !v24 )
      break;
    v26 = v32.fields._current;
    if ( !v32.fields._current )
      sub_1C13F80(v24, v25);
    if ( !material )
      sub_1C13F80(v24, v25);
    if ( UnityEngine_Material__HasProperty_70588168(material, (System_String_o *)v32.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v26[1].klass,
        *(UnityEngine_Color_o *)&v26[1].monitor,
        0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( !replaceShaderTextureValues )
LABEL_31:
    sub_1C13F80(this, material);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)replaceShaderTextureValues,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    if ( !v27 )
      break;
    v29 = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C13F80(v27, v28);
    if ( !material )
      sub_1C13F80(v27, v28);
    if ( UnityEngine_Material__HasProperty_70588168(material, (System_String_o *)v31.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v29[1].klass,
        (UnityEngine_Texture_o *)v29[1].monitor,
        0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
}


void __fastcall BattleEffectReplaceShaderTexture_ReplaceObject___ctor(
        BattleEffectReplaceShaderTexture_ReplaceObject_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4BB761F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17617/*"blob is too small."*/, method);
    byte_4BB761F = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v9 = StringLiteral_17617/*"blob is too small."*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17617/*"blob is too small."*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.searchMeshWord, v9, v2, v3, v4, v5, v6, v7);
  this->fields.targetShaderAll = 1;
  *(_WORD *)&this->fields.targetsInChildren = 257;
  *(_WORD *)&this->fields.useAutoReplaceShader = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Transform_array *__fastcall BattleEffectReplaceShaderTexture_ReplaceObject__get_ShadowAuraNodeTransformArray(
        BattleEffectReplaceShaderTexture_ReplaceObject_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowAuraNodeTransformArray;
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderColorValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderColorValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderFloatValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderFloatValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderTextureValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderTextureValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}