void __fastcall CombineEffectComponent___ctor(CombineEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  int64_t v33; // x0
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int v41; // w8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x20
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x1
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x1
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  int64_t v140; // x1
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x1
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x1
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x1
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  int64_t v168; // x1
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  int64_t v175; // x1
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x1
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  int64_t v195; // x20
  int64_t v196; // x1
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  int64_t v203; // x1
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  int64_t v210; // x1
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  int64_t v217; // x1
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  int64_t v224; // x1
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  System_Collections_Generic_List_object__o *v231; // x20
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  System_Collections_Generic_List_int__o *v238; // x20
  int64_t v239; // x2
  int32_t v240; // w3
  System_String_o *v241; // x4
  BattleSetupInfo_o *v242; // x5
  FollowerInfo_o *v243; // x6
  PartyListViewItem_o *v244; // x7

  if ( (byte_4BCB31C & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_1C1ABD4(&string___TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_18422/*"combine_08"*/, v8);
    sub_1C1ABD4(&StringLiteral_18423/*"combine_09"*/, v9);
    sub_1C1ABD4(&StringLiteral_18430/*"combine_16"*/, v10);
    sub_1C1ABD4(&StringLiteral_18433/*"combine_19"*/, v11);
    sub_1C1ABD4(&StringLiteral_18434/*"combine_20"*/, v12);
    sub_1C1ABD4(&StringLiteral_18421/*"combine_07"*/, v13);
    sub_1C1ABD4(&StringLiteral_18415/*"combine_01"*/, v14);
    sub_1C1ABD4(&StringLiteral_18416/*"combine_02"*/, v15);
    sub_1C1ABD4(&StringLiteral_18428/*"combine_14"*/, v16);
    sub_1C1ABD4(&StringLiteral_18424/*"combine_10"*/, v17);
    sub_1C1ABD4(&StringLiteral_18436/*"combine_fodder012"*/, v18);
    sub_1C1ABD4(&StringLiteral_18435/*"combine_fodder01"*/, v19);
    sub_1C1ABD4(&StringLiteral_18425/*"combine_11"*/, v20);
    sub_1C1ABD4(&StringLiteral_18426/*"combine_12"*/, v21);
    sub_1C1ABD4(&StringLiteral_18438/*"combine_fodder014"*/, v22);
    sub_1C1ABD4(&StringLiteral_18437/*"combine_fodder013"*/, v23);
    sub_1C1ABD4(&StringLiteral_18419/*"combine_05"*/, v24);
    sub_1C1ABD4(&StringLiteral_18431/*"combine_17"*/, v25);
    sub_1C1ABD4(&StringLiteral_18439/*"combine_fodder015"*/, v26);
    sub_1C1ABD4(&StringLiteral_18429/*"combine_15"*/, v27);
    sub_1C1ABD4(&StringLiteral_18418/*"combine_04"*/, v28);
    sub_1C1ABD4(&StringLiteral_18417/*"combine_03"*/, v29);
    sub_1C1ABD4(&StringLiteral_18420/*"combine_06"*/, v30);
    sub_1C1ABD4(&StringLiteral_18427/*"combine_13"*/, v31);
    sub_1C1ABD4(&StringLiteral_18432/*"combine_18"*/, v32);
    byte_4BCB31C = 1;
  }
  v33 = sub_1C1AC7C(int___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_35;
  v41 = *(_DWORD *)(v33 + 24);
  v34 = v33;
  if ( !v41 )
    goto LABEL_34;
  *(_DWORD *)(v33 + 32) = 512;
  if ( v41 == 1 )
    goto LABEL_34;
  *(_DWORD *)(v33 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v33;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.cardTextureSize, v33, v35, v36, v37, v38, v39, v40);
  v33 = sub_1C1AC7C(string___TypeInfo, 20LL);
  if ( !v33 )
    goto LABEL_35;
  v48 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_34;
  v49 = StringLiteral_18415/*"combine_01"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_18415/*"combine_01"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 32), v49, v42, v43, v44, v45, v46, v47);
  if ( *(_DWORD *)(v48 + 24) <= 1u )
    goto LABEL_34;
  v56 = StringLiteral_18416/*"combine_02"*/;
  *(_QWORD *)(v48 + 40) = StringLiteral_18416/*"combine_02"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 40), v56, v50, v51, v52, v53, v54, v55);
  if ( *(_DWORD *)(v48 + 24) <= 2u )
    goto LABEL_34;
  v63 = StringLiteral_18417/*"combine_03"*/;
  *(_QWORD *)(v48 + 48) = StringLiteral_18417/*"combine_03"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 48), v63, v57, v58, v59, v60, v61, v62);
  if ( *(_DWORD *)(v48 + 24) <= 3u )
    goto LABEL_34;
  v70 = StringLiteral_18418/*"combine_04"*/;
  *(_QWORD *)(v48 + 56) = StringLiteral_18418/*"combine_04"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 56), v70, v64, v65, v66, v67, v68, v69);
  if ( *(_DWORD *)(v48 + 24) <= 4u )
    goto LABEL_34;
  v77 = StringLiteral_18419/*"combine_05"*/;
  *(_QWORD *)(v48 + 64) = StringLiteral_18419/*"combine_05"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 64), v77, v71, v72, v73, v74, v75, v76);
  if ( *(_DWORD *)(v48 + 24) <= 5u )
    goto LABEL_34;
  v84 = StringLiteral_18420/*"combine_06"*/;
  *(_QWORD *)(v48 + 72) = StringLiteral_18420/*"combine_06"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 72), v84, v78, v79, v80, v81, v82, v83);
  if ( *(_DWORD *)(v48 + 24) <= 6u )
    goto LABEL_34;
  v91 = StringLiteral_18421/*"combine_07"*/;
  *(_QWORD *)(v48 + 80) = StringLiteral_18421/*"combine_07"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 80), v91, v85, v86, v87, v88, v89, v90);
  if ( *(_DWORD *)(v48 + 24) <= 7u )
    goto LABEL_34;
  v98 = StringLiteral_18422/*"combine_08"*/;
  *(_QWORD *)(v48 + 88) = StringLiteral_18422/*"combine_08"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 88), v98, v92, v93, v94, v95, v96, v97);
  if ( *(_DWORD *)(v48 + 24) <= 8u )
    goto LABEL_34;
  v105 = StringLiteral_18423/*"combine_09"*/;
  *(_QWORD *)(v48 + 96) = StringLiteral_18423/*"combine_09"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 96), v105, v99, v100, v101, v102, v103, v104);
  if ( *(_DWORD *)(v48 + 24) <= 9u )
    goto LABEL_34;
  v112 = StringLiteral_18424/*"combine_10"*/;
  *(_QWORD *)(v48 + 104) = StringLiteral_18424/*"combine_10"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 104), v112, v106, v107, v108, v109, v110, v111);
  if ( *(_DWORD *)(v48 + 24) <= 0xAu )
    goto LABEL_34;
  v119 = StringLiteral_18425/*"combine_11"*/;
  *(_QWORD *)(v48 + 112) = StringLiteral_18425/*"combine_11"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 112), v119, v113, v114, v115, v116, v117, v118);
  if ( *(_DWORD *)(v48 + 24) <= 0xBu )
    goto LABEL_34;
  v126 = StringLiteral_18426/*"combine_12"*/;
  *(_QWORD *)(v48 + 120) = StringLiteral_18426/*"combine_12"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 120), v126, v120, v121, v122, v123, v124, v125);
  if ( *(_DWORD *)(v48 + 24) <= 0xCu )
    goto LABEL_34;
  v133 = StringLiteral_18427/*"combine_13"*/;
  *(_QWORD *)(v48 + 128) = StringLiteral_18427/*"combine_13"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 128), v133, v127, v128, v129, v130, v131, v132);
  if ( *(_DWORD *)(v48 + 24) <= 0xDu )
    goto LABEL_34;
  v140 = StringLiteral_18428/*"combine_14"*/;
  *(_QWORD *)(v48 + 136) = StringLiteral_18428/*"combine_14"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 136), v140, v134, v135, v136, v137, v138, v139);
  if ( *(_DWORD *)(v48 + 24) <= 0xEu )
    goto LABEL_34;
  v147 = StringLiteral_18429/*"combine_15"*/;
  *(_QWORD *)(v48 + 144) = StringLiteral_18429/*"combine_15"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 144), v147, v141, v142, v143, v144, v145, v146);
  if ( *(_DWORD *)(v48 + 24) <= 0xFu )
    goto LABEL_34;
  v154 = StringLiteral_18430/*"combine_16"*/;
  *(_QWORD *)(v48 + 152) = StringLiteral_18430/*"combine_16"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 152), v154, v148, v149, v150, v151, v152, v153);
  if ( *(_DWORD *)(v48 + 24) <= 0x10u )
    goto LABEL_34;
  v161 = StringLiteral_18431/*"combine_17"*/;
  *(_QWORD *)(v48 + 160) = StringLiteral_18431/*"combine_17"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 160), v161, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v48 + 24) <= 0x11u
    || (v168 = StringLiteral_18432/*"combine_18"*/,
        *(_QWORD *)(v48 + 168) = StringLiteral_18432/*"combine_18"*/,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 168), v168, v162, v163, v164, v165, v166, v167),
        *(_DWORD *)(v48 + 24) <= 0x12u)
    || (v175 = StringLiteral_18433/*"combine_19"*/,
        *(_QWORD *)(v48 + 176) = StringLiteral_18433/*"combine_19"*/,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 176), v175, v169, v170, v171, v172, v173, v174),
        *(_DWORD *)(v48 + 24) <= 0x13u) )
  {
LABEL_34:
    sub_1C1AE38(v33, v34);
  }
  v182 = StringLiteral_18434/*"combine_20"*/;
  *(_QWORD *)(v48 + 184) = StringLiteral_18434/*"combine_20"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 184), v182, v176, v177, v178, v179, v180, v181);
  this->fields.startAniName = (struct System_String_array *)v48;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.startAniName, v48, v183, v184, v185, v186, v187, v188);
  v33 = sub_1C1AC7C(string___TypeInfo, 5LL);
  if ( !v33 )
LABEL_35:
    sub_1C1AE30(v33, v34);
  v195 = v33;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_34;
  v196 = StringLiteral_18435/*"combine_fodder01"*/;
  *(_QWORD *)(v33 + 32) = StringLiteral_18435/*"combine_fodder01"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 32), v196, v189, v190, v191, v192, v193, v194);
  if ( *(_DWORD *)(v195 + 24) <= 1u )
    goto LABEL_34;
  v203 = StringLiteral_18436/*"combine_fodder012"*/;
  *(_QWORD *)(v195 + 40) = StringLiteral_18436/*"combine_fodder012"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v195 + 40), v203, v197, v198, v199, v200, v201, v202);
  if ( *(_DWORD *)(v195 + 24) <= 2u )
    goto LABEL_34;
  v210 = StringLiteral_18437/*"combine_fodder013"*/;
  *(_QWORD *)(v195 + 48) = StringLiteral_18437/*"combine_fodder013"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v195 + 48), v210, v204, v205, v206, v207, v208, v209);
  if ( *(_DWORD *)(v195 + 24) <= 3u )
    goto LABEL_34;
  v217 = StringLiteral_18438/*"combine_fodder014"*/;
  *(_QWORD *)(v195 + 56) = StringLiteral_18438/*"combine_fodder014"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v195 + 56), v217, v211, v212, v213, v214, v215, v216);
  if ( *(_DWORD *)(v195 + 24) <= 4u )
    goto LABEL_34;
  v224 = StringLiteral_18439/*"combine_fodder015"*/;
  *(_QWORD *)(v195 + 64) = StringLiteral_18439/*"combine_fodder015"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v195 + 64), v224, v218, v219, v220, v221, v222, v223);
  this->fields.itemAniName = (struct System_String_array *)v195;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemAniName, v195, v225, v226, v227, v228, v229, v230);
  v231 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v231,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.materialList = (struct System_Collections_Generic_List_UserServantEntity__o *)v231;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.materialList,
    (int64_t)v231,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  v238 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v238,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.itemList = v238;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v238, v239, v240, v241, v242, v243, v244);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineEffectComponent__EndLoadBg(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v25; // x8
  CommonUI_o *v26; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_4BCB311 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, data);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C1ABD4(&Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__, v7);
    sub_1C1ABD4(&CombineEffectComponent___c__DisplayClass33_0_TypeInfo, v8);
    byte_4BCB311 = 1;
  }
  v9 = sub_1C1AE20(CombineEffectComponent___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = data;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)data, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  v26 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__,
    0LL);
  if ( !v26 )
LABEL_8:
    sub_1C1AE30(v10, v11);
  CommonUI__maskFadeout(v26, 1, DEFAULT_FADE_TIME, v28, 0LL);
}


void __fastcall CombineEffectComponent__InitCombineEffect(CombineEffectComponent_o *this, const MethodInfo *method)
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
  Il2CppObject *Component_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x21
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t kind; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 *v31; // x8
  struct UnityEngine_GameObject_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *v45; // x20
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 klass_low; // x10
  __int64 v49; // x8
  AssetLoader_LoadEndDataHandler_o *v50; // x21
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0

  if ( (byte_4BCB310 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineEffectComponent_EndLoadBg__, v3);
    sub_1C1ABD4(&Method_CombineEffectComponent_InitCombineEffect__, v4);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_3306/*"Bg/10500"*/, v10);
    sub_1C1ABD4(&StringLiteral_6025/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/, v11);
    sub_1C1ABD4(&StringLiteral_6024/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/, v12);
    byte_4BCB310 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)Component_object, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v20;
  p_releaseAssetPath = &this->fields.releaseAssetPath;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.releaseAssetPath, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  kind = this->fields.kind;
  this->fields.cntIndex = 0;
  if ( kind != 3 && kind )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( gameObject )
      {
        v31 = &StringLiteral_6025/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/;
        goto LABEL_11;
      }
    }
