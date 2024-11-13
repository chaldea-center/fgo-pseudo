void __fastcall CombineEffectComponent___ctor(CombineEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  int64_t v64; // x0
  int64_t v65; // x1
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int v72; // w8
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x20
  int64_t v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x1
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  int64_t v108; // x1
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x1
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x1
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x1
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  int64_t v143; // x1
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  int64_t v150; // x1
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int64_t v157; // x1
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  int64_t v164; // x1
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  int64_t v171; // x1
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  int64_t v178; // x1
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  int64_t v185; // x1
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  int64_t v192; // x1
  int64_t v193; // x2
  int32_t v194; // w3
  System_String_o *v195; // x4
  BattleSetupInfo_o *v196; // x5
  FollowerInfo_o *v197; // x6
  PartyListViewItem_o *v198; // x7
  int64_t v199; // x1
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  int64_t v206; // x1
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  int64_t v213; // x1
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  int64_t v226; // x20
  int64_t v227; // x1
  int64_t v228; // x2
  int32_t v229; // w3
  System_String_o *v230; // x4
  BattleSetupInfo_o *v231; // x5
  FollowerInfo_o *v232; // x6
  PartyListViewItem_o *v233; // x7
  int64_t v234; // x1
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  int64_t v241; // x1
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  int64_t v248; // x1
  int64_t v249; // x2
  int32_t v250; // w3
  System_String_o *v251; // x4
  BattleSetupInfo_o *v252; // x5
  FollowerInfo_o *v253; // x6
  PartyListViewItem_o *v254; // x7
  int64_t v255; // x1
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x3
  System_Collections_Generic_List_object__o *v265; // x20
  int64_t v266; // x2
  int32_t v267; // w3
  System_String_o *v268; // x4
  BattleSetupInfo_o *v269; // x5
  FollowerInfo_o *v270; // x6
  PartyListViewItem_o *v271; // x7
  __int64 v272; // x1
  __int64 v273; // x2
  __int64 v274; // x3
  System_Collections_Generic_List_int__o *v275; // x20
  int64_t v276; // x2
  int32_t v277; // w3
  System_String_o *v278; // x4
  BattleSetupInfo_o *v279; // x5
  FollowerInfo_o *v280; // x6
  PartyListViewItem_o *v281; // x7

  if ( (byte_4B19987 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&string___TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_18311/*"combine_08"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_18312/*"combine_09"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_18319/*"combine_16"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_18322/*"combine_19"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_18323/*"combine_20"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_18310/*"combine_07"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_18304/*"combine_01"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_18305/*"combine_02"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_18317/*"combine_14"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_18313/*"combine_10"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_18325/*"combine_fodder012"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_18324/*"combine_fodder01"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_18314/*"combine_11"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_18315/*"combine_12"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_18327/*"combine_fodder014"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_18326/*"combine_fodder013"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_18308/*"combine_05"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_18320/*"combine_17"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_18328/*"combine_fodder015"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_18318/*"combine_15"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_18307/*"combine_04"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_18306/*"combine_03"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_18309/*"combine_06"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_18316/*"combine_13"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_18321/*"combine_18"*/, v62, v63);
    byte_4B19987 = 1;
  }
  v64 = sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v64 )
    goto LABEL_35;
  v72 = *(_DWORD *)(v64 + 24);
  v65 = v64;
  if ( !v72 )
    goto LABEL_34;
  *(_DWORD *)(v64 + 32) = 512;
  if ( v72 == 1 )
    goto LABEL_34;
  *(_DWORD *)(v64 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v64;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cardTextureSize, v64, v66, v67, v68, v69, v70, v71);
  v64 = sub_1BCA888(string___TypeInfo, 20LL);
  if ( !v64 )
    goto LABEL_35;
  v79 = v64;
  if ( !*(_DWORD *)(v64 + 24) )
    goto LABEL_34;
  v80 = StringLiteral_18304/*"combine_01"*/;
  *(_QWORD *)(v64 + 32) = StringLiteral_18304/*"combine_01"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 32), v80, v73, v74, v75, v76, v77, v78);
  if ( *(_DWORD *)(v79 + 24) <= 1u )
    goto LABEL_34;
  v87 = StringLiteral_18305/*"combine_02"*/;
  *(_QWORD *)(v79 + 40) = StringLiteral_18305/*"combine_02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 40), v87, v81, v82, v83, v84, v85, v86);
  if ( *(_DWORD *)(v79 + 24) <= 2u )
    goto LABEL_34;
  v94 = StringLiteral_18306/*"combine_03"*/;
  *(_QWORD *)(v79 + 48) = StringLiteral_18306/*"combine_03"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 48), v94, v88, v89, v90, v91, v92, v93);
  if ( *(_DWORD *)(v79 + 24) <= 3u )
    goto LABEL_34;
  v101 = StringLiteral_18307/*"combine_04"*/;
  *(_QWORD *)(v79 + 56) = StringLiteral_18307/*"combine_04"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 56), v101, v95, v96, v97, v98, v99, v100);
  if ( *(_DWORD *)(v79 + 24) <= 4u )
    goto LABEL_34;
  v108 = StringLiteral_18308/*"combine_05"*/;
  *(_QWORD *)(v79 + 64) = StringLiteral_18308/*"combine_05"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 64), v108, v102, v103, v104, v105, v106, v107);
  if ( *(_DWORD *)(v79 + 24) <= 5u )
    goto LABEL_34;
  v115 = StringLiteral_18309/*"combine_06"*/;
  *(_QWORD *)(v79 + 72) = StringLiteral_18309/*"combine_06"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 72), v115, v109, v110, v111, v112, v113, v114);
  if ( *(_DWORD *)(v79 + 24) <= 6u )
    goto LABEL_34;
  v122 = StringLiteral_18310/*"combine_07"*/;
  *(_QWORD *)(v79 + 80) = StringLiteral_18310/*"combine_07"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 80), v122, v116, v117, v118, v119, v120, v121);
  if ( *(_DWORD *)(v79 + 24) <= 7u )
    goto LABEL_34;
  v129 = StringLiteral_18311/*"combine_08"*/;
  *(_QWORD *)(v79 + 88) = StringLiteral_18311/*"combine_08"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 88), v129, v123, v124, v125, v126, v127, v128);
  if ( *(_DWORD *)(v79 + 24) <= 8u )
    goto LABEL_34;
  v136 = StringLiteral_18312/*"combine_09"*/;
  *(_QWORD *)(v79 + 96) = StringLiteral_18312/*"combine_09"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 96), v136, v130, v131, v132, v133, v134, v135);
  if ( *(_DWORD *)(v79 + 24) <= 9u )
    goto LABEL_34;
  v143 = StringLiteral_18313/*"combine_10"*/;
  *(_QWORD *)(v79 + 104) = StringLiteral_18313/*"combine_10"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 104), v143, v137, v138, v139, v140, v141, v142);
  if ( *(_DWORD *)(v79 + 24) <= 0xAu )
    goto LABEL_34;
  v150 = StringLiteral_18314/*"combine_11"*/;
  *(_QWORD *)(v79 + 112) = StringLiteral_18314/*"combine_11"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 112), v150, v144, v145, v146, v147, v148, v149);
  if ( *(_DWORD *)(v79 + 24) <= 0xBu )
    goto LABEL_34;
  v157 = StringLiteral_18315/*"combine_12"*/;
  *(_QWORD *)(v79 + 120) = StringLiteral_18315/*"combine_12"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 120), v157, v151, v152, v153, v154, v155, v156);
  if ( *(_DWORD *)(v79 + 24) <= 0xCu )
    goto LABEL_34;
  v164 = StringLiteral_18316/*"combine_13"*/;
  *(_QWORD *)(v79 + 128) = StringLiteral_18316/*"combine_13"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 128), v164, v158, v159, v160, v161, v162, v163);
  if ( *(_DWORD *)(v79 + 24) <= 0xDu )
    goto LABEL_34;
  v171 = StringLiteral_18317/*"combine_14"*/;
  *(_QWORD *)(v79 + 136) = StringLiteral_18317/*"combine_14"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 136), v171, v165, v166, v167, v168, v169, v170);
  if ( *(_DWORD *)(v79 + 24) <= 0xEu )
    goto LABEL_34;
  v178 = StringLiteral_18318/*"combine_15"*/;
  *(_QWORD *)(v79 + 144) = StringLiteral_18318/*"combine_15"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 144), v178, v172, v173, v174, v175, v176, v177);
  if ( *(_DWORD *)(v79 + 24) <= 0xFu )
    goto LABEL_34;
  v185 = StringLiteral_18319/*"combine_16"*/;
  *(_QWORD *)(v79 + 152) = StringLiteral_18319/*"combine_16"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 152), v185, v179, v180, v181, v182, v183, v184);
  if ( *(_DWORD *)(v79 + 24) <= 0x10u )
    goto LABEL_34;
  v192 = StringLiteral_18320/*"combine_17"*/;
  *(_QWORD *)(v79 + 160) = StringLiteral_18320/*"combine_17"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 160), v192, v186, v187, v188, v189, v190, v191);
  if ( *(_DWORD *)(v79 + 24) <= 0x11u
    || (v199 = StringLiteral_18321/*"combine_18"*/,
        *(_QWORD *)(v79 + 168) = StringLiteral_18321/*"combine_18"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 168), v199, v193, v194, v195, v196, v197, v198),
        *(_DWORD *)(v79 + 24) <= 0x12u)
    || (v206 = StringLiteral_18322/*"combine_19"*/,
        *(_QWORD *)(v79 + 176) = StringLiteral_18322/*"combine_19"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 176), v206, v200, v201, v202, v203, v204, v205),
        *(_DWORD *)(v79 + 24) <= 0x13u) )
  {
LABEL_34:
    sub_1BCAA44(v64, v65);
  }
  v213 = StringLiteral_18323/*"combine_20"*/;
  *(_QWORD *)(v79 + 184) = StringLiteral_18323/*"combine_20"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 184), v213, v207, v208, v209, v210, v211, v212);
  this->fields.startAniName = (struct System_String_array *)v79;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.startAniName, v79, v214, v215, v216, v217, v218, v219);
  v64 = sub_1BCA888(string___TypeInfo, 5LL);
  if ( !v64 )
LABEL_35:
    sub_1BCAA3C(v64, v65);
  v226 = v64;
  if ( !*(_DWORD *)(v64 + 24) )
    goto LABEL_34;
  v227 = StringLiteral_18324/*"combine_fodder01"*/;
  *(_QWORD *)(v64 + 32) = StringLiteral_18324/*"combine_fodder01"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 32), v227, v220, v221, v222, v223, v224, v225);
  if ( *(_DWORD *)(v226 + 24) <= 1u )
    goto LABEL_34;
  v234 = StringLiteral_18325/*"combine_fodder012"*/;
  *(_QWORD *)(v226 + 40) = StringLiteral_18325/*"combine_fodder012"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v226 + 40), v234, v228, v229, v230, v231, v232, v233);
  if ( *(_DWORD *)(v226 + 24) <= 2u )
    goto LABEL_34;
  v241 = StringLiteral_18326/*"combine_fodder013"*/;
  *(_QWORD *)(v226 + 48) = StringLiteral_18326/*"combine_fodder013"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v226 + 48), v241, v235, v236, v237, v238, v239, v240);
  if ( *(_DWORD *)(v226 + 24) <= 3u )
    goto LABEL_34;
  v248 = StringLiteral_18327/*"combine_fodder014"*/;
  *(_QWORD *)(v226 + 56) = StringLiteral_18327/*"combine_fodder014"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v226 + 56), v248, v242, v243, v244, v245, v246, v247);
  if ( *(_DWORD *)(v226 + 24) <= 4u )
    goto LABEL_34;
  v255 = StringLiteral_18328/*"combine_fodder015"*/;
  *(_QWORD *)(v226 + 64) = StringLiteral_18328/*"combine_fodder015"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v226 + 64), v255, v249, v250, v251, v252, v253, v254);
  this->fields.itemAniName = (struct System_String_array *)v226;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemAniName, v226, v256, v257, v258, v259, v260, v261);
  v265 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                        v262,
                                                        v263,
                                                        v264);
  System_Collections_Generic_List_object____ctor(
    v265,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.materialList = (struct System_Collections_Generic_List_UserServantEntity__o *)v265;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.materialList,
    (int64_t)v265,
    v266,
    v267,
    v268,
    v269,
    v270,
    v271);
  v275 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v272,
                                                     v273,
                                                     v274);
  System_Collections_Generic_List_int____ctor(
    v275,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.itemList = v275;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemList, (int64_t)v275, v276, v277, v278, v279, v280, v281);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineEffectComponent__EndLoadBg(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Instance; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  AvalonSceneManager_c *v33; // x8
  CommonUI_o *v34; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4B1997C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__, v10, v11);
    sub_1BCA7E0(&CombineEffectComponent___c__DisplayClass33_0_TypeInfo, v12, v13);
    byte_4B1997C = 1;
  }
  v14 = sub_1BCAA2C(CombineEffectComponent___c__DisplayClass33_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 16) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)data, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = AvalonSceneManager_TypeInfo;
  v34 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v30);
    v33 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v33->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v14,
    Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__,
    0LL);
  if ( !v34 )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadeout(v34, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


void __fastcall CombineEffectComponent__InitCombineEffect(CombineEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Component_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x21
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int32_t kind; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  __int64 *v45; // x8
  struct UnityEngine_GameObject_o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *v59; // x20
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 klass_low; // x10
  __int64 v63; // x8
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  AssetLoader_LoadEndDataHandler_o *v67; // x21
  __int64 v68; // x1
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0

  if ( (byte_4B1997B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineEffectComponent_EndLoadBg__, v4, v5);
    sub_1BCA7E0(&Method_CombineEffectComponent_InitCombineEffect__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v14, v15);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_3292/*"Bg/10500"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_5991/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_5990/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/, v22, v23);
    byte_4B1997B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fsm, (int64_t)Component_object, v25, v26, v27, v28, v29, v30);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v34;
  p_releaseAssetPath = &this->fields.releaseAssetPath;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.releaseAssetPath, (int64_t)v34, v36, v37, v38, v39, v40, v41);
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
        v45 = &StringLiteral_5991/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/;
        goto LABEL_11;
      }
    }
LABEL_22:
    sub_1BCAA3C(gameObject, v44);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  v45 = &StringLiteral_5990/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/;
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                             (UnityEngine_Transform_o *)gameObject,
                                             (System_String_o *)*v45,
                                             0LL);
  if ( !gameObject )
    goto LABEL_22;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  this->fields.bgParentObject = v46;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgParentObject, (int64_t)v46, v47, v48, v49, v50, v51, v52);
  gameObject = (UnityEngine_GameObject_o *)*p_releaseAssetPath;
  if ( !*p_releaseAssetPath )
    goto LABEL_22;
  v59 = (Il2CppObject *)StringLiteral_3292/*"Bg/10500"*/;
  v60 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
  v61 = Method_System_Collections_Generic_List_string__Add__;
  ++HIDWORD(gameObject[1].klass);
  if ( !v60 )
    goto LABEL_22;
  klass_low = SLODWORD(gameObject[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v60 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)gameObject,
      v59,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = v60 + 8 * klass_low;
    LODWORD(gameObject[1].klass) = klass_low + 1;
    *(_QWORD *)(v63 + 32) = v59;
    sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 32), (int64_t)v59, v53, v54, v55, v56, v57, v58);
  }
  v67 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v64, v65, v66);
  AssetLoader_LoadEndDataHandler___ctor(v67, (Il2CppObject *)this, Method_CombineEffectComponent_EndLoadBg__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v68);
  AssetManager__loadAssetStorage((System_String_o *)v59, v67, 1, 0LL);
  v69 = Method_CombineEffectComponent_InitCombineEffect__;
  if ( (*((_BYTE *)Method_CombineEffectComponent_InitCombineEffect__ + 83) & 2) != 0 )
    v69 = (_QWORD *)sub_1BCA7F8(Method_CombineEffectComponent_InitCombineEffect__);
  v70 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v69, v69[4]);
  OverwriteAssetSoundName__PlayCommonSe(v70, 19, 0LL);
}


