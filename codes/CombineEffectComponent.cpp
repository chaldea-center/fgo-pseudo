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
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  il2cpp_array_size_t max_length; // w8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct System_String_array *v48; // x20
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x1
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_Int32_array **v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_Int32_array **v126; // x1
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x1
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_Int32_array **v140; // x1
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x1
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x1
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x1
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  System_Int32_array **v168; // x1
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  System_Int32_array **v175; // x1
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Int32_array **v182; // x1
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  struct System_String_array *v195; // x20
  System_Int32_array **v196; // x1
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x1
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_Int32_array **v210; // x1
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  System_Int32_array **v217; // x1
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  System_Int32_array **v224; // x1
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v231; // x20
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Collections_Generic_List_int__o *v238; // x20
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  __int64 v245; // x0
  __int64 v246; // x0

  if ( (byte_4186198 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v6);
    sub_B2C35C(&string___TypeInfo, v7);
    sub_B2C35C(&StringLiteral_17572/*"combine_08"*/, v8);
    sub_B2C35C(&StringLiteral_17573/*"combine_09"*/, v9);
    sub_B2C35C(&StringLiteral_17580/*"combine_16"*/, v10);
    sub_B2C35C(&StringLiteral_17583/*"combine_19"*/, v11);
    sub_B2C35C(&StringLiteral_17584/*"combine_20"*/, v12);
    sub_B2C35C(&StringLiteral_17571/*"combine_07"*/, v13);
    sub_B2C35C(&StringLiteral_17565/*"combine_01"*/, v14);
    sub_B2C35C(&StringLiteral_17566/*"combine_02"*/, v15);
    sub_B2C35C(&StringLiteral_17578/*"combine_14"*/, v16);
    sub_B2C35C(&StringLiteral_17574/*"combine_10"*/, v17);
    sub_B2C35C(&StringLiteral_17586/*"combine_fodder012"*/, v18);
    sub_B2C35C(&StringLiteral_17585/*"combine_fodder01"*/, v19);
    sub_B2C35C(&StringLiteral_17575/*"combine_11"*/, v20);
    sub_B2C35C(&StringLiteral_17576/*"combine_12"*/, v21);
    sub_B2C35C(&StringLiteral_17588/*"combine_fodder014"*/, v22);
    sub_B2C35C(&StringLiteral_17587/*"combine_fodder013"*/, v23);
    sub_B2C35C(&StringLiteral_17569/*"combine_05"*/, v24);
    sub_B2C35C(&StringLiteral_17581/*"combine_17"*/, v25);
    sub_B2C35C(&StringLiteral_17589/*"combine_fodder015"*/, v26);
    sub_B2C35C(&StringLiteral_17579/*"combine_15"*/, v27);
    sub_B2C35C(&StringLiteral_17568/*"combine_04"*/, v28);
    sub_B2C35C(&StringLiteral_17567/*"combine_03"*/, v29);
    sub_B2C35C(&StringLiteral_17570/*"combine_06"*/, v30);
    sub_B2C35C(&StringLiteral_17577/*"combine_13"*/, v31);
    sub_B2C35C(&StringLiteral_17582/*"combine_18"*/, v32);
    byte_4186198 = 1;
  }
  v33 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v33 )
    goto LABEL_136;
  max_length = v33->max_length;
  if ( !max_length || (v33->m_Items[1] = 512, max_length == 1) )
  {
LABEL_134:
    v245 = sub_B2C460(v33);
    sub_B2C400(v245, 0LL);
  }
  v33->m_Items[2] = 875;
  this->fields.cardTextureSize = v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cardTextureSize,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v33 = (struct System_Int32_array *)sub_B2C374(string___TypeInfo, 20LL);
  if ( !v33 )
    goto LABEL_136;
  v48 = (struct System_String_array *)v33;
  v33 = (struct System_Int32_array *)StringLiteral_17565/*"combine_01"*/;
  if ( StringLiteral_17565/*"combine_01"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17565/*"combine_01"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v49 = (System_Int32_array **)StringLiteral_17565/*"combine_01"*/;
  }
  else
  {
    v49 = 0LL;
  }
  if ( !v48->max_length )
    goto LABEL_134;
  v48->m_Items[0] = (System_String_o *)v49;
  sub_B2C2F8((BattleServantConfConponent_o *)v48->m_Items, v49, v42, v43, v44, v45, v46, v47);
  v33 = (struct System_Int32_array *)StringLiteral_17566/*"combine_02"*/;
  if ( StringLiteral_17566/*"combine_02"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17566/*"combine_02"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v56 = (System_Int32_array **)StringLiteral_17566/*"combine_02"*/;
  }
  else
  {
    v56 = 0LL;
  }
  if ( v48->max_length <= 1 )
    goto LABEL_134;
  v48->m_Items[1] = (System_String_o *)v56;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[1], v56, v50, v51, v52, v53, v54, v55);
  v33 = (struct System_Int32_array *)StringLiteral_17567/*"combine_03"*/;
  if ( StringLiteral_17567/*"combine_03"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17567/*"combine_03"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v63 = (System_Int32_array **)StringLiteral_17567/*"combine_03"*/;
  }
  else
  {
    v63 = 0LL;
  }
  if ( v48->max_length <= 2 )
    goto LABEL_134;
  v48->m_Items[2] = (System_String_o *)v63;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[2], v63, v57, v58, v59, v60, v61, v62);
  v33 = (struct System_Int32_array *)StringLiteral_17568/*"combine_04"*/;
  if ( StringLiteral_17568/*"combine_04"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17568/*"combine_04"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v70 = (System_Int32_array **)StringLiteral_17568/*"combine_04"*/;
  }
  else
  {
    v70 = 0LL;
  }
  if ( v48->max_length <= 3 )
    goto LABEL_134;
  v48->m_Items[3] = (System_String_o *)v70;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[3], v70, v64, v65, v66, v67, v68, v69);
  v33 = (struct System_Int32_array *)StringLiteral_17569/*"combine_05"*/;
  if ( StringLiteral_17569/*"combine_05"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17569/*"combine_05"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v77 = (System_Int32_array **)StringLiteral_17569/*"combine_05"*/;
  }
  else
  {
    v77 = 0LL;
  }
  if ( v48->max_length <= 4 )
    goto LABEL_134;
  v48->m_Items[4] = (System_String_o *)v77;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[4], v77, v71, v72, v73, v74, v75, v76);
  v33 = (struct System_Int32_array *)StringLiteral_17570/*"combine_06"*/;
  if ( StringLiteral_17570/*"combine_06"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17570/*"combine_06"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v84 = (System_Int32_array **)StringLiteral_17570/*"combine_06"*/;
  }
  else
  {
    v84 = 0LL;
  }
  if ( v48->max_length <= 5 )
    goto LABEL_134;
  v48->m_Items[5] = (System_String_o *)v84;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[5], v84, v78, v79, v80, v81, v82, v83);
  v33 = (struct System_Int32_array *)StringLiteral_17571/*"combine_07"*/;
  if ( StringLiteral_17571/*"combine_07"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17571/*"combine_07"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v91 = (System_Int32_array **)StringLiteral_17571/*"combine_07"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v48->max_length <= 6 )
    goto LABEL_134;
  v48->m_Items[6] = (System_String_o *)v91;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[6], v91, v85, v86, v87, v88, v89, v90);
  v33 = (struct System_Int32_array *)StringLiteral_17572/*"combine_08"*/;
  if ( StringLiteral_17572/*"combine_08"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17572/*"combine_08"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v98 = (System_Int32_array **)StringLiteral_17572/*"combine_08"*/;
  }
  else
  {
    v98 = 0LL;
  }
  if ( v48->max_length <= 7 )
    goto LABEL_134;
  v48->m_Items[7] = (System_String_o *)v98;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[7], v98, v92, v93, v94, v95, v96, v97);
  v33 = (struct System_Int32_array *)StringLiteral_17573/*"combine_09"*/;
  if ( StringLiteral_17573/*"combine_09"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17573/*"combine_09"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v105 = (System_Int32_array **)StringLiteral_17573/*"combine_09"*/;
  }
  else
  {
    v105 = 0LL;
  }
  if ( v48->max_length <= 8 )
    goto LABEL_134;
  v48->m_Items[8] = (System_String_o *)v105;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[8], v105, v99, v100, v101, v102, v103, v104);
  v33 = (struct System_Int32_array *)StringLiteral_17574/*"combine_10"*/;
  if ( StringLiteral_17574/*"combine_10"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17574/*"combine_10"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v112 = (System_Int32_array **)StringLiteral_17574/*"combine_10"*/;
  }
  else
  {
    v112 = 0LL;
  }
  if ( v48->max_length <= 9 )
    goto LABEL_134;
  v48->m_Items[9] = (System_String_o *)v112;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[9], v112, v106, v107, v108, v109, v110, v111);
  v33 = (struct System_Int32_array *)StringLiteral_17575/*"combine_11"*/;
  if ( StringLiteral_17575/*"combine_11"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17575/*"combine_11"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v119 = (System_Int32_array **)StringLiteral_17575/*"combine_11"*/;
  }
  else
  {
    v119 = 0LL;
  }
  if ( v48->max_length <= 0xA )
    goto LABEL_134;
  v48->m_Items[10] = (System_String_o *)v119;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[10], v119, v113, v114, v115, v116, v117, v118);
  v33 = (struct System_Int32_array *)StringLiteral_17576/*"combine_12"*/;
  if ( StringLiteral_17576/*"combine_12"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17576/*"combine_12"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v126 = (System_Int32_array **)StringLiteral_17576/*"combine_12"*/;
  }
  else
  {
    v126 = 0LL;
  }
  if ( v48->max_length <= 0xB )
    goto LABEL_134;
  v48->m_Items[11] = (System_String_o *)v126;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[11], v126, v120, v121, v122, v123, v124, v125);
  v33 = (struct System_Int32_array *)StringLiteral_17577/*"combine_13"*/;
  if ( StringLiteral_17577/*"combine_13"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17577/*"combine_13"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v133 = (System_Int32_array **)StringLiteral_17577/*"combine_13"*/;
  }
  else
  {
    v133 = 0LL;
  }
  if ( v48->max_length <= 0xC )
    goto LABEL_134;
  v48->m_Items[12] = (System_String_o *)v133;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[12], v133, v127, v128, v129, v130, v131, v132);
  v33 = (struct System_Int32_array *)StringLiteral_17578/*"combine_14"*/;
  if ( StringLiteral_17578/*"combine_14"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17578/*"combine_14"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v140 = (System_Int32_array **)StringLiteral_17578/*"combine_14"*/;
  }
  else
  {
    v140 = 0LL;
  }
  if ( v48->max_length <= 0xD )
    goto LABEL_134;
  v48->m_Items[13] = (System_String_o *)v140;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[13], v140, v134, v135, v136, v137, v138, v139);
  v33 = (struct System_Int32_array *)StringLiteral_17579/*"combine_15"*/;
  if ( StringLiteral_17579/*"combine_15"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17579/*"combine_15"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v147 = (System_Int32_array **)StringLiteral_17579/*"combine_15"*/;
  }
  else
  {
    v147 = 0LL;
  }
  if ( v48->max_length <= 0xE )
    goto LABEL_134;
  v48->m_Items[14] = (System_String_o *)v147;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[14], v147, v141, v142, v143, v144, v145, v146);
  v33 = (struct System_Int32_array *)StringLiteral_17580/*"combine_16"*/;
  if ( StringLiteral_17580/*"combine_16"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17580/*"combine_16"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v154 = (System_Int32_array **)StringLiteral_17580/*"combine_16"*/;
  }
  else
  {
    v154 = 0LL;
  }
  if ( v48->max_length <= 0xF )
    goto LABEL_134;
  v48->m_Items[15] = (System_String_o *)v154;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[15], v154, v148, v149, v150, v151, v152, v153);
  v33 = (struct System_Int32_array *)StringLiteral_17581/*"combine_17"*/;
  if ( StringLiteral_17581/*"combine_17"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17581/*"combine_17"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v161 = (System_Int32_array **)StringLiteral_17581/*"combine_17"*/;
  }
  else
  {
    v161 = 0LL;
  }
  if ( v48->max_length <= 0x10 )
    goto LABEL_134;
  v48->m_Items[16] = (System_String_o *)v161;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[16], v161, v155, v156, v157, v158, v159, v160);
  v33 = (struct System_Int32_array *)StringLiteral_17582/*"combine_18"*/;
  if ( StringLiteral_17582/*"combine_18"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17582/*"combine_18"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v168 = (System_Int32_array **)StringLiteral_17582/*"combine_18"*/;
  }
  else
  {
    v168 = 0LL;
  }
  if ( v48->max_length <= 0x11 )
    goto LABEL_134;
  v48->m_Items[17] = (System_String_o *)v168;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[17], v168, v162, v163, v164, v165, v166, v167);
  v33 = (struct System_Int32_array *)StringLiteral_17583/*"combine_19"*/;
  if ( StringLiteral_17583/*"combine_19"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17583/*"combine_19"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v175 = (System_Int32_array **)StringLiteral_17583/*"combine_19"*/;
  }
  else
  {
    v175 = 0LL;
  }
  if ( v48->max_length <= 0x12 )
    goto LABEL_134;
  v48->m_Items[18] = (System_String_o *)v175;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[18], v175, v169, v170, v171, v172, v173, v174);
  v33 = (struct System_Int32_array *)StringLiteral_17584/*"combine_20"*/;
  if ( StringLiteral_17584/*"combine_20"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17584/*"combine_20"*/, v48->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v182 = (System_Int32_array **)StringLiteral_17584/*"combine_20"*/;
  }
  else
  {
    v182 = 0LL;
  }
  if ( v48->max_length <= 0x13 )
    goto LABEL_134;
  v48->m_Items[19] = (System_String_o *)v182;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->m_Items[19], v182, v176, v177, v178, v179, v180, v181);
  this->fields.startAniName = v48;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.startAniName,
    (System_Int32_array **)v48,
    v183,
    v184,
    v185,
    v186,
    v187,
    v188);
  v33 = (struct System_Int32_array *)sub_B2C374(string___TypeInfo, 5LL);
  if ( !v33 )
