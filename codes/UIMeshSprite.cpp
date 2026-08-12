void UIMeshSprite___ctor(UIMeshSprite_o *this, const MethodInfo *method)
{
  this->fields.meshType = 1;
  UISprite___ctor((UISprite_o *)this, 0);
}


void UIMeshSprite__Initialize(UIMeshSprite_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Array_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Array_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Array_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Array_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x20
  System_Array_o *v41; // x21
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Array_o *v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Array_o *v55; // x21
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_Array_o *v62; // x21
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct UIMeshSprite_StaticFields *static_fields; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  __int64 v76; // x20
  System_Array_o *v77; // x21
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  System_Array_o *v84; // x21
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_Array_o *v91; // x21
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  System_Array_o *v98; // x21
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  struct UIMeshSprite_StaticFields *v105; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  __int64 v112; // x20
  System_Array_o *v113; // x21
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  System_Array_o *v120; // x21
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  System_Array_o *v127; // x21
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  System_Array_o *v134; // x21
  System_String_o *v135; // x2
  System_String_o *v136; // x3
  int32_t v137; // w4
  int32_t v138; // w5
  bool v139; // w6
  bool v140; // w7
  struct UIMeshSprite_StaticFields *v141; // x0
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  struct UIMeshSprite_StaticFields *v148; // x8
  struct System_Int32_array_array *meshPolygons; // x9
  __int64 max_length_low; // x10
  unsigned __int64 v151; // x11
  int32x2_t *v152; // x12
  unsigned __int64 v153; // x13
  int32x2_t *v154; // x12
  __int64 v155; // x14
  int32x2_t *v156; // x15
  unsigned __int64 v157; // x14
  unsigned __int64 v158; // x15
  __int64 v159; // x13
  struct System_Int32_array_array *uvIndex; // x12
  int32x2_t *v161; // x14
  unsigned __int64 v162; // x15
  unsigned __int64 v163; // x12
  unsigned __int64 v164; // x13
  int32x2_t *v165; // x14
  __int64 v166; // x15
  __int64 v167; // x0
  struct UIMeshSprite_StaticFields *v168; // x8
  System_String_o *v169; // x2
  System_String_o *v170; // x3
  int32_t v171; // w4
  int32_t v172; // w5
  bool v173; // w6
  bool v174; // w7
  __int64 v175; // x0
  struct UIMeshSprite_StaticFields *v176; // x8
  System_String_o *v177; // x2
  System_String_o *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  unsigned __int64 v183; // x22
  struct UIMeshSprite_StaticFields *v184; // x9
  struct System_Double_array_array *meshVertices; // x8
  struct System_Double_array_array *uvPos; // x9
  System_Double_array *v187; // x21
  System_Double_array *v188; // x28
  __int64 v189; // x20
  unsigned __int64 v190; // x8
  __int64 v191; // x9
  float *v192; // x10
  int v193; // w11
  unsigned int max_length; // w14
  int v195; // w13
  int v196; // w12
  double v197; // d2
  float v198; // s1
  float v199; // s0
  System_String_o *v200; // x2
  System_String_o *v201; // x3
  int32_t v202; // w4
  int32_t v203; // w5
  bool v204; // w6
  bool v205; // w7
  __int64 v206; // x21
  __int64 v207; // x11
  unsigned __int64 v208; // x10
  __int64 v209; // x8
  unsigned __int64 v210; // x12
  unsigned __int64 v211; // x13
  float64x2_t *v212; // x13
  bool v213; // zf
  int32x2_t v214; // d1
  float v215; // s3
  float32x2_t v216; // d0
  __int64 v217; // x8
  float *v218; // x10
  __int64 v219; // x11
  float v220; // s2
  float v221; // s4
  float v222; // s3
  float32x2_t v223; // d2
  unsigned __int64 v224; // x9
  float *v225; // x10
  float v226; // s4
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x8
  Il2CppClass **v228; // x0
  System_String_o *v229; // x2
  System_String_o *v230; // x3
  int32_t v231; // w4
  int32_t v232; // w5
  bool v233; // w6
  bool v234; // w7
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x8
  Il2CppClass **v236; // x0

  if ( (byte_597219D & 1) == 0 )
  {
    sub_2213A60(&double_____TypeInfo);
    sub_2213A60(&double___TypeInfo);
    sub_2213A60(&int_____TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08);
    sub_2213A60(&Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E);
    sub_2213A60(&Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D);
    sub_2213A60(&Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C);
    sub_2213A60(&Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E);
    sub_2213A60(&Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4);
    sub_2213A60(&Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE);
    sub_2213A60(&Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48);
    sub_2213A60(&Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB);
    sub_2213A60(&Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F);
    sub_2213A60(&UIMeshSprite_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2_____TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3_____TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    byte_597219D = 1;
  }
  if ( !UIMeshSprite_TypeInfo->static_fields->sprMeshVert )
  {
    v3 = sub_2213B20(double_____TypeInfo, 4);
    v4 = (System_Array_o *)sub_2213B20(double___TypeInfo, 12);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
      v4,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB,
      0);
    if ( v3 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_92;
      *(_QWORD *)(v3 + 32) = v4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v4, v7, v8, v9, v10, v11, v12);
      v13 = (System_Array_o *)sub_2213B20(double___TypeInfo, 18);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
        v13,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D,
        0);
      if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_92;
      *(_QWORD *)(v3 + 40) = v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      v20 = (System_Array_o *)sub_2213B20(double___TypeInfo, 12);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
        v20,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB,
        0);
      if ( *(_DWORD *)(v3 + 24) <= 2u )
        goto LABEL_92;
      *(_QWORD *)(v3 + 48) = v20;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 48), (int32_t)v20, v21, v22, v23, v24, v25, v26);
      v27 = (System_Array_o *)sub_2213B20(double___TypeInfo, 12);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
        v27,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB,
        0);
      if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFC) == 0 )
        goto LABEL_92;
      *(_QWORD *)(v3 + 56) = v27;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 56), (int32_t)v27, v28, v29, v30, v31, v32, v33);
      UIMeshSprite_TypeInfo->static_fields->meshVertices = (struct System_Double_array_array *)v3;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)UIMeshSprite_TypeInfo->static_fields,
        v3,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      v40 = sub_2213B20(int_____TypeInfo, 4);
      v41 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
        v41,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C,
        0);
      if ( v40 )
      {
        if ( !*(_DWORD *)(v40 + 24) )
          goto LABEL_92;
        *(_QWORD *)(v40 + 32) = v41;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 32), (int32_t)v41, v42, v43, v44, v45, v46, v47);
        v48 = (System_Array_o *)sub_2213B20(int___TypeInfo, 8);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
          v48,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F,
          0);
        if ( (*(_DWORD *)(v40 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_92;
        *(_QWORD *)(v40 + 40) = v48;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 40), (int32_t)v48, v49, v50, v51, v52, v53, v54);
        v55 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
          v55,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C,
          0);
        if ( *(_DWORD *)(v40 + 24) <= 2u )
          goto LABEL_92;
        *(_QWORD *)(v40 + 48) = v55;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 48), (int32_t)v55, v56, v57, v58, v59, v60, v61);
        v62 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
          v62,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C,
          0);
        if ( (*(_DWORD *)(v40 + 24) & 0xFFFFFFFC) == 0 )
          goto LABEL_92;
        *(_QWORD *)(v40 + 56) = v62;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 56), (int32_t)v62, v63, v64, v65, v66, v67, v68);
        static_fields = UIMeshSprite_TypeInfo->static_fields;
        static_fields->meshPolygons = (struct System_Int32_array_array *)v40;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->meshPolygons, v40, v70, v71, v72, v73, v74, v75);
        v76 = sub_2213B20(double_____TypeInfo, 4);
        v77 = (System_Array_o *)sub_2213B20(double___TypeInfo, 8);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
          v77,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4,
          0);
        if ( v76 )
        {
          if ( !*(_DWORD *)(v76 + 24) )
            goto LABEL_92;
          *(_QWORD *)(v76 + 32) = v77;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 32), (int32_t)v77, v78, v79, v80, v81, v82, v83);
          v84 = (System_Array_o *)sub_2213B20(double___TypeInfo, 12);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
            v84,
            (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08,
            0);
          if ( (*(_DWORD *)(v76 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_92;
          *(_QWORD *)(v76 + 40) = v84;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 40), (int32_t)v84, v85, v86, v87, v88, v89, v90);
          v91 = (System_Array_o *)sub_2213B20(double___TypeInfo, 8);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
            v91,
            (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48,
            0);
          if ( *(_DWORD *)(v76 + 24) <= 2u )
            goto LABEL_92;
          *(_QWORD *)(v76 + 48) = v91;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 48), (int32_t)v91, v92, v93, v94, v95, v96, v97);
          v98 = (System_Array_o *)sub_2213B20(double___TypeInfo, 8);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
            v98,
            (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E,
            0);
          if ( (*(_DWORD *)(v76 + 24) & 0xFFFFFFFC) == 0 )
            goto LABEL_92;
          *(_QWORD *)(v76 + 56) = v98;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 56), (int32_t)v98, v99, v100, v101, v102, v103, v104);
          v105 = UIMeshSprite_TypeInfo->static_fields;
          v105->uvPos = (struct System_Double_array_array *)v76;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v105->uvPos, v76, v106, v107, v108, v109, v110, v111);
          v112 = sub_2213B20(int_____TypeInfo, 4);
          v113 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
            v113,
            (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE,
            0);
          if ( v112 )
          {
            if ( !*(_DWORD *)(v112 + 24) )
              goto LABEL_92;
            *(_QWORD *)(v112 + 32) = v113;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v112 + 32),
              (int32_t)v113,
              v114,
              v115,
              v116,
              v117,
              v118,
              v119);
            v120 = (System_Array_o *)sub_2213B20(int___TypeInfo, 8);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
              v120,
              (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E,
              0);
            if ( (*(_DWORD *)(v112 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_92;
            *(_QWORD *)(v112 + 40) = v120;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v112 + 40),
              (int32_t)v120,
              v121,
              v122,
              v123,
              v124,
              v125,
              v126);
            v127 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
              v127,
              (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE,
              0);
            if ( *(_DWORD *)(v112 + 24) <= 2u )
              goto LABEL_92;
            *(_QWORD *)(v112 + 48) = v127;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v112 + 48),
              (int32_t)v127,
              v128,
              v129,
              v130,
              v131,
              v132,
              v133);
            v134 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
              v134,
              (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE,
              0);
            if ( (*(_DWORD *)(v112 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_92;
            *(_QWORD *)(v112 + 56) = v134;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v112 + 56),
              (int32_t)v134,
              v135,
              v136,
              v137,
              v138,
              v139,
              v140);
            v141 = UIMeshSprite_TypeInfo->static_fields;
            v141->uvIndex = (struct System_Int32_array_array *)v112;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v141->uvIndex, v112, v142, v143, v144, v145, v146, v147);
            v148 = UIMeshSprite_TypeInfo->static_fields;
            meshPolygons = v148->meshPolygons;
            if ( meshPolygons )
            {
              max_length_low = LODWORD(meshPolygons->max_length);
              v151 = 0;
              while ( 1 )
              {
                if ( v151 == max_length_low )
                  goto LABEL_92;
                v152 = (int32x2_t *)meshPolygons->m_Items[v151];
                if ( !v152 )
                  break;
                v153 = v152[3].n64_u64[0];
                if ( (int)v153 >= 1 )
                {
                  v154 = v152 + 4;
                  v155 = (unsigned int)v153;
                  v156 = v154;
                  do
                  {
                    if ( (v156->n64_u32[0] & 0x80000000) != 0 )
                      v156->n64_u32[0] = ~v156->n64_u32[0];
                    --v155;
                    v156 = (int32x2_t *)((char *)v156 + 4);
                  }
                  while ( v155 );
                  if ( (_DWORD)v153 != 1 )
                  {
                    v157 = 0;
                    v158 = (unsigned int)v153;
                    v159 = (unsigned int)v153 & 0xFFFFFFFE;
                    do
                    {
                      if ( v157 >= v158 || v157 + 1 >= v158 )
                        goto LABEL_92;
                      v157 += 2LL;
                      v154->n64_u64[0] = vrev64_s32((int32x2_t)v154->n64_u64[0]).n64_u64[0];
                      ++v154;
                    }
                    while ( v159 != v157 );
                  }
                }
                uvIndex = v148->uvIndex;
                if ( !uvIndex )
                  break;
                if ( v151 >= LODWORD(uvIndex->max_length) )
                  goto LABEL_92;
                v161 = (int32x2_t *)uvIndex->m_Items[v151];
                if ( !v161 )
                  break;
                v162 = v161[3].n64_u64[0];
                if ( (int)v162 >= 2 )
                {
                  v163 = 0;
                  v164 = (unsigned int)v161[3].n64_u64[0];
                  v165 = v161 + 4;
                  v166 = (unsigned int)v162 & 0xFFFFFFFE;
                  do
                  {
                    if ( v163 >= v164 || v163 + 1 >= v164 )
                      goto LABEL_92;
                    v163 += 2LL;
                    v165->n64_u64[0] = vrev64_s32((int32x2_t)v165->n64_u64[0]).n64_u64[0];
                    ++v165;
                  }
                  while ( v166 != v163 );
                }
                if ( ++v151 == 4 )
                {
                  v167 = sub_2213B20(UnityEngine_Vector3_____TypeInfo, 4);
                  v168 = UIMeshSprite_TypeInfo->static_fields;
                  v168->sprMeshVert = (struct UnityEngine_Vector3_array_array *)v167;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v168->sprMeshVert,
                    v167,
                    v169,
                    v170,
                    v171,
                    v172,
                    v173,
                    v174);
                  v175 = sub_2213B20(UnityEngine_Vector2_____TypeInfo, 4);
                  v176 = UIMeshSprite_TypeInfo->static_fields;
                  v176->sprMeshUv = (struct UnityEngine_Vector2_array_array *)v175;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v176->sprMeshUv,
                    v175,
                    v177,
                    v178,
                    v179,
                    v180,
                    v181,
                    v182);
                  v183 = 0;
                  while ( 1 )
                  {
                    v184 = UIMeshSprite_TypeInfo->static_fields;
                    meshVertices = v184->meshVertices;
                    if ( !v184->meshVertices )
                      goto LABEL_93;
                    if ( v183 >= LODWORD(meshVertices->max_length) )
                      goto LABEL_92;
                    uvPos = v184->uvPos;
                    if ( !uvPos )
                      goto LABEL_93;
                    if ( v183 >= LODWORD(uvPos->max_length) )
                      goto LABEL_92;
                    v187 = meshVertices->m_Items[v183];
                    if ( !v187 )
                      goto LABEL_93;
                    v188 = uvPos->m_Items[v183];
                    v5 = sub_2213B20(UnityEngine_Vector3___TypeInfo, (unsigned int)(SLODWORD(v187->max_length) / 3));
                    if ( !v5 )
                      goto LABEL_93;
                    v189 = v5;
                    if ( (int)*(_QWORD *)(v5 + 24) >= 1 )
                      break;
LABEL_61:
                    if ( !v188 )
                      goto LABEL_93;
                    v5 = sub_2213B20(UnityEngine_Vector2___TypeInfo, (unsigned int)(SLODWORD(v188->max_length) / 2));
                    if ( !v5 )
                      goto LABEL_93;
                    v206 = v5;
                    if ( (int)*(_QWORD *)(v5 + 24) >= 1 )
                    {
                      v207 = 0;
                      v208 = 0;
                      v209 = (unsigned int)*(_QWORD *)(v5 + 24);
                      v210 = -1;
                      do
                      {
                        v211 = LODWORD(v188->max_length);
                        if ( v210 + 1 >= v211 )
                          goto LABEL_92;
                        v210 += 2LL;
                        if ( v210 >= v211 || v208 >= *(unsigned int *)(v5 + 24) )
                          goto LABEL_92;
                        v212 = (float64x2_t *)((char *)v188 + (v207 >> 29));
                        v207 += 0x200000000LL;
                        v213 = v209 == v208 + 1;
                        *(float32x2_t *)(v5 + 32 + 8 * v208++) = vcvt_f32_f64(v212[2]);
                      }
                      while ( !v213 );
                    }
                    if ( (int)*(_QWORD *)(v189 + 24) >= 1 )
                    {
                      v214.n64_u64[0] = 0;
                      v215 = 0.0;
                      v216.n64_u32[0] = 1148846080;
                      v217 = (unsigned int)*(_QWORD *)(v189 + 24);
                      v218 = (float *)(v189 + 36);
                      v219 = v217;
                      v220 = 1000.0;
                      do
                      {
                        v221 = *(v218 - 1);
                        if ( v221 >= v216.n64_f32[0] )
                        {
                          if ( v221 > v214.n64_f32[0] )
                            v214.n64_f32[0] = *(v218 - 1);
                        }
                        else
                        {
                          v216.n64_f32[0] = *(v218 - 1);
                        }
                        if ( *v218 >= v220 )
                        {
                          if ( *v218 > v215 )
                            v215 = *v218;
                        }
                        else
                        {
                          v220 = *v218;
                        }
                        --v219;
                        v218 += 3;
                      }
                      while ( v219 );
                      v214.n64_f32[0] = v214.n64_f32[0] - v216.n64_f32[0];
                      v222 = v215 - v220;
                      if ( v214.n64_f32[0] < v222 )
                        v214.n64_f32[0] = v222;
                      v216.n64_f32[1] = v220;
                      v223.n64_u64[0] = vdup_lane_s32(v214, 0).n64_u64[0];
                      v224 = 0;
                      v225 = (float *)(v189 + 40);
                      while ( v224 < *(unsigned int *)(v189 + 24) )
                      {
                        ++v224;
                        v226 = (float)(*v225 + 0.0) / v214.n64_f32[0];
                        *((float32x2_t *)v225 - 1) = vdiv_f32(vsub_f32(*(float32x2_t *)(v225 - 2), v216), v223);
                        *v225 = v226;
                        v225 += 3;
                        if ( v217 == v224 )
                          goto LABEL_86;
                      }
                      goto LABEL_92;
                    }
LABEL_86:
                    sprMeshVert = UIMeshSprite_TypeInfo->static_fields->sprMeshVert;
                    if ( !sprMeshVert )
                      goto LABEL_93;
                    if ( v183 >= LODWORD(sprMeshVert->max_length) )
                      goto LABEL_92;
                    v228 = &sprMeshVert->obj.klass + v183;
                    v228[4] = (Il2CppClass *)v189;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v228 + 4),
                      v189,
                      v200,
                      v201,
                      v202,
                      v203,
                      v204,
                      v205);
                    sprMeshUv = UIMeshSprite_TypeInfo->static_fields->sprMeshUv;
                    if ( !sprMeshUv )
                      goto LABEL_93;
                    if ( v183 >= LODWORD(sprMeshUv->max_length) )
                      goto LABEL_92;
                    v236 = &sprMeshUv->obj.klass + v183;
                    v236[4] = (Il2CppClass *)v206;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v236 + 4),
                      v206,
                      v229,
                      v230,
                      v231,
                      v232,
                      v233,
                      v234);
                    if ( ++v183 == 4 )
                      goto LABEL_91;
                  }
                  v190 = 0;
                  v191 = (unsigned int)*(_QWORD *)(v5 + 24);
                  v192 = (float *)(v5 + 40);
                  v193 = 2;
                  while ( 1 )
                  {
                    max_length = v187->max_length;
                    v195 = v193 - 2;
                    if ( v193 - 2 >= max_length )
                      break;
                    v196 = v193 - 1;
                    if ( v193 - 1 >= max_length || v193 >= max_length || v190 >= *(unsigned int *)(v5 + 24) )
                      break;
                    ++v190;
                    v197 = v187->m_Items[v193];
                    v193 += 3;
                    v198 = v187->m_Items[v196];
                    *(float *)&v197 = v197;
                    v199 = v187->m_Items[v195];
                    *(v192 - 2) = v199;
                    *(v192 - 1) = v198;
                    *v192 = *(float *)&v197;
                    v192 += 3;
                    if ( v191 == v190 )
                      goto LABEL_61;
                  }