void __fastcall CombineEffectComponent__ReleasePrevAsset(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v28; // x8
  int32_t size; // w2
  int v30; // w9
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v32; // w2
  int v33; // w9
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v35; // w9
  struct System_Collections_Generic_List_ItemEntity__o *v36; // x8
  PartyOrganizationUtility_o *p_itemEntityList; // x19
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // t1
  int64_t v39; // x2
  int v40; // w9
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19986 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__Clear__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v23, v24);
    byte_4B19986 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      (System_Collections_Generic_List_object__o *)releaseAssetPath,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v42 = v41;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v42,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v42.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26);
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v42,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v28 = this->fields.releaseAssetPath;
    if ( !v28 )
      goto LABEL_21;
    size = v28->fields._size;
    v30 = v28->fields._version + 1;
    v28->fields._size = 0;
    v28->fields._version = v30;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v28->fields._items, 0, size, 0LL);
  }
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_21;
  v32 = materialList->fields._size;
  v33 = materialList->fields._version + 1;
  materialList->fields._size = 0;
  materialList->fields._version = v33;
  if ( v32 >= 1 )
    System_Array__Clear((System_Array_o *)materialList->fields._items, 0, v32, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_21:
    sub_1BCAA3C(releaseAssetPath, method);
  v35 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v35;
  itemEntityList = this->fields.itemEntityList;
  p_itemEntityList = (PartyOrganizationUtility_o *)&this->fields.itemEntityList;
  v36 = itemEntityList;
  if ( itemEntityList )
  {
    v39 = (unsigned int)v36->fields._size;
    v40 = v36->fields._version + 1;
    v36->fields._size = 0;
    v36->fields._version = v40;
    if ( (int)v39 >= 1 )
      System_Array__Clear((System_Array_o *)v36->fields._items, 0, v39, 0LL);
    p_itemEntityList->klass = 0LL;
    sub_1BCA784(p_itemEntityList, 0LL, v39, v3, v4, v5, v6, v7);
  }
}


