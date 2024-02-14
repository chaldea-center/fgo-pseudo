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
  struct System_Int32_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  il2cpp_array_size_t max_length; // w8
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_String_array *v47; // x20
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x1
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x1
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x1
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x1
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x1
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Int32_array **v160; // x1
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_Int32_array **v167; // x1
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array **v174; // x1
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x1
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  struct System_String_array *v194; // x20
  System_Int32_array **v195; // x1
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  System_Int32_array **v202; // x1
  System_String_array **v203; // x2
  System_String_array **v204; // x3
  System_Boolean_array **v205; // x4
  System_Int32_array **v206; // x5
  System_Int32_array *v207; // x6
  System_Int32_array *v208; // x7
  System_Int32_array **v209; // x1
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  System_Int32_array **v216; // x1
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  System_Int32_array **v223; // x1
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  __int64 v230; // x1
  __int64 v231; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v232; // x20
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  __int64 v239; // x1
  __int64 v240; // x2
  System_Collections_Generic_List_int__o *v241; // x20
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  __int64 v248; // x0
  __int64 v249; // x0

  if ( (byte_421443C & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_B0D8A4(&string___TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_17628/*"combine_08"*/, v8);
    sub_B0D8A4(&StringLiteral_17629/*"combine_09"*/, v9);
    sub_B0D8A4(&StringLiteral_17636/*"combine_16"*/, v10);
    sub_B0D8A4(&StringLiteral_17639/*"combine_19"*/, v11);
    sub_B0D8A4(&StringLiteral_17640/*"combine_20"*/, v12);
    sub_B0D8A4(&StringLiteral_17627/*"combine_07"*/, v13);
    sub_B0D8A4(&StringLiteral_17621/*"combine_01"*/, v14);
    sub_B0D8A4(&StringLiteral_17622/*"combine_02"*/, v15);
    sub_B0D8A4(&StringLiteral_17634/*"combine_14"*/, v16);
    sub_B0D8A4(&StringLiteral_17630/*"combine_10"*/, v17);
    sub_B0D8A4(&StringLiteral_17642/*"combine_fodder012"*/, v18);
    sub_B0D8A4(&StringLiteral_17641/*"combine_fodder01"*/, v19);
    sub_B0D8A4(&StringLiteral_17631/*"combine_11"*/, v20);
    sub_B0D8A4(&StringLiteral_17632/*"combine_12"*/, v21);
    sub_B0D8A4(&StringLiteral_17644/*"combine_fodder014"*/, v22);
    sub_B0D8A4(&StringLiteral_17643/*"combine_fodder013"*/, v23);
    sub_B0D8A4(&StringLiteral_17625/*"combine_05"*/, v24);
    sub_B0D8A4(&StringLiteral_17637/*"combine_17"*/, v25);
    sub_B0D8A4(&StringLiteral_17645/*"combine_fodder015"*/, v26);
    sub_B0D8A4(&StringLiteral_17635/*"combine_15"*/, v27);
    sub_B0D8A4(&StringLiteral_17624/*"combine_04"*/, v28);
    sub_B0D8A4(&StringLiteral_17623/*"combine_03"*/, v29);
    sub_B0D8A4(&StringLiteral_17626/*"combine_06"*/, v30);
    sub_B0D8A4(&StringLiteral_17633/*"combine_13"*/, v31);
    sub_B0D8A4(&StringLiteral_17638/*"combine_18"*/, v32);
    byte_421443C = 1;
  }
  v33 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_136;
  max_length = v33->max_length;
  if ( !max_length || (v33->m_Items[1] = 512, max_length == 1) )
  {
LABEL_134:
    v248 = sub_B0D9A8(v33);
    sub_B0D948(v248, 0LL);
  }
  v33->m_Items[2] = 875;
  this->fields.cardTextureSize = v33;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v33 = (struct System_Int32_array *)sub_B0D8BC(string___TypeInfo, 20LL);
  if ( !v33 )
    goto LABEL_136;
  v47 = (struct System_String_array *)v33;
  v33 = (struct System_Int32_array *)StringLiteral_17621/*"combine_01"*/;
  if ( StringLiteral_17621/*"combine_01"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17621/*"combine_01"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v48 = (System_Int32_array **)StringLiteral_17621/*"combine_01"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( !v47->max_length )
    goto LABEL_134;
  v47->m_Items[0] = (System_String_o *)v48;
  sub_B0D840((BattleServantConfConponent_o *)v47->m_Items, v48, v41, v42, v43, v44, v45, v46);
  v33 = (struct System_Int32_array *)StringLiteral_17622/*"combine_02"*/;
  if ( StringLiteral_17622/*"combine_02"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17622/*"combine_02"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v55 = (System_Int32_array **)StringLiteral_17622/*"combine_02"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( v47->max_length <= 1 )
    goto LABEL_134;
  v47->m_Items[1] = (System_String_o *)v55;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[1], v55, v49, v50, v51, v52, v53, v54);
  v33 = (struct System_Int32_array *)StringLiteral_17623/*"combine_03"*/;
  if ( StringLiteral_17623/*"combine_03"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17623/*"combine_03"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v62 = (System_Int32_array **)StringLiteral_17623/*"combine_03"*/;
  }
  else
  {
    v62 = 0LL;
  }
  if ( v47->max_length <= 2 )
    goto LABEL_134;
  v47->m_Items[2] = (System_String_o *)v62;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[2], v62, v56, v57, v58, v59, v60, v61);
  v33 = (struct System_Int32_array *)StringLiteral_17624/*"combine_04"*/;
  if ( StringLiteral_17624/*"combine_04"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17624/*"combine_04"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v69 = (System_Int32_array **)StringLiteral_17624/*"combine_04"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( v47->max_length <= 3 )
    goto LABEL_134;
  v47->m_Items[3] = (System_String_o *)v69;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
  v33 = (struct System_Int32_array *)StringLiteral_17625/*"combine_05"*/;
  if ( StringLiteral_17625/*"combine_05"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17625/*"combine_05"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v76 = (System_Int32_array **)StringLiteral_17625/*"combine_05"*/;
  }
  else
  {
    v76 = 0LL;
  }
  if ( v47->max_length <= 4 )
    goto LABEL_134;
  v47->m_Items[4] = (System_String_o *)v76;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[4], v76, v70, v71, v72, v73, v74, v75);
  v33 = (struct System_Int32_array *)StringLiteral_17626/*"combine_06"*/;
  if ( StringLiteral_17626/*"combine_06"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17626/*"combine_06"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v83 = (System_Int32_array **)StringLiteral_17626/*"combine_06"*/;
  }
  else
  {
    v83 = 0LL;
  }
  if ( v47->max_length <= 5 )
    goto LABEL_134;
  v47->m_Items[5] = (System_String_o *)v83;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[5], v83, v77, v78, v79, v80, v81, v82);
  v33 = (struct System_Int32_array *)StringLiteral_17627/*"combine_07"*/;
  if ( StringLiteral_17627/*"combine_07"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17627/*"combine_07"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v90 = (System_Int32_array **)StringLiteral_17627/*"combine_07"*/;
  }
  else
  {
    v90 = 0LL;
  }
  if ( v47->max_length <= 6 )
    goto LABEL_134;
  v47->m_Items[6] = (System_String_o *)v90;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[6], v90, v84, v85, v86, v87, v88, v89);
  v33 = (struct System_Int32_array *)StringLiteral_17628/*"combine_08"*/;
  if ( StringLiteral_17628/*"combine_08"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17628/*"combine_08"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v97 = (System_Int32_array **)StringLiteral_17628/*"combine_08"*/;
  }
  else
  {
    v97 = 0LL;
  }
  if ( v47->max_length <= 7 )
    goto LABEL_134;
  v47->m_Items[7] = (System_String_o *)v97;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[7], v97, v91, v92, v93, v94, v95, v96);
  v33 = (struct System_Int32_array *)StringLiteral_17629/*"combine_09"*/;
  if ( StringLiteral_17629/*"combine_09"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17629/*"combine_09"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v104 = (System_Int32_array **)StringLiteral_17629/*"combine_09"*/;
  }
  else
  {
    v104 = 0LL;
  }
  if ( v47->max_length <= 8 )
    goto LABEL_134;
  v47->m_Items[8] = (System_String_o *)v104;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[8], v104, v98, v99, v100, v101, v102, v103);
  v33 = (struct System_Int32_array *)StringLiteral_17630/*"combine_10"*/;
  if ( StringLiteral_17630/*"combine_10"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17630/*"combine_10"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v111 = (System_Int32_array **)StringLiteral_17630/*"combine_10"*/;
  }
  else
  {
    v111 = 0LL;
  }
  if ( v47->max_length <= 9 )
    goto LABEL_134;
  v47->m_Items[9] = (System_String_o *)v111;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[9], v111, v105, v106, v107, v108, v109, v110);
  v33 = (struct System_Int32_array *)StringLiteral_17631/*"combine_11"*/;
  if ( StringLiteral_17631/*"combine_11"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17631/*"combine_11"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v118 = (System_Int32_array **)StringLiteral_17631/*"combine_11"*/;
  }
  else
  {
    v118 = 0LL;
  }
  if ( v47->max_length <= 0xA )
    goto LABEL_134;
  v47->m_Items[10] = (System_String_o *)v118;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[10], v118, v112, v113, v114, v115, v116, v117);
  v33 = (struct System_Int32_array *)StringLiteral_17632/*"combine_12"*/;
  if ( StringLiteral_17632/*"combine_12"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17632/*"combine_12"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v125 = (System_Int32_array **)StringLiteral_17632/*"combine_12"*/;
  }
  else
  {
    v125 = 0LL;
  }
  if ( v47->max_length <= 0xB )
    goto LABEL_134;
  v47->m_Items[11] = (System_String_o *)v125;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[11], v125, v119, v120, v121, v122, v123, v124);
  v33 = (struct System_Int32_array *)StringLiteral_17633/*"combine_13"*/;
  if ( StringLiteral_17633/*"combine_13"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17633/*"combine_13"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v132 = (System_Int32_array **)StringLiteral_17633/*"combine_13"*/;
  }
  else
  {
    v132 = 0LL;
  }
  if ( v47->max_length <= 0xC )
    goto LABEL_134;
  v47->m_Items[12] = (System_String_o *)v132;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[12], v132, v126, v127, v128, v129, v130, v131);
  v33 = (struct System_Int32_array *)StringLiteral_17634/*"combine_14"*/;
  if ( StringLiteral_17634/*"combine_14"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17634/*"combine_14"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v139 = (System_Int32_array **)StringLiteral_17634/*"combine_14"*/;
  }
  else
  {
    v139 = 0LL;
  }
  if ( v47->max_length <= 0xD )
    goto LABEL_134;
  v47->m_Items[13] = (System_String_o *)v139;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[13], v139, v133, v134, v135, v136, v137, v138);
  v33 = (struct System_Int32_array *)StringLiteral_17635/*"combine_15"*/;
  if ( StringLiteral_17635/*"combine_15"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17635/*"combine_15"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v146 = (System_Int32_array **)StringLiteral_17635/*"combine_15"*/;
  }
  else
  {
    v146 = 0LL;
  }
  if ( v47->max_length <= 0xE )
    goto LABEL_134;
  v47->m_Items[14] = (System_String_o *)v146;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[14], v146, v140, v141, v142, v143, v144, v145);
  v33 = (struct System_Int32_array *)StringLiteral_17636/*"combine_16"*/;
  if ( StringLiteral_17636/*"combine_16"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17636/*"combine_16"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v153 = (System_Int32_array **)StringLiteral_17636/*"combine_16"*/;
  }
  else
  {
    v153 = 0LL;
  }
  if ( v47->max_length <= 0xF )
    goto LABEL_134;
  v47->m_Items[15] = (System_String_o *)v153;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[15], v153, v147, v148, v149, v150, v151, v152);
  v33 = (struct System_Int32_array *)StringLiteral_17637/*"combine_17"*/;
  if ( StringLiteral_17637/*"combine_17"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17637/*"combine_17"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v160 = (System_Int32_array **)StringLiteral_17637/*"combine_17"*/;
  }
  else
  {
    v160 = 0LL;
  }
  if ( v47->max_length <= 0x10 )
    goto LABEL_134;
  v47->m_Items[16] = (System_String_o *)v160;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[16], v160, v154, v155, v156, v157, v158, v159);
  v33 = (struct System_Int32_array *)StringLiteral_17638/*"combine_18"*/;
  if ( StringLiteral_17638/*"combine_18"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17638/*"combine_18"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v167 = (System_Int32_array **)StringLiteral_17638/*"combine_18"*/;
  }
  else
  {
    v167 = 0LL;
  }
  if ( v47->max_length <= 0x11 )
    goto LABEL_134;
  v47->m_Items[17] = (System_String_o *)v167;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[17], v167, v161, v162, v163, v164, v165, v166);
  v33 = (struct System_Int32_array *)StringLiteral_17639/*"combine_19"*/;
  if ( StringLiteral_17639/*"combine_19"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17639/*"combine_19"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v174 = (System_Int32_array **)StringLiteral_17639/*"combine_19"*/;
  }
  else
  {
    v174 = 0LL;
  }
  if ( v47->max_length <= 0x12 )
    goto LABEL_134;
  v47->m_Items[18] = (System_String_o *)v174;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[18], v174, v168, v169, v170, v171, v172, v173);
  v33 = (struct System_Int32_array *)StringLiteral_17640/*"combine_20"*/;
  if ( StringLiteral_17640/*"combine_20"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17640/*"combine_20"*/, v47->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v181 = (System_Int32_array **)StringLiteral_17640/*"combine_20"*/;
  }
  else
  {
    v181 = 0LL;
  }
  if ( v47->max_length <= 0x13 )
    goto LABEL_134;
  v47->m_Items[19] = (System_String_o *)v181;
  sub_B0D840((BattleServantConfConponent_o *)&v47->m_Items[19], v181, v175, v176, v177, v178, v179, v180);
  this->fields.startAniName = v47;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.startAniName,
    (System_Int32_array **)v47,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
  v33 = (struct System_Int32_array *)sub_B0D8BC(string___TypeInfo, 5LL);
  if ( !v33 )
