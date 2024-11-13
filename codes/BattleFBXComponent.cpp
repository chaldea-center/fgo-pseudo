void __fastcall BattleFBXComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  struct BattleFBXComponent_StaticFields *static_fields; // x0
  int64_t v47; // x1
  int64_t v48; // x1
  struct BattleFBXComponent_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  struct BattleFBXComponent_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x1
  struct BattleFBXComponent_StaticFields *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  struct BattleFBXComponent_StaticFields *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  struct BattleFBXComponent_StaticFields *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x1
  struct BattleFBXComponent_StaticFields *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x1
  struct BattleFBXComponent_StaticFields *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x0
  __int64 v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x19
  int64_t v113; // x1
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x1
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x1
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int64_t v134; // x1
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x1
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // x1
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int64_t v155; // x1
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  int64_t v162; // x1
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  int64_t v169; // x1
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  int64_t v176; // x1
  struct BattleFBXComponent_StaticFields *v177; // x0
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7

  if ( (byte_4B18809 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_7355/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_6496/*"FGO_CH/AlphaBlendSingle"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_19176/*"en_weapon_"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_6498/*"FGO_CH/Base"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16720/*"_level"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_6495/*"FGO_Battle/Particle/Base-Stencil"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_6494/*"FGO_Battle/Particle/Base"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_6499/*"FGO_CH/SingleFlat"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_7354/*"Hidden/Particle/MultiplyAdd1Pass"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_19172/*"en_item_"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_18147/*"chrnode_"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_21178/*"joint_sideflip_"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_7352/*"Hidden/Particle/MultiplyAdd"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_2532/*"Assets/AssetStorages/NoblePhantasm/"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_7353/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_6497/*"FGO_CH/AlphaBlendSingleFlat"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_22827/*"prefabn_"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_2533/*"Assets/AssetStorages/Servants/"*/, v44, v45);
    byte_4B18809 = 1;
  }
  static_fields = BattleFBXComponent_TypeInfo->static_fields;
  static_fields->EnableEvent = 1;
  static_fields->animFps = 30.0;
  v47 = StringLiteral_16720/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16720/*"_level"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->levelMarker, v47, v2, v3, v4, v5, v6, v7);
  v48 = StringLiteral_22827/*"prefabn_"*/;
  v49 = BattleFBXComponent_TypeInfo->static_fields;
  v49->prefabMarker = (struct System_String_o *)StringLiteral_22827/*"prefabn_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->prefabMarker, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_18147/*"chrnode_"*/;
  v57 = BattleFBXComponent_TypeInfo->static_fields;
  v57->chrnodeMarker = (struct System_String_o *)StringLiteral_18147/*"chrnode_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v57->chrnodeMarker, v56, v58, v59, v60, v61, v62, v63);
  v64 = StringLiteral_21178/*"joint_sideflip_"*/;
  v65 = BattleFBXComponent_TypeInfo->static_fields;
  v65->sideflipMarker = (struct System_String_o *)StringLiteral_21178/*"joint_sideflip_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v65->sideflipMarker, v64, v66, v67, v68, v69, v70, v71);
  v72 = StringLiteral_19172/*"en_item_"*/;
  v73 = BattleFBXComponent_TypeInfo->static_fields;
  v73->enItemMarker = (struct System_String_o *)StringLiteral_19172/*"en_item_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v73->enItemMarker, v72, v74, v75, v76, v77, v78, v79);
  v80 = StringLiteral_19176/*"en_weapon_"*/;
  v81 = BattleFBXComponent_TypeInfo->static_fields;
  v81->enWeaponMarker = (struct System_String_o *)StringLiteral_19176/*"en_weapon_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v81->enWeaponMarker, v80, v82, v83, v84, v85, v86, v87);
  v88 = StringLiteral_2532/*"Assets/AssetStorages/NoblePhantasm/"*/;
  v89 = BattleFBXComponent_TypeInfo->static_fields;
  v89->npPathHead = (struct System_String_o *)StringLiteral_2532/*"Assets/AssetStorages/NoblePhantasm/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v89->npPathHead, v88, v90, v91, v92, v93, v94, v95);
  v96 = StringLiteral_2533/*"Assets/AssetStorages/Servants/"*/;
  v97 = BattleFBXComponent_TypeInfo->static_fields;
  v97->svtPathHead = (struct System_String_o *)StringLiteral_2533/*"Assets/AssetStorages/Servants/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v97->svtPathHead, v96, v98, v99, v100, v101, v102, v103);
  v104 = sub_1BCA888(string___TypeInfo, 10LL);
  if ( !v104 )
    sub_1BCAA3C(0LL, v105);
  v112 = v104;
  if ( !*(_DWORD *)(v104 + 24) )
    goto LABEL_15;
  v113 = StringLiteral_6498/*"FGO_CH/Base"*/;
  *(_QWORD *)(v104 + 32) = StringLiteral_6498/*"FGO_CH/Base"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v104 + 32), v113, v106, v107, v108, v109, v110, v111);
  if ( *(_DWORD *)(v112 + 24) <= 1u )
    goto LABEL_15;
  v120 = StringLiteral_6496/*"FGO_CH/AlphaBlendSingle"*/;
  *(_QWORD *)(v112 + 40) = StringLiteral_6496/*"FGO_CH/AlphaBlendSingle"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 40), v120, v114, v115, v116, v117, v118, v119);
  if ( *(_DWORD *)(v112 + 24) <= 2u )
    goto LABEL_15;
  v127 = StringLiteral_6494/*"FGO_Battle/Particle/Base"*/;
  *(_QWORD *)(v112 + 48) = StringLiteral_6494/*"FGO_Battle/Particle/Base"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 48), v127, v121, v122, v123, v124, v125, v126);
  if ( *(_DWORD *)(v112 + 24) <= 3u )
    goto LABEL_15;
  v134 = StringLiteral_7352/*"Hidden/Particle/MultiplyAdd"*/;
  *(_QWORD *)(v112 + 56) = StringLiteral_7352/*"Hidden/Particle/MultiplyAdd"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 56), v134, v128, v129, v130, v131, v132, v133);
  if ( *(_DWORD *)(v112 + 24) <= 4u )
    goto LABEL_15;
  v141 = StringLiteral_7354/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  *(_QWORD *)(v112 + 64) = StringLiteral_7354/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 64), v141, v135, v136, v137, v138, v139, v140);
  if ( *(_DWORD *)(v112 + 24) <= 5u )
    goto LABEL_15;
  v148 = StringLiteral_6497/*"FGO_CH/AlphaBlendSingleFlat"*/;
  *(_QWORD *)(v112 + 72) = StringLiteral_6497/*"FGO_CH/AlphaBlendSingleFlat"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 72), v148, v142, v143, v144, v145, v146, v147);
  if ( *(_DWORD *)(v112 + 24) <= 6u )
    goto LABEL_15;
  v155 = StringLiteral_6495/*"FGO_Battle/Particle/Base-Stencil"*/;
  *(_QWORD *)(v112 + 80) = StringLiteral_6495/*"FGO_Battle/Particle/Base-Stencil"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 80), v155, v149, v150, v151, v152, v153, v154);
  if ( *(_DWORD *)(v112 + 24) <= 7u
    || (v162 = StringLiteral_7353/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        *(_QWORD *)(v112 + 88) = StringLiteral_7353/*"Hidden/Particle/MultiplyAdd-Stencil"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 88), v162, v156, v157, v158, v159, v160, v161),
        *(_DWORD *)(v112 + 24) <= 8u)
    || (v169 = StringLiteral_7355/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        *(_QWORD *)(v112 + 96) = StringLiteral_7355/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 96), v169, v163, v164, v165, v166, v167, v168),
        *(_DWORD *)(v112 + 24) <= 9u) )
  {
LABEL_15:
    sub_1BCAA44(v104, v105);
  }
  v176 = StringLiteral_6499/*"FGO_CH/SingleFlat"*/;
  *(_QWORD *)(v112 + 104) = StringLiteral_6499/*"FGO_CH/SingleFlat"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v112 + 104), v176, v170, v171, v172, v173, v174, v175);
  v177 = BattleFBXComponent_TypeInfo->static_fields;
  v177->yTransparenceShaderNames = (struct System_String_array *)v112;
  sub_1BCA784((PartyOrganizationUtility_o *)&v177->yTransparenceShaderNames, v112, v178, v179, v180, v181, v182, v183);
}


void __fastcall BattleFBXComponent___ctor(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
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
  System_Collections_Generic_Dictionary_object__object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_Dictionary_object__object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_Dictionary_object__object__o *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7

  if ( (byte_4B18808 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_Renderer__TypeInfo, v17, v18);
    byte_4B18808 = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v19,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.RealAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.RealAnimNames, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v26,
                                                                     v27,
                                                                     v28);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.CommonAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.CommonAnimNames, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  this->fields.timescale = 1.0;
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Renderer__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.enableRendererList = (struct System_Collections_Generic_List_Renderer__o *)v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.enableRendererList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v49 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                     v46,
                                                                     v47,
                                                                     v48);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v49,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.actorEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.actorEffectDict, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  v59 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo,
                                                                   v56,
                                                                   v57,
                                                                   v58);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float____ctor(
    v59,
    (const MethodInfo_31C30C8 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
  this->fields.tempMaterialPropertyDict = (struct System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *)v59;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tempMaterialPropertyDict,
    (int64_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__AnimUpdate(BattleFBXComponent_o *this, float deltaTime, const MethodInfo *method)
{
  __int64 v3; // x2
  long double v4; // q8
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  float v12; // s9
  UnityEngine_Object_o *rootTransform; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v16; // x1
  __int64 wrapMode; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v20; // x20
  float v21; // s8
  UnityEngine_Animation_o *v22; // x8
  float v23; // s8
  float v24; // s8
  float length; // s0
  UnityEngine_Object_o *v26; // x20
  __int64 v27; // x8
  float currentAnimTime; // s8
  __int64 v29; // x20
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  SimpleAnimation_State_c **v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  SimpleAnimation_State_c **v47; // x10
  __int64 v48; // x0
  float i; // s8
  __int64 v50; // x8
  __int64 v51; // x9
  SimpleAnimation_State_c **v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  float v55; // s8
  __int64 v56; // x9
  SimpleAnimation_State_c **v57; // x10
  __int64 v58; // x0
  UnityEngine_Object_o *v59; // x20
  __int64 v60; // x1
  UnityEngine_Object_o *v61; // x20
  UnityEngine_TrackedReference_o *v62; // x0
  UnityEngine_Object_o *v63; // x20
  BattleFBXComponent_c *v64; // x0
  System_String_o *currentCommonAnimName; // x20
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v67; // x24
  int currentEventIndex; // w25
  __int64 j; // x8
  BattleFBXComponent_AnimEvent_o *v70; // x20
  float time; // s0
  float v72; // s1
  bool v73; // nf
  float v74; // s1
  UnityEngine_Object_o *v75; // x21
  __int64 v76; // x1
  __int64 v77; // x8
  __int64 v78; // x21
  __int64 v79; // x9
  SimpleAnimation_State_c **v80; // x10
  __int64 v81; // x0
  _BOOL4 isDirty; // w27
  UnityEngine_Object_o *billBoard; // x21
  const MethodInfo *v84; // x2
  _BOOL4 v85; // w8
  BattleFBXComponent_c *v86; // x0
  UnityEngine_Object_o *v87; // x20
  float animFps; // s8
  float v89; // s0
  int v90; // w21
  __int64 v91; // x8
  __int64 v92; // x20
  __int64 v93; // x9
  SimpleAnimation_State_c **v94; // x10
  __int64 v95; // x0

  v4 = *(long double *)&deltaTime;
  if ( (byte_4B187E5 & 1) == 0 )
  {
    sub_1BCA7E0(&AnimationList_TypeInfo, method, v3);
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v10, v11);
    byte_4B187E5 = 1;
  }
  v12 = this->fields.timescale * *(float *)&v4;
  if ( v12 == 0.0 || this->fields.isStop )
    return;
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0LL, 0LL) || !this->fields.currentAnimName )
    return;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    wrapMode = (__int64)this->fields.animationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0LL) )
      return;
    wrapMode = (__int64)this->fields.animationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)wrapMode,
                                               this->fields.currentAnimName,
                                               0LL);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)wrapMode, 0LL) )
      return;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( !wrapMode )
      goto LABEL_39;
    if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL) )
      return;
  }
  v20 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    v26 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
      goto LABEL_102;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
      if ( wrapMode )
      {
        v27 = *(_QWORD *)wrapMode;
        currentAnimTime = this->fields.currentAnimTime;
        v29 = wrapMode;
        v30 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v30;
            v31 += 2;
            if ( !v30 )
              goto LABEL_49;
          }
          v32 = v27 + 16LL * (*(_DWORD *)v31 + 14) + 312;
        }
        else
        {
LABEL_49:
          v32 = sub_1C1C7C0(wrapMode, SimpleAnimation_State_TypeInfo, 14LL);
        }
        wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
        if ( wrapMode )
        {
          if ( currentAnimTime < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
            goto LABEL_102;
          v33 = *(_QWORD *)v29;
          v34 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
          {
            v35 = (SimpleAnimation_State_c **)(*(_QWORD *)(v33 + 176) + 8LL);
            while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v34;
              v35 += 2;
              if ( !v34 )
                goto LABEL_59;
            }
            v36 = v33 + 16LL * (*(_DWORD *)v35 + 19) + 312;
          }
          else
          {
LABEL_59:
            v36 = sub_1C1C7C0(v29, SimpleAnimation_State_TypeInfo, 19LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v29, *(_QWORD *)(v36 + 8)) & 1) != 0 )
            goto LABEL_70;
          v37 = *(_QWORD *)v29;
          v38 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
          {
            v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v38;
              v39 += 2;
              if ( !v38 )
                goto LABEL_66;
            }
            v40 = v37 + 16LL * (*(_DWORD *)v39 + 14) + 312;
          }
          else
          {
LABEL_66:
            v40 = sub_1C1C7C0(v29, SimpleAnimation_State_TypeInfo, 14LL);
          }
          wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v29, *(_QWORD *)(v40 + 8));
          if ( wrapMode )
          {
            if ( UnityEngine_Motion__get_isLooping((UnityEngine_Motion_o *)wrapMode, 0LL) )
            {
LABEL_84:
              for ( i = this->fields.currentAnimTime; ; this->fields.currentAnimTime = i )
              {
                v50 = *(_QWORD *)v29;
                v51 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
                {
                  v52 = (SimpleAnimation_State_c **)(*(_QWORD *)(v50 + 176) + 8LL);
                  while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v51;
                    v52 += 2;
                    if ( !v51 )
                      goto LABEL_89;
                  }
                  v53 = v50 + 16LL * (*(_DWORD *)v52 + 14) + 312;
                }
                else
                {
LABEL_89:
                  v53 = sub_1C1C7C0(v29, SimpleAnimation_State_TypeInfo, 14LL);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v29, *(_QWORD *)(v53 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                if ( i < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
                  break;
                v54 = *(_QWORD *)v29;
                v55 = this->fields.currentAnimTime;
                v56 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
                if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
                {
                  v57 = (SimpleAnimation_State_c **)(*(_QWORD *)(v54 + 176) + 8LL);
                  while ( *(v57 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    --v56;
                    v57 += 2;
                    if ( !v56 )
                      goto LABEL_97;
                  }
                  v58 = v54 + 16LL * (*(_DWORD *)v57 + 14) + 312;
                }
                else
                {
LABEL_97:
                  v58 = sub_1C1C7C0(v29, SimpleAnimation_State_TypeInfo, 14LL);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v29, *(_QWORD *)(v58 + 8));
                if ( !wrapMode )
                  goto LABEL_39;
                i = v55 - UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL);
              }
LABEL_101:
              this->fields.currentEventIndex = 0;
              goto LABEL_102;
            }
LABEL_70:
            v41 = *(_QWORD *)v29;
            v42 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
            {
              v43 = (SimpleAnimation_State_c **)(*(_QWORD *)(v41 + 176) + 8LL);
              while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v42;
                v43 += 2;
                if ( !v42 )
                  goto LABEL_74;
              }
              v44 = v41 + 16LL * (*(_DWORD *)v43 + 19) + 312;
            }
            else
            {
LABEL_74:
              v44 = sub_1C1C7C0(v29, SimpleAnimation_State_TypeInfo, 19LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v29, *(_QWORD *)(v44 + 8)) & 1) == 0 )
              goto LABEL_163;
            v45 = *(_QWORD *)v29;
            v46 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
            {
              v47 = (SimpleAnimation_State_c **)(*(_QWORD *)(v45 + 176) + 8LL);
              while ( *(v47 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v46;
                v47 += 2;
                if ( !v46 )
                  goto LABEL_81;
              }
              v48 = v45 + 16LL * (*(_DWORD *)v47 + 17) + 312;
            }
            else
            {
LABEL_81:
              v48 = sub_1C1C7C0(v29, SimpleAnimation_State_TypeInfo, 17LL);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v48)(v29, *(_QWORD *)(v48 + 8)) != 2 )
            {
LABEL_163:
              wrapMode = (__int64)this->fields.simpleAnimationComponent;
              if ( wrapMode )
              {
                SimpleAnimation__Stop((SimpleAnimation_o *)wrapMode, 0LL);
                return;
              }
              goto LABEL_39;
            }
            goto LABEL_84;
          }
        }
      }
    }
LABEL_39:
    sub_1BCAA3C(wrapMode, v16);
  }
  wrapMode = (__int64)this->fields.animationComponent;
  if ( !wrapMode )
    goto LABEL_39;
  v21 = this->fields.currentAnimTime;
  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                        (UnityEngine_Animation_o *)wrapMode,
                        this->fields.currentAnimName,
                        0LL);
  if ( !wrapMode )
    goto LABEL_39;
  if ( v21 >= UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
  {
    wrapMode = (__int64)this->fields.animationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)UnityEngine_Animation__get_Item(
                            (UnityEngine_Animation_o *)wrapMode,
                            this->fields.currentAnimName,
                            0LL);
      if ( wrapMode )
      {
        wrapMode = UnityEngine_AnimationState__get_wrapMode((UnityEngine_AnimationState_o *)wrapMode, 0LL);
        v22 = this->fields.animationComponent;
        if ( (_DWORD)wrapMode == 2 )
        {
          if ( v22 )
          {
            v23 = this->fields.currentAnimTime;
            do
            {
              wrapMode = (__int64)UnityEngine_Animation__get_Item(v22, this->fields.currentAnimName, 0LL);
              if ( !wrapMode )
                break;
              if ( v23 < UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
                goto LABEL_101;
              wrapMode = (__int64)this->fields.animationComponent;
              if ( !wrapMode )
                break;
              v24 = this->fields.currentAnimTime;
              wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)wrapMode,
                                    this->fields.currentAnimName,
                                    0LL);
              if ( !wrapMode )
                break;
              length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL);
              v22 = this->fields.animationComponent;
              v23 = v24 - length;
              this->fields.currentAnimTime = v23;
            }
            while ( v22 );
          }
        }
        else if ( v22 )
        {
          UnityEngine_Animation__Stop(v22, 0LL);
          return;
        }
      }
    }
    goto LABEL_39;
  }
LABEL_102:
  v59 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) && this->fields.currentAnimName )
  {
    v61 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
    if ( UnityEngine_Object__op_Inequality(v61, 0LL, 0LL) )
    {
      wrapMode = (__int64)this->fields.animationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0LL) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        v62 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)wrapMode,
                                                  this->fields.currentAnimName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v62, 0LL, 0LL) )
          goto LABEL_120;
      }
    }
    v63 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
    {
      wrapMode = (__int64)this->fields.simpleAnimationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)wrapMode, 0LL) )
        return;
      wrapMode = (__int64)this->fields.simpleAnimationComponent;
      if ( !wrapMode )
        goto LABEL_39;
      if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL) )
        return;
LABEL_120:
      v64 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v16);
        v64 = BattleFBXComponent_TypeInfo;
      }
      if ( v64->static_fields->EnableEvent && this->fields.eventlist )
      {
        currentCommonAnimName = this->fields.currentCommonAnimName;
        if ( !AnimationList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo, v16);
        wrapMode = AnimationList__getIndex(currentCommonAnimName, 0LL);
        if ( (wrapMode & 0x80000000) == 0 )
        {
          eventlist = this->fields.eventlist;
          if ( !eventlist )
            goto LABEL_39;
          if ( (unsigned int)wrapMode >= eventlist->max_length )
LABEL_190:
            sub_1BCAA44(wrapMode, v16);
          v67 = eventlist->m_Items[(unsigned int)wrapMode];
          if ( v67 )
          {
            currentEventIndex = this->fields.currentEventIndex;
            for ( j = *(_QWORD *)&v67->max_length; currentEventIndex < (int)j; ++currentEventIndex )
            {
              if ( currentEventIndex >= (unsigned int)j )
                goto LABEL_190;
              v70 = v67->m_Items[currentEventIndex];
              if ( !v70 )
                goto LABEL_39;
              time = v70->fields.time;
              v72 = this->fields.currentAnimTime;
              v73 = time < v72;
              v74 = v12 + v72;
              if ( v73 || time >= v74 )
              {
                if ( time >= v74 )
                {
                  this->fields.currentEventIndex = currentEventIndex;
                  break;
                }
              }
              else
              {
                v75 = (UnityEngine_Object_o *)this->fields.animationComponent;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
                if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
                {
                  wrapMode = (__int64)this->fields.animationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)wrapMode,
                                        this->fields.currentAnimName,
                                        0LL);
                  if ( !wrapMode )
                    goto LABEL_39;
                  UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, v70->fields.time, 0LL);
                  wrapMode = (__int64)this->fields.animationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  UnityEngine_Animation__Sample((UnityEngine_Animation_o *)wrapMode, 0LL);
                }
                else
                {
                  wrapMode = (__int64)this->fields.simpleAnimationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  wrapMode = (__int64)SimpleAnimation__get_Item(
                                        (SimpleAnimation_o *)wrapMode,
                                        this->fields.currentAnimName,
                                        0LL);
                  if ( !wrapMode )
                    goto LABEL_39;
                  v77 = *(_QWORD *)wrapMode;
                  *(float *)&v4 = v70->fields.time;
                  v78 = wrapMode;
                  v79 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
                  {
                    v80 = (SimpleAnimation_State_c **)(*(_QWORD *)(v77 + 176) + 8LL);
                    while ( *(v80 - 1) != SimpleAnimation_State_TypeInfo )
                    {
                      --v79;
                      v80 += 2;
                      if ( !v79 )
                        goto LABEL_150;
                    }
                    v81 = v77 + 16LL * (*(_DWORD *)v80 + 4) + 312;
                  }
                  else
                  {
LABEL_150:
                    v81 = sub_1C1C7C0(wrapMode, SimpleAnimation_State_TypeInfo, 4LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD, long double))v81)(v78, *(_QWORD *)(v81 + 8), v4);
                  wrapMode = (__int64)this->fields.simpleAnimationComponent;
                  if ( !wrapMode )
                    goto LABEL_39;
                  SimpleAnimation__Sample((SimpleAnimation_o *)wrapMode, 0LL);
                }
                isDirty = this->fields.isDirty;
                this->fields.isDirty = 0;
                billBoard = (UnityEngine_Object_o *)this->fields.billBoard;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
                if ( UnityEngine_Object__op_Inequality(billBoard, 0LL, 0LL) )
                {
                  wrapMode = (__int64)this->fields.billBoard;
                  if ( !wrapMode )
                    goto LABEL_39;
                  BillBoard__UpdateBillboard((BillBoard_o *)wrapMode, 0LL);
                }
                BattleFBXComponent__OnAnimEvent(this, v70, v84);
                v85 = this->fields.isDirty;
                this->fields.isDirty = v85 || isDirty;
                if ( v85 || isDirty )
                {
                  if ( !v85 )
                    this->fields.currentAnimTime = v70->fields.time;
                  this->fields.isDirty = 0;
                  return;
                }
                j = *(_QWORD *)&v67->max_length;
              }
            }
          }
        }
      }
      v86 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v16);
        v86 = BattleFBXComponent_TypeInfo;
      }
      v87 = (UnityEngine_Object_o *)this->fields.animationComponent;
      animFps = v86->static_fields->animFps;
      v89 = animFps * this->fields.currentAnimTime;
      if ( v89 == INFINITY )
        v90 = 0x80000000;
      else
        v90 = (int)v89;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)UnityEngine_Animation__get_Item(
                              (UnityEngine_Animation_o *)wrapMode,
                              this->fields.currentAnimName,
                              0LL);
        if ( !wrapMode )
          goto LABEL_39;
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, (float)v90 / animFps, 0LL);
      }
      else
      {
        wrapMode = (__int64)this->fields.simpleAnimationComponent;
        if ( !wrapMode )
          goto LABEL_39;
        wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
        if ( !wrapMode )
          goto LABEL_39;
        v91 = *(_QWORD *)wrapMode;
        v92 = wrapMode;
        v93 = *(unsigned __int16 *)(*(_QWORD *)wrapMode + 302LL);
        *(float *)&v4 = (float)v90 / animFps;
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 302LL) )
        {
          v94 = (SimpleAnimation_State_c **)(*(_QWORD *)(v91 + 176) + 8LL);
          while ( *(v94 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v93;
            v94 += 2;
            if ( !v93 )
              goto LABEL_182;
          }
          v95 = v91 + 16LL * (*(_DWORD *)v94 + 4) + 312;
        }
        else
        {
LABEL_182:
          v95 = sub_1C1C7C0(wrapMode, SimpleAnimation_State_TypeInfo, 4LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD, long double))v95)(v92, *(_QWORD *)(v95 + 8), v4);
      }
      this->fields.currentAnimTime = v12 + this->fields.currentAnimTime;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall BattleFBXComponent__AnimationCheck(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B187F6 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent__AnimationCheck_d__69_TypeInfo, method, v2);
    byte_4B187F6 = 1;
  }
  v5 = sub_1BCAA2C(BattleFBXComponent__AnimationCheck_d__69_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleFBXComponent__AttachCl(BattleFBXComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleFBXComponent__Awake(BattleFBXComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.isAutoPlay )
    BattleFBXComponent__playAnimation(this, this->fields.animename, v2);
}


void __fastcall BattleFBXComponent__ChangeActorLimitCount(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  int32_t ServantId; // w21
  int32_t LimitCount; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B187EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B187EA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_object, 0LL);
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)Component_object, 0LL);
      BattleFBXComponent__SetEvolutionLevel(this, ServantId, LimitCount, v12);
      return;
    }
LABEL_10:
    sub_1BCAA3C(gameObject, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleFBXComponent__CreatePrefabNode(
        BattleFBXComponent_o *this,
        UnityEngine_Transform_o *node,
        int32_t svtId,
        int32_t limitcount,
        const MethodInfo *method)
{
  BattleFBXComponent_o *v8; // x19
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_o *CommonAnimNames; // x23
  __int64 v24; // x1
  UnityEngine_Object_o *Manager__loadActorEffectFromActor; // x21
  __int64 v26; // x1
  bool v27; // w8
  Il2CppObject *v28; // x21
  bool v29; // w8
  Il2CppObject *v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Transform_o *transform; // x23
  __int64 v38; // x2
  BattleFBXComponent_o *v39; // x23
  __int64 v40; // x2
  BattleFBXComponent_o *v41; // x23
  __int64 v42; // x2
  BattleFBXComponent_o *v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v53; // x8
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x22
  System_String_o *name; // x0
  BattleFBXComponent_o *v56; // x20
  bool v57; // w8
  Il2CppObject *v58; // x1
  BattleFBXComponent_o *v59; // x19

  v8 = this;
  if ( (byte_4B187EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, node, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v19, v20);
    this = (BattleFBXComponent_o *)sub_1BCA7E0(&StringLiteral_16693/*"_aDd"*/, v21, v22);
    byte_4B187EC = 1;
  }
  if ( !node )
    goto LABEL_43;
  this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleFBXComponent_o *)System_String__Split((System_String_o *)this, 0x5Fu, 0, 0LL);
  if ( !this )
    goto LABEL_43;
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= 1 )
    sub_1BCAA44(this, node);
  CommonAnimNames = (System_String_o *)this->fields.CommonAnimNames;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, node);
  Manager__loadActorEffectFromActor = (UnityEngine_Object_o *)ServantAssetLoadManager__loadActorEffectFromActor(
                                                                svtId,
                                                                limitcount,
                                                                0,
                                                                CommonAnimNames,
                                                                0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  v27 = UnityEngine_Object__op_Inequality(Manager__loadActorEffectFromActor, 0LL, 0LL);
  this = 0LL;
  if ( v27 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    v28 = UnityEngine_Object__Instantiate_object_(
            (Il2CppObject *)Manager__loadActorEffectFromActor,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v29 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
    this = 0LL;
    if ( v29 )
    {
      if ( v28 )
      {
        v30 = UnityEngine_GameObject__AddComponent_object_(
                (UnityEngine_GameObject_o *)v28,
                (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v28, 0, 0LL);
        if ( v30 )
        {
          v30[2].klass = (Il2CppClass *)node;
          sub_1BCA784((PartyOrganizationUtility_o *)&v30[2], (int64_t)node, v31, v32, v33, v34, v35, v36);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v28, 0LL);
          this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(node, 0LL);
          if ( this )
          {
            this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( transform )
            {
              UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
              this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v28, 0LL);
              v39 = this;
              if ( !byte_4B109C1 )
              {
                this = (BattleFBXComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, node, v38);
                byte_4B109C1 = 1;
              }
              if ( v39 )
              {
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)v39,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)v28,
                                                 0LL);
                v41 = this;
                if ( !byte_4B109C1 )
                {
                  this = (BattleFBXComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, node, v40);
                  byte_4B109C1 = 1;
                }
                if ( v41 )
                {
                  UnityEngine_Transform__set_localEulerAngles(
                    (UnityEngine_Transform_o *)v41,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)v28,
                                                   0LL);
                  v43 = this;
                  if ( !byte_4B109C6 )
                  {
                    this = (BattleFBXComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, node, v42);
                    byte_4B109C6 = 1;
                  }
                  if ( v43 )
                  {
                    UnityEngine_Transform__set_localScale(
                      (UnityEngine_Transform_o *)v43,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0LL);
                    ObjectScaleEnabler__OnUpdate((ObjectScaleEnabler_o *)v30, 0LL);
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v28, 1, 0LL);
                    this = (BattleFBXComponent_o *)v8->fields.PrefabNodes;
                    if ( this )
                    {
                      v50 = *(_QWORD *)&this->fields.m_CachedPtr;
                      v51 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++HIDWORD(this->fields.m_CancellationTokenSource);
                      if ( v50 )
                      {
                        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v50 + 24) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            (System_Collections_Generic_List_object__o *)this,
                            v28,
                            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v53 = v50 + 8 * m_CancellationTokenSource_low;
                          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                          *(_QWORD *)(v53 + 32) = v28;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)(v53 + 32),
                            (int64_t)v28,
                            v44,
                            v45,
                            v46,
                            v47,
                            v48,
                            v49);
                        }
                        actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict;
                        this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
                        if ( actorEffectDict )
                        {
                          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                 actorEffectDict,
                                 (Il2CppObject *)this,
                                 (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
                          {
                            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)node, 0LL);
                            this = (BattleFBXComponent_o *)System_String__Concat_62401220(
                                                             name,
                                                             (System_String_o *)StringLiteral_16693/*"_aDd"*/,
                                                             0LL);
                            if ( v8->fields.actorEffectDict )
                            {
                              v56 = this;
                              v57 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.actorEffectDict,
                                      (Il2CppObject *)this,
                                      (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                              this = (BattleFBXComponent_o *)v28;
                              if ( v57 )
                                return (UnityEngine_GameObject_o *)this;
                              this = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                              if ( this )
                              {
                                v58 = (Il2CppObject *)v56;
LABEL_41:
                                System_Collections_Generic_Dictionary_object__object___Add(
                                  (System_Collections_Generic_Dictionary_object__object__o *)this,
                                  v58,
                                  v28,
                                  (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                                return (UnityEngine_GameObject_o *)v28;
                              }
                            }
                          }
                          else
                          {
                            v59 = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                            this = (BattleFBXComponent_o *)UnityEngine_Object__get_name(
                                                             (UnityEngine_Object_o *)node,
                                                             0LL);
                            if ( v59 )
                            {
                              v58 = (Il2CppObject *)this;
                              this = v59;
                              goto LABEL_41;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_43:
      sub_1BCAA3C(this, node);
    }
  }
  return (UnityEngine_GameObject_o *)this;
}


void __fastcall BattleFBXComponent__DebugPrint(
        BattleFBXComponent_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleFBXComponent__DestroyPrefabNode(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_GameObject__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B187E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B187E9 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  PrefabNodes = this->fields.PrefabNodes;
  if ( PrefabNodes )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)PrefabNodes,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v22.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v19 = this->fields.PrefabNodes;
    if ( !v19 )
      sub_1BCAA3C(v17, v18);
    size = v19->fields._size;
    v21 = v19->fields._version + 1;
    v19->fields._size = 0;
    v19->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
  }
}


float __fastcall BattleFBXComponent__GetCurrentTimeScale(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.timescale;
}


UnityEngine_GameObject_o *__fastcall BattleFBXComponent__GetPrefabNode(
        BattleFBXComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *transform; // x0
  __int64 v18; // x1
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x21
  _DWORD *v22; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B187FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, name, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&StringLiteral_726/*"(Clone)"*/, v11, v12);
    byte_4B187FA = 1;
  }
  memset(&v28, 0, sizeof(v28));
  PrefabNodes = this->fields.PrefabNodes;
  if ( !PrefabNodes )
    sub_1BCAA3C(0LL, name);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)PrefabNodes,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v14 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_1BCAA3C(v14, v15);
    transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)v28.fields._current,
                                          0LL);
    if ( !transform )
      sub_1BCAA3C(0LL, v18);
    v19 = UnityEngine_Object__get_name(transform, 0LL);
    v21 = v19;
    if ( !v19 )
      sub_1BCAA3C(0LL, v20);
    v22 = StringLiteral_726/*"(Clone)"*/;
    v23 = System_String__EndsWith(v19, (System_String_o *)StringLiteral_726/*"(Clone)"*/, 0LL);
    if ( v23 )
    {
      if ( !v22 )
        sub_1BCAA3C(v23, v24);
      v21 = System_String__Substring_62420224(v21, 0, v21->fields._stringLength - v22[4], 0LL);
      if ( !v21 )
        sub_1BCAA3C(0LL, v25);
    }
    if ( System_String__Equals_62409536(v21, name, 0LL) )
      goto LABEL_15;
  }
  current = 0LL;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (UnityEngine_GameObject_o *)current;
}