void __fastcall CombineEffectComponent__SetCardParam(CombineEffectComponent_o *this, const MethodInfo *method)
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
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 fsm; // x0
  PlayMakerFSM_o **p_fsm; // x19
  struct UnityEngine_GameObject_o *Value; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  float v103; // s0
  float v104; // s8
  System_String_o *v105; // x21
  Il2CppObject *v106; // x23
  Il2CppObject *v107; // x22
  Il2CppObject *v108; // x20
  Il2CppObject *v109; // x29
  Il2CppObject *v110; // x27
  Il2CppObject *v111; // x25
  Il2CppObject *v112; // x24
  Il2CppObject *v113; // x28
  Il2CppObject *v114; // x27
  Il2CppObject *v115; // x25
  Il2CppObject *v116; // x24
  Il2CppObject *v117; // x28
  Il2CppObject *v118; // x27
  Il2CppObject *v119; // x25
  Il2CppObject *v120; // x24
  Il2CppObject *v121; // x28
  Il2CppObject *v122; // x27
  Il2CppObject *v123; // x25
  Il2CppObject *v124; // x24
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  System_Collections_Generic_List_object__o *v128; // x25
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  _QWORD *v135; // x8
  int32_t *p_version; // x21
  struct System_Object_array *items; // x9
  System_Collections_Generic_List_object__Fields *p_fields; // x28
  __int64 size; // x10
  int32_t *p_size; // x24
  Il2CppClass **v141; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  _QWORD *v148; // x8
  struct System_Object_array *v149; // x9
  __int64 v150; // x10
  __int64 v151; // x0
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  _QWORD *v158; // x8
  struct System_Object_array *v159; // x9
  __int64 v160; // x10
  __int64 v161; // x0
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  _QWORD *v168; // x8
  struct System_Object_array *v169; // x9
  __int64 v170; // x10
  __int64 v171; // x0
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  _QWORD *v178; // x8
  struct System_Object_array *v179; // x9
  __int64 v180; // x10
  __int64 v181; // x0
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  _QWORD *v188; // x8
  struct System_Object_array *v189; // x9
  __int64 v190; // x10
  __int64 v191; // x0
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  _QWORD *v198; // x8
  struct System_Object_array *v199; // x9
  __int64 v200; // x10
  __int64 v201; // x0
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  _QWORD *v208; // x8
  struct System_Object_array *v209; // x9
  __int64 v210; // x10
  __int64 v211; // x0
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  _QWORD *v218; // x8
  struct System_Object_array *v219; // x9
  __int64 v220; // x10
  __int64 v221; // x0
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  _QWORD *v228; // x8
  struct System_Object_array *v229; // x9
  __int64 v230; // x10
  __int64 v231; // x0
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7
  _QWORD *v238; // x8
  struct System_Object_array *v239; // x9
  __int64 v240; // x10
  __int64 v241; // x0
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  _QWORD *v248; // x8
  struct System_Object_array *v249; // x9
  __int64 v250; // x10
  __int64 v251; // x0
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  _QWORD *v258; // x8
  struct System_Object_array *v259; // x9
  __int64 v260; // x10
  __int64 v261; // x0
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  _QWORD *v268; // x8
  struct System_Object_array *v269; // x9
  __int64 v270; // x10
  __int64 v271; // x0
  int64_t v272; // x2
  int32_t v273; // w3
  System_String_o *v274; // x4
  BattleSetupInfo_o *v275; // x5
  FollowerInfo_o *v276; // x6
  PartyListViewItem_o *v277; // x7
  _QWORD *v278; // x8
  struct System_Object_array *v279; // x9
  __int64 v280; // x10
  __int64 v281; // x0
  int64_t v282; // x2
  int32_t v283; // w3
  System_String_o *v284; // x4
  BattleSetupInfo_o *v285; // x5
  FollowerInfo_o *v286; // x6
  PartyListViewItem_o *v287; // x7
  _QWORD *v288; // x8
  struct System_Object_array *v289; // x9
  __int64 v290; // x10
  __int64 v291; // x0
  int64_t v292; // x2
  int32_t v293; // w3
  System_String_o *v294; // x4
  BattleSetupInfo_o *v295; // x5
  FollowerInfo_o *v296; // x6
  PartyListViewItem_o *v297; // x7
  _QWORD *v298; // x8
  struct System_Object_array *v299; // x9
  __int64 v300; // x10
  __int64 v301; // x0
  int64_t v302; // x2
  int32_t v303; // w3
  System_String_o *v304; // x4
  BattleSetupInfo_o *v305; // x5
  FollowerInfo_o *v306; // x6
  PartyListViewItem_o *v307; // x7
  _QWORD *v308; // x8
  struct System_Object_array *v309; // x9
  __int64 v310; // x10
  __int64 v311; // x0
  int64_t v312; // x2
  int32_t v313; // w3
  System_String_o *v314; // x4
  BattleSetupInfo_o *v315; // x5
  FollowerInfo_o *v316; // x6
  PartyListViewItem_o *v317; // x7
  _QWORD *v318; // x8
  struct System_Object_array *v319; // x9
  __int64 v320; // x10
  __int64 v321; // x0
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  _QWORD *v328; // x8
  struct System_Object_array *v329; // x9
  __int64 v330; // x10
  __int64 v331; // x0
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  Il2CppObject *v338; // x25
  Il2CppObject *v339; // x24
  Il2CppObject *v340; // x23
  Il2CppObject *v341; // x22
  Il2CppObject *v342; // x21
  __int64 v343; // x1
  __int64 v344; // x2
  __int64 v345; // x3
  System_Collections_Generic_List_object__o *v346; // x20
  int64_t v347; // x2
  int32_t v348; // w3
  System_String_o *v349; // x4
  BattleSetupInfo_o *v350; // x5
  FollowerInfo_o *v351; // x6
  PartyListViewItem_o *v352; // x7
  struct System_Object_array *v353; // x8
  _QWORD *v354; // x9
  __int64 v355; // x10
  Il2CppClass **v356; // x0
  int64_t v357; // x2
  int32_t v358; // w3
  System_String_o *v359; // x4
  BattleSetupInfo_o *v360; // x5
  FollowerInfo_o *v361; // x6
  PartyListViewItem_o *v362; // x7
  struct System_Object_array *v363; // x8
  _QWORD *v364; // x9
  __int64 v365; // x10
  Il2CppClass **v366; // x0
  int64_t v367; // x2
  int32_t v368; // w3
  System_String_o *v369; // x4
  BattleSetupInfo_o *v370; // x5
  FollowerInfo_o *v371; // x6
  PartyListViewItem_o *v372; // x7
  struct System_Object_array *v373; // x8
  _QWORD *v374; // x9
  __int64 v375; // x10
  Il2CppClass **v376; // x0
  int64_t v377; // x2
  int32_t v378; // w3
  System_String_o *v379; // x4
  BattleSetupInfo_o *v380; // x5
  FollowerInfo_o *v381; // x6
  PartyListViewItem_o *v382; // x7
  struct System_Object_array *v383; // x8
  _QWORD *v384; // x9
  __int64 v385; // x10
  Il2CppClass **v386; // x0
  int64_t v387; // x2
  int32_t v388; // w3
  System_String_o *v389; // x4
  BattleSetupInfo_o *v390; // x5
  FollowerInfo_o *v391; // x6
  PartyListViewItem_o *v392; // x7
  struct System_Object_array *v393; // x8
  _QWORD *v394; // x9
  __int64 v395; // x10
  Il2CppClass **v396; // x0
  int64_t v397; // x2
  int32_t v398; // w3
  System_String_o *v399; // x4
  BattleSetupInfo_o *v400; // x5
  FollowerInfo_o *v401; // x6
  PartyListViewItem_o *v402; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v404; // x20
  int32_t CardImageLimitCount; // w21
  struct UserServantEntity_o *baseSvtEntity; // x8
  ServantLimitImageMaster_o *v407; // x22
  __int64 v408; // x23
  __int64 v409; // x24
  int32_t ServantImageLimitSealAfter; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v412; // x20
  __int64 v413; // x2
  UnityEngine_Transform_o *v414; // x21
  CombineEffectComponent_o *v415; // x0
  const MethodInfo *v416; // x5
  UserServantEntity_o *v417; // x8
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int64_t v420; // x2
  int32_t v421; // w3
  System_String_o *v422; // x4
  BattleSetupInfo_o *v423; // x5
  FollowerInfo_o *v424; // x6
  PartyListViewItem_o *v425; // x7
  Il2CppObject *v426; // x20
  __int64 v427; // x8
  _QWORD *v428; // x9
  __int64 v429; // x10
  __int64 v430; // x8
  __int64 v431; // x1
  __int64 v432; // x2
  __int64 v433; // x3
  AssetLoader_LoadEndDataHandler_o *v434; // x21
  __int64 v435; // x1
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t v437; // w9
  struct System_String_array *startAniName; // x8
  il2cpp_array_size_t v439; // w9
  int64_t v440; // x20
  int64_t v441; // x2
  int32_t v442; // w3
  System_String_o *v443; // x4
  BattleSetupInfo_o *v444; // x5
  FollowerInfo_o *v445; // x6
  PartyListViewItem_o *v446; // x7
  const MethodInfo *v447; // x1
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x8
  int32_t v449; // w8
  struct System_Collections_Generic_List_int__o *itemList; // x8
  struct System_String_array *itemAniName; // x9
  il2cpp_array_size_t v452; // w8
  int64_t v453; // x20
  int64_t v454; // x2
  int32_t v455; // w3
  System_String_o *v456; // x4
  BattleSetupInfo_o *v457; // x5
  FollowerInfo_o *v458; // x6
  PartyListViewItem_o *v459; // x7
  const MethodInfo *v460; // x1
  System_String_o *nodename; // [xsp+8h] [xbp-F8h]
  Il2CppObject *v462; // [xsp+10h] [xbp-F0h]
  Il2CppObject *v463; // [xsp+18h] [xbp-E8h]
  Il2CppObject *v464; // [xsp+20h] [xbp-E0h]
  Il2CppObject *v465; // [xsp+30h] [xbp-D0h]
  Il2CppObject *v466; // [xsp+38h] [xbp-C8h]
  Il2CppObject *v467; // [xsp+40h] [xbp-C0h]
  Il2CppObject *v468; // [xsp+48h] [xbp-B8h]
  Il2CppObject *v469; // [xsp+50h] [xbp-B0h]
  Il2CppObject *v470; // [xsp+58h] [xbp-A8h]
  Il2CppObject *v471; // [xsp+60h] [xbp-A0h]
  Il2CppObject *v472; // [xsp+68h] [xbp-98h]
  Il2CppObject *v473; // [xsp+70h] [xbp-90h]
  Il2CppObject *v474; // [xsp+78h] [xbp-88h]
  Il2CppObject *v475; // [xsp+80h] [xbp-80h]
  Il2CppObject *item; // [xsp+88h] [xbp-78h]
  int32_t classCardId[2]; // [xsp+98h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v478; // 0:x0.16
  UnityEngine_Vector3_o v479; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1997E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineEffectComponent_setReverseCallback__, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v18, v19);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v26, v27);
    sub_1BCA7E0(&StringLiteral_3202/*"BaseCardNodeName"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_4451/*"CardScale"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_6792/*"FifthItemNodeName"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_6751/*"Feed20NodeName"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_6739/*"Feed08NodeName"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_6742/*"Feed11NodeName"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_6746/*"Feed15NodeName"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_2811/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_18304/*"combine_01"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_6741/*"Feed10NodeName"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_4671/*"CombineEffect"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_6940/*"FourthFeedNodeName"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_6743/*"Feed12NodeName"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_14593/*"ThrdItemNodeName"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_6791/*"FifthFeedNodeName"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_12717/*"SecItemNodeName"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_6747/*"Feed16NodeName"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_12678/*"ScndFeedNodeName"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_6979/*"FstFeedNodeName"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_6738/*"Feed07NodeName"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_14592/*"ThrdFeedNodeName"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_6737/*"Feed06NodeName"*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_18329/*"combine_fodder02"*/, v72, v73);
    sub_1BCA7E0(&StringLiteral_12951/*"SkillItemNodeName"*/, v74, v75);
    sub_1BCA7E0(&StringLiteral_13107/*"StartAnimationName"*/, v76, v77);
    sub_1BCA7E0(&StringLiteral_6749/*"Feed18NodeName"*/, v78, v79);
    sub_1BCA7E0(&StringLiteral_6744/*"Feed13NodeName"*/, v80, v81);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v82, v83);
    sub_1BCA7E0(&StringLiteral_6750/*"Feed19NodeName"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_6745/*"Feed14NodeName"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_6941/*"FourthItemNodeName"*/, v88, v89);
    sub_1BCA7E0(&StringLiteral_6740/*"Feed09NodeName"*/, v90, v91);
    sub_1BCA7E0(&StringLiteral_6748/*"Feed17NodeName"*/, v92, v93);
    byte_4B1997E = 1;
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
                   (System_String_o *)StringLiteral_4671/*"CombineEffect"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effect, (int64_t)Value, v97, v98, v99, v100, v101, v102);
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_4451/*"CardScale"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v103 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  fsm = (__int64)*p_fsm;
  if ( !*p_fsm )
    goto LABEL_241;
  v104 = v103;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_3202/*"BaseCardNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v105 = (System_String_o *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6979/*"FstFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v106 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12678/*"ScndFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v107 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_14592/*"ThrdFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v108 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6940/*"FourthFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v109 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6791/*"FifthFeedNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v110 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6737/*"Feed06NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v111 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6738/*"Feed07NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v112 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6739/*"Feed08NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v113 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  item = v110;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6740/*"Feed09NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v114 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v475 = v111;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6741/*"Feed10NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v115 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v474 = v112;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6742/*"Feed11NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v116 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v473 = v113;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6743/*"Feed12NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v117 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v472 = v114;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6744/*"Feed13NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v118 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v471 = v115;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6745/*"Feed14NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v119 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v470 = v116;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6746/*"Feed15NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v120 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v469 = v117;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6747/*"Feed16NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v121 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v468 = v118;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6748/*"Feed17NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v122 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v467 = v119;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6749/*"Feed18NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v123 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v466 = v120;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6750/*"Feed19NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v124 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6751/*"Feed20NodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v465 = v121;
  v463 = v124;
  v464 = v123;
  nodename = v105;
  v462 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v128 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v125,
                                                        v126,
                                                        v127);
  System_Collections_Generic_List_object____ctor(
    v128,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v128 )
    goto LABEL_241;
  v135 = Method_System_Collections_Generic_List_string__Add__;
  p_version = &v128->fields._version;
  ++v128->fields._version;
  p_fields = &v128->fields;
  items = v128->fields._items;
  p_size = &v128->fields._size;
  size = v128->fields._size;
  if ( !items )
    goto LABEL_241;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v106,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
  }
  else
  {
    v141 = &items->obj.klass + size;
    *p_size = size + 1;
    v141[4] = (Il2CppClass *)v106;
    sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 4), (int64_t)v106, v129, v130, v131, v132, v133, v134);
  }
  v148 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v149 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v150 = *p_size;
  if ( (unsigned int)v150 >= v149->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v107,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
  }
  else
  {
    v151 = (__int64)v149 + 8 * v150;
    *p_size = v150 + 1;
    *(_QWORD *)(v151 + 32) = v107;
    sub_1BCA784((PartyOrganizationUtility_o *)(v151 + 32), (int64_t)v107, v142, v143, v144, v145, v146, v147);
  }
  v158 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v159 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v160 = *p_size;
  if ( (unsigned int)v160 >= v159->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v108,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
  }
  else
  {
    v161 = (__int64)v159 + 8 * v160;
    *p_size = v160 + 1;
    *(_QWORD *)(v161 + 32) = v108;
    sub_1BCA784((PartyOrganizationUtility_o *)(v161 + 32), (int64_t)v108, v152, v153, v154, v155, v156, v157);
  }
  v168 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v169 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v170 = *p_size;
  if ( (unsigned int)v170 >= v169->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v109,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
  }
  else
  {
    v171 = (__int64)v169 + 8 * v170;
    *p_size = v170 + 1;
    *(_QWORD *)(v171 + 32) = v109;
    sub_1BCA784((PartyOrganizationUtility_o *)(v171 + 32), (int64_t)v109, v162, v163, v164, v165, v166, v167);
  }
  v178 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v179 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v180 = *p_size;
  if ( (unsigned int)v180 >= v179->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      item,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
  }
  else
  {
    v181 = (__int64)v179 + 8 * v180;
    *p_size = v180 + 1;
    *(_QWORD *)(v181 + 32) = item;
    sub_1BCA784((PartyOrganizationUtility_o *)(v181 + 32), (int64_t)item, v172, v173, v174, v175, v176, v177);
  }
  v188 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v189 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v190 = *p_size;
  if ( (unsigned int)v190 >= v189->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v475,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
  }
  else
  {
    v191 = (__int64)v189 + 8 * v190;
    *p_size = v190 + 1;
    *(_QWORD *)(v191 + 32) = v475;
    sub_1BCA784((PartyOrganizationUtility_o *)(v191 + 32), (int64_t)v475, v182, v183, v184, v185, v186, v187);
  }
  v198 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v199 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v200 = *p_size;
  if ( (unsigned int)v200 >= v199->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v474,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
  }
  else
  {
    v201 = (__int64)v199 + 8 * v200;
    *p_size = v200 + 1;
    *(_QWORD *)(v201 + 32) = v474;
    sub_1BCA784((PartyOrganizationUtility_o *)(v201 + 32), (int64_t)v474, v192, v193, v194, v195, v196, v197);
  }
  v208 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v209 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v210 = *p_size;
  if ( (unsigned int)v210 >= v209->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v473,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
  }
  else
  {
    v211 = (__int64)v209 + 8 * v210;
    *p_size = v210 + 1;
    *(_QWORD *)(v211 + 32) = v473;
    sub_1BCA784((PartyOrganizationUtility_o *)(v211 + 32), (int64_t)v473, v202, v203, v204, v205, v206, v207);
  }
  v218 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v219 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v220 = *p_size;
  if ( (unsigned int)v220 >= v219->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v472,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
  }
  else
  {
    v221 = (__int64)v219 + 8 * v220;
    *p_size = v220 + 1;
    *(_QWORD *)(v221 + 32) = v472;
    sub_1BCA784((PartyOrganizationUtility_o *)(v221 + 32), (int64_t)v472, v212, v213, v214, v215, v216, v217);
  }
  v228 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v229 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v230 = *p_size;
  if ( (unsigned int)v230 >= v229->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v471,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
  }
  else
  {
    v231 = (__int64)v229 + 8 * v230;
    *p_size = v230 + 1;
    *(_QWORD *)(v231 + 32) = v471;
    sub_1BCA784((PartyOrganizationUtility_o *)(v231 + 32), (int64_t)v471, v222, v223, v224, v225, v226, v227);
  }
  v238 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v239 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v240 = *p_size;
  if ( (unsigned int)v240 >= v239->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v470,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v238[4] + 192LL) + 112LL));
  }
  else
  {
    v241 = (__int64)v239 + 8 * v240;
    *p_size = v240 + 1;
    *(_QWORD *)(v241 + 32) = v470;
    sub_1BCA784((PartyOrganizationUtility_o *)(v241 + 32), (int64_t)v470, v232, v233, v234, v235, v236, v237);
  }
  v248 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v249 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v250 = *p_size;
  if ( (unsigned int)v250 >= v249->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v469,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
  }
  else
  {
    v251 = (__int64)v249 + 8 * v250;
    *p_size = v250 + 1;
    *(_QWORD *)(v251 + 32) = v469;
    sub_1BCA784((PartyOrganizationUtility_o *)(v251 + 32), (int64_t)v469, v242, v243, v244, v245, v246, v247);
  }
  v258 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v259 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v260 = *p_size;
  if ( (unsigned int)v260 >= v259->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v468,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
  }
  else
  {
    v261 = (__int64)v259 + 8 * v260;
    *p_size = v260 + 1;
    *(_QWORD *)(v261 + 32) = v468;
    sub_1BCA784((PartyOrganizationUtility_o *)(v261 + 32), (int64_t)v468, v252, v253, v254, v255, v256, v257);
  }
  v268 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v269 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v270 = *p_size;
  if ( (unsigned int)v270 >= v269->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v467,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
  }
  else
  {
    v271 = (__int64)v269 + 8 * v270;
    *p_size = v270 + 1;
    *(_QWORD *)(v271 + 32) = v467;
    sub_1BCA784((PartyOrganizationUtility_o *)(v271 + 32), (int64_t)v467, v262, v263, v264, v265, v266, v267);
  }
  v278 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v279 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v280 = *p_size;
  if ( (unsigned int)v280 >= v279->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v466,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v278[4] + 192LL) + 112LL));
  }
  else
  {
    v281 = (__int64)v279 + 8 * v280;
    *p_size = v280 + 1;
    *(_QWORD *)(v281 + 32) = v466;
    sub_1BCA784((PartyOrganizationUtility_o *)(v281 + 32), (int64_t)v466, v272, v273, v274, v275, v276, v277);
  }
  v288 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v289 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v290 = *p_size;
  if ( (unsigned int)v290 >= v289->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v465,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
  }
  else
  {
    v291 = (__int64)v289 + 8 * v290;
    *p_size = v290 + 1;
    *(_QWORD *)(v291 + 32) = v465;
    sub_1BCA784((PartyOrganizationUtility_o *)(v291 + 32), (int64_t)v465, v282, v283, v284, v285, v286, v287);
  }
  v298 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v299 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v300 = *p_size;
  if ( (unsigned int)v300 >= v299->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v122,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v298[4] + 192LL) + 112LL));
  }
  else
  {
    v301 = (__int64)v299 + 8 * v300;
    *p_size = v300 + 1;
    *(_QWORD *)(v301 + 32) = v122;
    sub_1BCA784((PartyOrganizationUtility_o *)(v301 + 32), (int64_t)v122, v292, v293, v294, v295, v296, v297);
  }
  v308 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v309 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v310 = *p_size;
  if ( (unsigned int)v310 >= v309->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v464,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v308[4] + 192LL) + 112LL));
  }
  else
  {
    v311 = (__int64)v309 + 8 * v310;
    *p_size = v310 + 1;
    *(_QWORD *)(v311 + 32) = v464;
    sub_1BCA784((PartyOrganizationUtility_o *)(v311 + 32), (int64_t)v464, v302, v303, v304, v305, v306, v307);
  }
  v318 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v319 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v320 = *p_size;
  if ( (unsigned int)v320 >= v319->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v463,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
  }
  else
  {
    v321 = (__int64)v319 + 8 * v320;
    *p_size = v320 + 1;
    *(_QWORD *)(v321 + 32) = v463;
    sub_1BCA784((PartyOrganizationUtility_o *)(v321 + 32), (int64_t)v463, v312, v313, v314, v315, v316, v317);
  }
  v328 = Method_System_Collections_Generic_List_string__Add__;
  ++*p_version;
  v329 = p_fields->_items;
  if ( !p_fields->_items )
    goto LABEL_241;
  v330 = *p_size;
  if ( (unsigned int)v330 >= v329->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v128,
      v462,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
  }
  else
  {
    v331 = (__int64)v329 + 8 * v330;
    *p_size = v330 + 1;
    *(_QWORD *)(v331 + 32) = v462;
    sub_1BCA784((PartyOrganizationUtility_o *)(v331 + 32), (int64_t)v462, v322, v323, v324, v325, v326, v327);
  }
  this->fields.feedNameList = (struct System_Collections_Generic_List_string__o *)v128;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.feedNameList,
    (int64_t)v128,
    v332,
    v333,
    v334,
    v335,
    v336,
    v337);
  fsm = (__int64)this->fields.fsm;
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12951/*"SkillItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v338 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_12717/*"SecItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v339 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_14593/*"ThrdItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v340 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6941/*"FourthItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_241;
  v341 = (Il2CppObject *)fsm;
  fsm = (__int64)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                   (System_String_o *)StringLiteral_6792/*"FifthItemNodeName"*/,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v342 = (Il2CppObject *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v346 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v343,
                                                        v344,
                                                        v345);
  System_Collections_Generic_List_object____ctor(
    v346,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v346 )
    goto LABEL_241;
  v353 = v346->fields._items;
  v354 = Method_System_Collections_Generic_List_string__Add__;
  ++v346->fields._version;
  if ( !v353 )
    goto LABEL_241;
  v355 = v346->fields._size;
  if ( (unsigned int)v355 >= v353->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v346,
      v338,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v354[4] + 192LL) + 112LL));
  }
  else
  {
    v356 = &v353->obj.klass + v355;
    v346->fields._size = v355 + 1;
    v356[4] = (Il2CppClass *)v338;
    sub_1BCA784((PartyOrganizationUtility_o *)(v356 + 4), (int64_t)v338, v347, v348, v349, v350, v351, v352);
  }
  v363 = v346->fields._items;
  v364 = Method_System_Collections_Generic_List_string__Add__;
  ++v346->fields._version;
  if ( !v363 )
    goto LABEL_241;
  v365 = v346->fields._size;
  if ( (unsigned int)v365 >= v363->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v346,
      v339,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v364[4] + 192LL) + 112LL));
  }
  else
  {
    v366 = &v363->obj.klass + v365;
    v346->fields._size = v365 + 1;
    v366[4] = (Il2CppClass *)v339;
    sub_1BCA784((PartyOrganizationUtility_o *)(v366 + 4), (int64_t)v339, v357, v358, v359, v360, v361, v362);
  }
  v373 = v346->fields._items;
  v374 = Method_System_Collections_Generic_List_string__Add__;
  ++v346->fields._version;
  if ( !v373 )
    goto LABEL_241;
  v375 = v346->fields._size;
  if ( (unsigned int)v375 >= v373->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v346,
      v340,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
  }
  else
  {
    v376 = &v373->obj.klass + v375;
    v346->fields._size = v375 + 1;
    v376[4] = (Il2CppClass *)v340;
    sub_1BCA784((PartyOrganizationUtility_o *)(v376 + 4), (int64_t)v340, v367, v368, v369, v370, v371, v372);
  }
  v383 = v346->fields._items;
  v384 = Method_System_Collections_Generic_List_string__Add__;
  ++v346->fields._version;
  if ( !v383 )
    goto LABEL_241;
  v385 = v346->fields._size;
  if ( (unsigned int)v385 >= v383->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v346,
      v341,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v384[4] + 192LL) + 112LL));
  }
  else
  {
    v386 = &v383->obj.klass + v385;
    v346->fields._size = v385 + 1;
    v386[4] = (Il2CppClass *)v341;
    sub_1BCA784((PartyOrganizationUtility_o *)(v386 + 4), (int64_t)v341, v377, v378, v379, v380, v381, v382);
  }
  v393 = v346->fields._items;
  v394 = Method_System_Collections_Generic_List_string__Add__;
  ++v346->fields._version;
  if ( !v393 )
    goto LABEL_241;
  v395 = v346->fields._size;
  if ( (unsigned int)v395 >= v393->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v346,
      v342,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v394[4] + 192LL) + 112LL));
  }
  else
  {
    v396 = &v393->obj.klass + v395;
    v346->fields._size = v395 + 1;
    v396[4] = (Il2CppClass *)v342;
    sub_1BCA784((PartyOrganizationUtility_o *)(v396 + 4), (int64_t)v342, v387, v388, v389, v390, v391, v392);
  }
  this->fields.feedItemNameList = (struct System_Collections_Generic_List_string__o *)v346;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.feedItemNameList,
    (int64_t)v346,
    v397,
    v398,
    v399,
    v400,
    v401,
    v402);
  fsm = (__int64)this->fields.effect;
  if ( !fsm )
    goto LABEL_241;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  fsm = (__int64)TransformHelper__getNodeFromName(transform, nodename, 1, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v404 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_241;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  fsm = (__int64)this->fields.baseSvtEntity;
  if ( !fsm )
    goto LABEL_241;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)fsm, 0, 0LL);
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_241;
  fsm = (__int64)DataManager__GetMasterData_object_(
                   (DataManager_o *)fsm,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_241;
  v407 = (ServantLimitImageMaster_o *)fsm;
  v409 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.currentCryptoKey;
  v408 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v478.fields.currentCryptoKey = v409;
  *(_QWORD *)&v478.fields.fakeValue = v408;
  fsm = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v478, 0LL);
  if ( !v407 )
    goto LABEL_241;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v407,
                                 fsm,
                                 CardImageLimitCount,
                                 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v404, 0LL);
  fsm = (__int64)CharaGraphManager__CreateTexturePrefab_38621628(
                   gameObject,
                   this->fields.baseSvtEntity,
                   ServantImageLimitSealAfter,
                   10,
                   0LL,
                   0,
                   0LL);
  if ( !fsm )
    goto LABEL_241;
  v412 = (UnityEngine_Component_o *)fsm;
  fsm = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  v414 = (UnityEngine_Transform_o *)fsm;
  if ( !byte_4B109C1 )
  {
    fsm = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v413);
    byte_4B109C1 = 1;
  }
  if ( !v414 )
    goto LABEL_241;
  UnityEngine_Transform__set_localPosition(v414, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  fsm = (__int64)UnityEngine_Component__get_transform(v412, 0LL);
  if ( !fsm )
    goto LABEL_241;
  v479.fields.x = v104;
  v479.fields.y = v104;
  v479.fields.z = v104;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v479, 0LL);
  CombineEffectComponent__getDispInfo(
    v415,
    &classCardId[1],
    classCardId,
    this->fields.baseSvtId,
    this->fields.baseSvtlimitCnt,
    v416);
  fsm = this->fields.kind == 3
      ? ConstantMaster__getValue((System_String_o *)StringLiteral_2811/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, 0LL)
      : (unsigned int)classCardId[0];
  v417 = this->fields.baseSvtEntity;
  this->fields.baseClassCardId = fsm;
  if ( !v417 )
    goto LABEL_241;
  if ( UserServantEntity__isExceeded(v417, 0LL) )
  {
    fsm = (__int64)this->fields.baseSvtEntity;
    if ( fsm )
    {
      FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)fsm, 0LL);
      fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BCAA3C(fsm, method);
  }
  fsm = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !fsm )
    goto LABEL_241;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)fsm,
                          this->fields.baseClassCardId,
                          classCardId[1],
                          0LL);
