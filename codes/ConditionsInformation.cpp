void __fastcall ConditionsInformation___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  ConditionsInformation_CheckInfo_o *v2; // x20
  __int64 v3; // x0
  __int64 v4; // x1
  ConditionsInformation_CheckInfo_o *v5; // x20
  ConditionsInformation_CheckInfo_o *v6; // x20
  ConditionsInformation_CheckInfo_o *v7; // x20
  ConditionsInformation_CheckInfo_o *v8; // x20
  ConditionsInformation_CheckInfo_o *v9; // x20
  ConditionsInformation_CheckInfo_o *v10; // x20
  ConditionsInformation_CheckInfo_o *v11; // x20
  ConditionsInformation_CheckInfo_o *v12; // x20
  ConditionsInformation_CheckInfo_o *v13; // x20
  ConditionsInformation_CheckInfo_o *v14; // x20
  ConditionsInformation_CheckInfo_o *v15; // x20
  ConditionsInformation_CheckInfo_o *v16; // x20
  ConditionsInformation_CheckInfo_o *v17; // x20
  ConditionsInformation_CheckInfo_o *v18; // x20
  ConditionsInformation_CheckInfo_o *v19; // x20
  ConditionsInformation_CheckInfo_o *v20; // x20
  ConditionsInformation_CheckInfo_o *v21; // x20
  ConditionsInformation_CheckInfo_o *v22; // x20
  ConditionsInformation_CheckInfo_o *v23; // x20
  ConditionsInformation_CheckInfo_o *v24; // x20
  ConditionsInformation_CheckInfo_o *v25; // x20
  ConditionsInformation_CheckInfo_o *v26; // x20
  ConditionsInformation_CheckInfo_o *v27; // x20
  System_String_o *v28; // x0
  ConditionsInformation_CheckInfo_o *v29; // x20
  System_String_o *v30; // x0
  ConditionsInformation_CheckInfo_o *v31; // x20
  ConditionsInformation_CheckInfo_o *v32; // x20
  ConditionsInformation_CheckInfo_o *v33; // x20
  ConditionsInformation_CheckInfo_o *v34; // x20
  ConditionsInformation_CheckInfo_o *v35; // x20
  System_String_o *v36; // x0
  ConditionsInformation_CheckInfo_o *v37; // x20
  ConditionsInformation_CheckInfo_o *v38; // x20
  ConditionsInformation_CheckInfo_o *v39; // x20
  ConditionsInformation_CheckInfo_o *v40; // x20
  ConditionsInformation_CheckInfo_o *v41; // x20
  ConditionsInformation_CheckInfo_o *v42; // x20
  ConditionsInformation_CheckInfo_o *v43; // x20
  ConditionsInformation_CheckInfo_o *v44; // x20
  ConditionsInformation_CheckInfo_o *v45; // x20
  ConditionsInformation_CheckInfo_o *v46; // x20
  ConditionsInformation_CheckInfo_o *v47; // x20
  ConditionsInformation_CheckInfo_o *v48; // x20
  ConditionsInformation_CheckInfo_o *v49; // x20
  ConditionsInformation_CheckInfo_o *v50; // x20
  ConditionsInformation_CheckInfo_o *v51; // x20
  ConditionsInformation_CheckInfo_o *v52; // x20
  ConditionsInformation_CheckInfo_o *v53; // x20
  ConditionsInformation_CheckInfo_o *v54; // x20
  System_String_o *v55; // x0
  ConditionsInformation_CheckInfo_o *v56; // x20
  System_String_o *v57; // x0
  ConditionsInformation_CheckInfo_o *v58; // x20
  System_String_o *v59; // x0
  ConditionsInformation_CheckInfo_o *v60; // x20
  System_String_o *v61; // x0
  ConditionsInformation_CheckInfo_o *v62; // x20
  ConditionsInformation_CheckInfo_o *v63; // x20
  ConditionsInformation_CheckInfo_o *v64; // x20
  ConditionsInformation_CheckInfo_o *v65; // x20
  ConditionsInformation_CheckInfo_o *v66; // x20
  ConditionsInformation_CheckInfo_o *v67; // x20
  ConditionsInformation_CheckInfo_o *v68; // x20
  ConditionsInformation_CheckInfo_o *v69; // x20
  ConditionsInformation_CheckInfo_o *v70; // x20
  System_String_o *v71; // x0
  ConditionsInformation_CheckInfo_o *v72; // x20
  System_String_o *v73; // x0
  ConditionsInformation_CheckInfo_o *v74; // x20
  ConditionsInformation_CheckInfo_o *v75; // x20
  ConditionsInformation_CheckInfo_o *v76; // x20
  ConditionsInformation_CheckInfo_o *v77; // x20
  ConditionsInformation_CheckInfo_o *v78; // x20
  ConditionsInformation_CheckInfo_o *v79; // x20
  ConditionsInformation_CheckInfo_o *v80; // x20
  ConditionsInformation_CheckInfo_o *v81; // x20
  ConditionsInformation_CheckInfo_o *v82; // x20
  ConditionsInformation_CheckInfo_o *v83; // x20
  ConditionsInformation_CheckInfo_o *v84; // x20
  ConditionsInformation_CheckInfo_o *v85; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v86; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v87; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v88; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v89; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v90; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v91; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v92; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v93; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v94; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v95; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v96; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v97; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v98; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v99; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v100; // x20
  ConditionsInformation_ExistIndividualityCheckInfo_o *v101; // x20
  ConditionsInformation_ExistIndividualityCheckInfo_o *v102; // x20
  ConditionsInformation_ExistIndividualityCheckInfo_o *v103; // x20
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *v104; // x20
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *v105; // x20
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *v106; // x20
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *v107; // x20
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *v108; // x20
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *v109; // x20
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *v110; // x20
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *v111; // x20
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *v112; // x20
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *v113; // x20
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *v114; // x20
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *v115; // x20
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *v116; // x20
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *v117; // x20
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *v118; // x20
  ConditionsInformation_CheckInfo_o *v119; // x20
  System_String_o *v120; // x0
  ConditionsInformation_CheckInfo_o *v121; // x20
  System_String_o *v122; // x0
  ConditionsInformation_CheckInfo_o *v123; // x20
  System_String_o *v124; // x0
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v125; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v126; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v127; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v128; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v129; // x20
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *v130; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v131; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v132; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v133; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v134; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v135; // x20
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *v136; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v137; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v138; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v139; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v140; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v141; // x20
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *v142; // x20
  ConditionsInformation_CheckInfo_o *v143; // x20
  ConditionsInformation_CheckInfo_o *v144; // x20
  ConditionsInformation_CheckInfo_o *v145; // x20
  ConditionsInformation_CheckInfo_o *v146; // x20
  ConditionsInformation_CheckInfo_o *v147; // x20
  ConditionsInformation_CheckInfo_o *v148; // x20
  ConditionsInformation_CheckInfo_o *v149; // x20
  ConditionsInformation_CheckInfo_o *v150; // x20
  ConditionsInformation_CheckInfo_o *v151; // x20
  ConditionsInformation_CheckInfo_o *v152; // x20
  System_String_o *v153; // x0
  ConditionsInformation_CheckInfo_o *v154; // x20
  System_String_o *v155; // x0
  ConditionsInformation_CheckInfo_o *v156; // x20
  System_String_o *v157; // x0
  ConditionsInformation_CheckInfo_o *v158; // x20
  System_String_o *v159; // x0
  ConditionsInformation_CheckInfo_o *v160; // x20
  System_String_o *v161; // x0
  ConditionsInformation_CheckInfo_o *v162; // x20
  System_String_o *v163; // x0
  ConditionsInformation_CheckInfo_o *v164; // x20
  System_String_o *v165; // x0
  ConditionsInformation_CheckInfo_o *v166; // x20
  System_String_o *v167; // x0
  ConditionsInformation_CheckInfo_o *v168; // x20
  System_String_o *v169; // x0
  ConditionsInformation_CheckInfo_o *v170; // x20
  System_String_o *v171; // x0
  ConditionsInformation_CheckInfo_o *v172; // x20
  System_String_o *v173; // x0
  ConditionsInformation_CheckInfo_o *v174; // x20
  System_String_o *v175; // x0
  ConditionsInformation_CheckInfo_o *v176; // x20
  System_String_o *v177; // x0
  ConditionsInformation_CheckInfo_o *v178; // x20
  System_String_o *v179; // x0
  ConditionsInformation_CheckInfo_o *v180; // x20
  ConditionsInformation_CheckInfo_o *v181; // x20
  ConditionsInformation_CheckInfo_o *v182; // x20
  ConditionsInformation_CheckInfo_o *v183; // x20
  ConditionsInformation_CheckInfo_o *v184; // x20
  ConditionsInformation_CheckInfo_o *v185; // x20
  ConditionsInformation_CheckInfo_o *v186; // x20
  ConditionsInformation_CheckInfo_o *v187; // x20
  ConditionsInformation_CheckInfo_o *v188; // x20
  ConditionsInformation_CheckInfo_o *v189; // x20
  ConditionsInformation_CheckInfo_o *v190; // x20
  ConditionsInformation_CheckInfo_o *v191; // x20
  ConditionsInformation_CheckInfo_o *v192; // x20
  ConditionsInformation_CheckInfo_o *v193; // x20
  ConditionsInformation_CheckInfo_o *v194; // x20
  ConditionsInformation_CheckInfo_o *v195; // x20
  ConditionsInformation_CheckInfo_o *v196; // x20
  ConditionsInformation_CheckInfo_o *v197; // x20
  ConditionsInformation_CheckInfo_o *v198; // x20
  ConditionsInformation_CheckInfo_o *v199; // x20
  struct ConditionsInformation_StaticFields *static_fields; // x0
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7

  if ( (byte_43534F2 & 1) == 0 )
  {
    sub_B70694(&ConditionsInformation_CheckInfo_TypeInfo);
    sub_B70694(&ConditionsInformation_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__TypeInfo);
    sub_B70694(&ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
    sub_B70694(&ConditionsInformation_ExistIndividualityCheckInfo_TypeInfo);
    sub_B70694(&ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
    sub_B70694(&ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
    sub_B70694(&ConditionsInformation_TotalCountEqualIndividualityCheckInfo_TypeInfo);
    sub_B70694(&ConditionsInformation_TotalCountHigherIndividualityCheckInfo_TypeInfo);
    sub_B70694(&ConditionsInformation_TotalCountLowerIndividualityCheckInfo_TypeInfo);
    byte_43534F2 = 1;
  }
  ConditionsInformation_TypeInfo->static_fields->BETWEEN_MIN_IDX = 0;
  ConditionsInformation_TypeInfo->static_fields->BETWEEN_MAX_IDX = 1;
  ConditionsInformation_TypeInfo->static_fields->BETWEEN_VALUE_SIZE = 2;
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo___ctor__);
  v2 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor(v2, 0LL);
  if ( !v1 )
    goto LABEL_31;
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    (System_String_o *)v2,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v5 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v5, 2, 5, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)v5,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v6 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v6, 2, 5, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    11,
    (System_String_o *)v6,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v7 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v7, 2, 8, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)v7,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v8 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v8, 2, 8, 5, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    21,
    (System_String_o *)v8,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v9 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v9, 1, 1, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)v9,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v10 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v10, 1, 1, 5, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    31,
    (System_String_o *)v10,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v11 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v11, 2, 3, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)v11,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v12 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v12, 2, 4, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)v12,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v13 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v13, 2, 3, 2, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)v13,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v14 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v14, 2, 4, 2, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    43,
    (System_String_o *)v14,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v15 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v15, 2, 12, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    (System_String_o *)v15,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v16 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v16, 2, 13, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    51,
    (System_String_o *)v16,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v17 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v17, 2, 15, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    57,
    (System_String_o *)v17,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v18 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v18, 3, 12, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    52,
    (System_String_o *)v18,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v19 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v19, 3, 13, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    53,
    (System_String_o *)v19,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v20 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v20, 3, 15, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    58,
    (System_String_o *)v20,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v21 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v21, 4, 12, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    55,
    (System_String_o *)v21,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v22 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v22, 4, 13, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    56,
    (System_String_o *)v22,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v23 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v23, 4, 15, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    59,
    (System_String_o *)v23,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v24 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v24, 2, 7, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    (System_String_o *)v24,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v25 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v25, 4, 6, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    62,
    (System_String_o *)v25,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v26 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v26, 2, 9, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    63,
    (System_String_o *)v26,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v27 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v27, 3, 5, 3, 0LL);
  if ( !v27 )
    goto LABEL_31;
  v28 = (System_String_o *)ConditionsInformation_CheckInfo__setIsIndiv(v27, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    64,
    v28,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v29 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v29, 3, 5, 4, 0LL);
  if ( !v29 )
    goto LABEL_31;
  v30 = (System_String_o *)ConditionsInformation_CheckInfo__setIsIndiv(v29, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    65,
    v30,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v31 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v31, 2, 14, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    66,
    (System_String_o *)v31,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v32 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v32, 2, 11, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    67,
    (System_String_o *)v32,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v33 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v33, 2, 10, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    68,
    (System_String_o *)v33,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v34 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v34, 2, 10, 5, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    69,
    (System_String_o *)v34,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v35 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v35, 3, 7, 1, 0LL);
  if ( !v35 )
    goto LABEL_31;
  v36 = (System_String_o *)ConditionsInformation_CheckInfo__setRefine(v35, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    70,
    v36,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v37 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v37, 2, 16, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)v37,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v38 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v38, 2, 16, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)v38,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v39 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v39, 2, 17, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    73,
    (System_String_o *)v39,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v40 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v40, 2, 17, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    74,
    (System_String_o *)v40,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v41 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v41, 2, 18, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    75,
    (System_String_o *)v41,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v42 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v42, 2, 18, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    76,
    (System_String_o *)v42,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v43 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v43, 2, 2, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    77,
    (System_String_o *)v43,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v44 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v44, 1, 1, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    78,
    (System_String_o *)v44,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v45 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v45, 1, 1, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    79,
    (System_String_o *)v45,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v46 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v46, 2, 10, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)v46,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v47 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v47, 2, 10, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    81,
    (System_String_o *)v47,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v48 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v48, 5, 19, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    82,
    (System_String_o *)v48,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v49 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v49, 6, 19, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    83,
    (System_String_o *)v49,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v50 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v50, 5, 20, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    84,
    (System_String_o *)v50,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v51 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v51, 5, 20, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    85,
    (System_String_o *)v51,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v52 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v52, 6, 20, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    86,
    (System_String_o *)v52,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v53 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v53, 6, 20, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    87,
    (System_String_o *)v53,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v54 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v54, 1, 21, 3, 0LL);
  if ( !v54 )
    goto LABEL_31;
  v55 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v54, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    88,
    v55,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v56 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v56, 1, 21, 4, 0LL);
  if ( !v56 )
    goto LABEL_31;
  v57 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v56, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    89,
    v57,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v58 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v58, 2, 22, 1, 0LL);
  if ( !v58 )
    goto LABEL_31;
  v59 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v58, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    v59,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v60 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v60, 3, 22, 1, 0LL);
  if ( !v60 )
    goto LABEL_31;
  v61 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v60, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    v61,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v62 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v62, 2, 23, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    (System_String_o *)v62,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v63 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v63, 3, 23, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    93,
    (System_String_o *)v63,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v64 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v64, 4, 23, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    94,
    (System_String_o *)v64,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v65 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v65, 1, 24, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    95,
    (System_String_o *)v65,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v66 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v66, 7, 13, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    96,
    (System_String_o *)v66,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v67 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v67, 8, 13, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    97,
    (System_String_o *)v67,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v68 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v68, 1, 25, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    98,
    (System_String_o *)v68,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v69 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v69, 1, 25, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    99,
    (System_String_o *)v69,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v70 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v70, 4, 5, 3, 0LL);
  if ( !v70 )
    goto LABEL_31;
  v71 = (System_String_o *)ConditionsInformation_CheckInfo__setIsIndiv(v70, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    v71,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v72 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v72, 4, 5, 4, 0LL);
  if ( !v72 )
    goto LABEL_31;
  v73 = (System_String_o *)ConditionsInformation_CheckInfo__setIsIndiv(v72, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    101,
    v73,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v74 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v74, 4, 26, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    102,
    (System_String_o *)v74,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v75 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v75, 2, 14, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    103,
    (System_String_o *)v75,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v76 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v76, 3, 14, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    104,
    (System_String_o *)v76,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v77 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v77, 4, 14, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    105,
    (System_String_o *)v77,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v78 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v78, 7, 12, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    106,
    (System_String_o *)v78,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v79 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v79, 8, 12, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    107,
    (System_String_o *)v79,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v80 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v80, 7, 15, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    108,
    (System_String_o *)v80,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v81 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v81, 8, 15, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    109,
    (System_String_o *)v81,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v82 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v82, 5, 20, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    110,
    (System_String_o *)v82,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v83 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v83, 6, 20, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    111,
    (System_String_o *)v83,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v84 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v84, 7, 23, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    112,
    (System_String_o *)v84,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v85 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v85, 8, 23, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    113,
    (System_String_o *)v85,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v86 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v86, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    114,
    (System_String_o *)v86,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v87 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v87, 7, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    115,
    (System_String_o *)v87,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v88 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v88, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    116,
    (System_String_o *)v88,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v89 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v89, 8, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    117,
    (System_String_o *)v89,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v90 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v90, 2, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    118,
    (System_String_o *)v90,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v91 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v91, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    119,
    (System_String_o *)v91,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v92 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v92, 7, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    120,
    (System_String_o *)v92,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v93 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v93, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    121,
    (System_String_o *)v93,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v94 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v94, 8, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    122,
    (System_String_o *)v94,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v95 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v95, 2, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    123,
    (System_String_o *)v95,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v96 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v96, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    124,
    (System_String_o *)v96,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v97 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v97, 7, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    125,
    (System_String_o *)v97,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v98 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v98, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    126,
    (System_String_o *)v98,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v99 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v99, 8, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    127,
    (System_String_o *)v99,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v100 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v100, 2, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    128,
    (System_String_o *)v100,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v101 = (ConditionsInformation_ExistIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_ExistIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_ExistIndividualityCheckInfo___ctor(v101, 9, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    129,
    (System_String_o *)v101,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v102 = (ConditionsInformation_ExistIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_ExistIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_ExistIndividualityCheckInfo___ctor(v102, 10, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    130,
    (System_String_o *)v102,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v103 = (ConditionsInformation_ExistIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_ExistIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_ExistIndividualityCheckInfo___ctor(v103, 11, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    131,
    (System_String_o *)v103,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v104 = (ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountHigherIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo___ctor(v104, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    132,
    (System_String_o *)v104,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v105 = (ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountHigherIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo___ctor(v105, 7, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    133,
    (System_String_o *)v105,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v106 = (ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountHigherIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo___ctor(v106, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    134,
    (System_String_o *)v106,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v107 = (ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountHigherIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo___ctor(v107, 8, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    135,
    (System_String_o *)v107,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v108 = (ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountHigherIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountHigherIndividualityCheckInfo___ctor(v108, 12, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    136,
    (System_String_o *)v108,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v109 = (ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountLowerIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo___ctor(v109, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    137,
    (System_String_o *)v109,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v110 = (ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountLowerIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo___ctor(v110, 7, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    138,
    (System_String_o *)v110,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v111 = (ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountLowerIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo___ctor(v111, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    139,
    (System_String_o *)v111,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v112 = (ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountLowerIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo___ctor(v112, 8, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    140,
    (System_String_o *)v112,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v113 = (ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountLowerIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountLowerIndividualityCheckInfo___ctor(v113, 12, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    141,
    (System_String_o *)v113,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v114 = (ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountEqualIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo___ctor(v114, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    142,
    (System_String_o *)v114,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v115 = (ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountEqualIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo___ctor(v115, 7, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    143,
    (System_String_o *)v115,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v116 = (ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountEqualIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo___ctor(v116, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    144,
    (System_String_o *)v116,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v117 = (ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountEqualIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo___ctor(v117, 8, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    145,
    (System_String_o *)v117,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v118 = (ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *)sub_B70764(ConditionsInformation_TotalCountEqualIndividualityCheckInfo_TypeInfo);
  ConditionsInformation_TotalCountEqualIndividualityCheckInfo___ctor(v118, 12, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    146,
    (System_String_o *)v118,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v119 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v119, 13, 28, 1, 0LL);
  if ( !v119 )
    goto LABEL_31;
  v120 = (System_String_o *)ConditionsInformation_CheckInfo__setRevival(v119, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    147,
    v120,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v121 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v121, 14, 28, 1, 0LL);
  if ( !v121 )
    goto LABEL_31;
  v122 = (System_String_o *)ConditionsInformation_CheckInfo__setRevival(v121, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    148,
    v122,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v123 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v123, 15, 28, 1, 0LL);
  if ( !v123 )
    goto LABEL_31;
  v124 = (System_String_o *)ConditionsInformation_CheckInfo__setRevival(v123, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    149,
    v124,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v125 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v125, 13, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    150,
    (System_String_o *)v125,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v126 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v126, 14, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    151,
    (System_String_o *)v126,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v127 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v127, 15, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    152,
    (System_String_o *)v127,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v128 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v128, 9, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    153,
    (System_String_o *)v128,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v129 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v129, 10, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    154,
    (System_String_o *)v129,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v130 = (ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_HigherBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(v130, 11, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    155,
    (System_String_o *)v130,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v131 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v131, 13, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    156,
    (System_String_o *)v131,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v132 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v132, 14, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    157,
    (System_String_o *)v132,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v133 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v133, 15, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    158,
    (System_String_o *)v133,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v134 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v134, 9, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    159,
    (System_String_o *)v134,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v135 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v135, 10, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    160,
    (System_String_o *)v135,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v136 = (ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_LowerBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(v136, 11, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    161,
    (System_String_o *)v136,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v137 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v137, 13, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    162,
    (System_String_o *)v137,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v138 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v138, 14, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    163,
    (System_String_o *)v138,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v139 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v139, 15, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    164,
    (System_String_o *)v139,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v140 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v140, 9, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    165,
    (System_String_o *)v140,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v141 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v141, 10, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    166,
    (System_String_o *)v141,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v142 = (ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *)sub_B70764(ConditionsInformation_EqualBuffIndividualitySumCheckInfo_TypeInfo);
  ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(v142, 11, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    167,
    (System_String_o *)v142,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v143 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v143, 1, 29, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    168,
    (System_String_o *)v143,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v144 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v144, 1, 30, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    169,
    (System_String_o *)v144,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v145 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v145, 1, 30, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    170,
    (System_String_o *)v145,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v146 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v146, 1, 31, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    171,
    (System_String_o *)v146,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v147 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v147, 1, 31, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    172,
    (System_String_o *)v147,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v148 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v148, 1, 31, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    173,
    (System_String_o *)v148,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v149 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v149, 1, 32, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    174,
    (System_String_o *)v149,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v150 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v150, 2, 7, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    175,
    (System_String_o *)v150,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v151 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v151, 2, 7, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    176,
    (System_String_o *)v151,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v152 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v152, 1, 33, 3, 0LL);
  if ( !v152 )
    goto LABEL_31;
  v153 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v152, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    178,
    v153,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v154 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v154, 1, 33, 4, 0LL);
  if ( !v154 )
    goto LABEL_31;
  v155 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v154, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    179,
    v155,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v156 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v156, 1, 33, 1, 0LL);
  if ( !v156 )
    goto LABEL_31;
  v157 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v156, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    180,
    v157,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v158 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v158, 1, 34, 1, 0LL);
  if ( !v158 )
    goto LABEL_31;
  v159 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v158, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    177,
    v159,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v160 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v160, 1, 35, 6, 0LL);
  if ( !v160 )
    goto LABEL_31;
  v161 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v160, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    181,
    v161,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v162 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v162, 1, 36, 3, 0LL);
  if ( !v162 )
    goto LABEL_31;
  v163 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v162, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    182,
    v163,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v164 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v164, 1, 36, 4, 0LL);
  if ( !v164 )
    goto LABEL_31;
  v165 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v164, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    183,
    v165,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v166 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v166, 1, 36, 1, 0LL);
  if ( !v166 )
    goto LABEL_31;
  v167 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v166, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    184,
    v167,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v168 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v168, 1, 37, 3, 0LL);
  if ( !v168 )
    goto LABEL_31;
  v169 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v168, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    185,
    v169,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v170 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v170, 1, 37, 4, 0LL);
  if ( !v170 )
    goto LABEL_31;
  v171 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v170, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    186,
    v171,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v172 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v172, 1, 37, 1, 0LL);
  if ( !v172 )
    goto LABEL_31;
  v173 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v172, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    187,
    v173,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v174 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v174, 1, 38, 3, 0LL);
  if ( !v174 )
    goto LABEL_31;
  v175 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v174, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    188,
    v175,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v176 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v176, 1, 38, 4, 0LL);
  if ( !v176
    || (v177 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v176, 1, 0LL),
        System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
          v1,
          189,
          v177,
          (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__),
        v178 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo),
        ConditionsInformation_CheckInfo___ctor_21270052(v178, 1, 38, 1, 0LL),
        !v178) )
  {
LABEL_31:
    sub_B7076C(v3, v4);
  }
  v179 = (System_String_o *)ConditionsInformation_CheckInfo__setParams(v178, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    190,
    v179,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v180 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v180, 1, 39, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    191,
    (System_String_o *)v180,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v181 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v181, 1, 39, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    192,
    (System_String_o *)v181,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v182 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v182, 1, 39, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    193,
    (System_String_o *)v182,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v183 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v183, 1, 40, 6, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    194,
    (System_String_o *)v183,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v184 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v184, 3, 6, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    195,
    (System_String_o *)v184,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v185 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v185, 2, 6, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    196,
    (System_String_o *)v185,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v186 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v186, 1, 41, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    197,
    (System_String_o *)v186,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v187 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v187, 1, 41, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    198,
    (System_String_o *)v187,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v188 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v188, 1, 41, 2, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    199,
    (System_String_o *)v188,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v189 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v189, 1, 41, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    200,
    (System_String_o *)v189,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v190 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v190, 1, 41, 7, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    201,
    (System_String_o *)v190,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v191 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v191, 1, 41, 8, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    202,
    (System_String_o *)v191,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v192 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v192, 1, 42, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    203,
    (System_String_o *)v192,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v193 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v193, 1, 43, 9, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    204,
    (System_String_o *)v193,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v194 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v194, 1, 44, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    205,
    (System_String_o *)v194,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v195 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v195, 1, 44, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    206,
    (System_String_o *)v195,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v196 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v196, 1, 44, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    207,
    (System_String_o *)v196,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v197 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v197, 1, 45, 3, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    208,
    (System_String_o *)v197,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v198 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v198, 1, 45, 4, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    209,
    (System_String_o *)v198,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  v199 = (ConditionsInformation_CheckInfo_o *)sub_B70764(ConditionsInformation_CheckInfo_TypeInfo);
  ConditionsInformation_CheckInfo___ctor_21270052(v199, 1, 45, 1, 0LL);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    210,
    (System_String_o *)v199,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__Add__);
  static_fields = ConditionsInformation_TypeInfo->static_fields;
  static_fields->FuncList = (struct System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__o *)v1;
  sub_B70630(
    (BattleServantConfConponent_o *)&static_fields->FuncList,
    (System_Int32_array **)v1,
    v201,
    v202,
    v203,
    v204,
    v205,
    v206);
}


void __fastcall ConditionsInformation___ctor(ConditionsInformation_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ConditionsInformation__IsAllExists(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  unsigned __int64 max_length; // x8
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x12
  unsigned __int64 v6; // x13
  double v7; // d1
  __int64 v9; // x0

  if ( !entVals )
LABEL_19:
    sub_B7076C(selfVals, entVals);
  max_length = entVals->max_length;
  if ( (__int64)(max_length << 32) < 1 )
    return 1;
  v4 = 0LL;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
LABEL_18:
      v9 = sub_B70798(selfVals);
      sub_B70738(v9, 0LL);
    }
    if ( !selfVals )
      goto LABEL_19;
    v5 = selfVals->max_length;
    if ( (__int64)(v5 << 32) < 1 )
      return 0;
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= v5 )
        goto LABEL_18;
      v7 = selfVals->m_Items[v6];
      if ( v7 == INFINITY )
        v7 = -INFINITY;
      if ( (int)v7 == LODWORD(entVals->m_Items[v4]) )
        break;
      if ( (__int64)++v6 >= (int)v5 )
        return 0;
    }
    if ( (__int64)++v4 >= (int)max_length )
      return 1;
  }
}


bool __fastcall ConditionsInformation__IsBetween(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  System_Double_array *v4; // x19
  ConditionsInformation_c *v5; // x0
  ConditionsInformation_c *v6; // x8
  System_Int64_array *v7; // x21
  __int64 BETWEEN_MIN_IDX; // x8
  const MethodInfo *v9; // x2
  __int64 BETWEEN_MAX_IDX; // x8
  System_Int64_array *v11; // x22
  const MethodInfo *v12; // x2
  __int64 v14; // x0

  v4 = selfVals;
  if ( (byte_43534EF & 1) == 0 )
  {
    sub_B70694(&ConditionsInformation_TypeInfo);
    selfVals = (System_Double_array *)sub_B70694(&long___TypeInfo);
    byte_43534EF = 1;
  }
  if ( !entVals )
    goto LABEL_23;
  v5 = ConditionsInformation_TypeInfo;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
    v5 = ConditionsInformation_TypeInfo;
  }
  if ( v5->static_fields->BETWEEN_VALUE_SIZE != entVals->max_length )
    return 0;
  selfVals = (System_Double_array *)sub_B706AC(long___TypeInfo, 1LL);
  v6 = ConditionsInformation_TypeInfo;
  v7 = (System_Int64_array *)selfVals;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
    v6 = ConditionsInformation_TypeInfo;
  }
  BETWEEN_MIN_IDX = v6->static_fields->BETWEEN_MIN_IDX;
  if ( (unsigned int)BETWEEN_MIN_IDX >= entVals->max_length )
    goto LABEL_24;
  if ( !v7 )
    goto LABEL_23;
  if ( !v7->max_length
    || (v7->m_Items[0] = entVals->m_Items[BETWEEN_MIN_IDX],
        selfVals = (System_Double_array *)sub_B706AC(long___TypeInfo, 1LL),
        BETWEEN_MAX_IDX = ConditionsInformation_TypeInfo->static_fields->BETWEEN_MAX_IDX,
        (unsigned int)BETWEEN_MAX_IDX >= entVals->max_length) )
  {
LABEL_24:
    v14 = sub_B70798(selfVals);
    sub_B70738(v14, 0LL);
  }
  v11 = (System_Int64_array *)selfVals;
  if ( !selfVals )
LABEL_23:
    sub_B7076C(selfVals, entVals);
  if ( !selfVals->max_length )
    goto LABEL_24;
  *(_QWORD *)&selfVals->m_Items[0] = entVals->m_Items[BETWEEN_MAX_IDX];
  if ( !ConditionsInformation__isHigher(v4, v7, v9) )
    return 0;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  return ConditionsInformation__isLower(v4, v11, v12);
}


bool __fastcall ConditionsInformation__IsNotBetween(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  if ( (byte_43534F0 & 1) == 0 )
  {
    sub_B70694(&ConditionsInformation_TypeInfo);
    byte_43534F0 = 1;
  }
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  return !ConditionsInformation__IsBetween(selfVals, entVals, method);
}


ConditionsInformation_CheckInfo_o *__fastcall ConditionsInformation__getCheckFunction(
        int32_t cond,
        const MethodInfo *method)
{
  ConditionsInformation_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *FuncList; // x0

  if ( (byte_43534F1 & 1) == 0 )
  {
    sub_B70694(&ConditionsInformation_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__get_Item__);
    byte_43534F1 = 1;
  }
  v3 = ConditionsInformation_TypeInfo;
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
    v3 = ConditionsInformation_TypeInfo;
  }
  FuncList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->FuncList;
  if ( !FuncList )
    sub_B7076C(0LL, method);
  return (ConditionsInformation_CheckInfo_o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                FuncList,
                                                cond,
                                                (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_Ai_COND__ConditionsInformation_CheckInfo__get_Item__);
}


bool __fastcall ConditionsInformation__isEqual(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  unsigned __int64 max_length; // x8
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x13
  __int64 v7; // x0

  if ( !selfVals )
LABEL_14:
    sub_B7076C(selfVals, entVals);
  max_length = selfVals->max_length;
  if ( (__int64)(max_length << 32) < 1 )
    return 1;
  v4 = 0LL;
  while ( 1 )
  {
    if ( !entVals )
      goto LABEL_14;
    v5 = entVals->max_length;
    if ( (__int64)v4 >= (int)v5 )
      return 1;
    if ( v4 >= max_length || v4 >= v5 )
    {
      v7 = sub_B70798(selfVals);
      sub_B70738(v7, 0LL);
    }
    if ( selfVals->m_Items[v4] != (double)entVals->m_Items[v4] )
      return 0;
    if ( (__int64)++v4 >= (int)max_length )
      return 1;
  }
}


bool __fastcall ConditionsInformation__isExist(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  unsigned __int64 max_length; // x8
  unsigned __int64 v4; // x9
  double v5; // d1
  signed int v6; // w11
  unsigned int v7; // w12
  __int64 v9; // x0

  if ( !selfVals )
LABEL_18:
    sub_B7076C(selfVals, entVals);
  max_length = selfVals->max_length;
  if ( (__int64)(max_length << 32) < 1 )
    return 0;
  v4 = 0LL;
  while ( 1 )
  {
    if ( v4 >= max_length )
    {
LABEL_17:
      v9 = sub_B70798(selfVals);
      sub_B70738(v9, 0LL);
    }
    v5 = selfVals->m_Items[v4];
    if ( v5 == INFINITY )
      v5 = -INFINITY;
    if ( !entVals )
      goto LABEL_18;
    v6 = entVals->max_length;
    if ( v6 >= 1 )
      break;
LABEL_13:
    if ( (__int64)++v4 >= (int)max_length )
      return 0;
  }
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= v6 )
      goto LABEL_17;
    if ( (int)v5 == LODWORD(entVals->m_Items[v7]) )
      return 1;
    if ( (int)++v7 >= v6 )
      goto LABEL_13;
  }
}


bool __fastcall ConditionsInformation__isHigher(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  unsigned __int64 max_length; // x9
  char v4; // w8
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x14
  __int64 v7; // d0
  double v8; // d1
  __int64 v10; // x0

  if ( !selfVals )
    goto LABEL_13;
  max_length = selfVals->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v4 = 0;
    v5 = 0LL;
    while ( entVals )
    {
      v6 = entVals->max_length;
      if ( (__int64)v5 < (int)v6 )
      {
        if ( v5 >= v6 || v5 >= max_length )
        {
          v10 = sub_B70798(selfVals);
          sub_B70738(v10, 0LL);
        }
        v7 = entVals->m_Items[v5];
        v8 = selfVals->m_Items[v5++];
        v4 |= v8 >= (double)v7;
        if ( (__int64)v5 < (int)max_length )
          continue;
      }
      return v4 & 1;
    }
LABEL_13:
    sub_B7076C(selfVals, entVals);
  }
  v4 = 0;
  return v4 & 1;
}


bool __fastcall ConditionsInformation__isLower(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  unsigned __int64 max_length; // x9
  char v4; // w8
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x14
  __int64 v7; // d0
  double v8; // d1
  __int64 v10; // x0

  if ( !selfVals )
    goto LABEL_13;
  max_length = selfVals->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v4 = 0;
    v5 = 0LL;
    while ( entVals )
    {
      v6 = entVals->max_length;
      if ( (__int64)v5 < (int)v6 )
      {
        if ( v5 >= max_length || v5 >= v6 )
        {
          v10 = sub_B70798(selfVals);
          sub_B70738(v10, 0LL);
        }
        v7 = entVals->m_Items[v5];
        v8 = selfVals->m_Items[v5++];
        v4 |= v8 <= (double)v7;
        if ( (__int64)v5 < (int)max_length )
          continue;
      }
      return v4 & 1;
    }
LABEL_13:
    sub_B7076C(selfVals, entVals);
  }
  v4 = 0;
  return v4 & 1;
}


bool __fastcall ConditionsInformation__isMultiple(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  __int64 v3; // x8
  char v6; // w21
  unsigned __int64 v7; // x22
  int64_t *m_Items; // x23
  unsigned __int64 max_length; // x9
  double v10; // d0
  __int64 v12; // x0

  if ( !selfVals )
    goto LABEL_13;
  v3 = *(_QWORD *)&selfVals->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0;
    v7 = 0LL;
    m_Items = entVals->m_Items;
    while ( entVals )
    {
      max_length = entVals->max_length;
      if ( (__int64)v7 < (int)max_length )
      {
        if ( v7 >= (unsigned int)v3 || v7 >= max_length )
        {
          v12 = sub_B70798(selfVals);
          sub_B70738(v12, 0LL);
        }
        v10 = fmod(selfVals->m_Items[v7], (double)m_Items[v7]);
        LODWORD(v3) = selfVals->max_length;
        ++v7;
        v6 |= v10 == 0.0;
        if ( (__int64)v7 < (int)v3 )
          continue;
      }
      return v6 & 1;
    }
LABEL_13:
    sub_B7076C(selfVals, entVals);
  }
  v6 = 0;
  return v6 & 1;
}


bool __fastcall ConditionsInformation__isNone(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall ConditionsInformation__isNotEqual(
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  if ( (byte_43534EE & 1) == 0 )
  {
    sub_B70694(&ConditionsInformation_TypeInfo);
    byte_43534EE = 1;
  }
  if ( (BYTE3(ConditionsInformation_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ConditionsInformation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ConditionsInformation_TypeInfo);
  }
  return !ConditionsInformation__isEqual(selfVals, entVals, method);
}


void __fastcall ConditionsInformation_BuffIndividualitySumCheckInfo___ctor(
        ConditionsInformation_BuffIndividualitySumCheckInfo_o *this,
        int32_t inTarget,
        int32_t inCheck,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ConditionsInformation_CheckInfo___ctor_21270052((ConditionsInformation_CheckInfo_o *)this, inTarget, 27, inCheck, v4);
  this->fields.isParams = 1;
}


void __fastcall ConditionsInformation_CheckInfo___ctor(
        ConditionsInformation_CheckInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x9
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_434FAF1 & 1) == 0 )
  {
    sub_B70694(&Method_ConditionsInformation_isNone__);
    sub_B70694(&ConditionsInformation_ISCheckFunction_TypeInfo);
    byte_434FAF1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.check = 0;
  *(_QWORD *)&this->fields.target = 1LL;
  v3 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
  v4 = *(_QWORD *)Method_ConditionsInformation_isNone__;
  *(_QWORD *)(v3 + 40) = Method_ConditionsInformation_isNone__;
  *(_QWORD *)(v3 + 16) = v4;
  *(_QWORD *)(v3 + 32) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.func = (struct ConditionsInformation_ISCheckFunction_o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.func,
    (System_Int32_array **)v3,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall ConditionsInformation_CheckInfo___ctor_21270052(
        ConditionsInformation_CheckInfo_o *this,
        int32_t inTarget,
        int32_t inParamater,
        int32_t inCheck,
        const MethodInfo *method)
{
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  void **v16; // x8
  struct ConditionsInformation_ISCheckFunction_o *v17; // x20
  __int64 *v18; // x8
  __int64 v19; // x9
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_434FAF2 & 1) == 0 )
  {
    sub_B70694(&Method_ConditionsInformation_IsAllExists__);
    sub_B70694(&Method_ConditionsInformation_IsBetween__);
    sub_B70694(&Method_ConditionsInformation_IsNotBetween__);
    sub_B70694(&Method_ConditionsInformation_isEqual__);
    sub_B70694(&Method_ConditionsInformation_isExist__);
    sub_B70694(&Method_ConditionsInformation_isHigher__);
    sub_B70694(&Method_ConditionsInformation_isLower__);
    sub_B70694(&Method_ConditionsInformation_isMultiple__);
    sub_B70694(&Method_ConditionsInformation_isNotEqual__);
    sub_B70694(&ConditionsInformation_ISCheckFunction_TypeInfo);
    byte_434FAF2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.target = inTarget;
  this->fields.paramater = inParamater;
  this->fields.check = inCheck;
  switch ( inCheck )
  {
    case 1:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_isEqual__;
      goto LABEL_12;
    case 2:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_isNotEqual__;
      goto LABEL_12;
    case 3:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_isHigher__;
      goto LABEL_12;
    case 4:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_isLower__;
      goto LABEL_12;
    case 5:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_isMultiple__;
      goto LABEL_12;
    case 6:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_isExist__;
      goto LABEL_12;
    case 7:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_IsBetween__;
      goto LABEL_12;
    case 8:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_IsNotBetween__;
      goto LABEL_12;
    case 9:
      v9 = sub_B70764(ConditionsInformation_ISCheckFunction_TypeInfo);
      v16 = &Method_ConditionsInformation_IsAllExists__;
LABEL_12:
      v17 = (struct ConditionsInformation_ISCheckFunction_o *)v9;
      v18 = (__int64 *)*v16;
      v19 = *v18;
      *(_QWORD *)(v9 + 40) = v18;
      *(_QWORD *)(v9 + 16) = v19;
      *(_QWORD *)(v9 + 32) = 0LL;
      sub_B70630((BattleServantConfConponent_o *)(v9 + 32), 0LL, v10, v11, v12, v13, v14, v15);
      this->fields.func = v17;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.func,
        (System_Int32_array **)v17,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      break;
    default:
      return;
  }
}


ConditionsInformation_ISCheckFunction_o *__fastcall ConditionsInformation_CheckInfo__getCheckFunction(
        ConditionsInformation_CheckInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.func;
}


ConditionsInformation_CheckInfo_o *__fastcall ConditionsInformation_CheckInfo__setIsIndiv(
        ConditionsInformation_CheckInfo_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isIndiv = flg;
  return this;
}


ConditionsInformation_CheckInfo_o *__fastcall ConditionsInformation_CheckInfo__setParams(
        ConditionsInformation_CheckInfo_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isParams = flg;
  return this;
}


ConditionsInformation_CheckInfo_o *__fastcall ConditionsInformation_CheckInfo__setRefine(
        ConditionsInformation_CheckInfo_o *this,
        int32_t inRefine,
        const MethodInfo *method)
{
  this->fields.refine = inRefine;
  return this;
}


ConditionsInformation_CheckInfo_o *__fastcall ConditionsInformation_CheckInfo__setRevival(
        ConditionsInformation_CheckInfo_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isRevival = flg;
  return this;
}


void __fastcall ConditionsInformation_EqualBuffIndividualitySumCheckInfo___ctor(
        ConditionsInformation_EqualBuffIndividualitySumCheckInfo_o *this,
        int32_t inTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ConditionsInformation_CheckInfo___ctor_21270052((ConditionsInformation_CheckInfo_o *)this, inTarget, 27, 1, v3);
  this->fields.isParams = 1;
}


void __fastcall ConditionsInformation_ExistIndividualityCheckInfo___ctor(
        ConditionsInformation_ExistIndividualityCheckInfo_o *this,
        int32_t inTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ConditionsInformation_CheckInfo___ctor_21270052((ConditionsInformation_CheckInfo_o *)this, inTarget, 13, 6, v3);
}


void __fastcall ConditionsInformation_HigherBuffIndividualitySumCheckInfo___ctor(
        ConditionsInformation_HigherBuffIndividualitySumCheckInfo_o *this,
        int32_t inTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ConditionsInformation_CheckInfo___ctor_21270052((ConditionsInformation_CheckInfo_o *)this, inTarget, 27, 3, v3);
  this->fields.isParams = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ConditionsInformation_ISCheckFunction___ctor(
        ConditionsInformation_ISCheckFunction_o *this,
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
  sub_B70630(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall ConditionsInformation_ISCheckFunction__BeginInvoke(
        ConditionsInformation_ISCheckFunction_o *this,
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7[3]; // [xsp+8h] [xbp-18h] BYREF

  v7[1] = (__int64)entVals;
  v7[2] = 0LL;
  v7[0] = (__int64)selfVals;
  return (System_IAsyncResult_o *)sub_B70638(this, v7, callback, object);
}


bool __fastcall ConditionsInformation_ISCheckFunction__EndInvoke(
        ConditionsInformation_ISCheckFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  v3 = sub_B7063C(result, 0LL, method);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3);
}


bool __fastcall ConditionsInformation_ISCheckFunction__Invoke(
        ConditionsInformation_ISCheckFunction_o *this,
        System_Double_array *selfVals,
        System_Int64_array *entVals,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ConditionsInformation_ISCheckFunction_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w23
  __int64 class_0; // x0
  Il2CppClass *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  Il2CppMethodPointer methodPtr; // x0
  char v18; // w0
  unsigned int v19; // w24
  __int64 v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 p_method; // x0
  __int64 (__fastcall **v27)(System_Double_array *, System_Int64_array *, _QWORD); // x0
  __int64 v28; // x0
  __int64 (__fastcall **v29)(__int64 *, System_Double_array *, System_Int64_array *, _QWORD); // x0
  ConditionsInformation_ISCheckFunction_o *v30; // x8
  __int64 v31; // x22
  __int64 *v32; // x23
  __int64 (__fastcall *v33)(System_Double_array *, System_Int64_array *, __int64); // x24
  char v34; // w0
  int v35; // w8
  char v36; // w24
  char v37; // w0
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w23
  char v44; // w0
  Il2CppClass *klass; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  ConditionsInformation_ISCheckFunction_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v51;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (ConditionsInformation_ISCheckFunction_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v30 = v9[v10];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(__int64 (__fastcall **)(System_Double_array *, System_Int64_array *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v30->fields.extra_arg, selfVals);
      v34 = sub_B706C4(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 2 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B706BC(v31);
            v44 = sub_B70AC0(v31);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = selfVals->obj.klass;
                v46 = *(_QWORD *)(v31 + 24);
                v47 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&selfVals->obj.klass->_2.bitflags1 )
                {
                  v48 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v46 )
                  {
                    ++v48;
                    p_offset += 4;
                    if ( v48 >= *(unsigned __int16 *)&selfVals->obj.klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  p_method = (__int64)&klass->vtable[*p_offset + (int)v47].method;
                }
                else
                {
LABEL_57:
                  p_method = sub_B08590(selfVals, v46, v47);
                }
                methodPtr = *(Il2CppMethodPointer *)(p_method + 8);
              }
              else
              {
                methodPtr = selfVals->obj.klass->vtable[*(unsigned __int16 *)(v31 + 72) + 1].methodPtr;
              }
              v27 = (__int64 (__fastcall **)(System_Double_array *, System_Int64_array *, _QWORD))sub_B70744(
                                                                                                    methodPtr,
                                                                                                    v31);
              v18 = (*v27)(selfVals, entVals, v27);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v31 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = selfVals->obj.klass;
                if ( *(_WORD *)&selfVals->obj.klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&selfVals->obj.klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)&v13->vtable[*v15 + v11].method;
                }
                else
                {
LABEL_11:
                  v16 = sub_B08590(selfVals, class_0, v11);
                }
                v18 = (*(__int64 (__fastcall **)(System_Double_array *, System_Int64_array *, _QWORD))v16)(
                        selfVals,
                        entVals,
                        *(_QWORD *)(v16 + 8));
              }
              else
              {
                v18 = ((__int64 (__fastcall *)(System_Double_array *, System_Int64_array *, Il2CppMethodPointer))selfVals->obj.klass->vtable[*(unsigned __int16 *)(v31 + 72)].method)(
                        selfVals,
                        entVals,
                        selfVals->obj.klass->vtable[*(unsigned __int16 *)(v31 + 72) + 1].methodPtr);
              }
            }
            goto LABEL_59;
          }
LABEL_58:
          v18 = v33(selfVals, entVals, v31);
          goto LABEL_59;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B706BC(v31);
          v37 = sub_B70AC0(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v38 = *v32;
              v39 = *(_QWORD *)(v31 + 24);
              v40 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_B08590(v32, v39, v40);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (__int64 (__fastcall **)(__int64 *, System_Double_array *, System_Int64_array *, _QWORD))sub_B70744(v25, v31);
            v18 = (*v29)(v32, selfVals, entVals, v29);
          }
          else
          {
            v19 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v20 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v20 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v19) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_B08590(v32, v20, v19);
              }
              v18 = (*(__int64 (__fastcall **)(__int64 *, System_Double_array *, System_Int64_array *, _QWORD))v24)(
                      v32,
                      selfVals,
                      entVals,
                      *(_QWORD *)(v24 + 8));
            }
            else
            {
              v18 = (*(__int64 (__fastcall **)(__int64 *, System_Double_array *, System_Int64_array *, _QWORD))(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 312))(
                      v32,
                      selfVals,
                      entVals,
                      *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          goto LABEL_59;
        }
      }
      v18 = ((__int64 (__fastcall *)(__int64 *, System_Double_array *, System_Int64_array *, __int64))v33)(
              v32,
              selfVals,
              entVals,
              v31);
LABEL_59:
      if ( ++v10 == v8 )
        return v18 & 1;
    }
  }
  v18 = 0;
  return v18 & 1;
}


void __fastcall ConditionsInformation_LowerBuffIndividualitySumCheckInfo___ctor(
        ConditionsInformation_LowerBuffIndividualitySumCheckInfo_o *this,
        int32_t inTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ConditionsInformation_CheckInfo___ctor_21270052((ConditionsInformation_CheckInfo_o *)this, inTarget, 27, 4, v3);
  this->fields.isParams = 1;
}


void __fastcall ConditionsInformation_TotalCountEqualIndividualityCheckInfo___ctor(
        ConditionsInformation_TotalCountEqualIndividualityCheckInfo_o *this,
        int32_t inTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ConditionsInformation_CheckInfo___ctor_21270052((ConditionsInformation_CheckInfo_o *)this, inTarget, 27, 1, v3);
  this->fields.isParams = 1;
  this->fields.refine = 4;
}


void __fastcall ConditionsInformation_TotalCountHigherIndividualityCheckInfo___ctor(
        ConditionsInformation_TotalCountHigherIndividualityCheckInfo_o *this,
        int32_t inTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ConditionsInformation_CheckInfo___ctor_21270052((ConditionsInformation_CheckInfo_o *)this, inTarget, 27, 3, v3);
  this->fields.isParams = 1;
  this->fields.refine = 4;
}


void __fastcall ConditionsInformation_TotalCountLowerIndividualityCheckInfo___ctor(
        ConditionsInformation_TotalCountLowerIndividualityCheckInfo_o *this,
        int32_t inTarget,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  ConditionsInformation_CheckInfo___ctor_21270052((ConditionsInformation_CheckInfo_o *)this, inTarget, 27, 4, v3);
  this->fields.isParams = 1;
  this->fields.refine = 4;
}