LABEL_22:
    sub_1C1AE30(gameObject, v30);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  v31 = &StringLiteral_6024/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/;
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                             (UnityEngine_Transform_o *)gameObject,
                                             (System_String_o *)*v31,
                                             0LL);
  if ( !gameObject )
    goto LABEL_22;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  this->fields.bgParentObject = v32;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.bgParentObject, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  gameObject = (UnityEngine_GameObject_o *)*p_releaseAssetPath;
  if ( !*p_releaseAssetPath )
    goto LABEL_22;
  v45 = (Il2CppObject *)StringLiteral_3306/*"Bg/10500"*/;
  v46 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
  v47 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(gameObject[1].klass);
  if ( !v46 )
    goto LABEL_22;
  klass_low = SLODWORD(gameObject[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v46 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v45,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = v46 + 8 * klass_low;
    LODWORD(gameObject[1].klass) = klass_low + 1;
    *(_QWORD *)(v49 + 32) = v45;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)v45, v39, v40, v41, v42, v43, v44);
  }
  v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v50, (Il2CppObject *)this, Method_CombineEffectComponent_EndLoadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v45, v50, 1, 0LL);
  v51 = Method_CombineEffectComponent_InitCombineEffect__;
  if ( (*((_BYTE *)Method_CombineEffectComponent_InitCombineEffect__ + 83) & 2) != 0 )
    v51 = (_QWORD *)sub_1C1ABEC(Method_CombineEffectComponent_InitCombineEffect__);
  v52 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v51, v51[4]);
  OverwriteAssetSoundName__PlayCommonSe(v52, 19, 0, 0LL);
}