LABEL_136:
    sub_B2C434(v33, v34);
  v195 = (struct System_String_array *)v33;
  v33 = (struct System_Int32_array *)StringLiteral_17585/*"combine_fodder01"*/;
  if ( StringLiteral_17585/*"combine_fodder01"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17585/*"combine_fodder01"*/, v195->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v196 = (System_Int32_array **)StringLiteral_17585/*"combine_fodder01"*/;
  }
  else
  {
    v196 = 0LL;
  }
  if ( !v195->max_length )
    goto LABEL_134;
  v195->m_Items[0] = (System_String_o *)v196;
  sub_B2C2F8((BattleServantConfConponent_o *)v195->m_Items, v196, v189, v190, v191, v192, v193, v194);
  v33 = (struct System_Int32_array *)StringLiteral_17586/*"combine_fodder012"*/;
  if ( StringLiteral_17586/*"combine_fodder012"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17586/*"combine_fodder012"*/, v195->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v203 = (System_Int32_array **)StringLiteral_17586/*"combine_fodder012"*/;
  }
  else
  {
    v203 = 0LL;
  }
  if ( v195->max_length <= 1 )
    goto LABEL_134;
  v195->m_Items[1] = (System_String_o *)v203;
  sub_B2C2F8((BattleServantConfConponent_o *)&v195->m_Items[1], v203, v197, v198, v199, v200, v201, v202);
  v33 = (struct System_Int32_array *)StringLiteral_17587/*"combine_fodder013"*/;
  if ( StringLiteral_17587/*"combine_fodder013"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17587/*"combine_fodder013"*/, v195->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v210 = (System_Int32_array **)StringLiteral_17587/*"combine_fodder013"*/;
  }
  else
  {
    v210 = 0LL;
  }
  if ( v195->max_length <= 2 )
    goto LABEL_134;
  v195->m_Items[2] = (System_String_o *)v210;
  sub_B2C2F8((BattleServantConfConponent_o *)&v195->m_Items[2], v210, v204, v205, v206, v207, v208, v209);
  v33 = (struct System_Int32_array *)StringLiteral_17588/*"combine_fodder014"*/;
  if ( StringLiteral_17588/*"combine_fodder014"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17588/*"combine_fodder014"*/, v195->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_135;
    v217 = (System_Int32_array **)StringLiteral_17588/*"combine_fodder014"*/;
  }
  else
  {
    v217 = 0LL;
  }
  if ( v195->max_length <= 3 )
    goto LABEL_134;
  v195->m_Items[3] = (System_String_o *)v217;
  sub_B2C2F8((BattleServantConfConponent_o *)&v195->m_Items[3], v217, v211, v212, v213, v214, v215, v216);
  v33 = (struct System_Int32_array *)StringLiteral_17589/*"combine_fodder015"*/;
  if ( StringLiteral_17589/*"combine_fodder015"*/ )
  {
    v33 = (struct System_Int32_array *)sub_B2C41C(StringLiteral_17589/*"combine_fodder015"*/, v195->obj.klass->_1.element_class);
    if ( v33 )
    {
      v224 = (System_Int32_array **)StringLiteral_17589/*"combine_fodder015"*/;
      goto LABEL_132;
    }
LABEL_135:
    v246 = sub_B2C454();
    sub_B2C400(v246, 0LL);
  }
  v224 = 0LL;