System_String_o *__fastcall BattleFBXComponent__GetRealAnimName(
        BattleFBXComponent_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_4B18805 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5, v6);
    byte_4B18805 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)targetName,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return targetName;
  }
  v9 = this->fields.RealAnimNames;
  if ( !v9 )
    sub_1BCAA3C(0LL, v8);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v9,
                              (Il2CppObject *)targetName,
                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


void __fastcall BattleFBXComponent__InitAnimNameDict(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0

  if ( (byte_4B187E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, method, v2);
    byte_4B187E3 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (RealAnimNames = this->fields.CommonAnimNames) == 0LL) )
  {
    sub_1BCAA3C(RealAnimNames, method);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


bool __fastcall BattleFBXComponent__IsYTransparenceShader(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
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
  int64_t enableRendererList; // x0
  int32_t v18; // w20
  int32_t v19; // w27
  __int64 v20; // x1
  Il2CppObject *Item; // x21
  __int64 v22; // x8
  int64_t v23; // x21
  unsigned __int64 v24; // x29
  UnityEngine_Object_o *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  BattleFBXComponent_c *v38; // x0
  System_Object_array *yTransparenceShaderNames; // x23
  System_Func_object__bool__o *v40; // x24

  if ( (byte_4B187FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_string____76840360, method, v2);
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v3, v4);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Item__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleFBXComponent___c__DisplayClass79_0__IsYTransparenceShader_b__0__, v13, v14);
    sub_1BCA7E0(&BattleFBXComponent___c__DisplayClass79_0_TypeInfo, v15, v16);
    byte_4B187FD = 1;
  }
  enableRendererList = (int64_t)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1BCAA3C(enableRendererList, method);
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_DWORD *)(enableRendererList + 24);
    if ( v18 >= v19 )
      return v18 < v19;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)enableRendererList,
             v18,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    enableRendererList = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL);
    if ( (enableRendererList & 1) == 0 )
    {
      if ( !Item )
        goto LABEL_26;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Item, 0LL) )
      {
        enableRendererList = (int64_t)UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)Item, 0LL);
        if ( !enableRendererList )
          goto LABEL_26;
        v22 = *(_QWORD *)(enableRendererList + 24);
        v23 = enableRendererList;
        if ( (int)v22 >= 1 )
        {
          v24 = 0LL;
          do
          {
            if ( v24 >= (unsigned int)v22 )
              sub_1BCAA44(enableRendererList, method);
            v25 = *(UnityEngine_Object_o **)(v23 + 32 + 8 * v24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
            enableRendererList = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
            if ( (enableRendererList & 1) != 0 )
            {
              v28 = sub_1BCAA2C(BattleFBXComponent___c__DisplayClass79_0_TypeInfo, method, v26, v27);
              System_Object___ctor((Il2CppObject *)v28, 0LL);
              if ( !v25 )
                goto LABEL_26;
              enableRendererList = (int64_t)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v25, 0LL);
              if ( !enableRendererList )
                goto LABEL_26;
              enableRendererList = (int64_t)UnityEngine_Object__get_name(
                                              (UnityEngine_Object_o *)enableRendererList,
                                              0LL);
              if ( !v28 )
                goto LABEL_26;
              *(_QWORD *)(v28 + 16) = enableRendererList;
              sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 16), enableRendererList, v29, v30, v31, v32, v33, v34);
              v38 = BattleFBXComponent_TypeInfo;
              if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v35);
                v38 = BattleFBXComponent_TypeInfo;
              }
              yTransparenceShaderNames = (System_Object_array *)v38->static_fields->yTransparenceShaderNames;
              v40 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v35, v36, v37);
              System_Func_object__bool____ctor(
                v40,
                (Il2CppObject *)v28,
                Method_BattleFBXComponent___c__DisplayClass79_0__IsYTransparenceShader_b__0__,
                0LL);
              enableRendererList = BasicHelper__Any_object__49274176(
                                     yTransparenceShaderNames,
                                     (System_Func_T__bool__o *)v40,
                                     (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_string____76840360);
              if ( (enableRendererList & 1) != 0 )
                return v18 < v19;
            }
            LODWORD(v22) = *(_DWORD *)(v23 + 24);
          }
          while ( (__int64)++v24 < (int)v22 );
        }
      }
    }
    ++v18;
    enableRendererList = (int64_t)this->fields.enableRendererList;
    if ( !enableRendererList )
      goto LABEL_26;
  }
}


