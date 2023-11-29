void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4101914 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v1);
    byte_4101914 = 1;
  }
  ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH = 154;
  ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS = -83;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___ctor(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_Int32_array **v37; // x1
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x20
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v95; // x20
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x20
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v128; // x20
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  __int64 v138; // x4
  System_Collections_Generic_List_int__o *v139; // x20
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  System_Collections_Generic_List_bool__o *v150; // x20
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  System_Collections_Generic_List_bool__o *v161; // x20
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v172; // x20
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  __int64 v179; // x1
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v183; // x20
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7

  if ( (byte_4101913 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UILabel___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_UILabel__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_bool__TypeInfo, v16);
    sub_B16FFC(&StringLiteral_16632, v17);
    sub_B16FFC(&StringLiteral_13099, v18);
    sub_B16FFC(&StringLiteral_13247, v19);
    sub_B16FFC(&StringLiteral_2792, v20);
    sub_B16FFC(&StringLiteral_6040, v21);
    sub_B16FFC(&StringLiteral_12669, v22);
    sub_B16FFC(&StringLiteral_2864, v23);
    sub_B16FFC(&StringLiteral_14471, v24);
    sub_B16FFC(&StringLiteral_3943, v25);
    sub_B16FFC(&StringLiteral_2795, v26);
    sub_B16FFC(&StringLiteral_4166, v27);
    sub_B16FFC(&StringLiteral_6784, v28);
    sub_B16FFC(&StringLiteral_16631, v29);
    sub_B16FFC(&StringLiteral_4173, v30);
    sub_B16FFC(&StringLiteral_13115, v31);
    sub_B16FFC(&StringLiteral_8546, v32);
    sub_B16FFC(&StringLiteral_12658, v33);
    sub_B16FFC(&StringLiteral_13017, v34);
    sub_B16FFC(&StringLiteral_19427, v35);
    sub_B16FFC(&StringLiteral_6980, v36);
    byte_4101913 = 1;
  }
  v37 = (System_Int32_array **)StringLiteral_19427;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = StringLiteral_19427;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.BASE_SPRITE_ADD_POS_Y, v37, v2, v3, v4, v5, v6, v7);
  this->fields.ambientLight.fields.r = -45.0;
  *(_QWORD *)&this->fields.MESSAGE_LABEL_ADD_POS_Y = 0xC25C0000C2080000LL;
  v38 = (System_Int32_array **)StringLiteral_4166;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_4166;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.BATTLE_BG_OBJECT, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_6980;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_6980;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_OBJECT, v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Int32_array **)StringLiteral_16632;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_16632;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_ROOT, v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Int32_array **)StringLiteral_13099;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_13099;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_ASSET_NAME, v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Int32_array **)StringLiteral_2792;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_2792;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Int32_array **)StringLiteral_16631;
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)StringLiteral_16631;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.INACTIVE_PREFABS, v73, v74, v75, v76, v77, v78, v79);
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v80,
                                                                                                  v81,
                                                                                                  v82,
                                                                                                  v83);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v84 )
    goto LABEL_7;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v84,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_12669,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v84,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_12658,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v84,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6040,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v84,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13115,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v84;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.SCRIPT_CAMERAS,
    (System_Int32_array **)v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  v95 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v91,
                                                                                                  v92,
                                                                                                  v93,
                                                                                                  v94);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v95,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v95 )
    goto LABEL_7;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2795,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_4173,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_6784,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13247,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v95,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_14471,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v95;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.TARGET_BUTTON_NAME,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_string__TypeInfo,
                                                                                                   v102,
                                                                                                   v103,
                                                                                                   v104,
                                                                                                   v105);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v106,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v106 )
