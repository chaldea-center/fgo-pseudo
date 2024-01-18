void __fastcall BattleFBXComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  struct BattleFBXComponent_StaticFields *static_fields; // x0
  System_Int32_array **v29; // x1
  struct BattleFBXComponent_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct BattleFBXComponent_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct BattleFBXComponent_StaticFields *v46; // x0
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct BattleFBXComponent_StaticFields *v54; // x0
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct BattleFBXComponent_StaticFields *v62; // x0
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct BattleFBXComponent_StaticFields *v70; // x0
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct BattleFBXComponent_StaticFields *v78; // x0
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x0
  __int64 v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x19
  __int64 v95; // x0
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x1
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x1
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x1
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x1
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x1
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x1
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x1
  struct BattleFBXComponent_StaticFields *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  __int64 v174; // x0
  __int64 v175; // x0

  if ( (byte_4186921 & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v1);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_7158/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v9);
    sub_B2C35C(&StringLiteral_6342/*"FGO_CH/AlphaBlendSingle"*/, v10);
    sub_B2C35C(&StringLiteral_18327/*"en_weapon_"*/, v11);
    sub_B2C35C(&StringLiteral_6345/*"FGO_CH/Base"*/, v12);
    sub_B2C35C(&StringLiteral_16153/*"_level"*/, v13);
    sub_B2C35C(&StringLiteral_6341/*"FGO_Battle/Particle/Base-Stencil"*/, v14);
    sub_B2C35C(&StringLiteral_6340/*"FGO_Battle/Particle/Base"*/, v15);
    sub_B2C35C(&StringLiteral_6346/*"FGO_CH/SingleFlat"*/, v16);
    sub_B2C35C(&StringLiteral_7157/*"Hidden/Particle/MultiplyAdd1Pass"*/, v17);
    sub_B2C35C(&StringLiteral_18323/*"en_item_"*/, v18);
    sub_B2C35C(&StringLiteral_17422/*"chrnode_"*/, v19);
    sub_B2C35C(&StringLiteral_20072/*"joint_sideflip_"*/, v20);
    sub_B2C35C(&StringLiteral_7155/*"Hidden/Particle/MultiplyAdd"*/, v21);
    sub_B2C35C(&StringLiteral_2116/*"Assets/AssetStorages/NoblePhantasm/"*/, v22);
    sub_B2C35C(&StringLiteral_7156/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v23);
    sub_B2C35C(&StringLiteral_6343/*"FGO_CH/AlphaBlendSingleFlat"*/, v24);
    sub_B2C35C(&StringLiteral_21518/*"prefabn_"*/, v25);
    sub_B2C35C(&StringLiteral_6344/*"FGO_CH/AlphaBlendSingleFlat_r1"*/, v26);
    sub_B2C35C(&StringLiteral_2117/*"Assets/AssetStorages/Servants/"*/, v27);
    byte_4186921 = 1;
  }
  BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
  BattleFBXComponent_TypeInfo->static_fields->animFps = 30.0;
  static_fields = BattleFBXComponent_TypeInfo->static_fields;
  v29 = (System_Int32_array **)StringLiteral_16153/*"_level"*/;
  static_fields->levelMarker = (struct System_String_o *)StringLiteral_16153/*"_level"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->levelMarker, v29, v2, v3, v4, v5, v6, v7);
  v30 = BattleFBXComponent_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_21518/*"prefabn_"*/;
  v30->prefabMarker = (struct System_String_o *)StringLiteral_21518/*"prefabn_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v30->prefabMarker, v31, v32, v33, v34, v35, v36, v37);
  v38 = BattleFBXComponent_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_17422/*"chrnode_"*/;
  v38->chrnodeMarker = (struct System_String_o *)StringLiteral_17422/*"chrnode_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v38->chrnodeMarker, v39, v40, v41, v42, v43, v44, v45);
  v46 = BattleFBXComponent_TypeInfo->static_fields;
  v47 = (System_Int32_array **)StringLiteral_20072/*"joint_sideflip_"*/;
  v46->sideflipMarker = (struct System_String_o *)StringLiteral_20072/*"joint_sideflip_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->sideflipMarker, v47, v48, v49, v50, v51, v52, v53);
  v54 = BattleFBXComponent_TypeInfo->static_fields;
  v55 = (System_Int32_array **)StringLiteral_18323/*"en_item_"*/;
  v54->enItemMarker = (struct System_String_o *)StringLiteral_18323/*"en_item_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v54->enItemMarker, v55, v56, v57, v58, v59, v60, v61);
  v62 = BattleFBXComponent_TypeInfo->static_fields;
  v63 = (System_Int32_array **)StringLiteral_18327/*"en_weapon_"*/;
  v62->enWeaponMarker = (struct System_String_o *)StringLiteral_18327/*"en_weapon_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v62->enWeaponMarker, v63, v64, v65, v66, v67, v68, v69);
  v70 = BattleFBXComponent_TypeInfo->static_fields;
  v71 = (System_Int32_array **)StringLiteral_2116/*"Assets/AssetStorages/NoblePhantasm/"*/;
  v70->npPathHead = (struct System_String_o *)StringLiteral_2116/*"Assets/AssetStorages/NoblePhantasm/"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v70->npPathHead, v71, v72, v73, v74, v75, v76, v77);
  v78 = BattleFBXComponent_TypeInfo->static_fields;
  v79 = (System_Int32_array **)StringLiteral_2117/*"Assets/AssetStorages/Servants/"*/;
  v78->svtPathHead = (struct System_String_o *)StringLiteral_2117/*"Assets/AssetStorages/Servants/"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v78->svtPathHead, v79, v80, v81, v82, v83, v84, v85);
  v86 = sub_B2C374(string___TypeInfo, 11LL);
  if ( !v86 )
    sub_B2C434(0LL, v87);
  v94 = (System_Int32_array **)v86;
  v95 = StringLiteral_6345/*"FGO_CH/Base"*/;
  if ( StringLiteral_6345/*"FGO_CH/Base"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_6345/*"FGO_CH/Base"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v96 = (System_Int32_array **)StringLiteral_6345/*"FGO_CH/Base"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( !*((_DWORD *)v94 + 6) )
    goto LABEL_60;
  v94[4] = (System_Int32_array *)v96;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 4), v96, v88, v89, v90, v91, v92, v93);
  v95 = StringLiteral_6342/*"FGO_CH/AlphaBlendSingle"*/;
  if ( StringLiteral_6342/*"FGO_CH/AlphaBlendSingle"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_6342/*"FGO_CH/AlphaBlendSingle"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v103 = (System_Int32_array **)StringLiteral_6342/*"FGO_CH/AlphaBlendSingle"*/;
  }
  else
  {
    v103 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 1u )
    goto LABEL_60;
  v94[5] = (System_Int32_array *)v103;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 5), v103, v97, v98, v99, v100, v101, v102);
  v95 = StringLiteral_6340/*"FGO_Battle/Particle/Base"*/;
  if ( StringLiteral_6340/*"FGO_Battle/Particle/Base"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_6340/*"FGO_Battle/Particle/Base"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v110 = (System_Int32_array **)StringLiteral_6340/*"FGO_Battle/Particle/Base"*/;
  }
  else
  {
    v110 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 2u )
    goto LABEL_60;
  v94[6] = (System_Int32_array *)v110;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 6), v110, v104, v105, v106, v107, v108, v109);
  v95 = StringLiteral_7155/*"Hidden/Particle/MultiplyAdd"*/;
  if ( StringLiteral_7155/*"Hidden/Particle/MultiplyAdd"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_7155/*"Hidden/Particle/MultiplyAdd"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v117 = (System_Int32_array **)StringLiteral_7155/*"Hidden/Particle/MultiplyAdd"*/;
  }
  else
  {
    v117 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 3u )
    goto LABEL_60;
  v94[7] = (System_Int32_array *)v117;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 7), v117, v111, v112, v113, v114, v115, v116);
  v95 = StringLiteral_7157/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  if ( StringLiteral_7157/*"Hidden/Particle/MultiplyAdd1Pass"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_7157/*"Hidden/Particle/MultiplyAdd1Pass"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v124 = (System_Int32_array **)StringLiteral_7157/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  }
  else
  {
    v124 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 4u )
    goto LABEL_60;
  v94[8] = (System_Int32_array *)v124;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 8), v124, v118, v119, v120, v121, v122, v123);
  v95 = StringLiteral_6343/*"FGO_CH/AlphaBlendSingleFlat"*/;
  if ( StringLiteral_6343/*"FGO_CH/AlphaBlendSingleFlat"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_6343/*"FGO_CH/AlphaBlendSingleFlat"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v131 = (System_Int32_array **)StringLiteral_6343/*"FGO_CH/AlphaBlendSingleFlat"*/;
  }
  else
  {
    v131 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 5u )
    goto LABEL_60;
  v94[9] = (System_Int32_array *)v131;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 9), v131, v125, v126, v127, v128, v129, v130);
  v95 = StringLiteral_6344/*"FGO_CH/AlphaBlendSingleFlat_r1"*/;
  if ( StringLiteral_6344/*"FGO_CH/AlphaBlendSingleFlat_r1"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_6344/*"FGO_CH/AlphaBlendSingleFlat_r1"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v138 = (System_Int32_array **)StringLiteral_6344/*"FGO_CH/AlphaBlendSingleFlat_r1"*/;
  }
  else
  {
    v138 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 6u )
    goto LABEL_60;
  v94[10] = (System_Int32_array *)v138;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 10), v138, v132, v133, v134, v135, v136, v137);
  v95 = StringLiteral_6341/*"FGO_Battle/Particle/Base-Stencil"*/;
  if ( StringLiteral_6341/*"FGO_Battle/Particle/Base-Stencil"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_6341/*"FGO_Battle/Particle/Base-Stencil"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v145 = (System_Int32_array **)StringLiteral_6341/*"FGO_Battle/Particle/Base-Stencil"*/;
  }
  else
  {
    v145 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 7u )
    goto LABEL_60;
  v94[11] = (System_Int32_array *)v145;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 11), v145, v139, v140, v141, v142, v143, v144);
  v95 = StringLiteral_7156/*"Hidden/Particle/MultiplyAdd-Stencil"*/;
  if ( StringLiteral_7156/*"Hidden/Particle/MultiplyAdd-Stencil"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_7156/*"Hidden/Particle/MultiplyAdd-Stencil"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v152 = (System_Int32_array **)StringLiteral_7156/*"Hidden/Particle/MultiplyAdd-Stencil"*/;
  }
  else
  {
    v152 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 8u )
    goto LABEL_60;
  v94[12] = (System_Int32_array *)v152;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 12), v152, v146, v147, v148, v149, v150, v151);
  v95 = StringLiteral_7158/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/;
  if ( StringLiteral_7158/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_7158/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( !v95 )
      goto LABEL_61;
    v159 = (System_Int32_array **)StringLiteral_7158/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/;
  }
  else
  {
    v159 = 0LL;
  }
  if ( *((_DWORD *)v94 + 6) <= 9u )
    goto LABEL_60;
  v94[13] = (System_Int32_array *)v159;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 13), v159, v153, v154, v155, v156, v157, v158);
  v95 = StringLiteral_6346/*"FGO_CH/SingleFlat"*/;
  if ( StringLiteral_6346/*"FGO_CH/SingleFlat"*/ )
  {
    v95 = sub_B2C41C(StringLiteral_6346/*"FGO_CH/SingleFlat"*/, *(_QWORD *)&(*v94)->m_Items[9]);
    if ( v95 )
    {
      v166 = (System_Int32_array **)StringLiteral_6346/*"FGO_CH/SingleFlat"*/;
      goto LABEL_58;
    }
LABEL_61:
    v175 = sub_B2C454();
    sub_B2C400(v175, 0LL);
  }
  v166 = 0LL;
LABEL_58:
  if ( *((_DWORD *)v94 + 6) <= 0xAu )
  {
LABEL_60:
    v174 = sub_B2C460(v95);
    sub_B2C400(v174, 0LL);
  }
  v94[14] = (System_Int32_array *)v166;
  sub_B2C2F8((BattleServantConfConponent_o *)(v94 + 14), v166, v160, v161, v162, v163, v164, v165);
  v167 = BattleFBXComponent_TypeInfo->static_fields;
  v167->yTransparenceShaderNames = (struct System_String_array *)v94;
  sub_B2C2F8((BattleServantConfConponent_o *)&v167->yTransparenceShaderNames, v94, v168, v169, v170, v171, v172, v173);
}