void __fastcall BattleFBXComponent__OnAnimEvent(
        BattleFBXComponent_o *this,
        BattleFBXComponent_AnimEvent_o *ev,
        const MethodInfo *method)
{
  BattleFBXComponent_c *v5; // x0
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4B187E7 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, ev, method);
    byte_4B187E7 = 1;
  }
  v5 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, ev);
    v5 = BattleFBXComponent_TypeInfo;
  }
  if ( v5->static_fields->EnableEvent )
  {
    OnEvent = this->fields.OnEvent;
    if ( OnEvent )
    {
      if ( !ev )
        sub_1BCAA3C(v5, ev);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))OnEvent->fields.m_target)(
        OnEvent->fields.original_method_info,
        ev->fields.tag,
        *(_QWORD *)&OnEvent->fields.extra_arg);
    }
  }
}


void __fastcall BattleFBXComponent__OnAnimEvent_43501300(
        BattleFBXComponent_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  System_String_o *stringParameter; // x0
  struct BattleFBXComponent_onEventDelegate_o *OnEvent; // x8

  if ( (byte_4B187F7 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, ev, method);
    byte_4B187F7 = 1;
  }
  stringParameter = (System_String_o *)BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, ev);
    stringParameter = (System_String_o *)BattleFBXComponent_TypeInfo;
  }
  if ( **(_BYTE **)&stringParameter[7].fields )
  {
    if ( !ev )
      goto LABEL_13;
    stringParameter = UnityEngine_AnimationEvent__get_stringParameter(ev, 0LL);
    if ( !stringParameter )
      goto LABEL_13;
    stringParameter = (System_String_o *)System_String__Split(stringParameter, 0x3Au, 0, 0LL);
    if ( !stringParameter )
      goto LABEL_13;
    if ( !LODWORD(stringParameter[1].klass) )
      sub_1BCAA44(stringParameter, ev);
    OnEvent = this->fields.OnEvent;
    if ( !OnEvent )
LABEL_13:
      sub_1BCAA3C(stringParameter, ev);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))OnEvent->fields.m_target)(
      OnEvent->fields.original_method_info,
      stringParameter[1].monitor,
      *(_QWORD *)&OnEvent->fields.extra_arg);
  }
}


void __fastcall BattleFBXComponent__OnEnable(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *animename; // x0
  const MethodInfo *v7; // x2
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  System_Enum_o v12; // [xsp+8h] [xbp-48h] BYREF
  int v13; // [xsp+18h] [xbp-38h]

  if ( (byte_4B187F9 & 1) == 0 )
  {
    sub_1BCA7E0(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24854/*"wait"*/, v4, v5);
    byte_4B187F9 = 1;
  }
  animename = this->fields.animename;
  if ( animename )
  {
    if ( System_String__StartsWith(animename, (System_String_o *)StringLiteral_24854/*"wait"*/, 0LL) )
    {
      BattleFBXComponent__playAnimation(this, (System_String_o *)StringLiteral_24854/*"wait"*/, v7);
    }
    else
    {
      v8 = this->fields.animename;
      v13 = 46;
      v12.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
      v12.monitor = (void *)-1LL;
      v9 = System_Enum__ToString(&v12, 0LL);
      if ( System_String__op_Equality(v8, v9, 0LL) )
      {
        v13 = 46;
        v12.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
        v12.monitor = (void *)-1LL;
        v10 = System_Enum__ToString(&v12, 0LL);
        BattleFBXComponent__playAnimation(this, v10, v11);
      }
    }
  }
}


void __fastcall BattleFBXComponent__RevertDefaultAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v5; // x1
  UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x20
  UnityEngine_Object_o *defSimpleAnimClip; // x21
  SimpleAnimation_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *defAnimClip; // x21

  if ( (byte_4B18807 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18807 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
    defSimpleAnimClip = (UnityEngine_Object_o *)this->fields.defSimpleAnimClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(defSimpleAnimClip, 0LL, 0LL) )
    {
      v8 = this->fields.simpleAnimationComponent;
      if ( v8 )
      {
        SimpleAnimation__set_clip(v8, *p_defSimpleAnimClip, 0LL);
LABEL_19:
        *p_defSimpleAnimClip = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)p_defSimpleAnimClip, 0LL, v9, v10, v11, v12, v13, v14);
        return;
      }
      goto LABEL_21;
    }
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    p_defSimpleAnimClip = &this->fields.defAnimClip;
    defAnimClip = (UnityEngine_Object_o *)this->fields.defAnimClip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Inequality(defAnimClip, 0LL, 0LL) )
    {
      v8 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v8 )
      {
        UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v8, *p_defSimpleAnimClip, 0LL);
        goto LABEL_19;
      }
LABEL_21:
      sub_1BCAA3C(v8, v5);
    }
  }
}


void __fastcall BattleFBXComponent__RevertShaderFloatProperty(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x0
  __int64 v23; // x1
  __int128 v24; // kr00_16
  float v25; // s8
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int128 v28; // [xsp+0h] [xbp-80h] BYREF
  __int128 v29; // [xsp+10h] [xbp-70h]
  __int128 v30; // [xsp+20h] [xbp-60h]

  if ( (byte_4B18800 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__get_Current__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Key__,
      v12,
      v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Key__, v14, v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Value__,
      v16,
      v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Value__, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    byte_4B18800 = 1;
  }
  v29 = 0u;
  v30 = 0u;
  v28 = 0u;
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v28,
    tempMaterialPropertyDict,
    (const MethodInfo_31C3EE0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v28,
            (const MethodInfo_334AD38 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__) )
  {
    v24 = v29;
    v25 = *(float *)&v30;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    v26 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v24 + 1), 0LL, 0LL);
    if ( v26 )
    {
      if ( !*((_QWORD *)&v24 + 1) )
        sub_1BCAA3C(v26, v27);
      UnityEngine_Material__SetFloat(*((UnityEngine_Material_o **)&v24 + 1), (System_String_o *)v24, v25, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_object__object___float___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v28,
    (const MethodInfo_334AE74 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
  tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
LABEL_14:
    sub_1BCAA3C(tempMaterialPropertyDict, method);
  System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___Clear(
    tempMaterialPropertyDict,
    (const MethodInfo_31C3C4C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetActiveActorEffectAll(
        BattleFBXComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *value; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+0h] [xbp-60h] BYREF

  v3 = isActive;
  if ( (byte_4B18804 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__, isActive, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__, v11, v12);
    byte_4B18804 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1BCAA3C(0LL, isActive);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  while ( 1 )
  {
    v14 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v17,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    if ( !v14 )
      break;
    value = v17.fields._current.fields.value;
    if ( !v17.fields._current.fields.value )
      sub_1BCAA3C(v14, v15);
    if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v17.fields._current.fields.value, 0LL) ^ v3) & 1) != 0 )
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v3, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v17,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetActiveActorEffectFromEffectName(
        BattleFBXComponent_o *this,
        System_String_o *effectName,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
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
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  __int64 v18; // x1
  Il2CppObject *value; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-60h] BYREF

  v4 = isActive;
  if ( (byte_4B18803 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__, effectName, isActive);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Key__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__, v15, v16);
    byte_4B18803 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_1BCAA3C(0LL, effectName);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_object__object__o *)actorEffectDict,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v23,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v23.fields._current.fields.key )
      sub_1BCAA3C(0LL, v18);
    value = v23.fields._current.fields.value;
    v20 = System_String__Contains((System_String_o *)v23.fields._current.fields.key, effectName, 0LL);
    if ( v20 )
    {
      if ( !value )
        sub_1BCAA3C(v20, v21);
      if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0LL) ^ v4) & 1) != 0 )
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v4, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v23,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetActiveActorEffectFromNodeName(
        BattleFBXComponent_o *this,
        System_String_o *nodeName,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  UnityEngine_GameObject_o *v10; // x20

  if ( (byte_4B18802 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, nodeName, isActive);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__, v7, v8);
    byte_4B18802 = 1;
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          actorEffectDict,
          (Il2CppObject *)nodeName,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
    return;
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict
    || (actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                       actorEffectDict,
                                                                                       (Il2CppObject *)nodeName,
                                                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_1BCAA3C(actorEffectDict, nodeName);
  }
  v10 = (UnityEngine_GameObject_o *)actorEffectDict;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)actorEffectDict, 0LL) != isActive )
    UnityEngine_GameObject__SetActive(v10, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetConnectPrefabNode(
        BattleFBXComponent_o *this,
        System_String_o *name,
        bool isConnect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *PrefabNode; // x21
  const MethodInfo *v9; // x3

  if ( (byte_4B187FB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, name, isConnect);
    byte_4B187FB = 1;
  }
  PrefabNode = BattleFBXComponent__GetPrefabNode(this, name, (const MethodInfo *)isConnect);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PrefabNode, 0LL, 0LL) )
    BattleFBXComponent__SetConnectPrefabNode_43504048(this, PrefabNode, isConnect, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetConnectPrefabNode_43504048(
        BattleFBXComponent_o *this,
        UnityEngine_GameObject_o *obj,
        bool isConnect,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Transform_o *monitor; // x20
  BattleFBXComponent_o *v16; // x21
  __int64 v17; // x2
  BattleFBXComponent_o *v18; // x21
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  UnityEngine_Transform_o *transform; // x21
  __int64 v22; // x1
  Il2CppObject *v23; // x20

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4B187FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, obj, isConnect);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___, v9, v10);
    this = (BattleFBXComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B187FC = 1;
  }
  if ( !obj )
    goto LABEL_29;
  if ( isConnect )
  {
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 obj,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_29;
      monitor = (UnityEngine_Transform_o *)Component_object[1].monitor;
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !monitor )
        goto LABEL_29;
      v16 = this;
      this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(monitor, 0LL);
      if ( !this )
        goto LABEL_29;
      this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v16 )
        goto LABEL_29;
      UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v16, (UnityEngine_Transform_o *)this, 0LL);
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
      v18 = this;
      if ( !byte_4B109C6 )
      {
        this = (BattleFBXComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, obj, v17);
        byte_4B109C6 = 1;
      }
      if ( !v18 )
        goto LABEL_29;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)v18,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0LL);
      v20 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)monitor,
              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v20 )
        {
          BattleActorControl__AddChildNodesRenderer((BattleActorControl_o *)v20, obj, 0LL);
          return;
        }