LABEL_7:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v106,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2864,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v106,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_13017,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v106,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_8546,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v106,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_3943,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.baseButton = (struct UICommonButton_o *)v106;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseButton,
    (System_Int32_array **)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  LOBYTE(this->fields.mainTextList) = 1;
  v117 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_string__TypeInfo,
                                                                                                   v113,
                                                                                                   v114,
                                                                                                   v115,
                                                                                                   v116);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v117,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v117;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rubyTextList,
    (System_Int32_array **)v117,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
  v128 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_string__TypeInfo,
                                                                                                   v124,
                                                                                                   v125,
                                                                                                   v126,
                                                                                                   v127);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v128,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.textPositionYList = (struct System_Collections_Generic_List_int__o *)v128;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.textPositionYList,
    (System_Int32_array **)v128,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  v139 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v135,
                                                     v136,
                                                     v137,
                                                     v138);
  System_Collections_Generic_List_int____ctor(
    v139,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.rubyFlagList = (struct System_Collections_Generic_List_bool__o *)v139;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rubyFlagList,
    (System_Int32_array **)v139,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
  v150 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                      System_Collections_Generic_List_bool__TypeInfo,
                                                      v146,
                                                      v147,
                                                      v148,
                                                      v149);
  System_Collections_Generic_List_bool____ctor(
    v150,
    (const MethodInfo_2EAED78 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v150;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rubyLineList,
    (System_Int32_array **)v150,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  v161 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                      System_Collections_Generic_List_bool__TypeInfo,
                                                      v157,
                                                      v158,
                                                      v159,
                                                      v160);
  System_Collections_Generic_List_bool____ctor(
    v161,
    (const MethodInfo_2EAED78 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v161;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mainList,
    (System_Int32_array **)v161,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  v172 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_UILabel__TypeInfo,
                                                                                                   v168,
                                                                                                   v169,
                                                                                                   v170,
                                                                                                   v171);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v172,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v172;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rubyList,
    (System_Int32_array **)v172,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  v183 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_UILabel__TypeInfo,
                                                                                                   v179,
                                                                                                   v180,
                                                                                                   v181,
                                                                                                   v182);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v183,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  *(_QWORD *)&this->fields.notRubyFlag = v183;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.notRubyFlag,
    (System_Int32_array **)v183,
    v184,
    v185,
    v186,
    v187,
    v188,
    v189);
  LOBYTE(this->fields.addSize.fields.y) = 1;
  LODWORD(this[1].klass) = 0;
  *(_DWORD *)&this->fields.continueRuby = 0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__Awake(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall ServantStatusFlavorTextListViewItemDrawText__GetFormalText(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x22
  System_Collections_Generic_List_char__o *v14; // x21
  int32_t v15; // w23
  char v16; // w28
  char v17; // w19
  char v18; // w26
  System_String_o *v19; // x24
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  uint16_t Chars; // w0
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  const MethodInfo *v26; // x2
  struct ShiningIconComponent_o *newIcon; // x8
  ServantStatusFlavorTextListViewItemDrawText_o *v29; // [xsp+0h] [xbp-60h]
  __int16 v30[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4101911 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_char__Add__, labelText);
    sub_B16FFC(&Method_System_Collections_Generic_List_char___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_char__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15574, v9);
    sub_B16FFC(&StringLiteral_1223, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    sub_B16FFC(&StringLiteral_15807, v12);
    byte_4101911 = 1;
  }
  v30[0] = 0;
  v13 = (System_String_o *)StringLiteral_1;
  v14 = (System_Collections_Generic_List_char__o *)sub_B170CC(
                                                     System_Collections_Generic_List_char__TypeInfo,
                                                     labelText,
                                                     method,
                                                     v3,
                                                     v4);
  System_Collections_Generic_List_char____ctor(
    v14,
    (const MethodInfo_2EB4D8C *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_33;
  v29 = this;
  if ( labelText->fields.m_stringLength >= 1 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = v13;
    while ( 1 )
    {
      v30[0] = System_String__get_Chars(labelText, v15, 0LL);
      v20 = System_Char__ToString((uint16_t)v30, 0LL);
      v13 = System_String__Concat_43743732(v13, v20, 0LL);
      if ( (v17 & 1) != 0 )
      {
        v30[0] = System_String__get_Chars(labelText, v15, 0LL);
        v21 = System_Char__ToString((uint16_t)v30, 0LL);
        v19 = System_String__Concat_43743732(v19, v21, 0LL);
      }
      Chars = System_String__get_Chars(labelText, v15, 0LL);
      if ( !v14 )
        goto LABEL_33;
      System_Collections_Generic_List_char___Add(
        v14,
        Chars,
        (const MethodInfo_2EB5AE8 *)Method_System_Collections_Generic_List_char__Add__);
      if ( System_String__get_Chars(labelText, v15, 0LL) == 91
        && System_String__get_Chars(labelText, v15 + 1, 0LL) == 35 )
      {
        v18 = 0;
      }
      else
      {
        if ( System_String__get_Chars(labelText, v15, 0LL) != 35 || (v16 & 1) == 0 )
        {
          if ( ((unsigned __int8)v16 & (System_String__get_Chars(labelText, v15, 0LL) == 58)) != 0 )
          {
            v16 = 1;
            v17 = 1;
          }
          else if ( System_String__get_Chars(labelText, v15, 0LL) == 93 && (v16 & 1) != 0 )
          {
            if ( (v17 & 1) != 0 )
            {
              v23 = System_String__Concat_43743732((System_String_o *)StringLiteral_1223, v19, 0LL);
              if ( !v13 )
                goto LABEL_33;
              v24 = v23;
            }
            else
            {
              if ( !v13 )
                goto LABEL_33;
              v24 = (System_String_o *)StringLiteral_15807;
            }
            v25 = System_String__Replace_43750968(v13, v24, (System_String_o *)StringLiteral_1, 0LL);
            v19 = (System_String_o *)StringLiteral_1;
            v13 = v25;
            v16 = 0;
            v17 = 0;
          }
          goto LABEL_25;
        }
        if ( !v13 )
          goto LABEL_33;
        v13 = System_String__Replace_43750968(
                v13,
                (System_String_o *)StringLiteral_15574,
                (System_String_o *)StringLiteral_1,
                0LL);
      }
      v16 = 1;
LABEL_25:
      if ( ++v15 >= labelText->fields.m_stringLength )
        goto LABEL_28;
    }
  }
  v18 = 1;
LABEL_28:
  WrapControlText__textAdjust((UILabel_o *)v29->fields.newIcon, v13, 22, 0, 0, 0LL);
  if ( (v18 & 1) != 0 )
  {
    newIcon = v29->fields.newIcon;
    if ( newIcon )
      return (System_String_o *)newIcon[12].fields.widget;
LABEL_33:
    sub_B170D4();
  }
  return ServantStatusFlavorTextListViewItemDrawText__TextFormalAdjust(v29, v14, v26);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned int allCamerasCount; // w0
  __int64 v31; // x2
  UnityEngine_Camera_array *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Collections_Generic_List_string__o *SCRIPT_CAMERAS; // x0
  UnityEngine_GameObject_o *v46; // x23
  const MethodInfo *v47; // x3
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v53; // x23
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  _BOOL8 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  int max_length; // w8
  unsigned int v64; // w26
  Il2CppClass **v65; // x8
  UnityEngine_Behaviour_o *v66; // x24
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  UnityEngine_GameObject_o *v69; // x22
  struct System_String_o *Deep; // x0
  UnityEngine_GameObject_o **p_COMMON_UI; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  UnityEngine_GameObject_o *v78; // x24
  struct UnityEngine_GameObject_o *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  UnityEngine_Object_o *v86; // x22
  const MethodInfo *v87; // x3
  UnityEngine_Object_o *summonBgRoot; // x22
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x4
  System_String_o *SUMMON_BG_OBJECT_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v93; // x21
  System_Collections_Generic_List_Enumerator_T__o v94; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v95; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_410190B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Camera___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Camera__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Camera___ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_Camera__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v17);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&SoundManager_TypeInfo, v20);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0__OnClickPlayScript_b__0__, v21);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0_TypeInfo, v22);
    byte_410190B = 1;
  }
  memset(&v95, 0, sizeof(v95));
  v23 = sub_B170CC(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0_TypeInfo, method, v2, v3, v4);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_55;
  *(_QWORD *)(v23 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  if ( HIDWORD(this->fields.mainTextList) && !LOBYTE(this->fields.ambientLight.fields.g) )
  {
    LOBYTE(this->fields.ambientLight.fields.g) = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0LL);
    v32 = (UnityEngine_Camera_array *)sub_B17014(UnityEngine_Camera___TypeInfo, allCamerasCount, v31);
    UnityEngine_Camera__GetAllCameras(v32, 0LL);
    v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    v33,
                                                                                                    v34,
                                                                                                    v35,
                                                                                                    v36);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v37,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v23 + 32) = v37;
    v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v23 + 32);
    sub_B16F98((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)v37, v39, v40, v41, v42, v43, v44);
    SCRIPT_CAMERAS = this->fields.SCRIPT_CAMERAS;
    if ( !SCRIPT_CAMERAS )
      goto LABEL_55;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v94,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)SCRIPT_CAMERAS,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v95 = v94;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v95,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v46 = UnityEngine_GameObject__Find((System_String_o *)v95.fields.current, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v46, 0, v47);
        if ( !*v38 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *v38,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v95,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_Camera__TypeInfo,
                                                                                                    v48,
                                                                                                    v49,
                                                                                                    v50,
                                                                                                    v51);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v52,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v23 + 24) = v52;
    v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v23 + 24);
    sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)v52, v54, v55, v56, v57, v58, v59);
    if ( !v32 )
      goto LABEL_55;
    max_length = v32->max_length;
    if ( max_length >= 1 )
    {
      v64 = 0;
      while ( 1 )
      {
        if ( v64 >= max_length )
        {
          sub_B17100(v60, v61, v62);
          sub_B170A0();
        }
        v65 = &v32->obj.klass + (int)v64;
        v66 = (UnityEngine_Behaviour_o *)v65[4];
        if ( !v66 )
          break;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v65[4],
                                               0LL);
        if ( !gameObject )
          break;
        name = UnityEngine_Object__get_name(gameObject, 0LL);
        if ( !this->fields.TARGET_BUTTON_NAME )
          break;
        v60 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.TARGET_BUTTON_NAME,
                (WarBoardManager_TaskList_o *)name,
                (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( !v60 )
        {
          UnityEngine_Behaviour__set_enabled(v66, 0, 0LL);
          if ( !*v53 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *v53,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Camera__Add__);
        }
        max_length = v32->max_length;
        if ( (int)++v64 >= max_length )
          goto LABEL_29;
      }
LABEL_55:
      sub_B170D4();
    }