LABEL_132:
  if ( v195->max_length <= 4 )
    goto LABEL_134;
  v195->m_Items[4] = (System_String_o *)v224;
  sub_B2C2F8((BattleServantConfConponent_o *)&v195->m_Items[4], v224, v218, v219, v220, v221, v222, v223);
  this->fields.itemAniName = v195;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemAniName,
    (System_Int32_array **)v195,
    v225,
    v226,
    v227,
    v228,
    v229,
    v230);
  v231 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v231,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.materialList = (struct System_Collections_Generic_List_UserServantEntity__o *)v231;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.materialList,
    (System_Int32_array **)v231,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  v238 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v238,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.itemList = v238;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v238,
    v239,
    v240,
    v241,
    v242,
    v243,
    v244);
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
  __int64 v11; // x1
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
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v25; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_418618D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__, v7);
    sub_B2C35C(&CombineEffectComponent___c__DisplayClass33_0_TypeInfo, v8);
    byte_418618D = 1;
  }
  v9 = sub_B2C42C(CombineEffectComponent___c__DisplayClass33_0_TypeInfo);
  CombineEffectComponent___c__DisplayClass33_0___ctor((CombineEffectComponent___c__DisplayClass33_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = data;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)data, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v25 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v25->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_CombineEffectComponent___c__DisplayClass33_0__EndLoadBg_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v27, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  struct System_Collections_Generic_List_string__o **p_releaseAssetPath; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t kind; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 *v31; // x8
  struct UnityEngine_GameObject_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *v39; // x20
  AssetLoader_LoadEndDataHandler_o *v40; // x21

  if ( (byte_418618C & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_CombineEffectComponent_EndLoadBg__, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v6);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B2C35C(&SeManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_2804/*"Bg/10500"*/, v10);
    sub_B2C35C(&StringLiteral_5873/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/, v11);
    sub_B2C35C(&StringLiteral_5872/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/, v12);
    byte_418618C = 1;
  }
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fsm,
    (System_Int32_array **)Component_WebViewObject,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  p_releaseAssetPath = &this->fields.releaseAssetPath;
  this->fields.releaseAssetPath = (struct System_Collections_Generic_List_string__o *)v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.releaseAssetPath,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
        v31 = &StringLiteral_5873/*"EffectPanel/Combine_fodder01(Clone)/Combine_bit/BG_root"*/;
        goto LABEL_11;
      }
    }