LABEL_213:
  v426 = (Il2CppObject *)ExceedFrameCardPath;
  fsm = (__int64)this->fields.releaseAssetPath;
  if ( !fsm )
    goto LABEL_241;
  v427 = *(_QWORD *)(fsm + 16);
  v428 = Method_System_Collections_Generic_List_string__Add__;
  ++*(_DWORD *)(fsm + 28);
  if ( !v427 )
    goto LABEL_241;
  v429 = *(int *)(fsm + 24);
  if ( (unsigned int)v429 >= *(_DWORD *)(v427 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)fsm,
      v426,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v428[4] + 192LL) + 112LL));
  }
  else
  {
    v430 = v427 + 8 * v429;
    *(_DWORD *)(fsm + 24) = v429 + 1;
    *(_QWORD *)(v430 + 32) = v426;
    sub_1BCA784((PartyOrganizationUtility_o *)(v430 + 32), (int64_t)v426, v420, v421, v422, v423, v424, v425);
  }
  v434 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v431, v432, v433);
  AssetLoader_LoadEndDataHandler___ctor(
    v434,
    (Il2CppObject *)this,
    Method_CombineEffectComponent_setReverseCallback__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v435);
  fsm = AssetManager__loadAssetStorage((System_String_o *)v426, v434, 1, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 3:
      materialList = this->fields.materialList;
      if ( !materialList )
        goto LABEL_241;
      v437 = materialList->fields._size;
      startAniName = this->fields.startAniName;
      this->fields.materialCnt = v437;
      if ( !startAniName )
        goto LABEL_241;
      v439 = v437 - 1;
      if ( v439 >= startAniName->max_length )
        goto LABEL_242;
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v440 = (int64_t)startAniName->m_Items[v439];
      fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_241;
      fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                       (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                       0LL);
      if ( !fsm )
        goto LABEL_241;
      *(_QWORD *)(fsm + 56) = v440;
      sub_1BCA784((PartyOrganizationUtility_o *)(fsm + 56), v440, v441, v442, v443, v444, v445, v446);
      CombineEffectComponent__setServantFeed(this, v447);
      break;
    case 1:
      itemEntityList = this->fields.itemEntityList;
      if ( itemEntityList )
      {
        v449 = itemEntityList->fields._size;
        if ( v449 > 0 )
          goto LABEL_232;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_241;
      v449 = itemList->fields._size;
LABEL_232:
      itemAniName = this->fields.itemAniName;
      this->fields.itemMaterialCnt = v449;
      if ( !itemAniName )
        goto LABEL_241;
      v452 = v449 - 1;
      if ( v452 >= itemAniName->max_length )
LABEL_242:
        sub_1BCAA44(fsm, method);
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v453 = (int64_t)itemAniName->m_Items[v452];
LABEL_238:
      fsm = (__int64)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL);
      if ( !fsm )
        goto LABEL_241;
      fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                       (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                       (System_String_o *)StringLiteral_13107/*"StartAnimationName"*/,
                       0LL);
      if ( !fsm )
        goto LABEL_241;
      *(_QWORD *)(fsm + 56) = v453;
      sub_1BCA784((PartyOrganizationUtility_o *)(fsm + 56), v453, v454, v455, v456, v457, v458, v459);
      CombineEffectComponent__setItemFeed(this, v460);
      break;
    case 2:
      fsm = (__int64)*p_fsm;
      if ( !*p_fsm )
        goto LABEL_241;
      v453 = StringLiteral_18329/*"combine_fodder02"*/;
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

  if ( (byte_4B1997A & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData, list);
    byte_4B1997A = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 2;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtEntity,
    (int64_t)baseSvtData,
    (int64_t)list,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_1BCAA3C(v11, v12);
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)p_itemList, (int64_t)list, v17, v18, v19, v20, v21, v22);
}


