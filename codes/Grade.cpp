void __fastcall Grade___cctor(const MethodInfo *method)
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
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_String_array *v25; // x19
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x19
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  struct Grade_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x19
  int64_t v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x1
  struct Grade_StaticFields *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x19
  int64_t v84; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  struct Grade_StaticFields *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x19
  int64_t v106; // x1
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x1
  struct Grade_StaticFields *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x19
  int64_t v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int64_t v135; // x1
  struct Grade_StaticFields *v136; // x0
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  int64_t v149; // x19
  int64_t v150; // x1
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int64_t v157; // x1
  struct Grade_StaticFields *v158; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  int64_t v171; // x19
  int64_t v172; // x1
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  int64_t v179; // x1
  struct Grade_StaticFields *v180; // x0
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7

  if ( (byte_4BFC6F3 & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, v1);
    sub_1C2E12C(&string___TypeInfo, v2);
    sub_1C2E12C(&StringLiteral_20726/*"img_listbg_04"*/, v3);
    sub_1C2E12C(&StringLiteral_20723/*"img_listbg_01"*/, v4);
    sub_1C2E12C(&StringLiteral_20731/*"img_mastername_line1"*/, v5);
    sub_1C2E12C(&StringLiteral_20666/*"img_commonbg_04"*/, v6);
    sub_1C2E12C(&StringLiteral_20519/*"icon_grade_1"*/, v7);
    sub_1C2E12C(&StringLiteral_20734/*"img_masterprofile_bg2"*/, v8);
    sub_1C2E12C(&StringLiteral_19970/*"frame_master_bg1"*/, v9);
    sub_1C2E12C(&StringLiteral_20733/*"img_masterprofile_bg1"*/, v10);
    sub_1C2E12C(&StringLiteral_23978/*"status_master_frame"*/, v11);
    sub_1C2E12C(&StringLiteral_20725/*"img_listbg_03"*/, v12);
    sub_1C2E12C(&StringLiteral_20730/*"img_masterform_bg"*/, v13);
    sub_1C2E12C(&StringLiteral_20732/*"img_mastername_line2"*/, v14);
    sub_1C2E12C(&StringLiteral_19969/*"frame_master_bg"*/, v15);
    sub_1C2E12C(&StringLiteral_23979/*"status_master_frame1"*/, v16);
    byte_4BFC6F3 = 1;
  }
  v17 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v25 = (struct System_String_array *)v17;
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_27;
  v26 = StringLiteral_20519/*"icon_grade_1"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_20519/*"icon_grade_1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 40), v26, v19, v20, v21, v22, v23, v24);
  Grade_TypeInfo->static_fields->gradeIconFileList = v25;
  sub_1C2E0D0((PartyOrganizationUtility_o *)Grade_TypeInfo->static_fields, (int64_t)v25, v27, v28, v29, v30, v31, v32);
  v17 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v39 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v40 = StringLiteral_20733/*"img_masterprofile_bg1"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20733/*"img_masterprofile_bg1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 32), v40, v33, v34, v35, v36, v37, v38);
  if ( *(_DWORD *)(v39 + 24) <= 1u )
    goto LABEL_27;
  v47 = StringLiteral_20734/*"img_masterprofile_bg2"*/;
  *(_QWORD *)(v39 + 40) = StringLiteral_20734/*"img_masterprofile_bg2"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v39 + 40), v47, v41, v42, v43, v44, v45, v46);
  static_fields = Grade_TypeInfo->static_fields;
  static_fields->masterProfileBgFileList = (struct System_String_array *)v39;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->masterProfileBgFileList, v39, v49, v50, v51, v52, v53, v54);
  v17 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v61 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v62 = StringLiteral_20731/*"img_mastername_line1"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20731/*"img_mastername_line1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 32), v62, v55, v56, v57, v58, v59, v60);
  if ( *(_DWORD *)(v61 + 24) <= 1u )
    goto LABEL_27;
  v69 = StringLiteral_20732/*"img_mastername_line2"*/;
  *(_QWORD *)(v61 + 40) = StringLiteral_20732/*"img_mastername_line2"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v61 + 40), v69, v63, v64, v65, v66, v67, v68);
  v70 = Grade_TypeInfo->static_fields;
  v70->masterProfileBgLineFileList = (struct System_String_array *)v61;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v70->masterProfileBgLineFileList, v61, v71, v72, v73, v74, v75, v76);
  v17 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v83 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v84 = StringLiteral_20666/*"img_commonbg_04"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20666/*"img_commonbg_04"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 32), v84, v77, v78, v79, v80, v81, v82);
  if ( *(_DWORD *)(v83 + 24) <= 1u )
    goto LABEL_27;
  v91 = StringLiteral_20730/*"img_masterform_bg"*/;
  *(_QWORD *)(v83 + 40) = StringLiteral_20730/*"img_masterform_bg"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v83 + 40), v91, v85, v86, v87, v88, v89, v90);
  v92 = Grade_TypeInfo->static_fields;
  v92->masterEquipBgFileList = (struct System_String_array *)v83;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v92->masterEquipBgFileList, v83, v93, v94, v95, v96, v97, v98);
  v17 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v105 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v106 = StringLiteral_19969/*"frame_master_bg"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_19969/*"frame_master_bg"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 32), v106, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v105 + 24) <= 1u )
    goto LABEL_27;
  v113 = StringLiteral_19970/*"frame_master_bg1"*/;
  *(_QWORD *)(v105 + 40) = StringLiteral_19970/*"frame_master_bg1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v105 + 40), v113, v107, v108, v109, v110, v111, v112);
  v114 = Grade_TypeInfo->static_fields;
  v114->battleIconBgFileList = (struct System_String_array *)v105;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v114->battleIconBgFileList, v105, v115, v116, v117, v118, v119, v120);
  v17 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v127 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v128 = StringLiteral_23978/*"status_master_frame"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_23978/*"status_master_frame"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 32), v128, v121, v122, v123, v124, v125, v126);
  if ( *(_DWORD *)(v127 + 24) <= 1u )
    goto LABEL_27;
  v135 = StringLiteral_23979/*"status_master_frame1"*/;
  *(_QWORD *)(v127 + 40) = StringLiteral_23979/*"status_master_frame1"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v127 + 40), v135, v129, v130, v131, v132, v133, v134);
  v136 = Grade_TypeInfo->static_fields;
  v136->mainMstIconBgFileList = (struct System_String_array *)v127;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v136->mainMstIconBgFileList, v127, v137, v138, v139, v140, v141, v142);
  v17 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_28;
  v149 = v17;
  if ( !*(_DWORD *)(v17 + 24)
    || (v150 = StringLiteral_20723/*"img_listbg_01"*/,
        *(_QWORD *)(v17 + 32) = StringLiteral_20723/*"img_listbg_01"*/,
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 32), v150, v143, v144, v145, v146, v147, v148),
        *(_DWORD *)(v149 + 24) <= 1u) )
  {
LABEL_27:
    sub_1C2E390(v17, v18);
  }
  v157 = StringLiteral_20725/*"img_listbg_03"*/;
  *(_QWORD *)(v149 + 40) = StringLiteral_20725/*"img_listbg_03"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v149 + 40), v157, v151, v152, v153, v154, v155, v156);
  v158 = Grade_TypeInfo->static_fields;
  v158->supportBgFileList = (struct System_String_array *)v149;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v158->supportBgFileList, v149, v159, v160, v161, v162, v163, v164);
  v17 = sub_1C2E1D4(string___TypeInfo, 2LL);
  if ( !v17 )
LABEL_28:
    sub_1C2E388(v17, v18);
  v171 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_27;
  v172 = StringLiteral_20723/*"img_listbg_01"*/;
  *(_QWORD *)(v17 + 32) = StringLiteral_20723/*"img_listbg_01"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v17 + 32), v172, v165, v166, v167, v168, v169, v170);
  if ( *(_DWORD *)(v171 + 24) <= 1u )
    goto LABEL_27;
  v179 = StringLiteral_20726/*"img_listbg_04"*/;
  *(_QWORD *)(v171 + 40) = StringLiteral_20726/*"img_listbg_04"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v171 + 40), v179, v173, v174, v175, v176, v177, v178);
  v180 = Grade_TypeInfo->static_fields;
  v180->followerBgFileList = (struct System_String_array *)v171;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v180->followerBgFileList, v171, v181, v182, v183, v184, v185, v186);
}


void __fastcall Grade___ctor(Grade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Grade__GetBattleIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *battleIconBgFileList; // x8

  if ( (byte_4BFC6EF & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, method);
    byte_4BFC6EF = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  battleIconBgFileList = v3->static_fields->battleIconBgFileList;
  if ( !battleIconBgFileList )
    sub_1C2E388(v3, method);
  if ( battleIconBgFileList->max_length <= gradeKind )
    sub_1C2E390(v3, method);
  return battleIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetFollowerBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *followerBgFileList; // x8

  if ( (byte_4BFC6F2 & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, method);
    byte_4BFC6F2 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  followerBgFileList = v3->static_fields->followerBgFileList;
  if ( !followerBgFileList )
    sub_1C2E388(v3, method);
  if ( followerBgFileList->max_length <= gradeKind )
    sub_1C2E390(v3, method);
  return followerBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetIconImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *gradeIconFileList; // x8

  if ( (byte_4BFC6EB & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, method);
    byte_4BFC6EB = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  gradeIconFileList = v3->static_fields->gradeIconFileList;
  if ( !gradeIconFileList )
    sub_1C2E388(v3, method);
  if ( gradeIconFileList->max_length <= gradeKind )
    sub_1C2E390(v3, method);
  return gradeIconFileList->m_Items[gradeKind];
}


int32_t __fastcall Grade__GetKind(const MethodInfo *method)
{
  const MethodInfo *v1; // x1

  if ( (byte_4BFC6E7 & 1) == 0 )
  {
    sub_1C2E12C(&TutorialFlag_TypeInfo, v1);
    byte_4BFC6E7 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_39000124(127, v1);
}


int32_t __fastcall Grade__GetKind_39000208(UserGameEntity_o *userGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4BFC6E8 & 1) == 0 )
  {
    sub_1C2E12C(&TutorialFlag_TypeInfo, method);
    byte_4BFC6E8 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !userGameEntity )
    sub_1C2E388(v3, method);
  return (LODWORD(userGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t __fastcall Grade__GetKind_39000428(OtherUserGameEntity_o *otherUserGameEntity, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4BFC6E9 & 1) == 0 )
  {
    sub_1C2E12C(&TutorialFlag_TypeInfo, method);
    byte_4BFC6E9 = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !otherUserGameEntity )
    sub_1C2E388(v3, method);
  return (LODWORD(otherUserGameEntity->fields.tutorial1) >> 27) & 1;
}


int32_t __fastcall Grade__GetKind_39000620(FollowerInfo_o *followerInfo, const MethodInfo *method)
{
  TutorialFlag_c *v3; // x0

  if ( (byte_4BFC6EA & 1) == 0 )
  {
    sub_1C2E12C(&TutorialFlag_TypeInfo, method);
    byte_4BFC6EA = 1;
  }
  v3 = TutorialFlag_TypeInfo;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !followerInfo )
    sub_1C2E388(v3, method);
  return (LODWORD(followerInfo->fields.tutorial1) >> 27) & 1;
}


System_String_o *__fastcall Grade__GetMainMstIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *mainMstIconBgFileList; // x8

  if ( (byte_4BFC6F0 & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, method);
    byte_4BFC6F0 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  mainMstIconBgFileList = v3->static_fields->mainMstIconBgFileList;
  if ( !mainMstIconBgFileList )
    sub_1C2E388(v3, method);
  if ( mainMstIconBgFileList->max_length <= gradeKind )
    sub_1C2E390(v3, method);
  return mainMstIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterEquipBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterEquipBgFileList; // x8

  if ( (byte_4BFC6EE & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, method);
    byte_4BFC6EE = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterEquipBgFileList = v3->static_fields->masterEquipBgFileList;
  if ( !masterEquipBgFileList )
    sub_1C2E388(v3, method);
  if ( masterEquipBgFileList->max_length <= gradeKind )
    sub_1C2E390(v3, method);
  return masterEquipBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgFileList; // x8

  if ( (byte_4BFC6EC & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, method);
    byte_4BFC6EC = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgFileList = v3->static_fields->masterProfileBgFileList;
  if ( !masterProfileBgFileList )
    sub_1C2E388(v3, method);
  if ( masterProfileBgFileList->max_length <= gradeKind )
    sub_1C2E390(v3, method);
  return masterProfileBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgLineImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgLineFileList; // x8

  if ( (byte_4BFC6ED & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, method);
    byte_4BFC6ED = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgLineFileList = v3->static_fields->masterProfileBgLineFileList;
  if ( !masterProfileBgLineFileList )
    sub_1C2E388(v3, method);
  if ( masterProfileBgLineFileList->max_length <= gradeKind )
    sub_1C2E390(v3, method);
  return masterProfileBgLineFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetSupportBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *supportBgFileList; // x8

  if ( (byte_4BFC6F1 & 1) == 0 )
  {
    sub_1C2E12C(&Grade_TypeInfo, method);
    byte_4BFC6F1 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  supportBgFileList = v3->static_fields->supportBgFileList;
  if ( !supportBgFileList )
    sub_1C2E388(v3, method);
  if ( supportBgFileList->max_length <= gradeKind )
    sub_1C2E390(v3, method);
  return supportBgFileList->m_Items[gradeKind];
}