LABEL_20:
    sub_B2C434(gameObject, v30);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  v31 = &StringLiteral_5872/*"EffectPanel/Combine_bit_prefab(Clone)/Combine_bit/BG_root"*/;
LABEL_11:
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                             (UnityEngine_Transform_o *)gameObject,
                                             (System_String_o *)*v31,
                                             0LL);
  if ( !gameObject )
    goto LABEL_20;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  this->fields.bgParentObject = v32;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgParentObject,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  gameObject = (UnityEngine_GameObject_o *)*p_releaseAssetPath;
  if ( !*p_releaseAssetPath )
    goto LABEL_20;
  v39 = (System_String_o *)StringLiteral_2804/*"Bg/10500"*/;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
    (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_2804/*"Bg/10500"*/,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  v40 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v40, (Il2CppObject *)this, Method_CombineEffectComponent_EndLoadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v39, v40, 1, 0LL);
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

  if ( (byte_4186197 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__Clear__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    byte_4186197 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  releaseAssetPath = this->fields.releaseAssetPath;
  if ( releaseAssetPath )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)releaseAssetPath,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
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
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    materialList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.releaseAssetPath;
    if ( !materialList )
LABEL_17:
      sub_B2C434(materialList, method);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      materialList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  }
  materialList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.materialList;
  if ( !materialList )
    goto LABEL_17;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    materialList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UserServantEntity__Clear__);
  materialList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.itemList;
  if ( !materialList )
    goto LABEL_17;
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)materialList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  itemEntityList = this->fields.itemEntityList;
  p_itemEntityList = (BattleServantConfConponent_o *)&this->fields.itemEntityList;
  v14 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)itemEntityList;
  if ( itemEntityList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v14,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ItemEntity__Clear__);
    p_itemEntityList->klass = 0LL;
    sub_B2C2F8(p_itemEntityList, 0LL, v17, v18, v19, v20, v21, v22);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *v74; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v75; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v77; // x23
  System_String_o *v78; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x24
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v87; // x20
  int32_t CardImageLimitCount; // w21
  struct UserServantEntity_o *baseSvtEntity; // x8
  ServantLimitImageMaster_o *v90; // x22
  __int64 v91; // x23
  __int64 v92; // x24
  int32_t ServantImageLimitSealAfter; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v95; // x20
  UnityEngine_Transform_o *v96; // x21
  int v97; // s0
  CombineEffectComponent_o *v100; // x0
  const MethodInfo *v101; // x5
  UserServantEntity_o *v102; // x8
  System_String_o *FrameCardPrefix; // x20
  System_String_o *ExceedFrameCardPath; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v105; // x20
  AssetLoader_LoadEndDataHandler_o *v106; // x21
  struct System_Collections_Generic_List_UserServantEntity__o *materialList; // x8
  int32_t size; // w9
  struct System_String_array *startAniName; // x8
  il2cpp_array_size_t v110; // w9
  System_Int32_array **v111; // x20
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  const MethodInfo *v118; // x1
  struct System_Collections_Generic_List_ItemEntity__o *itemEntityList; // x8
  int32_t v120; // w8
  struct System_Collections_Generic_List_int__o *itemList; // x8
  struct System_String_array *itemAniName; // x9
  il2cpp_array_size_t v123; // w8
  System_Int32_array **v124; // x20
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  const MethodInfo *v131; // x1
  __int64 v132; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v133; // [xsp+8h] [xbp-D8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v134; // [xsp+10h] [xbp-D0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v135; // [xsp+18h] [xbp-C8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v136; // [xsp+20h] [xbp-C0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v137; // [xsp+28h] [xbp-B8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v138; // [xsp+30h] [xbp-B0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v139; // [xsp+38h] [xbp-A8h]
  EventMissionProgressRequest_Argument_ProgressData_o *v140; // [xsp+40h] [xbp-A0h]
  EventMissionProgressRequest_Argument_ProgressData_o *v141; // [xsp+48h] [xbp-98h]
  EventMissionProgressRequest_Argument_ProgressData_o *v142; // [xsp+50h] [xbp-90h]
  EventMissionProgressRequest_Argument_ProgressData_o *v143; // [xsp+58h] [xbp-88h]
  EventMissionProgressRequest_Argument_ProgressData_o *v144; // [xsp+60h] [xbp-80h]
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+68h] [xbp-78h]
  System_String_o *v146; // [xsp+78h] [xbp-68h]
  int32_t classCardId[2]; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418618F & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_CombineEffectComponent_setReverseCallback__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v9);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_2730/*"BaseCardNodeName"*/, v15);
    sub_B2C35C(&StringLiteral_3889/*"CardScale"*/, v16);
    sub_B2C35C(&StringLiteral_6649/*"FifthItemNodeName"*/, v17);
    sub_B2C35C(&StringLiteral_6610/*"Feed20NodeName"*/, v18);
    sub_B2C35C(&StringLiteral_6598/*"Feed08NodeName"*/, v19);
    sub_B2C35C(&StringLiteral_6601/*"Feed11NodeName"*/, v20);
    sub_B2C35C(&StringLiteral_6605/*"Feed15NodeName"*/, v21);
    sub_B2C35C(&StringLiteral_2353/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v22);
    sub_B2C35C(&StringLiteral_17565/*"combine_01"*/, v23);
    sub_B2C35C(&StringLiteral_6600/*"Feed10NodeName"*/, v24);
    sub_B2C35C(&StringLiteral_4156/*"CombineEffect"*/, v25);
    sub_B2C35C(&StringLiteral_6781/*"FourthFeedNodeName"*/, v26);
    sub_B2C35C(&StringLiteral_6602/*"Feed12NodeName"*/, v27);
    sub_B2C35C(&StringLiteral_14409/*"ThrdItemNodeName"*/, v28);
    sub_B2C35C(&StringLiteral_6648/*"FifthFeedNodeName"*/, v29);
    sub_B2C35C(&StringLiteral_12641/*"SecItemNodeName"*/, v30);
    sub_B2C35C(&StringLiteral_6606/*"Feed16NodeName"*/, v31);
    sub_B2C35C(&StringLiteral_12614/*"ScndFeedNodeName"*/, v32);
    sub_B2C35C(&StringLiteral_6814/*"FstFeedNodeName"*/, v33);
    sub_B2C35C(&StringLiteral_6597/*"Feed07NodeName"*/, v34);
    sub_B2C35C(&StringLiteral_14408/*"ThrdFeedNodeName"*/, v35);
    sub_B2C35C(&StringLiteral_6596/*"Feed06NodeName"*/, v36);
    sub_B2C35C(&StringLiteral_17590/*"combine_fodder02"*/, v37);
    sub_B2C35C(&StringLiteral_12888/*"SkillItemNodeName"*/, v38);
    sub_B2C35C(&StringLiteral_13036/*"StartAnimationName"*/, v39);
    sub_B2C35C(&StringLiteral_6608/*"Feed18NodeName"*/, v40);
    sub_B2C35C(&StringLiteral_6603/*"Feed13NodeName"*/, v41);
    sub_B2C35C(&StringLiteral_1/*""*/, v42);
    sub_B2C35C(&StringLiteral_6609/*"Feed19NodeName"*/, v43);
    sub_B2C35C(&StringLiteral_6604/*"Feed14NodeName"*/, v44);
    sub_B2C35C(&StringLiteral_6782/*"FourthItemNodeName"*/, v45);
    sub_B2C35C(&StringLiteral_6599/*"Feed09NodeName"*/, v46);
    sub_B2C35C(&StringLiteral_6607/*"Feed17NodeName"*/, v47);
    byte_418618F = 1;
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
                            (System_String_o *)StringLiteral_4156/*"CombineEffect"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, 0LL);
  this->fields.effect = Value;
  sub_B2C2F8(
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
                            (System_String_o *)StringLiteral_3889/*"CardScale"*/,
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
                            (System_String_o *)StringLiteral_2730/*"BaseCardNodeName"*/,
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
                            (System_String_o *)StringLiteral_6814/*"FstFeedNodeName"*/,
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
                            (System_String_o *)StringLiteral_12614/*"ScndFeedNodeName"*/,
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
                            (System_String_o *)StringLiteral_14408/*"ThrdFeedNodeName"*/,
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
                            (System_String_o *)StringLiteral_6781/*"FourthFeedNodeName"*/,
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
                            (System_String_o *)StringLiteral_6648/*"FifthFeedNodeName"*/,
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
                            (System_String_o *)StringLiteral_6596/*"Feed06NodeName"*/,
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
                            (System_String_o *)StringLiteral_6597/*"Feed07NodeName"*/,
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
                            (System_String_o *)StringLiteral_6598/*"Feed08NodeName"*/,
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
                            (System_String_o *)StringLiteral_6599/*"Feed09NodeName"*/,
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
                            (System_String_o *)StringLiteral_6600/*"Feed10NodeName"*/,
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
                            (System_String_o *)StringLiteral_6601/*"Feed11NodeName"*/,
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
                            (System_String_o *)StringLiteral_6602/*"Feed12NodeName"*/,
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
                            (System_String_o *)StringLiteral_6603/*"Feed13NodeName"*/,
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
                            (System_String_o *)StringLiteral_6604/*"Feed14NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v139 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6605/*"Feed15NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v138 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6606/*"Feed16NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v137 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6607/*"Feed17NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v136 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6608/*"Feed18NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v135 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6609/*"Feed19NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v134 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  if ( !*p_fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_6610/*"Feed20NodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  v146 = v59;
  v133 = (EventMissionProgressRequest_Argument_ProgressData_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                                                  (HutongGames_PlayMaker_FsmString_o *)fsm,
                                                                  0LL);
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !v67 )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v60,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v61,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v62,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v63,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v64,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v65,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v66,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    item,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v144,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v143,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v142,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v141,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v140,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v139,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v138,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v137,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v136,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v135,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v134,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v67,
    v133,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.feedNameList = (struct System_Collections_Generic_List_string__o *)v67;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.feedNameList,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_12888/*"SkillItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v74 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_12641/*"SecItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  if ( !*p_fsm )
    goto LABEL_137;
  v75 = (EventMissionProgressRequest_Argument_ProgressData_o *)fsm;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(*p_fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                            (System_String_o *)StringLiteral_14409/*"ThrdItemNodeName"*/,
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
                            (System_String_o *)StringLiteral_6782/*"FourthItemNodeName"*/,
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
                            (System_String_o *)StringLiteral_6649/*"FifthItemNodeName"*/,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  v78 = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL);
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !v79 )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v79,
    v74,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v79,
    v75,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v79,
    v76,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v79,
    v77,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v79,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  this->fields.feedItemNameList = (struct System_Collections_Generic_List_string__o *)v79;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.feedItemNameList,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  fsm = (PlayMakerFSM_o *)this->fields.effect;
  if ( !fsm )
    goto LABEL_137;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)fsm, 0LL);
  fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, v146, 1, 0LL);
  if ( !fsm )
    goto LABEL_137;
  v87 = (UnityEngine_Component_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)fsm, 0LL);
  if ( !fsm )
    goto LABEL_137;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fsm, 0, 0LL);
  fsm = (PlayMakerFSM_o *)this->fields.baseSvtEntity;
  if ( !fsm )
    goto LABEL_137;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)fsm, 0, 0LL);
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !fsm )
    goto LABEL_137;
  fsm = (PlayMakerFSM_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)fsm,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  baseSvtEntity = this->fields.baseSvtEntity;
  if ( !baseSvtEntity )
    goto LABEL_137;
  v90 = (ServantLimitImageMaster_o *)fsm;
  v92 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.currentCryptoKey;
  v91 = *(_QWORD *)&baseSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v148.fields.currentCryptoKey = v92;
  *(_QWORD *)&v148.fields.fakeValue = v91;
  fsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v148, 0LL);
  if ( !v90 )
    goto LABEL_137;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v90,
                                 (int32_t)fsm,
                                 CardImageLimitCount,
                                 0LL);
  gameObject = UnityEngine_Component__get_gameObject(v87, 0LL);
  fsm = (PlayMakerFSM_o *)CharaGraphManager__CreateTexturePrefab_25402508(
                            gameObject,
                            this->fields.baseSvtEntity,
                            ServantImageLimitSealAfter,
                            10,
                            0LL,
                            0,
                            0LL);
  if ( !fsm )
    goto LABEL_137;
  v95 = (UnityEngine_Component_o *)fsm;
  v96 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)fsm, 0LL);
  *(UnityEngine_Vector3_o *)&v97 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v96 )
    goto LABEL_137;
  UnityEngine_Transform__set_localPosition(v96, *(UnityEngine_Vector3_o *)&v97, 0LL);
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform(v95, 0LL);
  if ( !fsm )
    goto LABEL_137;
  v149.fields.x = v58;
  v149.fields.y = v58;
  v149.fields.z = v58;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)fsm, v149, 0LL);
  CombineEffectComponent__getDispInfo(
    v100,
    &classCardId[1],
    classCardId,
    this->fields.baseSvtId,
    this->fields.baseSvtlimitCnt,
    v101);
  fsm = this->fields.kind == 3
      ? (PlayMakerFSM_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_2353/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, 0LL)
      : (PlayMakerFSM_o *)(unsigned int)classCardId[0];
  v102 = this->fields.baseSvtEntity;
  this->fields.baseClassCardId = (int)fsm;
  if ( !v102 )
    goto LABEL_137;
  if ( UserServantEntity__isExceeded(v102, 0LL) )
  {
    fsm = (PlayMakerFSM_o *)this->fields.baseSvtEntity;
    if ( fsm )
    {
      FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)fsm, 0LL);
      fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B2C434(fsm, method);
  }
  fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
  if ( !fsm )
    goto LABEL_137;
  ExceedFrameCardPath = DesignCardManager__GetDesignCardPath(
                          (DesignCardManager_o *)fsm,
                          this->fields.baseClassCardId,
                          classCardId[1],
                          0LL);
