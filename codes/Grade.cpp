void __fastcall Grade___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **v9; // x19
  __int64 v10; // x0
  System_Int32_array **v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
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
  System_Int32_array **v25; // x19
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  struct Grade_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x19
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  struct Grade_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x19
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  struct Grade_StaticFields *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x19
  System_Int32_array **v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  struct Grade_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x19
  System_Int32_array **v114; // x1
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x1
  struct Grade_StaticFields *v122; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x19
  System_Int32_array **v136; // x1
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x1
  struct Grade_StaticFields *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Int32_array **v157; // x19
  System_Int32_array **v158; // x1
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Int32_array **v165; // x1
  struct Grade_StaticFields *v166; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  __int64 v173; // x0
  __int64 v174; // x0

  if ( (byte_42B1B5A & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_19668/*"img_listbg_04"*/);
    sub_B52984(&StringLiteral_19665/*"img_listbg_01"*/);
    sub_B52984(&StringLiteral_19673/*"img_mastername_line1"*/);
    sub_B52984(&StringLiteral_19619/*"img_commonbg_04"*/);
    sub_B52984(&StringLiteral_19490/*"icon_grade_1"*/);
    sub_B52984(&StringLiteral_19676/*"img_masterprofile_bg2"*/);
    sub_B52984(&StringLiteral_19025/*"frame_master_bg1"*/);
    sub_B52984(&StringLiteral_19675/*"img_masterprofile_bg1"*/);
    sub_B52984(&StringLiteral_22496/*"status_master_frame"*/);
    sub_B52984(&StringLiteral_19667/*"img_listbg_03"*/);
    sub_B52984(&StringLiteral_19672/*"img_masterform_bg"*/);
    sub_B52984(&StringLiteral_19674/*"img_mastername_line2"*/);
    sub_B52984(&StringLiteral_19024/*"frame_master_bg"*/);
    sub_B52984(&StringLiteral_22497/*"status_master_frame1"*/);
    byte_42B1B5A = 1;
  }
  v1 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_89;
  v9 = (System_Int32_array **)v1;
  v10 = StringLiteral_19490/*"icon_grade_1"*/;
  if ( StringLiteral_19490/*"icon_grade_1"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19490/*"icon_grade_1"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v11 = (System_Int32_array **)StringLiteral_19490/*"icon_grade_1"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 1u )
    goto LABEL_87;
  v9[5] = (System_Int32_array *)v11;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 5), v11, v3, v4, v5, v6, v7, v8);
  static_fields = (BattleServantConfConponent_o *)Grade_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B52920(static_fields, v9, v13, v14, v15, v16, v17, v18);
  v1 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_89;
  v25 = (System_Int32_array **)v1;
  v10 = StringLiteral_19675/*"img_masterprofile_bg1"*/;
  if ( StringLiteral_19675/*"img_masterprofile_bg1"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19675/*"img_masterprofile_bg1"*/, *(_QWORD *)&(*v25)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v26 = (System_Int32_array **)StringLiteral_19675/*"img_masterprofile_bg1"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !*((_DWORD *)v25 + 6) )
    goto LABEL_87;
  v25[4] = (System_Int32_array *)v26;
  sub_B52920((BattleServantConfConponent_o *)(v25 + 4), v26, v19, v20, v21, v22, v23, v24);
  v10 = StringLiteral_19676/*"img_masterprofile_bg2"*/;
  if ( StringLiteral_19676/*"img_masterprofile_bg2"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19676/*"img_masterprofile_bg2"*/, *(_QWORD *)&(*v25)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v33 = (System_Int32_array **)StringLiteral_19676/*"img_masterprofile_bg2"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( *((_DWORD *)v25 + 6) <= 1u )
    goto LABEL_87;
  v25[5] = (System_Int32_array *)v33;
  sub_B52920((BattleServantConfConponent_o *)(v25 + 5), v33, v27, v28, v29, v30, v31, v32);
  v34 = Grade_TypeInfo->static_fields;
  v34->masterProfileBgFileList = (struct System_String_array *)v25;
  sub_B52920((BattleServantConfConponent_o *)&v34->masterProfileBgFileList, v25, v35, v36, v37, v38, v39, v40);
  v1 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_89;
  v47 = (System_Int32_array **)v1;
  v10 = StringLiteral_19673/*"img_mastername_line1"*/;
  if ( StringLiteral_19673/*"img_mastername_line1"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19673/*"img_mastername_line1"*/, *(_QWORD *)&(*v47)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v48 = (System_Int32_array **)StringLiteral_19673/*"img_mastername_line1"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( !*((_DWORD *)v47 + 6) )
    goto LABEL_87;
  v47[4] = (System_Int32_array *)v48;
  sub_B52920((BattleServantConfConponent_o *)(v47 + 4), v48, v41, v42, v43, v44, v45, v46);
  v10 = StringLiteral_19674/*"img_mastername_line2"*/;
  if ( StringLiteral_19674/*"img_mastername_line2"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19674/*"img_mastername_line2"*/, *(_QWORD *)&(*v47)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v55 = (System_Int32_array **)StringLiteral_19674/*"img_mastername_line2"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( *((_DWORD *)v47 + 6) <= 1u )
    goto LABEL_87;
  v47[5] = (System_Int32_array *)v55;
  sub_B52920((BattleServantConfConponent_o *)(v47 + 5), v55, v49, v50, v51, v52, v53, v54);
  v56 = Grade_TypeInfo->static_fields;
  v56->masterProfileBgLineFileList = (struct System_String_array *)v47;
  sub_B52920((BattleServantConfConponent_o *)&v56->masterProfileBgLineFileList, v47, v57, v58, v59, v60, v61, v62);
  v1 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_89;
  v69 = (System_Int32_array **)v1;
  v10 = StringLiteral_19619/*"img_commonbg_04"*/;
  if ( StringLiteral_19619/*"img_commonbg_04"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19619/*"img_commonbg_04"*/, *(_QWORD *)&(*v69)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v70 = (System_Int32_array **)StringLiteral_19619/*"img_commonbg_04"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( !*((_DWORD *)v69 + 6) )
    goto LABEL_87;
  v69[4] = (System_Int32_array *)v70;
  sub_B52920((BattleServantConfConponent_o *)(v69 + 4), v70, v63, v64, v65, v66, v67, v68);
  v10 = StringLiteral_19672/*"img_masterform_bg"*/;
  if ( StringLiteral_19672/*"img_masterform_bg"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19672/*"img_masterform_bg"*/, *(_QWORD *)&(*v69)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v77 = (System_Int32_array **)StringLiteral_19672/*"img_masterform_bg"*/;
  }
  else
  {
    v77 = 0LL;
  }
  if ( *((_DWORD *)v69 + 6) <= 1u )
    goto LABEL_87;
  v69[5] = (System_Int32_array *)v77;
  sub_B52920((BattleServantConfConponent_o *)(v69 + 5), v77, v71, v72, v73, v74, v75, v76);
  v78 = Grade_TypeInfo->static_fields;
  v78->masterEquipBgFileList = (struct System_String_array *)v69;
  sub_B52920((BattleServantConfConponent_o *)&v78->masterEquipBgFileList, v69, v79, v80, v81, v82, v83, v84);
  v1 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_89;
  v91 = (System_Int32_array **)v1;
  v10 = StringLiteral_19024/*"frame_master_bg"*/;
  if ( StringLiteral_19024/*"frame_master_bg"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19024/*"frame_master_bg"*/, *(_QWORD *)&(*v91)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v92 = (System_Int32_array **)StringLiteral_19024/*"frame_master_bg"*/;
  }
  else
  {
    v92 = 0LL;
  }
  if ( !*((_DWORD *)v91 + 6) )
    goto LABEL_87;
  v91[4] = (System_Int32_array *)v92;
  sub_B52920((BattleServantConfConponent_o *)(v91 + 4), v92, v85, v86, v87, v88, v89, v90);
  v10 = StringLiteral_19025/*"frame_master_bg1"*/;
  if ( StringLiteral_19025/*"frame_master_bg1"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19025/*"frame_master_bg1"*/, *(_QWORD *)&(*v91)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v99 = (System_Int32_array **)StringLiteral_19025/*"frame_master_bg1"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( *((_DWORD *)v91 + 6) <= 1u )
    goto LABEL_87;
  v91[5] = (System_Int32_array *)v99;
  sub_B52920((BattleServantConfConponent_o *)(v91 + 5), v99, v93, v94, v95, v96, v97, v98);
  v100 = Grade_TypeInfo->static_fields;
  v100->battleIconBgFileList = (struct System_String_array *)v91;
  sub_B52920((BattleServantConfConponent_o *)&v100->battleIconBgFileList, v91, v101, v102, v103, v104, v105, v106);
  v1 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_89;
  v113 = (System_Int32_array **)v1;
  v10 = StringLiteral_22496/*"status_master_frame"*/;
  if ( StringLiteral_22496/*"status_master_frame"*/ )
  {
    v10 = sub_B52A44(StringLiteral_22496/*"status_master_frame"*/, *(_QWORD *)&(*v113)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v114 = (System_Int32_array **)StringLiteral_22496/*"status_master_frame"*/;
  }
  else
  {
    v114 = 0LL;
  }
  if ( !*((_DWORD *)v113 + 6) )
    goto LABEL_87;
  v113[4] = (System_Int32_array *)v114;
  sub_B52920((BattleServantConfConponent_o *)(v113 + 4), v114, v107, v108, v109, v110, v111, v112);
  v10 = StringLiteral_22497/*"status_master_frame1"*/;
  if ( StringLiteral_22497/*"status_master_frame1"*/ )
  {
    v10 = sub_B52A44(StringLiteral_22497/*"status_master_frame1"*/, *(_QWORD *)&(*v113)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v121 = (System_Int32_array **)StringLiteral_22497/*"status_master_frame1"*/;
  }
  else
  {
    v121 = 0LL;
  }
  if ( *((_DWORD *)v113 + 6) <= 1u )
    goto LABEL_87;
  v113[5] = (System_Int32_array *)v121;
  sub_B52920((BattleServantConfConponent_o *)(v113 + 5), v121, v115, v116, v117, v118, v119, v120);
  v122 = Grade_TypeInfo->static_fields;
  v122->mainMstIconBgFileList = (struct System_String_array *)v113;
  sub_B52920((BattleServantConfConponent_o *)&v122->mainMstIconBgFileList, v113, v123, v124, v125, v126, v127, v128);
  v1 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v1 )
    goto LABEL_89;
  v135 = (System_Int32_array **)v1;
  v10 = StringLiteral_19665/*"img_listbg_01"*/;
  if ( StringLiteral_19665/*"img_listbg_01"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19665/*"img_listbg_01"*/, *(_QWORD *)&(*v135)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v136 = (System_Int32_array **)StringLiteral_19665/*"img_listbg_01"*/;
  }
  else
  {
    v136 = 0LL;
  }
  if ( !*((_DWORD *)v135 + 6) )
    goto LABEL_87;
  v135[4] = (System_Int32_array *)v136;
  sub_B52920((BattleServantConfConponent_o *)(v135 + 4), v136, v129, v130, v131, v132, v133, v134);
  v10 = StringLiteral_19667/*"img_listbg_03"*/;
  if ( StringLiteral_19667/*"img_listbg_03"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19667/*"img_listbg_03"*/, *(_QWORD *)&(*v135)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v143 = (System_Int32_array **)StringLiteral_19667/*"img_listbg_03"*/;
  }
  else
  {
    v143 = 0LL;
  }
  if ( *((_DWORD *)v135 + 6) <= 1u )
    goto LABEL_87;
  v135[5] = (System_Int32_array *)v143;
  sub_B52920((BattleServantConfConponent_o *)(v135 + 5), v143, v137, v138, v139, v140, v141, v142);
  v144 = Grade_TypeInfo->static_fields;
  v144->supportBgFileList = (struct System_String_array *)v135;
  sub_B52920((BattleServantConfConponent_o *)&v144->supportBgFileList, v135, v145, v146, v147, v148, v149, v150);
  v1 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v1 )
LABEL_89:
    sub_B52A5C(v1, v2);
  v157 = (System_Int32_array **)v1;
  v10 = StringLiteral_19665/*"img_listbg_01"*/;
  if ( StringLiteral_19665/*"img_listbg_01"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19665/*"img_listbg_01"*/, *(_QWORD *)&(*v157)->m_Items[9]);
    if ( !v10 )
      goto LABEL_88;
    v158 = (System_Int32_array **)StringLiteral_19665/*"img_listbg_01"*/;
  }
  else
  {
    v158 = 0LL;
  }
  if ( !*((_DWORD *)v157 + 6) )
    goto LABEL_87;
  v157[4] = (System_Int32_array *)v158;
  sub_B52920((BattleServantConfConponent_o *)(v157 + 4), v158, v151, v152, v153, v154, v155, v156);
  v10 = StringLiteral_19668/*"img_listbg_04"*/;
  if ( StringLiteral_19668/*"img_listbg_04"*/ )
  {
    v10 = sub_B52A44(StringLiteral_19668/*"img_listbg_04"*/, *(_QWORD *)&(*v157)->m_Items[9]);
    if ( v10 )
    {
      v165 = (System_Int32_array **)StringLiteral_19668/*"img_listbg_04"*/;
      goto LABEL_85;
    }
LABEL_88:
    v174 = sub_B52A7C(v10);
    sub_B52A28(v174, 0LL);
  }
  v165 = 0LL;
LABEL_85:
  if ( *((_DWORD *)v157 + 6) <= 1u )
  {
LABEL_87:
    v173 = sub_B52A88(v10);
    sub_B52A28(v173, 0LL);
  }
  v157[5] = (System_Int32_array *)v165;
  sub_B52920((BattleServantConfConponent_o *)(v157 + 5), v165, v159, v160, v161, v162, v163, v164);
  v166 = Grade_TypeInfo->static_fields;
  v166->followerBgFileList = (struct System_String_array *)v157;
  sub_B52920((BattleServantConfConponent_o *)&v166->followerBgFileList, v157, v167, v168, v169, v170, v171, v172);
}


void __fastcall Grade___ctor(Grade_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Grade__GetBattleIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *battleIconBgFileList; // x8
  __int64 v6; // x0

  if ( (byte_42B1B56 & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    byte_42B1B56 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  battleIconBgFileList = v3->static_fields->battleIconBgFileList;
  if ( !battleIconBgFileList )
    sub_B52A5C(v3, method);
  if ( battleIconBgFileList->max_length <= gradeKind )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  return battleIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetFollowerBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *followerBgFileList; // x8
  __int64 v6; // x0

  if ( (byte_42B1B59 & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    byte_42B1B59 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  followerBgFileList = v3->static_fields->followerBgFileList;
  if ( !followerBgFileList )
    sub_B52A5C(v3, method);
  if ( followerBgFileList->max_length <= gradeKind )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  return followerBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetIconImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *gradeIconFileList; // x8
  __int64 v6; // x0

  if ( (byte_42B1B52 & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    byte_42B1B52 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  gradeIconFileList = v3->static_fields->gradeIconFileList;
  if ( !gradeIconFileList )
    sub_B52A5C(v3, method);
  if ( gradeIconFileList->max_length <= gradeKind )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  return gradeIconFileList->m_Items[gradeKind];
}


int32_t __fastcall Grade__GetKind(const MethodInfo *method)
{
  if ( (byte_42B1B4E & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B1B4E = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29217932(127, 0LL);
}


int32_t __fastcall Grade__GetKind_28256600(UserGameEntity_o *userGameEntity, const MethodInfo *method)
{
  if ( (byte_42B1B4F & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B1B4F = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29218144(userGameEntity, 127, 0LL);
}


int32_t __fastcall Grade__GetKind_28256712(OtherUserGameEntity_o *otherUserGameEntity, const MethodInfo *method)
{
  if ( (byte_42B1B50 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B1B50 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29218368(otherUserGameEntity, 127, 0LL);
}


int32_t __fastcall Grade__GetKind_28256824(FollowerInfo_o *followerInfo, const MethodInfo *method)
{
  if ( (byte_42B1B51 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B1B51 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29218272(followerInfo, 127, 0LL);
}


System_String_o *__fastcall Grade__GetMainMstIconBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *mainMstIconBgFileList; // x8
  __int64 v6; // x0

  if ( (byte_42B1B57 & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    byte_42B1B57 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  mainMstIconBgFileList = v3->static_fields->mainMstIconBgFileList;
  if ( !mainMstIconBgFileList )
    sub_B52A5C(v3, method);
  if ( mainMstIconBgFileList->max_length <= gradeKind )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  return mainMstIconBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterEquipBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterEquipBgFileList; // x8
  __int64 v6; // x0

  if ( (byte_42B1B55 & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    byte_42B1B55 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterEquipBgFileList = v3->static_fields->masterEquipBgFileList;
  if ( !masterEquipBgFileList )
    sub_B52A5C(v3, method);
  if ( masterEquipBgFileList->max_length <= gradeKind )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  return masterEquipBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgFileList; // x8
  __int64 v6; // x0

  if ( (byte_42B1B53 & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    byte_42B1B53 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgFileList = v3->static_fields->masterProfileBgFileList;
  if ( !masterProfileBgFileList )
    sub_B52A5C(v3, method);
  if ( masterProfileBgFileList->max_length <= gradeKind )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  return masterProfileBgFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetMasterProfileBgLineImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *masterProfileBgLineFileList; // x8
  __int64 v6; // x0

  if ( (byte_42B1B54 & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    byte_42B1B54 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  masterProfileBgLineFileList = v3->static_fields->masterProfileBgLineFileList;
  if ( !masterProfileBgLineFileList )
    sub_B52A5C(v3, method);
  if ( masterProfileBgLineFileList->max_length <= gradeKind )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  return masterProfileBgLineFileList->m_Items[gradeKind];
}


System_String_o *__fastcall Grade__GetSupportBgImage(int32_t gradeKind, const MethodInfo *method)
{
  Grade_c *v3; // x0
  struct System_String_array *supportBgFileList; // x8
  __int64 v6; // x0

  if ( (byte_42B1B58 & 1) == 0 )
  {
    sub_B52984(&Grade_TypeInfo);
    byte_42B1B58 = 1;
  }
  v3 = Grade_TypeInfo;
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    v3 = Grade_TypeInfo;
  }
  supportBgFileList = v3->static_fields->supportBgFileList;
  if ( !supportBgFileList )
    sub_B52A5C(v3, method);
  if ( supportBgFileList->max_length <= gradeKind )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  return supportBgFileList->m_Items[gradeKind];
}