LABEL_29:
    v69 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0LL, 0LL) )
    {
      Deep = (struct System_String_o *)GameObjectExtensions__FindDeep(v69, this->fields.SUMMON_BG_ASSET_NAME, 1, 0LL);
      p_COMMON_UI = (UnityEngine_GameObject_o **)&this->fields.COMMON_UI;
      this->fields.COMMON_UI = Deep;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.COMMON_UI,
        (System_Int32_array **)Deep,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
    }
    else
    {
      p_COMMON_UI = (UnityEngine_GameObject_o **)&this->fields.COMMON_UI;
    }
    v78 = *p_COMMON_UI;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v78, 0LL, 0LL) )
    {
      if ( !*p_COMMON_UI )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive(*p_COMMON_UI, 1, 0LL);
    }
    v79 = UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    this->fields.summonBg = v79;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.summonBg,
      (System_Int32_array **)v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    v86 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_ROOT, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
      goto LABEL_49;
    summonBgRoot = (UnityEngine_Object_o *)this->fields.summonBgRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(summonBgRoot, 0LL, 0LL) )
    {
LABEL_49:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        this,
        (System_Collections_Generic_List_Camera__o *)*v53,
        (System_Collections_Generic_List_GameObject__o *)*v38,
        v87);
    }
    else
    {
      SUMMON_BG_OBJECT_NAME = this->fields.SUMMON_BG_OBJECT_NAME;
      v93 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v89, v90, v87, v91);
      AssetLoader_LoadEndDataHandler___ctor(
        v93,
        (Il2CppObject *)v23,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0__OnClickPlayScript_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(SUMMON_BG_OBJECT_NAME, v93, 1, 0LL);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21

  if ( (byte_410190C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, inactiveCameras);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0__PlayScript_b__0__, v10);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0_TypeInfo, v11);
    byte_410190C = 1;
  }
  v12 = sub_B170CC(
          ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0_TypeInfo,
          inactiveCameras,
          inactivePrefabs,
          method,
          v4);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = inactivePrefabs;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)inactivePrefabs,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v12 + 32) = inactiveCameras;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)inactiveCameras,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v36 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
  v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v12,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0__PlayScript_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v38, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v36; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v38; // x21

  if ( (byte_410190D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, inactiveCameras);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0__RefreshUI_b__0__, v10);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0_TypeInfo, v11);
    byte_410190D = 1;
  }
  v12 = sub_B170CC(
          ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0_TypeInfo,
          inactiveCameras,
          inactivePrefabs,
          method,
          v4);
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0___ctor(
    (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = inactiveCameras;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)inactiveCameras,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *(_QWORD *)(v12 + 32) = inactivePrefabs;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)inactivePrefabs,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v36 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v36->static_fields->DEFAULT_FADE_TIME;
  v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v12,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0__RefreshUI_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v38, 0LL);
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
  struct UICommonButton_o *baseButton; // x0
  UnityEngine_GameObject_o *Deep; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_Object_o *v16; // x21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_410190A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, gameObject);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_410190A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)baseButton,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = GameObjectExtensions__FindDeep(gameObject, (System_String_o *)v18.fields.current, 1, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Deep, 0LL, 0LL) )
    {
      if ( !Deep )
        sub_B170D4();
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Deep,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !Component_srcLineSprite )
          sub_B170D4();
        ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))Component_srcLineSprite->klass[1]._1.namespaze)(
          Component_srcLineSprite,
          isEnable,
          Component_srcLineSprite->klass[1]._1.byval_arg.data);
      }
      v16 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      Deep,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
      {
        if ( !v16 )
          sub_B170D4();
        ((void (__fastcall *)(UnityEngine_Object_o *, bool, void *))v16->klass[1]._1.namespaze)(
          v16,
          isEnable,
          v16->klass[1]._1.byval_arg.data);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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
  UnityEngine_GameObject_o *titleEquipBase; // x0
  UISprite_o *Component_srcLineSprite; // x21
  struct UICommonButton_o *playScriptButton; // x0
  struct UICommonButton_o *v12; // x0
  struct UICommonButton_o *v13; // x0
  struct UICommonButton_o *v14; // x0
  struct UICommonButton_o *v15; // x0
  struct UICommonButton_o *v16; // x0
  float v17; // s8
  UnityEngine_Component_o *v18; // x0
  struct UICommonButton_o *v19; // x0
  struct UICommonButton_o *v20; // x20
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  UnityEngine_Transform_o *transform; // x0
  float v25; // s8
  UnityEngine_Component_o *v26; // x0
  float v27; // s8
  struct UICommonButton_o *v28; // x19

  if ( (byte_4101909 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v6);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_4101909 = 1;
  }
  titleEquipBase = this->fields.titleEquipBase;
  if ( !titleEquipBase )
    goto LABEL_53;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            titleEquipBase,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    playScriptButton = this->fields.playScriptButton;
    if ( !playScriptButton )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)playScriptButton, (System_String_o *)StringLiteral_1, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( Component_srcLineSprite )
      {
        UISprite__set_spriteName(
          Component_srcLineSprite,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_53:
      sub_B170D4();
    }
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      }
      if ( !Component_srcLineSprite )
        goto LABEL_53;
      UISprite__set_spriteName(
        Component_srcLineSprite,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0LL);
    }
    v12 = this->fields.playScriptButton;
    if ( !v12 )
      goto LABEL_53;
    UILabel__set_overflowMethod((UILabel_o *)v12, 2, 0LL);
    v13 = this->fields.playScriptButton;
    if ( !v13 )
      goto LABEL_53;
    UILabel__set_alignment((UILabel_o *)v13, 2, 0LL);
    v14 = this->fields.playScriptButton;
    if ( !v14 )
      goto LABEL_53;
    UILabel__set_text((UILabel_o *)v14, title, 0LL);
    v15 = this->fields.playScriptButton;
    if ( !v15 )
      goto LABEL_53;
    (*(void (__fastcall **)(struct UICommonButton_o *, _QWORD))&v15->klass[1]._2.thread_static_fields_offset)(
      v15,
      *(_QWORD *)&v15->klass[1]._2.token);
    v16 = this->fields.playScriptButton;
    if ( !v16 )
      goto LABEL_53;
    LODWORD(v17) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(struct UICommonButton_o *, void *))v16->klass[1]._1.parent)(
                       v16,
                       v16->klass[1]._1.generic_class));
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    }
    v18 = (UnityEngine_Component_o *)this->fields.playScriptButton;
    if ( !v18 )
      goto LABEL_53;
    if ( v17 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      transform = UnityEngine_Component__get_transform(v18, 0LL);
      if ( !transform )
        goto LABEL_53;
      LODWORD(v25) = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      }
      v26 = (UnityEngine_Component_o *)this->fields.playScriptButton;
      if ( !v26 )
        goto LABEL_53;
      v27 = (float)(1.0 - v25)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject(v26, 0LL);
      TITLE_NAME_LEFT_POS = v27
                          + (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)v18, 0, 0LL);
      v19 = this->fields.playScriptButton;
      if ( !v19 )
        goto LABEL_53;
      UILabel__set_alignment((UILabel_o *)v19, 1, 0LL);
      v20 = this->fields.playScriptButton;
      if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      }
      if ( !v20 )
        goto LABEL_53;
      UIWidget__set_width(
        (UIWidget_o *)v20,
        ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      v21 = (UnityEngine_Component_o *)this->fields.playScriptButton;
      if ( !v21 )
        goto LABEL_53;
      gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    v28 = this->fields.playScriptButton;
    if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    }
    if ( !v28 )
      goto LABEL_53;
    UILabel__SetCondensedScale(
      (UILabel_o *)v28,
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
  struct ShiningIconComponent_o *newIcon; // x0
  int klass_high; // w27
  const MethodInfo *v19; // x2
  System_String_o *FormalText; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  UnityEngine_Behaviour_o *v23; // x0
  struct ShiningIconComponent_o *v24; // x0
  float v25; // s10
  double v26; // d8
  ServantVoiceMaster_o *Master_WarQuestSelectionMaster; // x21
  const MethodInfo *v28; // x1
  int32_t SvtId; // w0
  int32_t SvtVoiceId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v32; // x21
  _BOOL4 v33; // w26
  UnityEngine_Object_o *baseSprite; // x24
  int32_t v35; // w21
  int v36; // w27
  UnityEngine_BoxCollider_o *v37; // x0
  int v38; // s0
  float v39; // s1
  UnityEngine_BoxCollider_o *v41; // x0
  float v42; // s1
  UnityEngine_Object_o *titleBase; // x24
  UIWidget_o *v44; // x0
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v46; // w24
  UnityEngine_GameObject_o *messageLabel; // x0
  UnityEngine_GameObject_o *titleEquipBase; // x0
  UnityEngine_GameObject_o *titleCommandCodeBase; // x0
  ServantEntity_o *svtEntity; // x0
  bool IsServantEquip; // w0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *titleServantBase; // x0
  UnityEngine_Transform_o *transform; // x0
  float v55; // s0
  float v56; // s2
  UnityEngine_GameObject_o *v57; // x0
  float v58; // s8
  float v59; // s9
  UnityEngine_Transform_o *v60; // x0
  float v61; // s11
  float v62; // s10
  UnityEngine_Component_o *rubyPrefab; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_Component_o *v67; // x0
  UnityEngine_Transform_o *v68; // x0
  float v69; // s1
  UnityEngine_Component_o *v70; // x0
  float v71; // s8
  UnityEngine_GameObject_o *v72; // x0
  UIWidget_o *v73; // x0
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UIWidget_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UISprite_o *v78; // x0
  UnityEngine_Component_o *v79; // x0
  UnityEngine_Transform_o *v80; // x0
  float v81; // s0
  float v82; // s2
  UIWidget_o *v83; // x0
  float v84; // s8
  float v85; // s9
  UnityEngine_Component_o *v86; // x0
  UnityEngine_Transform_o *v87; // x0
  UnityEngine_Object_o *titleName; // x21
  ShiningIconComponent_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UIWidget_o *Component_srcLineSprite; // x23
  int v94; // s0
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4101908 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantVoiceMaster___, item);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    byte_4101908 = 1;
  }
  LODWORD(this->fields.TITLE_SPRITE_NAME) = mode;
  if ( !item || !mode || !LOBYTE(this->fields.mainTextList) )
    return;
  newIcon = this->fields.newIcon;
  LOBYTE(this->fields.mainTextList) = 0;
  if ( !newIcon || !text )
    goto LABEL_93;
  klass_high = HIDWORD(newIcon[5].klass);
  UIWidget__set_height((UIWidget_o *)newIcon, LODWORD(newIcon[13].klass) * text->fields.m_stringLength, 0LL);
  FormalText = ServantStatusFlavorTextListViewItemDrawText__GetFormalText(this, text, v19);
  ServantStatusFlavorTextListViewItemDrawText__SetTextObjectList(this, FormalText, v21);
  if ( !LOBYTE(this->fields.addSize.fields.y) )
  {
    ServantStatusFlavorTextListViewItemDrawText__SetMainObject(this, v22);
    v23 = (UnityEngine_Behaviour_o *)this->fields.newIcon;
    if ( !v23 )
      goto LABEL_93;
    UnityEngine_Behaviour__set_enabled(v23, 0, 0LL);
  }
  v24 = this->fields.newIcon;
  if ( !v24 )
    goto LABEL_93;
  v25 = COERCE_FLOAT(LODWORD(UILabel__get_printedSize((UILabel_o *)v24, 0LL).fields.y)) + *(float *)&this[1].klass;
  if ( v25 == INFINITY )
    v26 = -v25;
  else
    v26 = v25;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantVoiceMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v28);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  HIDWORD(this->fields.mainTextList) = SvtVoiceId;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_93;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(Master_WarQuestSelectionMaster, SvtVoiceId, 0LL);
  v33 = item->fields.svtEntity
     && (v32 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v32 != 0LL;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  v35 = (int)v26;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = v35 - klass_high;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v37 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v37 )
      goto LABEL_93;
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_BoxCollider__get_size(v37, 0LL);
    v41 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v41 )
      goto LABEL_93;
    v42 = v39 + (float)v36;
    UnityEngine_BoxCollider__set_size(v41, *(UnityEngine_Vector3_o *)&v38, 0LL);
  }
  titleBase = (UnityEngine_Object_o *)this->fields.titleBase;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleBase, 0LL, 0LL) )
  {
    v44 = (UIWidget_o *)this->fields.titleBase;
    if ( !v44 )
      goto LABEL_93;
    UIWidget__set_height(v44, v44->fields.mHeight + v36, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v46 = 0;
  else
    v46 = v33;
  if ( commandCodeEntity )
  {
    messageLabel = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive(messageLabel, 1, 0LL);
    titleEquipBase = this->fields.titleEquipBase;
    if ( !titleEquipBase )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive(titleEquipBase, 0, 0LL);
    titleCommandCodeBase = this->fields.titleCommandCodeBase;
    if ( !titleCommandCodeBase )
      goto LABEL_93;
    goto LABEL_49;
  }
  svtEntity = item->fields.svtEntity;
  if ( !svtEntity || (IsServantEquip = ServantEntity__get_IsServantEquip(svtEntity, 0LL), !this->fields.titleEquipBase) )
LABEL_93:
    sub_B170D4();
  if ( !IsServantEquip )
  {
    UnityEngine_GameObject__SetActive(this->fields.titleEquipBase, 1, 0LL);
    v90 = this->fields.titleCommandCodeBase;
    if ( v90 )
    {
      UnityEngine_GameObject__SetActive(v90, 0, 0LL);
      v91 = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( v91 )
      {
        UnityEngine_GameObject__SetActive(v91, 0, 0LL);
        v92 = this->fields.titleEquipBase;
        if ( v92 )
        {
          Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    v92,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
          {
            if ( isOpen )
            {
              *(UnityEngine_Color_o *)&v94 = UnityEngine_Color__get_white(0LL);
              v33 = v46;
              if ( !Component_srcLineSprite )
                goto LABEL_93;
            }
            else
            {
              *(UnityEngine_Color_o *)&v94 = UnityEngine_Color__get_gray(0LL);
              if ( !Component_srcLineSprite )
                goto LABEL_93;
            }
            UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v94, 0LL);
          }
          else
          {
            v33 = v46;
          }
          goto LABEL_50;
        }
      }
    }
    goto LABEL_93;
  }
  UnityEngine_GameObject__SetActive(this->fields.titleEquipBase, 0, 0LL);
  v52 = this->fields.titleCommandCodeBase;
  if ( !v52 )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive(v52, 1, 0LL);
  titleCommandCodeBase = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !titleCommandCodeBase )
    goto LABEL_93;