void __fastcall CombineEffectComponent__ReleasePrevAsset(CombineEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v22; // w2
  int v23; // w9
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v25; // w9
  struct System_Collections_Generic_List_ItemEntity__o *v26; // x8
  PartyOrganizationUtility_o *p_itemEntityList; // x19
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // t1
  int64_t v29; // x2
  int v30; // w9
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BCB31B & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity__Clear__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Clear__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Clear__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v15);
    byte_4BCB31B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v32 = v31;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v32.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v18 = this->fields.releaseAssetPath;
    if ( !v18 )
      goto LABEL_21;
    size = v18->fields._size;
    v20 = v18->fields._version + 1;
    v18->fields._size = 0;
    v18->fields._version = v20;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
  }
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_21;
  v22 = materialList->fields._size;
  v23 = materialList->fields._version + 1;
  materialList->fields._size = 0;
  materialList->fields._version = v23;
  if ( v22 >= 1 )
    System_Array__Clear((System_Array_o *)materialList->fields._items, 0, v22, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_21:
    sub_1C1AE30(releaseAssetPath, method);
  v25 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v25;
  itemEntityList = this->fields.itemEntityList;
  p_itemEntityList = (PartyOrganizationUtility_o *)&this->fields.itemEntityList;
  v26 = itemEntityList;
  if ( itemEntityList )
  {
    v29 = (unsigned int)v26->fields._size;
    v30 = v26->fields._version + 1;
    v26->fields._size = 0;
    v26->fields._version = v30;
    if ( (int)v29 >= 1 )
      System_Array__Clear((System_Array_o *)v26->fields._items, 0, v29, 0LL);
    p_itemEntityList->klass = 0LL;
    sub_1C1AB78(p_itemEntityList, 0LL, v29, v2, v3, v4, v5, v6);
  }
}