void __fastcall BattleFBXComponent___ctor(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_4186920 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_Renderer__TypeInfo, v9);
    byte_4186920 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.RealAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.RealAnimNames,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v17,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.CommonAnimNames = (struct System_Collections_Generic_Dictionary_string__string__o *)v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.CommonAnimNames,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.timescale = 1.0;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Renderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Renderer___ctor__);
  this->fields.enableRendererList = (struct System_Collections_Generic_List_Renderer__o *)v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enableRendererList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v31,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.actorEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actorEffectDict,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *)sub_B2C42C(System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float____ctor(
    v38,
    (const MethodInfo_24EDC64 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ctor__);
  this->fields.tempMaterialPropertyDict = v38;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tempMaterialPropertyDict,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__AnimUpdate(BattleFBXComponent_o *this, float deltaTime, const MethodInfo *method)
{
  long double v3; // q8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  float v8; // s9
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v11; // x1
  __int64 wrapMode; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_Object_o *v15; // x20
  float v16; // s8
  UnityEngine_Animation_o *v17; // x8
  float v18; // s8
  float v19; // s8
  float length; // s0
  UnityEngine_Object_o *v21; // x20
  __int64 v22; // x3
  __int64 v23; // x8
  float currentAnimTime; // s8
  __int64 v25; // x20
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **v27; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  __int64 v34; // x3
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **v37; // x11
  __int64 v38; // x0
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  SimpleAnimation_State_c **v41; // x11
  __int64 v42; // x0
  __int64 v43; // x3
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  SimpleAnimation_State_c **v46; // x11
  __int64 v47; // x0
  float i; // s8
  __int64 v49; // x8
  float v50; // s8
  unsigned __int64 v51; // x10
  SimpleAnimation_State_c **v52; // x11
  __int64 v53; // x0
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  SimpleAnimation_State_c **v56; // x11
  __int64 v57; // x0
  __int64 v58; // x3
  UnityEngine_Object_o *v59; // x20
  UnityEngine_Object_o *v60; // x20
  UnityEngine_TrackedReference_o *v61; // x0
  UnityEngine_Object_o *v62; // x20
  BattleFBXComponent_c *v63; // x0
  System_String_o *currentCommonAnimName; // x20
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v66; // x24
  int currentEventIndex; // w25
  __int64 j; // x8
  BattleFBXComponent_AnimEvent_o *v69; // x20
  float time; // s0
  float v71; // s1
  bool v72; // nf
  float v73; // s1
  UnityEngine_Object_o *v74; // x21
  __int64 v75; // x3
  __int64 v76; // x8
  __int64 v77; // x21
  unsigned __int64 v78; // x10
  SimpleAnimation_State_c **v79; // x11
  __int64 v80; // x0
  _BOOL4 isDirty; // w27
  UnityEngine_Object_o *billBoard; // x21
  const MethodInfo *v83; // x2
  _BOOL4 v84; // w8
  BattleFBXComponent_c *v85; // x0
  float animFps; // s8
  UnityEngine_Object_o *v87; // x20
  float v88; // s0
  double v89; // d10
  int v90; // w21
  __int64 v91; // x3
  __int64 v92; // x8
  __int64 v93; // x20
  unsigned __int64 v94; // x10
  SimpleAnimation_State_c **v95; // x11
  __int64 v96; // x0
  __int64 v97; // x0

  v3 = *(long double *)&deltaTime;
  if ( (byte_41868FD & 1) == 0 )
  {
    sub_B2C35C(&AnimationList_TypeInfo, method);
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    byte_41868FD = 1;
  }
  v8 = this->fields.timescale * *(float *)&v3;
  if ( v8 == 0.0 || this->fields.isStop )
    return;
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rootTransform, 0LL, 0LL) || !this->fields.currentAnimName )
    return;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    wrapMode = (__int64)this->fields.animationComponent;
    if ( !wrapMode )
      goto LABEL_204;
    if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0LL) )
      return;
    wrapMode = (__int64)this->fields.animationComponent;
    if ( !wrapMode )
      goto LABEL_204;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)wrapMode,
                                               this->fields.currentAnimName,
                                               0LL);
    if ( UnityEngine_TrackedReference__op_Equality(Item, 0LL, 0LL) )
      return;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( !wrapMode )
      goto LABEL_204;
    if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)wrapMode, 0LL) )
      return;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( !wrapMode )
      goto LABEL_204;
    if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL) )
      return;
  }
  v15 = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    v21 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
      goto LABEL_107;
    wrapMode = (__int64)this->fields.simpleAnimationComponent;
    if ( wrapMode )
    {
      wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
      if ( wrapMode )
      {
        v23 = *(_QWORD *)wrapMode;
        currentAnimTime = this->fields.currentAnimTime;
        v25 = wrapMode;
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 298LL) )
        {
          v26 = 0LL;
          v27 = (SimpleAnimation_State_c **)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v26;
            v27 += 2;
            if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)wrapMode + 298LL) )
              goto LABEL_54;
          }
          v28 = v23 + 16LL * (*(_DWORD *)v27 + 14) + 312;
        }
        else
        {
LABEL_54:
          v28 = sub_AC5258(wrapMode, SimpleAnimation_State_TypeInfo, 14LL, v22);
        }
        wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
        if ( wrapMode )
        {
          if ( currentAnimTime < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
            goto LABEL_107;
          v30 = *(_QWORD *)v25;
          if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
          {
            v31 = 0LL;
            v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v31;
              v32 += 2;
              if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                goto LABEL_64;
            }
            v33 = v30 + 16LL * (*(_DWORD *)v32 + 19) + 312;
          }
          else
          {
LABEL_64:
            v33 = sub_AC5258(v25, SimpleAnimation_State_TypeInfo, 19LL, v29);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8)) & 1) != 0 )
            goto LABEL_75;
          v35 = *(_QWORD *)v25;
          if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
          {
            v36 = 0LL;
            v37 = (SimpleAnimation_State_c **)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v36;
              v37 += 2;
              if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                goto LABEL_71;
            }
            v38 = v35 + 16LL * (*(_DWORD *)v37 + 14) + 312;
          }
          else
          {
LABEL_71:
            v38 = sub_AC5258(v25, SimpleAnimation_State_TypeInfo, 14LL, v34);
          }
          wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v25, *(_QWORD *)(v38 + 8));
          if ( wrapMode )
          {
            if ( UnityEngine_Motion__get_isLooping((UnityEngine_Motion_o *)wrapMode, 0LL) )
            {
LABEL_89:
              for ( i = this->fields.currentAnimTime; ; this->fields.currentAnimTime = i )
              {
                v54 = *(_QWORD *)v25;
                if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
                {
                  v55 = 0LL;
                  v56 = (SimpleAnimation_State_c **)(*(_QWORD *)(v54 + 176) + 8LL);
                  while ( *(v56 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v55;
                    v56 += 2;
                    if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                      goto LABEL_102;
                  }
                  v57 = v54 + 16LL * (*(_DWORD *)v56 + 14) + 312;
                }
                else
                {
LABEL_102:
                  v57 = sub_AC5258(v25, SimpleAnimation_State_TypeInfo, 14LL, v34);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v25, *(_QWORD *)(v57 + 8));
                if ( !wrapMode )
                  goto LABEL_204;
                if ( i < UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL) )
                  break;
                v49 = *(_QWORD *)v25;
                v50 = this->fields.currentAnimTime;
                if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
                {
                  v51 = 0LL;
                  v52 = (SimpleAnimation_State_c **)(*(_QWORD *)(v49 + 176) + 8LL);
                  while ( *(v52 - 1) != SimpleAnimation_State_TypeInfo )
                  {
                    ++v51;
                    v52 += 2;
                    if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                      goto LABEL_94;
                  }
                  v53 = v49 + 16LL * (*(_DWORD *)v52 + 14) + 312;
                }
                else
                {
LABEL_94:
                  v53 = sub_AC5258(v25, SimpleAnimation_State_TypeInfo, 14LL, v58);
                }
                wrapMode = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v25, *(_QWORD *)(v53 + 8));
                if ( !wrapMode )
                  goto LABEL_204;
                i = v50 - UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)wrapMode, 0LL);
              }
LABEL_106:
              this->fields.currentEventIndex = 0;
              goto LABEL_107;
            }
LABEL_75:
            v39 = *(_QWORD *)v25;
            if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
            {
              v40 = 0LL;
              v41 = (SimpleAnimation_State_c **)(*(_QWORD *)(v39 + 176) + 8LL);
              while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v40;
                v41 += 2;
                if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                  goto LABEL_79;
              }
              v42 = v39 + 16LL * (*(_DWORD *)v41 + 19) + 312;
            }
            else
            {
LABEL_79:
              v42 = sub_AC5258(v25, SimpleAnimation_State_TypeInfo, 19LL, v34);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v25, *(_QWORD *)(v42 + 8)) & 1) == 0 )
              goto LABEL_175;
            v44 = *(_QWORD *)v25;
            if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
            {
              v45 = 0LL;
              v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v44 + 176) + 8LL);
              while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v45;
                v46 += 2;
                if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
                  goto LABEL_86;
              }
              v47 = v44 + 16LL * (*(_DWORD *)v46 + 17) + 312;
            }
            else
            {
LABEL_86:
              v47 = sub_AC5258(v25, SimpleAnimation_State_TypeInfo, 17LL, v43);
            }
            if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v47)(v25, *(_QWORD *)(v47 + 8)) != 2 )
            {
LABEL_175:
              wrapMode = (__int64)this->fields.simpleAnimationComponent;
              if ( wrapMode )
              {
                SimpleAnimation__Stop((SimpleAnimation_o *)wrapMode, 0LL);
                return;
              }
              goto LABEL_204;
            }
            goto LABEL_89;
          }
        }
      }
    }
LABEL_204:
    sub_B2C434(wrapMode, v11);
  }
  wrapMode = (__int64)this->fields.animationComponent;
  if ( !wrapMode )
    goto LABEL_204;
  v16 = this->fields.currentAnimTime;
  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                        (UnityEngine_Animation_o *)wrapMode,
                        this->fields.currentAnimName,
                        0LL);
  if ( !wrapMode )
    goto LABEL_204;
  if ( v16 >= UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
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
        v17 = this->fields.animationComponent;
        if ( (_DWORD)wrapMode == 2 )
        {
          if ( v17 )
          {
            v18 = this->fields.currentAnimTime;
            do
            {
              wrapMode = (__int64)UnityEngine_Animation__get_Item(v17, this->fields.currentAnimName, 0LL);
              if ( !wrapMode )
                break;
              if ( v18 < UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL) )
                goto LABEL_106;
              wrapMode = (__int64)this->fields.animationComponent;
              if ( !wrapMode )
                break;
              v19 = this->fields.currentAnimTime;
              wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                    (UnityEngine_Animation_o *)wrapMode,
                                    this->fields.currentAnimName,
                                    0LL);
              if ( !wrapMode )
                break;
              length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)wrapMode, 0LL);
              v17 = this->fields.animationComponent;
              v18 = v19 - length;
              this->fields.currentAnimTime = v18;
            }
            while ( v17 );
          }
        }
        else if ( v17 )
        {
          UnityEngine_Animation__Stop(v17, 0LL);
          return;
        }
      }
    }
    goto LABEL_204;
  }
LABEL_107:
  v59 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v59, 0LL, 0LL) && this->fields.currentAnimName )
  {
    v60 = (UnityEngine_Object_o *)this->fields.animationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
    {
      wrapMode = (__int64)this->fields.animationComponent;
      if ( !wrapMode )
        goto LABEL_204;
      if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)wrapMode, 0LL) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_204;
        v61 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                  (UnityEngine_Animation_o *)wrapMode,
                                                  this->fields.currentAnimName,
                                                  0LL);
        if ( UnityEngine_TrackedReference__op_Inequality(v61, 0LL, 0LL) )
          goto LABEL_128;
      }
    }
    v62 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
    {
      wrapMode = (__int64)this->fields.simpleAnimationComponent;
      if ( !wrapMode )
        goto LABEL_204;
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)wrapMode, 0LL) )
        return;
      wrapMode = (__int64)this->fields.simpleAnimationComponent;
      if ( !wrapMode )
        goto LABEL_204;
      if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL) )
        return;
LABEL_128:
      v63 = BattleFBXComponent_TypeInfo;
      if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v63 = BattleFBXComponent_TypeInfo;
      }
      if ( v63->static_fields->EnableEvent && this->fields.eventlist )
      {
        currentCommonAnimName = this->fields.currentCommonAnimName;
        if ( (BYTE3(AnimationList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AnimationList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
        }
        wrapMode = AnimationList__getIndex(currentCommonAnimName, 0LL);
        if ( (wrapMode & 0x80000000) == 0 )
        {
          eventlist = this->fields.eventlist;
          if ( !eventlist )
            goto LABEL_204;
          if ( (unsigned int)wrapMode >= eventlist->max_length )
          {
LABEL_205:
            v97 = sub_B2C460(wrapMode);
            sub_B2C400(v97, 0LL);
          }
          v66 = eventlist->m_Items[(int)wrapMode];
          if ( v66 )
          {
            currentEventIndex = this->fields.currentEventIndex;
            for ( j = *(_QWORD *)&v66->max_length; currentEventIndex < (int)j; ++currentEventIndex )
            {
              if ( currentEventIndex >= (unsigned int)j )
                goto LABEL_205;
              v69 = v66->m_Items[currentEventIndex];
              if ( !v69 )
                goto LABEL_204;
              time = v69->fields.time;
              v71 = this->fields.currentAnimTime;
              v72 = time < v71;
              v73 = v8 + v71;
              if ( v72 || time >= v73 )
              {
                if ( time >= v73 )
                {
                  this->fields.currentEventIndex = currentEventIndex;
                  break;
                }
              }
              else
              {
                v74 = (UnityEngine_Object_o *)this->fields.animationComponent;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
                {
                  wrapMode = (__int64)this->fields.animationComponent;
                  if ( !wrapMode )
                    goto LABEL_204;
                  wrapMode = (__int64)UnityEngine_Animation__get_Item(
                                        (UnityEngine_Animation_o *)wrapMode,
                                        this->fields.currentAnimName,
                                        0LL);
                  if ( !wrapMode )
                    goto LABEL_204;
                  UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, v69->fields.time, 0LL);
                  wrapMode = (__int64)this->fields.animationComponent;
                  if ( !wrapMode )
                    goto LABEL_204;
                  UnityEngine_Animation__Sample((UnityEngine_Animation_o *)wrapMode, 0LL);
                }
                else
                {
                  wrapMode = (__int64)this->fields.simpleAnimationComponent;
                  if ( !wrapMode )
                    goto LABEL_204;
                  wrapMode = (__int64)SimpleAnimation__get_Item(
                                        (SimpleAnimation_o *)wrapMode,
                                        this->fields.currentAnimName,
                                        0LL);
                  if ( !wrapMode )
                    goto LABEL_204;
                  v76 = *(_QWORD *)wrapMode;
                  *(float *)&v3 = v69->fields.time;
                  v77 = wrapMode;
                  if ( *(_WORD *)(*(_QWORD *)wrapMode + 298LL) )
                  {
                    v78 = 0LL;
                    v79 = (SimpleAnimation_State_c **)(*(_QWORD *)(v76 + 176) + 8LL);
                    while ( *(v79 - 1) != SimpleAnimation_State_TypeInfo )
                    {
                      ++v78;
                      v79 += 2;
                      if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)wrapMode + 298LL) )
                        goto LABEL_161;
                    }
                    v80 = v76 + 16LL * (*(_DWORD *)v79 + 4) + 312;
                  }
                  else
                  {
LABEL_161:
                    v80 = sub_AC5258(wrapMode, SimpleAnimation_State_TypeInfo, 4LL, v75);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD, long double))v80)(v77, *(_QWORD *)(v80 + 8), v3);
                  wrapMode = (__int64)this->fields.simpleAnimationComponent;
                  if ( !wrapMode )
                    goto LABEL_204;
                  SimpleAnimation__Sample((SimpleAnimation_o *)wrapMode, 0LL);
                }
                isDirty = this->fields.isDirty;
                this->fields.isDirty = 0;
                billBoard = (UnityEngine_Object_o *)this->fields.billBoard;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality(billBoard, 0LL, 0LL) )
                {
                  wrapMode = (__int64)this->fields.billBoard;
                  if ( !wrapMode )
                    goto LABEL_204;
                  BillBoard__UpdateBillboard((BillBoard_o *)wrapMode, 0LL);
                }
                BattleFBXComponent__OnAnimEvent(this, v69, v83);
                v84 = this->fields.isDirty;
                this->fields.isDirty = v84 || isDirty;
                if ( v84 || isDirty )
                {
                  if ( !v84 )
                    this->fields.currentAnimTime = v69->fields.time;
                  this->fields.isDirty = 0;
                  return;
                }
                j = *(_QWORD *)&v66->max_length;
              }
            }
          }
        }
      }
      v85 = BattleFBXComponent_TypeInfo;
      if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        v85 = BattleFBXComponent_TypeInfo;
      }
      animFps = v85->static_fields->animFps;
      v87 = (UnityEngine_Object_o *)this->fields.animationComponent;
      v88 = animFps * this->fields.currentAnimTime;
      if ( v88 == INFINITY )
        v89 = -v88;
      else
        v89 = v88;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v90 = (int)v89;
      if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
      {
        wrapMode = (__int64)this->fields.animationComponent;
        if ( !wrapMode )
          goto LABEL_204;
        wrapMode = (__int64)UnityEngine_Animation__get_Item(
                              (UnityEngine_Animation_o *)wrapMode,
                              this->fields.currentAnimName,
                              0LL);
        if ( !wrapMode )
          goto LABEL_204;
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)wrapMode, (float)v90 / animFps, 0LL);
      }
      else
      {
        wrapMode = (__int64)this->fields.simpleAnimationComponent;
        if ( !wrapMode )
          goto LABEL_204;
        wrapMode = (__int64)SimpleAnimation__get_Item((SimpleAnimation_o *)wrapMode, this->fields.currentAnimName, 0LL);
        if ( !wrapMode )
          goto LABEL_204;
        v92 = *(_QWORD *)wrapMode;
        v93 = wrapMode;
        *(float *)&v3 = (float)v90 / animFps;
        if ( *(_WORD *)(*(_QWORD *)wrapMode + 298LL) )
        {
          v94 = 0LL;
          v95 = (SimpleAnimation_State_c **)(*(_QWORD *)(v92 + 176) + 8LL);
          while ( *(v95 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v94;
            v95 += 2;
            if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)wrapMode + 298LL) )
              goto LABEL_196;
          }
          v96 = v92 + 16LL * (*(_DWORD *)v95 + 4) + 312;
        }
        else
        {
LABEL_196:
          v96 = sub_AC5258(wrapMode, SimpleAnimation_State_TypeInfo, 4LL, v91);
        }
        (*(void (__fastcall **)(__int64, _QWORD, long double))v96)(v93, *(_QWORD *)(v96 + 8), v3);
      }
      this->fields.currentAnimTime = v8 + this->fields.currentAnimTime;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall BattleFBXComponent__AnimationCheck(
        BattleFBXComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418690E & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent__AnimationCheck_d__69_TypeInfo, method);
    byte_418690E = 1;
  }
  v3 = sub_B2C42C(BattleFBXComponent__AnimationCheck_d__69_TypeInfo);
  BattleFBXComponent__AnimationCheck_d__69___ctor((BattleFBXComponent__AnimationCheck_d__69_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  int32_t ServantId; // w21
  int32_t LimitCount; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4186902 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186902 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_srcLineSprite, 0LL);
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)Component_srcLineSprite, 0LL);
      BattleFBXComponent__SetEvolutionLevel(this, ServantId, LimitCount, v9);
      return;
    }
