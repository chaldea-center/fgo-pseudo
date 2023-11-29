void __fastcall CombineEffectComponent___ctor(CombineEffectComponent_o *this, const MethodInfo *method)
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
  struct System_Int32_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  il2cpp_array_size_t max_length; // w8
  System_Int32_array **v42; // x1
  __int64 v43; // x2
  __int64 v44; // x0
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct System_String_array *v50; // x20
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  __int64 v152; // x2
  __int64 v153; // x0
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  struct System_String_array *v159; // x20
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x3
  __int64 v189; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v190; // x20
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  __int64 v197; // x1
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  System_Collections_Generic_List_int__o *v201; // x20
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7

  if ( (byte_40F98D7 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v7);
    sub_B16FFC(&string___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_17505, v9);
    sub_B16FFC(&StringLiteral_17506, v10);
    sub_B16FFC(&StringLiteral_17513, v11);
    sub_B16FFC(&StringLiteral_17516, v12);
    sub_B16FFC(&StringLiteral_17517, v13);
    sub_B16FFC(&StringLiteral_17504, v14);
    sub_B16FFC(&StringLiteral_17498, v15);
    sub_B16FFC(&StringLiteral_17499, v16);
    sub_B16FFC(&StringLiteral_17511, v17);
    sub_B16FFC(&StringLiteral_17507, v18);
    sub_B16FFC(&StringLiteral_17519, v19);
    sub_B16FFC(&StringLiteral_17518, v20);
    sub_B16FFC(&StringLiteral_17508, v21);
    sub_B16FFC(&StringLiteral_17509, v22);
    sub_B16FFC(&StringLiteral_17521, v23);
    sub_B16FFC(&StringLiteral_17520, v24);
    sub_B16FFC(&StringLiteral_17502, v25);
    sub_B16FFC(&StringLiteral_17514, v26);
    sub_B16FFC(&StringLiteral_17522, v27);
    sub_B16FFC(&StringLiteral_17512, v28);
    sub_B16FFC(&StringLiteral_17501, v29);
    sub_B16FFC(&StringLiteral_17500, v30);
    sub_B16FFC(&StringLiteral_17503, v31);
    sub_B16FFC(&StringLiteral_17510, v32);
    sub_B16FFC(&StringLiteral_17515, v33);
    byte_40F98D7 = 1;
  }
  v34 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v2);
  if ( !v34 )
    goto LABEL_136;
  max_length = v34->max_length;
  v42 = (System_Int32_array **)v34;
  if ( !max_length || (v34->m_Items[1] = 512, max_length == 1) )
  {
LABEL_134:
    sub_B17100(v34, v42, v35);
    sub_B170A0();
  }
  v34->m_Items[2] = 875;
  this->fields.cardTextureSize = v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v44 = sub_B17014(string___TypeInfo, 20LL, v43);
  if ( !v44 )
    goto LABEL_136;
  v50 = (struct System_String_array *)v44;
  v34 = (struct System_Int32_array *)StringLiteral_17498;
  if ( StringLiteral_17498 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17498, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17498;
  }
  else
  {
    v42 = 0LL;
  }
  if ( !v50->max_length )
    goto LABEL_134;
  v50->m_Items[0] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)v50->m_Items, v42, v35, v45, v46, v47, v48, v49);
  v34 = (struct System_Int32_array *)StringLiteral_17499;
  if ( StringLiteral_17499 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17499, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17499;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 1 )
    goto LABEL_134;
  v50->m_Items[1] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[1], v42, v35, v51, v52, v53, v54, v55);
  v34 = (struct System_Int32_array *)StringLiteral_17500;
  if ( StringLiteral_17500 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17500, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17500;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 2 )
    goto LABEL_134;
  v50->m_Items[2] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[2], v42, v35, v56, v57, v58, v59, v60);
  v34 = (struct System_Int32_array *)StringLiteral_17501;
  if ( StringLiteral_17501 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17501, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17501;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 3 )
    goto LABEL_134;
  v50->m_Items[3] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[3], v42, v35, v61, v62, v63, v64, v65);
  v34 = (struct System_Int32_array *)StringLiteral_17502;
  if ( StringLiteral_17502 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17502, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17502;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 4 )
    goto LABEL_134;
  v50->m_Items[4] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[4], v42, v35, v66, v67, v68, v69, v70);
  v34 = (struct System_Int32_array *)StringLiteral_17503;
  if ( StringLiteral_17503 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17503, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17503;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 5 )
    goto LABEL_134;
  v50->m_Items[5] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[5], v42, v35, v71, v72, v73, v74, v75);
  v34 = (struct System_Int32_array *)StringLiteral_17504;
  if ( StringLiteral_17504 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17504, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17504;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 6 )
    goto LABEL_134;
  v50->m_Items[6] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[6], v42, v35, v76, v77, v78, v79, v80);
  v34 = (struct System_Int32_array *)StringLiteral_17505;
  if ( StringLiteral_17505 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17505, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17505;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 7 )
    goto LABEL_134;
  v50->m_Items[7] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[7], v42, v35, v81, v82, v83, v84, v85);
  v34 = (struct System_Int32_array *)StringLiteral_17506;
  if ( StringLiteral_17506 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17506, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17506;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 8 )
    goto LABEL_134;
  v50->m_Items[8] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[8], v42, v35, v86, v87, v88, v89, v90);
  v34 = (struct System_Int32_array *)StringLiteral_17507;
  if ( StringLiteral_17507 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17507, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17507;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 9 )
    goto LABEL_134;
  v50->m_Items[9] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[9], v42, v35, v91, v92, v93, v94, v95);
  v34 = (struct System_Int32_array *)StringLiteral_17508;
  if ( StringLiteral_17508 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17508, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17508;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0xA )
    goto LABEL_134;
  v50->m_Items[10] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[10], v42, v35, v96, v97, v98, v99, v100);
  v34 = (struct System_Int32_array *)StringLiteral_17509;
  if ( StringLiteral_17509 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17509, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17509;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0xB )
    goto LABEL_134;
  v50->m_Items[11] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[11], v42, v35, v101, v102, v103, v104, v105);
  v34 = (struct System_Int32_array *)StringLiteral_17510;
  if ( StringLiteral_17510 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17510, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17510;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0xC )
    goto LABEL_134;
  v50->m_Items[12] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[12], v42, v35, v106, v107, v108, v109, v110);
  v34 = (struct System_Int32_array *)StringLiteral_17511;
  if ( StringLiteral_17511 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17511, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17511;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0xD )
    goto LABEL_134;
  v50->m_Items[13] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[13], v42, v35, v111, v112, v113, v114, v115);
  v34 = (struct System_Int32_array *)StringLiteral_17512;
  if ( StringLiteral_17512 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17512, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17512;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0xE )
    goto LABEL_134;
  v50->m_Items[14] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[14], v42, v35, v116, v117, v118, v119, v120);
  v34 = (struct System_Int32_array *)StringLiteral_17513;
  if ( StringLiteral_17513 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17513, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17513;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0xF )
    goto LABEL_134;
  v50->m_Items[15] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[15], v42, v35, v121, v122, v123, v124, v125);
  v34 = (struct System_Int32_array *)StringLiteral_17514;
  if ( StringLiteral_17514 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17514, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17514;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0x10 )
    goto LABEL_134;
  v50->m_Items[16] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[16], v42, v35, v126, v127, v128, v129, v130);
  v34 = (struct System_Int32_array *)StringLiteral_17515;
  if ( StringLiteral_17515 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17515, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17515;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0x11 )
    goto LABEL_134;
  v50->m_Items[17] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[17], v42, v35, v131, v132, v133, v134, v135);
  v34 = (struct System_Int32_array *)StringLiteral_17516;
  if ( StringLiteral_17516 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17516, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17516;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0x12 )
    goto LABEL_134;
  v50->m_Items[18] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[18], v42, v35, v136, v137, v138, v139, v140);
  v34 = (struct System_Int32_array *)StringLiteral_17517;
  if ( StringLiteral_17517 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17517, v50->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17517;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v50->max_length <= 0x13 )
    goto LABEL_134;
  v50->m_Items[19] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[19], v42, v35, v141, v142, v143, v144, v145);
  this->fields.startAniName = v50;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.startAniName,
    (System_Int32_array **)v50,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  v153 = sub_B17014(string___TypeInfo, 5LL, v152);
  if ( !v153 )