void __fastcall CombineEffectComponent__SetCardParam(CombineEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 fsm; // x0
  PlayMakerFSM_o **p_fsm; // x19
  struct UnityEngine_GameObject_o *Value; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  float v57; // s0
  float v58; // s8
  System_String_o *v59; // x21
  Il2CppObject *v60; // x23
  Il2CppObject *v61; // x22
  Il2CppObject *v62; // x20
  Il2CppObject *v63; // x29
  Il2CppObject *v64; // x27
  Il2CppObject *v65; // x25
  Il2CppObject *v66; // x24
  Il2CppObject *v67; // x28
  Il2CppObject *v68; // x27
  Il2CppObject *v69; // x25
  Il2CppObject *v70; // x24
  Il2CppObject *v71; // x28
  Il2CppObject *v72; // x27
  Il2CppObject *v73; // x25
  Il2CppObject *v74; // x24
  Il2CppObject *v75; // x28
  Il2CppObject *v76; // x27
  Il2CppObject *v77; // x25
  Il2CppObject *v78; // x24
  System_Collections_Generic_List_object__o *v79; // x25
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  _QWORD *v86; // x8
  int32_t *p_version; // x21
  struct System_Object_array *items; // x9
  System_Collections_Generic_List_object__Fields *p_fields; // x28
  __int64 size; // x10
  int32_t *p_size; // x24
  Il2CppClass **v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  _QWORD *v99; // x8
  struct System_Object_array *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x0
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  _QWORD *v109; // x8
  struct System_Object_array *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  _QWORD *v119; // x8
  struct System_Object_array *v120; // x9
  __int64 v121; // x10
  __int64 v122; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  _QWORD *v129; // x8
  struct System_Object_array *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  _QWORD *v139; // x8
  struct System_Object_array *v140; // x9
  __int64 v141; // x10
  __int64 v142; // x0
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  _QWORD *v149; // x8
  struct System_Object_array *v150; // x9
  __int64 v151; // x10
  __int64 v152; // x0
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  _QWORD *v159; // x8
  struct System_Object_array *v160; // x9
  __int64 v161; // x10
  __int64 v162; // x0
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  _QWORD *v169; // x8
  struct System_Object_array *v170; // x9
  __int64 v171; // x10
  __int64 v172; // x0
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  _QWORD *v179; // x8
  struct System_Object_array *v180; // x9
  __int64 v181; // x10
  __int64 v182; // x0
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  _QWORD *v189; // x8
  struct System_Object_array *v190; // x9
  __int64 v191; // x10
  __int64 v192; // x0
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  _QWORD *v199; // x8
  struct System_Object_array *v200; // x9
  __int64 v201; // x10
  __int64 v202; // x0
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  _QWORD *v209; // x8
  struct System_Object_array *v210; // x9
  __int64 v211; // x10
  __int64 v212; // x0
  int64_t v213; // x2
  int32_t v214; // w3
  System_String_o *v215; // x4
  BattleSetupInfo_o *v216; // x5
  FollowerInfo_o *v217; // x6
  PartyListViewItem_o *v218; // x7
  _QWORD *v219; // x8
  struct System_Object_array *v220; // x9
  __int64 v221; // x10
  __int64 v222; // x0
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  _QWORD *v229; // x8
  struct System_Object_array *v230; // x9
  __int64 v231; // x10
  __int64 v232; // x0
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  _QWORD *v239; // x8
  struct System_Object_array *v240; // x9
  __int64 v241; // x10
  __int64 v242; // x0
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  _QWORD *v249; // x8
  struct System_Object_array *v250; // x9
  __int64 v251; // x10
  __int64 v252; // x0
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  _QWORD *v259; // x8
  struct System_Object_array *v260; // x9
  __int64 v261; // x10
  __int64 v262; // x0
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  _QWORD *v269; // x8
  struct System_Object_array *v270; // x9
  __int64 v271; // x10
  __int64 v272; // x0
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  _QWORD *v279; // x8
  struct System_Object_array *v280; // x9
  __int64 v281; // x10
  __int64 v282; // x0
  int64_t v283; // x2
  int32_t v284; // w3
  System_String_o *v285; // x4
  BattleSetupInfo_o *v286; // x5
  FollowerInfo_o *v287; // x6
  PartyListViewItem_o *v288; // x7
  Il2CppObject *v289; // x25
  Il2CppObject *v290; // x24
  Il2CppObject *v291; // x23
  Il2CppObject *v292; // x22
  Il2CppObject *v293; // x21
  System_Collections_Generic_List_object__o *v294; // x20
  int64_t v295; // x2
  int32_t v296; // w3
  System_String_o *v297; // x4
  BattleSetupInfo_o *v298; // x5
  FollowerInfo_o *v299; // x6
  PartyListViewItem_o *v300; // x7
  struct System_Object_array *v301; // x8
  _QWORD *v302; // x9
  __int64 v303; // x10
  Il2CppClass **v304; // x0
  int64_t v305; // x2
  int32_t v306; // w3
  System_String_o *v307; // x4
  BattleSetupInfo_o *v308; // x5
  FollowerInfo_o *v309; // x6
  PartyListViewItem_o *v310; // x7
  struct System_Object_array *v311; // x8
  _QWORD *v312; // x9
  __int64 v313; // x10
  Il2CppClass **v314; // x0
  int64_t v315; // x2
  int32_t v316; // w3
  System_String_o *v317; // x4
  BattleSetupInfo_o *v318; // x5
  FollowerInfo_o *v319; // x6
  PartyListViewItem_o *v320; // x7
  struct System_Object_array *v321; // x8
  _QWORD *v322; // x9
  __int64 v323; // x10
  Il2CppClass **v324; // x0
  int64_t v325; // x2
  int32_t v326; // w3
  System_String_o *v327; // x4
  BattleSetupInfo_o *v328; // x5
  FollowerInfo_o *v329; // x6
  PartyListViewItem_o *v330; // x7
  struct System_Object_array *v331; // x8
  _QWORD *v332; // x9
  __int64 v333; // x10
  Il2CppClass **v334; // x0
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  struct System_Object_array *v341; // x8
  _QWORD *v342; // x9
  __int64 v343; // x10
  Il2CppClass **v344; // x0
  int64_t v345; // x2
  int32_t v346; // w3
  System_String_o *v347; // x4
  BattleSetupInfo_o *v348; // x5
  FollowerInfo_o *v349; // x6
  PartyListViewItem_o *v350; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v352; // x20
  int32_t CardImageLimitCount; // w21
  struct UserServantEntity_o *baseSvtEntity; // x8
  ServantLimitImageMaster_o *v355; // x22
  __int64 v356; // x23
  __int64 v357; // x24
  int32_t ServantImageLimitSealAfter; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v360; // x20
  UnityEngine_Transform_o *v361; // x21
  CombineEffectComponent_o *v362; // x0
  const MethodInfo *v363; // x5
  UserServantEntity_o *v364; // x8
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int64_t v367; // x2
  int32_t v368; // w3
  System_String_o *v369; // x4
  BattleSetupInfo_o *v370; // x5
  FollowerInfo_o *v371; // x6
  PartyListViewItem_o *v372; // x7
  Il2CppObject *v373; // x20
  __int64 v374; // x8
  _QWORD *v375; // x9
  __int64 v376; // x10
  __int64 v377; // x8
  AssetLoader_LoadEndDataHandler_o *v378; // x21
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v380; // w9
  struct System_String_array *startAniName; // x8
  il2cpp_array_size_t v382; // w9
  int64_t v383; // x20
  int64_t v384; // x2
  int32_t v385; // w3
  System_String_o *v386; // x4
  BattleSetupInfo_o *v387; // x5
  FollowerInfo_o *v388; // x6
  PartyListViewItem_o *v389; // x7
  const MethodInfo *v390; // x1
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x8
  int32_t v392; // w8
  struct System_Collections_Generic_List_int__o *itemList; // x8
  struct System_String_array *itemAniName; // x9
  il2cpp_array_size_t v395; // w8
  int64_t v396; // x20
  int64_t v397; // x2
  int32_t v398; // w3
  System_String_o *v399; // x4
  BattleSetupInfo_o *v400; // x5
  FollowerInfo_o *v401; // x6
  PartyListViewItem_o *v402; // x7
  const MethodInfo *v403; // x1
  System_String_o *nodename; // [xsp+8h] [xbp-F8h]
  Il2CppObject *v405; // [xsp+10h] [xbp-F0h]
  Il2CppObject *v406; // [xsp+18h] [xbp-E8h]
  Il2CppObject *v407; // [xsp+20h] [xbp-E0h]
  Il2CppObject *v408; // [xsp+30h] [xbp-D0h]
  Il2CppObject *v409; // [xsp+38h] [xbp-C8h]
  Il2CppObject *v410; // [xsp+40h] [xbp-C0h]
  Il2CppObject *v411; // [xsp+48h] [xbp-B8h]
  Il2CppObject *v412; // [xsp+50h] [xbp-B0h]
  Il2CppObject *v413; // [xsp+58h] [xbp-A8h]
  Il2CppObject *v414; // [xsp+60h] [xbp-A0h]
  Il2CppObject *v415; // [xsp+68h] [xbp-98h]
  Il2CppObject *v416; // [xsp+70h] [xbp-90h]
  Il2CppObject *v417; // [xsp+78h] [xbp-88h]
  Il2CppObject *v418; // [xsp+80h] [xbp-80h]
  Il2CppObject *item; // [xsp+88h] [xbp-78h]
  int32_t classCardId[2]; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v421; // 0:x0.16
  UnityEngine_Vector3_o v422; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCB313 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineEffectComponent_setReverseCallback__, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v14);
    sub_1C1ABD4(&StringLiteral_3216/*"BaseCardNodeName"*/, v15);
    sub_1C1ABD4(&StringLiteral_4468/*"CardScale"*/, v16);
    sub_1C1ABD4(&StringLiteral_6832/*"FifthItemNodeName"*/, v17);
    sub_1C1ABD4(&StringLiteral_6791/*"Feed20NodeName"*/, v18);
    sub_1C1ABD4(&StringLiteral_6779/*"Feed08NodeName"*/, v19);
    sub_1C1ABD4(&StringLiteral_6782/*"Feed11NodeName"*/, v20);
    sub_1C1ABD4(&StringLiteral_6786/*"Feed15NodeName"*/, v21);
    sub_1C1ABD4(&StringLiteral_2821/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v22);
    sub_1C1ABD4(&StringLiteral_18415/*"combine_01"*/, v23);
    sub_1C1ABD4(&StringLiteral_6781/*"Feed10NodeName"*/, v24);
    sub_1C1ABD4(&StringLiteral_4688/*"CombineEffect"*/, v25);
    sub_1C1ABD4(&StringLiteral_6981/*"FourthFeedNodeName"*/, v26);
    sub_1C1ABD4(&StringLiteral_6783/*"Feed12NodeName"*/, v27);
    sub_1C1ABD4(&StringLiteral_14676/*"ThrdItemNodeName"*/, v28);
    sub_1C1ABD4(&StringLiteral_6831/*"FifthFeedNodeName"*/, v29);
    sub_1C1ABD4(&StringLiteral_12796/*"SecItemNodeName"*/, v30);
    sub_1C1ABD4(&StringLiteral_6787/*"Feed16NodeName"*/, v31);
    sub_1C1ABD4(&StringLiteral_12757/*"ScndFeedNodeName"*/, v32);
    sub_1C1ABD4(&StringLiteral_7022/*"FstFeedNodeName"*/, v33);
    sub_1C1ABD4(&StringLiteral_6778/*"Feed07NodeName"*/, v34);
    sub_1C1ABD4(&StringLiteral_14675/*"ThrdFeedNodeName"*/, v35);
    sub_1C1ABD4(&StringLiteral_6777/*"Feed06NodeName"*/, v36);
    sub_1C1ABD4(&StringLiteral_18440/*"combine_fodder02"*/, v37);
    sub_1C1ABD4(&StringLiteral_13033/*"SkillItemNodeName"*/, v38);
    sub_1C1ABD4(&StringLiteral_13189/*"StartAnimationName"*/, v39);
    sub_1C1ABD4(&StringLiteral_6789/*"Feed18NodeName"*/, v40);
    sub_1C1ABD4(&StringLiteral_6784/*"Feed13NodeName"*/, v41);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v42);
    sub_1C1ABD4(&StringLiteral_6790/*"Feed19NodeName"*/, v43);
    sub_1C1ABD4(&StringLiteral_6785/*"Feed14NodeName"*/, v44);
    sub_1C1ABD4(&StringLiteral_6982/*"FourthItemNodeName"*/, v45);
    sub_1C1ABD4(&StringLiteral_6780/*"Feed09NodeName"*/, v46);
    sub_1C1ABD4(&StringLiteral_6788/*"Feed17NodeName"*/, v47);
    byte_4BCB313 = 1;
  }
  *(_QWORD *)classCardId = 0LL;
  p_fsm = &this->fields.fsm;
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4688/*"CombineEffect"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effect, (int64_t)Value, v51, v52, v53, v54, v55, v56);
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4468/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v57 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  fsm = (__int64)*p_fsm;
  if ( !*p_fsm )
    goto LABEL_241;
  v58 = v57;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3216/*"BaseCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v59 = (System_String_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_7022/*"FstFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v60 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12757/*"ScndFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v61 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_14675/*"ThrdFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v62 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6981/*"FourthFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v63 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6831/*"FifthFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v64 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6777/*"Feed06NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v65 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6778/*"Feed07NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v66 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6779/*"Feed08NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v67 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  item = v64;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6780/*"Feed09NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v68 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v418 = v65;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6781/*"Feed10NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v69 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v417 = v66;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6782/*"Feed11NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v70 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v416 = v67;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6783/*"Feed12NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v71 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v415 = v68;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6784/*"Feed13NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v72 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v414 = v69;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6785/*"Feed14NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v73 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v413 = v70;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6786/*"Feed15NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v74 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v412 = v71;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6787/*"Feed16NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v75 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v411 = v72;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6788/*"Feed17NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v76 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v410 = v73;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6789/*"Feed18NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v77 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v409 = v74;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6790/*"Feed19NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v78 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6791/*"Feed20NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v408 = v75;
  v406 = v78;
  v407 = v77;
  nodename = v59;
  v405 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v79 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v79 )
    goto LABEL_241;
  v86 = Method_System_Collections_Generic_List_string__Add__;
  p_version = &v79->fields._version;
  ++v79->fields._version;
  p_fields = &v79->fields;
  items = v79->fields._items;
  p_size = &v79->fields._size;
  size = v79->fields._size;
  if ( !items )
    goto LABEL_241;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v60,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &items->obj.klass + size;
    *p_size = size + 1;
    v92[4] = (Il2CppClass *)v60;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v92 + 4), (int64_t)v60, v80, v81, v82, v83, v84, v85);
  }
  v99 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v100 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v101 = *p_size;
  if ( (unsigned int)v101 >= v100->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v61,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v102 = (__int64)v100 + 8 * v101;
    *p_size = v101 + 1;
    *(_QWORD *)(v102 + 32) = v61;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v102 + 32), (int64_t)v61, v93, v94, v95, v96, v97, v98);
  }
  v109 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v110 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v111 = *p_size;
  if ( (unsigned int)v111 >= v110->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v62,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = (__int64)v110 + 8 * v111;
    *p_size = v111 + 1;
    *(_QWORD *)(v112 + 32) = v62;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v112 + 32), (int64_t)v62, v103, v104, v105, v106, v107, v108);
  }
  v119 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v120 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v121 = *p_size;
  if ( (unsigned int)v121 >= v120->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v63,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
  }
  else
  {
    v122 = (__int64)v120 + 8 * v121;
    *p_size = v121 + 1;
    *(_QWORD *)(v122 + 32) = v63;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v122 + 32), (int64_t)v63, v113, v114, v115, v116, v117, v118);
  }
  v129 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v130 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v131 = *p_size;
  if ( (unsigned int)v131 >= v130->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      item,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
  }
  else
  {
    v132 = (__int64)v130 + 8 * v131;
    *p_size = v131 + 1;
    *(_QWORD *)(v132 + 32) = item;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v132 + 32), (int64_t)item, v123, v124, v125, v126, v127, v128);
  }
  v139 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v140 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v141 = *p_size;
  if ( (unsigned int)v141 >= v140->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v418,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
  }
  else
  {
    v142 = (__int64)v140 + 8 * v141;
    *p_size = v141 + 1;
    *(_QWORD *)(v142 + 32) = v418;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v142 + 32), (int64_t)v418, v133, v134, v135, v136, v137, v138);
  }
  v149 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v150 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v151 = *p_size;
  if ( (unsigned int)v151 >= v150->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v417,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
  }
  else
  {
    v152 = (__int64)v150 + 8 * v151;
    *p_size = v151 + 1;
    *(_QWORD *)(v152 + 32) = v417;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v152 + 32), (int64_t)v417, v143, v144, v145, v146, v147, v148);
  }
  v159 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v160 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v161 = *p_size;
  if ( (unsigned int)v161 >= v160->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v416,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
  }
  else
  {
    v162 = (__int64)v160 + 8 * v161;
    *p_size = v161 + 1;
    *(_QWORD *)(v162 + 32) = v416;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v162 + 32), (int64_t)v416, v153, v154, v155, v156, v157, v158);
  }
  v169 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v170 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v171 = *p_size;
  if ( (unsigned int)v171 >= v170->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v415,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
  }
  else
  {
    v172 = (__int64)v170 + 8 * v171;
    *p_size = v171 + 1;
    *(_QWORD *)(v172 + 32) = v415;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v172 + 32), (int64_t)v415, v163, v164, v165, v166, v167, v168);
  }
  v179 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v180 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v181 = *p_size;
  if ( (unsigned int)v181 >= v180->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v414,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
  }
  else
  {
    v182 = (__int64)v180 + 8 * v181;
    *p_size = v181 + 1;
    *(_QWORD *)(v182 + 32) = v414;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v182 + 32), (int64_t)v414, v173, v174, v175, v176, v177, v178);
  }
  v189 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v190 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v191 = *p_size;
  if ( (unsigned int)v191 >= v190->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v413,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
  }
  else
  {
    v192 = (__int64)v190 + 8 * v191;
    *p_size = v191 + 1;
    *(_QWORD *)(v192 + 32) = v413;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v192 + 32), (int64_t)v413, v183, v184, v185, v186, v187, v188);
  }
  v199 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v200 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v201 = *p_size;
  if ( (unsigned int)v201 >= v200->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v412,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
  }
  else
  {
    v202 = (__int64)v200 + 8 * v201;
    *p_size = v201 + 1;
    *(_QWORD *)(v202 + 32) = v412;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v202 + 32), (int64_t)v412, v193, v194, v195, v196, v197, v198);
  }
  v209 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v210 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v211 = *p_size;
  if ( (unsigned int)v211 >= v210->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v411,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
  }
  else
  {
    v212 = (__int64)v210 + 8 * v211;
    *p_size = v211 + 1;
    *(_QWORD *)(v212 + 32) = v411;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v212 + 32), (int64_t)v411, v203, v204, v205, v206, v207, v208);
  }
  v219 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v220 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v221 = *p_size;
  if ( (unsigned int)v221 >= v220->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v410,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
  }
  else
  {
    v222 = (__int64)v220 + 8 * v221;
    *p_size = v221 + 1;
    *(_QWORD *)(v222 + 32) = v410;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v222 + 32), (int64_t)v410, v213, v214, v215, v216, v217, v218);
  }
  v229 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v230 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v231 = *p_size;
  if ( (unsigned int)v231 >= v230->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v409,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
  }
  else
  {
    v232 = (__int64)v230 + 8 * v231;
    *p_size = v231 + 1;
    *(_QWORD *)(v232 + 32) = v409;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v232 + 32), (int64_t)v409, v223, v224, v225, v226, v227, v228);
  }
  v239 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v240 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v241 = *p_size;
  if ( (unsigned int)v241 >= v240->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v408,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
  }
  else
  {
    v242 = (__int64)v240 + 8 * v241;
    *p_size = v241 + 1;
    *(_QWORD *)(v242 + 32) = v408;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v242 + 32), (int64_t)v408, v233, v234, v235, v236, v237, v238);
  }
  v249 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v250 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v251 = *p_size;
  if ( (unsigned int)v251 >= v250->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v76,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
  }
  else
  {
    v252 = (__int64)v250 + 8 * v251;
    *p_size = v251 + 1;
    *(_QWORD *)(v252 + 32) = v76;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v252 + 32), (int64_t)v76, v243, v244, v245, v246, v247, v248);
  }
  v259 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v260 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v261 = *p_size;
  if ( (unsigned int)v261 >= v260->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v407,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v259[4] + 192LL) + 112LL));
  }
  else
  {
    v262 = (__int64)v260 + 8 * v261;
    *p_size = v261 + 1;
    *(_QWORD *)(v262 + 32) = v407;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v262 + 32), (int64_t)v407, v253, v254, v255, v256, v257, v258);
  }
  v269 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v270 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v271 = *p_size;
  if ( (unsigned int)v271 >= v270->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v406,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
  }
  else
  {
    v272 = (__int64)v270 + 8 * v271;
    *p_size = v271 + 1;
    *(_QWORD *)(v272 + 32) = v406;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v272 + 32), (int64_t)v406, v263, v264, v265, v266, v267, v268);
  }
  v279 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v280 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v281 = *p_size;
  if ( (unsigned int)v281 >= v280->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v79,
      v405,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
  }
  else
  {
    v282 = (__int64)v280 + 8 * v281;
    *p_size = v281 + 1;
    *(_QWORD *)(v282 + 32) = v405;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v282 + 32), (int64_t)v405, v273, v274, v275, v276, v277, v278);
  }
  this->fields.feedNameList = (struct System_Collections_Generic_List_string__o *)v79;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.feedNameList,
    (int64_t)v79,
    v283,
    v284,
    v285,
    v286,
    v287,
    v288);
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_13033/*"SkillItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v289 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12796/*"SecItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v290 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_14676/*"ThrdItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v291 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6982/*"FourthItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v292 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6832/*"FifthItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v293 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v294 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v294,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v294 )
    goto LABEL_241;
  v301 = v294->fields._items;
  v302 = Method_System_Collections_Generic_List_string__Add__;
  ++v294->fields._version;
  if ( !v301 )
    goto LABEL_241;
  v303 = v294->fields._size;
  if ( (unsigned int)v303 >= v301->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v294,
      v289,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v302[4] + 192LL) + 112LL));
  }
  else
  {
    v304 = &v301->obj.klass + v303;
    v294->fields._size = v303 + 1;
    v304[4] = (Il2CppClass *)v289;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v304 + 4), (int64_t)v289, v295, v296, v297, v298, v299, v300);
  }
  v311 = v294->fields._items;
  v312 = Method_System_Collections_Generic_List_string__Add__;
  ++v294->fields._version;
  if ( !v311 )
    goto LABEL_241;
  v313 = v294->fields._size;
  if ( (unsigned int)v313 >= v311->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v294,
      v290,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v312[4] + 192LL) + 112LL));
  }
  else
  {
    v314 = &v311->obj.klass + v313;
    v294->fields._size = v313 + 1;
    v314[4] = (Il2CppClass *)v290;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v314 + 4), (int64_t)v290, v305, v306, v307, v308, v309, v310);
  }
  v321 = v294->fields._items;
  v322 = Method_System_Collections_Generic_List_string__Add__;
  ++v294->fields._version;
  if ( !v321 )
    goto LABEL_241;
  v323 = v294->fields._size;
  if ( (unsigned int)v323 >= v321->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v294,
      v291,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v322[4] + 192LL) + 112LL));
  }
  else
  {
    v324 = &v321->obj.klass + v323;
    v294->fields._size = v323 + 1;
    v324[4] = (Il2CppClass *)v291;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v324 + 4), (int64_t)v291, v315, v316, v317, v318, v319, v320);
  }
  v331 = v294->fields._items;
  v332 = Method_System_Collections_Generic_List_string__Add__;
  ++v294->fields._version;
  if ( !v331 )
    goto LABEL_241;
  v333 = v294->fields._size;
  if ( (unsigned int)v333 >= v331->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v294,
      v292,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v332[4] + 192LL) + 112LL));
  }
  else
  {
    v334 = &v331->obj.klass + v333;
    v294->fields._size = v333 + 1;
    v334[4] = (Il2CppClass *)v292;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v334 + 4), (int64_t)v292, v325, v326, v327, v328, v329, v330);
  }
  v341 = v294->fields._items;
  v342 = Method_System_Collections_Generic_List_string__Add__;
  ++v294->fields._version;
  if ( !v341 )
    goto LABEL_241;
  v343 = v294->fields._size;
  if ( (unsigned int)v343 >= v341->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v294,
      v293,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v342[4] + 192LL) + 112LL));
  }
  else
  {
    v344 = &v341->obj.klass + v343;
    v294->fields._size = v343 + 1;
    v344[4] = (Il2CppClass *)v293;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v344 + 4), (int64_t)v293, v335, v336, v337, v338, v339, v340);
  }
  this->fields.feedItemNameList = (struct System_Collections_Generic_List_string__o *)v294;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.feedItemNameList,
    (int64_t)v294,
    v345,
    v346,
    v347,
    v348,
    v349,
    v350);
  fsm = (__int64)this->fields.effect;
  if ( !fsm )
    goto LABEL_241;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, nodename, 1, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v352 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  fsm = (__int64)this->fields.baseSvtEntity;
  if ( !fsm )
    goto LABEL_241;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)fsm, 0, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_241;
  v355 = (ServantLimitImageMaster_o *)fsm;
  v357 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.currentCryptoKey;
  v356 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v421.fields.currentCryptoKey = v357;
  *(_QWORD *)&v421.fields.fakeValue = v356;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v421, 0LL);
  if ( !v355 )
    goto LABEL_241;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v355,
                                 fsm,
                                 CardImageLimitCount,
                                 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v352, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_39105820(
                   gameObject,
                   this->fields.baseSvtEntity,
                   ServantImageLimitSealAfter,
                   10,
                   0LL,
                   0,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v360 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v361 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4BC2141 )
  {
    fsm = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BC2141 = 1;
  }
  if ( !v361 )
    goto LABEL_241;
  UnityEngine_Transform__set_localPosition(v361, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  fsm = (__int64)UnityEngine_Component__get_transform(v360, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v422.fields.x = v58;
  v422.fields.y = v58;
  v422.fields.z = v58;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v422, 0LL);
  CombineEffectComponent__getDispInfo(
    v362,
    &classCardId[1],
    classCardId,
    this->fields.baseSvtId,
    this->fields.baseSvtlimitCnt,
    v363);
  fsm = this->fields.kind == 3
      ? ConstantMaster__getValue((System_String_o *)StringLiteral_2821/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, 0LL)
      : (unsigned int)classCardId[0];
  v364 = this->fields.baseSvtEntity;
  this->fields.baseClassCardId = fsm;
  if ( !v364 )
    goto LABEL_241;
  if ( UserServantEntity__isExceeded(v364, 0LL) )
  {
    fsm = (__int64)this->fields.baseSvtEntity;
    if ( fsm )
    {
      FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)fsm, 0LL);
      fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( fsm )
      {
        ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                (DesignCardManager_o *)fsm,
                                this->fields.baseClassCardId,
                                FrameCardPrefix,
                                0LL);
        goto LABEL_213;
      }
    }
LABEL_241:
    sub_1C1AE30(fsm, method);
  }
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !fsm )
    goto LABEL_241;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)fsm,
                          this->fields.baseClassCardId,
                          classCardId[1],
                          0LL);
LABEL_213:
  v373 = (Il2CppObject *)ExceedFrameCardPath;
  fsm = (__int64)this->fields.releaseAssetPath;
  if ( !fsm )
    goto LABEL_241;
  v374 = *(_QWORD *)(fsm + 16);
  v375 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(fsm + 28);
  if ( !v374 )
    goto LABEL_241;
  v376 = *(int *)(fsm + 24);
  if ( (unsigned int)v376 >= *(_DWORD *)(v374 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)fsm,
      v373,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v375[4] + 192LL) + 112LL));
  }
  else
  {
    v377 = v374 + 8 * v376;
    *(_DWORD *)(fsm + 24) = v376 + 1;
    *(_QWORD *)(v377 + 32) = v373;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v377 + 32), (int64_t)v373, v367, v368, v369, v370, v371, v372);
  }
  v378 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v378,
    (Il2CppObject *)this,
    Method_CombineEffectComponent_setReverseCallback__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  fsm = AssetManager__loadAssetStorage((System_String_o *)v373, v378, 1, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 3:
      materialList = this->fields.materialList;
      if ( !materialList )
        goto LABEL_241;
      v380 = materialList->fields._size;
      startAniName = this->fields.startAniName;
      this->fields.materialCnt = v380;
      if ( !startAniName )
        goto LABEL_241;
      v382 = v380 - 1;
      if ( v382 >= startAniName->max_length )
        goto LABEL_242;
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v383 = (int64_t)startAniName->m_Items[v382];
      fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_241;
      fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                       (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                       0LL);
      if ( !fsm )
        goto LABEL_241;
      *(_QWORD *)(fsm + 56) = v383;
      sub_1C1AB78((PartyOrganizationUtility_o *)(fsm + 56), v383, v384, v385, v386, v387, v388, v389);
      CombineEffectComponent__setServantFeed(this, v390);
      break;
    case 1:
      itemEntityList = this->fields.itemEntityList;
      if ( itemEntityList )
      {
        v392 = itemEntityList->fields._size;
        if ( v392 > 0 )
          goto LABEL_232;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_241;
      v392 = itemList->fields._size;
LABEL_232:
      itemAniName = this->fields.itemAniName;
      this->fields.itemMaterialCnt = v392;
      if ( !itemAniName )
        goto LABEL_241;
      v395 = v392 - 1;
      if ( v395 >= itemAniName->max_length )
LABEL_242:
        sub_1C1AE38(fsm, method);
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v396 = (int64_t)itemAniName->m_Items[v395];
LABEL_238:
      fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_241;
      fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                       (System_String_o *)StringLiteral_13189/*"StartAnimationName"*/,
                       0LL);
      if ( !fsm )
        goto LABEL_241;
      *(_QWORD *)(fsm + 56) = v396;
      sub_1C1AB78((PartyOrganizationUtility_o *)(fsm + 56), v396, v397, v398, v399, v400, v401, v402);
      CombineEffectComponent__setItemFeed(this, v403);
      break;
    case 2:
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v396 = StringLiteral_18440/*"combine_fodder02"*/;
      goto LABEL_238;
    default:
      return;
  }
}