LABEL_11:
    sub_B2C434(gameObject, v5);
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
  UnityEngine_Object_o *v7; // x20
  BattleFBXComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *name; // x23
  System_String_o *rootTransform; // x23
  UnityEngine_Object_o *Manager__loadActorEffectFromActor; // x21
  bool v20; // w8
  UnityEngine_Object_o *v21; // x21
  bool v22; // w8
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v31; // x23
  int v32; // s0
  UnityEngine_Transform_o *v35; // x23
  int v36; // s0
  UnityEngine_Transform_o *v39; // x23
  int v40; // s0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *actorEffectDict; // x22
  System_String_o *v44; // x0
  BattleFBXComponent_o *v45; // x20
  bool v46; // w8
  System_Xml_XmlQualifiedName_o *v47; // x1
  BattleFBXComponent_o *v48; // x19
  __int64 v49; // x0

  v7 = (UnityEngine_Object_o *)node;
  v8 = this;
  if ( (byte_4186904 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, node);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v15);
    this = (BattleFBXComponent_o *)sub_B2C35C(&StringLiteral_16131/*"_aDd"*/, v16);
    byte_4186904 = 1;
  }
  if ( !v7 )
    goto LABEL_38;
  name = UnityEngine_Object__get_name(v7, 0LL);
  this = (BattleFBXComponent_o *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_38;
  node = (UnityEngine_Transform_o *)this;
  if ( !LODWORD(this->fields.RealAnimNames) )
    goto LABEL_39;
  LOWORD(this->fields.CommonAnimNames) = 95;
  if ( !name )
    goto LABEL_38;
  this = (BattleFBXComponent_o *)System_String__Split(name, (System_Char_array *)this, 0LL);
  if ( !this )
    goto LABEL_38;
  if ( LODWORD(this->fields.RealAnimNames) <= 1 )
  {
LABEL_39:
    v49 = sub_B2C460(this);
    sub_B2C400(v49, 0LL);
  }
  rootTransform = (System_String_o *)this->fields.rootTransform;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadActorEffectFromActor = (UnityEngine_Object_o *)ServantAssetLoadManager__loadActorEffectFromActor(
                                                                svtId,
                                                                limitcount,
                                                                0,
                                                                rootTransform,
                                                                0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality(Manager__loadActorEffectFromActor, 0LL, 0LL);
  this = 0LL;
  if ( v20 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadActorEffectFromActor,
                                    (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v22 = UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
    this = 0LL;
    if ( v22 )
    {
      if ( v21 )
      {
        v23 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                (UnityEngine_GameObject_o *)v21,
                (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_ObjectScaleEnabler___);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21, 0, 0LL);
        if ( v23 )
        {
          v23->fields.callbackQueue = (struct System_Collections_Generic_Queue_Tuple_SendOrPostCallback__object___o *)v7;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v23->fields.callbackQueue,
            (System_Int32_array **)v7,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0LL);
          this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)v7, 0LL);
          if ( this )
          {
            this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
            if ( transform )
            {
              UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
              v31 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0LL);
              *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
              if ( v31 )
              {
                UnityEngine_Transform__set_localPosition(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
                v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0LL);
                *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_zero(0LL);
                if ( v35 )
                {
                  UnityEngine_Transform__set_localEulerAngles(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
                  v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v21, 0LL);
                  *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
                  if ( v39 )
                  {
                    UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
                    ObjectScaleEnabler__OnUpdate((ObjectScaleEnabler_o *)v23, 0LL);
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v21, 1, 0LL);
                    this = (BattleFBXComponent_o *)v8->fields.PrefabNodes;
                    if ( this )
                    {
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
                        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
                      actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.actorEffectDict;
                      this = (BattleFBXComponent_o *)UnityEngine_Object__get_name(v7, 0LL);
                      if ( actorEffectDict )
                      {
                        if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                               actorEffectDict,
                               (System_Xml_XmlQualifiedName_o *)this,
                               (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
                        {
                          v44 = UnityEngine_Object__get_name(v7, 0LL);
                          this = (BattleFBXComponent_o *)System_String__Concat_44305532(
                                                           v44,
                                                           (System_String_o *)StringLiteral_16131/*"_aDd"*/,
                                                           0LL);
                          if ( v8->fields.actorEffectDict )
                          {
                            v45 = this;
                            v46 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.actorEffectDict,
                                    (System_Xml_XmlQualifiedName_o *)this,
                                    (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                            this = (BattleFBXComponent_o *)v21;
                            if ( v46 )
                              return (UnityEngine_GameObject_o *)this;
                            this = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                            if ( this )
                            {
                              v47 = (System_Xml_XmlQualifiedName_o *)v45;
LABEL_36:
                              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                v47,
                                (System_Xml_Schema_XmlSchemaObject_o *)v21,
                                (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                              return (UnityEngine_GameObject_o *)v21;
                            }
                          }
                        }
                        else
                        {
                          v48 = (BattleFBXComponent_o *)v8->fields.actorEffectDict;
                          this = (BattleFBXComponent_o *)UnityEngine_Object__get_name(v7, 0LL);
                          if ( v48 )
                          {
                            v47 = (System_Xml_XmlQualifiedName_o *)this;
                            this = v48;
                            goto LABEL_36;
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
LABEL_38:
      sub_B2C434(this, node);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  Il2CppObject *current; // x20
  __int64 v10; // x1
  struct System_Collections_Generic_List_GameObject__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186901 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4186901 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  PrefabNodes = this->fields.PrefabNodes;
  if ( PrefabNodes )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PrefabNodes,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v11 = this->fields.PrefabNodes;
    if ( !v11 )
      sub_B2C434(0LL, v10);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *PrefabNodes; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *transform; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  _DWORD *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  int v22; // w19
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4186912 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, name);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&StringLiteral_609/*"(Clone)"*/, v8);
    byte_4186912 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  PrefabNodes = this->fields.PrefabNodes;
  if ( !PrefabNodes )
    sub_B2C434(0LL, name);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PrefabNodes,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v10 )
      break;
    current = v25.fields.current;
    if ( !v25.fields.current )
      sub_B2C434(v10, v11);
    transform = (UnityEngine_Object_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)v25.fields.current,
                                          0LL);
    if ( !transform )
      sub_B2C434(0LL, v14);
    v15 = UnityEngine_Object__get_name(transform, 0LL);
    v17 = v15;
    if ( !v15 )
      sub_B2C434(0LL, v16);
    v18 = StringLiteral_609/*"(Clone)"*/;
    v19 = System_String__EndsWith(v15, (System_String_o *)StringLiteral_609/*"(Clone)"*/, 0LL);
    if ( v19 )
    {
      if ( !v18 )
        sub_B2C434(v19, v20);
      v17 = System_String__Substring_44369268(v17, 0, v17->fields.m_stringLength - v18[4], 0LL);
      if ( !v17 )
        sub_B2C434(0LL, v21);
    }
    if ( System_String__Equals_44292872(v17, name, 0LL) )
    {
      v22 = 3;
      goto LABEL_15;
    }
  }
  current = 0LL;
  v22 = 1;
LABEL_15:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( (unsigned int)(v22 + 1) >> 2 )
    return (UnityEngine_GameObject_o *)current;
  else
    return 0LL;
}


System_String_o *__fastcall BattleFBXComponent__GetRealAnimName(
        BattleFBXComponent_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  System_Type_o *v3; // x19
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v8; // x0

  v3 = (System_Type_o *)targetName;
  if ( (byte_418691D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    byte_418691D = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( RealAnimNames
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)RealAnimNames,
         (System_Xml_XmlQualifiedName_o *)v3,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v8 = this->fields.RealAnimNames;
    if ( !v8 )
      sub_B2C434(0LL, v7);
    return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                                v3,
                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  return (System_String_o *)v3;
}


void __fastcall BattleFBXComponent__InitAnimNameDict(BattleFBXComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0

  if ( (byte_41868FB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Clear__, method);
    byte_41868FB = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)RealAnimNames,
          (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (RealAnimNames = this->fields.CommonAnimNames) == 0LL) )
  {
    sub_B2C434(RealAnimNames, method);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)RealAnimNames,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
}


bool __fastcall BattleFBXComponent__IsYTransparenceShader(BattleFBXComponent_o *this, const MethodInfo *method)
{
  BattleFBXComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_Renderer__o *enableRendererList; // x8
  unsigned __int64 v12; // x23
  __int64 v13; // x20
  struct System_Collections_Generic_List_Renderer__o *v14; // x21
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Object_o *sharedMaterial; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleFBXComponent_c *v23; // x0
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *yTransparenceShaderNames; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x22

  v2 = this;
  if ( (byte_4186915 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_string____67380632, method);
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_string__bool___ctor__, v4);
    sub_B2C35C(&System_Func_string__bool__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Item__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_BattleFBXComponent___c__DisplayClass79_0__IsYTransparenceShader_b__0__, v9);
    this = (BattleFBXComponent_o *)sub_B2C35C(&BattleFBXComponent___c__DisplayClass79_0_TypeInfo, v10);
    byte_4186915 = 1;
  }
  enableRendererList = v2->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_26:
    sub_B2C434(this, method);
  v12 = 0LL;
  while ( 1 )
  {
    if ( (__int64)v12 >= enableRendererList->fields._size )
      return 0;
    v13 = sub_B2C42C(BattleFBXComponent___c__DisplayClass79_0_TypeInfo);
    BattleFBXComponent___c__DisplayClass79_0___ctor((BattleFBXComponent___c__DisplayClass79_0_o *)v13, 0LL);
    v14 = v2->fields.enableRendererList;
    if ( !v14 )
      goto LABEL_26;
    if ( v12 >= (unsigned int)v14->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v15 = (UnityEngine_Object_o *)v14->fields._items->m_Items[v12];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v15 )
        goto LABEL_26;
      sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                 (UnityEngine_Renderer_o *)v15,
                                                 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Equality(sharedMaterial, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleFBXComponent_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)v15, 0LL);
        if ( !this )
          goto LABEL_26;
        this = (BattleFBXComponent_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)this, 0LL);
        if ( !this )
          goto LABEL_26;
        this = (BattleFBXComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        if ( !v13 )
          goto LABEL_26;
        *(_QWORD *)(v13 + 16) = this;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v13 + 16),
          (System_Int32_array **)this,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        v23 = BattleFBXComponent_TypeInfo;
        if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
          v23 = BattleFBXComponent_TypeInfo;
        }
        yTransparenceShaderNames = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v23->static_fields->yTransparenceShaderNames;
        v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_string__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v25,
          (Il2CppObject *)v13,
          Method_BattleFBXComponent___c__DisplayClass79_0__IsYTransparenceShader_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_string__bool___ctor__);
        this = (BattleFBXComponent_o *)BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                         yTransparenceShaderNames,
                                         (System_Func_T__bool__o *)v25,
                                         (const MethodInfo_1726758 *)Method_BasicHelper_Any_string____67380632);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
    }
    enableRendererList = v2->fields.enableRendererList;
    ++v12;
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
  BattleFBXComponent_onEventDelegate_o *OnEvent; // x0

  if ( (byte_41868FF & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent_TypeInfo, ev);
    byte_41868FF = 1;
  }
  v5 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v5 = BattleFBXComponent_TypeInfo;
  }
  if ( v5->static_fields->EnableEvent )
  {
    OnEvent = this->fields.OnEvent;
    if ( OnEvent )
    {
      if ( !ev )
        sub_B2C434(OnEvent, ev);
      BattleFBXComponent_onEventDelegate__Invoke(OnEvent, ev->fields.tag, 0LL);
    }
  }
}


void __fastcall BattleFBXComponent__OnAnimEvent_23064432(
        BattleFBXComponent_o *this,
        UnityEngine_AnimationEvent_o *ev,
        const MethodInfo *method)
{
  UnityEngine_AnimationEvent_o *v3; // x20
  __int64 v5; // x1
  UnityEngine_AnimationEvent_o *v6; // x0
  System_String_o *stringParameter; // x20
  BattleFBXComponent_onEventDelegate_o *OnEvent; // x8
  __int64 v9; // x0

  v3 = ev;
  if ( (byte_418690F & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent_TypeInfo, ev);
    sub_B2C35C(&char___TypeInfo, v5);
    byte_418690F = 1;
  }
  v6 = (UnityEngine_AnimationEvent_o *)BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v6 = (UnityEngine_AnimationEvent_o *)BattleFBXComponent_TypeInfo;
  }
  if ( v6[1].fields.m_StateSender->klass )
  {
    if ( v3 )
    {
      stringParameter = UnityEngine_AnimationEvent__get_stringParameter(v3, 0LL);
      v6 = (UnityEngine_AnimationEvent_o *)sub_B2C374(char___TypeInfo, 1LL);
      if ( v6 )
      {
        ev = v6;
        if ( !LODWORD(v6->fields.m_FunctionName) )
          goto LABEL_17;
        LOWORD(v6->fields.m_StringParameter) = 58;
        if ( !stringParameter )
          goto LABEL_16;
        v6 = (UnityEngine_AnimationEvent_o *)System_String__Split(stringParameter, (System_Char_array *)v6, 0LL);
        if ( !v6 )
          goto LABEL_16;
        if ( !LODWORD(v6->fields.m_FunctionName) )
        {
LABEL_17:
          v9 = sub_B2C460(v6);
          sub_B2C400(v9, 0LL);
        }
        OnEvent = this->fields.OnEvent;
        if ( OnEvent )
        {
          BattleFBXComponent_onEventDelegate__Invoke(OnEvent, v6->fields.m_StringParameter, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_B2C434(v6, ev);
  }
}


void __fastcall BattleFBXComponent__OnEnable(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *animename; // x0
  const MethodInfo *v5; // x2
  System_String_o *v6; // x1
  BattleFBXComponent_o *v7; // x0
  System_String_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_o *v12; // x22
  __int64 v13; // x20
  __int64 v14; // x21
  int v15; // w8
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4186911 & 1) == 0 )
  {
    sub_B2C35C(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v3);
    byte_4186911 = 1;
  }
  v16 = 0;
  animename = this->fields.animename;
  if ( animename )
  {
    if ( System_String__StartsWith(animename, (System_String_o *)StringLiteral_23190/*"wait"*/, 0LL) )
    {
      v6 = (System_String_o *)StringLiteral_23190/*"wait"*/;
      v7 = this;
    }
    else
    {
      v8 = this->fields.animename;
      v16 = 46;
      v9 = j_il2cpp_value_box_0(HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, &v16);
      if ( !v9 )
        goto LABEL_12;
      v11 = v9;
      v12 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                                 v9,
                                 *(_QWORD *)(*(_QWORD *)v9 + 368LL));
      v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
      if ( !System_String__op_Equality(v8, v12, 0LL) )
        return;
      v16 = 46;
      v9 = j_il2cpp_value_box_0(HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, &v16);
      if ( !v9 )
LABEL_12:
        sub_B2C434(v9, v10);
      v13 = v9;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(v9, *(_QWORD *)(*(_QWORD *)v9 + 368LL));
      v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v13);
      v7 = this;
      v6 = (System_String_o *)v14;
      v16 = v15;
    }
    BattleFBXComponent__playAnimation(v7, v6, v5);
  }
}


void __fastcall BattleFBXComponent__RevertDefaultAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x20
  UnityEngine_Object_o *defSimpleAnimClip; // x21
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *defAnimClip; // x21

  if ( (byte_418691F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418691F = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
    defSimpleAnimClip = (UnityEngine_Object_o *)this->fields.defSimpleAnimClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(defSimpleAnimClip, 0LL, 0LL) )
    {
      v7 = this->fields.simpleAnimationComponent;
      if ( v7 )
      {
        SimpleAnimation__set_clip(v7, *p_defSimpleAnimClip, 0LL);
LABEL_23:
        *p_defSimpleAnimClip = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)p_defSimpleAnimClip, 0LL, v8, v9, v10, v11, v12, v13);
        return;
      }
      goto LABEL_25;
    }
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    p_defSimpleAnimClip = &this->fields.defAnimClip;
    defAnimClip = (UnityEngine_Object_o *)this->fields.defAnimClip;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(defAnimClip, 0LL, 0LL) )
    {
      v7 = (SimpleAnimation_o *)this->fields.animationComponent;
      if ( v7 )
      {
        UnityEngine_Animation__set_clip((UnityEngine_Animation_o *)v7, *p_defSimpleAnimClip, 0LL);
        goto LABEL_23;
      }
LABEL_25:
      sub_B2C434(v7, v6);
    }
  }
}


