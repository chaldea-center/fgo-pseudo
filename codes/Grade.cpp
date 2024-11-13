void __fastcall Grade___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
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
  __int64 v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_array *v41; // x19
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x19
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  struct Grade_StaticFields *static_fields; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x19
  int64_t v78; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x1
  struct Grade_StaticFields *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x19
  int64_t v100; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x1
  struct Grade_StaticFields *v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x19
  int64_t v122; // x1
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x1
  struct Grade_StaticFields *v130; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  int64_t v143; // x19
  int64_t v144; // x1
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x1
  struct Grade_StaticFields *v152; // x0
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  int64_t v165; // x19
  int64_t v166; // x1
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  int64_t v173; // x1
  struct Grade_StaticFields *v174; // x0
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int64_t v187; // x19
  int64_t v188; // x1
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  int64_t v195; // x1
  struct Grade_StaticFields *v196; // x0
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7

  if ( (byte_4B151BF & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_20569/*"img_listbg_04"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_20566/*"img_listbg_01"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20574/*"img_mastername_line1"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20510/*"img_commonbg_04"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20367/*"icon_grade_1"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20577/*"img_masterprofile_bg2"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_19823/*"frame_master_bg1"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_20576/*"img_masterprofile_bg1"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_23776/*"status_master_frame"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_20568/*"img_listbg_03"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20573/*"img_masterform_bg"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_20575/*"img_mastername_line2"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_19822/*"frame_master_bg"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_23777/*"status_master_frame1"*/, v31, v32);
    byte_4B151BF = 1;
  }
  v33 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_28;
  v41 = (struct System_String_array *)v33;
  if ( *(_DWORD *)(v33 + 24) <= 1u )
    goto LABEL_27;
  v42 = StringLiteral_20367/*"icon_grade_1"*/;
  *(_QWORD *)(v33 + 40) = StringLiteral_20367/*"icon_grade_1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 40), v42, v35, v36, v37, v38, v39, v40);
  Grade_TypeInfo->static_fields->gradeIconFileList = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)Grade_TypeInfo->static_fields, (int64_t)v41, v43, v44, v45, v46, v47, v48);
  v33 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_28;
  v55 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_27;
  v56 = StringLiteral_20576/*"img_masterprofile_bg1"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_20576/*"img_masterprofile_bg1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), v56, v49, v50, v51, v52, v53, v54);
  if ( *(_DWORD *)(v55 + 24) <= 1u )
    goto LABEL_27;
  v63 = StringLiteral_20577/*"img_masterprofile_bg2"*/;
  *(_QWORD *)(v55 + 40) = StringLiteral_20577/*"img_masterprofile_bg2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 40), v63, v57, v58, v59, v60, v61, v62);
  static_fields = Grade_TypeInfo->static_fields;
  static_fields->masterProfileBgFileList = (struct System_String_array *)v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->masterProfileBgFileList, v55, v65, v66, v67, v68, v69, v70);
  v33 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_28;
  v77 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_27;
  v78 = StringLiteral_20574/*"img_mastername_line1"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_20574/*"img_mastername_line1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), v78, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v77 + 24) <= 1u )
    goto LABEL_27;
  v85 = StringLiteral_20575/*"img_mastername_line2"*/;
  *(_QWORD *)(v77 + 40) = StringLiteral_20575/*"img_mastername_line2"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 40), v85, v79, v80, v81, v82, v83, v84);
  v86 = Grade_TypeInfo->static_fields;
  v86->masterProfileBgLineFileList = (struct System_String_array *)v77;
  sub_1BCA784((PartyOrganizationUtility_o *)&v86->masterProfileBgLineFileList, v77, v87, v88, v89, v90, v91, v92);
  v33 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_28;
  v99 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_27;
  v100 = StringLiteral_20510/*"img_commonbg_04"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_20510/*"img_commonbg_04"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), v100, v93, v94, v95, v96, v97, v98);
  if ( *(_DWORD *)(v99 + 24) <= 1u )
    goto LABEL_27;
  v107 = StringLiteral_20573/*"img_masterform_bg"*/;
  *(_QWORD *)(v99 + 40) = StringLiteral_20573/*"img_masterform_bg"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v99 + 40), v107, v101, v102, v103, v104, v105, v106);
  v108 = Grade_TypeInfo->static_fields;
  v108->masterEquipBgFileList = (struct System_String_array *)v99;
  sub_1BCA784((PartyOrganizationUtility_o *)&v108->masterEquipBgFileList, v99, v109, v110, v111, v112, v113, v114);
  v33 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_28;
  v121 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_27;
  v122 = StringLiteral_19822/*"frame_master_bg"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_19822/*"frame_master_bg"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), v122, v115, v116, v117, v118, v119, v120);
  if ( *(_DWORD *)(v121 + 24) <= 1u )
    goto LABEL_27;
  v129 = StringLiteral_19823/*"frame_master_bg1"*/;
  *(_QWORD *)(v121 + 40) = StringLiteral_19823/*"frame_master_bg1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 40), v129, v123, v124, v125, v126, v127, v128);
  v130 = Grade_TypeInfo->static_fields;
  v130->battleIconBgFileList = (struct System_String_array *)v121;
  sub_1BCA784((PartyOrganizationUtility_o *)&v130->battleIconBgFileList, v121, v131, v132, v133, v134, v135, v136);
  v33 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_28;
  v143 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_27;
  v144 = StringLiteral_23776/*"status_master_frame"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_23776/*"status_master_frame"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), v144, v137, v138, v139, v140, v141, v142);
  if ( *(_DWORD *)(v143 + 24) <= 1u )
    goto LABEL_27;
  v151 = StringLiteral_23777/*"status_master_frame1"*/;
  *(_QWORD *)(v143 + 40) = StringLiteral_23777/*"status_master_frame1"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v143 + 40), v151, v145, v146, v147, v148, v149, v150);
  v152 = Grade_TypeInfo->static_fields;
  v152->mainMstIconBgFileList = (struct System_String_array *)v143;
  sub_1BCA784((PartyOrganizationUtility_o *)&v152->mainMstIconBgFileList, v143, v153, v154, v155, v156, v157, v158);
  v33 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_28;
  v165 = v33;
  if ( !*(_DWORD *)(v33 + 24)
    || (v166 = StringLiteral_20566/*"img_listbg_01"*/,
        *(_QWORD *)(v33 + 32) = StringLiteral_20566/*"img_listbg_01"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), v166, v159, v160, v161, v162, v163, v164),
        *(_DWORD *)(v165 + 24) <= 1u) )
  {
LABEL_27:
    sub_1BCAA44(v33, v34);
  }
  v173 = StringLiteral_20568/*"img_listbg_03"*/;
  *(_QWORD *)(v165 + 40) = StringLiteral_20568/*"img_listbg_03"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v165 + 40), v173, v167, v168, v169, v170, v171, v172);
  v174 = Grade_TypeInfo->static_fields;
  v174->supportBgFileList = (struct System_String_array *)v165;
  sub_1BCA784((PartyOrganizationUtility_o *)&v174->supportBgFileList, v165, v175, v176, v177, v178, v179, v180);
  v33 = sub_1BCA888(string___TypeInfo, 2LL);
  if ( !v33 )
LABEL_28:
    sub_1BCAA3C(v33, v34);
  v187 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_27;
  v188 = StringLiteral_20566/*"img_listbg_01"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_20566/*"img_listbg_01"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), v188, v181, v182, v183, v184, v185, v186);
  if ( *(_DWORD *)(v187 + 24) <= 1u )
    goto LABEL_27;
  v195 = StringLiteral_20569/*"img_listbg_04"*/;
  *(_QWORD *)(v187 + 40) = StringLiteral_20569/*"img_listbg_04"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v187 + 40), v195, v189, v190, v191, v192, v193, v194);
  v196 = Grade_TypeInfo->static_fields;
  v196->followerBgFileList = (struct System_String_array *)v187;
  sub_1BCA784((PartyOrganizationUtility_o *)&v196->followerBgFileList, v187, v197, v198, v199, v200, v201, v202);
}


void __fastcall Grade___ctor(Grade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Grade__GetBattleIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *battleIconBgFileList; // x8

  if ( (byte_4B151BB & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, method, v2);
    byte_4B151BB = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
    v4 = Grade_TypeInfo;
  }
  battleIconBgFileList = v4->static_fields->battleIconBgFileList;
  if ( !battleIconBgFileList )
    sub_1BCAA3C(v4, method);
  if ( battleIconBgFileList->max_length <= gradeKind )
    sub_1BCAA44(v4, method);
  return battleIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetFollowerBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *followerBgFileList; // x8

  if ( (byte_4B151BE & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, method, v2);
    byte_4B151BE = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
    v4 = Grade_TypeInfo;
  }
  followerBgFileList = v4->static_fields->followerBgFileList;
  if ( !followerBgFileList )
    sub_1BCAA3C(v4, method);
  if ( followerBgFileList->max_length <= gradeKind )
    sub_1BCAA44(v4, method);
  return followerBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetIconImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *gradeIconFileList; // x8

  if ( (byte_4B151B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, method, v2);
    byte_4B151B7 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
    v4 = Grade_TypeInfo;
  }
  gradeIconFileList = v4->static_fields->gradeIconFileList;
  if ( !gradeIconFileList )
    sub_1BCAA3C(v4, method);
  if ( gradeIconFileList->max_length <= gradeKind )
    sub_1BCAA44(v4, method);
  return gradeIconFileList->m_Items[gradeKind];
}


int32_t __fastcall Grade__GetKind(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x2

  if ( (byte_4B151B3 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v1, v2);
    byte_4B151B3 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v1);
  return TutorialFlag__Get_38402052(127, v1);
}


int32_t __fastcall Grade__GetKind_38402136(UserGameEntity_o *userGameEntity, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0

  if ( (byte_4B151B4 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B151B4 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !userGameEntity )
    sub_1BCAA3C(v4, method);
  return (LODWORD(userGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t __fastcall Grade__GetKind_38402356(OtherUserGameEntity_o *otherUserGameEntity, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0

  if ( (byte_4B151B5 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B151B5 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !otherUserGameEntity )
    sub_1BCAA3C(v4, method);
  return (LODWORD(otherUserGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t __fastcall Grade__GetKind_38402548(FollowerInfo_o *followerInfo, const MethodInfo *method)
{
  __int64 v2; // x2
  TutorialFlag_c *v4; // x0

  if ( (byte_4B151B6 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_TypeInfo, method, v2);
    byte_4B151B6 = 1;
  }
  v4 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !followerInfo )
    sub_1BCAA3C(v4, method);
  return (LODWORD(followerInfo->fields.tutorial1) >> 27) & 1;
}


System_String_o *__fastcall Grade__GetMainMstIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *mainMstIconBgFileList; // x8

  if ( (byte_4B151BC & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, method, v2);
    byte_4B151BC = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
    v4 = Grade_TypeInfo;
  }
  mainMstIconBgFileList = v4->static_fields->mainMstIconBgFileList;
  if ( !mainMstIconBgFileList )
    sub_1BCAA3C(v4, method);
  if ( mainMstIconBgFileList->max_length <= gradeKind )
    sub_1BCAA44(v4, method);
  return mainMstIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterEquipBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterEquipBgFileList; // x8

  if ( (byte_4B151BA & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, method, v2);
    byte_4B151BA = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
    v4 = Grade_TypeInfo;
  }
  masterEquipBgFileList = v4->static_fields->masterEquipBgFileList;
  if ( !masterEquipBgFileList )
    sub_1BCAA3C(v4, method);
  if ( masterEquipBgFileList->max_length <= gradeKind )
    sub_1BCAA44(v4, method);
  return masterEquipBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterProfileBgFileList; // x8

  if ( (byte_4B151B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, method, v2);
    byte_4B151B8 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
    v4 = Grade_TypeInfo;
  }
  masterProfileBgFileList = v4->static_fields->masterProfileBgFileList;
  if ( !masterProfileBgFileList )
    sub_1BCAA3C(v4, method);
  if ( masterProfileBgFileList->max_length <= gradeKind )
    sub_1BCAA44(v4, method);
  return masterProfileBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgLineImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *masterProfileBgLineFileList; // x8

  if ( (byte_4B151B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, method, v2);
    byte_4B151B9 = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
    v4 = Grade_TypeInfo;
  }
  masterProfileBgLineFileList = v4->static_fields->masterProfileBgLineFileList;
  if ( !masterProfileBgLineFileList )
    sub_1BCAA3C(v4, method);
  if ( masterProfileBgLineFileList->max_length <= gradeKind )
    sub_1BCAA44(v4, method);
  return masterProfileBgLineFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetSupportBgImage(int32_t gradeKind, const MethodInfo *method)
{
  __int64 v2; // x2
  Grade_c *v4; // x0
  struct System_String_array *supportBgFileList; // x8

  if ( (byte_4B151BD & 1) == 0 )
  {
    sub_1BCA7E0(&Grade_TypeInfo, method, v2);
    byte_4B151BD = 1;
  }
  v4 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, method);
    v4 = Grade_TypeInfo;
  }
  supportBgFileList = v4->static_fields->supportBgFileList;
  if ( !supportBgFileList )
    sub_1BCAA3C(v4, method);
  if ( supportBgFileList->max_length <= gradeKind )
    sub_1BCAA44(v4, method);
  return supportBgFileList->m_Items[gradeKind];
}