LABEL_136:
    sub_B0D97C(v33);
  v194 = (struct System_String_array *)v33;
  v33 = (struct System_Int32_array *)StringLiteral_17641/*"combine_fodder01"*/;
  if ( StringLiteral_17641/*"combine_fodder01"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17641/*"combine_fodder01"*/, v194->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v195 = (System_Int32_array **)StringLiteral_17641/*"combine_fodder01"*/;
  }
  else
  {
    v195 = 0LL;
  }
  if ( !v194->max_length )
    goto LABEL_134;
  v194->m_Items[0] = (System_String_o *)v195;
  sub_B0D840((BattleServantConfConponent_o *)v194->m_Items, v195, v188, v189, v190, v191, v192, v193);
  v33 = (struct System_Int32_array *)StringLiteral_17642/*"combine_fodder012"*/;
  if ( StringLiteral_17642/*"combine_fodder012"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17642/*"combine_fodder012"*/, v194->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v202 = (System_Int32_array **)StringLiteral_17642/*"combine_fodder012"*/;
  }
  else
  {
    v202 = 0LL;
  }
  if ( v194->max_length <= 1 )
    goto LABEL_134;
  v194->m_Items[1] = (System_String_o *)v202;
  sub_B0D840((BattleServantConfConponent_o *)&v194->m_Items[1], v202, v196, v197, v198, v199, v200, v201);
  v33 = (struct System_Int32_array *)StringLiteral_17643/*"combine_fodder013"*/;
  if ( StringLiteral_17643/*"combine_fodder013"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17643/*"combine_fodder013"*/, v194->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v209 = (System_Int32_array **)StringLiteral_17643/*"combine_fodder013"*/;
  }
  else
  {
    v209 = 0LL;
  }
  if ( v194->max_length <= 2 )
    goto LABEL_134;
  v194->m_Items[2] = (System_String_o *)v209;
  sub_B0D840((BattleServantConfConponent_o *)&v194->m_Items[2], v209, v203, v204, v205, v206, v207, v208);
  v33 = (struct System_Int32_array *)StringLiteral_17644/*"combine_fodder014"*/;
  if ( StringLiteral_17644/*"combine_fodder014"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17644/*"combine_fodder014"*/, v194->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v216 = (System_Int32_array **)StringLiteral_17644/*"combine_fodder014"*/;
  }
  else
  {
    v216 = 0LL;
  }
  if ( v194->max_length <= 3 )
    goto LABEL_134;
  v194->m_Items[3] = (System_String_o *)v216;
  sub_B0D840((BattleServantConfConponent_o *)&v194->m_Items[3], v216, v210, v211, v212, v213, v214, v215);
  v33 = (struct System_Int32_array *)StringLiteral_17645/*"combine_fodder015"*/;
  if ( StringLiteral_17645/*"combine_fodder015"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B0D964(StringLiteral_17645/*"combine_fodder015"*/, v194->obj.klass->_1.element_class);
    if ( v33 )
    {
      v223 = (System_Int32_array **)StringLiteral_17645/*"combine_fodder015"*/;
      goto LABEL_132;
    }