LABEL_112:
  v105 = (EventMissionProgressRequest_Argument_ProgressData_o *)ExceedFrameCardPath;
  fsm = (PlayMakerFSM_o *)this->fields.releaseAssetPath;
  if ( !fsm )
    goto LABEL_137;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)fsm,
    v105,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  v106 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v106,
    (Il2CppObject *)this,
    Method_CombineEffectComponent_setReverseCallback__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  fsm = (PlayMakerFSM_o *)AssetManager__loadAssetStorage((System_String_o *)v105, v106, 1, 0LL);
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
      v110 = size - 1;
      if ( v110 >= startAniName->max_length )
        goto LABEL_138;
      fsm = *p_fsm;
      if ( !*p_fsm )
        goto LABEL_137;
      v111 = (System_Int32_array **)startAniName->m_Items[v110];
      fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
      if ( !fsm )
        goto LABEL_137;
      fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                                0LL);
      if ( !fsm )
        goto LABEL_137;
      fsm[1].klass = (PlayMakerFSM_c *)v111;
      sub_B2C2F8((BattleServantConfConponent_o *)&fsm[1], v111, v112, v113, v114, v115, v116, v117);
      CombineEffectComponent__setServantFeed(this, v118);
      break;
    case 1:
      itemEntityList = this->fields.itemEntityList;
      if ( itemEntityList )
      {
        v120 = itemEntityList->fields._size;
        if ( v120 > 0 )
          goto LABEL_128;
      }
      itemList = this->fields.itemList;
      if ( !itemList )
        goto LABEL_137;
      v120 = itemList->fields._size;