void __fastcall BattleFBXComponent__RevertShaderFloatProperty(BattleFBXComponent_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *tempMaterialPropertyDict; // x0
  __int128 v13; // kr00_16
  float v14; // s8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int128 v17; // [xsp+0h] [xbp-60h] BYREF
  __int128 v18; // [xsp+10h] [xbp-50h]
  __int128 v19; // [xsp+20h] [xbp-40h]

  if ( (byte_4186918 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__get_Current__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Key__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Key__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__Material__get_Value__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_string__Material___float__get_Value__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4186918 = 1;
  }
  v18 = 0u;
  v19 = 0u;
  v17 = 0u;
  tempMaterialPropertyDict = this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v17,
    tempMaterialPropertyDict,
    (const MethodInfo_24EEDE4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v17,
            (const MethodInfo_255D9C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__MoveNext__) )
  {
    v13 = v18;
    v14 = *(float *)&v19;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality(*((UnityEngine_Object_o **)&v13 + 1), 0LL, 0LL);
    if ( v15 )
    {
      if ( !*((_QWORD *)&v13 + 1) )
        sub_B2C434(v15, v16);
      UnityEngine_Material__SetFloat(*((UnityEngine_Material_o **)&v13 + 1), (System_String_o *)v13, v14, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v17,
    (const MethodInfo_255DB3C *)Method_System_Collections_Generic_Dictionary_Enumerator_KeyValuePair_string__Material___float__Dispose__);
  tempMaterialPropertyDict = this->fields.tempMaterialPropertyDict;
  if ( !tempMaterialPropertyDict )
LABEL_15:
    sub_B2C434(tempMaterialPropertyDict, method);
  System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___Clear(
    tempMaterialPropertyDict,
    (const MethodInfo_24EEA08 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetActiveActorEffectAll(
        BattleFBXComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *value; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-48h] BYREF

  v3 = isActive;
  if ( (byte_418691C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__, isActive);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__, v8);
    byte_418691C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_B2C434(0LL, isActive);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)actorEffectDict,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v13,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__);
    if ( !v10 )
      break;
    value = v13.fields.current.fields.value;
    if ( !v13.fields.current.fields.value )
      sub_B2C434(v10, v11);
    if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v13.fields.current.fields.value, 0LL) ^ v3) & 1) != 0 )
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v3, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v13,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleFBXComponent__SetActiveActorEffectFromEffectName(
        BattleFBXComponent_o *this,
        System_String_o *effectName,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__GameObject__o *actorEffectDict; // x0
  __int64 v13; // x1
  Il2CppObject *value; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-48h] BYREF

  v4 = isActive;
  if ( (byte_418691B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__, effectName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Key__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__GameObject__get_Value__, v11);
    byte_418691B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  actorEffectDict = this->fields.actorEffectDict;
  if ( !actorEffectDict )
    sub_B2C434(0LL, effectName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)actorEffectDict,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v17,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v17.fields.current.fields.key )
      sub_B2C434(0LL, v13);
    value = v17.fields.current.fields.value;
    v15 = System_String__Contains((System_String_o *)v17.fields.current.fields.key, effectName, 0LL);
    if ( v15 )
    {
      if ( !value )
        sub_B2C434(v15, v16);
      if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0LL) ^ v4) & 1) != 0 )
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)value, v4, 0LL);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v17,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleFBXComponent__SetActiveActorEffectFromNodeName(
        BattleFBXComponent_o *this,
        System_String_o *nodeName,
        bool isActive,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *actorEffectDict; // x0
  UnityEngine_GameObject_o *v9; // x20

  v4 = isActive;
  if ( (byte_418691A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, nodeName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__, v7);
    byte_418691A = 1;
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_10;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          actorEffectDict,
          (System_Xml_XmlQualifiedName_o *)nodeName,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__) )
    return;
  actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict
    || (actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)actorEffectDict, (System_Type_o *)nodeName, (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Item__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(actorEffectDict, nodeName);
  }
  v9 = (UnityEngine_GameObject_o *)actorEffectDict;
  if ( ((UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)actorEffectDict, 0LL) ^ v4) & 1) != 0 )
    UnityEngine_GameObject__SetActive(v9, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetConnectPrefabNode(
        BattleFBXComponent_o *this,
        System_String_o *name,
        bool isConnect,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *PrefabNode; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4186913 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    byte_4186913 = 1;
  }
  PrefabNode = BattleFBXComponent__GetPrefabNode(this, name, (const MethodInfo *)isConnect);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PrefabNode, 0LL, 0LL) )
    BattleFBXComponent__SetConnectPrefabNode_23067360(this, PrefabNode, isConnect, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent__SetConnectPrefabNode_23067360(
        BattleFBXComponent_o *this,
        UnityEngine_GameObject_o *obj,
        bool isConnect,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *klass; // x20
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *transform; // x21
  int v14; // s0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Object_o *v19; // x20

  v6 = (UnityEngine_Component_o *)this;
  if ( (byte_4186914 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BattleActorControl___, obj);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___, v8);
    this = (BattleFBXComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4186914 = 1;
  }
  if ( !obj )
    goto LABEL_30;
  if ( isConnect )
  {
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        obj,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ObjectScaleEnabler___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_30;
      klass = (UnityEngine_Transform_o *)Component_srcLineSprite[1].klass;
      this = (BattleFBXComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !klass )
        goto LABEL_30;
      v12 = (UnityEngine_Transform_o *)this;
      this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent(klass, 0LL);
      if ( !this )
        goto LABEL_30;
      this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v12 )
        goto LABEL_30;
      UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)this, 0LL);
      transform = UnityEngine_GameObject__get_transform(obj, 0LL);
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL);
      if ( !transform )
        goto LABEL_30;
      UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)klass,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( Component_WebViewObject )
        {
          BattleActorControl__AddChildNodesRenderer((BattleActorControl_o *)Component_WebViewObject, obj, 0LL);
          return;
        }
LABEL_30:
        sub_B2C434(this, obj);
      }
    }
  }
  else
  {
    v18 = UnityEngine_GameObject__get_transform(obj, 0LL);
    this = (BattleFBXComponent_o *)UnityEngine_Component__get_transform(v6, 0LL);
    if ( !this )
      goto LABEL_30;
    this = (BattleFBXComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !v18 )
      goto LABEL_30;
    UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)this, 0LL);
    this = (BattleFBXComponent_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !this )
      goto LABEL_30;
    v19 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)this,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_30;
      BattleActorControl__RemoveChildNodesRenderer((BattleActorControl_o *)v19, obj, 0LL);
    }
  }
}


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
    sub_B2C434(0LL, svtId);
  gameObject = UnityEngine_Component__get_gameObject(rootTransform, 0LL);
  BattleFBXComponent__inSetEvolutionLevel(this, gameObject, svtId, limitcount, v9);
}


void __fastcall BattleFBXComponent__SetTempDefaultAnimation(
        BattleFBXComponent_o *this,
        System_String_o *updateAnimName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_String_o *RealAnimName; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct SimpleAnimation_o *v12; // x8
  UnityEngine_Object_o *monitor; // x21
  SimpleAnimation_State_o *Item; // x0
  __int64 v15; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x20
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_Object_o *clip; // x21
  UnityEngine_TrackedReference_o *v23; // x20
  UnityEngine_Object_o *v24; // x21
  UnityEngine_Object_o *v25; // x22
  struct UnityEngine_AnimationClip_o *v26; // x0
  struct UnityEngine_AnimationClip_o **p_defAnimClip; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Animation_o *v34; // x19
  struct SimpleAnimation_o *v35; // x8
  UnityEngine_Object_o *v36; // x21
  UnityEngine_Object_o *v37; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct SimpleAnimation_o *v44; // x8
  struct UnityEngine_AnimationClip_o *v45; // x1
  struct UnityEngine_AnimationClip_o **p_defSimpleAnimClip; // x19
  __int64 v47; // x3
  SimpleAnimation_State_c *v48; // x8
  SimpleAnimation_o *v49; // x19
  unsigned __int64 v50; // x10
  SimpleAnimation_State_c **v51; // x11
  __int64 v52; // x0

  if ( (byte_418691E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, updateAnimName);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v5);
    byte_418691E = 1;
  }
  if ( !System_String__IsNullOrEmpty(updateAnimName, 0LL) )
  {
    RealAnimName = BattleFBXComponent__GetRealAnimName(this, updateAnimName, v6);
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    v9 = RealAnimName;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
    if ( (v10 & 1) == 0 )
      goto LABEL_20;
    v12 = this->fields.simpleAnimationComponent;
    if ( !v12 )
      goto LABEL_56;
    monitor = (UnityEngine_Object_o *)v12[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v10 = (__int64)this->fields.simpleAnimationComponent;
      if ( !v10 )
        goto LABEL_56;
      Item = SimpleAnimation__get_Item((SimpleAnimation_o *)v10, v9, 0LL);
      if ( Item )
      {
        klass = Item->klass;
        v17 = Item;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v18 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v18;
            p_offset += 2;
            if ( v18 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_19;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
        }
        else
        {
LABEL_19:
          p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 14LL, v15);
        }
        v10 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v17, *(_QWORD *)(p_method + 8));
        v35 = this->fields.simpleAnimationComponent;
        if ( !v35 )
          goto LABEL_56;
        v36 = (UnityEngine_Object_o *)v10;
        v37 = (UnityEngine_Object_o *)v35[1].monitor;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v10 = UnityEngine_Object__op_Inequality(v36, v37, 0LL);
        if ( (v10 & 1) != 0 )
        {
          v44 = this->fields.simpleAnimationComponent;
          if ( v44 )
          {
            v45 = (struct UnityEngine_AnimationClip_o *)v44[1].monitor;
            this->fields.defSimpleAnimClip = v45;
            p_defSimpleAnimClip = &this->fields.defSimpleAnimClip;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)p_defSimpleAnimClip,
              (System_Int32_array **)v45,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            v48 = v17->klass;
            v49 = (SimpleAnimation_o *)*(p_defSimpleAnimClip - 17);
            if ( *(_WORD *)&v17->klass->_2.bitflags1 )
            {
              v50 = 0LL;
              v51 = (SimpleAnimation_State_c **)&v48->_1.interfaceOffsets->offset;
              while ( *(v51 - 1) != SimpleAnimation_State_TypeInfo )
              {
                ++v50;
                v51 += 2;
                if ( v50 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
                  goto LABEL_51;
              }
              v52 = (__int64)&v48->vtable[*(_DWORD *)v51 + 14].method;
            }
            else
            {
LABEL_51:
              v52 = sub_AC5258(v17, SimpleAnimation_State_TypeInfo, 14LL, v47);
            }
            v10 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v52)(v17, *(_QWORD *)(v52 + 8));
            if ( v49 )
            {
              SimpleAnimation__set_clip(v49, (UnityEngine_AnimationClip_o *)v10, 0LL);
              return;
            }
          }
LABEL_56:
          sub_B2C434(v10, v11);
        }
      }
    }
    else
    {
LABEL_20:
      animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
        v10 = (__int64)this->fields.animationComponent;
        if ( !v10 )
          goto LABEL_56;
        clip = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v10, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(clip, 0LL, 0LL) )
        {
          v10 = (__int64)this->fields.animationComponent;
          if ( !v10 )
            goto LABEL_56;
          v23 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                    (UnityEngine_Animation_o *)v10,
                                                    v9,
                                                    0LL);
          v10 = UnityEngine_TrackedReference__op_Inequality(v23, 0LL, 0LL);
          if ( (v10 & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_56;
            v10 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v23, 0LL);
            if ( !this->fields.animationComponent )
              goto LABEL_56;
            v24 = (UnityEngine_Object_o *)v10;
            v25 = (UnityEngine_Object_o *)UnityEngine_Animation__get_clip(this->fields.animationComponent, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v24, v25, 0LL) )
            {
              v10 = (__int64)this->fields.animationComponent;
              if ( v10 )
              {
                v26 = UnityEngine_Animation__get_clip((UnityEngine_Animation_o *)v10, 0LL);
                this->fields.defAnimClip = v26;
                p_defAnimClip = &this->fields.defAnimClip;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)p_defAnimClip,
                  (System_Int32_array **)v26,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32,
                  v33);
                v34 = (UnityEngine_Animation_o *)*(p_defAnimClip - 19);
                v10 = (__int64)UnityEngine_AnimationState__get_clip((UnityEngine_AnimationState_o *)v23, 0LL);
                if ( v34 )
                {
                  UnityEngine_Animation__set_clip(v34, (UnityEngine_AnimationClip_o *)v10, 0LL);
                  return;
                }
              }
              goto LABEL_56;
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
  BattleFBXComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_Renderer__o *enableRendererList; // x21
  __int64 v13; // x25
  unsigned __int64 v14; // x22
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_Renderer__o *v17; // x21
  UnityEngine_Object_o *sharedMaterial; // x21
  struct System_Collections_Generic_List_Renderer__o *v19; // x21
  const MethodInfo_2104614 *v20; // x4
  System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *tempMaterialPropertyDict; // x22
  struct System_String_o *key; // x23
  struct UnityEngine_Material_o *v23; // x24
  float Float; // s0
  System_Collections_Generic_KeyValuePair_string__Material__o v25; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_Variant__Variant__o v26; // 0:x0.16
  System_Collections_Generic_KeyValuePair_string__Material__o v27; // 0:x1.16

  v6 = this;
  if ( (byte_4186917 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__,
      propertyName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Item__, v10);
    this = (BattleFBXComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4186917 = 1;
  }
  v25.fields.key = 0LL;
  v25.fields.value = 0LL;
  enableRendererList = v6->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_36:
    sub_B2C434(this, propertyName);
  v13 = 4LL;
  while ( 1 )
  {
    v14 = v13 - 4;
    if ( v13 - 4 >= enableRendererList->fields._size )
      break;
    if ( v14 >= (unsigned int)enableRendererList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&enableRendererList->fields._items->obj.klass + v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
    v16 = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = v6->fields.enableRendererList;
      if ( !v17 )
        goto LABEL_36;
      if ( v14 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (BattleFBXComponent_o *)*((_QWORD *)&v17->fields._items->obj.klass + v13);
      if ( !this )
        goto LABEL_36;
      sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                 (UnityEngine_Renderer_o *)this,
                                                 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(sharedMaterial, 0LL, 0LL);
      v16 = 0LL;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v19 = v6->fields.enableRendererList;
        if ( !v19 )
          goto LABEL_36;
        if ( v14 >= (unsigned int)v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (BattleFBXComponent_o *)*((_QWORD *)&v19->fields._items->obj.klass + v13);
        if ( !this )
          goto LABEL_36;
        v16 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)this, 0LL);
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v16 )
        goto LABEL_36;
      this = (BattleFBXComponent_o *)UnityEngine_Material__HasProperty_40688736(
                                       (UnityEngine_Material_o *)v16,
                                       propertyName,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v26.fields.key = (struct Firebase_Variant_o *)&v25;
        v26.fields.value = (struct Firebase_Variant_o *)propertyName;
        System_Collections_Generic_KeyValuePair_Variant__Variant____ctor(
          v26,
          (Firebase_Variant_o *)v16,
          (Firebase_Variant_o *)Method_System_Collections_Generic_KeyValuePair_string__Material___ctor__,
          v20);
        this = (BattleFBXComponent_o *)v6->fields.tempMaterialPropertyDict;
        if ( !this )
          goto LABEL_36;
        this = (BattleFBXComponent_o *)System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___ContainsKey(
                                         (System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__o *)this,
                                         v25,
                                         (const MethodInfo_24EEAA0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__ContainsKey__);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          tempMaterialPropertyDict = v6->fields.tempMaterialPropertyDict;
          key = v25.fields.key;
          v23 = v25.fields.value;
          Float = UnityEngine_Material__GetFloat((UnityEngine_Material_o *)v16, propertyName, 0LL);
          if ( !tempMaterialPropertyDict )
            goto LABEL_36;
          v27.fields.key = key;
          v27.fields.value = v23;
          System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float___set_Item(
            tempMaterialPropertyDict,
            v27,
            Float,
            (const MethodInfo_24EE7F4 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_string__Material___float__set_Item__);
        }
      }
    }
    enableRendererList = v6->fields.enableRendererList;
    ++v13;
    if ( !enableRendererList )
      goto LABEL_36;
  }
  BattleFBXComponent__SetYTransparenceShaderProperty(v6, value, propertyName, method);
}