LABEL_135:
    v249 = sub_B0D99C(v33);
    sub_B0D948(v249, 0LL);
  }
  v223 = 0LL;
LABEL_132:
  if ( v194->max_length <= 4 )
    goto LABEL_134;
  v194->m_Items[4] = (System_String_o *)v223;
  sub_B0D840((BattleServantConfConponent_o *)&v194->m_Items[4], v223, v217, v218, v219, v220, v221, v222);
  this->fields.itemAniName = v194;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemAniName,
    (System_Int32_array **)v194,
    v224,
    v225,
    v226,
    v227,
    v228,
    v229);
  v232 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                   v230,
                                                                                                   v231);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v232,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.materialList = (struct System_Collections_Generic_List_UserServantEntity__o *)v232;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.materialList,
    (System_Int32_array **)v232,
    v233,
    v234,
    v235,
    v236,
    v237,
    v238);
  v241 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v239, v240);
  System_Collections_Generic_List_int____ctor(
    v241,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.itemList = v241;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v241,
    v242,
    v243,
    v244,
    v245,
    v246,
    v247);
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
  __int64 v9; // x19
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_4214431 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__, v7);
    sub_B0D8A4(&CombineEffectComponent___c__DisplayClass33_0_TypeInfo, v8);
    byte_4214431 = 1;
  }
  v9 = sub_B0D974(CombineEffectComponent___c__DisplayClass33_0_TypeInfo, data, method);
  CombineEffectComponent___c__DisplayClass33_0___ctor((CombineEffectComponent___c__DisplayClass33_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = data;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)data, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B0D97C(v10);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v28, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t kind; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 *v32; // x8
  struct UnityEngine_GameObject_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  AssetLoader_LoadEndDataHandler_o *v43; // x21

  if ( (byte_4214430 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_CombineEffectComponent_EndLoadBg__, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B0D8A4(&SeManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_2815/*"Bg/10500"*/, v10);
    sub_B0D8A4(&StringLiteral_5890/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/, v11);
    sub_B0D8A4(&StringLiteral_5889/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/, v12);
    byte_4214430 = 1;
  }
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fsm,
    (System_Int32_array **)Component_WebViewObject,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  p_releaseAssetPath = &this->fields.releaseAssetPath;
  this->fields.releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.releaseAssetPath,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
        v32 = &StringLiteral_5890/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/;
        goto LABEL_11;
      }
    }