LABEL_128:
      itemAniName = this->fields.itemAniName;
      this->fields.itemMaterialCnt = v120;
      if ( !itemAniName )
        goto LABEL_137;
      v123 = v120 - 1;
      if ( v123 >= itemAniName->max_length )
      {
LABEL_138:
        v132 = sub_B2C460(fsm);
        sub_B2C400(v132, 0LL);
      }
      fsm = *p_fsm;
      if ( !*p_fsm )
        goto LABEL_137;
      v124 = (System_Int32_array **)itemAniName->m_Items[v123];
LABEL_134:
      fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL);
      if ( !fsm )
        goto LABEL_137;
      fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                (System_String_o *)StringLiteral_13036/*"StartAnimationName"*/,
                                0LL);
      if ( !fsm )
        goto LABEL_137;
      fsm[1].klass = (PlayMakerFSM_c *)v124;
      sub_B2C2F8((BattleServantConfConponent_o *)&fsm[1], v124, v125, v126, v127, v128, v129, v130);
      CombineEffectComponent__setItemFeed(this, v131);
      break;
    case 2:
      fsm = *p_fsm;
      if ( !*p_fsm )
        goto LABEL_137;
      v124 = (System_Int32_array **)StringLiteral_17590/*"combine_fodder02"*/;
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
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_418618B & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_418618B = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B2C434(v11, v12);
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v15;
  sub_B2C2F8((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)list, v17, v18, v19, v20, v21, v22);
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
  UnityEngine_Material_o *v18; // x21
  UnityEngine_Texture_o *v19; // x22
  int32_t v20; // w8
  int v21; // w9

  if ( (byte_4186192 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITexture___, data);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v5);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_15014/*"Unlit/Transparent Colored"*/, v8);
    sub_B2C35C(&StringLiteral_12336/*"START_ANIMATION"*/, v9);
    sub_B2C35C(&StringLiteral_4519/*"Custom/Sprite-MasterFigure (SoftClip)"*/, v10);
    byte_4186192 = 1;
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  NodeFromName = TransformHelper__getNodeFromName(
                   (UnityEngine_Transform_o *)effect,
                   feedNameList->fields._items->m_Items[cntIndex],
                   1,
                   0LL);
  effect = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  v16 = (System_String_o **)(this->fields.cardType == 6 ? &StringLiteral_4519/*"Custom/Sprite-MasterFigure (SoftClip)"*/ : &StringLiteral_15014/*"Unlit/Transparent Colored"*/);
  v17 = UnityEngine_Shader__Find(*v16, 0LL);
  v18 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v18, v17, 0LL);
  if ( !Component_WebViewObject )
    goto LABEL_18;
  v19 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(WebViewObject_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._2_GetHashCode.method)(
                                   Component_WebViewObject,
                                   Component_WebViewObject->klass[1].vtable._3_ToString.methodPtr);
  effect = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(WebViewObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_WebViewObject->klass[1].vtable._1_Finalize.method)(
                                         Component_WebViewObject,
                                         v18,
                                         Component_WebViewObject->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !v18 )
    goto LABEL_18;
  UnityEngine_Material__set_mainTexture(v18, v19, 0LL);
  v20 = this->fields.cntIndex + 1;
  v21 = this->fields.materialCnt - 1;
  this->fields.cntIndex = v20;
  if ( v20 > v21 )
  {
    effect = (UnityEngine_GameObject_o *)this->fields.fsm;
    this->fields.cntIndex = 0;
    if ( effect )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)effect, (System_String_o *)StringLiteral_12336/*"START_ANIMATION"*/, 0LL);
      return;
    }