void __fastcall CombineEffectComponent__SetDvcCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_int__o *list,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4BCB30F & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4BCB30F = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtEntity,
    (int64_t)baseSvtData,
    (int64_t)list,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_1C1AE30(v11, v12);
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v23, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v15;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_itemList, (int64_t)list, v17, v18, v19, v20, v21, v22);
}


void __fastcall CombineEffectComponent__SetFeedCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *v12; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  Il2CppObject *Component_object; // x0
  System_String_o **v16; // x8
  Il2CppObject *v17; // x20
  UnityEngine_Shader_o *v18; // x22
  UnityEngine_Material_o *v19; // x21
  UnityEngine_Texture_o *v20; // x22
  int32_t v21; // w8
  int v22; // w9

  if ( (byte_4BCB316 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UITexture___, data);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_1C1ABD4(&UnityEngine_Material_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v7);
    sub_1C1ABD4(&StringLiteral_15381/*"Unlit/Transparent Colored"*/, v8);
    sub_1C1ABD4(&StringLiteral_12456/*"START_ANIMATION"*/, v9);
    sub_1C1ABD4(&StringLiteral_5047/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v10);
    byte_4BCB316 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    goto LABEL_16;
  effect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effect, 0LL);
  if ( !this->fields.feedNameList )
    goto LABEL_16;
  v12 = (UnityEngine_Transform_o *)effect;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.feedNameList,
           this->fields.cntIndex,
           (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
  NodeFromName = TransformHelper__getNodeFromName(v12, (System_String_o *)Item, 1, 0LL);
  effect = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !effect )
    goto LABEL_16;
  DesignCardManager__SetupCardImage(
    (DesignCardManager_o *)effect,
    data,
    NodeFromName,
    this->fields.feedClassCardId,
    0LL);
  if ( !NodeFromName )
    goto LABEL_16;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)NodeFromName,
                       (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v16 = (System_String_o **)(this->fields.cardType == 6 ? &StringLiteral_5047/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15381/*"Unlit/Transparent Colored"*/);
  v17 = Component_object;
  v18 = UnityEngine_Shader__Find(*v16, 0LL);
  v19 = (UnityEngine_Material_o *)sub_1C1AE20(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v19, v18, 0LL);
  if ( !v17 )
    goto LABEL_16;
  v20 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v17->klass->vtable[26].method)(
                                   v17,
                                   v17->klass->vtable[27].methodPtr);
  effect = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))v17->klass->vtable[25].method)(
                                         v17,
                                         v19,
                                         v17->klass->vtable[26].methodPtr);
  if ( !v19 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v19, v20, 0LL);
  v21 = this->fields.cntIndex + 1;
  v22 = this->fields.materialCnt - 1;
  this->fields.cntIndex = v21;
  if ( v21 > v22 )
  {
    effect = (UnityEngine_GameObject_o *)this->fields.fsm;
    this->fields.cntIndex = 0;
    if ( effect )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12456/*"START_ANIMATION"*/, 0LL);
      return;
    }