LABEL_20:
    sub_B0D97C(gameObject);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  v32 = &StringLiteral_5889/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/;
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                             (UnityEngine_Transform_o *)gameObject,
                                             (System_String_o *)*v32,
                                             0LL);
  if ( !gameObject )
    goto LABEL_20;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  this->fields.bgParentObject = v33;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bgParentObject,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  gameObject = (UnityEngine_GameObject_o *)*p_releaseAssetPath;
  if ( !*p_releaseAssetPath )
    goto LABEL_20;
  v40 = (System_String_o *)StringLiteral_2815/*"Bg/10500"*/;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2815/*"Bg/10500"*/,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42);
  AssetLoader_LoadEndDataHandler___ctor(v43, (Il2CppObject *)this, Method_CombineEffectComponent_EndLoadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v40, v43, 1, 0LL);
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *materialList; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v14; // x0
  BattleServantConfConponent_o *p_itemEntityList; // x19
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // t1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421443B & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__Clear__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    byte_421443B = 1;
  }
  memset(&v23, 0, sizeof(v23));
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v23.fields.current;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    materialList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.releaseAssetPath;
    if ( !materialList )
LABEL_17:
      sub_B0D97C(materialList);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      materialList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
  }
  materialList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.materialList;
  if ( !materialList )
    goto LABEL_17;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    materialList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UserServantEntity__Clear__);
  materialList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.itemList;
  if ( !materialList )
    goto LABEL_17;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)materialList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  itemEntityList = this->fields.itemEntityList;
  p_itemEntityList = (BattleServantConfConponent_o *)&this->fields.itemEntityList;
  v14 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)itemEntityList;
  if ( itemEntityList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v14,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ItemEntity__Clear__);
    p_itemEntityList->klass = 0LL;
    sub_B0D840(p_itemEntityList, 0LL, v17, v18, v19, v20, v21, v22);
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
  struct UnityEngine_GameObject_o *Value; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  float v57; // s0
  float v58; // s8
  System_String_o *v59; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *v62; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x27
  EventMissionProgressRequest_Argument_ProgressData_o *v64; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v65; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v66; // x28
  __int64 v67; // x1
  __int64 v68; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v77; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v79; // x23
  System_String_o *v80; // x25
  __int64 v81; // x1
  __int64 v82; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x24
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v91; // x20
  int32_t CardImageLimitCount; // w21
  struct UserServantEntity_o *baseSvtEntity; // x8
  ServantLimitImageMaster_o *v94; // x22
  __int64 v95; // x23
  __int64 v96; // x24
  int32_t ServantImageLimitSealAfter; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v99; // x20
  UnityEngine_Transform_o *v100; // x21
  int v101; // s0
  CombineEffectComponent_o *v104; // x0
  const MethodInfo *v105; // x5
  UserServantEntity_o *v106; // x8
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v109; // x20
  __int64 v110; // x1
  __int64 v111; // x2
  AssetLoader_LoadEndDataHandler_o *v112; // x21
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t size; // w9
  struct System_String_array *startAniName; // x8
  il2cpp_array_size_t v116; // w9
  System_Int32_array **v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  const MethodInfo *v124; // x1
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x8
  int32_t v126; // w8
  struct System_Collections_Generic_List_int__o *itemList; // x8
  struct System_String_array *itemAniName; // x9
  il2cpp_array_size_t v129; // w8
  System_Int32_array **v130; // x20
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  const MethodInfo *v137; // x1
  __int64 v138; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v139; // [xsp+8h] [xbp-D8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v140; // [xsp+10h] [xbp-D0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v141; // [xsp+18h] [xbp-C8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v142; // [xsp+20h] [xbp-C0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v143; // [xsp+28h] [xbp-B8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v144; // [xsp+30h] [xbp-B0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v145; // [xsp+38h] [xbp-A8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v146; // [xsp+40h] [xbp-A0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v147; // [xsp+48h] [xbp-98h]
  EventMissionProgressRequest_Argument_ProgressData_o *v148; // [xsp+50h] [xbp-90h]
  EventMissionProgressRequest_Argument_ProgressData_o *v149; // [xsp+58h] [xbp-88h]
  EventMissionProgressRequest_Argument_ProgressData_o *v150; // [xsp+60h] [xbp-80h]
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+68h] [xbp-78h]
  System_String_o *v152; // [xsp+78h] [xbp-68h]
  int32_t classCardId[2]; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4214433 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_CombineEffectComponent_setReverseCallback__, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&StringLiteral_2741/*"BaseCardNodeName"*/, v15);
    sub_B0D8A4(&StringLiteral_3902/*"CardScale"*/, v16);
    sub_B0D8A4(&StringLiteral_6666/*"FifthItemNodeName"*/, v17);
    sub_B0D8A4(&StringLiteral_6627/*"Feed20NodeName"*/, v18);
    sub_B0D8A4(&StringLiteral_6615/*"Feed08NodeName"*/, v19);
    sub_B0D8A4(&StringLiteral_6618/*"Feed11NodeName"*/, v20);
    sub_B0D8A4(&StringLiteral_6622/*"Feed15NodeName"*/, v21);
    sub_B0D8A4(&StringLiteral_2363/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v22);
    sub_B0D8A4(&StringLiteral_17621/*"combine_01"*/, v23);
    sub_B0D8A4(&StringLiteral_6617/*"Feed10NodeName"*/, v24);
    sub_B0D8A4(&StringLiteral_4169/*"CombineEffect"*/, v25);
    sub_B0D8A4(&StringLiteral_6800/*"FourthFeedNodeName"*/, v26);
    sub_B0D8A4(&StringLiteral_6619/*"Feed12NodeName"*/, v27);
    sub_B0D8A4(&StringLiteral_14453/*"ThrdItemNodeName"*/, v28);
    sub_B0D8A4(&StringLiteral_6665/*"FifthFeedNodeName"*/, v29);
    sub_B0D8A4(&StringLiteral_12679/*"SecItemNodeName"*/, v30);
    sub_B0D8A4(&StringLiteral_6623/*"Feed16NodeName"*/, v31);
    sub_B0D8A4(&StringLiteral_12652/*"ScndFeedNodeName"*/, v32);
    sub_B0D8A4(&StringLiteral_6834/*"FstFeedNodeName"*/, v33);
    sub_B0D8A4(&StringLiteral_6614/*"Feed07NodeName"*/, v34);
    sub_B0D8A4(&StringLiteral_14452/*"ThrdFeedNodeName"*/, v35);
    sub_B0D8A4(&StringLiteral_6613/*"Feed06NodeName"*/, v36);
    sub_B0D8A4(&StringLiteral_17646/*"combine_fodder02"*/, v37);
    sub_B0D8A4(&StringLiteral_12932/*"SkillItemNodeName"*/, v38);
    sub_B0D8A4(&StringLiteral_13080/*"StartAnimationName"*/, v39);
    sub_B0D8A4(&StringLiteral_6625/*"Feed18NodeName"*/, v40);
    sub_B0D8A4(&StringLiteral_6620/*"Feed13NodeName"*/, v41);
    sub_B0D8A4(&StringLiteral_1/*""*/, v42);
    sub_B0D8A4(&StringLiteral_6626/*"Feed19NodeName"*/, v43);
    sub_B0D8A4(&StringLiteral_6621/*"Feed14NodeName"*/, v44);
    sub_B0D8A4(&StringLiteral_6801/*"FourthItemNodeName"*/, v45);
    sub_B0D8A4(&StringLiteral_6616/*"Feed09NodeName"*/, v46);
    sub_B0D8A4(&StringLiteral_6624/*"Feed17NodeName"*/, v47);
    byte_4214433 = 1;
  }
  *(_QWORD *)classCardId = 0LL;
  p_fsm = &this->fields.fsm;
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_4169/*"CombineEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effect,
    (System_Int32_array **)Value,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmFloat(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_3902/*"CardScale"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  v57 = HutongGames_PlayMaker_FsmFloat__get_Value((HutongGames_PlayMaker_FsmFloat_o *)fsm, 0LL);
  fsm = *p_fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  v58 = v57;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_2741/*"BaseCardNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v59 = (System_String_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6834/*"FstFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_12652/*"ScndFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_14452/*"ThrdFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v62 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6800/*"FourthFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6665/*"FifthFeedNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v64 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6613/*"Feed06NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v65 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6614/*"Feed07NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v66 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6615/*"Feed08NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  item = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6616/*"Feed09NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v150 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6617/*"Feed10NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v149 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6618/*"Feed11NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v148 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6619/*"Feed12NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v147 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6620/*"Feed13NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v146 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6621/*"Feed14NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v145 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6622/*"Feed15NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v144 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6623/*"Feed16NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v143 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6624/*"Feed17NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v142 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6625/*"Feed18NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v141 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6626/*"Feed19NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v140 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6627/*"Feed20NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  v152 = v59;
  v139 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                  (HutongGames_PlayMaker_FsmString_o *)fsm,
                                                                  0LL);
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v67,
                                                                                                  v68);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v69 )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v60,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v61,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v62,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v63,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v64,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v65,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v66,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    item,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v150,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v149,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v148,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v147,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v146,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v145,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v144,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v143,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v142,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v141,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v140,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v69,
    v139,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.feedNameList = (struct System_Collections_Generic_List_string__o *)v69;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.feedNameList,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_12932/*"SkillItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v76 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_12679/*"SecItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v77 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_14453/*"ThrdItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v78 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6801/*"FourthItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v79 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6666/*"FifthItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  v80 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v81,
                                                                                                  v82);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v83,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v83 )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v83,
    v76,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v83,
    v77,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v83,
    v78,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v83,
    v79,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v83,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.feedItemNameList = (struct System_Collections_Generic_List_string__o *)v83;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.feedItemNameList,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_137;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v152, 1, 0LL);
  if ( !fsm )
    goto LABEL_137;
  v91 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.baseSvtEntity;
  if ( !fsm )
    goto LABEL_137;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)fsm, 0, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_137;
  v94 = (ServantLimitImageMaster_o *)fsm;
  v96 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.currentCryptoKey;
  v95 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v154.fields.currentCryptoKey = v96;
  *(_QWORD *)&v154.fields.fakeValue = v95;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v154, 0LL);
  if ( !v94 )
    goto LABEL_137;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v94,
                                 (int32_t)fsm,
                                 CardImageLimitCount,
                                 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v91, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_24036516(
                            gameObject,
                            this->fields.baseSvtEntity,
                            ServantImageLimitSealAfter,
                            10,
                            0LL,
                            0,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  v99 = (UnityEngine_Component_o *)fsm;
  v100 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  *(UnityEngine_Vector3_o *)&v101 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v100 )
    goto LABEL_137;
  UnityEngine_Transform__set_localPosition(v100, *(UnityEngine_Vector3_o *)&v101, 0LL);
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v99, 0LL);
  if ( !fsm )
    goto LABEL_137;
  v155.fields.x = v58;
  v155.fields.y = v58;
  v155.fields.z = v58;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v155, 0LL);
  CombineEffectComponent__getDispInfo(
    v104,
    &classCardId[1],
    classCardId,
    this->fields.baseSvtId,
    this->fields.baseSvtlimitCnt,
    v105);
  fsm = this->fields.kind == 3
      ? (PlayMakerFSM_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_2363/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, 0LL)
      : (PlayMakerFSM_o *)(unsigned int)classCardId[0];
  v106 = this->fields.baseSvtEntity;
  this->fields.baseClassCardId = (int)fsm;
  if ( !v106 )
    goto LABEL_137;
  if ( UserServantEntity__isExceeded(v106, 0LL) )
  {
    fsm = (PlayMakerFSM_o *)this->fields.baseSvtEntity;
    if ( fsm )
    {
      FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)fsm, 0LL);
      fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
      if ( fsm )
      {
        ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                (DesignCardManager_o *)fsm,
                                this->fields.baseClassCardId,
                                FrameCardPrefix,
                                0LL);
        goto LABEL_112;
      }
    }
LABEL_137:
    sub_B0D97C(fsm);
  }
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !fsm )
    goto LABEL_137;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)fsm,
                          this->fields.baseClassCardId,
                          classCardId[1],
                          0LL);
LABEL_112:
  v109 = (EventMissionProgressRequest_Argument_ProgressData_o *)ExceedFrameCardPath;
  fsm = (PlayMakerFSM_o *)this->fields.releaseAssetPath;
  if ( !fsm )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)fsm,
    v109,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  v112 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v110, v111);
  AssetLoader_LoadEndDataHandler___ctor(
    v112,
    (Il2CppObject *)this,
    Method_CombineEffectComponent_setReverseCallback__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)AssetManager__loadAssetStorage((System_String_o *)v109, v112, 1, 0LL);
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
      v116 = size - 1;
      if ( v116 >= startAniName->max_length )
        goto LABEL_138;
      fsm = *p_fsm;
      if ( !*p_fsm )
        goto LABEL_137;
      v117 = (System_Int32_array **)startAniName->m_Items[v116];
      fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
      if ( !fsm )
        goto LABEL_137;
      fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                                0LL);
      if ( !fsm )
        goto LABEL_137;
      fsm[1].klass = (PlayMakerFSM_c *)v117;
      sub_B0D840((BattleServantConfConponent_o *)&fsm[1], v117, v118, v119, v120, v121, v122, v123);
      CombineEffectComponent__setServantFeed(this, v124);
      break;
    case 1:
      itemEntityList = this->fields.itemEntityList;
      if ( itemEntityList )
      {
        v126 = itemEntityList->fields._size;
        if ( v126 > 0 )
          goto LABEL_128;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_137;
      v126 = itemList->fields._size;
LABEL_128:
      itemAniName = this->fields.itemAniName;
      this->fields.itemMaterialCnt = v126;
      if ( !itemAniName )
        goto LABEL_137;
      v129 = v126 - 1;
      if ( v129 >= itemAniName->max_length )
      {
LABEL_138:
        v138 = sub_B0D9A8(fsm);
        sub_B0D948(v138, 0LL);
      }
      fsm = *p_fsm;
      if ( !*p_fsm )
        goto LABEL_137;
      v130 = (System_Int32_array **)itemAniName->m_Items[v129];
LABEL_134:
      fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
      if ( !fsm )
        goto LABEL_137;
      fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                (System_String_o *)StringLiteral_13080/*"StartAnimationName"*/,
                                0LL);
      if ( !fsm )
        goto LABEL_137;
      fsm[1].klass = (PlayMakerFSM_c *)v130;
      sub_B0D840((BattleServantConfConponent_o *)&fsm[1], v130, v131, v132, v133, v134, v135, v136);
      CombineEffectComponent__setItemFeed(this, v137);
      break;
    case 2:
      fsm = *p_fsm;
      if ( !*p_fsm )
        goto LABEL_137;
      v130 = (System_Int32_array **)StringLiteral_17646/*"combine_fodder02"*/;
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
  __int64 v11; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_421442F & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_421442F = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 2;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B0D97C(v11);
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v14;
  sub_B0D840((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)list, v16, v17, v18, v19, v20, v21);
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
  struct System_Collections_Generic_List_string__o *feedNameList; // x22
  __int64 cntIndex; // x23
  UnityEngine_Transform_o *NodeFromName; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  System_String_o **v16; // x8
  UnityEngine_Shader_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Material_o *v20; // x21
  UnityEngine_Texture_o *v21; // x22
  const MethodInfo *v22; // x1
  int32_t v23; // w8
  int v24; // w9

  if ( (byte_4214436 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_15060/*"Unlit/Transparent Colored"*/, v8);
    sub_B0D8A4(&StringLiteral_12374/*"START_ANIMATION"*/, v9);
    sub_B0D8A4(&StringLiteral_4534/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v10);
    byte_4214436 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    goto LABEL_18;
  effect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effect, 0LL);
  feedNameList = this->fields.feedNameList;
  if ( !feedNameList )
    goto LABEL_18;
  cntIndex = this->fields.cntIndex;
  if ( feedNameList->fields._size <= (unsigned int)cntIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  NodeFromName = TransformHelper__getNodeFromName(
                   (UnityEngine_Transform_o *)effect,
                   feedNameList->fields._items->m_Items[cntIndex],
                   1,
                   0LL);
  effect = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !effect )
    goto LABEL_18;
  DesignCardManager__SetupCardImage(
    (DesignCardManager_o *)effect,
    data,
    NodeFromName,
    this->fields.feedClassCardId,
    0LL);
  if ( !NodeFromName )
    goto LABEL_18;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)NodeFromName,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v16 = (System_String_o **)(this->fields.cardType == 6 ? &StringLiteral_4534/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15060/*"Unlit/Transparent Colored"*/);
  v17 = UnityEngine_Shader__Find(*v16, 0LL);
  v20 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v18, v19);
  UnityEngine_Material___ctor(v20, v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_18;
  v21 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._2_GetHashCode.method)(
                                   Component_WebViewObject,
                                   Component_WebViewObject->klass[1].vtable._3_ToString.methodPtr);
  effect = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
                                         Component_WebViewObject,
                                         v20,
                                         Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !v20 )
    goto LABEL_18;
  UnityEngine_Material__set_mainTexture(v20, v21, 0LL);
  v23 = this->fields.cntIndex + 1;
  v24 = this->fields.materialCnt - 1;
  this->fields.cntIndex = v23;
  if ( v23 > v24 )
  {
    effect = (UnityEngine_GameObject_o *)this->fields.fsm;
    this->fields.cntIndex = 0;
    if ( effect )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12374/*"START_ANIMATION"*/, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(effect);
  }
  CombineEffectComponent__setServantFeed(this, v22);
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
  __int64 v12; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w0
  struct System_Collections_Generic_List_UserServantEntity__o **p_materialList; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_421442C & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_421442C = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = combineKind;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    *(System_String_array ***)&combineKind,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B0D97C(v12);
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(baseSvtData->fields.limitCount, 0LL);
  this->fields.materialList = list;
  p_materialList = &this->fields.materialList;
  *((_DWORD *)p_materialList - 1) = v15;
  sub_B0D840((BattleServantConfConponent_o *)p_materialList, (System_Int32_array **)list, v17, v18, v19, v20, v21, v22);
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
  __int64 v12; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  System_Collections_Generic_List_int__o *itemList; // x8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_421442D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, baseSvtData);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_421442D = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_B0D840(
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
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v14;
  *(_QWORD *)&v22.fields.fakeValue = v13;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(baseSvtData->fields.limitCount, 0LL);
  itemList = this->fields.itemList;
  this->fields.baseSvtlimitCnt = v12;
  if ( !itemList )