LABEL_18:
    sub_B2C434(effect, data);
  }
  CombineEffectComponent__setServantFeed(this, (const MethodInfo *)data);
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
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w0
  struct System_Collections_Generic_List_UserServantEntity__o **p_materialList; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4186188 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_4186188 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = combineKind;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    *(System_String_array ***)&combineKind,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B2C434(v12, v13);
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = v15;
  *(_QWORD *)&v24.fields.fakeValue = v14;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(baseSvtData->fields.limitCount, 0LL);
  this->fields.materialList = list;
  p_materialList = &this->fields.materialList;
  *((_DWORD *)p_materialList - 1) = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)p_materialList, (System_Int32_array **)list, v18, v19, v20, v21, v22, v23);
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
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x23
  System_Collections_Generic_List_int__o *itemList; // x8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4186189 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, baseSvtData);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4186189 = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_B2C2F8(
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
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(baseSvtData->fields.limitCount, 0LL);
  itemList = this->fields.itemList;
  this->fields.baseSvtlimitCnt = v12;
  if ( !itemList )
LABEL_9:
    sub_B2C434(v12, v13);
  System_Collections_Generic_List_int___Clear(
    itemList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  this->fields.itemEntityList = list;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemEntityList,
    (System_Int32_array **)list,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall CombineEffectComponent__SetSkillCombineInfo_21953128(
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
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  int32_t v15; // w0
  struct System_Collections_Generic_List_int__o **p_itemList; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_418618A & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, baseSvtData);
    byte_418618A = 1;
  }
  this->fields.baseSvtEntity = baseSvtData;
  this->fields.kind = 1;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseSvtEntity,
    (System_Int32_array **)baseSvtData,
    (System_String_array **)list,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !baseSvtData )
    sub_B2C434(v11, v12);
  v14 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  this->fields.baseSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(baseSvtData->fields.limitCount, 0LL);
  this->fields.itemList = list;
  p_itemList = &this->fields.itemList;
  *((_DWORD *)p_itemList - 3) = v15;
  sub_B2C2F8((BattleServantConfConponent_o *)p_itemList, (System_Int32_array **)list, v17, v18, v19, v20, v21, v22);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_418619A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5483/*"END_FADE"*/, v3);
    byte_418619A = 1;
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
    v7 = (UnityEngine_Object_o *)*p_effect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_35315108(v7, 0LL);
    *p_effect = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effect, 0LL, v8, v9, v10, v11, v12, v13);
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, v6);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5483/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent___fadeIn_b__34_0(CombineEffectComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4186199 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5483/*"END_FADE"*/, method);
    byte_4186199 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5483/*"END_FADE"*/, 0LL);
}


void __fastcall CombineEffectComponent__endAnimation(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4186196 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_CombineEffectComponent__endAnimation_b__42_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4186196 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineEffectComponent__endAnimation_b__42_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v9, 0LL);
}