void __fastcall BattleFBXComponent__SetWrapMode(
        BattleFBXComponent_o *this,
        System_String_o *animName,
        int32_t wrapMode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v9; // x1
  UnityEngine_Animation_o *v10; // x0
  UnityEngine_TrackedReference_o *Item; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  SimpleAnimation_State_o *v13; // x0
  __int64 v14; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x20
  unsigned __int64 v17; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_41868FE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, animName);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    byte_41868FE = 1;
  }
  BattleFBXComponent__setupAnimation(this, (const MethodInfo *)animName);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v10 = this->fields.animationComponent;
    if ( !v10 )
      goto LABEL_25;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v10, animName, 0LL);
    v10 = (UnityEngine_Animation_o *)UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( Item )
      {
        UnityEngine_AnimationState__set_wrapMode((UnityEngine_AnimationState_o *)Item, wrapMode, 0LL);
        return;
      }
LABEL_25:
      sub_B2C434(v10, v9);
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    {
      v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
      if ( !v10 )
        goto LABEL_25;
      v13 = SimpleAnimation__get_Item((SimpleAnimation_o *)v10, animName, 0LL);
      if ( v13 )
      {
        klass = v13->klass;
        v16 = v13;
        if ( *(_WORD *)&v13->klass->_2.bitflags1 )
        {
          v17 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v17;
            p_offset += 2;
            if ( v17 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
              goto LABEL_21;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
        }
        else
        {
LABEL_21:
          p_method = sub_AC5258(v13, SimpleAnimation_State_TypeInfo, 18LL, v14);
        }
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, _QWORD))p_method)(
          v16,
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
  BattleFBXComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_Renderer__o *enableRendererList; // x21
  __int64 v10; // x22
  unsigned __int64 v11; // x24
  UnityEngine_Object_o *v12; // x21
  struct System_Collections_Generic_List_Renderer__o *v13; // x21
  UnityEngine_Object_o *sharedMaterial; // x21
  struct System_Collections_Generic_List_Renderer__o *v15; // x21

  v6 = this;
  if ( (byte_4186916 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Count__, propertyName);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__get_Item__, v7);
    this = (BattleFBXComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4186916 = 1;
  }
  enableRendererList = v6->fields.enableRendererList;
  if ( !enableRendererList )
LABEL_27:
    sub_B2C434(this, propertyName);
  v10 = 4LL;
  while ( 1 )
  {
    v11 = v10 - 4;
    if ( v10 - 4 >= enableRendererList->fields._size )
      break;
    if ( v11 >= (unsigned int)enableRendererList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&enableRendererList->fields._items->obj.klass + v10);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleFBXComponent_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v13 = v6->fields.enableRendererList;
      if ( !v13 )
        goto LABEL_27;
      if ( v11 >= (unsigned int)v13->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (BattleFBXComponent_o *)*((_QWORD *)&v13->fields._items->obj.klass + v10);
      if ( !this )
        goto LABEL_27;
      sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                 (UnityEngine_Renderer_o *)this,
                                                 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleFBXComponent_o *)UnityEngine_Object__op_Equality(sharedMaterial, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v15 = v6->fields.enableRendererList;
        if ( !v15 )
          goto LABEL_27;
        if ( v11 >= (unsigned int)v15->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (BattleFBXComponent_o *)*((_QWORD *)&v15->fields._items->obj.klass + v10);
        if ( !this )
          goto LABEL_27;
        this = (BattleFBXComponent_o *)UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)this, 0LL);
        if ( !this )
          goto LABEL_27;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, propertyName, value, 0LL);
      }
    }
    enableRendererList = v6->fields.enableRendererList;
    ++v10;
    if ( !enableRendererList )
      goto LABEL_27;
  }
}


void __fastcall BattleFBXComponent__Start(BattleFBXComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct BillBoard_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41868FC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, method);
    byte_41868FC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  Component_srcLineSprite = (struct BillBoard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    gameObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
  this->fields.billBoard = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.billBoard,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_XWeaponTrail__o *componentsXWeaponTrail; // x0
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4186905 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__, active);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4186905 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  componentsXWeaponTrail = this->fields.componentsXWeaponTrail;
  if ( !componentsXWeaponTrail )
    sub_B2C434(0LL, active);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)componentsXWeaponTrail,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_XWeaponTrail__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__MoveNext__) )
  {
    current = v14.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v11 )
    {
      if ( active )
      {
        if ( !current )
          sub_B2C434(v11, v12);
        XWeaponTrail__Activate((XWeaponTrail_o *)current, 0LL);
      }
      else
      {
        if ( !current )
          sub_B2C434(v11, v12);
        XWeaponTrail__Deactivate((XWeaponTrail_o *)current, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_XWeaponTrail__Dispose__);
}


bool __fastcall BattleFBXComponent__checkAnimation(
        BattleFBXComponent_o *this,
        System_String_o *filename,
        const MethodInfo *method)
{
  System_Type_o *Item; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *RealAnimNames; // x0
  UnityEngine_Object_o *animationComponent; // x21
  UnityEngine_TrackedReference_o *v9; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21

  Item = (System_Type_o *)filename;
  if ( (byte_4186909 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, filename);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4186909 = 1;
  }
  RealAnimNames = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.RealAnimNames;
  if ( !RealAnimNames )
    goto LABEL_20;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)RealAnimNames,
         (System_Xml_XmlQualifiedName_o *)Item,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.RealAnimNames;
    if ( !RealAnimNames )
      goto LABEL_20;
    Item = (System_Type_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              RealAnimNames,
                              Item,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    RealAnimNames = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.animationComponent;
    if ( RealAnimNames )
    {
      v9 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)RealAnimNames,
                                               (System_String_o *)Item,
                                               0LL);
      return UnityEngine_TrackedReference__op_Inequality(v9, 0LL, 0LL);
    }
LABEL_20:
    sub_B2C434(RealAnimNames, filename);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    return 0;
  RealAnimNames = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.simpleAnimationComponent;
  if ( !RealAnimNames )
    goto LABEL_20;
  return SimpleAnimation__get_Item((SimpleAnimation_o *)RealAnimNames, (System_String_o *)Item, 0LL) != 0LL;
}


float __fastcall BattleFBXComponent__getLength(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Object_o *animationComponent; // x20
  __int64 v7; // x1
  UnityEngine_Animation_o *v8; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v12; // x3
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v14; // x19
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v17; // x0

  if ( (byte_4186900 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186900 = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(rootTransform, 0LL, 0LL)
    || !System_String__op_Inequality(this->fields.currentAnimName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    return 0.0;
  }
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v8 = this->fields.animationComponent;
    if ( !v8 )
      goto LABEL_34;
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v8, this->fields.currentAnimName, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      v8 = this->fields.animationComponent;
      if ( v8 )
      {
        v8 = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(v8, this->fields.currentAnimName, 0LL);
        if ( v8 )
          return UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)v8, 0LL);
      }
LABEL_34:
      sub_B2C434(v8, v7);
    }
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
    return 0.0;
  v8 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v8 )
    goto LABEL_34;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)v8, this->fields.currentAnimName, 0LL) )
    return 0.0;
  v8 = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
  if ( !v8 )
    goto LABEL_34;
  v8 = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v8, this->fields.currentAnimName, 0LL);
  if ( !v8 )
    goto LABEL_34;
  klass = v8->klass;
  v14 = v8;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v17 = (__int64)(&klass[1]._1.methods + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_29:
    v17 = sub_AC5258(v8, SimpleAnimation_State_TypeInfo, 14LL, v12);
  }
  v8 = (UnityEngine_Animation_o *)(*(__int64 (__fastcall **)(UnityEngine_Animation_o *, _QWORD))v17)(
                                    v14,
                                    *(_QWORD *)(v17 + 8));
  if ( !v8 )
    goto LABEL_34;
  return UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)v8, 0LL);
}


System_String_o *__fastcall BattleFBXComponent__getRealAnimationName(
        BattleFBXComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_4186919 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, animationName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_B2C35C(&string_TypeInfo, v6);
    byte_4186919 = 1;
  }
  RealAnimNames = this->fields.RealAnimNames;
  if ( !RealAnimNames
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)RealAnimNames,
          (System_Xml_XmlQualifiedName_o *)animationName,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return string_TypeInfo->static_fields->Empty;
  }
  v9 = this->fields.RealAnimNames;
  if ( !v9 )
    sub_B2C434(0LL, v8);
  return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                              (System_Type_o *)animationName,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
}