LABEL_29:
        sub_1BCAA3C(this, obj);
      }
    }
  }
  else
  {
    transform = UnityEngine_GameObject__get_transform(obj, 0LL);
    this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform(v6, 0LL);
    if ( !this )
      goto LABEL_29;
    this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !transform )
      goto LABEL_29;
    UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
    this = (BattleFBXComponent_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !this )
      goto LABEL_29;
    v23 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)this,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_29;
      BattleActorControl__RemoveChildNodesRenderer((BattleActorControl_o *)v23, obj, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetEvolutionLevel(
        BattleFBXComponent_o *this,
        int32_t svtId,
        int32_t limitcount,
        const MethodInfo *method)
{
  UnityEngine_Component_o *rootTransform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x4

  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform )
    sub_1BCAA3C(0LL, *(_QWORD *)&svtId);
  gameObject = UnityEngine_Component__get_gameObject(rootTransform, 0LL);
  BattleFBXComponent__inSetEvolutionLevel(this, gameObject, svtId, limitcount, v9);
}


void __fastcall BattleFBXComponent__SetTempDefaultAnimation(
        BattleFBXComponent_o *this,
        System_String_o *updateAnimName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x2
  System_String_o *RealAnimName; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  struct SimpleAnimation_o *v14; // x8
  UnityEngine_Object_o *monitor; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v18; // x20
  __int64 v19; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x21
  __int64 v23; // x1
  UnityEngine_Object_o *clip; // x21
  UnityEngine_TrackedReference_o *v25; // x20
  UnityEngine_Object_o *v26; // x21
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x22
  struct UnityEngine_AnimationClip_o *v29; // x0
  struct UnityEngine_AnimationClip_o **p_defAnimClip; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Animation_o *v37; // x19
  struct SimpleAnimation_o *v38; // x8
  UnityEngine_Object_o *v39; // x21
  UnityEngine_Object_o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct SimpleAnimation_o *v47; // x8
  struct UnityEngine_AnimationClip_o *v48; // x1
  struct UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x19
  SimpleAnimation_State_c *v50; // x8
  SimpleAnimation_o *v51; // x19
  __int64 v52; // x9
  SimpleAnimation_State_c **v53; // x10
  __int64 v54; // x0

  if ( (byte_4B18806 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, updateAnimName, method);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    byte_4B18806 = 1;
  }
  if ( !System_String__IsNullOrEmpty(updateAnimName, 0LL) )
  {
    RealAnimName = BattleFBXComponent__GetRealAnimName(this, updateAnimName, v7);
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    v11 = RealAnimName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    v12 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
    if ( (v12 & 1) == 0 )
      goto LABEL_18;
    v14 = this->fields.simpleAnimationComponent;
    if ( !v14 )
      goto LABEL_50;
    monitor = (UnityEngine_Object_o *)v14[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v12 = (__int64)this->fields.simpleAnimationComponent;
      if ( !v12 )
        goto LABEL_50;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v12, v11, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v18 = Item;
        v19 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v19;
            p_offset += 2;
            if ( !v19 )
              goto LABEL_17;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
        }
        else
        {
LABEL_17:
          p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 14LL);
        }
        v12 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v18, *(_QWORD *)(p_method + 8));
        v38 = this->fields.simpleAnimationComponent;
        if ( !v38 )
          goto LABEL_50;
        v39 = (UnityEngine_Object_o *)v12;
        v40 = (UnityEngine_Object_o *)v38[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        v12 = UnityEngine_Object__op_Inequality(v39, v40, 0LL);
        if ( (v12 & 1) != 0 )
        {
          v47 = this->fields.simpleAnimationComponent;
          if ( v47 )
          {
            v48 = (struct UnityEngine_AnimationClip_o *)v47[1].monitor;
            this->fields.defSimpleAnimClip = v48;
            p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
            sub_1BCA784((PartyOrganizationUtility_o *)p_defSimpleAnimClip, (int64_t)v48, v41, v42, v43, v44, v45, v46);
            v50 = v18->klass;
            v51 = (SimpleAnimation_o *)*(p_defSimpleAnimClip - 17);
            v52 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
            {
              v53 = (SimpleAnimation_State_c **)&v50->_1.interfaceOffsets->offset;
              while ( *(v53 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v52;
                v53 += 2;
                if ( !v52 )
                  goto LABEL_45;
              }
              v54 = (__int64)&v50->vtable[*(_DWORD *)v53 + 14].method;
            }
            else
            {
LABEL_45:
              v54 = sub_1C1C7C0(v18, SimpleAnimation_State_TypeInfo, 14LL);
            }
            v12 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v54)(v18, *(_QWORD *)(v54 + 8));
            if ( v51 )
            {
              SimpleAnimation__set_clip(v51, (UnityEngine_AnimationClip_o *)v12, 0LL);
              return;
            }
          }
LABEL_50:
          sub_1BCAA3C(v12, v13);
        }
      }
    }
    else
    {
LABEL_18:
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v12 = (__int64)this->fields.animationComponent;
        if ( !v12 )
          goto LABEL_50;
        clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v12, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
        if ( UnityEngine_Object__op_Inequality(clip, 0LL, 0LL) )
        {
          v12 = (__int64)this->fields.animationComponent;
          if ( !v12 )
            goto LABEL_50;
          v25 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    (UnityEngine_Animation_o *)v12,
                                                    v11,
                                                    0LL);
          v12 = UnityEngine_TrackedReference__op_Inequality(v25, 0LL, 0LL);
          if ( (v12 & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_50;
            v12 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v25, 0LL);
            if ( !this->fields.animationComponent )
              goto LABEL_50;
            v26 = (UnityEngine_Object_o *)v12;
            v28 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationComponent, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
            if ( UnityEngine_Object__op_Inequality(v26, v28, 0LL) )
            {
              v12 = (__int64)this->fields.animationComponent;
              if ( v12 )
              {
                v29 = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v12, 0LL);
                this->fields.defAnimClip = v29;
                p_defAnimClip = &this->fields.defAnimClip;
                sub_1BCA784((PartyOrganizationUtility_o *)p_defAnimClip, (int64_t)v29, v31, v32, v33, v34, v35, v36);
                v37 = (UnityEngine_Animation_o *)*(p_defAnimClip - 19);
                v12 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v25, 0LL);
                if ( v37 )
                {
                  UnityEngine_Animation__set_clip(v37, (UnityEngine_AnimationClip_o *)v12, 0LL);
                  return;
                }
              }
              goto LABEL_50;
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleFBXComponent__SetTempShaderFloatProperty(
        BattleFBXComponent_o *this,
        float value,
        System_String_o *propertyName,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
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
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  const MethodInfo_35A198C **v18; // x24
  UnityEngine_Object_c **v19; // x25
  Il2CppObject **v20; // x20
  const MethodInfo_31C3CB8 **v21; // x27
  int32_t v22; // w21
  __int64 v23; // x1
  Il2CppObject *Item; // x22
  __int64 v25; // x8
  System_Collections_Generic_List_object__o *v26; // x22
  unsigned __int64 v27; // x29
  Il2CppObject **p_syncRoot; // x28
  UnityEngine_Object_o *v29; // x23
  const MethodInfo_34D9170 *v30; // x4
  System_Collections_Generic_List_object__o *v31; // x21
  const MethodInfo_31C3CB8 **v32; // x22
  Il2CppObject **v33; // x27
  UnityEngine_Object_c **v34; // x20
  const MethodInfo_35A198C **v35; // x28
  System_String_o *v36; // x1
  BattleFBXComponent_o *v37; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *tempMaterialPropertyDict; // x24
  Il2CppObject *key; // x25
  Il2CppObject *v40; // x26
  UnityEngine_Material_o *v41; // x0
  System_String_o *v42; // x23
  float Float; // s0
  Il2CppObject **v44; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_KeyValuePair_object__object__o v45; // [xsp+10h] [xbp-80h] BYREF
  int32_t v46; // [xsp+2Ch] [xbp-64h]
  System_Collections_Generic_KeyValuePair_object__object__o v47; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__object__o v48; // 0:x1.16

  v4 = propertyName;
  if ( (byte_4B187FF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__,
      propertyName,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Item__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B187FF = 1;
  }
  v45.fields.key = 0LL;
  v45.fields.value = 0LL;
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_29:
    sub_1BCAA3C(enableRendererList, propertyName);
  v18 = (const MethodInfo_35A198C **)&Method_System_Collections_Generic_List_Renderer__get_Item__;
  v19 = &UnityEngine_Object_TypeInfo;
  v20 = (Il2CppObject **)&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__;
  v21 = (const MethodInfo_31C3CB8 **)&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__;
  v22 = 0;
  while ( v22 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(enableRendererList, v22, *v18);
    if ( !(*v19)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v19, v23);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
      if ( !enableRendererList )
        goto LABEL_29;
      enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          enableRendererList,
                                                                          v22,
                                                                          *v18);
      if ( !enableRendererList )
        goto LABEL_29;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)enableRendererList, 0LL) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
        if ( !enableRendererList )
          goto LABEL_29;
        enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            enableRendererList,
                                                                            v22,
                                                                            *v18);
        if ( !enableRendererList )
          goto LABEL_29;
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)enableRendererList,
                                                                            0LL);
        if ( enableRendererList )
        {
          v25 = *(_QWORD *)&enableRendererList->fields._size;
          v26 = enableRendererList;
          if ( (int)v25 >= 1 )
          {
            v27 = 0LL;
            p_syncRoot = &enableRendererList->fields._syncRoot;
            v46 = v22;
            v44 = &enableRendererList->fields._syncRoot;
            do
            {
              if ( v27 >= (unsigned int)v25 )
                sub_1BCAA44(enableRendererList, propertyName);
              v29 = (UnityEngine_Object_o *)p_syncRoot[v27];
              if ( !(*v19)->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(*v19, propertyName);
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                  v29,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
              {
                if ( !v29 )
                  goto LABEL_29;
                enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_70020424(
                                                                                    (UnityEngine_Material_o *)v29,
                                                                                    v4,
                                                                                    0LL);
                if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                {
                  v47.fields.key = (Il2CppObject *)&v45;
                  v47.fields.value = (Il2CppObject *)v4;
                  System_Collections_Generic_KeyValuePair_object__object____ctor(v47, (Il2CppObject *)v29, *v20, v30);
                  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.tempMaterialPropertyDict;
                  if ( !enableRendererList )
                    goto LABEL_29;
                  enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)enableRendererList,
                                                                                      v45,
                                                                                      *v21);
                  if ( ((unsigned __int8)enableRendererList & 1) == 0 )
                  {
                    v31 = v26;
                    v32 = v21;
                    v33 = v20;
                    v34 = v19;
                    v35 = v18;
                    v36 = v4;
                    v37 = this;
                    tempMaterialPropertyDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.tempMaterialPropertyDict;
                    key = v45.fields.key;
                    v40 = v45.fields.value;
                    v41 = (UnityEngine_Material_o *)v29;
                    v42 = v36;
                    Float = UnityEngine_Material__GetFloat(v41, v36, 0LL);
                    if ( !tempMaterialPropertyDict )
                      goto LABEL_29;
                    v48.fields.key = key;
                    v48.fields.value = v40;
                    System_Collections_Generic_Dictionary_KeyValuePair_object__object___float___set_Item(
                      tempMaterialPropertyDict,
                      v48,
                      Float,
                      (const MethodInfo_31C3A98 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
                    v18 = v35;
                    v19 = v34;
                    v20 = v33;
                    v21 = v32;
                    v26 = v31;
                    v22 = v46;
                    p_syncRoot = v44;
                    this = v37;
                    v4 = v42;
                  }
                }
              }
              LODWORD(v25) = v26->fields._size;
              ++v27;
            }
            while ( (__int64)v27 < (int)v25 );
          }
        }
      }
    }
    enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
    ++v22;
    if ( !enableRendererList )
      goto LABEL_29;
  }
  BattleFBXComponent__SetYTransparenceShaderProperty(this, value, v4, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetWrapMode(
        BattleFBXComponent_o *this,
        System_String_o *animName,
        int32_t wrapMode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v11; // x1
  UnityEngine_Animation_o *v12; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  SimpleAnimation_State_o *v15; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x20
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B187E6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, animName, *(_QWORD *)&wrapMode);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v7, v8);
    byte_4B187E6 = 1;
  }
  BattleFBXComponent__setupAnimation(this, (const MethodInfo *)animName);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v12 = this->fields.animationComponent;
    if ( !v12 )
      goto LABEL_23;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v12, animName, 0LL);
    v12 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, wrapMode, 0LL);
        return;
      }
LABEL_23:
      sub_1BCAA3C(v12, v11);
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( !v12 )
        goto LABEL_23;
      v15 = SimpleAnimation__get_Item((SimpleAnimation_o *)v12, animName, 0LL);
      if ( v15 )
      {
        klass = v15->klass;
        v17 = v15;
        v18 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v18;
            p_offset += 2;
            if ( !v18 )
              goto LABEL_19;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_19:
          p_method = sub_1C1C7C0(v15, SimpleAnimation_State_TypeInfo, 18LL);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))p_method)(
          v17,
          (unsigned int)wrapMode,
          *(_QWORD *)(p_method + 8));
      }
    }
  }
}