void __fastcall CombineEffectComponent__fadeIn(CombineEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418618E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_CombineEffectComponent__fadeIn_b__34_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418618E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineEffectComponent__fadeIn_b__34_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v9, 0LL);
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
  WarEntity_o *Entity; // x24
  System_String_o **v19; // x8

  if ( (byte_4186195 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, rarity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_2353/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/, v14);
    sub_B2C35C(&StringLiteral_2354/*"BACKSIDE_SVT_IMAGE_ID"*/, v15);
    byte_4186195 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   svtId,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___)) == 0LL
    || (Instance = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL)) == 0LL
    || (*rarity = *((_DWORD *)Instance + 6), !Entity) )
  {
    sub_B2C434(Instance, v17);
  }
  this->fields.cardType = *(&Entity->fields.startType + 1);
  if ( *(&Entity->fields.startType + 1) == 6 )
    v19 = (System_String_o **)&StringLiteral_2353/*"BACKSIDE_SVT_EQUIP_IMAGE_ID"*/;
  else
    v19 = (System_String_o **)&StringLiteral_2354/*"BACKSIDE_SVT_IMAGE_ID"*/;
  *backCardImgId = ConstantMaster__getValue(*v19, 0LL);
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
  __int64 v16; // x1
  ServantEntity_o *Entity; // x23
  ServantLimitEntity_o *v18; // x21
  WarEntity_o *v19; // x22

  if ( (byte_4186194 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, rarity);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4186194 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_15;
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !Instance )
    goto LABEL_15;
  v18 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)Instance, svtId, svtLimitCnt, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Entity || !Instance )
    goto LABEL_15;
  v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          Entity->fields.classId,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  Instance = (DataManager_o *)ServantEntity__GetOverwriteClassImageId(Entity, 0LL);
  if ( !(_DWORD)Instance )
  {
    if ( !v19 )
      goto LABEL_15;
    Instance = (DataManager_o *)LODWORD(v19->fields.longName);
  }
  *classCardId = (int)Instance;
  if ( !v18 )
LABEL_15:
    sub_B2C434(Instance, v16);
  *rarity = v18->fields.rarity;
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
  if ( (byte_4186193 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemEntity__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    this = (CombineEffectComponent_o *)sub_B2C35C(&StringLiteral_12336/*"START_ANIMATION"*/, v9);
    byte_4186193 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (CombineEffectComponent_o *)v2->fields.effect;
        if ( !this )
          goto LABEL_43;
        v14 = itemEntityList->fields._items->m_Items[v12];
        this = (CombineEffectComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        feedItemNameList = v2->fields.feedItemNameList;
        if ( !feedItemNameList )
          goto LABEL_43;
        if ( feedItemNameList->fields._size <= v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        NodeFromName = (System_Int32_array **)TransformHelper__getNodeFromName(
                                                (UnityEngine_Transform_o *)this,
                                                feedItemNameList->fields._items->m_Items[v12],
                                                1,
                                                0LL);
        *p_itemNode = (CombineEffectComponent_o *)NodeFromName;
        sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.itemNode, NodeFromName, v17, v18, v19, v20, v21, v22);
        this = *p_itemNode;
        if ( !*p_itemNode )
          goto LABEL_43;
        this = (CombineEffectComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (CombineEffectComponent_o *)v2->fields.effect;
    if ( this )
    {
      v29 = itemList->fields._items->m_Items[v27 + 1];
      this = (CombineEffectComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      v30 = v2->fields.feedItemNameList;
      if ( v30 )
      {
        if ( v27 >= (unsigned int)v30->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v31 = (System_Int32_array **)TransformHelper__getNodeFromName(
                                       (UnityEngine_Transform_o *)this,
                                       v30->fields._items->m_Items[v27],
                                       1,
                                       0LL);
        *v28 = (CombineEffectComponent_o *)v31;
        sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.itemNode, v31, v32, v33, v34, v35, v36, v37);
        this = *v28;
        if ( *v28 )
        {
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)this,
                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_B2C434(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_12336/*"START_ANIMATION"*/, 0LL);
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

  if ( (byte_4186190 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, data);
    sub_B2C35C(&StringLiteral_11501/*"ReverseCardNodeName"*/, v5);
    byte_4186190 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11501/*"ReverseCardNodeName"*/,
                                  0LL)) == 0LL
    || (Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)fsm, 0LL),
        fsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__),
        !this->fields.effect)
    || (v8 = (DesignCardManager_o *)fsm,
        transform = UnityEngine_GameObject__get_transform(this->fields.effect, 0LL),
        fsm = (PlayMakerFSM_o *)TransformHelper__getNodeFromName(transform, Value, 1, 0LL),
        !v8) )
  {
    sub_B2C434(fsm, data);
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
  AssetLoader_LoadEndDataHandler_o *v30; // x21
  int32_t backCardImgId[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v2 = this;
  if ( (byte_4186191 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_CombineEffectComponent_SetFeedCallback__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v5);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__, v8);
    this = (CombineEffectComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4186191 = 1;
  }
  *(_QWORD *)backCardImgId = 0LL;
  materialList = v2->fields.materialList;
  if ( !materialList )
    goto LABEL_32;
  cntIndex = v2->fields.cntIndex;
  if ( materialList->fields._size <= (unsigned int)cntIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  *(_QWORD *)&v32.fields.currentCryptoKey = v14;
  *(_QWORD *)&v32.fields.fakeValue = v13;
  this = (CombineEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
  v15 = v2->fields.materialList;
  if ( !v15 )
    goto LABEL_32;
  v16 = v2->fields.cntIndex;
  v17 = (int)this;
  if ( v15->fields._size <= (unsigned int)v16 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v15->fields._items->m_Items[v16];
  if ( !v18 )
    goto LABEL_32;
  this = (CombineEffectComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18[6], 0LL);
  v19 = v2->fields.materialList;
  if ( !v19 )
    goto LABEL_32;
  v20 = v2->fields.cntIndex;
  v21 = (int)this;
  if ( v19->fields._size <= (unsigned int)v20 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (CombineEffectComponent_o *)v25->fields._items->m_Items[v26];
      if ( this )
      {
        FrameCardPrefix = UserServantEntity__getFrameCardPrefix((UserServantEntity_o *)this, 0LL);
        this = (CombineEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    sub_B2C434(this, method);
  }
  this = (CombineEffectComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
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
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v30, (Il2CppObject *)v2, Method_CombineEffectComponent_SetFeedCallback__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)v29, v30, 1, 0LL);
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

  if ( (byte_4184F17 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5483/*"END_FADE"*/, v5);
    sub_B2C35C(&StringLiteral_16695/*"bg"*/, v6);
    byte_4184F17 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               (System_String_o *)StringLiteral_16695/*"bg"*/,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  data = (AssetData_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                          Object_WarBoardWaitTimeSetting,
                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_B2C434(data, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_5483/*"END_FADE"*/, 0LL);
}