LABEL_136:
    sub_B170D4();
  v159 = (struct System_String_array *)v153;
  v34 = (struct System_Int32_array *)StringLiteral_17518;
  if ( StringLiteral_17518 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17518, v159->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17518;
  }
  else
  {
    v42 = 0LL;
  }
  if ( !v159->max_length )
    goto LABEL_134;
  v159->m_Items[0] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)v159->m_Items, v42, v35, v154, v155, v156, v157, v158);
  v34 = (struct System_Int32_array *)StringLiteral_17519;
  if ( StringLiteral_17519 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17519, v159->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17519;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v159->max_length <= 1 )
    goto LABEL_134;
  v159->m_Items[1] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v159->m_Items[1], v42, v35, v160, v161, v162, v163, v164);
  v34 = (struct System_Int32_array *)StringLiteral_17520;
  if ( StringLiteral_17520 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17520, v159->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17520;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v159->max_length <= 2 )
    goto LABEL_134;
  v159->m_Items[2] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v159->m_Items[2], v42, v35, v165, v166, v167, v168, v169);
  v34 = (struct System_Int32_array *)StringLiteral_17521;
  if ( StringLiteral_17521 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17521, v159->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_135;
    v42 = (System_Int32_array **)StringLiteral_17521;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v159->max_length <= 3 )
    goto LABEL_134;
  v159->m_Items[3] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v159->m_Items[3], v42, v35, v170, v171, v172, v173, v174);
  v34 = (struct System_Int32_array *)StringLiteral_17522;
  if ( StringLiteral_17522 )
  {
    v34 = (struct System_Int32_array *)sub_B170BC(StringLiteral_17522, v159->obj.klass->_1.element_class);
    if ( v34 )
    {
      v42 = (System_Int32_array **)StringLiteral_17522;
      goto LABEL_132;
    }
LABEL_135:
    sub_B170F4(v34);
    sub_B170A0();
  }
  v42 = 0LL;
LABEL_132:
  if ( v159->max_length <= 4 )
    goto LABEL_134;
  v159->m_Items[4] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v159->m_Items[4], v42, v35, v175, v176, v177, v178, v179);
  this->fields.itemAniName = v159;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemAniName,
    (System_Int32_array **)v159,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  v190 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                   v186,
                                                                                                   v187,
                                                                                                   v188,
                                                                                                   v189);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v190,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.materialList = (struct System_Collections_Generic_List_UserServantEntity__o *)v190;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.materialList,
    (System_Int32_array **)v190,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196);
  v201 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v197,
                                                     v198,
                                                     v199,
                                                     v200);
  System_Collections_Generic_List_int____ctor(
    v201,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.itemList = v201;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineEffectComponent__EndLoadBg(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v29; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21

  if ( (byte_40F98CC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__, v9);
    sub_B16FFC(&CombineEffectComponent___c__DisplayClass33_0_TypeInfo, v10);
    byte_40F98CC = 1;
  }
  v11 = sub_B170CC(CombineEffectComponent___c__DisplayClass33_0_TypeInfo, data, method, v3, v4);
  CombineEffectComponent___c__DisplayClass33_0___ctor((CombineEffectComponent___c__DisplayClass33_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = data;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)data, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v31, 0LL);
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
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t kind; // w8
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 *v35; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v37; // x0
  struct UnityEngine_GameObject_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x0
  System_String_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  AssetLoader_LoadEndDataHandler_o *v51; // x21

  if ( (byte_40F98CB & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_CombineEffectComponent_EndLoadBg__, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&SeManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_2792, v10);
    sub_B16FFC(&StringLiteral_5856, v11);
    sub_B16FFC(&StringLiteral_5855, v12);
    byte_40F98CB = 1;
  }
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fsm,
    (System_Int32_array **)Component_WebViewObject,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  p_releaseAssetPath = &this->fields.releaseAssetPath;
  this->fields.releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.releaseAssetPath,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  kind = this->fields.kind;
  this->fields.cntIndex = 0;
  if ( kind != 3 && kind )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( transform )
      {
        v35 = &StringLiteral_5856;
        goto LABEL_11;
      }
    }
LABEL_20:
    sub_B170D4();
  }
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v33 )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform(v33, 0LL);
  if ( !transform )
    goto LABEL_20;
  v35 = &StringLiteral_5855;
LABEL_11:
  v37 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)*v35, 0LL);
  if ( !v37 )
    goto LABEL_20;
  v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
  this->fields.bgParentObject = v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgParentObject,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_releaseAssetPath;
  if ( !*p_releaseAssetPath )
    goto LABEL_20;
  v46 = (System_String_o *)StringLiteral_2792;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v45,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2792,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  v51 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v47, v48, v49, v50);
  AssetLoader_LoadEndDataHandler___ctor(v51, (Il2CppObject *)this, Method_CombineEffectComponent_EndLoadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v46, v51, 1, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(19, 0LL);
}