LABEL_9:
    sub_B0D97C(v12);
  System_Collections_Generic_List_int___Clear(
    itemList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  this->fields.itemEntityList = list;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemEntityList,
    (System_Int32_array **)list,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo_24307764(
        CombineEffectComponent_o *this,
        UserServantEntity_o *baseSvtData,
        System_Collections_Generic_List_int__o *list,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  int32_t v14; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_421442E & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_421442E = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B0D97C(v11);
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v14;
  sub_B0D840((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)list, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_421443E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5499/*"END_FADE"*/, v3);
    byte_421443E = 1;
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
    UnityEngine_Object__DestroyImmediate_34935488(v6, 0LL);
    *p_effect = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v7, v8, v9, v10, v11, v12);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5499/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent___fadeIn_b__34_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_421443D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5499/*"END_FADE"*/, method);
    byte_421443D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5499/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent__endAnimation(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_421443A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_CombineEffectComponent__endAnimation_b__42_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_421443A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineEffectComponent__endAnimation_b__42_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall CombineEffectComponent__fadeIn(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4214432 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_CombineEffectComponent__fadeIn_b__34_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4214432 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineEffectComponent__fadeIn_b__34_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v11, 0LL);
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
  WarEntity_o *Entity; // x24
  System_String_o **v18; // x8

  if ( (byte_4214439 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, rarity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&StringLiteral_2363/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v14);
    sub_B0D8A4(&StringLiteral_2364/*"BACKSIDE_SVT_IMAGE_ID"*/, v15);
    byte_4214439 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   svtId,
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL)) == 0LL
    || (*rarity = *((_DWORD *)Instance + 6), !Entity) )
  {
    sub_B0D97C(Instance);
  }
  this->fields.cardType = *(&Entity->fields.startType + 1);
  if ( *(&Entity->fields.startType + 1) == 6 )
    v18 = (System_String_o **)&StringLiteral_2363/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/;
  else
    v18 = (System_String_o **)&StringLiteral_2364/*"BACKSIDE_SVT_IMAGE_ID"*/;
  *backCardImgId = ConstantMaster__getValue(*v18, 0LL);
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
  DataManager_o *Instance; // x0
  ServantEntity_o *Entity; // x23
  ServantLimitEntity_o *v17; // x21
  WarEntity_o *v18; // x22

  if ( (byte_4214438 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, rarity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4214438 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  v17 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Entity || !Instance )
    goto LABEL_15;
  v18 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          Entity->fields.classId,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  Instance = (DataManager_o *)ServantEntity__GetOverwriteClassImageId(Entity, 0LL);
  if ( !(_DWORD)Instance )
  {
    if ( !v18 )
      goto LABEL_15;
    Instance = (DataManager_o *)LODWORD(v18->fields.longName);
  }
  *classCardId = (int)Instance;
  if ( !v17 )
LABEL_15:
    sub_B0D97C(Instance);
  *rarity = v17->fields.rarity;
}