void __fastcall CombineEffectComponent__SetFeedCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *v18; // x21
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *NodeFromName; // x21
  Il2CppObject *Component_object; // x0
  System_String_o **v22; // x8
  Il2CppObject *v23; // x20
  UnityEngine_Shader_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  UnityEngine_Material_o *v28; // x21
  UnityEngine_Texture_o *v29; // x22
  int32_t v30; // w8
  int v31; // w9

  if ( (byte_4B19981 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_15295/*"Unlit/Transparent Colored"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12384/*"START_ANIMATION"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5024/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v15, v16);
    byte_4B19981 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    goto LABEL_16;
  effect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effect, 0LL);
  if ( !this->fields.feedNameList )
    goto LABEL_16;
  v18 = (UnityEngine_Transform_o *)effect;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.feedNameList,
           this->fields.cntIndex,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  NodeFromName = TransformHelper__getNodeFromName(v18, (System_String_o *)Item, 1, 0LL);
  effect = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v22 = (System_String_o **)(this->fields.cardType == 6 ? &StringLiteral_5024/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15295/*"Unlit/Transparent Colored"*/);
  v23 = Component_object;
  v24 = UnityEngine_Shader__Find(*v22, 0LL);
  v28 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v25, v26, v27);
  UnityEngine_Material___ctor(v28, v24, 0LL);
  if ( !v23 )
    goto LABEL_16;
  v29 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v23->klass->vtable[26].method)(
                                   v23,
                                   v23->klass->vtable[27].methodPtr);
  effect = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))v23->klass->vtable[25].method)(
                                         v23,
                                         v28,
                                         v23->klass->vtable[26].methodPtr);
  if ( !v28 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v28, v29, 0LL);
  v30 = this->fields.cntIndex + 1;
  v31 = this->fields.materialCnt - 1;
  this->fields.cntIndex = v30;
  if ( v30 > v31 )
  {
    effect = (UnityEngine_GameObject_o *)this->fields.fsm;
    this->fields.cntIndex = 0;
    if ( effect )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12384/*"START_ANIMATION"*/, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(effect, data);
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

  if ( (byte_4B19977 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData, list);
    byte_4B19977 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = combineKind;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtEntity,
    (int64_t)baseSvtData,
    (int64_t)list,
    combineKind,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_1BCAA3C(v12, v13);
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v24.fields.currentCryptoKey = v15;
  *(_QWORD *)&v24.fields.fakeValue = v14;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseSvtData->fields.limitCount, 0LL);
  this->fields.materialList = list;
  p_materialList = &this->fields.materialList;
  *((_DWORD *)p_materialList - 1) = v16;
  sub_1BCA784((PartyOrganizationUtility_o *)p_materialList, (int64_t)list, v18, v19, v20, v21, v22, v23);
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
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x22
  __int64 v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_int__o *itemList; // x8
  int v24; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B19978 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, baseSvtData, list);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B19978 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1BCA784(
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
  v16 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  *(_QWORD *)&v25.fields.fakeValue = v15;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseSvtData->fields.limitCount, 0LL);
  itemList = this->fields.itemList;
  this->fields.baseSvtlimitCnt = v13;
  if ( !itemList )