LABEL_16:
    sub_1C1AE30(effect, data);
  }
  CombineEffectComponent__setServantFeed(this, (const MethodInfo *)data);
}


void __fastcall CombineEffectComponent__SetServantCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_UserServantEntity__o *list,
        int32_t combineKind,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w0
  struct System_Collections_Generic_List_UserServantEntity__o **p_materialList; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4BCB30C & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4BCB30C = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = combineKind;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtEntity,
    (int64_t)baseSvtData,
    (int64_t)list,
    combineKind,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_1C1AE30(v12, v13);
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v15;
  *(_QWORD *)&v24.fields.fakeValue = v14;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v24, 0LL);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(baseSvtData->fields.limitCount, 0LL);
  this->fields.materialList = list;
  p_materialList = &this->fields.materialList;
  *((_DWORD *)p_materialList - 1) = v16;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_materialList, (int64_t)list, v18, v19, v20, v21, v22, v23);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_ItemEntity__o *list,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v23; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4BCB30D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Clear__, baseSvtData);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4BCB30D = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtEntity,
    (int64_t)baseSvtData,
    (int64_t)list,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    goto LABEL_8;
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v15;
  *(_QWORD *)&v24.fields.fakeValue = v14;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v24, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(baseSvtData->fields.limitCount, 0LL);
  itemList = this->fields.itemList;
  this->fields.baseSvtlimitCnt = v12;
  if ( !itemList )