void __fastcall CombineEffectComponent__setItemFeed(CombineEffectComponent_o *this, const MethodInfo *method)
{
  CombineEffectComponent_o *v2; // x19
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
  CombineEffectComponent_o **p_itemNode; // x20
  ItemEntity_o *v14; // x21
  struct System_Collections_Generic_List_string__o *feedItemNameList; // x26
  System_Int32_array **NodeFromName; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UISprite_o *v23; // x22
  int32_t ImageId; // w21
  int32_t v25; // w21
  struct System_Collections_Generic_List_int__o *itemList; // x21
  unsigned __int64 v27; // x23
  CombineEffectComponent_o **v28; // x20
  int32_t v29; // w21
  struct System_Collections_Generic_List_string__o *v30; // x26
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  WebViewObject_o *Component_WebViewObject; // x22

  v2 = this;
  if ( (byte_4214437 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    this = (CombineEffectComponent_o *)sub_B0D8A4(&StringLiteral_12374/*"START_ANIMATION"*/, v9);
    byte_4214437 = 1;
  }
  itemEntityList = v2->fields.itemEntityList;
  if ( itemEntityList )
  {
    size = itemEntityList->fields._size;
    if ( size >= 1 )
    {
      v12 = 0;
      p_itemNode = (CombineEffectComponent_o **)&v2->fields.itemNode;
      while ( 1 )
      {
        if ( size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = (CombineEffectComponent_o *)v2->fields.effect;
        if ( !this )
          goto LABEL_43;
        v14 = itemEntityList->fields._items->m_Items[v12];
        this = (CombineEffectComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        feedItemNameList = v2->fields.feedItemNameList;
        if ( !feedItemNameList )
          goto LABEL_43;
        if ( feedItemNameList->fields._size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        NodeFromName = (System_Int32_array **)TransformHelper__getNodeFromName(
                                                (UnityEngine_Transform_o *)this,
                                                feedItemNameList->fields._items->m_Items[v12],
                                                1,
                                                0LL);
        *p_itemNode = (CombineEffectComponent_o *)NodeFromName;
        sub_B0D840((BattleServantConfConponent_o *)&v2->fields.itemNode, NodeFromName, v17, v18, v19, v20, v21, v22);
        this = *p_itemNode;
        if ( !*p_itemNode )
          goto LABEL_43;
        this = (CombineEffectComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !v14 )
          goto LABEL_43;
        v23 = (UISprite_o *)this;
        if ( v14->fields.type == 29 )
        {
          ImageId = ItemEntity__GetImageId(v14, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          this = (CombineEffectComponent_o *)AtlasManager__SetCoin(v23, ImageId, 0LL);
        }
        else
        {
          v25 = v14->fields.imageId;
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          this = (CombineEffectComponent_o *)AtlasManager__SetItem(v23, v25, 0LL);
        }
        itemEntityList = v2->fields.itemEntityList;
        if ( !itemEntityList )
          goto LABEL_43;
        size = itemEntityList->fields._size;
        if ( (int)++v12 >= size )
          goto LABEL_41;
      }
    }
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_43;
  v27 = 0LL;
  v28 = (CombineEffectComponent_o **)&v2->fields.itemNode;
  while ( (__int64)v27 < itemList->fields._size )
  {
    if ( v27 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (CombineEffectComponent_o *)v2->fields.effect;
    if ( this )
    {
      v29 = itemList->fields._items->m_Items[v27 + 1];
      this = (CombineEffectComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      v30 = v2->fields.feedItemNameList;
      if ( v30 )
      {
        if ( v27 >= (unsigned int)v30->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v31 = (System_Int32_array **)TransformHelper__getNodeFromName(
                                       (UnityEngine_Transform_o *)this,
                                       v30->fields._items->m_Items[v27],
                                       1,
                                       0LL);
        *v28 = (CombineEffectComponent_o *)v31;
        sub_B0D840((BattleServantConfConponent_o *)&v2->fields.itemNode, v31, v32, v33, v34, v35, v36, v37);
        this = *v28;
        if ( *v28 )
        {
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          this = (CombineEffectComponent_o *)AtlasManager__SetItem((UISprite_o *)Component_WebViewObject, v29, 0LL);
          itemList = v2->fields.itemList;
          ++v27;
          if ( itemList )
            continue;
        }
      }
    }
    goto LABEL_43;
  }
LABEL_41:
  this = (CombineEffectComponent_o *)v2->fields.fsm;
  if ( !this )
LABEL_43:
    sub_B0D97C(this);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12374/*"START_ANIMATION"*/, 0LL);
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

  if ( (byte_4214434 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, data);
    sub_B0D8A4(&StringLiteral_11528/*"ReverseCardNodeName"*/, v5);
    byte_4214434 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11528/*"ReverseCardNodeName"*/,
                                  0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL),
        fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        !this->fields.effect)
    || (v8 = (DesignCardManager_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL),
        fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, Value, 1, 0LL),
        !v8) )
  {
    sub_B0D97C(fsm);
  }
  DesignCardManager__SetupCardImage(v8, data, (UnityEngine_Transform_o *)fsm, this->fields.baseClassCardId, 0LL);
}


void __fastcall CombineEffectComponent__setServantFeed(CombineEffectComponent_o *this, const MethodInfo *method)
{
  CombineEffectComponent_o *v2; // x19
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
  struct System_Collections_Generic_List_UserServantEntity__o *v15; // x21
  __int64 v16; // x22
  int32_t v17; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  struct System_Collections_Generic_List_UserServantEntity__o *v19; // x22
  __int64 v20; // x23
  int32_t v21; // w21
  bool isExceeded; // w22
  const MethodInfo *v23; // x5
  int32_t v24; // w20
  struct System_Collections_Generic_List_UserServantEntity__o *v25; // x20
  __int64 v26; // x21
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  AssetLoader_LoadEndDataHandler_o *v32; // x21
  int32_t backCardImgId[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v2 = this;
  if ( (byte_4214435 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_CombineEffectComponent_SetFeedCallback__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v5);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v8);
    this = (CombineEffectComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4214435 = 1;
  }
  *(_QWORD *)backCardImgId = 0LL;
  materialList = v2->fields.materialList;
  if ( !materialList )
    goto LABEL_32;
  cntIndex = v2->fields.cntIndex;
  if ( materialList->fields._size <= (unsigned int)cntIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  *(_QWORD *)&v34.fields.currentCryptoKey = v14;
  *(_QWORD *)&v34.fields.fakeValue = v13;
  this = (CombineEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v34, 0LL);
  v15 = v2->fields.materialList;
  if ( !v15 )
    goto LABEL_32;
  v16 = v2->fields.cntIndex;
  v17 = (int)this;
  if ( v15->fields._size <= (unsigned int)v16 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v15->fields._items->m_Items[v16];
  if ( !v18 )
    goto LABEL_32;
  this = (CombineEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18[6], 0LL);
  v19 = v2->fields.materialList;
  if ( !v19 )
    goto LABEL_32;
  v20 = v2->fields.cntIndex;
  v21 = (int)this;
  if ( v19->fields._size <= (unsigned int)v20 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (CombineEffectComponent_o *)v19->fields._items->m_Items[v20];
  if ( !this )
    goto LABEL_32;
  isExceeded = UserServantEntity__isExceeded((UserServantEntity_o *)this, 0LL);
  CombineEffectComponent__getCardBackImg(v2, &backCardImgId[1], backCardImgId, v17, v21, v23);
  v24 = backCardImgId[0];
  v2->fields.feedClassCardId = backCardImgId[0];
  if ( isExceeded )
  {
    v25 = v2->fields.materialList;
    if ( v25 )
    {
      v26 = v2->fields.cntIndex;
      if ( v25->fields._size <= (unsigned int)v26 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (CombineEffectComponent_o *)v25->fields._items->m_Items[v26];
      if ( this )
      {
        FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)this, 0LL);
        this = (CombineEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( this )
        {
          ExceedFrameCardPath = DesignCardManager__GetExceedFrameCardPath(
                                  (DesignCardManager_o *)this,
                                  v2->fields.feedClassCardId,
                                  FrameCardPrefix,
                                  0LL);
          goto LABEL_27;
        }
      }
    }
LABEL_32:
    sub_B0D97C(this);
  }
  this = (CombineEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !this )
    goto LABEL_32;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath((DesignCardManager_o *)this, v24, backCardImgId[1], 0LL);
LABEL_27:
  v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)ExceedFrameCardPath;
  this = (CombineEffectComponent_o *)v2->fields.releaseAssetPath;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    v29,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(v32, (Il2CppObject *)v2, Method_CombineEffectComponent_SetFeedCallback__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v29, v32, 1, 0LL);
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
  UnityEngine_GameObject_o *v9; // x20
  struct CombineEffectComponent_o *_4__this; // x8
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_Transform_o *transform; // x21
  int v13; // s0
  UnityEngine_Transform_o *v17; // x21
  int v18; // s0
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  struct CombineEffectComponent_o *v25; // x8

  if ( (byte_4211E54 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_5499/*"END_FADE"*/, v5);
    sub_B0D8A4(&StringLiteral_16744/*"bg"*/, v6);
    byte_4211E54 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_16744/*"bg"*/,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  data = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                          Object_WarBoardWaitTimeSetting,
                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !data )
    goto LABEL_17;
  v9 = (UnityEngine_GameObject_o *)data;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  v11 = (UnityEngine_Transform_o *)data;
  data = (AssetData_o *)_4__this->fields.bgParentObject;
  if ( !data )
    goto LABEL_17;
  data = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  if ( !v11 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)data, 0LL);
  transform = UnityEngine_GameObject__get_transform(v9, 0LL);
  *(UnityEngine_Quaternion_o *)&v13 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v13, 0LL);
  v17 = UnityEngine_GameObject__get_transform(v9, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v17
    || (UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v18, 0LL),
        v21 = UnityEngine_GameObject__get_transform(v9, 0LL),
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL),
        !v21)
    || (UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL),
        (v25 = this->fields.__4__this) == 0LL)
    || (data = (AssetData_o *)v25->fields.fsm) == 0LL )
  {
LABEL_17:
    sub_B0D97C(data);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5499/*"END_FADE"*/, 0LL);
}