void __fastcall CombineEffectComponent__ReleasePrevAsset(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_string__o *v13; // x0
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x0
  System_Collections_Generic_List_int__o *itemList; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v16; // x0
  BattleServantConfConponent_o *p_itemEntityList; // x19
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // t1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F98D6 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    byte_40F98D6 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v25.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v13 = this->fields.releaseAssetPath;
    if ( !v13 )
LABEL_17:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
  }
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_17;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)materialList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UserServantEntity__Clear__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  System_Collections_Generic_List_int___Clear(
    itemList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  itemEntityList = this->fields.itemEntityList;
  p_itemEntityList = (BattleServantConfConponent_o *)&this->fields.itemEntityList;
  v16 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)itemEntityList;
  if ( itemEntityList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v16,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ItemEntity__Clear__);
    p_itemEntityList->klass = 0LL;
    sub_B16F98(p_itemEntityList, 0LL, v19, v20, v21, v22, v23, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  PlayMakerFSM_o *fsm; // x0
  PlayMakerFSM_o **p_fsm; // x19
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  struct UnityEngine_GameObject_o *Value; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  PlayMakerFSM_o *v59; // x0
  HutongGames_PlayMaker_FsmVariables_o *v60; // x0
  HutongGames_PlayMaker_FsmFloat_o *FsmFloat; // x0
  float v62; // s0
  float v63; // s8
  HutongGames_PlayMaker_FsmVariables_o *v64; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x22
  HutongGames_PlayMaker_FsmVariables_o *v68; // x0
  HutongGames_PlayMaker_FsmString_o *v69; // x0
  System_String_o *v70; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v71; // x23
  HutongGames_PlayMaker_FsmVariables_o *v72; // x0
  HutongGames_PlayMaker_FsmString_o *v73; // x0
  System_String_o *v74; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v75; // x24
  HutongGames_PlayMaker_FsmVariables_o *v76; // x0
  HutongGames_PlayMaker_FsmString_o *v77; // x0
  System_String_o *v78; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v79; // x25
  HutongGames_PlayMaker_FsmVariables_o *v80; // x0
  HutongGames_PlayMaker_FsmString_o *v81; // x0
  System_String_o *v82; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v83; // x27
  HutongGames_PlayMaker_FsmVariables_o *v84; // x0
  HutongGames_PlayMaker_FsmString_o *v85; // x0
  System_String_o *v86; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v87; // x20
  HutongGames_PlayMaker_FsmVariables_o *v88; // x0
  HutongGames_PlayMaker_FsmString_o *v89; // x0
  System_String_o *v90; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v91; // x21
  HutongGames_PlayMaker_FsmVariables_o *v92; // x0
  HutongGames_PlayMaker_FsmString_o *v93; // x0
  System_String_o *v94; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v95; // x28
  HutongGames_PlayMaker_FsmVariables_o *v96; // x0
  HutongGames_PlayMaker_FsmString_o *v97; // x0
  HutongGames_PlayMaker_FsmVariables_o *v98; // x0
  HutongGames_PlayMaker_FsmString_o *v99; // x0
  HutongGames_PlayMaker_FsmVariables_o *v100; // x0
  HutongGames_PlayMaker_FsmString_o *v101; // x0
  HutongGames_PlayMaker_FsmVariables_o *v102; // x0
  HutongGames_PlayMaker_FsmString_o *v103; // x0
  HutongGames_PlayMaker_FsmVariables_o *v104; // x0
  HutongGames_PlayMaker_FsmString_o *v105; // x0
  HutongGames_PlayMaker_FsmVariables_o *v106; // x0
  HutongGames_PlayMaker_FsmString_o *v107; // x0
  HutongGames_PlayMaker_FsmVariables_o *v108; // x0
  HutongGames_PlayMaker_FsmString_o *v109; // x0
  HutongGames_PlayMaker_FsmVariables_o *v110; // x0
  HutongGames_PlayMaker_FsmString_o *v111; // x0
  HutongGames_PlayMaker_FsmVariables_o *v112; // x0
  HutongGames_PlayMaker_FsmString_o *v113; // x0
  HutongGames_PlayMaker_FsmVariables_o *v114; // x0
  HutongGames_PlayMaker_FsmString_o *v115; // x0
  HutongGames_PlayMaker_FsmVariables_o *v116; // x0
  HutongGames_PlayMaker_FsmString_o *v117; // x0
  HutongGames_PlayMaker_FsmVariables_o *v118; // x0
  HutongGames_PlayMaker_FsmString_o *v119; // x0
  HutongGames_PlayMaker_FsmVariables_o *v120; // x0
  HutongGames_PlayMaker_FsmString_o *v121; // x0
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v126; // x22
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  PlayMakerFSM_o *v133; // x0
  HutongGames_PlayMaker_FsmVariables_o *v134; // x0
  HutongGames_PlayMaker_FsmString_o *v135; // x0
  System_String_o *v136; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v137; // x20
  HutongGames_PlayMaker_FsmVariables_o *v138; // x0
  HutongGames_PlayMaker_FsmString_o *v139; // x0
  System_String_o *v140; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v141; // x21
  HutongGames_PlayMaker_FsmVariables_o *v142; // x0
  HutongGames_PlayMaker_FsmString_o *v143; // x0
  System_String_o *v144; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v145; // x22
  HutongGames_PlayMaker_FsmVariables_o *v146; // x0
  HutongGames_PlayMaker_FsmString_o *v147; // x0
  System_String_o *v148; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v149; // x23
  HutongGames_PlayMaker_FsmVariables_o *v150; // x0
  HutongGames_PlayMaker_FsmString_o *v151; // x0
  System_String_o *v152; // x25
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v157; // x24
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  UnityEngine_Component_o *v167; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UserServantEntity_o *baseSvtEntity; // x0
  int32_t CardImageLimitCount; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *v173; // x8
  ServantLimitImageMaster_o *v174; // x22
  __int64 v175; // x23
  __int64 v176; // x24
  int32_t v177; // w0
  int32_t ServantImageLimitSealAfter; // w21
  UnityEngine_GameObject_o *v179; // x0
  UnityEngine_Component_o *TexturePrefab_26882832; // x0
  UnityEngine_Component_o *v181; // x20
  UnityEngine_Transform_o *v182; // x21
  int v183; // s0
  UnityEngine_Transform_o *v186; // x0
  CombineEffectComponent_o *v187; // x0
  const MethodInfo *v188; // x5
  int32_t v189; // w0
  UserServantEntity_o *v190; // x8
  UserServantEntity_o *v191; // x0
  System_String_o *FrameCardPrefix; // x20
  DesignCardManager_o *v193; // x0
  System_String_o *ExceedFrameCardPath; // x0
  DesignCardManager_o *v195; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v196; // x20
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x3
  __int64 v201; // x4
  AssetLoader_LoadEndDataHandler_o *v202; // x21
  _BOOL8 AssetStorage; // x0
  __int64 v204; // x1
  __int64 v205; // x2
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t size; // w9
  struct System_String_array *startAniName; // x8
  il2cpp_array_size_t v209; // w9
  System_Int32_array **v210; // x20
  HutongGames_PlayMaker_FsmVariables_o *v211; // x0
  HutongGames_PlayMaker_FsmString_o *v212; // x0
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  const MethodInfo *v219; // x1
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x8
  int32_t v221; // w8
  struct System_Collections_Generic_List_int__o *itemList; // x8
  struct System_String_array *itemAniName; // x9
  il2cpp_array_size_t v224; // w8
  PlayMakerFSM_o *v225; // x0
  System_Int32_array **v226; // x20
  HutongGames_PlayMaker_FsmVariables_o *v227; // x0
  HutongGames_PlayMaker_FsmString_o *v228; // x0
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  const MethodInfo *v235; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v236; // [xsp+8h] [xbp-D8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v237; // [xsp+10h] [xbp-D0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v238; // [xsp+18h] [xbp-C8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v239; // [xsp+20h] [xbp-C0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v240; // [xsp+28h] [xbp-B8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v241; // [xsp+30h] [xbp-B0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v242; // [xsp+38h] [xbp-A8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v243; // [xsp+40h] [xbp-A0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v244; // [xsp+48h] [xbp-98h]
  EventMissionProgressRequest_Argument_ProgressData_o *v245; // [xsp+50h] [xbp-90h]
  EventMissionProgressRequest_Argument_ProgressData_o *v246; // [xsp+58h] [xbp-88h]
  EventMissionProgressRequest_Argument_ProgressData_o *v247; // [xsp+60h] [xbp-80h]
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+68h] [xbp-78h]
  System_String_o *v249; // [xsp+78h] [xbp-68h]
  int32_t classCardId[2]; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v251; // 0:x0.16
  UnityEngine_Vector3_o v252; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F98CE & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_CombineEffectComponent_setReverseCallback__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_2718, v15);
    sub_B16FFC(&StringLiteral_3875, v16);
    sub_B16FFC(&StringLiteral_6625, v17);
    sub_B16FFC(&StringLiteral_6586, v18);
    sub_B16FFC(&StringLiteral_6574, v19);
    sub_B16FFC(&StringLiteral_6577, v20);
    sub_B16FFC(&StringLiteral_6581, v21);
    sub_B16FFC(&StringLiteral_2343, v22);
    sub_B16FFC(&StringLiteral_17498, v23);
    sub_B16FFC(&StringLiteral_6576, v24);
    sub_B16FFC(&StringLiteral_4138, v25);
    sub_B16FFC(&StringLiteral_6753, v26);
    sub_B16FFC(&StringLiteral_6578, v27);
    sub_B16FFC(&StringLiteral_14349, v28);
    sub_B16FFC(&StringLiteral_6624, v29);
    sub_B16FFC(&StringLiteral_12585, v30);
    sub_B16FFC(&StringLiteral_6582, v31);
    sub_B16FFC(&StringLiteral_12558, v32);
    sub_B16FFC(&StringLiteral_6786, v33);
    sub_B16FFC(&StringLiteral_6573, v34);
    sub_B16FFC(&StringLiteral_14348, v35);
    sub_B16FFC(&StringLiteral_6572, v36);
    sub_B16FFC(&StringLiteral_17523, v37);
    sub_B16FFC(&StringLiteral_12832, v38);
    sub_B16FFC(&StringLiteral_12980, v39);
    sub_B16FFC(&StringLiteral_6584, v40);
    sub_B16FFC(&StringLiteral_6579, v41);
    sub_B16FFC(&StringLiteral_1, v42);
    sub_B16FFC(&StringLiteral_6585, v43);
    sub_B16FFC(&StringLiteral_6580, v44);
    sub_B16FFC(&StringLiteral_6754, v45);
    sub_B16FFC(&StringLiteral_6575, v46);
    sub_B16FFC(&StringLiteral_6583, v47);
    byte_40F98CE = 1;
  }
  *(_QWORD *)classCardId = 0LL;
  p_fsm = &this->fields.fsm;
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_137;
  FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !FsmVariables )
    goto LABEL_137;
  FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                    FsmVariables,
                    (System_String_o *)StringLiteral_4138,
                    0LL);
  if ( !FsmGameObject )
    goto LABEL_137;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(FsmGameObject, 0LL);
  this->fields.effect = Value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = this->fields.fsm;
  if ( !v59 )
    goto LABEL_137;
  v60 = PlayMakerFSM__get_FsmVariables(v59, 0LL);
  if ( !v60 )
    goto LABEL_137;
  FsmFloat = HutongGames_PlayMaker_FsmVariables__GetFsmFloat(v60, (System_String_o *)StringLiteral_3875, 0LL);
  if ( !FsmFloat )
    goto LABEL_137;
  v62 = HutongGames_PlayMaker_FsmFloat__get_Value(FsmFloat, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v63 = v62;
  v64 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v64 )
    goto LABEL_137;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(v64, (System_String_o *)StringLiteral_2718, 0LL);
  if ( !FsmString )
    goto LABEL_137;
  v66 = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v67 = v66;
  v68 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v68 )
    goto LABEL_137;
  v69 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v68, (System_String_o *)StringLiteral_6786, 0LL);
  if ( !v69 )
    goto LABEL_137;
  v70 = HutongGames_PlayMaker_FsmString__get_Value(v69, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v71 = (EventMissionProgressRequest_Argument_ProgressData_o *)v70;
  v72 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v72 )
    goto LABEL_137;
  v73 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v72, (System_String_o *)StringLiteral_12558, 0LL);
  if ( !v73 )
    goto LABEL_137;
  v74 = HutongGames_PlayMaker_FsmString__get_Value(v73, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v75 = (EventMissionProgressRequest_Argument_ProgressData_o *)v74;
  v76 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v76 )
    goto LABEL_137;
  v77 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v76, (System_String_o *)StringLiteral_14348, 0LL);
  if ( !v77 )
    goto LABEL_137;
  v78 = HutongGames_PlayMaker_FsmString__get_Value(v77, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v79 = (EventMissionProgressRequest_Argument_ProgressData_o *)v78;
  v80 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v80 )
    goto LABEL_137;
  v81 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v80, (System_String_o *)StringLiteral_6753, 0LL);
  if ( !v81 )
    goto LABEL_137;
  v82 = HutongGames_PlayMaker_FsmString__get_Value(v81, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v83 = (EventMissionProgressRequest_Argument_ProgressData_o *)v82;
  v84 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v84 )
    goto LABEL_137;
  v85 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v84, (System_String_o *)StringLiteral_6624, 0LL);
  if ( !v85 )
    goto LABEL_137;
  v86 = HutongGames_PlayMaker_FsmString__get_Value(v85, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v87 = (EventMissionProgressRequest_Argument_ProgressData_o *)v86;
  v88 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v88 )
    goto LABEL_137;
  v89 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v88, (System_String_o *)StringLiteral_6572, 0LL);
  if ( !v89 )
    goto LABEL_137;
  v90 = HutongGames_PlayMaker_FsmString__get_Value(v89, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v91 = (EventMissionProgressRequest_Argument_ProgressData_o *)v90;
  v92 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v92 )
    goto LABEL_137;
  v93 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v92, (System_String_o *)StringLiteral_6573, 0LL);
  if ( !v93 )
    goto LABEL_137;
  v94 = HutongGames_PlayMaker_FsmString__get_Value(v93, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v95 = (EventMissionProgressRequest_Argument_ProgressData_o *)v94;
  v96 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v96 )
    goto LABEL_137;
  v97 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v96, (System_String_o *)StringLiteral_6574, 0LL);
  if ( !v97 )
    goto LABEL_137;
  item = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v97, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v98 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v98 )
    goto LABEL_137;
  v99 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v98, (System_String_o *)StringLiteral_6575, 0LL);
  if ( !v99 )
    goto LABEL_137;
  v247 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v99, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v100 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v100 )
    goto LABEL_137;
  v101 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v100, (System_String_o *)StringLiteral_6576, 0LL);
  if ( !v101 )
    goto LABEL_137;
  v246 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v101, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v102 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v102 )
    goto LABEL_137;
  v103 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v102, (System_String_o *)StringLiteral_6577, 0LL);
  if ( !v103 )
    goto LABEL_137;
  v245 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v103, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v104 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v104 )
    goto LABEL_137;
  v105 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v104, (System_String_o *)StringLiteral_6578, 0LL);
  if ( !v105 )
    goto LABEL_137;
  v244 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v105, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v106 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v106 )
    goto LABEL_137;
  v107 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v106, (System_String_o *)StringLiteral_6579, 0LL);
  if ( !v107 )
    goto LABEL_137;
  v243 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v107, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v108 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v108 )
    goto LABEL_137;
  v109 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v108, (System_String_o *)StringLiteral_6580, 0LL);
  if ( !v109 )
    goto LABEL_137;
  v242 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v109, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v110 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v110 )
    goto LABEL_137;
  v111 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v110, (System_String_o *)StringLiteral_6581, 0LL);
  if ( !v111 )
    goto LABEL_137;
  v241 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v111, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v112 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v112 )
    goto LABEL_137;
  v113 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v112, (System_String_o *)StringLiteral_6582, 0LL);
  if ( !v113 )
    goto LABEL_137;
  v240 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v113, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v114 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v114 )
    goto LABEL_137;
  v115 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v114, (System_String_o *)StringLiteral_6583, 0LL);
  if ( !v115 )
    goto LABEL_137;
  v239 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v115, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v116 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v116 )
    goto LABEL_137;
  v117 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v116, (System_String_o *)StringLiteral_6584, 0LL);
  if ( !v117 )
    goto LABEL_137;
  v238 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v117, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v118 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v118 )
    goto LABEL_137;
  v119 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v118, (System_String_o *)StringLiteral_6585, 0LL);
  if ( !v119 )
    goto LABEL_137;
  v237 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v119, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v120 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v120 )
    goto LABEL_137;
  v121 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v120, (System_String_o *)StringLiteral_6586, 0LL);
  if ( !v121 )
    goto LABEL_137;
  v249 = v67;
  v236 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(v121, 0LL);
  v126 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_string__TypeInfo,
                                                                                                   v122,
                                                                                                   v123,
                                                                                                   v124,
                                                                                                   v125);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v126,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v126 )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v71,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v75,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v79,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v83,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v87,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v91,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v95,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    item,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v247,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v246,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v245,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v244,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v243,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v242,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v241,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v240,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v239,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v238,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v237,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v126,
    v236,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.feedNameList = (struct System_Collections_Generic_List_string__o *)v126;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.feedNameList,
    (System_Int32_array **)v126,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  v133 = this->fields.fsm;
  if ( !v133 )
    goto LABEL_137;
  v134 = PlayMakerFSM__get_FsmVariables(v133, 0LL);
  if ( !v134 )
    goto LABEL_137;
  v135 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v134, (System_String_o *)StringLiteral_12832, 0LL);
  if ( !v135 )
    goto LABEL_137;
  v136 = HutongGames_PlayMaker_FsmString__get_Value(v135, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v137 = (EventMissionProgressRequest_Argument_ProgressData_o *)v136;
  v138 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v138 )
    goto LABEL_137;
  v139 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v138, (System_String_o *)StringLiteral_12585, 0LL);
  if ( !v139 )
    goto LABEL_137;
  v140 = HutongGames_PlayMaker_FsmString__get_Value(v139, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v141 = (EventMissionProgressRequest_Argument_ProgressData_o *)v140;
  v142 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v142 )
    goto LABEL_137;
  v143 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v142, (System_String_o *)StringLiteral_14349, 0LL);
  if ( !v143 )
    goto LABEL_137;
  v144 = HutongGames_PlayMaker_FsmString__get_Value(v143, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v145 = (EventMissionProgressRequest_Argument_ProgressData_o *)v144;
  v146 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v146 )
    goto LABEL_137;
  v147 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v146, (System_String_o *)StringLiteral_6754, 0LL);
  if ( !v147 )
    goto LABEL_137;
  v148 = HutongGames_PlayMaker_FsmString__get_Value(v147, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v149 = (EventMissionProgressRequest_Argument_ProgressData_o *)v148;
  v150 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !v150 )
    goto LABEL_137;
  v151 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v150, (System_String_o *)StringLiteral_6625, 0LL);
  if ( !v151 )
    goto LABEL_137;
  v152 = HutongGames_PlayMaker_FsmString__get_Value(v151, 0LL);
  v157 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_string__TypeInfo,
                                                                                                   v153,
                                                                                                   v154,
                                                                                                   v155,
                                                                                                   v156);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v157,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v157 )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v157,
    v137,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v157,
    v141,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v157,
    v145,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v157,
    v149,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v157,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v152,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.feedItemNameList = (struct System_Collections_Generic_List_string__o *)v157;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.feedItemNameList,
    (System_Int32_array **)v157,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  effect = this->fields.effect;
  if ( !effect )
    goto LABEL_137;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(transform, v249, 1, 0LL);
  if ( !NodeFromName )
    goto LABEL_137;
  v167 = NodeFromName;
  gameObject = UnityEngine_Component__get_gameObject(NodeFromName, 0LL);
  if ( !gameObject )
    goto LABEL_137;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_137;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(baseSvtEntity, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_137;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v173 = this->fields.baseSvtEntity;
  if ( !v173 )
    goto LABEL_137;
  v174 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  v176 = *(_QWORD *)&v173->fields.svtId.fields.currentCryptoKey;
  v175 = *(_QWORD *)&v173->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v251.fields.currentCryptoKey = v176;
  *(_QWORD *)&v251.fields.fakeValue = v175;
  v177 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v251, 0LL);
  if ( !v174 )
    goto LABEL_137;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v174,
                                 v177,
                                 CardImageLimitCount,
                                 0LL);
  v179 = UnityEngine_Component__get_gameObject(v167, 0LL);
  TexturePrefab_26882832 = (UnityEngine_Component_o *)CharaGraphManager__CreateTexturePrefab_26882832(
                                                        v179,
                                                        this->fields.baseSvtEntity,
                                                        ServantImageLimitSealAfter,
                                                        10,
                                                        0LL,
                                                        0,
                                                        0LL);
  if ( !TexturePrefab_26882832 )
    goto LABEL_137;
  v181 = TexturePrefab_26882832;
  v182 = UnityEngine_Component__get_transform(TexturePrefab_26882832, 0LL);
  *(UnityEngine_Vector3_o *)&v183 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v182 )
    goto LABEL_137;
  UnityEngine_Transform__set_localPosition(v182, *(UnityEngine_Vector3_o *)&v183, 0LL);
  v186 = UnityEngine_Component__get_transform(v181, 0LL);
  if ( !v186 )
    goto LABEL_137;
  v252.fields.x = v63;
  v252.fields.y = v63;
  v252.fields.z = v63;
  UnityEngine_Transform__set_localScale(v186, v252, 0LL);
  CombineEffectComponent__getDispInfo(
    v187,
    &classCardId[1],
    classCardId,
    this->fields.baseSvtId,
    this->fields.baseSvtlimitCnt,
    v188);
  v189 = this->fields.kind == 3 ? ConstantMaster__getValue((System_String_o *)StringLiteral_2343, 0LL) : classCardId[0];
  v190 = this->fields.baseSvtEntity;
  this->fields.baseClassCardId = v189;
  if ( !v190 )
    goto LABEL_137;
  if ( UserServantEntity__isExceeded(v190, 0LL) )
  {
    v191 = this->fields.baseSvtEntity;
    if ( v191 )
    {
      FrameCardPrefix = UserServantEntity__getFrameCardPrefix(v191, 0LL);
      v193 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( v193 )
      {
        ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                v193,
                                this->fields.baseClassCardId,
                                FrameCardPrefix,
                                0LL);
        goto LABEL_112;
      }
    }