LABEL_8:
    sub_1BCAA3C(v13, v14);
  v24 = itemList->fields._version + 1;
  itemList->fields._size = 0;
  itemList->fields._version = v24;
  this->fields.itemEntityList = list;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemEntityList, (int64_t)list, v17, v18, v19, v20, v21, v22);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo_45541300(
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

  if ( (byte_4B19979 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData, list);
    byte_4B19979 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.baseSvtEntity,
    (int64_t)baseSvtData,
    (int64_t)list,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_1BCAA3C(v11, v12);
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)p_itemList, (int64_t)list, v17, v18, v19, v20, v21, v22);
}


void __fastcall CombineEffectComponent__Start(CombineEffectComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CombineEffectComponent___endAnimation_b__42_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_o **p_effect; // x20
  UnityEngine_Object_o *effect; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B19989 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5551/*"END_FADE"*/, v4, v5);
    byte_4B19989 = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Object_o *)*p_effect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__DestroyImmediate_70154432(v9, 0LL);
    *p_effect = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effect, 0LL, v10, v11, v12, v13, v14, v15);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, v8);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5551/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent___fadeIn_b__34_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B19988 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5551/*"END_FADE"*/, method, v2);
    byte_4B19988 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5551/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent__endAnimation(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B19985 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_CombineEffectComponent__endAnimation_b__42_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B19985 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CombineEffectComponent__endAnimation_b__42_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall CombineEffectComponent__fadeIn(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1997D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_CombineEffectComponent__fadeIn_b__34_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B1997D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CombineEffectComponent__fadeIn_b__34_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadein(v15, DEFAULT_FADE_TIME, v17, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  void *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x24
  int32_t klass_high; // w8
  System_String_o **v25; // x8

  if ( (byte_4B19984 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, rarity, backCardImgId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_2811/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2812/*"BACKSIDE_SVT_IMAGE_ID"*/, v19, v20);
    byte_4B19984 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   svtId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL)) == 0LL
    || (*rarity = *((_DWORD *)Instance + 6), !Entity) )
  {
    sub_1BCAA3C(Instance, v22);
  }
  klass_high = HIDWORD(Entity[5].klass);
  this->fields.cardType = klass_high;
  if ( klass_high == 6 )
    v25 = (System_String_o **)&StringLiteral_2811/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/;
  else
    v25 = (System_String_o **)&StringLiteral_2812/*"BACKSIDE_SVT_IMAGE_ID"*/;
  *backCardImgId = ConstantMaster__getValue(*v25, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  ServantEntity_o *Entity; // x23
  ServantLimitEntity_o *v23; // x21
  Il2CppObject *v24; // x22

  if ( (byte_4B19983 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, rarity, classCardId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B19983 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  v23 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Entity || !Instance )
    goto LABEL_15;
  v24 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          Entity->fields.classId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  Instance = (Il2CppObject *)ServantEntity__GetOverwriteClassImageId(Entity, 0LL);
  if ( !(_DWORD)Instance )
  {
    if ( !v24 )
      goto LABEL_15;
    Instance = (Il2CppObject *)LODWORD(v24[2].monitor);
  }
  *classCardId = (int)Instance;
  if ( !v23 )
LABEL_15:
    sub_1BCAA3C(Instance, v21);
  *rarity = v23->fields.rarity;
}


void __fastcall CombineEffectComponent__setItemFeed(CombineEffectComponent_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *itemEntityList; // x0
  int32_t v19; // w20
  struct UnityEngine_Transform_o **p_itemNode; // x21
  ItemEntity_o *v21; // x22
  UnityEngine_Transform_o *v22; // x23
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *NodeFromName; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UISprite_o *v31; // x23
  __int64 v32; // x1
  int32_t ImageId; // w22
  int32_t v34; // w22
  int32_t v35; // w20
  struct UnityEngine_Transform_o **v36; // x21
  int32_t v37; // w22
  UnityEngine_Transform_o *v38; // x23
  Il2CppObject *v39; // x0
  UnityEngine_Transform_o *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  Il2CppObject *Component_object; // x23

  if ( (byte_4B19982 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v14, v15);
    sub_1BCA7E0(&StringLiteral_12384/*"START_ANIMATION"*/, v16, v17);
    byte_4B19982 = 1;
  }
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemEntityList;
  if ( itemEntityList && itemEntityList->fields._size >= 1 )
  {
    v19 = 0;
    p_itemNode = &this->fields.itemNode;
    while ( 1 )
    {
      itemEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      itemEntityList,
                                                                      v19,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemEntity__get_Item__);
      if ( !this->fields.effect )
        goto LABEL_30;
      v21 = (ItemEntity_o *)itemEntityList;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      this->fields.effect,
                                                                      0LL);
      if ( !this->fields.feedItemNameList )
        goto LABEL_30;
      v22 = (UnityEngine_Transform_o *)itemEntityList;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.feedItemNameList,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
      NodeFromName = TransformHelper__getNodeFromName(v22, (System_String_o *)Item, 1, 0LL);
      *p_itemNode = NodeFromName;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.itemNode,
        (int64_t)NodeFromName,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      itemEntityList = (System_Collections_Generic_List_object__o *)*p_itemNode;
      if ( !*p_itemNode )
        goto LABEL_30;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)itemEntityList,
                                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !v21 )
        goto LABEL_30;
      v31 = (UISprite_o *)itemEntityList;
      if ( v21->fields.type == 29 )
      {
        ImageId = ItemEntity__GetImageId(v21, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v32);
        AtlasManager__SetCoin(v31, ImageId, 0LL);
      }
      else
      {
        v34 = v21->fields.imageId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
        AtlasManager__SetItem(v31, v34, 0LL);
      }
      itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemEntityList;
      if ( !itemEntityList )
        goto LABEL_30;
      if ( ++v19 >= itemEntityList->fields._size )
        goto LABEL_19;
    }
  }
  itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemEntityList )
    goto LABEL_30;
  v35 = 0;
  v36 = &this->fields.itemNode;
  while ( v35 < itemEntityList->fields._size )
  {
    itemEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                                    (System_Collections_Generic_List_int__o *)itemEntityList,
                                                                    v35,
                                                                    (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( this->fields.effect )
    {
      v37 = (int)itemEntityList;
      itemEntityList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                      this->fields.effect,
                                                                      0LL);
      if ( this->fields.feedItemNameList )
      {
        v38 = (UnityEngine_Transform_o *)itemEntityList;
        v39 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.feedItemNameList,
                v35,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
        v40 = TransformHelper__getNodeFromName(v38, (System_String_o *)v39, 1, 0LL);
        *v36 = v40;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemNode, (int64_t)v40, v41, v42, v43, v44, v45, v46);
        itemEntityList = (System_Collections_Generic_List_object__o *)*v36;
        if ( *v36 )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)itemEntityList,
                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v47);
          AtlasManager__SetItem((UISprite_o *)Component_object, v37, 0LL);
          itemEntityList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
          ++v35;
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
    sub_1BCAA3C(itemEntityList, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemEntityList, (System_String_o *)StringLiteral_12384/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineEffectComponent__setReverseCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *fsm; // x0
  System_String_o *Value; // x22
  DesignCardManager_o *v9; // x21
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B1997F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, data, method);
    sub_1BCA7E0(&StringLiteral_11508/*"ReverseCardNodeName"*/, v5, v6);
    byte_4B1997F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11508/*"ReverseCardNodeName"*/,
                                  0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL),
        fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        !this->fields.effect)
    || (v9 = (DesignCardManager_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL),
        fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, Value, 1, 0LL),
        !v9) )
  {
    sub_1BCAA3C(fsm, data);
  }
  DesignCardManager__SetupCardImage(v9, data, (UnityEngine_Transform_o *)fsm, this->fields.baseClassCardId, 0LL);
}