LABEL_92:
                  sub_2213CE4(v5);
                }
              }
            }
          }
        }
      }
    }
LABEL_93:
    sub_2213CDC(v5, v6);
  }
LABEL_91:
  this->fields.isEndInitialize = 1;
}


void UIMeshSprite__OnFill(
        UIMeshSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  UIAtlas_o *mAtlas; // x0
  __int64 v12; // x1
  struct UISpriteData_o *mSprite; // x8
  struct UISpriteData_o *Sprite; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t borderBottom; // w9
  int32_t borderTop; // w10
  int height; // w13
  int width; // w14
  int32_t borderLeft; // w11
  int32_t borderRight; // w12
  int x; // w8
  int v28; // w15
  int32_t *p_x; // t2
  float v30; // s10
  float v31; // s11
  float v32; // s8
  float v33; // s13
  float v34; // s14
  float v35; // s15
  float v36; // s12
  float v37; // s9
  int32_t v38; // w24
  int32_t v39; // w0
  int32_t v40; // w24
  int32_t v41; // w0
  const MethodInfo *v42; // x4
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v48; // 0:kr00_16.16
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v51; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_597219F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597219F = 1;
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIMeshSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                  this,
                                  this->klass->vtable._26_get_mainTexture.method,
                                  uvs,
                                  cols,
                                  method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  mAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
  if ( ((unsigned __int8)mAtlas & 1) == 0 )
  {
    mSprite = this->fields.mSprite;
    if ( !mSprite )
    {
      mAtlas = this->fields.mAtlas;
      if ( !mAtlas )
        goto LABEL_14;
      Sprite = UIAtlas__GetSprite(mAtlas, this->fields.mSpriteName, 0);
      this->fields.mSprite = Sprite;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mSprite,
        (int32_t)Sprite,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      mSprite = this->fields.mSprite;
      if ( !mSprite )
        return;
    }
    if ( v10 )
    {
      borderTop = mSprite->fields.borderTop;
      borderBottom = mSprite->fields.borderBottom;
      width = mSprite->fields.width;
      height = mSprite->fields.height;
      borderLeft = mSprite->fields.borderLeft;
      borderRight = mSprite->fields.borderRight;
      p_x = &mSprite->fields.x;
      x = mSprite->fields.x;
      v28 = p_x[1];
      v30 = (float)height;
      v31 = (float)width;
      v32 = (float)(height - (borderBottom + borderTop));
      v33 = (float)x;
      v34 = (float)(v28 + borderTop);
      v35 = (float)(x + borderLeft);
      v36 = (float)v28;
      v37 = (float)(width - (borderLeft + borderRight));
      v38 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
              v10,
              v10->klass[1]._1.gc_desc);
      v39 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
              v10,
              *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      v49.fields.m_XMin = v33;
      v49.fields.m_YMin = v36;
      v49.fields.m_Width = v31;
      v49.fields.m_Height = v30;
      v48 = NGUIMath__ConvertToTexCoords(v49, v38, v39, 0);
      v40 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
              v10,
              v10->klass[1]._1.gc_desc);
      v41 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
              v10,
              *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      v50.fields.m_XMin = v35;
      v50.fields.m_YMin = v34;
      v50.fields.m_Width = v37;
      v50.fields.m_Height = v32;
      NGUIMath__ConvertToTexCoords(v50, v40, v41, 0);
      if ( verts )
      {
        size = verts->fields.size;
        UIMeshSprite__RotFill(this, verts, uvs, cols, v48, v51, v42);
        onPostFill = this->fields.onPostFill;
        if ( onPostFill )
          ((void (__fastcall *)(intptr_t, UIMeshSprite_o *, _QWORD, BetterList_Vector3__o *, BetterList_Vector2__o *, BetterList_Color32__o *, intptr_t))onPostFill->fields.invoke_impl)(
            onPostFill->fields.method_code,
            this,
            size,
            verts,
            uvs,
            cols,
            onPostFill->fields.method);
        return;
      }
    }