void __fastcall BattleFBXComponent__SetYTransparenceShaderProperty(
        BattleFBXComponent_o *this,
        float value,
        System_String_o *propertyName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *enableRendererList; // x0
  int32_t v12; // w21
  __int64 v13; // x1
  Il2CppObject *Item; // x22
  __int64 v15; // x8
  System_Collections_Generic_List_object__o *v16; // x22
  unsigned __int64 v17; // x26
  UnityEngine_Object_o *v18; // x23

  if ( (byte_4B187FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Count__, propertyName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__get_Item__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B187FE = 1;
  }
  enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_1BCAA3C(enableRendererList, propertyName);
  v12 = 0;
  while ( v12 < enableRendererList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             enableRendererList,
             v12,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
      if ( !enableRendererList )
        goto LABEL_26;
      enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          enableRendererList,
                                                                          v12,
                                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
      if ( !enableRendererList )
        goto LABEL_26;
      if ( UnityEngine_Renderer__get_sharedMaterials((UnityEngine_Renderer_o *)enableRendererList, 0LL) )
      {
        enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            enableRendererList,
                                                                            v12,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_Renderer__get_Item__);
        if ( !enableRendererList )
          goto LABEL_26;
        enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_sharedMaterials(
                                                                            (UnityEngine_Renderer_o *)enableRendererList,
                                                                            0LL);
        if ( !enableRendererList )
          goto LABEL_26;
        v15 = *(_QWORD *)&enableRendererList->fields._size;
        v16 = enableRendererList;
        if ( (int)v15 >= 1 )
        {
          v17 = 0LL;
          do
          {
            if ( v17 >= (unsigned int)v15 )
              sub_1BCAA44(enableRendererList, propertyName);
            v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16->fields._syncRoot + v17);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, propertyName);
            enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                                v18,
                                                                                0LL,
                                                                                0LL);
            if ( ((unsigned __int8)enableRendererList & 1) != 0 )
            {
              if ( !v18 )
                goto LABEL_26;
              enableRendererList = (System_Collections_Generic_List_object__o *)UnityEngine_Material__HasProperty_70020424(
                                                                                  (UnityEngine_Material_o *)v18,
                                                                                  propertyName,
                                                                                  0LL);
              if ( ((unsigned __int8)enableRendererList & 1) != 0 )
                UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v18, propertyName, value, 0LL);
            }
            LODWORD(v15) = v16->fields._size;
            ++v17;
          }
          while ( (__int64)v17 < (int)v15 );
        }
      }
    }
    enableRendererList = (System_Collections_Generic_List_object__o *)this->fields.enableRendererList;
    ++v12;
    if ( !enableRendererList )
      goto LABEL_26;
  }
}


void __fastcall BattleFBXComponent__Start(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B187E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, method, v2);
    byte_4B187E4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
  this->fields.billBoard = (struct BillBoard_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.billBoard,
    (int64_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall BattleFBXComponent__Update(BattleFBXComponent_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  const MethodInfo *v4; // x1

  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  BattleFBXComponent__AnimUpdate(this, deltaTime, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__changeActiveEffect(
        BattleFBXComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *componentsXWeaponTrail; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B187ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__, active, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B187ED = 1;
  }
  memset(&v19, 0, sizeof(v19));
  componentsXWeaponTrail = (System_Collections_Generic_List_object__o *)this->fields.componentsXWeaponTrail;
  if ( !componentsXWeaponTrail )
    sub_1BCAA3C(0LL, active);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    componentsXWeaponTrail,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v16 )
    {
      if ( active )
      {
        if ( !current )
          sub_1BCAA3C(v16, v17);
        XWeaponTrail__Activate((XWeaponTrail_o *)current, 0LL);
      }
      else
      {
        if ( !current )
          sub_1BCAA3C(v16, v17);
        XWeaponTrail__Deactivate((XWeaponTrail_o *)current, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
}


bool __fastcall BattleFBXComponent__checkAnimation(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *RealAnimNames; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_TrackedReference_o *v11; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21

  Item = (Il2CppObject *)filename;
  if ( (byte_4B187F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, filename, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B187F1 = 1;
  }
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
  if ( !RealAnimNames )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         RealAnimNames,
         Item,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.RealAnimNames;
    if ( !RealAnimNames )
      goto LABEL_18;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             RealAnimNames,
             Item,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, filename);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.animationComponent;
    if ( RealAnimNames )
    {
      v11 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                (UnityEngine_Animation_o *)RealAnimNames,
                                                (System_String_o *)Item,
                                                0LL);
      return UnityEngine_TrackedReference__op_Inequality(v11, 0LL, 0LL);
    }
LABEL_18:
    sub_1BCAA3C(RealAnimNames, filename);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, filename);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    return 0;
  RealAnimNames = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.simpleAnimationComponent;
  if ( !RealAnimNames )
    goto LABEL_18;
  return SimpleAnimation__get_Item((SimpleAnimation_o *)RealAnimNames, (System_String_o *)Item, 0LL) != 0LL;
}


float __fastcall BattleFBXComponent__getLength(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *rootTransform; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v11; // x1
  UnityEngine_Animation_o *v12; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v17; // x19
  __int64 v18; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v20; // x0

  if ( (byte_4B187E8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B187E8 = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(rootTransform, 0LL, 0LL)
    || !System_String__op_Inequality(this->fields.currentAnimName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    return 0.0;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v12 = this->fields.animationComponent;
    if ( !v12 )
      goto LABEL_31;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v12, this->fields.currentAnimName, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      v12 = this->fields.animationComponent;
      if ( v12 )
      {
        v12 = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v12, this->fields.currentAnimName, 0LL);
        if ( v12 )
          return UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)v12, 0LL);
      }
LABEL_31:
      sub_1BCAA3C(v12, v11);
    }
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    return 0.0;
  v12 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v12 )
    goto LABEL_31;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)v12, this->fields.currentAnimName, 0LL) )
    return 0.0;
  v12 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v12 )
    goto LABEL_31;
  v12 = (UnityEngine_Animation_o *)SimpleAnimation__get_Item(
                                     (SimpleAnimation_o *)v12,
                                     this->fields.currentAnimName,
                                     0LL);
  if ( !v12 )
    goto LABEL_31;
  klass = v12->klass;
  v17 = v12;
  v18 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v18;
      p_offset += 2;
      if ( !v18 )
        goto LABEL_26;
    }
    v20 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_26:
    v20 = sub_1C1C7C0(v12, SimpleAnimation_State_TypeInfo, 14LL);
  }
  v12 = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v20)(
                                     v17,
                                     *(_QWORD *)(v20 + 8));
  if ( !v12 )
    goto LABEL_31;
  return UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)v12, 0LL);
}


System_String_o *__fastcall BattleFBXComponent__getRealAnimationName(
        BattleFBXComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v11; // x0

  if ( (byte_4B18801 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, animationName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5, v6);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    byte_4B18801 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
          (Il2CppObject *)animationName,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return string_TypeInfo->static_fields->Empty;
  }
  v11 = this->fields.RealAnimNames;
  if ( !v11 )
    sub_1BCAA3C(0LL, v10);
  return (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              (System_Collections_Generic_Dictionary_object__object__o *)v11,
                              (Il2CppObject *)animationName,
                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


float __fastcall BattleFBXComponent__getTagTime(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *CommonAnimNames; // x0
  System_Collections_Generic_Dictionary_object__object__o *Index; // x0
  float v13; // s8
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v15; // x20
  __int64 v16; // x8
  __int64 i; // x21
  BattleFBXComponent_AnimEvent_o *v18; // x23

  Item = (Il2CppObject *)animname;
  if ( (byte_4B187F4 & 1) == 0 )
  {
    sub_1BCA7E0(&AnimationList_TypeInfo, animname, tag);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v9, v10);
    byte_4B187F4 = 1;
  }
  CommonAnimNames = this->fields.CommonAnimNames;
  if ( CommonAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)CommonAnimNames,
         Item,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    Index = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.CommonAnimNames;
    if ( !Index )
      goto LABEL_25;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             Index,
             Item,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  if ( !AnimationList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo, animname);
  Index = (System_Collections_Generic_Dictionary_object__object__o *)AnimationList__getIndex(
                                                                       (System_String_o *)Item,
                                                                       0LL);
  v13 = 0.0;
  if ( ((unsigned int)Index & 0x80000000) != 0 )
    return v13;
  eventlist = this->fields.eventlist;
  if ( !eventlist )
LABEL_25:
    sub_1BCAA3C(Index, animname);
  if ( (unsigned int)Index >= eventlist->max_length )
LABEL_24:
    sub_1BCAA44(Index, animname);
  v15 = eventlist->m_Items[(unsigned int)Index];
  if ( v15 )
  {
    v16 = *(_QWORD *)&v15->max_length;
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; (int)i < (int)v16; ++i )
      {
        if ( (unsigned int)i >= (unsigned int)v16 )
          goto LABEL_24;
        v18 = v15->m_Items[i];
        if ( !v18 )
          goto LABEL_25;
        Index = (System_Collections_Generic_Dictionary_object__object__o *)v18->fields.tag;
        if ( Index )
        {
          Index = (System_Collections_Generic_Dictionary_object__object__o *)System_String__Equals_62409536(
                                                                               (System_String_o *)Index,
                                                                               tag,
                                                                               0LL);
          if ( ((unsigned __int8)Index & 1) != 0 )
            return v18->fields.time;
          v16 = *(_QWORD *)&v15->max_length;
        }
      }
    }
  }
  return v13;
}


System_String_o *__fastcall BattleFBXComponent__get_CurrentAnimName(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentAnimName;
}


float __fastcall BattleFBXComponent__get_CurrentAnimTime(BattleFBXComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentAnimTime;
}


System_String_o *__fastcall BattleFBXComponent__get_CurrentCommonAnimName(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentCommonAnimName;
}