float __fastcall BattleFBXComponent__getTagTime(
        BattleFBXComponent_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  System_Type_o *Item; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *CommonAnimNames; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Index; // x0
  float v12; // s8
  struct BattleFBXComponent_AnimEvent_array_array *eventlist; // x8
  BattleFBXComponent_AnimEvent_array *v14; // x20
  __int64 v15; // x8
  __int64 i; // x21
  BattleFBXComponent_AnimEvent_o *v17; // x23
  __int64 v19; // x0

  Item = (System_Type_o *)animname;
  if ( (byte_418690C & 1) == 0 )
  {
    sub_B2C35C(&AnimationList_TypeInfo, animname);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8);
    byte_418690C = 1;
  }
  CommonAnimNames = this->fields.CommonAnimNames;
  if ( CommonAnimNames
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)CommonAnimNames,
         (System_Xml_XmlQualifiedName_o *)Item,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    Index = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.CommonAnimNames;
    if ( !Index )
      goto LABEL_26;
    Item = (System_Type_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              Index,
                              Item,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  if ( (BYTE3(AnimationList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AnimationList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
  }
  Index = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)AnimationList__getIndex(
                                                                              (System_String_o *)Item,
                                                                              0LL);
  v12 = 0.0;
  if ( ((unsigned int)Index & 0x80000000) != 0 )
    return v12;
  eventlist = this->fields.eventlist;
  if ( !eventlist )
LABEL_26:
    sub_B2C434(Index, v10);
  if ( (unsigned int)Index >= eventlist->max_length )
  {
LABEL_25:
    v19 = sub_B2C460(Index);
    sub_B2C400(v19, 0LL);
  }
  v14 = eventlist->m_Items[(int)Index];
  if ( v14 )
  {
    v15 = *(_QWORD *)&v14->max_length;
    if ( (int)v15 >= 1 )
    {
      for ( i = 0LL; (int)i < (int)v15; ++i )
      {
        if ( (unsigned int)i >= (unsigned int)v15 )
          goto LABEL_25;
        v17 = v14->m_Items[i];
        if ( !v17 )
          goto LABEL_26;
        Index = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v17->fields.tag;
        if ( Index )
        {
          Index = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_String__Equals_44292872(
                                                                                      (System_String_o *)Index,
                                                                                      tag,
                                                                                      0LL);
          if ( ((unsigned __int8)Index & 1) != 0 )
            return v17->fields.time;
          v15 = *(_QWORD *)&v14->max_length;
        }
      }
    }
  }
  return v12;
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
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *actorEffectDict; // x0
  const MethodInfo *v47; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_componentsXWeaponTrail; // x26
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x19
  BattleFBXComponent___c_c *v64; // x8
  struct BattleFBXComponent___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__56_0; // x20
  Il2CppObject *v67; // x21
  struct BattleFBXComponent___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x20
  int32_t LimitImageIndex; // w27
  __int64 v77; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v79; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x3
  __int64 v85; // x23
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  UnityEngine_Object_o *v90; // x0
  __int64 v91; // x1
  UnityEngine_Component_o *v92; // x28
  __int64 v93; // x1
  System_String_o *name; // x20
  BattleFBXComponent_c *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  __int64 v97; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v100; // x1
  float v101; // s0
  float v102; // s1
  float v103; // s2
  System_String_o *v104; // x20
  __int64 v105; // x1
  System_String_o *v106; // x21
  BattleFBXComponent_c *v107; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  System_String_o *v110; // x21
  System_String_o *v111; // x0
  __int64 v112; // x1
  int32_t v113; // w20
  System_String_o *v114; // x0
  __int64 v115; // x1
  System_String_o *v116; // x0
  __int64 v117; // x1
  System_String_o *v118; // x20
  int32_t v119; // w2
  System_Char_array *v120; // x0
  System_String_array *v121; // x0
  __int64 v122; // x1
  System_String_array *v123; // x20
  __int64 v124; // x8
  unsigned __int64 v125; // x24
  System_String_o *v126; // x22
  bool v127; // w22
  UnityEngine_Object_o *PrefabNode; // x20
  __int64 v129; // x1
  System_String_o *v130; // x20
  BattleFBXComponent_c *v131; // x0
  const MethodInfo *v132; // x4
  __int64 v133; // x1
  System_String_o *v134; // x20
  BattleFBXComponent_c *v135; // x0
  UnityEngine_GameObject_o *v136; // x0
  __int64 v137; // x1
  srcLineSprite_o *v138; // x24
  _BOOL8 v139; // x0
  __int64 v140; // x1
  System_String_o *v141; // x0
  __int64 v142; // x1
  UnityEngine_Transform_o *v143; // x24
  UnityEngine_Transform_o *v144; // x0
  __int64 v145; // x1
  float v146; // s10
  UnityEngine_Transform_o *v147; // x0
  __int64 v148; // x1
  float y; // s11
  UnityEngine_Transform_o *v150; // x0
  __int64 v151; // x1
  __int64 v152; // x0
  __int64 v153; // x1
  int v154; // s2
  float v155; // s0
  float v156; // s1
  UnityEngine_Transform_o *v157; // x0
  __int64 v158; // x1
  _BOOL8 v159; // x0
  __int64 v160; // x1
  changeVColor_array *v161; // x0
  __int64 v162; // x1
  changeVColor_array *v163; // x20
  __int64 v164; // x8
  unsigned __int64 v165; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *v167; // x24
  __int64 v168; // x0
  __int64 v169; // x1
  __int64 v170; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v171; // x0
  __int64 v172; // x0
  __int64 v173; // x1
  __int64 v174; // x8
  unsigned __int64 v175; // x10
  int *v176; // x11
  __int64 v177; // x0
  __int64 v178; // x3
  __int64 v179; // x8
  unsigned __int64 v180; // x10
  int *v181; // x11
  __int64 v182; // x0
  int v183; // w24
  __int64 v184; // x1
  int v185; // w8
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v187; // x20
  unsigned __int64 v188; // x19
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v189; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v190; // x20
  unsigned __int64 v191; // x19
  BattleFBXComponent___c_c *v192; // x0
  struct BattleFBXComponent___c_StaticFields *v193; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__56_1; // x19
  Il2CppObject *v195; // x20
  struct BattleFBXComponent___c_StaticFields *v196; // x0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  __int64 v203; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__c *v204; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v205; // x19
  unsigned __int64 v206; // x10
  int32_t *v207; // x11
  __int64 v208; // x0
  __int64 v209; // x1
  __int64 v210; // x3
  __int64 v211; // x19
  __int64 v212; // x8
  unsigned __int64 v213; // x10
  int *v214; // x11
  __int64 v215; // x0
  UnityEngine_Object_o *v216; // x0
  __int64 v217; // x1
  UnityEngine_Transform_o *v218; // x20
  __int64 v219; // x1
  System_String_o *v220; // x21
  BattleFBXComponent_c *v221; // x0
  struct System_String_o *enItemMarker; // x8
  System_String_o *v223; // x22
  UnityEngine_Transform_o *parent; // x21
  System_String_o *v225; // x0
  System_Int32_array **v226; // x21
  UnityEngine_GameObject_o *v227; // x0
  __int64 v228; // x1
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v229; // x0
  __int64 v230; // x1
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v237; // x20
  __int64 v238; // x8
  unsigned __int64 v239; // x10
  int *v240; // x11
  __int64 v241; // x0
  __int64 v242; // x3
  int v243; // w24
  __int64 v244; // x8
  unsigned __int64 v245; // x10
  int *v246; // x11
  __int64 v247; // x0
  __int64 v248; // x0
  __int64 v249; // x0
  __int64 v250; // x0
  __int64 v251; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-F8h]
  UnityEngine_GameObject_o *v253; // [xsp+10h] [xbp-F0h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v254; // [xsp+18h] [xbp-E8h]
  char v255; // [xsp+20h] [xbp-E0h]
  System_Xml_XmlQualifiedName_o *key; // [xsp+28h] [xbp-D8h]
  UnityEngine_Component_o *v258; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v259; // [xsp+38h] [xbp-C8h] BYREF
  int v260[3]; // [xsp+50h] [xbp-B0h]
  int v261; // [xsp+5Ch] [xbp-A4h]
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+60h] [xbp-A0h] BYREF
  int32_t v263; // [xsp+88h] [xbp-78h]
  int32_t result; // [xsp+8Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  v263 = limitcount;
  if ( (byte_4186903 & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent_TypeInfo, gameObject);
    sub_B2C35C(&char___TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_Transform___, v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__,
      v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__get_Current__,
      v17);
    sub_B2C35C(&Method_System_Func_Transform__bool___ctor__, v18);
    sub_B2C35C(&System_Func_Transform__bool__TypeInfo, v19);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_LookAtTarget___, v20);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v21);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v22);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v23);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____67435320, v24);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___, v25);
    sub_B2C35C(&System_IDisposable_TypeInfo, v26);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v27);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v28);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_XWeaponTrail__Add__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__Add__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_Renderer__Clear__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__, v34);
    sub_B2C35C(&System_Collections_Generic_List_XWeaponTrail__TypeInfo, v35);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v36);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v37);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v38);
    sub_B2C35C(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_0__, v39);
    sub_B2C35C(&Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_1__, v40);
    sub_B2C35C(&BattleFBXComponent___c_TypeInfo, v41);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__,
      v42);
    sub_B2C35C(&StringLiteral_80/*" "*/, v43);
    sub_B2C35C(&StringLiteral_22218/*"spiral"*/, v44);
    sub_B2C35C(&StringLiteral_2769/*"Battle2D"*/, v45);
    byte_4186903 = 1;
  }
  result = 0;
  memset(&i, 0, sizeof(i));
  v261 = 0;
  actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.actorEffectDict;
  if ( !actorEffectDict )
    goto LABEL_219;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    actorEffectDict,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
  BattleFBXComponent__DestroyPrefabNode(this, v47);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.PrefabNodes = (struct System_Collections_Generic_List_GameObject__o *)v48;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.PrefabNodes,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_XWeaponTrail__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  p_componentsXWeaponTrail = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.componentsXWeaponTrail;
  this->fields.componentsXWeaponTrail = (struct System_Collections_Generic_List_XWeaponTrail__o *)v55;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.componentsXWeaponTrail,
    (System_Int32_array **)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.enableRendererList;
  if ( !actorEffectDict )
    goto LABEL_219;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)actorEffectDict,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_Renderer__Clear__);
  if ( !gameObject )
    goto LABEL_219;
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                               gameObject,
                                                               1,
                                                               (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____67435320);
  v64 = BattleFBXComponent___c_TypeInfo;
  if ( (BYTE3(BattleFBXComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v64 = BattleFBXComponent___c_TypeInfo;
  }
  static_fields = v64->static_fields;
  _9__56_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      static_fields = BattleFBXComponent___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)static_fields->__9;
    _9__56_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Transform__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__56_0,
      v67,
      Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_Transform__bool___ctor__);
    v68 = BattleFBXComponent___c_TypeInfo->static_fields;
    v68->__9__56_0 = (struct System_Func_Transform__bool__o *)_9__56_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v68->__9__56_0,
      (System_Int32_array **)_9__56_0,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  v75 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v63,
          (System_Func_TSource__bool__o *)_9__56_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, v263, 1, 0LL);
  v254 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v254,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer___ctor__);
  if ( !v75 )
    goto LABEL_219;
  klass = v75->klass;
  v258 = (UnityEngine_Component_o *)this;
  source = v63;
  v253 = gameObject;
  if ( *(_WORD *)&v75->klass->_2.bitflags1 )
  {
    v79 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v79;
      p_offset += 4;
      if ( v79 >= *(unsigned __int16 *)&v75->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_22:
    p_method = sub_AC5258(v75, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v77);
  }
  v82 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v75,
          *(_QWORD *)(p_method + 8));
  v255 = 1;
  v85 = v82;
  while ( 1 )
  {
    if ( !v85 )
      sub_B2C434(v82, v83);
    v174 = *(_QWORD *)v85;
    if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
    {
      v175 = 0LL;
      v176 = (int *)(*(_QWORD *)(v174 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v176 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v175;
        v176 += 4;
        if ( v175 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
          goto LABEL_127;
      }
      v177 = v174 + 16LL * *v176 + 312;
    }
    else
    {
LABEL_127:
      v177 = sub_AC5258(v85, System_Collections_IEnumerator_TypeInfo, 0LL, v84);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v177)(v85, *(_QWORD *)(v177 + 8)) & 1) == 0 )
      break;
    v86 = *(_QWORD *)v85;
    if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
    {
      v87 = 0LL;
      v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v88 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v87;
        v88 += 4;
        if ( v87 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
          goto LABEL_29;
      }
      v89 = v86 + 16LL * *v88 + 312;
    }
    else
    {
LABEL_29:
      v89 = sub_AC5258(v85, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v178);
    }
    v90 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v85, *(_QWORD *)(v89 + 8));
    v92 = (UnityEngine_Component_o *)v90;
    if ( !v90 )
      sub_B2C434(0LL, v91);
    name = UnityEngine_Object__get_name(v90, 0LL);
    v95 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    }
    if ( !name )
      sub_B2C434(v95, v93);
    if ( System_String__StartsWith(name, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL) )
    {
      v96 = UnityEngine_Component__get_gameObject(v258, 0LL);
      if ( !v96 )
        sub_B2C434(0LL, v97);
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v96,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v82 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
      if ( (v82 & 1) != 0 )
      {
        transform = UnityEngine_Component__get_transform(v92, 0LL);
        if ( !Component_srcLineSprite )
          sub_B2C434(transform, v100);
        if ( !transform )
          sub_B2C434(0LL, v100);
        if ( LOBYTE(Component_srcLineSprite[3].fields.mcMyTrans) )
          v101 = -1.0;
        else
          v101 = 1.0;
        v102 = 1.0;
        v103 = 1.0;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v101, 0LL);
      }
    }
    else
    {
      v104 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v92, 0LL);
      v106 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v92, 0LL);
      v107 = BattleFBXComponent_TypeInfo;
      if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      }
      if ( !v106 )
        sub_B2C434(v107, v105);
      v108 = System_String__IndexOf_44377880(v106, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      if ( !v104 )
        sub_B2C434(v108, v109);
      v110 = System_String__Substring_44369268(v104, 0, v108, 0LL);
      v111 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v92, 0LL);
      if ( !v111 )
        sub_B2C434(0LL, v112);
      v113 = System_String__IndexOf_44377880(v111, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
      v114 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v92, 0LL);
      if ( !v114 )
        sub_B2C434(0LL, v115);
      v116 = System_String__Substring(v114, v113 + 7, 0LL);
      v118 = v116;
      if ( !v116 )
        sub_B2C434(0LL, v117);
      if ( (System_String__IndexOf_44377880(v116, (System_String_o *)StringLiteral_80/*" "*/, 0LL) & 0x80000000) == 0 )
      {
        v119 = System_String__IndexOf_44377880(v118, (System_String_o *)StringLiteral_80/*" "*/, 0LL);
        v118 = System_String__Substring_44369268(v118, 0, v119, 0LL);
      }
      v120 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !v120 )
        sub_B2C434(0LL, 0LL);
      if ( !v120->max_length )
      {
        v251 = sub_B2C460(v120);
        sub_B2C400(v251, 0LL);
      }
      v120->m_Items[2] = 95;
      if ( !v118 )
        sub_B2C434(v120, v120);
      v121 = System_String__Split(v118, v120, 0LL);
      v123 = v121;
      if ( !v121 )
        sub_B2C434(0LL, v122);
      v124 = *(_QWORD *)&v121->max_length;
      key = (System_Xml_XmlQualifiedName_o *)v110;
      if ( (int)v124 < 1 )
      {
LABEL_68:
        v127 = 0;
        PrefabNode = 0LL;
      }
      else
      {
        v125 = 0LL;
        while ( 1 )
        {
          if ( v125 >= (unsigned int)v124 )
          {
            v248 = sub_B2C460(v121);
            sub_B2C400(v248, 0LL);
          }
          v126 = v123->m_Items[v125];
          result = 99;
          v121 = (System_String_array *)System_Int32__TryParse(v126, &result, 0LL);
          if ( ((unsigned __int8)v121 & 1) != 0 )
          {
            v121 = (System_String_array *)System_Int32__Parse(v126, 0LL);
            if ( (_DWORD)v121 == LimitImageIndex )
              break;
          }
          LODWORD(v124) = v123->max_length;
          if ( (__int64)++v125 >= (int)v124 )
            goto LABEL_68;
        }
        v130 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v92, 0LL);
        v131 = BattleFBXComponent_TypeInfo;
        if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        }
        if ( !v130 )
          sub_B2C434(v131, v129);
        if ( System_String__StartsWith(v130, BattleFBXComponent_TypeInfo->static_fields->prefabMarker, 0LL) )
          goto LABEL_79;
        v134 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v92, 0LL);
        v135 = BattleFBXComponent_TypeInfo;
        if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        }
        if ( !v134 )
          sub_B2C434(v135, v133);
        if ( System_String__StartsWith(v134, BattleFBXComponent_TypeInfo->static_fields->chrnodeMarker, 0LL) )
LABEL_79:
          PrefabNode = (UnityEngine_Object_o *)BattleFBXComponent__CreatePrefabNode(
                                                 (BattleFBXComponent_o *)v258,
                                                 (UnityEngine_Transform_o *)v92,
                                                 svtId,
                                                 v263,
                                                 v132);
        else
          PrefabNode = 0LL;
        v127 = 1;
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL) )
      {
        v136 = UnityEngine_Component__get_gameObject(v258, 0LL);
        if ( !v136 )
          sub_B2C434(0LL, v137);
        v138 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 v136,
                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v139 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v138, 0LL, 0LL);
        if ( v139 )
        {
          if ( !v138 )
            sub_B2C434(v139, v140);
          if ( LOBYTE(v138[3].fields.mcMyTrans) )
          {
            if ( !PrefabNode )
              sub_B2C434(v139, v140);
            v141 = UnityEngine_Object__get_name(PrefabNode, 0LL);
            if ( !v141 )
              sub_B2C434(0LL, v142);
            if ( (System_String__IndexOf_44377880(v141, (System_String_o *)StringLiteral_22218/*"spiral"*/, 0LL) & 0x80000000) == 0 )
            {
              v143 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              v144 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v144 )
                sub_B2C434(0LL, v145);
              LODWORD(v146) = (unsigned int)UnityEngine_Transform__get_localScale(v144, 0LL);
              v147 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v147 )
                sub_B2C434(0LL, v148);
              localScale = UnityEngine_Transform__get_localScale(v147, 0LL);
              y = localScale.fields.y;
              v150 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v150 )
                sub_B2C434(0LL, v151);
              *(UnityEngine_Vector3_o *)(&v154 - 2) = UnityEngine_Transform__get_localScale(v150, 0LL);
              if ( !v143 )
                sub_B2C434(v152, v153);
              v155 = -v146;
              v156 = y;
              UnityEngine_Transform__set_localScale(v143, *(UnityEngine_Vector3_o *)(&v154 - 2), 0LL);
              v157 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)PrefabNode, 0LL);
              if ( !v157 )
                sub_B2C434(0LL, v158);
              UnityEngine_Transform__Rotate_35436916(v157, 0.0, 180.0, 0.0, 0LL);
            }
          }
        }
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v159 = UnityEngine_Object__op_Inequality(PrefabNode, 0LL, 0LL);
      if ( v159 )
      {
        if ( !PrefabNode )
          sub_B2C434(v159, v160);
        v161 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                 (UnityEngine_GameObject_o *)PrefabNode,
                 (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_XWeaponTrail___);
        v163 = v161;
        if ( !v161 )
          sub_B2C434(0LL, v162);
        v164 = *(_QWORD *)&v161->max_length;
        if ( (int)v164 >= 1 )
        {
          v165 = 0LL;
          do
          {
            if ( v165 >= (unsigned int)v164 )
            {
              v249 = sub_B2C460(v161);
              sub_B2C400(v249, 0LL);
            }
            if ( !*p_componentsXWeaponTrail )
              sub_B2C434(0LL, v162);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              *p_componentsXWeaponTrail,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v163->m_Items[v165],
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_XWeaponTrail__Add__);
            LODWORD(v164) = v163->max_length;
            ++v165;
          }
          while ( (__int64)v165 < (int)v164 );
        }
      }
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v92,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SkinnedMeshRenderer___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v82 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      if ( (v82 & 1) != 0 )
      {
        v167 = UnityEngine_Component__get_gameObject(v92, 0LL);
        v168 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2769/*"Battle2D"*/, 0LL);
        if ( !v167 )
          sub_B2C434(v168, (unsigned int)v168);
        UnityEngine_GameObject__set_layer(v167, v168, 0LL);
        if ( !v254 )
          sub_B2C434(0LL, v169);
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
          v254,
          key,
          (System_Xml_Schema_XmlSchemaObject_o *)Component_WebViewObject,
          (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__set_Item__);
        v171 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v258[6].klass;
        if ( !v171 )
          sub_B2C434(0LL, v170);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v171,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_WebViewObject,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Renderer__Add__);
        if ( !Component_WebViewObject )
          sub_B2C434(v172, v173);
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_WebViewObject, v127, 0LL);
        v255 &= !v127;
      }
    }
  }
  v260[0] = 813;
  v261 = 1;
  v179 = *(_QWORD *)v85;
  if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
  {
    v180 = 0LL;
    v181 = (int *)(*(_QWORD *)(v179 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v181 - 1) != System_IDisposable_TypeInfo )
    {
      ++v180;
      v181 += 4;
      if ( v180 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
        goto LABEL_134;
    }
    v182 = v179 + 16LL * *v181 + 312;
  }
  else
  {
LABEL_134:
    v182 = sub_AC5258(v85, System_IDisposable_TypeInfo, 0LL, v178);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v182)(v85, *(_QWORD *)(v182 + 8));
  actorEffectDict = v254;
  v183 = 0;
  v261 = 0;
  if ( (v255 & 1) != 0 )
  {
    if ( !v254 )
      goto LABEL_219;
    actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values((System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)v254, (const MethodInfo_2DB1A64 *)Method_System_Collections_Generic_Dictionary_string__SkinnedMeshRenderer__get_Values__);
    if ( !actorEffectDict )
      goto LABEL_219;
    System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
      &v259,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)actorEffectDict,
      (const MethodInfo_29C7178 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__SkinnedMeshRenderer__GetEnumerator__);
    for ( i = v259;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &i,
            (const MethodInfo_27541F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__MoveNext__);
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)i.fields.currentValue, 1, 0LL) )
    {
      if ( !i.fields.currentValue )
        sub_B2C434(0LL, v184);
    }
    v260[0] = 870;
    v183 = ++v261;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
      &i,
      (const MethodInfo_27541EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__SkinnedMeshRenderer__Dispose__);
    if ( v183 )
    {
      v185 = v183 - 1;
      if ( v260[v183 - 1] == 870 )
      {
        --v183;
        v261 = v185;
      }
    }
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                                                                    v253,
                                                                                                    (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
  if ( !actorEffectDict )
    goto LABEL_219;
  entries = actorEffectDict->fields.entries;
  v187 = actorEffectDict;
  if ( (int)entries >= 1 )
  {
    v188 = 0LL;
    while ( v188 < (unsigned int)entries )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v258[6].klass;
      if ( !actorEffectDict )
        goto LABEL_219;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)actorEffectDict,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v187->fields.count + v188),
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Renderer__Add__);
      LODWORD(entries) = v187->fields.entries;
      if ( (__int64)++v188 >= (int)entries )
        goto LABEL_154;
    }