LABEL_137:
    sub_B170D4();
  }
  v195 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !v195 )
    goto LABEL_137;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(v195, this->fields.baseClassCardId, classCardId[1], 0LL);
LABEL_112:
  v196 = (EventMissionProgressRequest_Argument_ProgressData_o *)ExceedFrameCardPath;
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( !releaseAssetPath )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)releaseAssetPath,
    v196,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  v202 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v198, v199, v200, v201);
  AssetLoader_LoadEndDataHandler___ctor(
    v202,
    (Il2CppObject *)this,
    Method_CombineEffectComponent_setReverseCallback__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__loadAssetStorage((System_String_o *)v196, v202, 1, 0LL);
  switch ( this->fields.kind )
  {
    case 0:
    case 3:
      materialList = this->fields.materialList;
      if ( !materialList )
        goto LABEL_137;
      size = materialList->fields._size;
      startAniName = this->fields.startAniName;
      this->fields.materialCnt = size;
      if ( !startAniName )
        goto LABEL_137;
      v209 = size - 1;
      if ( v209 >= startAniName->max_length )
        goto LABEL_138;
      if ( !*p_fsm )
        goto LABEL_137;
      v210 = (System_Int32_array **)startAniName->m_Items[v209];
      v211 = PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
      if ( !v211 )
        goto LABEL_137;
      v212 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v211, (System_String_o *)StringLiteral_12980, 0LL);
      if ( !v212 )
        goto LABEL_137;
      v212->fields.value = (struct System_String_o *)v210;
      sub_B16F98((BattleServantConfConponent_o *)&v212->fields.value, v210, v213, v214, v215, v216, v217, v218);
      CombineEffectComponent__setServantFeed(this, v219);
      break;
    case 1:
      itemEntityList = this->fields.itemEntityList;
      if ( itemEntityList )
      {
        v221 = itemEntityList->fields._size;
        if ( v221 > 0 )
          goto LABEL_128;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_137;
      v221 = itemList->fields._size;
LABEL_128:
      itemAniName = this->fields.itemAniName;
      this->fields.itemMaterialCnt = v221;
      if ( !itemAniName )
        goto LABEL_137;
      v224 = v221 - 1;
      if ( v224 >= itemAniName->max_length )
      {
LABEL_138:
        sub_B17100(AssetStorage, v204, v205);
        sub_B170A0();
      }
      v225 = *p_fsm;
      if ( !*p_fsm )
        goto LABEL_137;
      v226 = (System_Int32_array **)itemAniName->m_Items[v224];
LABEL_134:
      v227 = PlayMakerFSM__get_FsmVariables(v225, 0LL);
      if ( !v227 )
        goto LABEL_137;
      v228 = HutongGames_PlayMaker_FsmVariables__GetFsmString(v227, (System_String_o *)StringLiteral_12980, 0LL);
      if ( !v228 )
        goto LABEL_137;
      v228->fields.value = (struct System_String_o *)v226;
      sub_B16F98((BattleServantConfConponent_o *)&v228->fields.value, v226, v229, v230, v231, v232, v233, v234);
      CombineEffectComponent__setItemFeed(this, v235);
      break;
    case 2:
      v225 = *p_fsm;
      if ( !*p_fsm )
        goto LABEL_137;
      v226 = (System_Int32_array **)StringLiteral_17523;
      goto LABEL_134;
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40F98CA & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_40F98CA = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 2;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B170D4();
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v13;
  sub_B16F98((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)list, v15, v16, v17, v18, v19, v20);
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
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_string__o *feedNameList; // x22
  __int64 cntIndex; // x23
  UnityEngine_Transform_o *NodeFromName; // x21
  DesignCardManager_o *Instance; // x0
  WebViewObject_o *Component_WebViewObject; // x20
  System_String_o **v18; // x8
  UnityEngine_Shader_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  UnityEngine_Material_o *v24; // x21
  UnityEngine_Texture_o *v25; // x22
  const MethodInfo *v26; // x1
  int32_t v27; // w8
  int v28; // w9
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F98D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, data);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_14954, v8);
    sub_B16FFC(&StringLiteral_12283, v9);
    sub_B16FFC(&StringLiteral_4501, v10);
    byte_40F98D1 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    goto LABEL_18;
  transform = UnityEngine_GameObject__get_transform(effect, 0LL);
  feedNameList = this->fields.feedNameList;
  if ( !feedNameList )
    goto LABEL_18;
  cntIndex = this->fields.cntIndex;
  if ( feedNameList->fields._size <= (unsigned int)cntIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, feedNameList->fields._items->m_Items[cntIndex], 1, 0LL);
  Instance = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  DesignCardManager__SetupCardImage(Instance, data, NodeFromName, this->fields.feedClassCardId, 0LL);
  if ( !NodeFromName )
    goto LABEL_18;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v18 = (System_String_o **)(this->fields.cardType == 6 ? &StringLiteral_4501 : &StringLiteral_14954);
  v19 = UnityEngine_Shader__Find(*v18, 0LL);
  v24 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v20, v21, v22, v23);
  UnityEngine_Material___ctor(v24, v19, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_18;
  v25 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._2_GetHashCode.method)(
                                   Component_WebViewObject,
                                   Component_WebViewObject->klass[1].vtable._3_ToString.methodPtr);
  ((void (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
    Component_WebViewObject,
    v24,
    Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !v24 )
    goto LABEL_18;
  UnityEngine_Material__set_mainTexture(v24, v25, 0LL);
  v27 = this->fields.cntIndex + 1;
  v28 = this->fields.materialCnt - 1;
  this->fields.cntIndex = v27;
  if ( v27 > v28 )
  {
    fsm = this->fields.fsm;
    this->fields.cntIndex = 0;
    if ( fsm )
    {
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12283, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
  CombineEffectComponent__setServantFeed(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineEffectComponent__SetServantCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_UserServantEntity__o *list,
        int32_t combineKind,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w0
  struct System_Collections_Generic_List_UserServantEntity__o **p_materialList; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40F98C7 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_40F98C7 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = combineKind;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    *(System_String_array ***)&combineKind,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B170D4();
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseSvtData->fields.limitCount, 0LL);
  this->fields.materialList = list;
  p_materialList = &this->fields.materialList;
  *((_DWORD *)p_materialList - 1) = v14;
  sub_B16F98((BattleServantConfConponent_o *)p_materialList, (System_Int32_array **)list, v16, v17, v18, v19, v20, v21);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_ItemEntity__o *list,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w0
  System_Collections_Generic_List_int__o *itemList; // x8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40F98C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, baseSvtData);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_40F98C8 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    goto LABEL_9;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseSvtData->fields.limitCount, 0LL);
  itemList = this->fields.itemList;
  this->fields.baseSvtlimitCnt = v14;
  if ( !itemList )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_int___Clear(
    itemList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  this->fields.itemEntityList = list;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemEntityList,
    (System_Int32_array **)list,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo_24222544(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_int__o *list,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x22
  __int64 v12; // x23
  int32_t v13; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_40F98C9 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_40F98C9 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B170D4();
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v13;
  sub_B16F98((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)list, v15, v16, v17, v18, v19, v20);
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
  UnityEngine_Object_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F98D9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5468, v3);
    byte_40F98D9 = 1;
  }
  p_effect = &this->fields.effect;
  effect = (UnityEngine_Object_o *)this->fields.effect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effect, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_34809676(v6, 0LL);
    *p_effect = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v7, v8, v9, v10, v11, v12);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5468, 0LL);
}


void __fastcall CombineEffectComponent___fadeIn_b__34_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F98D8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5468, method);
    byte_40F98D8 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5468, 0LL);
}