void __fastcall CombineEffectComponent__setServantFeed(CombineEffectComponent_o *this, const MethodInfo *method)
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
  void *materialList; // x0
  __int64 v19; // x20
  __int64 v20; // x21
  int32_t v21; // w20
  int32_t v22; // w21
  bool isExceeded; // w22
  const MethodInfo *v24; // x5
  int32_t v25; // w20
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppObject *v34; // x20
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  AssetLoader_LoadEndDataHandler_o *v42; // x21
  __int64 v43; // x1
  int32_t backCardImgId[2]; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4B19980 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CombineEffectComponent_SetFeedCallback__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v8, v9);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B19980 = 1;
  }
  *(_QWORD *)backCardImgId = 0LL;
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_26;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  v20 = *((_QWORD *)materialList + 10);
  v19 = *((_QWORD *)materialList + 11);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v45.fields.currentCryptoKey = v20;
  *(_QWORD *)&v45.fields.fakeValue = v19;
  materialList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v45, 0LL);
  if ( !this->fields.materialList )
    goto LABEL_26;
  v21 = (int)materialList;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  materialList = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                           *((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)materialList + 6),
                           0LL);
  if ( !this->fields.materialList )
    goto LABEL_26;
  v22 = (int)materialList;
  materialList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)this->fields.materialList,
                   this->fields.cntIndex,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
  if ( !materialList )
    goto LABEL_26;
  isExceeded = UserServantEntity__isExceeded((UserServantEntity_o *)materialList, 0LL);
  CombineEffectComponent__getCardBackImg(this, &backCardImgId[1], backCardImgId, v21, v22, v24);
  v25 = backCardImgId[0];
  this->fields.feedClassCardId = backCardImgId[0];
  if ( isExceeded )
  {
    materialList = this->fields.materialList;
    if ( materialList )
    {
      materialList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)materialList,
                       this->fields.cntIndex,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( materialList )
      {
        FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)materialList, 0LL);
        materialList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_1BCAA3C(materialList, method);
  }
  materialList = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !materialList )
    goto LABEL_26;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)materialList,
                          v25,
                          backCardImgId[1],
                          0LL);