LABEL_49:
  UnityEngine_GameObject__SetActive(titleCommandCodeBase, 0, 0LL);
LABEL_50:
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_93;
  transform = UnityEngine_GameObject__get_transform(titleServantBase, 0LL);
  if ( !transform )
    goto LABEL_93;
  *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v57 = this->fields.titleServantBase;
  if ( !v57 )
    goto LABEL_93;
  v58 = v55;
  v59 = v56;
  v60 = UnityEngine_GameObject__get_transform(v57, 0LL);
  if ( !v60 )
    goto LABEL_93;
  v61 = v25 * 0.5;
  v62 = (float)(v25 * 0.5) + 20.0;
  v98.fields.x = v58;
  v98.fields.y = v62;
  v98.fields.z = v59;
  UnityEngine_Transform__set_localPosition(v60, v98, 0LL);
  if ( v33 )
  {
    rubyPrefab = (UnityEngine_Component_o *)this->fields.rubyPrefab;
    if ( !rubyPrefab )
      goto LABEL_93;
    gameObject = UnityEngine_Component__get_gameObject(rubyPrefab, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, v62 + *(float *)&this->fields.isScriptPlaying, 0LL);
    v65 = (UnityEngine_Component_o *)this->fields.rubyPrefab;
    if ( !v65 )
      goto LABEL_93;
    v66 = UnityEngine_Component__get_gameObject(v65, 0LL);
    if ( !v66 )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive(v66, 1, 0LL);
    v67 = (UnityEngine_Component_o *)this->fields.rubyPrefab;
    if ( !v67 )
      goto LABEL_93;
    v68 = UnityEngine_Component__get_transform(v67, 0LL);
    if ( !v68 )
      goto LABEL_93;
    *(UnityEngine_Vector3_o *)(&v69 - 1) = UnityEngine_Transform__get_localPosition(v68, 0LL);
    v70 = (UnityEngine_Component_o *)this->fields.newIcon;
    if ( !v70 )
      goto LABEL_93;
    v71 = v69;
    v72 = UnityEngine_Component__get_gameObject(v70, 0LL);
    GameObjectExtensions__SetLocalPositionY(v72, v71 + this->fields.ambientLight.fields.r, 0LL);
    v73 = (UIWidget_o *)this->fields.newIcon;
    if ( !v73 )
      goto LABEL_93;
    UIWidget__set_height(v73, v35, 0LL);
    v74 = (UnityEngine_Component_o *)this->fields.titleBase;
    if ( !v74 )
      goto LABEL_93;
    v75 = UnityEngine_Component__get_gameObject(v74, 0LL);
    GameObjectExtensions__SetLocalPositionY(v75, this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    v76 = (UIWidget_o *)this->fields.titleBase;
    if ( !v76 )
      goto LABEL_93;
    UIWidget__set_height(v76, v76->fields.mHeight + 64, 0LL);
    v77 = this->fields.titleCommandCodeBase;
    if ( !v77 )
      goto LABEL_93;
    v78 = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          v77,
                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v78 )
      goto LABEL_93;
    UISprite__set_spriteName(v78, *(System_String_o **)&this->fields.BASE_SPRITE_ADD_POS_Y, 0LL);
  }
  else
  {
    v79 = (UnityEngine_Component_o *)this->fields.newIcon;
    if ( !v79 )
      goto LABEL_93;
    v80 = UnityEngine_Component__get_transform(v79, 0LL);
    if ( !v80 )
      goto LABEL_93;
    *(UnityEngine_Vector3_o *)&v81 = UnityEngine_Transform__get_localPosition(v80, 0LL);
    v83 = (UIWidget_o *)this->fields.newIcon;
    if ( !v83 )
      goto LABEL_93;
    v84 = v81;
    v85 = v82;
    UIWidget__set_height(v83, v35, 0LL);
    v86 = (UnityEngine_Component_o *)this->fields.newIcon;
    if ( !v86 )
      goto LABEL_93;
    v87 = UnityEngine_Component__get_transform(v86, 0LL);
    if ( !v87 )
      goto LABEL_93;
    v99.fields.y = v61 + -14.0;
    v99.fields.x = v84;
    v99.fields.z = v85;
    UnityEngine_Transform__set_localPosition(v87, v99, 0LL);
  }
  titleName = (UnityEngine_Object_o *)this->fields.titleName;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleName, 0LL, 0LL) )
  {
    v89 = (ShiningIconComponent_o *)this->fields.titleName;
    if ( !v89 )
      goto LABEL_93;
    ShiningIconComponent__Set_33652660(v89, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetMainObject(
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
  struct ShiningIconComponent_o *newIcon; // x0
  float v12; // s0
  struct ShiningIconComponent_o *v13; // x9
  int32_t klass; // w20
  struct System_Collections_Generic_List_string__o *rubyTextList; // x8
  int monitor; // w9
  float v17; // s9
  unsigned __int64 v18; // x24
  int v19; // w28
  int32_t v20; // w21
  char v21; // w27
  float v22; // s12
  int v23; // w26
  float v24; // s10
  float v25; // s11
  UnityEngine_Component_o *v26; // x0
  UILabel_o *v27; // x22
  UnityEngine_Transform_o *Component_WebViewObject; // x23
  UnityEngine_GameObject_o *v29; // x0
  UILabel_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_string__o *v31; // x23
  UILabel_o *v32; // x22
  struct ShiningIconComponent_o *v33; // x8
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x23
  struct System_Collections_Generic_List_UILabel__o *mainList; // x25
  int v36; // w8
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_bool__o *v38; // x27
  UnityEngine_Transform_o *v39; // x0
  struct System_Collections_Generic_List_bool__o *v40; // x28
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x23
  UnityEngine_Transform_o *v42; // x0
  const MethodInfo *v43; // x4
  struct System_Collections_Generic_List_bool__o *v44; // x23
  float v45; // s0
  struct System_Collections_Generic_List_UILabel__o *rubyList; // x0
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_410190F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Transform___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UILabel__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_410190F = 1;
  }
  newIcon = this->fields.newIcon;
  if ( !newIcon
    || ((*(void (__fastcall **)(struct ShiningIconComponent_o *, Il2CppMethodPointer))&newIcon->klass[1]._2.naturalAligment)(
          newIcon,
          newIcon->klass[1].vtable._0_Equals.methodPtr),
        (v13 = this->fields.newIcon) == 0LL)
    || (klass = (int32_t)v13[13].klass,
        rubyTextList = this->fields.rubyTextList,
        monitor = (int)v13[16].monitor,
        LODWORD(this[1].klass) = 0,
        *(_DWORD *)&this->fields.continueRuby = 0,
        !rubyTextList) )
  {
LABEL_50:
    sub_B170D4();
  }
  v17 = v12 * 0.5;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0.0;
  v23 = -(monitor + klass);
  v24 = (float)((float)monitor + (float)monitor) + 1.0;
  v25 = 0.0;
  while ( (__int64)v18 < rubyTextList->fields._size )
  {
    v26 = (UnityEngine_Component_o *)this->fields.newIcon;
    if ( v26 )
    {
      v27 = *(UILabel_o **)&this->fields.isFirst;
      Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             v26,
                                                             (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v29 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          v27,
                                          Component_WebViewObject,
                                          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( v29 )
      {
        Component_srcLineSprite = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v29,
                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        v31 = this->fields.rubyTextList;
        if ( v31 )
        {
          v32 = Component_srcLineSprite;
          if ( v18 >= (unsigned int)v31->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( Component_srcLineSprite )
          {
            UILabel__set_text(Component_srcLineSprite, v31->fields._items->m_Items[v18], 0LL);
            UILabel__set_fontSize(v32, klass, 0LL);
            v33 = this->fields.newIcon;
            if ( v33 )
            {
              UIWidget__set_depth((UIWidget_o *)v32, (int32_t)v33[5].monitor, 0LL);
              rubyFlagList = this->fields.rubyFlagList;
              if ( rubyFlagList )
              {
                if ( v18 >= (unsigned int)rubyFlagList->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                mainList = this->fields.mainList;
                v36 = *(_DWORD *)&rubyFlagList->fields._items->m_Items[4 * v18 + 4];
                if ( v19 != v36 )
                  v22 = 0.0;
                if ( mainList )
                {
                  if ( v18 >= (unsigned int)mainList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  v21 &= v19 == v36;
                  if ( *((_BYTE *)mainList->fields._items->m_Items + v18) )
                  {
                    if ( (v21 & 1) == 0 )
                    {
                      v25 = v24 + v25;
                      *(float *)&this[1].klass = v25;
                    }
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v32, 0LL);
                    v38 = this->fields.rubyFlagList;
                    if ( !v38 )
                      goto LABEL_50;
                    if ( v18 >= (unsigned int)v38->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    if ( !transform )
                      goto LABEL_50;
                    v47.fields.z = 0.0;
                    v47.fields.y = (float)(*(_DWORD *)&v38->fields._items->m_Items[4 * v18 + 4] * v23) - v25;
                    v47.fields.x = v22 - v17;
                    UnityEngine_Transform__set_localPosition(transform, v47, 0LL);
                    v21 = 1;
                  }
                  else
                  {
                    v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v32, 0LL);
                    v40 = this->fields.rubyFlagList;
                    if ( !v40 )
                      goto LABEL_50;
                    if ( v18 >= (unsigned int)v40->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    if ( !v39 )
                      goto LABEL_50;
                    v48.fields.z = 0.0;
                    v48.fields.y = (float)(*(_DWORD *)&v40->fields._items->m_Items[4 * v18 + 4] * v23) - v25;
                    v48.fields.x = v22 - v17;
                    UnityEngine_Transform__set_localPosition(v39, v48, 0LL);
                  }
                  rubyLineList = this->fields.rubyLineList;
                  if ( !rubyLineList )
                    goto LABEL_50;
                  if ( v18 >= (unsigned int)rubyLineList->fields._size )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  if ( rubyLineList->fields._items->m_Items[v18 + 4] )
                  {
                    v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v32, 0LL);
                    if ( !v42 )
                      goto LABEL_50;
                    localPosition = UnityEngine_Transform__get_localPosition(v42, 0LL);
                    ServantStatusFlavorTextListViewItemDrawText__SetRubyObject(
                      this,
                      v20++,
                      localPosition,
                      klass,
                      v32,
                      v43);
                  }
                  v44 = this->fields.rubyFlagList;
                  if ( v44 )
                  {
                    if ( v18 >= (unsigned int)v44->fields._size )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                    v19 = *(_DWORD *)&v44->fields._items->m_Items[4 * v18 + 4];
                    LODWORD(v45) = *(_QWORD *)&UILabel__get_printedSize(v32, 0LL);
                    rubyList = this->fields.rubyList;
                    if ( rubyList )
                    {
                      v22 = v22 + v45;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)rubyList,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UILabel__Add__);
                      rubyTextList = this->fields.rubyTextList;
                      ++v18;
                      if ( rubyTextList )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_50;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetRubyObject(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        int32_t idx,
        UnityEngine_Vector3_o mainPosition,
        int32_t fontSize,
        UILabel_o *mainLabel,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s8
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Component_o *newIcon; // x0
  struct UnityEngine_GameObject_o *mainPrefab; // x21
  UnityEngine_Transform_o *Component_WebViewObject; // x24
  UnityEngine_GameObject_o *v23; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v25; // x21
  float v26; // s0
  struct System_Collections_Generic_List_int__o *textPositionYList; // x24
  double v28; // d13
  struct System_String_o *mText; // x8
  int v30; // w26
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v31; // x24
  System_String_o *v32; // x0
  int32_t v33; // w8
  float v34; // s14
  struct System_Collections_Generic_List_int__o *v35; // x23
  struct ShiningIconComponent_o *v36; // x8
  float v37; // s10
  float v38; // s11
  float v39; // s0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x0
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_4101910 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Transform___, *(_QWORD *)&idx);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UILabel__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__set_Item__, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_23742, v18);
    sub_B16FFC(&StringLiteral_1, v19);
    byte_4101910 = 1;
  }
  newIcon = (UnityEngine_Component_o *)this->fields.newIcon;
  if ( !newIcon )
    goto LABEL_41;
  mainPrefab = this->fields.mainPrefab;
  Component_WebViewObject = (UnityEngine_Transform_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         newIcon,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                      (UILabel_o *)mainPrefab,
                                      Component_WebViewObject,
                                      (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
  if ( !v23 )
    goto LABEL_41;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v23,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_41;
  v25 = (UILabel_o *)Component_srcLineSprite;
  v26 = UILabel__get_printedSize(mainLabel, 0LL).fields.x;
  textPositionYList = this->fields.textPositionYList;
  v28 = v26 == INFINITY ? -v26 : v26;
  if ( !textPositionYList )
    goto LABEL_41;
  if ( textPositionYList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  if ( System_String__op_Equality(
         *(System_String_o **)&textPositionYList->fields._items->m_Items[2 * idx + 1],
         (System_String_o *)StringLiteral_1,
         0LL) )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v30 = -1;
      while ( ++v30 < mText->fields.m_stringLength )
      {
        v31 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.textPositionYList;
        if ( v31 )
        {
          if ( v31->fields._size <= (unsigned int)idx )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v32 = System_String__Concat_43743732(
                  (System_String_o *)v31->fields._items->m_Items[idx],
                  (System_String_o *)StringLiteral_23742,
                  0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            v31,
            idx,
            (WarBoardManager_TaskList_o *)v32,
            (const MethodInfo_2F25A30 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_41;
      }
      if ( v25 )
      {
        UILabel__set_fontSize(v25, fontSize, 0LL);
        v34 = 16.0;
        goto LABEL_31;
      }
    }
LABEL_41:
    sub_B170D4();
  }
  if ( !v25 )
    goto LABEL_41;
  if ( fontSize >= 0 )
    v33 = fontSize;
  else
    v33 = fontSize + 1;
  UILabel__set_fontSize(v25, v33 >> 1, 0LL);
  v34 = (float)v25->fields.mFontSize + 1.0;
LABEL_31:
  v35 = this->fields.textPositionYList;
  if ( !v35 )
    goto LABEL_41;
  if ( v35->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  UILabel__set_text(v25, *(System_String_o **)&v35->fields._items->m_Items[2 * idx + 1], 0LL);
  v36 = this->fields.newIcon;
  if ( !v36 )
    goto LABEL_41;
  UIWidget__set_depth((UIWidget_o *)v25, (int32_t)v36[5].monitor, 0LL);
  LODWORD(v37) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0LL);
  LODWORD(v38) = *(_QWORD *)&UILabel__get_printedSize(v25, 0LL);
  v39 = UILabel__get_printedSize(v25, 0LL).fields.x;
  if ( v39 <= UILabel__get_printedSize(mainLabel, 0LL).fields.x )
    x = x + (float)((float)(v37 - v38) * 0.5);
  else
    UILabel__SetCondensedScale(v25, (int)v28, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v25, 0LL);
  if ( !transform )
    goto LABEL_41;
  v42.fields.y = y + v34;
  v42.fields.z = 0.0;
  v42.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v42, 0LL);
  v41 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.notRubyFlag;
  if ( !v41 )
    goto LABEL_41;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v41,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UILabel__Add__);
}


System_String_o *__fastcall ServantStatusFlavorTextListViewItemDrawText__SetTextObjectList(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x23
  System_Char_array *v10; // x0
  __int64 v11; // x2
  System_Char_array *v12; // x1
  int max_length; // w8
  char v14; // w21
  int32_t v15; // w22
  System_String_o *v16; // x26
  System_String_o *v17; // x24
  bool v18; // w27
  int32_t v19; // w25
  bool v20; // w19
  uint16_t Chars; // w0
  struct System_Collections_Generic_List_string__o *v22; // x0
  struct System_Collections_Generic_List_int__o *v23; // x0
  System_Collections_Generic_List_bool__o *v24; // x0
  System_Collections_Generic_List_bool__o *v25; // x0
  struct System_Collections_Generic_List_bool__o *v26; // x0
  System_String_o *v27; // x1
  System_String_o *v28; // x0
  struct System_Collections_Generic_List_string__o *v29; // x0
  System_Collections_Generic_List_bool__o *v30; // x0
  System_Collections_Generic_List_bool__o *v31; // x0
  struct System_Collections_Generic_List_bool__o *v32; // x0
  System_String_o *v33; // x0
  struct System_Collections_Generic_List_string__o *rubyTextList; // x0
  System_Collections_Generic_List_bool__o *rubyLineList; // x0
  System_Collections_Generic_List_bool__o *mainList; // x0
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x0
  struct System_Collections_Generic_List_int__o *textPositionYList; // x0
  System_String_o *v41; // [xsp+8h] [xbp-68h]
  System_Char_array *v42; // [xsp+10h] [xbp-60h]
  __int16 v43[2]; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_410190E & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, message);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_410190E = 1;
  }
  v43[0] = 0;
  v9 = (System_String_o *)StringLiteral_1;
  v10 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v10 )
    goto LABEL_56;
  v12 = v10;
  if ( !v10->max_length )
  {
LABEL_57:
    sub_B17100(v10, v12, v11);
    sub_B170A0();
  }
  v10->m_Items[2] = 10;
  if ( !message || (v41 = message, (v10 = (System_Char_array *)System_String__Split(message, v10, 0LL)) == 0LL) )
LABEL_56:
    sub_B170D4();
  max_length = v10->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = 0;
    v16 = v9;
    v42 = v10;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        goto LABEL_57;
      v17 = *(System_String_o **)&v10->m_Items[4 * v15 + 2];
      v18 = BYTE4(this[1].klass) != 0;
      if ( !v17 )
        goto LABEL_56;
      if ( v17->fields.m_stringLength >= 1 )
        break;
      v20 = BYTE4(this[1].klass) != 0;
LABEL_45:
      if ( System_String__op_Inequality(v16, (System_String_o *)StringLiteral_1, 0LL) )
      {
        rubyTextList = this->fields.rubyTextList;
        if ( !rubyTextList )
          goto LABEL_56;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)rubyTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        rubyLineList = this->fields.rubyLineList;
        if ( !rubyLineList )
          goto LABEL_56;
        System_Collections_Generic_List_bool___Add(
          rubyLineList,
          v18,
          (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
        mainList = (System_Collections_Generic_List_bool__o *)this->fields.mainList;
        if ( !mainList )
          goto LABEL_56;
        System_Collections_Generic_List_bool___Add(
          mainList,
          v20,
          (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
        rubyFlagList = this->fields.rubyFlagList;
        if ( !rubyFlagList )
          goto LABEL_56;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)rubyFlagList,
          v15,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v20 )
        {
          textPositionYList = this->fields.textPositionYList;
          if ( !textPositionYList )
            goto LABEL_56;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)textPositionYList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
        }
        v16 = (System_String_o *)StringLiteral_1;
      }
      v10 = v42;
      ++v15;
      max_length = v42->max_length;
      if ( v15 >= max_length )
        return v41;
    }
    v19 = 1;
    v20 = BYTE4(this[1].klass) != 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v17, v19 - 1, 0LL);
      v43[0] = Chars;
      if ( Chars <= 0x5Au )
        break;
      if ( Chars == 91 )
      {
        if ( System_String__get_Chars(v17, v19, 0LL) != 35 )
        {
          v33 = System_Char__ToString((uint16_t)v43, 0LL);
          v16 = System_String__Concat_43743732(v16, v33, 0LL);
          goto LABEL_42;
        }
        BYTE4(this[1].klass) = 1;
        if ( System_String__op_Inequality(v16, (System_String_o *)StringLiteral_1, 0LL) )
        {
          v29 = this->fields.rubyTextList;
          if ( !v29 )
            goto LABEL_56;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          v30 = this->fields.rubyLineList;
          if ( !v30 )
            goto LABEL_56;
          System_Collections_Generic_List_bool___Add(
            v30,
            v18,
            (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
          v31 = (System_Collections_Generic_List_bool__o *)this->fields.mainList;
          if ( !v31 )
            goto LABEL_56;
          System_Collections_Generic_List_bool___Add(
            v31,
            1,
            (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
          v32 = this->fields.rubyFlagList;
          if ( !v32 )
            goto LABEL_56;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)v32,
            v15,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          v16 = (System_String_o *)StringLiteral_1;
        }
        LOBYTE(this->fields.addSize.fields.y) = 0;
        v18 = 1;
        goto LABEL_39;
      }
      if ( Chars != 93 )
      {
LABEL_27:
        v27 = System_Char__ToString((uint16_t)v43, 0LL);
        if ( (v14 & 1) != 0 )
        {
          v9 = System_String__Concat_43743732(v9, v27, 0LL);
          v14 = 1;
        }
        else
        {
          v16 = System_String__Concat_43743732(v16, v27, 0LL);
          v14 = 0;
        }
        goto LABEL_42;
      }
      if ( !v20 )
        goto LABEL_30;
      v22 = this->fields.rubyTextList;
      if ( !v22 )
        goto LABEL_56;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      v23 = this->fields.textPositionYList;
      if ( !v23 )
        goto LABEL_56;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      v24 = this->fields.rubyLineList;
      if ( !v24 )
        goto LABEL_56;
      System_Collections_Generic_List_bool___Add(
        v24,
        v18,
        (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
      v25 = (System_Collections_Generic_List_bool__o *)this->fields.mainList;
      if ( !v25 )
        goto LABEL_56;
      System_Collections_Generic_List_bool___Add(
        v25,
        1,
        (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
      v26 = this->fields.rubyFlagList;
      if ( !v26 )
        goto LABEL_56;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)v26,
        v15,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      v14 = 0;
      v18 = 0;
      v20 = 0;
      v9 = (System_String_o *)StringLiteral_1;
      BYTE4(this[1].klass) = 0;
      v16 = v9;
LABEL_42:
      if ( v19++ >= v17->fields.m_stringLength )
        goto LABEL_45;
    }
    if ( Chars == 35 )
    {
      if ( v20 )
        goto LABEL_39;
    }
    else
    {
      if ( Chars != 58 )
        goto LABEL_27;
      if ( v20 )
      {
        v14 = 1;
LABEL_39:
        v20 = 1;
        goto LABEL_42;
      }
    }
LABEL_30:
    v28 = System_Char__ToString((uint16_t)v43, 0LL);
    v16 = System_String__Concat_43743732(v16, v28, 0LL);
    v20 = 0;
    goto LABEL_42;
  }
  return v41;
}


System_String_o *__fastcall ServantStatusFlavorTextListViewItemDrawText__TextFormalAdjust(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_char__o *localMainTextList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t size; // w8
  System_String_o *v8; // x22
  unsigned int v9; // w24
  int32_t v10; // w21
  struct ShiningIconComponent_o *v11; // x8
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  struct ShiningIconComponent_o *v15; // x8
  struct UIWidget_o *v16; // x8
  System_String_o *v17; // x0
  struct ShiningIconComponent_o *newIcon; // x8
  System_String_o *widget; // x0
  int v20; // w26
  uint16_t Chars; // w23
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  struct ShiningIconComponent_o *v24; // x8
  struct UIWidget_o *v25; // x9
  System_String_o *v26; // x0
  int32_t v27; // w8
  unsigned int v28; // w25
  struct ShiningIconComponent_o *v29; // x8
  System_String_o *v30; // x0
  int v31; // w26
  struct ShiningIconComponent_o *v32; // x8
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  struct ShiningIconComponent_o *v36; // x8
  struct UIWidget_o *v37; // x8
  System_String_o *v38; // x0
  __int16 v40[2]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4101912 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_char__get_Count__, localMainTextList);
    sub_B16FFC(&Method_System_Collections_Generic_List_char__get_Item__, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_4101912 = 1;
  }
  v40[0] = 0;
  if ( !localMainTextList )
LABEL_53:
    sub_B170D4();
  size = localMainTextList->fields._size;
  v8 = (System_String_o *)StringLiteral_1;
  if ( size >= 1 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      if ( size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      newIcon = this->fields.newIcon;
      if ( !newIcon )
        goto LABEL_53;
      widget = (System_String_o *)newIcon[12].fields.widget;
      if ( !widget )
        goto LABEL_53;
      v20 = localMainTextList->fields._items->m_Items[v9 + 2];
      Chars = System_String__get_Chars(widget, v10, 0LL);
      if ( localMainTextList->fields._size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v20 == Chars )
      {
        v40[0] = localMainTextList->fields._items->m_Items[v9 + 2];
        v22 = System_Char__ToString((uint16_t)v40, 0LL);
        v23 = System_String__Concat_43743732(v8, v22, 0LL);
        v24 = this->fields.newIcon;
        if ( !v24 )
          goto LABEL_53;
        v25 = v24[12].fields.widget;
        if ( !v25 )
          goto LABEL_53;
        v8 = v23;
        if ( v10 < v25->fields.m_CachedPtr - 1 )
          ++v10;
      }
      else
      {
        if ( localMainTextList->fields._items->m_Items[v9 + 2] != 10 )
        {
          if ( localMainTextList->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v40[0] = localMainTextList->fields._items->m_Items[v9 + 2];
          v38 = System_Char__ToString((uint16_t)v40, 0LL);
          v8 = System_String__Concat_43743732(v8, v38, 0LL);
          goto LABEL_51;
        }
        v24 = this->fields.newIcon;
        if ( !v24 )
          goto LABEL_53;
      }
      v26 = (System_String_o *)v24[12].fields.widget;
      if ( !v26 )
        goto LABEL_53;
      if ( System_String__get_Chars(v26, v10, 0LL) == 10 )
      {
        v27 = localMainTextList->fields._size;
        v28 = v9 + 1;
        if ( (int)(v9 + 1) >= v27 )
          goto LABEL_41;
        if ( v27 <= v28 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v29 = this->fields.newIcon;
        if ( !v29 )
          goto LABEL_53;
        v30 = (System_String_o *)v29[12].fields.widget;
        if ( !v30 )
          goto LABEL_53;
        v31 = localMainTextList->fields._items->m_Items[v28 + 2];
        if ( v31 == System_String__get_Chars(v30, v10 + 1, 0LL) )
        {
LABEL_41:
          v32 = this->fields.newIcon;
          if ( !v32 )
            goto LABEL_53;
          v33 = (System_String_o *)v32[12].fields.widget;
          if ( !v33 )
            goto LABEL_53;
          v40[0] = System_String__get_Chars(v33, v10, 0LL);
          v34 = System_Char__ToString((uint16_t)v40, 0LL);
          v35 = System_String__Concat_43743732(v8, v34, 0LL);
          v36 = this->fields.newIcon;
          if ( !v36 )
            goto LABEL_53;
          v37 = v36[12].fields.widget;
          if ( !v37 )
            goto LABEL_53;
          v8 = v35;
          if ( v10 < v37->fields.m_CachedPtr - 1 )
            ++v10;
        }
        else
        {
          if ( localMainTextList->fields._size <= v28 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( localMainTextList->fields._items->m_Items[v28 + 2] == 10 )
          {
            v11 = this->fields.newIcon;
            if ( !v11 )
              goto LABEL_53;
            v12 = (System_String_o *)v11[12].fields.widget;
            if ( !v12 )
              goto LABEL_53;
            v40[0] = System_String__get_Chars(v12, v10, 0LL);
            v13 = System_Char__ToString((uint16_t)v40, 0LL);
            v14 = System_String__Concat_43743732(v8, v13, 0LL);
            v15 = this->fields.newIcon;
            if ( !v15 )
              goto LABEL_53;
            v16 = v15[12].fields.widget;
            if ( !v16 )
              goto LABEL_53;
            v8 = v14;
            if ( v10 < v16->fields.m_CachedPtr - 1 )
              ++v10;
          }
          else
          {
            if ( localMainTextList->fields._size <= v28 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v40[0] = localMainTextList->fields._items->m_Items[v28 + 2];
            v17 = System_Char__ToString((uint16_t)v40, 0LL);
            v8 = System_String__Concat_43743732(v8, v17, 0LL);
            ++v9;
          }
        }
      }
LABEL_51:
      size = localMainTextList->fields._size;
      ++v9;
    }
    while ( (int)v9 < size );
  }
  return v8;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F766A & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1);
    byte_40F766A = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___PlayScript_b__51_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___RefreshUI_b__52_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0___OnClickPlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass50_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x21
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v16; // x8
  UnityEngine_GameObject_o *summonBgRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v19; // x8
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_GameObject_o *COMMON_UI; // x0
  UnityEngine_Transform_o *v22; // x0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v23; // x8
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Transform_o *v25; // x20
  int v26; // s0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Transform_o *v31; // x20
  int v32; // s0
  ServantStatusFlavorTextListViewItemDrawText_o *v35; // x0

  if ( (byte_40F766B & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F766B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_21;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)_4__this->fields.INACTIVE_PREFABS,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBgRoot = (struct UnityEngine_GameObject_o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.summonBgRoot, v9, v10, v11, v12, v13, v14, v15);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_21;
  summonBgRoot = v16->fields.summonBgRoot;
  if ( !summonBgRoot )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform(summonBgRoot, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_21;
  v20 = transform;
  COMMON_UI = (UnityEngine_GameObject_o *)v19->fields.COMMON_UI;
  if ( !COMMON_UI )
    goto LABEL_21;
  v22 = UnityEngine_GameObject__get_transform(COMMON_UI, 0LL);
  if ( !v20 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v20, v22, 0LL);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_21;
  v24 = v23->fields.summonBgRoot;
  if ( !v24 )
    goto LABEL_21;
  v25 = UnityEngine_GameObject__get_transform(v24, 0LL);
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v25
    || (UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v26, 0LL),
        (v29 = this->fields.__4__this) == 0LL)
    || (v30 = v29->fields.summonBgRoot) == 0LL
    || (v31 = UnityEngine_GameObject__get_transform(v30, 0LL),
        *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL),
        !v31)
    || (UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v32, 0LL),
        (v35 = this->fields.__4__this) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    v35,
    this->fields.inactiveCameras,
    this->fields.inactivePrefabs,
    0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0___PlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0_o *this,
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
  float v15; // s0
  float v16; // s1
  int v17; // s2
  int v18; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v19; // x8
  UnityEngine_Object_o *summonBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v21; // x8
  UnityEngine_GameObject_o *v22; // x0
  struct System_Collections_Generic_List_GameObject__o *inactivePrefabs; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  ServantStatusFlavorTextListViewItemDrawText___c_c *v31; // x0
  float DEFAULT_FADE_TIME; // s8
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x8
  System_Action_o *_9__51_1; // x21
  Il2CppObject *v35; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  struct ServantStatusFlavorTextListViewItemDrawText_o *v47; // x8
  int32_t mainTextList_high; // w20
  System_Action_o *_9__2; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F766C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&ScriptManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__51_1__, v11);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0__PlayScript_b__2__, v12);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v13);
    byte_40F766C = 1;
  }
  memset(&v57, 0, sizeof(v57));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v15 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_39;
  _4__this->fields.ambientLight.fields.b = v15;
  _4__this->fields.ambientLight.fields.a = v16;
  LODWORD(_4__this->fields.battleBg) = v17;
  HIDWORD(_4__this->fields.battleBg) = v18;
  white = UnityEngine_Color__get_white(0LL);
  UnityEngine_RenderSettings__set_ambientLight(white, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_39;
  summonBg = (UnityEngine_Object_o *)v19->fields.summonBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL) )
  {
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_39;
    v22 = v21->fields.summonBg;
    if ( !v22 )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(v22, 0, 0LL);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_39;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)inactivePrefabs,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v57 = v56;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v57.fields.current )
      sub_B170D4();
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v57.fields.current, 0LL);
    if ( !gameObject )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  v31 = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    v31 = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__51_1 = static_fields->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__51_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
    System_Action___ctor(
      _9__51_1,
      v35,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__51_1__,
      0LL);
    v36 = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    v36->__9__51_1 = _9__51_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__51_1,
      (System_Int32_array **)_9__51_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !Instance
    || (CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__51_1, 0LL), (v47 = this->fields.__4__this) == 0LL) )
  {
LABEL_39:
    sub_B170D4();
  }
  mainTextList_high = HIDWORD(v47->fields.mainTextList);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayGacha(mainTextList_high, 0, 0, _9__2, 0, -1, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0___PlayScript_b__2(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
    _4__this,
    this->fields.inactiveCameras,
    this->fields.inactivePrefabs,
    0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0___RefreshUI_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass52_0_o *this,
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
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x8
  UnityEngine_Object_o *summonBgRoot; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v19; // x8
  UnityEngine_Object_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v27; // x0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v28; // x8
  System_String_o *SUMMON_BG_OBJECT_NAME; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v30; // x8
  UnityEngine_Object_o *COMMON_UI; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v40; // x0
  struct ServantStatusFlavorTextListViewItemDrawText_o *v41; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v42; // x8
  UnityEngine_Object_o *summonBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v44; // x8
  UnityEngine_GameObject_o *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v52; // x0
  struct System_Collections_Generic_List_Camera__o *inactiveCameras; // x0
  struct System_Collections_Generic_List_GameObject__o *inactivePrefabs; // x0
  ServantStatusFlavorTextListViewItemDrawText_o *v55; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int v58; // w20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v59; // x8
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v65; // x8
  ServantStatusFlavorTextListViewItemDrawText___c_c *v66; // x0
  float DEFAULT_FADE_TIME; // s8
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x8
  System_Action_o *_9__52_1; // x20
  Il2CppObject *v70; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+8h] [xbp-98h] BYREF
  int v79[2]; // [xsp+20h] [xbp-80h]
  int v80; // [xsp+28h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+50h] [xbp-50h] BYREF

  if ( (byte_40F766D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Camera__GetEnumerator__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__52_1__, v15);
    sub_B16FFC(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v16);
    byte_40F766D = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v81, 0, sizeof(v81));
  v80 = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_70;
  summonBgRoot = (UnityEngine_Object_o *)_4__this->fields.summonBgRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(summonBgRoot, 0LL, 0LL) )
  {
    v19 = this->fields.__4__this;
    if ( !v19 )
      goto LABEL_70;
    v20 = (UnityEngine_Object_o *)v19->fields.summonBgRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v20, 0LL);
    v27 = this->fields.__4__this;
    if ( !v27 )
      goto LABEL_70;
    v27->fields.summonBgRoot = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v27->fields.summonBgRoot, 0LL, v21, v22, v23, v24, v25, v26);
  }
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_70;
  SUMMON_BG_OBJECT_NAME = v28->fields.SUMMON_BG_OBJECT_NAME;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(SUMMON_BG_OBJECT_NAME, 0LL);
  v30 = this->fields.__4__this;
  if ( !v30 )
    goto LABEL_70;
  COMMON_UI = (UnityEngine_Object_o *)v30->fields.COMMON_UI;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(COMMON_UI, 0LL, 0LL) )
  {
    v32 = this->fields.__4__this;
    if ( !v32 )
      goto LABEL_70;
    v33 = (UnityEngine_GameObject_o *)v32->fields.COMMON_UI;
    if ( !v33 )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive(v33, 0, 0LL);
    v40 = this->fields.__4__this;
    if ( !v40 )
      goto LABEL_70;
    v40->fields.COMMON_UI = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v40->fields.COMMON_UI, 0LL, v34, v35, v36, v37, v38, v39);
  }
  v41 = this->fields.__4__this;
  if ( !v41 )
    goto LABEL_70;
  UnityEngine_RenderSettings__set_ambientLight(*(UnityEngine_Color_o *)&v41->fields.ambientLight.fields.b, 0LL);
  v42 = this->fields.__4__this;
  if ( !v42 )
    goto LABEL_70;
  summonBg = (UnityEngine_Object_o *)v42->fields.summonBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL) )
  {
    v44 = this->fields.__4__this;
    if ( !v44 )
      goto LABEL_70;
    v45 = v44->fields.summonBg;
    if ( !v45 )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive(v45, 1, 0LL);
    v52 = this->fields.__4__this;
    if ( !v52 )
      goto LABEL_70;
    v52->fields.summonBg = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&v52->fields.summonBg, 0LL, v46, v47, v48, v49, v50, v51);
  }
  inactiveCameras = this->fields.inactiveCameras;
  if ( !inactiveCameras )
    goto LABEL_70;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v78,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)inactiveCameras,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v78;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields.current, 1, 0LL) )
  {
    if ( !i.fields.current )
      sub_B170D4();
  }
  v79[0] = 227;
  v80 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  v80 = 0;
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_70;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v78,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)inactivePrefabs,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v81 = v78;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v81,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v55 = this->fields.__4__this;
    if ( !v55 )
      sub_B170D4();
    current = v81.fields.current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v55,
      (UnityEngine_GameObject_o *)v81.fields.current,
      1,
      0LL);
    if ( !current )
      sub_B170D4();
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  v79[0] = 299;
  v58 = ++v80;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v81,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v58 && v79[v58 - 1] == 299 )
    v80 = v58 - 1;
  v59 = this->fields.__4__this;
  if ( !v59 )
    goto LABEL_70;
  LOBYTE(v59->fields.ambientLight.fields.g) = 0;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v65 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v65 = AvalonSceneManager_TypeInfo;
  }
  v66 = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v65->static_fields->DEFAULT_FADE_TIME;
  if ( (BYTE3(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    v66 = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  static_fields = v66->static_fields;
  _9__52_1 = static_fields->__9__52_1;
  if ( !_9__52_1 )
  {
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)static_fields->__9;
    _9__52_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
    System_Action___ctor(
      _9__52_1,
      v70,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__52_1__,
      0LL);
    v71 = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    v71->__9__52_1 = _9__52_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v71->__9__52_1,
      (System_Int32_array **)_9__52_1,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  if ( !Instance )
LABEL_70:
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, _9__52_1, 0LL);
}