void __fastcall CombineEffectComponent__endAnimation(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40F98D5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_CombineEffectComponent__endAnimation_b__42_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F98D5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineEffectComponent__endAnimation_b__42_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall CombineEffectComponent__fadeIn(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40F98CD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_CombineEffectComponent__fadeIn_b__34_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40F98CD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineEffectComponent__fadeIn_b__34_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v13, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x24
  WebViewManager_o *v19; // x0
  ServantLimitMaster_o *v20; // x0
  ServantLimitEntity_o *v21; // x0
  System_String_o **v22; // x8

  if ( (byte_40F98D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, rarity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_2343, v14);
    sub_B16FFC(&StringLiteral_2344, v15);
    byte_40F98D4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   svtId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v20 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v19,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (v21 = ServantLimitMaster__GetEntity(v20, svtId, svtLimitCnt, 0LL)) == 0LL
    || (*rarity = v21->fields.rarity, !Entity) )
  {
    sub_B170D4();
  }
  this->fields.cardType = *(&Entity->fields.startType + 1);
  if ( *(&Entity->fields.startType + 1) == 6 )
    v22 = (System_String_o **)&StringLiteral_2343;
  else
    v22 = (System_String_o **)&StringLiteral_2344;
  *backCardImgId = ConstantMaster__getValue(*v22, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x23
  WebViewManager_o *v18; // x0
  ServantLimitMaster_o *v19; // x0
  ServantLimitEntity_o *v20; // x21
  WebViewManager_o *v21; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x0
  WarEntity_o *v23; // x22
  int32_t OverwriteClassImageId; // w0

  if ( (byte_40F98D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, rarity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F98D3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v18 )
    goto LABEL_15;
  v19 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v18,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !v19 )
    goto LABEL_15;
  v20 = ServantLimitMaster__GetEntity(v19, svtId, svtLimitCnt, 0LL);
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_15;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v21,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Entity || !v22 )
    goto LABEL_15;
  v23 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v22,
          Entity->fields.classId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  OverwriteClassImageId = ServantEntity__GetOverwriteClassImageId(Entity, 0LL);
  if ( !OverwriteClassImageId )
  {
    if ( !v23 )
      goto LABEL_15;
    OverwriteClassImageId = (int32_t)v23->fields.longName;
  }
  *classCardId = OverwriteClassImageId;
  if ( !v20 )
LABEL_15:
    sub_B170D4();
  *rarity = v20->fields.rarity;
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
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x21
  int size; // w8
  unsigned int v12; // w23
  UnityEngine_Component_o **p_itemNode; // x20
  UnityEngine_GameObject_o *effect; // x0
  ItemEntity_o *v15; // x21
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_string__o *feedItemNameList; // x26
  System_Int32_array **NodeFromName; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WebViewObject_o *Component_WebViewObject; // x0
  UISprite_o *v26; // x22
  int32_t ImageId; // w21
  int32_t v28; // w21
  struct System_Collections_Generic_List_int__o *itemList; // x21
  unsigned __int64 v30; // x23
  UnityEngine_Component_o **v31; // x20
  UnityEngine_GameObject_o *v32; // x0
  int32_t v33; // w21
  UnityEngine_Transform_o *v34; // x0
  struct System_Collections_Generic_List_string__o *v35; // x26
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  WebViewObject_o *v43; // x22
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F98D2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B16FFC(&StringLiteral_12283, v9);
    byte_40F98D2 = 1;
  }
  itemEntityList = this->fields.itemEntityList;
  if ( itemEntityList )
  {
    size = itemEntityList->fields._size;
    if ( size >= 1 )
    {
      v12 = 0;
      p_itemNode = (UnityEngine_Component_o **)&this->fields.itemNode;
      while ( 1 )
      {
        if ( size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        effect = this->fields.effect;
        if ( !effect )
          goto LABEL_43;
        v15 = itemEntityList->fields._items->m_Items[v12];
        transform = UnityEngine_GameObject__get_transform(effect, 0LL);
        feedItemNameList = this->fields.feedItemNameList;
        if ( !feedItemNameList )
          goto LABEL_43;
        if ( feedItemNameList->fields._size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        NodeFromName = (System_Int32_array **)TransformHelper__getNodeFromName(
                                                transform,
                                                feedItemNameList->fields._items->m_Items[v12],
                                                1,
                                                0LL);
        *p_itemNode = (UnityEngine_Component_o *)NodeFromName;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.itemNode, NodeFromName, v19, v20, v21, v22, v23, v24);
        if ( !*p_itemNode )
          goto LABEL_43;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    *p_itemNode,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !v15 )
          goto LABEL_43;
        v26 = (UISprite_o *)Component_WebViewObject;
        if ( v15->fields.type == 29 )
        {
          ImageId = ItemEntity__GetImageId(v15, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetCoin(v26, ImageId, 0LL);
        }
        else
        {
          v28 = v15->fields.imageId;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetItem(v26, v28, 0LL);
        }
        itemEntityList = this->fields.itemEntityList;
        if ( !itemEntityList )
          goto LABEL_43;
        size = itemEntityList->fields._size;
        if ( (int)++v12 >= size )
          goto LABEL_41;
      }
    }
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  v30 = 0LL;
  v31 = (UnityEngine_Component_o **)&this->fields.itemNode;
  while ( (__int64)v30 < itemList->fields._size )
  {
    if ( v30 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v32 = this->fields.effect;
    if ( v32 )
    {
      v33 = itemList->fields._items->m_Items[v30 + 1];
      v34 = UnityEngine_GameObject__get_transform(v32, 0LL);
      v35 = this->fields.feedItemNameList;
      if ( v35 )
      {
        if ( v30 >= (unsigned int)v35->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v36 = (System_Int32_array **)TransformHelper__getNodeFromName(v34, v35->fields._items->m_Items[v30], 1, 0LL);
        *v31 = (UnityEngine_Component_o *)v36;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.itemNode, v36, v37, v38, v39, v40, v41, v42);
        if ( *v31 )
        {
          v43 = UnityEngine_Component__GetComponent_WebViewObject_(
                  *v31,
                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetItem((UISprite_o *)v43, v33, 0LL);
          itemList = this->fields.itemList;
          ++v30;
          if ( itemList )
            continue;
        }
      }
    }
    goto LABEL_43;
  }
LABEL_41:
  fsm = this->fields.fsm;
  if ( !fsm )
LABEL_43:
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12283, 0LL);
}


void __fastcall CombineEffectComponent__setReverseCallback(
        CombineEffectComponent_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x22
  WebViewManager_o *Instance; // x0
  DesignCardManager_o *v11; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromName; // x0

  if ( (byte_40F98CF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, data);
    sub_B16FFC(&StringLiteral_11465, v5);
    byte_40F98CF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                      FsmVariables,
                      (System_String_o *)StringLiteral_11465,
                      0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL),
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        !this->fields.effect)
    || (v11 = (DesignCardManager_o *)Instance,
        transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL),
        NodeFromName = TransformHelper__getNodeFromName(transform, Value, 1, 0LL),
        !v11) )
  {
    sub_B170D4();
  }
  DesignCardManager__SetupCardImage(v11, data, NodeFromName, this->fields.baseClassCardId, 0LL);
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
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x20
  __int64 cntIndex; // x21
  UserServantEntity_o *v12; // x8
  __int64 v13; // x20
  __int64 v14; // x21
  int32_t v15; // w0
  struct System_Collections_Generic_List_UserServantEntity__o *v16; // x21
  __int64 v17; // x22
  int32_t v18; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v19; // x8
  int32_t v20; // w0
  struct System_Collections_Generic_List_UserServantEntity__o *v21; // x22
  __int64 v22; // x23
  int32_t v23; // w21
  UserServantEntity_o *v24; // x0
  bool isExceeded; // w22
  const MethodInfo *v26; // x5
  int32_t v27; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *v28; // x20
  __int64 v29; // x21
  UserServantEntity_o *v30; // x0
  System_String_o *FrameCardPrefix; // x20
  DesignCardManager_o *Instance; // x0
  System_String_o *ExceedFrameCardPath; // x0
  DesignCardManager_o *v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x20
  struct System_Collections_Generic_List_string__o *releaseAssetPath; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  AssetLoader_LoadEndDataHandler_o *v41; // x21
  int32_t backCardImgId[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_40F98D0 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_CombineEffectComponent_SetFeedCallback__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v5);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40F98D0 = 1;
  }
  *(_QWORD *)backCardImgId = 0LL;
  materialList = this->fields.materialList;
  if ( !materialList )
    goto LABEL_32;
  cntIndex = this->fields.cntIndex;
  if ( materialList->fields._size <= (unsigned int)cntIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v12 = materialList->fields._items->m_Items[cntIndex];
  if ( !v12 )
    goto LABEL_32;
  v14 = *(_QWORD *)&v12->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v12->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v14;
  *(_QWORD *)&v43.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
  v16 = this->fields.materialList;
  if ( !v16 )
    goto LABEL_32;
  v17 = this->fields.cntIndex;
  v18 = v15;
  if ( v16->fields._size <= (unsigned int)v17 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v16->fields._items->m_Items[v17];
  if ( !v19 )
    goto LABEL_32;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19[6], 0LL);
  v21 = this->fields.materialList;
  if ( !v21 )
    goto LABEL_32;
  v22 = this->fields.cntIndex;
  v23 = v20;
  if ( v21->fields._size <= (unsigned int)v22 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v24 = v21->fields._items->m_Items[v22];
  if ( !v24 )
    goto LABEL_32;
  isExceeded = UserServantEntity__isExceeded(v24, 0LL);
  CombineEffectComponent__getCardBackImg(this, &backCardImgId[1], backCardImgId, v18, v23, v26);
  v27 = backCardImgId[0];
  this->fields.feedClassCardId = backCardImgId[0];
  if ( isExceeded )
  {
    v28 = this->fields.materialList;
    if ( v28 )
    {
      v29 = this->fields.cntIndex;
      if ( v28->fields._size <= (unsigned int)v29 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v30 = v28->fields._items->m_Items[v29];
      if ( v30 )
      {
        FrameCardPrefix = UserServantEntity__getFrameCardPrefix(v30, 0LL);
        Instance = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( Instance )
        {
          ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                  Instance,
                                  this->fields.feedClassCardId,
                                  FrameCardPrefix,
                                  0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_32:
    sub_B170D4();
  }
  v34 = (DesignCardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !v34 )
    goto LABEL_32;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(v34, v27, backCardImgId[1], 0LL);
LABEL_27:
  v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)ExceedFrameCardPath;
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( !releaseAssetPath )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)releaseAssetPath,
    v35,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v37, v38, v39, v40);
  AssetLoader_LoadEndDataHandler___ctor(v41, (Il2CppObject *)this, Method_CombineEffectComponent_SetFeedCallback__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v35, v41, 1, 0LL);
}


void __fastcall CombineEffectComponent___c__DisplayClass33_0___ctor(
        CombineEffectComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineEffectComponent___c__DisplayClass33_0___EndLoadBg_b__0(
        CombineEffectComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetData_o *data; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  struct CombineEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v13; // x21
  UnityEngine_GameObject_o *bgParentObject; // x0
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x21
  int v17; // s0
  UnityEngine_Transform_o *v21; // x21
  int v22; // s0
  UnityEngine_Transform_o *v25; // x20
  int v26; // s0
  struct CombineEffectComponent_o *v29; // x8
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40F710E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5468, v5);
    sub_B16FFC(&StringLiteral_16631, v6);
    byte_40F710E = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_16631,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v9 )
    goto LABEL_17;
  v10 = v9;
  transform = UnityEngine_GameObject__get_transform(v9, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  v13 = transform;
  bgParentObject = _4__this->fields.bgParentObject;
  if ( !bgParentObject )
    goto LABEL_17;
  v15 = UnityEngine_GameObject__get_transform(bgParentObject, 0LL);
  if ( !v13 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v13, v15, 0LL);
  v16 = UnityEngine_GameObject__get_transform(v10, 0LL);
  *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v16 )
    goto LABEL_17;
  UnityEngine_Transform__set_localRotation(v16, *(UnityEngine_Quaternion_o *)&v17, 0LL);
  v21 = UnityEngine_GameObject__get_transform(v10, 0LL);
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v21
    || (UnityEngine_Transform__set_localPosition(v21, *(UnityEngine_Vector3_o *)&v22, 0LL),
        v25 = UnityEngine_GameObject__get_transform(v10, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL),
        !v25)
    || (UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL),
        (v29 = this->fields.__4__this) == 0LL)
    || (fsm = v29->fields.fsm) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5468, 0LL);
}