UnityEngine_Transform_o *__fastcall BattleFBXComponent__get_RootTransform(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.rootTransform;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__inSetEvolutionLevel(
        BattleFBXComponent_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t svtId,
        int32_t limitcount,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x24
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  System_Collections_Generic_Dictionary_object__object__o *actorEffectDict; // x0
  const MethodInfo *v82; // x1
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  System_Collections_Generic_List_object__o *v86; // x20
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Collections_Generic_List_object__o *v96; // x20
  struct System_Collections_Generic_List_XWeaponTrail__o **p_componentsXWeaponTrail; // x26
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Collections_Generic_List_Renderer__o *enableRendererList; // x8
  int32_t size; // w2
  int v106; // w9
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  BattleFBXComponent___c_c *v111; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x25
  System_Func_object__bool__o *_9__56_0; // x20
  Il2CppObject *v114; // x21
  struct BattleFBXComponent___c_StaticFields *static_fields; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  __int64 v122; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x20
  int32_t LimitImageIndex; // w27
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  System_Collections_Generic_Dictionary_object__object__o *v128; // x19
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v130; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x23
  __int64 v136; // x8
  __int64 v137; // x9
  int *v138; // x10
  __int64 v139; // x0
  __int64 v140; // x8
  __int64 v141; // x9
  int *v142; // x10
  __int64 v143; // x0
  UnityEngine_Object_o *v144; // x0
  __int64 v145; // x1
  UnityEngine_Component_o *v146; // x28
  __int64 v147; // x1
  System_String_o *name; // x20
  BattleFBXComponent_c *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  __int64 v151; // x1
  __int64 v152; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v155; // x1
  float v156; // s0
  float v157; // s1
  float v158; // s2
  System_String_o *v159; // x20
  __int64 v160; // x1
  System_String_o *v161; // x21
  BattleFBXComponent_c *v162; // x0
  __int64 v163; // x0
  __int64 v164; // x1
  Il2CppObject *v165; // x29
  System_String_o *v166; // x0
  __int64 v167; // x1
  int32_t v168; // w20
  System_String_o *v169; // x0
  __int64 v170; // x1
  System_String_o *v171; // x0
  __int64 v172; // x1
  System_String_o *v173; // x20
  int32_t v174; // w2
  __int64 v175; // x1
  System_String_array *v176; // x0
  __int64 v177; // x1
  System_String_array *v178; // x20
  __int64 v179; // x8
  unsigned __int64 v180; // x22
  System_String_o *v181; // x21
  bool v182; // w21
  UnityEngine_Object_o *PrefabNode; // x20
  __int64 v184; // x1
  System_String_o *v185; // x20
  BattleFBXComponent_c *v186; // x0
  const MethodInfo *v187; // x4
  __int64 v188; // x1
  System_String_o *v189; // x20
  BattleFBXComponent_c *v190; // x0
  __int64 v191; // x1
  UnityEngine_GameObject_o *v192; // x0
  __int64 v193; // x1
  __int64 v194; // x1
  Il2CppObject *v195; // x22
  _BOOL8 v196; // x0
  System_String_o *v197; // x0
  __int64 v198; // x1
  UnityEngine_Transform_o *v199; // x22
  UnityEngine_Transform_o *v200; // x0
  __int64 v201; // x1
  float v202; // s8
  UnityEngine_Transform_o *v203; // x0
  __int64 v204; // x1
  float y; // s9
  UnityEngine_Transform_o *v206; // x0
  __int64 v207; // x1
  __int64 v208; // x0
  __int64 v209; // x1
  int v210; // s2
  float v211; // s0
  float v212; // s1
  UnityEngine_Transform_o *v213; // x0
  __int64 v214; // x1
  _BOOL8 v215; // x0
  __int64 v216; // x1
  System_Object_array *ComponentsInChildren_object__49689332; // x0
  __int64 v218; // x1
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  System_Object_array *v225; // x20
  __int64 v226; // x8
  unsigned __int64 v227; // x22
  System_Collections_Generic_List_object__o *v228; // x0
  Il2CppObject *v229; // x1
  struct System_Object_array *items; // x8
  _QWORD *v231; // x9
  __int64 v232; // x10
  Il2CppClass **v233; // x8
  __int64 v234; // x1
  Il2CppObject *v235; // x20
  UnityEngine_GameObject_o *v236; // x22
  __int64 v237; // x0
  __int64 v238; // x1
  __int64 v239; // x1
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  System_Collections_Generic_List_object__o *monitor; // x0
  struct System_Object_array *v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  Il2CppClass **v250; // x8
  __int64 v251; // x0
  __int64 v252; // x1
  __int64 v253; // x8
  __int64 v254; // x9
  int *v255; // x10
  __int64 v256; // x0
  __int64 v257; // x1
  int64_t v258; // x2
  int32_t v259; // w3
  System_String_o *v260; // x4
  BattleSetupInfo_o *v261; // x5
  FollowerInfo_o *v262; // x6
  PartyListViewItem_o *v263; // x7
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v265; // x20
  unsigned __int64 v266; // x19
  struct System_Int32_array *buckets; // x8
  _QWORD *v268; // x9
  __int64 entries_low; // x10
  __int64 v270; // x8
  int64_t v271; // x2
  __int64 v272; // x3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v277; // x8
  System_Collections_Generic_Dictionary_object__object__o *v278; // x20
  unsigned __int64 v279; // x19
  struct System_Int32_array *v280; // x8
  _QWORD *v281; // x9
  __int64 v282; // x10
  __int64 v283; // x8
  BattleFBXComponent___c_c *v284; // x0
  System_Func_object__bool__o *_9__56_1; // x19
  Il2CppObject *v286; // x20
  struct BattleFBXComponent___c_StaticFields *v287; // x0
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  System_Collections_Generic_Dictionary_object__object__c *v294; // x8
  System_Collections_Generic_Dictionary_object__object__o *v295; // x19
  __int64 v296; // x9
  int *v297; // x10
  __int64 v298; // x0
  __int64 v299; // x1
  __int64 v300; // x19
  __int64 v301; // x8
  __int64 v302; // x9
  int *v303; // x10
  __int64 v304; // x0
  __int64 v305; // x8
  __int64 v306; // x9
  int *v307; // x10
  __int64 v308; // x0
  UnityEngine_Object_o *v309; // x0
  __int64 v310; // x1
  UnityEngine_Transform_o *v311; // x20
  __int64 v312; // x1
  System_String_o *v313; // x21
  BattleFBXComponent_c *v314; // x0
  struct System_String_o *enItemMarker; // x8
  System_String_o *v316; // x22
  UnityEngine_Transform_o *parent; // x21
  System_String_o *v318; // x0
  __int64 v319; // x1
  UnityEngine_Object_o *v320; // x21
  UnityEngine_GameObject_o *v321; // x0
  __int64 v322; // x1
  Il2CppObject *v323; // x0
  __int64 v324; // x1
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  Il2CppObject *v331; // x20
  __int64 v332; // x8
  __int64 v333; // x9
  int *v334; // x10
  __int64 v335; // x0
  char v336; // [xsp+24h] [xbp-CCh]
  UnityEngine_Component_o *v339; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v340; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+50h] [xbp-A0h] BYREF
  int32_t result; // [xsp+6Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  v5 = gameObject;
  if ( (byte_4B187EB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, gameObject, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_Transform___, v19, v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__,
      v23,
      v24);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__get_Current__,
      v25,
      v26);
    sub_1BCA7E0(&System_Func_Transform__bool__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_LookAtTarget___, v29, v30);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v31, v32);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v33, v34);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v35, v36);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____76906240, v37, v38);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___, v39, v40);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v41, v42);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v43, v44);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v45, v46);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Add__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_XWeaponTrail__Add__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Renderer__Clear__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__, v57, v58);
    sub_1BCA7E0(&System_Collections_Generic_List_XWeaponTrail__TypeInfo, v59, v60);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v61, v62);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v63, v64);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v65, v66);
    sub_1BCA7E0(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_0__, v67, v68);
    sub_1BCA7E0(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_1__, v69, v70);
    sub_1BCA7E0(&BattleFBXComponent___c_TypeInfo, v71, v72);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__,
      v73,
      v74);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_23676/*"spiral"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_3250/*"Battle2D"*/, v79, v80);
    byte_4B187EB = 1;
  }
  result = 0;
  memset(&i, 0, sizeof(i));
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_object__object___Clear(
    actorEffectDict,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  BattleFBXComponent__DestroyPrefabNode(this, v82);
  v86 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v83,
                                                       v84,
                                                       v85);
  System_Collections_Generic_List_object____ctor(
    v86,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.PrefabNodes = (struct System_Collections_Generic_List_GameObject__o *)v86;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.PrefabNodes, (int64_t)v86, v87, v88, v89, v90, v91, v92);
  v96 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_XWeaponTrail__TypeInfo,
                                                       v93,
                                                       v94,
                                                       v95);
  System_Collections_Generic_List_object____ctor(
    v96,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  this->fields.componentsXWeaponTrail = (struct System_Collections_Generic_List_XWeaponTrail__o *)v96;
  p_componentsXWeaponTrail = &this->fields.componentsXWeaponTrail;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.componentsXWeaponTrail,
    (int64_t)v96,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  enableRendererList = this->fields.enableRendererList;
  if ( !enableRendererList )
    goto LABEL_209;
  size = enableRendererList->fields._size;
  v106 = enableRendererList->fields._version + 1;
  enableRendererList->fields._size = 0;
  enableRendererList->fields._version = v106;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)enableRendererList->fields._items, 0, size, 0LL);
  if ( !v5 )
    goto LABEL_209;
  ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                  v5,
                                  1,
                                  (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____76906240);
  v111 = BattleFBXComponent___c_TypeInfo;
  v112 = (System_Collections_Generic_IEnumerable_TSource__o *)ComponentsInChildren_object;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo, v108);
    v111 = BattleFBXComponent___c_TypeInfo;
  }
  _9__56_0 = (System_Func_object__bool__o *)v111->static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( !v111->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v111, v108);
      v111 = BattleFBXComponent___c_TypeInfo;
    }
    v114 = (Il2CppObject *)v111->static_fields->__9;
    _9__56_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Transform__bool__TypeInfo, v108, v109, v110);
    System_Func_object__bool____ctor(_9__56_0, v114, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_0__, 0LL);
    static_fields = BattleFBXComponent___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Func_Transform__bool__o *)_9__56_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__56_0,
      (int64_t)_9__56_0,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
  }
  v123 = System_Linq_Enumerable__Where_object_(
           v112,
           (System_Func_TSource__bool__o *)_9__56_0,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v122);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, limitcount, 1, 0LL);
  v128 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo,
                                                                      v125,
                                                                      v126,
                                                                      v127);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v128,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
  if ( !v123 )
    goto LABEL_209;
  klass = v123->klass;
  v339 = (UnityEngine_Component_o *)this;
  v130 = *(unsigned __int16 *)(&v123->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v123->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v130;
      p_offset += 4;
      if ( !v130 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C1C7C0(v123, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v133 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
           v123,
           *(_QWORD *)(p_method + 8));
  v135 = v133;
  v336 = 1;
  while ( 1 )
  {
    if ( !v135 )
      sub_1BCAA3C(v133, v134);
    v136 = *(_QWORD *)v135;
    v137 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
    {
      v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v138 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v137;
        v138 += 4;
        if ( !v137 )
          goto LABEL_29;
      }
      v139 = v136 + 16LL * *v138 + 312;
    }
    else
    {
LABEL_29:
      v139 = sub_1C1C7C0(v135, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v135, *(_QWORD *)(v139 + 8)) & 1) == 0 )
      break;
    v140 = *(_QWORD *)v135;
    v141 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
    {
      v142 = (int *)(*(_QWORD *)(v140 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v142 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v141;
        v142 += 4;
        if ( !v141 )
          goto LABEL_36;
      }
      v143 = v140 + 16LL * *v142 + 312;
    }
    else
    {
LABEL_36:
      v143 = sub_1C1C7C0(v135, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v144 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v143)(v135, *(_QWORD *)(v143 + 8));
    v146 = (UnityEngine_Component_o *)v144;
    if ( !v144 )
      sub_1BCAA3C(0LL, v145);
    name = UnityEngine_Object__get_name(v144, 0LL);
    v149 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v147);
    if ( !name )
      sub_1BCAA3C(v149, v147);
    if ( System_String__StartsWith(name, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL) )
    {
      v150 = UnityEngine_Component__get_gameObject(v339, 0LL);
      if ( !v150 )
        sub_1BCAA3C(0LL, v151);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v150,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v152);
      v133 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( (v133 & 1) != 0 )
      {
        transform = UnityEngine_Component__get_transform(v146, 0LL);
        if ( !Component_object )
          sub_1BCAA3C(transform, v155);
        if ( !transform )
          sub_1BCAA3C(0LL, v155);
        if ( LOBYTE(Component_object[30].klass) )
          v156 = -1.0;
        else
          v156 = 1.0;
        v157 = 1.0;
        v158 = 1.0;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v156, 0LL);
      }
    }
    else
    {
      v159 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v146, 0LL);
      v161 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v146, 0LL);
      v162 = BattleFBXComponent_TypeInfo;
      if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v160);
      if ( !v161 )
        sub_1BCAA3C(v162, v160);
      v163 = System_String__IndexOf_62432796(v161, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      if ( !v159 )
        sub_1BCAA3C(v163, v164);
      v165 = (Il2CppObject *)System_String__Substring_62420224(v159, 0, v163, 0LL);
      v166 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v146, 0LL);
      if ( !v166 )
        sub_1BCAA3C(0LL, v167);
      v168 = System_String__IndexOf_62432796(v166, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      v169 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v146, 0LL);
      if ( !v169 )
        sub_1BCAA3C(0LL, v170);
      v171 = System_String__Substring(v169, v168 + 7, 0LL);
      v173 = v171;
      if ( !v171 )
        sub_1BCAA3C(0LL, v172);
      if ( (System_String__IndexOf_62432796(v171, (System_String_o *)StringLiteral_116/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v174 = System_String__IndexOf_62432796(v173, (System_String_o *)StringLiteral_116/*" "*/, 0LL);
        v173 = System_String__Substring_62420224(v173, 0, v174, 0LL);
        if ( !v173 )
          sub_1BCAA3C(0LL, v175);
      }
      v176 = System_String__Split(v173, 0x5Fu, 0, 0LL);
      v178 = v176;
      if ( !v176 )
        sub_1BCAA3C(0LL, v177);
      v179 = *(_QWORD *)&v176->max_length;
      if ( (int)v179 < 1 )
      {
LABEL_69:
        v182 = 0;
        PrefabNode = 0LL;
      }
      else
      {
        v180 = 0LL;
        while ( 1 )
        {
          if ( v180 >= (unsigned int)v179 )
            sub_1BCAA44(v176, v177);
          v181 = v178->m_Items[v180];
          result = 99;
          v176 = (System_String_array *)System_Int32__TryParse(v181, &result, 0LL);
          if ( ((unsigned __int8)v176 & 1) != 0 )
          {
            v176 = (System_String_array *)System_Int32__Parse(v181, 0LL);
            if ( (_DWORD)v176 == LimitImageIndex )
              break;
          }
          LODWORD(v179) = v178->max_length;
          if ( (__int64)++v180 >= (int)v179 )
            goto LABEL_69;
        }
        v185 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v146, 0LL);
        v186 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v184);
        if ( !v185 )
          sub_1BCAA3C(v186, v184);
        if ( System_String__StartsWith(v185, BattleFBXComponent_TypeInfo->static_fields->prefabMarker, 0LL) )
          goto LABEL_78;
        v189 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v146, 0LL);
        v190 = BattleFBXComponent_TypeInfo;
        if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v188);
        if ( !v189 )
          sub_1BCAA3C(v190, v188);
        if ( System_String__StartsWith(v189, BattleFBXComponent_TypeInfo->static_fields->chrnodeMarker, 0LL) )
LABEL_78:
          PrefabNode = (UnityEngine_Object_o *)BattleFBXComponent__CreatePrefabNode(
                                                 (BattleFBXComponent_o *)v339,
                                                 (UnityEngine_Transform_o *)v146,
                                                 svtId,
                                                 limitcount,
                                                 v187);
        else
          PrefabNode = 0LL;
        v182 = 1;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v177);
      if ( UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL) )
      {
        v192 = UnityEngine_Component__get_gameObject(v339, 0LL);
        if ( !v192 )
          sub_1BCAA3C(0LL, v193);
        v195 = UnityEngine_GameObject__GetComponent_object_(
                 v192,
                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v194);
        v196 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v195, 0LL, 0LL);
        if ( v196 )
        {
          if ( !v195 )
            sub_1BCAA3C(v196, v191);
          if ( LOBYTE(v195[30].klass) )
          {
            if ( !PrefabNode )
              sub_1BCAA3C(v196, v191);
            v197 = UnityEngine_Object__get_name(PrefabNode, 0LL);
            if ( !v197 )
              sub_1BCAA3C(0LL, v198);
            if ( (System_String__IndexOf_62432796(v197, (System_String_o *)StringLiteral_23676/*"spiral"*/, 0LL) & 0x80000000) == 0 )
            {
              v199 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              v200 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v200 )
                sub_1BCAA3C(0LL, v201);
              LODWORD(v202) = (unsigned int)UnityEngine_Transform__get_localScale(v200, 0LL);
              v203 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v203 )
                sub_1BCAA3C(0LL, v204);
              localScale = UnityEngine_Transform__get_localScale(v203, 0LL);
              y = localScale.fields.y;
              v206 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v206 )
                sub_1BCAA3C(0LL, v207);
              *(UnityEngine_Vector3_o *)(&v210 - 2) = UnityEngine_Transform__get_localScale(v206, 0LL);
              if ( !v199 )
                sub_1BCAA3C(v208, v209);
              v211 = -v202;
              v212 = y;
              UnityEngine_Transform__set_localScale(v199, *(UnityEngine_Vector3_o *)(&v210 - 2), 0LL);
              v213 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v213 )
                sub_1BCAA3C(0LL, v214);
              UnityEngine_Transform__Rotate_70176908(v213, 0.0, 180.0, 0.0, 0LL);
            }
          }
        }
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v191);
      v215 = UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL);
      if ( v215 )
      {
        if ( !PrefabNode )
          sub_1BCAA3C(v215, v216);
        ComponentsInChildren_object__49689332 = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                  (UnityEngine_GameObject_o *)PrefabNode,
                                                  (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
        v225 = ComponentsInChildren_object__49689332;
        if ( !ComponentsInChildren_object__49689332 )
          sub_1BCAA3C(0LL, v218);
        v226 = *(_QWORD *)&ComponentsInChildren_object__49689332->max_length;
        if ( (int)v226 >= 1 )
        {
          v227 = 0LL;
          do
          {
            if ( v227 >= (unsigned int)v226 )
              sub_1BCAA44(ComponentsInChildren_object__49689332, v218);
            v228 = (System_Collections_Generic_List_object__o *)*p_componentsXWeaponTrail;
            if ( !*p_componentsXWeaponTrail )
              sub_1BCAA3C(0LL, v218);
            v229 = v225->m_Items[v227];
            items = v228->fields._items;
            v231 = Method_System_Collections_Generic_List_XWeaponTrail__Add__;
            ++v228->fields._version;
            if ( !items )
              sub_1BCAA3C(v228, v229);
            v232 = v228->fields._size;
            if ( (unsigned int)v232 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v228,
                v229,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v231[4] + 192LL) + 112LL));
            }
            else
            {
              v233 = &items->obj.klass + v232;
              v228->fields._size = v232 + 1;
              v233[4] = (Il2CppClass *)v229;
              sub_1BCA784((PartyOrganizationUtility_o *)(v233 + 4), (int64_t)v229, v219, v220, v221, v222, v223, v224);
            }
            LODWORD(v226) = v225->max_length;
            ++v227;
          }
          while ( (__int64)v227 < (int)v226 );
        }
      }
      v235 = UnityEngine_Component__GetComponent_object_(
               v146,
               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v234);
      v133 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v235, 0LL, 0LL);
      if ( (v133 & 1) != 0 )
      {
        v236 = UnityEngine_Component__get_gameObject(v146, 0LL);
        v237 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3250/*"Battle2D"*/, 0LL);
        if ( !v236 )
          sub_1BCAA3C(v237, (unsigned int)v237);
        UnityEngine_GameObject__set_layer(v236, v237, 0LL);
        if ( !v128 )
          sub_1BCAA3C(0LL, v238);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v128,
          v165,
          v235,
          (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
        monitor = (System_Collections_Generic_List_object__o *)v339[6].monitor;
        if ( !monitor )
          sub_1BCAA3C(0LL, v239);
        v247 = monitor->fields._items;
        v248 = Method_System_Collections_Generic_List_Renderer__Add__;
        ++monitor->fields._version;
        if ( !v247 )
          sub_1BCAA3C(monitor, v239);
        v249 = monitor->fields._size;
        if ( (unsigned int)v249 >= v247->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            monitor,
            v235,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
        }
        else
        {
          v250 = &v247->obj.klass + v249;
          monitor->fields._size = v249 + 1;
          v250[4] = (Il2CppClass *)v235;
          sub_1BCA784((PartyOrganizationUtility_o *)(v250 + 4), (int64_t)v235, v240, v241, v242, v243, v244, v245);
        }
        if ( !v235 )
          sub_1BCAA3C(v251, v252);
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v235, v182, 0LL);
        v336 &= !v182;
      }
    }
  }
  v253 = *(_QWORD *)v135;
  v254 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
  {
    v255 = (int *)(*(_QWORD *)(v253 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v255 - 1) != System_IDisposable_TypeInfo )
    {
      --v254;
      v255 += 4;
      if ( !v254 )
        goto LABEL_129;
    }
    v256 = v253 + 16LL * *v255 + 312;
  }
  else
  {
LABEL_129:
    v256 = sub_1C1C7C0(v135, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v256)(v135, *(_QWORD *)(v256 + 8));
  if ( (v336 & 1) != 0 )
  {
    actorEffectDict = v128;
    if ( !v128 )
      goto LABEL_209;
    actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                   v128,
                                                                                   (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    if ( !actorEffectDict )
      goto LABEL_209;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
      &v340,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)actorEffectDict,
      (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    for ( i = v340;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &i,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)i.fields._currentValue, 1, 0LL) )
    {
      if ( !i.fields._currentValue )
        sub_1BCAA3C(0LL, v257);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
      &i,
      (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                                 v5,
                                                                                 (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  entries = actorEffectDict->fields._entries;
  v265 = actorEffectDict;
  if ( (int)entries >= 1 )
  {
    v266 = 0LL;
    while ( v266 < (unsigned int)entries )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v339[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v265->fields._count + v266);
      buckets = actorEffectDict->fields._buckets;
      v268 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !buckets )
        goto LABEL_209;
      entries_low = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)entries_low >= buckets->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
      }
      else
      {
        v270 = (__int64)buckets + 8 * entries_low;
        LODWORD(actorEffectDict->fields._entries) = entries_low + 1;
        *(_QWORD *)(v270 + 32) = gameObject;
        sub_1BCA784((PartyOrganizationUtility_o *)(v270 + 32), (int64_t)gameObject, v258, v259, v260, v261, v262, v263);
      }
      LODWORD(entries) = v265->fields._entries;
      if ( (__int64)++v266 >= (int)entries )
        goto LABEL_149;
    }
LABEL_213:
    sub_1BCAA44(actorEffectDict, gameObject);
  }