LABEL_14:
    sub_2213CDC(mAtlas, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIMeshSprite__RotFill(
        UIMeshSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        UnityEngine_Rect_o outer,
        UnityEngine_Rect_o inner,
        const MethodInfo *method)
{
  float m_Height; // s8
  float m_Width; // s9
  float m_YMin; // s10
  float m_XMin; // s11
  UIMeshSprite_c *klass; // x8
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s12
  float v20; // s3
  float v21; // s13
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UnityEngine_Color32_o drawingColor; // x0
  const MethodInfo *v25; // x1
  unsigned int rgba; // w22
  struct UIMeshSprite_StaticFields *static_fields; // x12
  struct System_Int32_array_array *meshPolygons; // x10
  __int64 meshType; // x8
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x9
  struct System_Int32_array_array *uvIndex; // x11
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x12
  System_Int32_array *v33; // x23
  System_Int32_array *v34; // x29
  __int64 v35; // x25
  float v36; // s13
  float v37; // s12
  UnityEngine_Vector3_array *v38; // x26
  UnityEngine_Vector2_array *v39; // x27
  unsigned int v40; // w8
  __int64 v41; // x9
  __int64 v42; // x8
  float v43; // s0
  float v44; // s1
  __int64 v45; // x8
  float v46; // s8
  float v47; // s9
  UnityEngine_Color32_o v48; // x1
  il2cpp_array_size_t max_length; // [xsp+0h] [xbp-B0h]
  float v50; // [xsp+8h] [xbp-A8h]
  float v51; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector4_o drawingUVs; // 0:kr00_16.16
  UnityEngine_Vector2_o v53; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  m_Height = outer.fields.m_Height;
  m_Width = outer.fields.m_Width;
  m_YMin = outer.fields.m_YMin;
  m_XMin = outer.fields.m_XMin;
  if ( (byte_59721A0 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_Vector3__Add__);
    sub_2213A60(&Method_BetterList_Color32__Add__);
    sub_2213A60(&Method_BetterList_Vector2__Add__);
    sub_2213A60(&UIMeshSprite_TypeInfo);
    byte_59721A0 = 1;
  }
  this->fields.mOuterUV.fields.m_XMin = m_XMin;
  klass = this->klass;
  this->fields.mOuterUV.fields.m_YMin = m_YMin;
  this->fields.mOuterUV.fields.m_Width = m_Width;
  this->fields.mOuterUV.fields.m_Height = m_Height;
  v16 = ((float (__fastcall *)(UIMeshSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *, long double, long double, long double, long double, long double, long double, long double, long double))klass->vtable._23_get_drawingDimensions.methodPtr)(
          this,
          klass->vtable._23_get_drawingDimensions.method,
          uvs,
          cols,
          method,
          *(long double *)&outer,
          *(long double *)&outer.fields.m_YMin,
          *(long double *)&outer.fields.m_Width,
          *(long double *)&outer.fields.m_Height,
          *(long double *)&inner,
          *(long double *)&inner.fields.m_YMin,
          *(long double *)&inner.fields.m_Width,
          *(long double *)&inner.fields.m_Height);
  v50 = v17;
  v51 = v16;
  v19 = v18;
  v21 = v20;
  drawingUVs = UIMeshSprite__get_drawingUVs(this, v22);
  drawingColor = UIMeshSprite__get_drawingColor(this, v23);
  rgba = drawingColor.fields.rgba;
  if ( !this->fields.isEndInitialize )
    UIMeshSprite__Initialize(this, v25);
  static_fields = UIMeshSprite_TypeInfo->static_fields;
  meshPolygons = static_fields->meshPolygons;
  if ( !meshPolygons )
    goto LABEL_28;
  meshType = this->fields.meshType;
  if ( (unsigned int)meshType >= LODWORD(meshPolygons->max_length) )
    goto LABEL_29;
  sprMeshVert = static_fields->sprMeshVert;
  if ( !sprMeshVert )
    goto LABEL_28;
  if ( (unsigned int)meshType >= LODWORD(sprMeshVert->max_length) )
    goto LABEL_29;
  uvIndex = static_fields->uvIndex;
  if ( !uvIndex )
    goto LABEL_28;
  if ( (unsigned int)meshType >= LODWORD(uvIndex->max_length) )
    goto LABEL_29;
  sprMeshUv = static_fields->sprMeshUv;
  if ( !sprMeshUv )
    goto LABEL_28;
  if ( (unsigned int)meshType >= LODWORD(sprMeshUv->max_length) )
    goto LABEL_29;
  v33 = meshPolygons->m_Items[meshType];
  if ( !v33 )
LABEL_28:
    sub_2213CDC(drawingColor, v25);
  max_length = v33->max_length;
  if ( (int)max_length >= 1 )
  {
    v34 = uvIndex->m_Items[meshType];
    v35 = 0;
    v36 = v21 - v50;
    v37 = v19 - v51;
    v38 = sprMeshVert->m_Items[meshType];
    v39 = sprMeshUv->m_Items[meshType];
    while ( (unsigned int)v35 < LODWORD(v33->max_length) )
    {
      if ( !v38 )
        goto LABEL_28;
      v40 = v33->m_Items[v35];
      if ( v40 >= LODWORD(v38->max_length) )
        break;
      if ( !v34 )
        goto LABEL_28;
      if ( (unsigned int)v35 >= LODWORD(v34->max_length) )
        break;
      if ( !v39 )
        goto LABEL_28;
      v41 = v34->m_Items[v35];
      if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
        break;
      if ( !verts )
        goto LABEL_28;
      v42 = (__int64)v38 + 12 * (int)v40;
      v43 = *(float *)(v42 + 32);
      v44 = *(float *)(v42 + 36);
      v45 = (__int64)v39 + 8 * v41;
      v46 = *(float *)(v45 + 32);
      v47 = *(float *)(v45 + 36);
      v54.fields.y = v50 + (float)(v36 * v44);
      v54.fields.x = v51 + (float)(v37 * v43);
      v54.fields.z = 0.0;
      BetterList_Vector3___Add(verts, v54, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
      if ( !uvs )
        goto LABEL_28;
      v53.fields.y = drawingUVs.fields.y + (float)((float)(drawingUVs.fields.w - drawingUVs.fields.y) * v47);
      v53.fields.x = drawingUVs.fields.x + (float)((float)(drawingUVs.fields.z - drawingUVs.fields.x) * v46);
      BetterList_Vector2___Add(uvs, v53, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        goto LABEL_28;
      v48 = (UnityEngine_Color32_o)rgba;
      BetterList_Color32___Add(cols, v48, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
      if ( (_DWORD)max_length == (_DWORD)++v35 )
        return;
    }
LABEL_29:
    ((void (__fastcall __noreturn *)(_QWORD))sub_2213CE4)(drawingColor);
  }
}


UnityEngine_Color32_o UIMeshSprite__get_drawingColor(UIMeshSprite_o *this, const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float finalAlpha; // s8
  float r; // s11
  __int64 v7; // x1
  double v8; // d1
  UnityEngine_Color_o v10; // 0:kr00_16.16
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597219E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_597219E = 1;
  }
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  finalAlpha = this->fields.finalAlpha;
  r = this->fields.mColor.fields.r;
  if ( (((__int64 (__fastcall *)(UIMeshSprite_o *, const MethodInfo *))this->klass->vtable._41_get_premultipliedAlpha.methodPtr)(
          this,
          this->klass->vtable._41_get_premultipliedAlpha.method)
      & 1) != 0 )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
    v11.fields.r = r;
    v11.fields.g = g;
    v11.fields.b = b;
    v11.fields.a = finalAlpha;
    v10 = NGUITools__ApplyPMA(v11, 0);
    r = v10.fields.r;
    g = v10.fields.g;
    b = v10.fields.b;
    finalAlpha = v10.fields.a;
  }
  if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
  {
    r = powf(r, 2.2);
    g = powf(g, 2.2);
    b = powf(b, 2.2);
  }
  *(float *)&v8 = g;
  return (UnityEngine_Color32_o)sub_2BB24C8(0, r, v8, b, finalAlpha);
}


UnityEngine_Vector4_o UIMeshSprite__get_drawingUVs(UIMeshSprite_o *this, const MethodInfo *method)
{
  int32_t mFlip; // w8
  float m_Height; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mFlip = this->fields.mFlip;
  if ( mFlip == 3 )
  {
    result.fields.z = this->fields.mOuterUV.fields.m_XMin;
    result.fields.w = this->fields.mOuterUV.fields.m_YMin;
    result.fields.x = this->fields.mOuterUV.fields.m_Width + result.fields.z;
    result.fields.y = this->fields.mOuterUV.fields.m_Height + result.fields.w;
  }
  else if ( mFlip == 2 )
  {
    result.fields.x = this->fields.mOuterUV.fields.m_XMin;
    result.fields.w = this->fields.mOuterUV.fields.m_YMin;
    result.fields.y = this->fields.mOuterUV.fields.m_Height + result.fields.w;
    result.fields.z = result.fields.x + this->fields.mOuterUV.fields.m_Width;
  }
  else
  {
    if ( mFlip == 1 )
    {
      result.fields.z = this->fields.mOuterUV.fields.m_XMin;
      result.fields.y = this->fields.mOuterUV.fields.m_YMin;
      m_Height = this->fields.mOuterUV.fields.m_Height;
      result.fields.x = this->fields.mOuterUV.fields.m_Width + result.fields.z;
    }
    else
    {
      result.fields.x = this->fields.mOuterUV.fields.m_XMin;
      result.fields.y = this->fields.mOuterUV.fields.m_YMin;
      m_Height = this->fields.mOuterUV.fields.m_Height;
      result.fields.z = result.fields.x + this->fields.mOuterUV.fields.m_Width;
    }
    result.fields.w = result.fields.y + m_Height;
  }
  return result;
}