LABEL_8:
    sub_1C1AE30(v12, v13);
  v23 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v23;
  this->fields.itemEntityList = list;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemEntityList, (int64_t)list, v16, v17, v18, v19, v20, v21);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo_46074840(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_int__o *list,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4BCB30E & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4BCB30E = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtEntity,
    (int64_t)baseSvtData,
    (int64_t)list,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_1C1AE30(v11, v12);
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v23, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v15;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_itemList, (int64_t)list, v17, v18, v19, v20, v21, v22);
}


void __fastcall CombineEffectComponent__Start(CombineEffectComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CombineEffectComponent___endAnimation_b__42_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BCB31E & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_5580/*"END_FADE"*/, v3);
    byte_4BCB31E = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_70794600(v7, 0LL);
    *p_effect = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.effect, 0LL, v8, v9, v10, v11, v12, v13);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C1AE30(0LL, v6);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5580/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent___fadeIn_b__34_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BCB31D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_5580/*"END_FADE"*/, method);
    byte_4BCB31D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5580/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent__endAnimation(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4BCB31A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_CombineEffectComponent__endAnimation_b__42_0__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCB31A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineEffectComponent__endAnimation_b__42_0__, 0LL);
  if ( !v8 )
    sub_1C1AE30(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall CombineEffectComponent__fadeIn(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4BCB312 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&AvalonSceneManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_CombineEffectComponent__fadeIn_b__34_0__, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4BCB312 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineEffectComponent__fadeIn_b__34_0__, 0LL);
  if ( !v8 )
    sub_1C1AE30(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall CombineEffectComponent__getCardBackImg(
        CombineEffectComponent_o *this,
        int32_t *rarity,
        int32_t *backCardImgId,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x24
  int32_t klass_high; // w8
  System_String_o **v20; // x8

  if ( (byte_4BCB319 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, rarity);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1C1ABD4(&StringLiteral_2821/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v14);
    sub_1C1ABD4(&StringLiteral_2822/*"BACKSIDE_SVT_IMAGE_ID"*/, v15);
    byte_4BCB319 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL)) == 0LL
    || (*rarity = *((_DWORD *)Instance + 6), !Entity) )
  {
    sub_1C1AE30(Instance, v17);
  }
  klass_high = HIDWORD(Entity[5].klass);
  this->fields.cardType = klass_high;
  if ( klass_high == 6 )
    v20 = (System_String_o **)&StringLiteral_2821/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/;
  else
    v20 = (System_String_o **)&StringLiteral_2822/*"BACKSIDE_SVT_IMAGE_ID"*/;
  *backCardImgId = ConstantMaster__getValue(*v20, 0LL);
}