LABEL_149:
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                                 v5,
                                                                                 (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
  if ( !actorEffectDict )
    goto LABEL_209;
  v277 = actorEffectDict->fields._entries;
  v278 = actorEffectDict;
  if ( (int)v277 >= 1 )
  {
    v279 = 0LL;
    while ( v279 < (unsigned int)v277 )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)v339[6].monitor;
      if ( !actorEffectDict )
        goto LABEL_209;
      gameObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v278->fields._count + v279);
      v280 = actorEffectDict->fields._buckets;
      v281 = Method_System_Collections_Generic_List_Renderer__Add__;
      ++HIDWORD(actorEffectDict->fields._entries);
      if ( !v280 )
        goto LABEL_209;
      v282 = SLODWORD(actorEffectDict->fields._entries);
      if ( (unsigned int)v282 >= v280->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)actorEffectDict,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
      }
      else
      {
        v283 = (__int64)v280 + 8 * v282;
        LODWORD(actorEffectDict->fields._entries) = v282 + 1;
        *(_QWORD *)(v283 + 32) = gameObject;
        sub_1BCA784((PartyOrganizationUtility_o *)(v283 + 32), (int64_t)gameObject, v271, v272, v273, v274, v275, v276);
      }
      LODWORD(v277) = v278->fields._entries;
      if ( (__int64)++v279 >= (int)v277 )
        goto LABEL_159;
    }
    goto LABEL_213;
  }
LABEL_159:
  v284 = BattleFBXComponent___c_TypeInfo;
  if ( !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo, gameObject);
    v284 = BattleFBXComponent___c_TypeInfo;
  }
  _9__56_1 = (System_Func_object__bool__o *)v284->static_fields->__9__56_1;
  if ( !_9__56_1 )
  {
    if ( !v284->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v284, gameObject);
      v284 = BattleFBXComponent___c_TypeInfo;
    }
    v286 = (Il2CppObject *)v284->static_fields->__9;
    _9__56_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_Transform__bool__TypeInfo, gameObject, v271, v272);
    System_Func_object__bool____ctor(_9__56_1, v286, Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_1__, 0LL);
    v287 = BattleFBXComponent___c_TypeInfo->static_fields;
    v287->__9__56_1 = (struct System_Func_Transform__bool__o *)_9__56_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v287->__9__56_1, (int64_t)_9__56_1, v288, v289, v290, v291, v292, v293);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Linq_Enumerable__Where_object_(
                                                                                 v112,
                                                                                 (System_Func_TSource__bool__o *)_9__56_1,
                                                                                 (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !actorEffectDict )
LABEL_209:
    sub_1BCAA3C(actorEffectDict, gameObject);
  v294 = actorEffectDict->klass;
  v295 = actorEffectDict;
  v296 = *(unsigned __int16 *)(&actorEffectDict->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&actorEffectDict->klass->_2.bitflags2 + 3) )
  {
    v297 = &v294->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)v297 - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v296;
      v297 += 4;
      if ( !v296 )
        goto LABEL_170;
    }
    v298 = (__int64)(&v294->vtable._0_Equals.method + 2 * *v297);
  }
  else
  {
LABEL_170:
    v298 = sub_1C1C7C0(actorEffectDict, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v300 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_object__object__o *, _QWORD))v298)(
           v295,
           *(_QWORD *)(v298 + 8));
  if ( !v300 )
    sub_1BCAA3C(0LL, v299);
  while ( 1 )
  {
    v301 = *(_QWORD *)v300;
    v302 = *(unsigned __int16 *)(*(_QWORD *)v300 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v300 + 302LL) )
    {
      v303 = (int *)(*(_QWORD *)(v301 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v303 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v302;
        v303 += 4;
        if ( !v302 )
          goto LABEL_177;
      }
      v304 = v301 + 16LL * *v303 + 312;
    }
    else
    {
LABEL_177:
      v304 = sub_1C1C7C0(v300, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v304)(v300, *(_QWORD *)(v304 + 8)) & 1) == 0 )
      break;
    v305 = *(_QWORD *)v300;
    v306 = *(unsigned __int16 *)(*(_QWORD *)v300 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v300 + 302LL) )
    {
      v307 = (int *)(*(_QWORD *)(v305 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v307 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v306;
        v307 += 4;
        if ( !v306 )
          goto LABEL_184;
      }
      v308 = v305 + 16LL * *v307 + 312;
    }
    else
    {
LABEL_184:
      v308 = sub_1C1C7C0(v300, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v309 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v308)(v300, *(_QWORD *)(v308 + 8));
    v311 = (UnityEngine_Transform_o *)v309;
    if ( !v309 )
      sub_1BCAA3C(0LL, v310);
    v313 = UnityEngine_Object__get_name(v309, 0LL);
    v314 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v312);
      v314 = BattleFBXComponent_TypeInfo;
    }
    enItemMarker = v314->static_fields->enItemMarker;
    if ( !enItemMarker )
      sub_1BCAA3C(v314, v312);
    if ( !v313 )
      sub_1BCAA3C(v314, v312);
    v316 = System_String__Substring(v313, enItemMarker->fields._stringLength, 0LL);
    parent = UnityEngine_Transform__get_parent(v311, 0LL);
    v318 = System_String__Concat_62401220(BattleFBXComponent_TypeInfo->static_fields->enWeaponMarker, v316, 0LL);
    if ( !parent )
      sub_1BCAA3C(v318, v318);
    v320 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(parent, v318, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v319);
    if ( UnityEngine_Object__op_Inequality(v320, 0LL, 0LL) )
    {
      v321 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v311, 0LL);
      if ( !v321 )
        sub_1BCAA3C(0LL, v322);
      v323 = UnityEngine_GameObject__AddComponent_object_(
               v321,
               (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
      v331 = v323;
      if ( !v323 )
        sub_1BCAA3C(0LL, v324);
      v323[2].monitor = v320;
      sub_1BCA784((PartyOrganizationUtility_o *)&v323[2].monitor, (int64_t)v320, v325, v326, v327, v328, v329, v330);
      LODWORD(v331[3].klass) = 1120403456;
    }
  }
  v332 = *(_QWORD *)v300;
  v333 = *(unsigned __int16 *)(*(_QWORD *)v300 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v300 + 302LL) )
  {
    v334 = (int *)(*(_QWORD *)(v332 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v334 - 1) != System_IDisposable_TypeInfo )
    {
      --v333;
      v334 += 4;
      if ( !v333 )
        goto LABEL_202;
    }
    v335 = v332 + 16LL * *v334 + 312;
  }
  else
  {
LABEL_202:
    v335 = sub_1C1C7C0(v300, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v335)(v300, *(_QWORD *)(v335 + 8));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__loadAnimationEvents(
        BattleFBXComponent_o *this,
        UnityEngine_TextAsset_o *data,
        int32_t svtId,
        int32_t level,
        const MethodInfo *method)
{
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  struct BattleFBXComponent_AnimEvent_array_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  int32_t LimitImageIndex; // w21
  __int64 Instance; // x0
  __int64 v49; // x1
  System_String_o *text; // x22
  int v51; // w8
  int v52; // w8
  __int64 v53; // x22
  BattleFBXComponent_c **v54; // x28
  unsigned int v55; // w29
  System_String_o *v56; // x23
  __int64 v57; // x8
  __int64 v58; // x23
  System_String_o *v59; // x25
  __int64 v60; // x1
  int32_t v61; // w26
  System_String_o *v62; // x27
  BattleFBXComponent_c *v63; // x0
  int32_t v64; // w0
  __int64 v65; // x2
  __int64 v66; // x3
  int32_t Index; // w24
  int32_t v68; // w20
  System_Collections_Generic_List_object__o *v69; // x25
  struct BattleFBXComponent_AnimEvent_array_array *v70; // x21
  __int64 v71; // x19
  int v72; // w8
  int v73; // w26
  __int64 v74; // x2
  __int64 v75; // x3
  float v76; // s0
  float v77; // s8
  unsigned int v78; // w9
  int v79; // w21
  BattleFBXComponent_c **v80; // x19
  int64_t v81; // x28
  int64_t v82; // x27
  float v83; // s9
  int64_t v84; // x26
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  Il2CppClass **v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x23
  Il2CppClass **v114; // x0
  __int64 v115; // x0
  BattleFBXComponent_o *v116; // [xsp+8h] [xbp-88h]
  struct BattleFBXComponent_AnimEvent_array_array **p_eventlist; // [xsp+10h] [xbp-80h]
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_4B187F8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent_AnimEvent_____TypeInfo, data, *(_QWORD *)&svtId);
    sub_1BCA7E0(&BattleFBXComponent_AnimEvent_TypeInfo, v9, v10);
    sub_1BCA7E0(&AnimationList_TypeInfo, v11, v12);
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&char___TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo, v29, v30);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&StringLiteral_396/*"#"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v37, v38);
    byte_4B187F8 = 1;
  }
  entity = 0LL;
  BattleFBXComponent__InitAnimNameDict(this, (const MethodInfo *)data);
  v39 = (struct BattleFBXComponent_AnimEvent_array_array *)sub_1BCA888(BattleFBXComponent_AnimEvent_____TypeInfo, 50LL);
  this->fields.eventlist = v39;
  p_eventlist = &this->fields.eventlist;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventlist, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v46);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, level, 1, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &entity,
               svtId,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_71;
    if ( HIDWORD(entity[5].klass) == 4 )
      LimitImageIndex = 1;
  }
  if ( !data )
    goto LABEL_71;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  Instance = sub_1BCA888(char___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_71;
  v51 = *(_DWORD *)(Instance + 24);
  v49 = Instance;
  if ( !v51 )
    goto LABEL_72;
  *(_WORD *)(Instance + 32) = 13;
  if ( v51 == 1 )
    goto LABEL_72;
  *(_WORD *)(Instance + 34) = 10;
  if ( !text
    || (v116 = this, (Instance = (__int64)System_String__Split_62423376(text, (System_Char_array *)Instance, 0LL)) == 0) )
  {
LABEL_71:
    sub_1BCAA3C(Instance, v49);
  }
  v52 = *(_DWORD *)(Instance + 24);
  v53 = Instance;
  if ( v52 >= 1 )
  {
    v54 = &BattleFBXComponent_TypeInfo;
    v55 = 0;
    while ( v55 < v52 )
    {
      Instance = (__int64)StringLiteral_863/*","*/;
      if ( !StringLiteral_863/*","*/ )
        goto LABEL_71;
      v56 = *(System_String_o **)(v53 + 8LL * (int)v55 + 32);
      Instance = System_String__get_Chars((System_String_o *)StringLiteral_863/*","*/, 0, 0LL);
      if ( !v56 )
        goto LABEL_71;
      Instance = (__int64)System_String__Split(v56, Instance, 0, 0LL);
      if ( !Instance )
        goto LABEL_71;
      v57 = *(_QWORD *)(Instance + 24);
      v58 = Instance;
      if ( v57 )
      {
        if ( !(_DWORD)v57 )
          break;
        Instance = *(_QWORD *)(Instance + 32);
        if ( !Instance )
          goto LABEL_71;
        Instance = System_String__StartsWith((System_String_o *)Instance, (System_String_o *)StringLiteral_396/*"#"*/, 0LL);
        if ( (Instance & 1) == 0 && *(int *)(v58 + 24) >= 6 )
        {
          Instance = System_Int32__Parse(*(System_String_o **)(v58 + 32), 0LL);
          if ( *(_DWORD *)(v58 + 24) <= 1u )
            break;
          if ( (_DWORD)Instance == LimitImageIndex )
          {
            Instance = (__int64)*v54;
            v59 = *(System_String_o **)(v58 + 40);
            if ( !(*v54)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Instance, v49);
            if ( !v59 )
              goto LABEL_71;
            v61 = System_String__IndexOf_62432796(v59, (*v54)->static_fields->levelMarker, 0LL);
            v62 = v59;
            if ( (v61 & 0x80000000) == 0 )
            {
              v63 = *v54;
              if ( !(*v54)->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v63, v60);
                v63 = *v54;
              }
              v64 = System_String__IndexOf_62432796(v59, v63->static_fields->levelMarker, 0LL);
              v62 = System_String__Substring_62420224(v59, 0, v64, 0LL);
            }
            if ( !AnimationList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo, v60);
            Index = AnimationList__getIndex(v62, 0LL);
            if ( (v61 & 0x80000000) == 0 )
            {
              Instance = (__int64)v116->fields.RealAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v62,
                (Il2CppObject *)v59,
                (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
              Instance = (__int64)v116->fields.CommonAnimNames;
              if ( !Instance )
                goto LABEL_71;
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                (Il2CppObject *)v59,
                (Il2CppObject *)v62,
                (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
            }
            v68 = LimitImageIndex;
            v69 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo,
                                                                 v49,
                                                                 v65,
                                                                 v66);
            System_Collections_Generic_List_object____ctor(
              v69,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
            v70 = *p_eventlist;
            if ( !*p_eventlist )
              goto LABEL_71;
            if ( Index >= v70->max_length )
              break;
            v71 = Index;
            if ( !v70->m_Items[Index] )
            {
              v72 = *(_DWORD *)(v58 + 24);
              if ( v72 >= 3 )
              {
                v73 = 2;
                do
                {
                  if ( v73 >= (unsigned int)v72 )
                    goto LABEL_72;
                  Instance = *(_QWORD *)(v58 + 8LL * v73 + 32);
                  if ( !Instance )
                    goto LABEL_71;
                  if ( !*(_DWORD *)(Instance + 16) )
                    break;
                  v76 = System_Single__Parse((System_String_o *)Instance, 0LL);
                  Instance = (__int64)*v54;
                  v77 = v76;
                  if ( !(*v54)->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Instance, v49);
                    Instance = (__int64)*v54;
                  }
                  v78 = *(_DWORD *)(v58 + 24);
                  if ( v73 + 1 >= v78 )
                    goto LABEL_72;
                  v79 = v73 + 2;
                  if ( v73 + 2 >= v78 )
                    goto LABEL_72;
                  v80 = v54;
                  v81 = *(_QWORD *)(v58 + 8LL * (v73 + 1) + 32);
                  v82 = *(_QWORD *)(v58 + 8LL * (v73 + 2) + 32);
                  v83 = *(float *)(*(_QWORD *)(Instance + 184) + 4LL);
                  v84 = sub_1BCAA2C(BattleFBXComponent_AnimEvent_TypeInfo, v49, v74, v75);
                  System_Object___ctor((Il2CppObject *)v84, 0LL);
                  if ( !v84 )
                    goto LABEL_71;
                  *(float *)(v84 + 16) = v77 / v83;
                  *(_QWORD *)(v84 + 24) = v81;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v84 + 24), v81, v85, v86, v87, v88, v89, v90);
                  *(_QWORD *)(v84 + 32) = v82;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v84 + 32), v82, v91, v92, v93, v94, v95, v96);
                  if ( !v69 )
                    goto LABEL_71;
                  items = v69->fields._items;
                  v104 = Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__;
                  ++v69->fields._version;
                  if ( !items )
                    goto LABEL_71;
                  size = v69->fields._size;
                  v54 = v80;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v69,
                      (Il2CppObject *)v84,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v106 = &items->obj.klass + size;
                    v69->fields._size = size + 1;
                    v106[4] = (Il2CppClass *)v84;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 4), v84, v97, v98, v99, v100, v101, v102);
                  }
                  v72 = *(_DWORD *)(v58 + 24);
                  v73 = v79 + 1;
                }
                while ( v79 + 1 < v72 );
                v71 = Index;
                v70 = *p_eventlist;
              }
            }
            if ( !v69 )
              goto LABEL_71;
            Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                  v69,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
            if ( !v70 )
              goto LABEL_71;
            v113 = Instance;
            if ( Instance )
            {
              Instance = sub_1BCA91C(Instance, v70->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v115 = sub_1BCAA60(0LL);
                sub_1BCA908(v115, 0LL);
              }
            }
            if ( Index >= v70->max_length )
              break;
            v114 = &v70->obj.klass + v71;
            v114[4] = (Il2CppClass *)v113;
            sub_1BCA784((PartyOrganizationUtility_o *)(v114 + 4), v113, v107, v108, v109, v110, v111, v112);
            LimitImageIndex = v68;
          }
        }
      }
      v52 = *(_DWORD *)(v53 + 24);
      if ( (int)++v55 >= v52 )
        return;
    }