LABEL_18:
  v34 = (Il2CppObject *)ExceedFrameCardPath;
  materialList = this->fields.releaseAssetPath;
  if ( !materialList )
    goto LABEL_26;
  v35 = *((_QWORD *)materialList + 2);
  v36 = Method_System_Collections_Generic_List_string__Add__;
  ++*((_DWORD *)materialList + 7);
  if ( !v35 )
    goto LABEL_26;
  v37 = *((int *)materialList + 6);
  if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)materialList,
      v34,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = v35 + 8 * v37;
    *((_DWORD *)materialList + 6) = v37 + 1;
    *(_QWORD *)(v38 + 32) = v34;
    sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)v34, v28, v29, v30, v31, v32, v33);
  }
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v39, v40, v41);
  AssetLoader_LoadEndDataHandler___ctor(v42, (Il2CppObject *)this, Method_CombineEffectComponent_SetFeedCallback__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
  AssetManager__loadAssetStorage((System_String_o *)v34, v42, 1, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  AssetData_o *data; // x0
  __int64 v13; // x1
  Il2CppObject *Object_object__49237568; // x20
  UnityEngine_GameObject_o *v15; // x20
  struct CombineEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v17; // x21
  __int64 v18; // x2
  UnityEngine_Transform_o *v19; // x21
  __int64 v20; // x2
  UnityEngine_Transform_o *v21; // x21
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x20
  struct CombineEffectComponent_o *v24; // x8

  if ( (byte_4B1998A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_5551/*"END_FADE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17337/*"bg"*/, v10, v11);
    byte_4B1998A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              (System_String_o *)StringLiteral_17337/*"bg"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  data = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                          Object_object__49237568,
                          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !data )
    goto LABEL_22;
  v15 = (UnityEngine_GameObject_o *)data;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  v17 = (UnityEngine_Transform_o *)data;
  data = (AssetData_o *)_4__this->fields.bgParentObject;
  if ( !data )
    goto LABEL_22;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  if ( !v17 )
    goto LABEL_22;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)data, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v19 = (UnityEngine_Transform_o *)data;
  if ( !byte_4B109C7 )
  {
    data = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, method, v18);
    byte_4B109C7 = 1;
  }
  if ( !v19 )
    goto LABEL_22;
  UnityEngine_Transform__set_localRotation(v19, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v21 = (UnityEngine_Transform_o *)data;
  if ( !byte_4B109C1 )
  {
    data = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v20);
    byte_4B109C1 = 1;
  }
  if ( !v21 )
    goto LABEL_22;
  UnityEngine_Transform__set_localPosition(v21, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  data = (AssetData_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v23 = (UnityEngine_Transform_o *)data;
  if ( !byte_4B109C6 )
  {
    data = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v22);
    byte_4B109C6 = 1;
  }
  if ( !v23
    || (UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (v24 = this->fields.__4__this) == 0LL)
    || (data = (AssetData_o *)v24->fields.fsm) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(data, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5551/*"END_FADE"*/, 0LL);
}