LABEL_220:
    v250 = sub_B2C460(actorEffectDict);
    sub_B2C400(v250, 0LL);
  }
LABEL_154:
  actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                                                                    v253,
                                                                                                    (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
  if ( !actorEffectDict )
    goto LABEL_219;
  v189 = actorEffectDict->fields.entries;
  v190 = actorEffectDict;
  if ( (int)v189 >= 1 )
  {
    v191 = 0LL;
    while ( v191 < (unsigned int)v189 )
    {
      actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v258[6].klass;
      if ( !actorEffectDict )
        goto LABEL_219;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)actorEffectDict,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&v190->fields.count + v191),
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Renderer__Add__);
      LODWORD(v189) = v190->fields.entries;
      if ( (__int64)++v191 >= (int)v189 )
        goto LABEL_160;
    }
    goto LABEL_220;
  }
LABEL_160:
  v192 = BattleFBXComponent___c_TypeInfo;
  if ( (BYTE3(BattleFBXComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent___c_TypeInfo);
    v192 = BattleFBXComponent___c_TypeInfo;
  }
  v193 = v192->static_fields;
  _9__56_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v193->__9__56_1;
  if ( !_9__56_1 )
  {
    if ( (BYTE3(v192->vtable._0_Equals.methodPtr) & 4) != 0 && !v192->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v192);
      v193 = BattleFBXComponent___c_TypeInfo->static_fields;
    }
    v195 = (Il2CppObject *)v193->__9;
    _9__56_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Transform__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__56_1,
      v195,
      Method_BattleFBXComponent___c__inSetEvolutionLevel_b__56_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_Transform__bool___ctor__);
    v196 = BattleFBXComponent___c_TypeInfo->static_fields;
    v196->__9__56_1 = (struct System_Func_Transform__bool__o *)_9__56_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v196->__9__56_1,
      (System_Int32_array **)_9__56_1,
      v197,
      v198,
      v199,
      v200,
      v201,
      v202);
  }
  actorEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                    source,
                                                                                                    (System_Func_TSource__bool__o *)_9__56_1,
                                                                                                    (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !actorEffectDict )
LABEL_219:
    sub_B2C434(actorEffectDict, gameObject);
  v204 = actorEffectDict->klass;
  v205 = actorEffectDict;
  if ( *(_WORD *)&actorEffectDict->klass->_2.bitflags1 )
  {
    v206 = 0LL;
    v207 = &v204->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)v207 - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      ++v206;
      v207 += 4;
      if ( v206 >= *(unsigned __int16 *)&actorEffectDict->klass->_2.bitflags1 )
        goto LABEL_173;
    }
    v208 = (__int64)(&v204->vtable._0_Equals.method + 2 * *v207);
  }
  else
  {
LABEL_173:
    v208 = sub_AC5258(actorEffectDict, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL, v203);
  }
  v211 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, _QWORD))v208)(
           v205,
           *(_QWORD *)(v208 + 8));
  if ( !v211 )
    sub_B2C434(0LL, v209);
  while ( 1 )
  {
    v238 = *(_QWORD *)v211;
    if ( *(_WORD *)(*(_QWORD *)v211 + 298LL) )
    {
      v239 = 0LL;
      v240 = (int *)(*(_QWORD *)(v238 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v240 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v239;
        v240 += 4;
        if ( v239 >= *(unsigned __int16 *)(*(_QWORD *)v211 + 298LL) )
          goto LABEL_201;
      }
      v241 = v238 + 16LL * *v240 + 312;
    }
    else
    {
LABEL_201:
      v241 = sub_AC5258(v211, System_Collections_IEnumerator_TypeInfo, 0LL, v210);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v241)(v211, *(_QWORD *)(v241 + 8)) & 1) == 0 )
      break;
    v212 = *(_QWORD *)v211;
    if ( *(_WORD *)(*(_QWORD *)v211 + 298LL) )
    {
      v213 = 0LL;
      v214 = (int *)(*(_QWORD *)(v212 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v214 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        ++v213;
        v214 += 4;
        if ( v213 >= *(unsigned __int16 *)(*(_QWORD *)v211 + 298LL) )
          goto LABEL_181;
      }
      v215 = v212 + 16LL * *v214 + 312;
    }
    else
    {
LABEL_181:
      v215 = sub_AC5258(v211, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL, v242);
    }
    v216 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v215)(v211, *(_QWORD *)(v215 + 8));
    v218 = (UnityEngine_Transform_o *)v216;
    if ( !v216 )
      sub_B2C434(0LL, v217);
    v220 = UnityEngine_Object__get_name(v216, 0LL);
    v221 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v221 = BattleFBXComponent_TypeInfo;
    }
    enItemMarker = v221->static_fields->enItemMarker;
    if ( !enItemMarker )
      sub_B2C434(v221, v219);
    if ( !v220 )
      sub_B2C434(v221, v219);
    v223 = System_String__Substring(v220, enItemMarker->fields.m_stringLength, 0LL);
    parent = UnityEngine_Transform__get_parent(v218, 0LL);
    v225 = System_String__Concat_44305532(BattleFBXComponent_TypeInfo->static_fields->enWeaponMarker, v223, 0LL);
    if ( !parent )
      sub_B2C434(v225, v225);
    v226 = (System_Int32_array **)UnityEngine_Transform__Find(parent, v225, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v226, 0LL, 0LL) )
    {
      v227 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v218, 0LL);
      if ( !v227 )
        sub_B2C434(0LL, v228);
      v229 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
               v227,
               (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_LookAtTarget___);
      v237 = v229;
      if ( !v229 )
        sub_B2C434(0LL, v230);
      v229[1].klass = (Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_c *)v226;
      sub_B2C2F8((BattleServantConfConponent_o *)&v229[1], v226, v231, v232, v233, v234, v235, v236);
      LODWORD(v237[1].monitor) = 1120403456;
    }
  }
  v260[v183] = 1132;
  v243 = ++v261;
  v244 = *(_QWORD *)v211;
  if ( *(_WORD *)(*(_QWORD *)v211 + 298LL) )
  {
    v245 = 0LL;
    v246 = (int *)(*(_QWORD *)(v244 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v246 - 1) != System_IDisposable_TypeInfo )
    {
      ++v245;
      v246 += 4;
      if ( v245 >= *(unsigned __int16 *)(*(_QWORD *)v211 + 298LL) )
        goto LABEL_209;
    }
    v247 = v244 + 16LL * *v246 + 312;
  }
  else
  {
LABEL_209:
    v247 = sub_AC5258(v211, System_IDisposable_TypeInfo, 0LL, v242);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v247)(v211, *(_QWORD *)(v247 + 8));
  if ( v243 && v260[v243 - 1] == 1132 )
    v261 = v243 - 1;
}


void __fastcall BattleFBXComponent__loadAnimationEvents(
        BattleFBXComponent_o *this,
        UnityEngine_TextAsset_o *data,
        int32_t svtId,
        int32_t level,
        const MethodInfo *method)
{
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
  struct BattleFBXComponent_AnimEvent_array_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t LimitImageIndex; // w21
  __int64 Instance; // x0
  __int64 v33; // x1
  System_String_o *text; // x22
  int v35; // w8
  int v36; // w8
  __int64 v37; // x22
  System_String_o **v38; // x28
  unsigned int v39; // w19
  System_String_o *v40; // x23
  System_Char_array *v41; // x24
  __int64 v42; // x8
  __int64 v43; // x23
  System_String_o *v44; // x25
  int32_t v45; // w26
  System_String_o *v46; // x27
  BattleFBXComponent_c *v47; // x0
  int32_t v48; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x25
  struct BattleFBXComponent_AnimEvent_array_array *v50; // x26
  int v51; // w8
  int v52; // w26
  float v53; // s8
  unsigned int v54; // w9
  int v55; // w21
  System_String_o **v56; // x24
  System_Int32_array **v57; // x28
  System_Int32_array **v58; // x27
  float v59; // s9
  __int64 v60; // x26
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x23
  Il2CppClass **v80; // x0
  __int64 v81; // x0
  __int64 v82; // x0
  int32_t v83; // [xsp+Ch] [xbp-84h]
  struct BattleFBXComponent_AnimEvent_array_array **p_eventlist; // [xsp+10h] [xbp-80h]
  int32_t Index; // [xsp+20h] [xbp-70h]
  WarEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4186910 & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent_AnimEvent_____TypeInfo, data);
    sub_B2C35C(&BattleFBXComponent_AnimEvent_TypeInfo, v9);
    sub_B2C35C(&AnimationList_TypeInfo, v10);
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v11);
    sub_B2C35C(&char___TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo, v19);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&StringLiteral_313/*"#"*/, v22);
    sub_B2C35C(&StringLiteral_699/*","*/, v23);
    byte_4186910 = 1;
  }
  entity = 0LL;
  BattleFBXComponent__InitAnimNameDict(this, (const MethodInfo *)data);
  v24 = (struct BattleFBXComponent_AnimEvent_array_array *)sub_B2C374(BattleFBXComponent_AnimEvent_____TypeInfo, 50LL);
  this->fields.eventlist = v24;
  p_eventlist = &this->fields.eventlist;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventlist,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, level, 1, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_74;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_74;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &entity,
               svtId,
               (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_74;
    if ( *(&entity->fields.startType + 1) == 4 )
      LimitImageIndex = 1;
  }
  if ( !data )
    goto LABEL_74;
  text = UnityEngine_TextAsset__get_text(data, 0LL);
  Instance = sub_B2C374(char___TypeInfo, 2LL);
  if ( !Instance )
    goto LABEL_74;
  v35 = *(_DWORD *)(Instance + 24);
  v33 = Instance;
  if ( !v35 )
    goto LABEL_75;
  *(_WORD *)(Instance + 32) = 13;
  if ( v35 == 1 )
    goto LABEL_75;
  *(_WORD *)(Instance + 34) = 10;
  if ( !text || (Instance = (__int64)System_String__Split(text, (System_Char_array *)Instance, 0LL)) == 0 )
LABEL_74:
    sub_B2C434(Instance, v33);
  v36 = *(_DWORD *)(Instance + 24);
  v37 = Instance;
  if ( v36 >= 1 )
  {
    v38 = (System_String_o **)&StringLiteral_313/*"#"*/;
    v39 = 0;
    v83 = LimitImageIndex;
    while ( v39 < v36 )
    {
      v40 = *(System_String_o **)(v37 + 8LL * (int)v39 + 32);
      Instance = sub_B2C374(char___TypeInfo, 1LL);
      if ( !StringLiteral_699/*","*/ )
        goto LABEL_74;
      v41 = (System_Char_array *)Instance;
      Instance = System_String__get_Chars((System_String_o *)StringLiteral_699/*","*/, 0, 0LL);
      if ( !v41 )
        goto LABEL_74;
      if ( !v41->max_length )
        break;
      v41->m_Items[2] = Instance;
      if ( !v40 )
        goto LABEL_74;
      Instance = (__int64)System_String__Split(v40, v41, 0LL);
      if ( !Instance )
        goto LABEL_74;
      v42 = *(_QWORD *)(Instance + 24);
      v43 = Instance;
      if ( v42 )
      {
        if ( !(_DWORD)v42 )
          break;
        Instance = *(_QWORD *)(Instance + 32);
        if ( !Instance )
          goto LABEL_74;
        Instance = System_String__StartsWith((System_String_o *)Instance, *v38, 0LL);
        if ( (Instance & 1) == 0 && *(int *)(v43 + 24) >= 6 )
        {
          Instance = System_Int32__Parse(*(System_String_o **)(v43 + 32), 0LL);
          if ( *(_DWORD *)(v43 + 24) <= 1u )
            break;
          if ( (_DWORD)Instance == LimitImageIndex )
          {
            v44 = *(System_String_o **)(v43 + 40);
            Instance = (__int64)BattleFBXComponent_TypeInfo;
            if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
            }
            if ( !v44 )
              goto LABEL_74;
            v45 = System_String__IndexOf_44377880(v44, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL);
            v46 = v44;
            if ( (v45 & 0x80000000) == 0 )
            {
              v47 = BattleFBXComponent_TypeInfo;
              if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
                v47 = BattleFBXComponent_TypeInfo;
              }
              v48 = System_String__IndexOf_44377880(v44, v47->static_fields->levelMarker, 0LL);
              v46 = System_String__Substring_44369268(v44, 0, v48, 0LL);
            }
            if ( (BYTE3(AnimationList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AnimationList_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AnimationList_TypeInfo);
            }
            Index = AnimationList__getIndex(v46, 0LL);
            if ( (v45 & 0x80000000) == 0 )
            {
              Instance = (__int64)this->fields.RealAnimNames;
              if ( !Instance )
                goto LABEL_74;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
                (System_Xml_XmlQualifiedName_o *)v46,
                (System_Xml_Schema_XmlSchemaObject_o *)v44,
                (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
              Instance = (__int64)this->fields.CommonAnimNames;
              if ( !Instance )
                goto LABEL_74;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
                (System_Xml_XmlQualifiedName_o *)v44,
                (System_Xml_Schema_XmlSchemaObject_o *)v46,
                (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
            }
            v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleFBXComponent_AnimEvent__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v49,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent___ctor__);
            v50 = *p_eventlist;
            if ( !*p_eventlist )
              goto LABEL_74;
            if ( Index >= v50->max_length )
              break;
            if ( !v50->m_Items[Index] )
            {
              v51 = *(_DWORD *)(v43 + 24);
              if ( v51 >= 3 )
              {
                v52 = 2;
                do
                {
                  if ( v52 >= (unsigned int)v51 )
                    goto LABEL_75;
                  Instance = *(_QWORD *)(v43 + 8LL * v52 + 32);
                  if ( !Instance )
                    goto LABEL_74;
                  if ( !*(_DWORD *)(Instance + 16) )
                    break;
                  v53 = System_Single__Parse((System_String_o *)Instance, 0LL);
                  Instance = (__int64)BattleFBXComponent_TypeInfo;
                  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
                    Instance = (__int64)BattleFBXComponent_TypeInfo;
                  }
                  v54 = *(_DWORD *)(v43 + 24);
                  if ( v52 + 1 >= v54 )
                    goto LABEL_75;
                  v55 = v52 + 2;
                  if ( v52 + 2 >= v54 )
                    goto LABEL_75;
                  v56 = v38;
                  v57 = *(System_Int32_array ***)(v43 + 8LL * (v52 + 1) + 32);
                  v58 = *(System_Int32_array ***)(v43 + 8LL * (v52 + 2) + 32);
                  v59 = *(float *)(*(_QWORD *)(Instance + 184) + 4LL);
                  v60 = sub_B2C42C(BattleFBXComponent_AnimEvent_TypeInfo);
                  BattleFBXComponent_AnimEvent___ctor((BattleFBXComponent_AnimEvent_o *)v60, 0LL);
                  if ( !v60 )
                    goto LABEL_74;
                  *(float *)(v60 + 16) = v53 / v59;
                  *(_QWORD *)(v60 + 24) = v57;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v60 + 24), v57, v61, v62, v63, v64, v65, v66);
                  *(_QWORD *)(v60 + 32) = v58;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v60 + 32), v58, v67, v68, v69, v70, v71, v72);
                  if ( !v49 )
                    goto LABEL_74;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v49,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__Add__);
                  v51 = *(_DWORD *)(v43 + 24);
                  v52 = v55 + 1;
                  v38 = v56;
                }
                while ( v55 + 1 < v51 );
                v50 = *p_eventlist;
              }
            }
            if ( !v49 )
              goto LABEL_74;
            Instance = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleFBXComponent_AnimEvent__ToArray__);
            if ( !v50 )
              goto LABEL_74;
            v79 = (System_Int32_array **)Instance;
            if ( Instance )
            {
              Instance = sub_B2C41C(Instance, v50->obj.klass->_1.element_class);
              if ( !Instance )
              {
                v82 = sub_B2C454();
                sub_B2C400(v82, 0LL);
              }
            }
            if ( Index >= v50->max_length )
              break;
            v80 = &v50->obj.klass + Index;
            v80[4] = (Il2CppClass *)v79;
            sub_B2C2F8((BattleServantConfConponent_o *)(v80 + 4), v79, v73, v74, v75, v76, v77, v78);
            LimitImageIndex = v83;
          }
        }
      }
      v36 = *(_DWORD *)(v37 + 24);
      if ( (int)++v39 >= v36 )
        return;
    }