LABEL_72:
    sub_1BCAA44(Instance, v49);
  }
}


void __fastcall BattleFBXComponent__playAnimation(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  const MethodInfo *v4; // x4
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1

  if ( (byte_4B187F2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_2397/*"AnimationCheck"*/, filename, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B187F2 = 1;
  }
  BattleFBXComponent__playAnimationTimeline(this, filename, (System_String_o *)StringLiteral_1/*""*/, v3, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v10);
  if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70140444(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2397/*"AnimationCheck"*/,
      0LL);
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2397/*"AnimationCheck"*/,
      0LL);
  }
}


void __fastcall BattleFBXComponent__playAnimationFromTag(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *currentAnimName; // x21
  System_String_o *currentCommonAnimName; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  long double v13; // q0
  UnityEngine_Object_o *animationComponent; // x22
  long double v15; // q8
  __int64 v16; // x1
  UnityEngine_Animation_o *Item; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v26; // x22
  __int64 v27; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v29; // x0
  UnityEngine_Animation_c *v30; // x8
  UnityEngine_Animation_o *v31; // x22
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0

  if ( (byte_4B187F3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, animname, tag);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v7, v8);
    byte_4B187F3 = 1;
  }
  BattleFBXComponent__playAnimation(this, animname, (const MethodInfo *)tag);
  currentAnimName = this->fields.currentAnimName;
  currentCommonAnimName = this->fields.currentCommonAnimName;
  this->fields.isDirty = 1;
  *(float *)&v13 = BattleFBXComponent__getTagTime(this, currentCommonAnimName, tag, v11);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  v15 = v13;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    Item = this->fields.animationComponent;
    if ( Item )
    {
      Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, *(float *)&v15, 0LL);
        Item = this->fields.animationComponent;
        if ( Item )
        {
          Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0LL);
          if ( Item )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
            goto LABEL_31;
          }
        }
      }
    }
LABEL_32:
    sub_1BCAA3C(Item, v16);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_32;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0LL);
    if ( !Item )
      goto LABEL_32;
    klass = Item->klass;
    v26 = Item;
    v27 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v27;
        p_offset += 2;
        if ( !v27 )
          goto LABEL_20;
      }
      v29 = (__int64)(&klass->vtable._4_GetEnumerator.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_20:
      v29 = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, long double))v29)(v26, *(_QWORD *)(v29 + 8), v15);
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_32;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0LL);
    if ( !Item )
      goto LABEL_32;
    v30 = Item->klass;
    v31 = Item;
    v32 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
    {
      v33 = (SimpleAnimation_State_c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v32;
        v33 += 2;
        if ( !v32 )
          goto LABEL_28;
      }
      v34 = (__int64)(&v30[1]._1.this_arg.bits + 4 * *(_DWORD *)v33);
    }
    else
    {
LABEL_28:
      v34 = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 8LL);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v34)(v31, *(_QWORD *)(v34 + 8), 0.0);
  }
LABEL_31:
  this->fields.currentAnimName = currentAnimName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentAnimName,
    (int64_t)currentAnimName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.currentAnimTime = *(float *)&v15;
  this->fields.currentEventIndex = 0;
  this->fields.isStop = 0;
}


void __fastcall BattleFBXComponent__playAnimationTimeline(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        System_String_o *startEvent,
        System_String_o *stopEvent,
        const MethodInfo *method)
{
  System_String_o *Item; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *Component_object; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v37; // x1
  UnityEngine_Animation_o *v38; // x0
  __int64 v39; // x1
  UnityEngine_Animation_o *v40; // x0
  UnityEngine_TrackedReference_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_Animation_o *v43; // x0
  UnityEngine_AnimationState_o *v44; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  __int64 v53; // x1
  SimpleAnimation_o *v54; // x0
  __int64 v55; // x1
  SimpleAnimation_o *v56; // x0
  __int64 v57; // x1
  SimpleAnimation_o *v58; // x0
  SimpleAnimation_State_o *v59; // x0
  __int64 v60; // x1
  SimpleAnimation_State_o *v61; // x22
  SimpleAnimation_State_c *klass; // x8
  __int64 v63; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x1

  Item = filename;
  if ( (byte_4B187F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, filename, startEvent);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v14, v15);
    byte_4B187F0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      Item = BattleActorControl__OverwriteAnimation((BattleActorControl_o *)Component_object, Item, 1, 0LL);
      LOBYTE(Component_object[21].monitor) = 1;
      goto LABEL_9;
    }
LABEL_41:
    sub_1BCAA3C(gameObject, v17);
  }
LABEL_9:
  this->fields.currentCommonAnimName = Item;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentCommonAnimName,
    (int64_t)Item,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  RealAnimNames = this->fields.RealAnimNames;
  if ( RealAnimNames
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)RealAnimNames,
         (Il2CppObject *)Item,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v28 = this->fields.RealAnimNames;
    if ( !v28 )
      sub_1BCAA3C(0LL, v26);
    Item = (System_String_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v28,
                                (Il2CppObject *)Item,
                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  BattleFBXComponent__setupAnimation(this, v26);
  this->fields.currentAnimName = Item;
  this->fields.isDirty = 1;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.currentAnimName, (int64_t)Item, v29, v30, v31, v32, v33, v34);
  *(_QWORD *)&this->fields.currentAnimTime = 0LL;
  this->fields.isStop = 0;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v38 = this->fields.animationComponent;
    if ( !v38 )
      sub_1BCAA3C(0LL, v37);
    UnityEngine_Animation__Play_69899248(v38, Item, 0LL);
    v40 = this->fields.animationComponent;
    if ( !v40 )
      sub_1BCAA3C(0LL, v39);
    v41 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v40, Item, 0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v41, 0LL, 0LL) )
    {
      v43 = this->fields.animationComponent;
      if ( !v43 )
        sub_1BCAA3C(0LL, v42);
      v44 = UnityEngine_Animation__get_Item(v43, Item, 0LL);
      if ( !v44 )
        sub_1BCAA3C(0LL, v45);
      UnityEngine_AnimationState__set_speed(v44, 0.0, 0LL);
LABEL_37:
      this->fields.animename = Item;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animename, (int64_t)Item, v46, v47, v48, v49, v50, v51);
      if ( startEvent )
      {
        if ( startEvent->fields._stringLength >= 1 )
        {
          this->fields.currentAnimTime = BattleFBXComponent__getTagTime(this, Item, startEvent, v66);
          BattleFBXComponent__AnimUpdate(this, 0.0, v67);
        }
      }
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
    if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      goto LABEL_37;
    v54 = this->fields.simpleAnimationComponent;
    if ( !v54 )
      sub_1BCAA3C(0LL, v53);
    SimpleAnimation__Play_64539336(v54, Item, 0LL);
    v56 = this->fields.simpleAnimationComponent;
    if ( !v56 )
      sub_1BCAA3C(0LL, v55);
    if ( SimpleAnimation__get_Item(v56, Item, 0LL) )
    {
      v58 = this->fields.simpleAnimationComponent;
      if ( !v58 )
        sub_1BCAA3C(0LL, v57);
      v59 = SimpleAnimation__get_Item(v58, Item, 0LL);
      v61 = v59;
      if ( !v59 )
        sub_1BCAA3C(0LL, v60);
      klass = v59->klass;
      v63 = *(unsigned __int16 *)(&v59->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v59->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v63;
          p_offset += 2;
          if ( !v63 )
            goto LABEL_34;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
      }
      else
      {
LABEL_34:
        p_method = sub_1C1C7C0(v59, SimpleAnimation_State_TypeInfo, 8LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v61, *(_QWORD *)(p_method + 8), 0.0);
      goto LABEL_37;
    }
  }
}


void __fastcall BattleFBXComponent__setCurrentAnimTime(
        BattleFBXComponent_o *this,
        float time,
        const MethodInfo *method)
{
  this->fields.currentAnimTime = time;
}


void __fastcall BattleFBXComponent__setTimeScale(BattleFBXComponent_o *this, float timescale, const MethodInfo *method)
{
  this->fields.timescale = timescale;
}


void __fastcall BattleFBXComponent__set_RootTransform(
        BattleFBXComponent_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  UnityEngine_Component_o *rootTransform; // x0
  Il2CppObject *Component_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B187E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, value, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v10, v11);
    byte_4B187E2 = 1;
  }
  this->fields.rootTransform = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rootTransform,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)rootTransform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___),
        this->fields.animationComponent = (struct UnityEngine_Animation_o *)Component_object,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.animationComponent,
          (int64_t)Component_object,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform) == 0LL)
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL )
  {
    sub_1BCAA3C(rootTransform, v12);
  }
  v21 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)rootTransform,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimationComponent,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall BattleFBXComponent__setupAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *rootTransform; // x20
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *v12; // x0
  const MethodInfo *v13; // x2
  BattleFBXComponent_c *v14; // x0
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Transform_o *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4B187EF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_18145/*"chr"*/, v6, v7);
    byte_4B187EF = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(rootTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      sub_1BCAA3C(0LL, v11);
    v12 = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_18145/*"chr"*/, 0LL);
    BattleFBXComponent__set_RootTransform(this, v12, v13);
    v14 = BattleFBXComponent_TypeInfo;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v9);
      v14 = BattleFBXComponent_TypeInfo;
    }
    v14->static_fields->EnableEvent = 0;
  }
  v15 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
  {
    v16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    BattleFBXComponent__set_RootTransform(this, v16, v17);
  }
}


void __fastcall BattleFBXComponent__stopAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  this->fields.isStop = 1;
}


void __fastcall BattleFBXComponent__stopAnimationCheck(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B187F5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_2397/*"AnimationCheck"*/, method, v2);
    byte_4B187F5 = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_70140444(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2397/*"AnimationCheck"*/,
    0LL);
}


void __fastcall BattleFBXComponent__stopParticle(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *gameObject; // x0
  __int64 v5; // x1
  int v6; // w8
  void *v7; // x19
  unsigned int v8; // w20

  if ( (byte_4B187EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method, v2);
    byte_4B187EE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_12;
  v6 = *((_DWORD *)gameObject + 6);
  v7 = gameObject;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1BCAA44(gameObject, v5);
      gameObject = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !gameObject )
        break;
      UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)gameObject, 0LL);
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return;
    }
LABEL_12:
    sub_1BCAA3C(gameObject, v5);
  }
}


void __fastcall BattleFBXComponent_AnimEvent___ctor(BattleFBXComponent_AnimEvent_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFBXComponent__AnimationCheck_d__69___ctor(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleFBXComponent__AnimationCheck_d__69__MoveNext(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleFBXComponent__AnimationCheck_d__69_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleFBXComponent_o *_4__this; // x21
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  PartyOrganizationUtility_o *v19; // x19
  int v20; // w8
  Il2CppObject *animename; // x19
  struct BattleFBXComponent_onEventDelegate_o *Complete; // x8

  v3 = this;
  if ( (byte_4B1880D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v4, v5);
    this = (BattleFBXComponent__AnimationCheck_d__69_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1880D = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_31;
      animationComponent = (UnityEngine_Object_o *)_4__this->fields.animationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
LABEL_13:
        this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.animationComponent;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v3->fields.__2__current = 0LL;
            p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
            sub_1BCA784(p__2__current, 0LL, v11, v12, v13, v14, v15, v16);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return result;
          }
          goto LABEL_20;
        }
        goto LABEL_31;
      }
      simpleAnimationComponent = (UnityEngine_Object_o *)_4__this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
        goto LABEL_20;
LABEL_17:
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.simpleAnimationComponent;
      if ( !this )
LABEL_31:
        sub_1BCAA3C(this, method);
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0LL) )
      {
LABEL_20:
        v3->fields.__2__current = 0LL;
        v19 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v19, 0LL, v11, v12, v13, v14, v15, v16);
        v20 = 3;
        goto LABEL_21;
      }
      v3->fields.__2__current = 0LL;
      v19 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(v19, 0LL, v11, v12, v13, v14, v15, v16);
      v20 = 2;
LABEL_21:
      *(_DWORD *)&v19[-1].fields._IsQuestStartMenuMode_k__BackingField = v20;
      return 1;
    case 1:
      v3->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_13;
      goto LABEL_31;
    case 2:
      v3->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_31;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_31;
      if ( !_4__this->fields.Complete )
        return 0;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      animename = (Il2CppObject *)_4__this->fields.animename;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_28;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_31;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                             (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                             animename,
                                                             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
      animename = (Il2CppObject *)this;
LABEL_28:
      Complete = _4__this->fields.Complete;
      if ( !Complete )
        goto LABEL_31;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))Complete->fields.m_target)(
        Complete->fields.original_method_info,
        animename,
        *(_QWORD *)&Complete->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleFBXComponent__AnimationCheck_d__69__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleFBXComponent__AnimationCheck_d__69__System_Collections_IEnumerator_Reset(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleFBXComponent__AnimationCheck_d__69_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleFBXComponent__AnimationCheck_d__69__System_Collections_IEnumerator_get_Current(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleFBXComponent__AnimationCheck_d__69__System_IDisposable_Dispose(
        BattleFBXComponent__AnimationCheck_d__69_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleFBXComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1880A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFBXComponent___c_TypeInfo, v1, v2);
    byte_4B1880A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleFBXComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleFBXComponent___c_TypeInfo->static_fields->__9 = (struct BattleFBXComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleFBXComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleFBXComponent___c___ctor(BattleFBXComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFBXComponent___c___inSetEvolutionLevel_b__56_0(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x20
  BattleFBXComponent___c_o *v6; // x19

  if ( (byte_4B1880B & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1BCA7E0(&BattleFBXComponent_TypeInfo, p, method);
    byte_4B1880B = 1;
  }
  if ( !p )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, p);
  if ( !v4 )
    goto LABEL_15;
  if ( System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    return 1;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v6 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, p);
  if ( !v6 )
LABEL_15:
    sub_1BCAA3C(this, p);
  return System_String__Contains((System_String_o *)v6, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL);
}


bool __fastcall BattleFBXComponent___c___inSetEvolutionLevel_b__56_1(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  BattleFBXComponent___c_o *v4; // x19

  if ( (byte_4B1880C & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_1BCA7E0(&BattleFBXComponent_TypeInfo, p, method);
    byte_4B1880C = 1;
  }
  if ( !p )
    goto LABEL_9;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = this;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, p);
  if ( !v4 )
LABEL_9:
    sub_1BCAA3C(this, p);
  return System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->enItemMarker, 0LL);
}


void __fastcall BattleFBXComponent___c__DisplayClass79_0___ctor(
        BattleFBXComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFBXComponent___c__DisplayClass79_0___IsYTransparenceShader_b__0(
        BattleFBXComponent___c__DisplayClass79_0_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  System_String_o *skinShaderName; // x0

  skinShaderName = this->fields.skinShaderName;
  if ( !skinShaderName )
    sub_1BCAA3C(0LL, shaderName);
  return System_String__StartsWith(skinShaderName, shaderName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent_onEventDelegate___ctor(
        BattleFBXComponent_onEventDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0F45C;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A0F43C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F3F4;
}


System_IAsyncResult_o *__fastcall BattleFBXComponent_onEventDelegate__BeginInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_String_o *n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = n;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall BattleFBXComponent_onEventDelegate__EndInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall BattleFBXComponent_onEventDelegate__Invoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    n,
    *(_QWORD *)&this->fields.extra_arg);
}