void __fastcall CombineEffectComponent__getDispInfo(
        CombineEffectComponent_o *this,
        int32_t *rarity,
        int32_t *classCardId,
        int32_t svtId,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  ServantEntity_o *Entity; // x23
  ServantLimitEntity_o *v18; // x21
  Il2CppObject *v19; // x22

  if ( (byte_4BCB318 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantClassMaster___, rarity);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BCB318 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3248678 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  v18 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Entity || !Instance )
    goto LABEL_15;
  v19 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          Entity->fields.classId,
          (const MethodInfo_3248678 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  Instance = (Il2CppObject *)ServantEntity__GetOverwriteClassImageId(Entity, 0LL);
  if ( !(_DWORD)Instance )
  {
    if ( !v19 )
      goto LABEL_15;
    Instance = (Il2CppObject *)LODWORD(v19[2].monitor);
  }
  *classCardId = (int)Instance;
  if ( !v18 )
LABEL_15:
    sub_1C1AE30(Instance, v16);
  *rarity = v18->fields.rarity;
}


void __fastcall CombineEffectComponent__setItemFeed(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemEntityList; // x0
  int32_t v11; // w20
  struct UnityEngine_Transform_o **p_itemNode; // x21
  ItemEntity_o *v13; // x22
  UnityEngine_Transform_o *v14; // x23
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UISprite_o *v23; // x23
  int32_t ImageId; // w22
  int32_t v25; // w22
  int32_t v26; // w20
  struct UnityEngine_Transform_o **v27; // x21
  int32_t v28; // w22
  UnityEngine_Transform_o *v29; // x23
  Il2CppObject *v30; // x0
  UnityEngine_Transform_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *Component_object; // x23

  if ( (byte_4BCB317 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1C1ABD4(&StringLiteral_12456/*"START_ANIMATION"*/, v9);
    byte_4BCB317 = 1;
  }
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemEntityList;
  if ( itemEntityList && itemEntityList->fields._size >= 1 )
  {
    v11 = 0;
    p_itemNode = &this->fields.itemNode;
    while ( 1 )
    {
      itemEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemEntityList,
                                                                      v11,
                                                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !this->fields.effect )
        goto LABEL_30;
      v13 = (ItemEntity_o *)itemEntityList;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      this->fields.effect,
                                                                      0LL);
      if ( !this->fields.feedItemNameList )
        goto LABEL_30;
      v14 = (UnityEngine_Transform_o *)itemEntityList;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.feedItemNameList,
               v11,
               (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
      NodeFromName = TransformHelper__getNodeFromName(v14, (System_String_o *)Item, 1, 0LL);
      *p_itemNode = NodeFromName;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.itemNode,
        (int64_t)NodeFromName,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      itemEntityList = (System_Collections_Generic_List_object__o *)*p_itemNode;
      if ( !*p_itemNode )
        goto LABEL_30;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)itemEntityList,
                                                                      (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !v13 )
        goto LABEL_30;
      v23 = (UISprite_o *)itemEntityList;
      if ( v13->fields.type == 29 )
      {
        ImageId = ItemEntity__GetImageId(v13, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetCoin(v23, ImageId, 0LL);
      }
      else
      {
        v25 = v13->fields.imageId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetItem(v23, v25, 0LL);
      }
      itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemEntityList;
      if ( !itemEntityList )
        goto LABEL_30;
      if ( ++v11 >= itemEntityList->fields._size )
        goto LABEL_19;
    }
  }
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemEntityList )
    goto LABEL_30;
  v26 = 0;
  v27 = &this->fields.itemNode;
  while ( v26 < itemEntityList->fields._size )
  {
    itemEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)itemEntityList,
                                                                    v26,
                                                                    (const MethodInfo_361F57C *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( this->fields.effect )
    {
      v28 = (int)itemEntityList;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      this->fields.effect,
                                                                      0LL);
      if ( this->fields.feedItemNameList )
      {
        v29 = (UnityEngine_Transform_o *)itemEntityList;
        v30 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.feedItemNameList,
                v26,
                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_string__get_Item__);
        v31 = TransformHelper__getNodeFromName(v29, (System_String_o *)v30, 1, 0LL);
        *v27 = v31;
        sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemNode, (int64_t)v31, v32, v33, v34, v35, v36, v37);
        itemEntityList = (System_Collections_Generic_List_object__o *)*v27;
        if ( *v27 )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)itemEntityList,
                               (const MethodInfo_2F95F34 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetItem((UISprite_o *)Component_object, v28, 0LL);
          itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          ++v26;
          if ( itemEntityList )
            continue;
        }
      }
    }
    goto LABEL_30;
  }
LABEL_19:
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.fsm;
  if ( !itemEntityList )
LABEL_30:
    sub_1C1AE30(itemEntityList, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemEntityList, (System_String_o *)StringLiteral_12456/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineEffectComponent__setReverseCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0
  System_String_o *Value; // x22
  DesignCardManager_o *v8; // x21
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4BCB314 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, data);
    sub_1C1ABD4(&StringLiteral_11578/*"ReverseCardNodeName"*/, v5);
    byte_4BCB314 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11578/*"ReverseCardNodeName"*/,
                                  0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL),
        fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        !this->fields.effect)
    || (v8 = (DesignCardManager_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL),
        fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, Value, 1, 0LL),
        !v8) )
  {
    sub_1C1AE30(fsm, data);
  }
  DesignCardManager__SetupCardImage(v8, data, (UnityEngine_Transform_o *)fsm, this->fields.baseClassCardId, 0LL);
}


void __fastcall CombineEffectComponent__setServantFeed(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *materialList; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w20
  int32_t v14; // w21
  bool isExceeded; // w22
  const MethodInfo *v16; // x5
  int32_t v17; // w20
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  Il2CppObject *v26; // x20
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  AssetLoader_LoadEndDataHandler_o *v31; // x21
  int32_t backCardImgId[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4BCB315 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    sub_1C1ABD4(&Method_CombineEffectComponent_SetFeedCallback__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v5);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v8);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v9);
    byte_4BCB315 = 1;
  }
  *(_QWORD *)backCardImgId = 0LL;
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_26;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  v12 = *((_QWORD *)materialList + 10);
  v11 = *((_QWORD *)materialList + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v12;
  *(_QWORD *)&v33.fields.fakeValue = v11;
  materialList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v33, 0LL);
  if ( !this->fields.materialList )
    goto LABEL_26;
  v13 = (int)materialList;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  materialList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                           *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)materialList + 6),
                           0LL);
  if ( !this->fields.materialList )
    goto LABEL_26;
  v14 = (int)materialList;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  isExceeded = UserServantEntity__isExceeded((UserServantEntity_o *)materialList, 0LL);
  CombineEffectComponent__getCardBackImg(this, &backCardImgId[1], backCardImgId, v13, v14, v16);
  v17 = backCardImgId[0];
  this->fields.feedClassCardId = backCardImgId[0];
  if ( isExceeded )
  {
    materialList = this->fields.materialList;
    if ( materialList )
    {
      materialList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)materialList,
                       this->fields.cntIndex,
                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( materialList )
      {
        FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)materialList, 0LL);
        materialList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( materialList )
        {
          ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                  (DesignCardManager_o *)materialList,
                                  this->fields.feedClassCardId,
                                  FrameCardPrefix,
                                  0LL);
          goto LABEL_18;
        }
      }
    }
LABEL_26:
    sub_1C1AE30(materialList, method);
  }
  materialList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !materialList )
    goto LABEL_26;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)materialList,
                          v17,
                          backCardImgId[1],
                          0LL);
LABEL_18:
  v26 = (Il2CppObject *)ExceedFrameCardPath;
  materialList = this->fields.releaseAssetPath;
  if ( !materialList )
    goto LABEL_26;
  v27 = *((_QWORD *)materialList + 2);
  v28 = Method_System_Collections_Generic_List_string__Add__;
  ++*((_DWORD *)materialList + 7);
  if ( !v27 )
    goto LABEL_26;
  v29 = *((int *)materialList + 6);
  if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)materialList,
      v26,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = v27 + 8 * v29;
    *((_DWORD *)materialList + 6) = v29 + 1;
    *(_QWORD *)(v30 + 32) = v26;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v26, v20, v21, v22, v23, v24, v25);
  }
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v31, (Il2CppObject *)this, Method_CombineEffectComponent_SetFeedCallback__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v26, v31, 1, 0LL);
}


void __fastcall CombineEffectComponent___c__DisplayClass33_0___ctor(
        CombineEffectComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineEffectComponent___c__DisplayClass33_0___EndLoadBg_b__0(
        CombineEffectComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *data; // x0
  Il2CppObject *Object_object__49812820; // x20
  UnityEngine_GameObject_o *v9; // x20
  struct CombineEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_Transform_o *v14; // x20
  struct CombineEffectComponent_o *v15; // x8

  if ( (byte_4BCB31F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, method);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_5580/*"END_FADE"*/, v5);
    sub_1C1ABD4(&StringLiteral_17441/*"bg"*/, v6);
    byte_4BCB31F = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  Object_object__49812820 = AssetData__GetObject_object__49812820(
                              data,
                              (System_String_o *)StringLiteral_17441/*"bg"*/,
                              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  data = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                          Object_object__49812820,
                          (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !data )
    goto LABEL_22;
  v9 = (UnityEngine_GameObject_o *)data;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  v11 = (UnityEngine_Transform_o *)data;
  data = (AssetData_o *)_4__this->fields.bgParentObject;
  if ( !data )
    goto LABEL_22;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  if ( !v11 )
    goto LABEL_22;
  UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)data, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v12 = (UnityEngine_Transform_o *)data;
  if ( !byte_4BC2147 )
  {
    data = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Quaternion_TypeInfo, method);
    byte_4BC2147 = 1;
  }
  if ( !v12 )
    goto LABEL_22;
  UnityEngine_Transform__set_localRotation(v12, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v13 = (UnityEngine_Transform_o *)data;
  if ( !byte_4BC2141 )
  {
    data = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BC2141 = 1;
  }
  if ( !v13 )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  v14 = (UnityEngine_Transform_o *)data;
  if ( !byte_4BC2146 )
  {
    data = (AssetData_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BC2146 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v15 = this->fields.__4__this) == 0LL)
    || (data = (AssetData_o *)v15->fields.fsm) == 0LL )
  {
LABEL_22:
    sub_1C1AE30(data, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5580/*"END_FADE"*/, 0LL);
}