LABEL_75:
    v81 = sub_B2C460(Instance);
    sub_B2C400(v81, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_418690A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1975/*"AnimationCheck"*/, filename);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_418690A = 1;
  }
  BattleFBXComponent__playAnimationTimeline(this, filename, (System_String_o *)StringLiteral_1/*""*/, v3, v4);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v9);
  if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_35310748(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_1975/*"AnimationCheck"*/,
      0LL);
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_1975/*"AnimationCheck"*/,
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
  System_String_o *currentAnimName; // x21
  System_String_o *currentCommonAnimName; // x1
  const MethodInfo *v10; // x3
  long double v11; // q0
  UnityEngine_Object_o *animationComponent; // x22
  long double v13; // q8
  __int64 v14; // x1
  UnityEngine_Animation_o *Item; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  __int64 v23; // x3
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v25; // x22
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  UnityEngine_Animation_c *v30; // x8
  UnityEngine_Animation_o *v31; // x22
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **v33; // x11
  __int64 v34; // x0

  if ( (byte_418690B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, animname);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    byte_418690B = 1;
  }
  BattleFBXComponent__playAnimation(this, animname, (const MethodInfo *)tag);
  currentAnimName = this->fields.currentAnimName;
  currentCommonAnimName = this->fields.currentCommonAnimName;
  this->fields.isDirty = 1;
  *(float *)&v11 = BattleFBXComponent__getTagTime(this, currentCommonAnimName, tag, v10);
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  v13 = v11;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    Item = this->fields.animationComponent;
    if ( Item )
    {
      Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)Item, *(float *)&v13, 0LL);
        Item = this->fields.animationComponent;
        if ( Item )
        {
          Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, currentAnimName, 0LL);
          if ( Item )
          {
            UnityEngine_AnimationState__set_speed((UnityEngine_AnimationState_o *)Item, 0.0, 0LL);
            goto LABEL_33;
          }
        }
      }
    }
LABEL_34:
    sub_B2C434(Item, v14);
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_34;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0LL);
    if ( !Item )
      goto LABEL_34;
    klass = Item->klass;
    v25 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v26;
        p_offset += 2;
        if ( v26 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_22;
      }
      v28 = (__int64)(&klass->vtable._4_GetEnumerator.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_22:
      v28 = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 4LL, v23);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, long double))v28)(v25, *(_QWORD *)(v28 + 8), v13);
    Item = (UnityEngine_Animation_o *)this->fields.simpleAnimationComponent;
    if ( !Item )
      goto LABEL_34;
    Item = (UnityEngine_Animation_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Item, currentAnimName, 0LL);
    if ( !Item )
      goto LABEL_34;
    v30 = Item->klass;
    v31 = Item;
    if ( *(_WORD *)&Item->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = (SimpleAnimation_State_c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v32;
        v33 += 2;
        if ( v32 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
          goto LABEL_30;
      }
      v34 = (__int64)(&v30[1]._1.this_arg.bits + 4 * *(_DWORD *)v33);
    }
    else
    {
LABEL_30:
      v34 = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 8LL, v29);
    }
    (*(void (__fastcall **)(UnityEngine_Animation_o *, _QWORD, float))v34)(v31, *(_QWORD *)(v34 + 8), 0.0);
  }
LABEL_33:
  this->fields.currentAnimName = currentAnimName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentAnimName,
    (System_Int32_array **)currentAnimName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.currentAnimTime = *(float *)&v13;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  srcLineSprite_o *Component_srcLineSprite; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *RealAnimNames; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *animationComponent; // x22
  __int64 v31; // x1
  UnityEngine_Animation_o *v32; // x0
  __int64 v33; // x1
  UnityEngine_Animation_o *v34; // x0
  UnityEngine_TrackedReference_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Animation_o *v37; // x0
  UnityEngine_AnimationState_o *v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  __int64 v47; // x1
  SimpleAnimation_o *v48; // x0
  __int64 v49; // x1
  SimpleAnimation_o *v50; // x0
  __int64 v51; // x1
  SimpleAnimation_o *v52; // x0
  SimpleAnimation_State_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x3
  SimpleAnimation_State_o *v56; // x22
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v58; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x1

  Item = filename;
  if ( (byte_4186908 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, filename);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v11);
    byte_4186908 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gameObject,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_srcLineSprite,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      Item = BattleActorControl__OverwriteAnimation((BattleActorControl_o *)Component_srcLineSprite, Item, 1, 0LL);
      LOBYTE(Component_srcLineSprite[2].fields.mcTweenScaleP) = 1;
      goto LABEL_10;
    }
LABEL_44:
    sub_B2C434(gameObject, v13);
  }
LABEL_10:
  this->fields.currentCommonAnimName = Item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentCommonAnimName,
    (System_Int32_array **)Item,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  RealAnimNames = this->fields.RealAnimNames;
  if ( RealAnimNames
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)RealAnimNames,
         (System_Xml_XmlQualifiedName_o *)Item,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v23 = this->fields.RealAnimNames;
    if ( !v23 )
      sub_B2C434(0LL, v21);
    Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v23,
                                (System_Type_o *)Item,
                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
  }
  BattleFBXComponent__setupAnimation(this, v21);
  this->fields.currentAnimName = Item;
  this->fields.isDirty = 1;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentAnimName,
    (System_Int32_array **)Item,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  *(_QWORD *)&this->fields.currentAnimTime = 0LL;
  this->fields.isStop = 0;
  animationComponent = (UnityEngine_Object_o *)this->fields.animationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
  {
    v32 = this->fields.animationComponent;
    if ( !v32 )
      sub_B2C434(0LL, v31);
    UnityEngine_Animation__Play_50201580(v32, Item, 0LL);
    v34 = this->fields.animationComponent;
    if ( !v34 )
      sub_B2C434(0LL, v33);
    v35 = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(v34, Item, 0LL);
    if ( !UnityEngine_TrackedReference__op_Equality(v35, 0LL, 0LL) )
    {
      v37 = this->fields.animationComponent;
      if ( !v37 )
        sub_B2C434(0LL, v36);
      v38 = UnityEngine_Animation__get_Item(v37, Item, 0LL);
      if ( !v38 )
        sub_B2C434(0LL, v39);
      UnityEngine_AnimationState__set_speed(v38, 0.0, 0LL);
LABEL_40:
      this->fields.animename = Item;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.animename,
        (System_Int32_array **)Item,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      if ( startEvent )
      {
        if ( startEvent->fields.m_stringLength >= 1 )
        {
          this->fields.currentAnimTime = BattleFBXComponent__getTagTime(this, Item, startEvent, v61);
          BattleFBXComponent__AnimUpdate(this, 0.0, v62);
        }
      }
    }
  }
  else
  {
    simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
      goto LABEL_40;
    v48 = this->fields.simpleAnimationComponent;
    if ( !v48 )
      sub_B2C434(0LL, v47);
    SimpleAnimation__Play_16486620(v48, Item, 0LL);
    v50 = this->fields.simpleAnimationComponent;
    if ( !v50 )
      sub_B2C434(0LL, v49);
    if ( SimpleAnimation__get_Item(v50, Item, 0LL) )
    {
      v52 = this->fields.simpleAnimationComponent;
      if ( !v52 )
        sub_B2C434(0LL, v51);
      v53 = SimpleAnimation__get_Item(v52, Item, 0LL);
      v56 = v53;
      if ( !v53 )
        sub_B2C434(0LL, v54);
      klass = v53->klass;
      if ( *(_WORD *)&v53->klass->_2.bitflags1 )
      {
        v58 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v58;
          p_offset += 2;
          if ( v58 >= *(unsigned __int16 *)&v53->klass->_2.bitflags1 )
            goto LABEL_37;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 8].method;
      }
      else
      {
LABEL_37:
        p_method = sub_AC5258(v53, SimpleAnimation_State_TypeInfo, 8LL, v55);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v56, *(_QWORD *)(p_method + 8), 0.0);
      goto LABEL_40;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *rootTransform; // x0
  struct UnityEngine_Animation_o *Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct SimpleAnimation_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_41868FA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, value);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v10);
    byte_41868FA = 1;
  }
  this->fields.rootTransform = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rootTransform,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform;
  if ( !rootTransform
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL
    || (Component_srcLineSprite = (struct UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)rootTransform,
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___),
        this->fields.animationComponent = Component_srcLineSprite,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.animationComponent,
          (System_Int32_array **)Component_srcLineSprite,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (rootTransform = (UnityEngine_Component_o *)this->fields.rootTransform) == 0LL)
    || (rootTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(rootTransform, 0LL)) == 0LL )
  {
    sub_B2C434(rootTransform, v11);
  }
  v20 = (struct SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)rootTransform,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimationComponent,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall BattleFBXComponent__setupAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *rootTransform; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x0
  const MethodInfo *v9; // x2
  BattleFBXComponent_c *v10; // x0
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Transform_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4186907 & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_17420/*"chr"*/, v4);
    byte_4186907 = 1;
  }
  rootTransform = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(rootTransform, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      sub_B2C434(0LL, v7);
    v8 = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_17420/*"chr"*/, 0LL);
    BattleFBXComponent__set_RootTransform(this, v8, v9);
    v10 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v10 = BattleFBXComponent_TypeInfo;
    }
    v10->static_fields->EnableEvent = 0;
  }
  v11 = (UnityEngine_Object_o *)this->fields.rootTransform;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
  {
    v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    BattleFBXComponent__set_RootTransform(this, v12, v13);
  }
}


void __fastcall BattleFBXComponent__stopAnimation(BattleFBXComponent_o *this, const MethodInfo *method)
{
  this->fields.isStop = 1;
}


void __fastcall BattleFBXComponent__stopAnimationCheck(BattleFBXComponent_o *this, const MethodInfo *method)
{
  if ( (byte_418690D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1975/*"AnimationCheck"*/, method);
    byte_418690D = 1;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_35310748(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_1975/*"AnimationCheck"*/,
    0LL);
}


void __fastcall BattleFBXComponent__stopParticle(BattleFBXComponent_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x19
  unsigned int v7; // w20
  __int64 v8; // x0

  if ( (byte_4186906 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, method);
    byte_4186906 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !gameObject )
    goto LABEL_12;
  v5 = *((_DWORD *)gameObject + 6);
  v6 = gameObject;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
      {
        v8 = sub_B2C460(gameObject);
        sub_B2C400(v8, 0LL);
      }
      gameObject = (void *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !gameObject )
        break;
      UnityEngine_ParticleSystem__Stop_50259500((UnityEngine_ParticleSystem_o *)gameObject, 0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        return;
    }
LABEL_12:
    sub_B2C434(gameObject, v4);
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
  BattleFBXComponent__AnimationCheck_d__69_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleFBXComponent_o *_4__this; // x21
  UnityEngine_Object_o *animationComponent; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_o *v15; // x19
  int v16; // w8
  System_Xml_XmlQualifiedName_o *animename; // x19
  const MethodInfo *v18; // x2
  bool result; // w0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4186A76 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    this = (BattleFBXComponent__AnimationCheck_d__69_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4186A76 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_34;
      animationComponent = (UnityEngine_Object_o *)_4__this->fields.animationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(animationComponent, 0LL, 0LL) )
      {
LABEL_28:
        this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.animationComponent;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v2->fields.__2__current = 0LL;
            p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
            sub_B2C2F8(p__2__current, 0LL, v20, v21, v22, v23, v24, v25);
            result = 1;
            *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
            return result;
          }
          goto LABEL_31;
        }
        goto LABEL_34;
      }
      simpleAnimationComponent = (UnityEngine_Object_o *)_4__this->fields.simpleAnimationComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
        goto LABEL_31;
LABEL_15:
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.simpleAnimationComponent;
      if ( !this )
LABEL_34:
        sub_B2C434(this, method);
      if ( !SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0LL) )
      {
LABEL_31:
        v34 = 0;
        v27 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v34);
        v2->fields.__2__current = (Il2CppObject *)v27;
        v15 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v15, v27, v28, v29, v30, v31, v32, v33);
        v16 = 3;
        goto LABEL_32;
      }
      v2->fields.__2__current = 0LL;
      v15 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(v15, 0LL, v9, v10, v11, v12, v13, v14);
      v16 = 2;
LABEL_32:
      *(_DWORD *)&v15[-1].fields.isOpenAfter = v16;
      return 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_28;
      goto LABEL_34;
    case 2:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_34;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_34;
      if ( !_4__this->fields.Complete )
        return 0;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_34;
      animename = (System_Xml_XmlQualifiedName_o *)_4__this->fields.animename;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
              animename,
              (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
        goto LABEL_24;
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.CommonAnimNames;
      if ( !this )
        goto LABEL_34;
      animename = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this,
                                                     (System_Type_o *)animename,
                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_24:
      this = (BattleFBXComponent__AnimationCheck_d__69_o *)_4__this->fields.Complete;
      if ( !this )
        goto LABEL_34;
      BattleFBXComponent_onEventDelegate__Invoke(
        (BattleFBXComponent_onEventDelegate_o *)this,
        (System_String_o *)animename,
        v18);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleFBXComponent__AnimationCheck_d__69_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A73 & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent___c_TypeInfo, v1);
    byte_4186A73 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleFBXComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleFBXComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v4; // x20
  System_String_o *v6; // x19

  if ( (byte_4186A74 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_B2C35C(&BattleFBXComponent_TypeInfo, p);
    byte_4186A74 = 1;
  }
  if ( !p )
    goto LABEL_17;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_17;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = (System_String_o *)this;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_17;
  if ( System_String__Contains(v4, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    return 1;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_17;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v6 = (System_String_o *)this;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  }
  if ( !v6 )
LABEL_17:
    sub_B2C434(this, p);
  return System_String__Contains(v6, BattleFBXComponent_TypeInfo->static_fields->sideflipMarker, 0LL);
}


bool __fastcall BattleFBXComponent___c___inSetEvolutionLevel_b__56_1(
        BattleFBXComponent___c_o *this,
        UnityEngine_Transform_o *p,
        const MethodInfo *method)
{
  System_String_o *v4; // x19

  if ( (byte_4186A75 & 1) == 0 )
  {
    this = (BattleFBXComponent___c_o *)sub_B2C35C(&BattleFBXComponent_TypeInfo, p);
    byte_4186A75 = 1;
  }
  if ( !p )
    goto LABEL_10;
  this = (BattleFBXComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)p, 0LL);
  if ( !this )
    goto LABEL_10;
  this = (BattleFBXComponent___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  v4 = (System_String_o *)this;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
  }
  if ( !v4 )
LABEL_10:
    sub_B2C434(this, p);
  return System_String__Contains(v4, BattleFBXComponent_TypeInfo->static_fields->enItemMarker, 0LL);
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
    sub_B2C434(0LL, shaderName);
  return System_String__Equals_44292872(skinShaderName, shaderName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFBXComponent_onEventDelegate___ctor(
        BattleFBXComponent_onEventDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall BattleFBXComponent_onEventDelegate__BeginInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_String_o *n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)n;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall BattleFBXComponent_onEventDelegate__EndInvoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall BattleFBXComponent_onEventDelegate__Invoke(
        BattleFBXComponent_onEventDelegate_o *this,
        System_String_o *n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  BattleFBXComponent_onEventDelegate_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  BattleFBXComponent_onEventDelegate_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  BattleFBXComponent_onEventDelegate_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BattleFBXComponent_onEventDelegate_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, n, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = n->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&n->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&n->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(n, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&n->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(n, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = n->klass;
                if ( *(_WORD *)&n->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&n->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(n, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(n, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&n->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  n,
                  *((_QWORD *)&n->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(n, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, n, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, n, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                n,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, n, v31);
    }
  }
}