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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Array_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Array_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Array_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x20
  System_Array_o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Array_o *v48; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_Array_o *v55; // x21
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_Array_o *v62; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct UIMeshSprite_StaticFields *static_fields; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  __int64 v76; // x20
  System_Array_o *v77; // x21
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  System_Array_o *v84; // x21
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  System_Array_o *v91; // x21
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  System_Array_o *v98; // x21
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  struct UIMeshSprite_StaticFields *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  __int64 v112; // x20
  System_Array_o *v113; // x21
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  System_Array_o *v120; // x21
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  System_Array_o *v127; // x21
  int32_t v128; // w2
  int32_t v129; // w3
  System_String_o *v130; // x4
  int32_t v131; // w5
  int64_t v132; // x6
  System_String_o *v133; // x7
  System_Array_o *v134; // x21
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  struct UIMeshSprite_StaticFields *v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  System_String_o *v144; // x4
  int32_t v145; // w5
  int64_t v146; // x6
  System_String_o *v147; // x7
  struct UIMeshSprite_StaticFields *v148; // x8
  struct System_Int32_array_array *meshPolygons; // x9
  unsigned int max_length; // w10
  unsigned int v151; // w11
  int32x2_t *v152; // x12
  unsigned __int64 v153; // x13
  int32x2_t *v154; // x12
  __int64 v155; // x14
  int32x2_t *v156; // x15
  unsigned __int64 v157; // x15
  unsigned __int64 v158; // x14
  __int64 v159; // x13
  struct System_Int32_array_array *uvIndex; // x12
  int32x2_t *v161; // x14
  unsigned __int64 v162; // x15
  unsigned __int64 v163; // x13
  unsigned __int64 v164; // x12
  int32x2_t *v165; // x14
  __int64 v166; // x15
  __int64 v167; // x0
  struct UIMeshSprite_StaticFields *v168; // x8
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  __int64 v175; // x0
  struct UIMeshSprite_StaticFields *v176; // x8
  int32_t v177; // w2
  int32_t v178; // w3
  System_String_o *v179; // x4
  int32_t v180; // w5
  int64_t v181; // x6
  System_String_o *v182; // x7
  unsigned int v183; // w22
  struct UIMeshSprite_StaticFields *v184; // x9
  struct System_Double_array_array *meshVertices; // x8
  struct System_Double_array_array *uvPos; // x9
  System_Double_array *v187; // x21
  System_Double_array *v188; // x29
  __int64 v189; // x20
  unsigned int v190; // w8
  unsigned __int64 v191; // x9
  unsigned __int64 v192; // x10
  float *v193; // x11
  unsigned int v194; // w14
  float v195; // s0
  float v196; // s1
  float v197; // s2
  int32_t v198; // w2
  int32_t v199; // w3
  System_String_o *v200; // x4
  int32_t v201; // w5
  int64_t v202; // x6
  System_String_o *v203; // x7
  int32x2_t v204; // d2
  unsigned __int64 v205; // d4
  __int64 v206; // x21
  __int64 v207; // x12
  unsigned __int64 v208; // x10
  unsigned __int64 v209; // x8
  unsigned __int64 v210; // x11
  unsigned __int64 max_length_low; // x13
  float64x2_t v212; // q0
  bool v213; // zf
  __int64 v214; // x9
  unsigned __int64 v215; // x8
  float32x2_t v216; // d0
  __int64 v217; // x10
  float *v218; // x11
  float v219; // s1
  float v220; // s3
  float v221; // s3
  unsigned __int64 v222; // x9
  float32x2_t v223; // d1
  float *v224; // x10
  float v225; // s4
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x8
  Il2CppClass **v227; // x0
  int32_t v228; // w2
  int32_t v229; // w3
  System_String_o *v230; // x4
  int32_t v231; // w5
  int64_t v232; // x6
  System_String_o *v233; // x7
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x8
  Il2CppClass **v235; // x0

  if ( (byte_4D32289 & 1) == 0 )
  {
    sub_1C93AD4(&double_____TypeInfo);
    sub_1C93AD4(&double___TypeInfo);
    sub_1C93AD4(&int_____TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08);
    sub_1C93AD4(&Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E);
    sub_1C93AD4(&Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D);
    sub_1C93AD4(&Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C);
    sub_1C93AD4(&Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E);
    sub_1C93AD4(&Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4);
    sub_1C93AD4(&Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE);
    sub_1C93AD4(&Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48);
    sub_1C93AD4(&Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB);
    sub_1C93AD4(&Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F);
    sub_1C93AD4(&UIMeshSprite_TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector2_____TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector2___TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3_____TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    byte_4D32289 = 1;
  }
  if ( !UIMeshSprite_TypeInfo->static_fields->sprMeshVert )
  {
    v3 = sub_1C93B7C(double_____TypeInfo, 4);
    v4 = (System_Array_o *)sub_1C93B7C(double___TypeInfo, 12);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
      v4,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB,
      0);
    if ( v3 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_93;
      *(_QWORD *)(v3 + 32) = v4;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v4, v7, v8, v9, v10, v11, v12);
      v13 = (System_Array_o *)sub_1C93B7C(double___TypeInfo, 18);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
        v13,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D,
        0);
      if ( *(_DWORD *)(v3 + 24) <= 1u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 40) = v13;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      v20 = (System_Array_o *)sub_1C93B7C(double___TypeInfo, 12);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
        v20,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB,
        0);
      if ( *(_DWORD *)(v3 + 24) <= 2u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 48) = v20;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 48), (int32_t)v20, v21, v22, v23, v24, v25, v26);
      v27 = (System_Array_o *)sub_1C93B7C(double___TypeInfo, 12);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
        v27,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB,
        0);
      if ( *(_DWORD *)(v3 + 24) <= 3u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 56) = v27;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 56), (int32_t)v27, v28, v29, v30, v31, v32, v33);
      UIMeshSprite_TypeInfo->static_fields->meshVertices = (struct System_Double_array_array *)v3;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)UIMeshSprite_TypeInfo->static_fields, v3, v34, v35, v36, v37, v38, v39);
      v40 = sub_1C93B7C(int_____TypeInfo, 4);
      v41 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
        v41,
        (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C,
        0);
      if ( v40 )
      {
        if ( !*(_DWORD *)(v40 + 24) )
          goto LABEL_93;
        *(_QWORD *)(v40 + 32) = v41;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 32), (int32_t)v41, v42, v43, v44, v45, v46, v47);
        v48 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 8);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
          v48,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F,
          0);
        if ( *(_DWORD *)(v40 + 24) <= 1u )
          goto LABEL_93;
        *(_QWORD *)(v40 + 40) = v48;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 40), (int32_t)v48, v49, v50, v51, v52, v53, v54);
        v55 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
          v55,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C,
          0);
        if ( *(_DWORD *)(v40 + 24) <= 2u )
          goto LABEL_93;
        *(_QWORD *)(v40 + 48) = v55;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 48), (int32_t)v55, v56, v57, v58, v59, v60, v61);
        v62 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
          v62,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C,
          0);
        if ( *(_DWORD *)(v40 + 24) <= 3u )
          goto LABEL_93;
        *(_QWORD *)(v40 + 56) = v62;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 56), (int32_t)v62, v63, v64, v65, v66, v67, v68);
        static_fields = UIMeshSprite_TypeInfo->static_fields;
        static_fields->meshPolygons = (struct System_Int32_array_array *)v40;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->meshPolygons, v40, v70, v71, v72, v73, v74, v75);
        v76 = sub_1C93B7C(double_____TypeInfo, 4);
        v77 = (System_Array_o *)sub_1C93B7C(double___TypeInfo, 8);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
          v77,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4,
          0);
        if ( v76 )
        {
          if ( !*(_DWORD *)(v76 + 24) )
            goto LABEL_93;
          *(_QWORD *)(v76 + 32) = v77;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v76 + 32), (int32_t)v77, v78, v79, v80, v81, v82, v83);
          v84 = (System_Array_o *)sub_1C93B7C(double___TypeInfo, 12);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
            v84,
            (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08,
            0);
          if ( *(_DWORD *)(v76 + 24) <= 1u )
            goto LABEL_93;
          *(_QWORD *)(v76 + 40) = v84;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v76 + 40), (int32_t)v84, v85, v86, v87, v88, v89, v90);
          v91 = (System_Array_o *)sub_1C93B7C(double___TypeInfo, 8);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
            v91,
            (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48,
            0);
          if ( *(_DWORD *)(v76 + 24) <= 2u )
            goto LABEL_93;
          *(_QWORD *)(v76 + 48) = v91;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v76 + 48), (int32_t)v91, v92, v93, v94, v95, v96, v97);
          v98 = (System_Array_o *)sub_1C93B7C(double___TypeInfo, 8);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
            v98,
            (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E,
            0);
          if ( *(_DWORD *)(v76 + 24) <= 3u )
            goto LABEL_93;
          *(_QWORD *)(v76 + 56) = v98;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v76 + 56), (int32_t)v98, v99, v100, v101, v102, v103, v104);
          v105 = UIMeshSprite_TypeInfo->static_fields;
          v105->uvPos = (struct System_Double_array_array *)v76;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v105->uvPos, v76, v106, v107, v108, v109, v110, v111);
          v112 = sub_1C93B7C(int_____TypeInfo, 4);
          v113 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
            v113,
            (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE,
            0);
          if ( v112 )
          {
            if ( !*(_DWORD *)(v112 + 24) )
              goto LABEL_93;
            *(_QWORD *)(v112 + 32) = v113;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v112 + 32), (int32_t)v113, v114, v115, v116, v117, v118, v119);
            v120 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 8);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
              v120,
              (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E,
              0);
            if ( *(_DWORD *)(v112 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v112 + 40) = v120;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v112 + 40), (int32_t)v120, v121, v122, v123, v124, v125, v126);
            v127 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
              v127,
              (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE,
              0);
            if ( *(_DWORD *)(v112 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v112 + 48) = v127;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v112 + 48), (int32_t)v127, v128, v129, v130, v131, v132, v133);
            v134 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
              v134,
              (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE,
              0);
            if ( *(_DWORD *)(v112 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v112 + 56) = v134;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v112 + 56), (int32_t)v134, v135, v136, v137, v138, v139, v140);
            v141 = UIMeshSprite_TypeInfo->static_fields;
            v141->uvIndex = (struct System_Int32_array_array *)v112;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v141->uvIndex, v112, v142, v143, v144, v145, v146, v147);
            v148 = UIMeshSprite_TypeInfo->static_fields;
            meshPolygons = v148->meshPolygons;
            if ( meshPolygons )
            {
              max_length = meshPolygons->max_length;
              v151 = 0;
              while ( 1 )
              {
                if ( v151 >= max_length )
                  goto LABEL_93;
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
                  if ( (int)v153 >= 2 )
                  {
                    v157 = (unsigned int)v153;
                    v158 = 0;
                    v159 = 2LL * ((unsigned int)v153 >> 1);
                    do
                    {
                      if ( v158 >= v157 || v158 + 1 >= v157 )
                        goto LABEL_93;
                      v158 += 2LL;
                      v154->n64_u64[0] = vrev64_s32((int32x2_t)v154->n64_u64[0]).n64_u64[0];
                      ++v154;
                    }
                    while ( v159 != v158 );
                  }
                }
                uvIndex = v148->uvIndex;
                if ( !uvIndex )
                  break;
                if ( v151 >= LODWORD(uvIndex->max_length) )
                  goto LABEL_93;
                v161 = (int32x2_t *)uvIndex->m_Items[v151];
                if ( !v161 )
                  break;
                v162 = v161[3].n64_u64[0];
                if ( (int)v162 >= 2 )
                {
                  v163 = (unsigned int)v161[3].n64_u64[0];
                  v164 = 0;
                  v165 = v161 + 4;
                  v166 = 2LL * ((unsigned int)v162 >> 1);
                  do
                  {
                    if ( v164 >= v163 || v164 + 1 >= v163 )
                      goto LABEL_93;
                    v164 += 2LL;
                    v165->n64_u64[0] = vrev64_s32((int32x2_t)v165->n64_u64[0]).n64_u64[0];
                    ++v165;
                  }
                  while ( v166 != v164 );
                }
                if ( ++v151 == 4 )
                {
                  v167 = sub_1C93B7C(UnityEngine_Vector3_____TypeInfo, 4);
                  v168 = UIMeshSprite_TypeInfo->static_fields;
                  v168->sprMeshVert = (struct UnityEngine_Vector3_array_array *)v167;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&v168->sprMeshVert,
                    v167,
                    v169,
                    v170,
                    v171,
                    v172,
                    v173,
                    v174);
                  v175 = sub_1C93B7C(UnityEngine_Vector2_____TypeInfo, 4);
                  v176 = UIMeshSprite_TypeInfo->static_fields;
                  v176->sprMeshUv = (struct UnityEngine_Vector2_array_array *)v175;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v176->sprMeshUv, v175, v177, v178, v179, v180, v181, v182);
                  v183 = 0;
                  while ( 1 )
                  {
                    v184 = UIMeshSprite_TypeInfo->static_fields;
                    meshVertices = v184->meshVertices;
                    if ( !v184->meshVertices )
                      goto LABEL_94;
                    if ( v183 >= LODWORD(meshVertices->max_length) )
                      goto LABEL_93;
                    uvPos = v184->uvPos;
                    if ( !uvPos )
                      goto LABEL_94;
                    if ( v183 >= LODWORD(uvPos->max_length) )
                      goto LABEL_93;
                    v187 = meshVertices->m_Items[v183];
                    if ( !v187 )
                      goto LABEL_94;
                    v188 = uvPos->m_Items[v183];
                    v5 = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, (unsigned int)(SLODWORD(v187->max_length) / 3));
                    if ( !v5 )
                      goto LABEL_94;
                    v189 = v5;
                    if ( (int)*(_QWORD *)(v5 + 24) >= 1 )
                      break;
LABEL_61:
                    if ( !v188 )
                      goto LABEL_94;
                    v5 = sub_1C93B7C(UnityEngine_Vector2___TypeInfo, (unsigned int)(SLODWORD(v188->max_length) / 2));
                    if ( !v5 )
                      goto LABEL_94;
                    v206 = v5;
                    if ( (int)*(_QWORD *)(v5 + 24) >= 1 )
                    {
                      v207 = 0;
                      v208 = 0;
                      v209 = (unsigned int)*(_QWORD *)(v5 + 24);
                      v210 = -1;
                      do
                      {
                        max_length_low = LODWORD(v188->max_length);
                        if ( v210 + 1 >= max_length_low )
                          goto LABEL_93;
                        v210 += 2LL;
                        if ( v210 >= max_length_low || v208 >= v209 )
                          goto LABEL_93;
                        v212 = *(float64x2_t *)((char *)v188->m_Items + (v207 >> 29));
                        v207 += 0x200000000LL;
                        v213 = v209 == v208 + 1;
                        *(float32x2_t *)(v5 + 32 + 8 * v208++) = vcvt_f32_f64(v212);
                      }
                      while ( !v213 );
                    }
                    v214 = *(_QWORD *)(v189 + 24);
                    if ( (int)v214 >= 1 )
                    {
                      v215 = (unsigned int)*(_QWORD *)(v189 + 24);
                      v216.n64_u32[0] = 1148846080;
                      v217 = 0;
                      v218 = (float *)(v189 + 36);
                      v204.n64_u32[0] = 0;
                      v219 = 1000.0;
                      v220 = 0.0;
                      do
                      {
                        if ( v215 == v217 )
                          goto LABEL_93;
                        *(float *)&v205 = *(v218 - 1);
                        if ( *(float *)&v205 >= v216.n64_f32[0] )
                        {
                          if ( *(float *)&v205 > v204.n64_f32[0] )
                            v204.n64_u64[0] = v205;
                        }
                        else
                        {
                          v216.n64_f32[0] = *(v218 - 1);
                        }
                        if ( *v218 >= v219 )
                        {
                          if ( *v218 > v220 )
                            v220 = *v218;
                        }
                        else
                        {
                          v219 = *v218;
                        }
                        ++v217;
                        v218 += 3;
                      }
                      while ( v217 < (int)v214 );
                      v204.n64_f32[0] = v204.n64_f32[0] - v216.n64_f32[0];
                      v221 = v220 - v219;
                      if ( v204.n64_f32[0] < v221 )
                        v204.n64_f32[0] = v221;
                      v222 = 0;
                      v216.n64_f32[1] = v219;
                      v223.n64_u64[0] = vdup_lane_s32(v204, 0).n64_u64[0];
                      v224 = (float *)(v189 + 40);
                      while ( v222 < v215 )
                      {
                        ++v222;
                        v225 = (float)(*v224 + 0.0) / v204.n64_f32[0];
                        *((float32x2_t *)v224 - 1) = vdiv_f32(vsub_f32(*(float32x2_t *)(v224 - 2), v216), v223);
                        *v224 = v225;
                        v224 += 3;
                        if ( v215 == v222 )
                          goto LABEL_87;
                      }
                      goto LABEL_93;
                    }
LABEL_87:
                    sprMeshVert = UIMeshSprite_TypeInfo->static_fields->sprMeshVert;
                    if ( !sprMeshVert )
                      goto LABEL_94;
                    if ( v183 >= LODWORD(sprMeshVert->max_length) )
                      goto LABEL_93;
                    v227 = &sprMeshVert->obj.klass + (int)v183;
                    v227[4] = (Il2CppClass *)v189;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v227 + 4), v189, v198, v199, v200, v201, v202, v203);
                    sprMeshUv = UIMeshSprite_TypeInfo->static_fields->sprMeshUv;
                    if ( !sprMeshUv )
                      goto LABEL_94;
                    if ( v183 >= LODWORD(sprMeshUv->max_length) )
                      goto LABEL_93;
                    v235 = &sprMeshUv->obj.klass + (int)v183;
                    v235[4] = (Il2CppClass *)v206;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v235 + 4), v206, v228, v229, v230, v231, v232, v233);
                    if ( ++v183 == 4 )
                      goto LABEL_92;
                  }
                  v190 = 0;
                  v191 = 0;
                  v192 = (unsigned int)*(_QWORD *)(v5 + 24);
                  v193 = (float *)(v5 + 40);
                  while ( 1 )
                  {
                    v194 = v187->max_length;
                    if ( v190 >= v194 || v190 + 1 >= v194 || v190 + 2 >= v194 || v191 >= v192 )
                      break;
                    ++v191;
                    v195 = v187->m_Items[v190 + 2];
                    v196 = v187->m_Items[v190 + 1];
                    v197 = v187->m_Items[v190];
                    v190 += 3;
                    *(v193 - 2) = v197;
                    *(v193 - 1) = v196;
                    *v193 = v195;
                    v193 += 3;
                    if ( v192 == v191 )
                      goto LABEL_61;
                  }
LABEL_93:
                  sub_1C93D34(v5);
                }
              }
            }
          }
        }
      }
    }
LABEL_94:
    sub_1C93D2C(v5, v6);
  }
LABEL_92:
  this->fields.isEndInitialize = 1;
}


void UIMeshSprite__OnFill(
        UIMeshSprite_o *this,
        BetterList_Vector3__o *verts,
        BetterList_Vector2__o *uvs,
        BetterList_Color32__o *cols,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v9; // x23
  UIAtlas_o *mAtlas; // x0
  __int64 v11; // x1
  struct UISpriteData_o *mSprite; // x8
  struct UISpriteData_o *Sprite; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int width; // w11
  int height; // w12
  int32_t borderTop; // w13
  int x; // w9
  int y; // w10
  int32_t borderLeft; // w15
  float v26; // s8
  float v27; // s9
  float v28; // s12
  float v29; // s13
  float v30; // s14
  float v31; // s15
  float v32; // s10
  float v33; // s11
  int32_t v34; // w24
  int32_t v35; // w0
  int32_t v36; // w24
  int32_t v37; // w0
  const MethodInfo *v38; // x4
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v44; // 0:kr00_16.16
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4D3228B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3228B = 1;
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIMeshSprite_o *, const MethodInfo *, BetterList_Vector2__o *, BetterList_Color32__o *, const MethodInfo *))this->klass->vtable._26_get_mainTexture.methodPtr)(
                                 this,
                                 this->klass->vtable._26_get_mainTexture.method,
                                 uvs,
                                 cols,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mAtlas = (UIAtlas_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
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
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)Sprite, v14, v15, v16, v17, v18, v19);
      mSprite = this->fields.mSprite;
      if ( !mSprite )
        return;
    }
    if ( v9 )
    {
      width = mSprite->fields.width;
      height = mSprite->fields.height;
      borderTop = mSprite->fields.borderTop;
      x = mSprite->fields.x;
      y = mSprite->fields.y;
      borderLeft = mSprite->fields.borderLeft;
      v26 = (float)height;
      v27 = (float)width;
      v28 = (float)(borderTop + y);
      v29 = (float)(borderLeft + x);
      v30 = (float)(height - borderTop - mSprite->fields.borderBottom);
      v31 = (float)(width - borderLeft - mSprite->fields.borderRight);
      v32 = (float)y;
      v33 = (float)x;
      v34 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v35 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v45.fields.m_XMin = v33;
      v45.fields.m_YMin = v32;
      v45.fields.m_Width = v27;
      v45.fields.m_Height = v26;
      v44 = NGUIMath__ConvertToTexCoords(v45, v34, v35, 0);
      v36 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v37 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v46.fields.m_XMin = v29;
      v46.fields.m_YMin = v28;
      v46.fields.m_Width = v31;
      v46.fields.m_Height = v30;
      NGUIMath__ConvertToTexCoords(v46, v36, v37, 0);
      if ( verts )
      {
        size = verts->fields.size;
        UIMeshSprite__RotFill(this, verts, uvs, cols, v44, v47, v38);
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
    sub_1C93D2C(mAtlas, v11);
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
  struct System_Int32_array_array *meshPolygons; // x9
  __int64 meshType; // x8
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x10
  struct System_Int32_array_array *uvIndex; // x11
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x12
  System_Int32_array *v33; // x23
  il2cpp_array_size_t max_length; // x24
  float v35; // s13
  UnityEngine_Vector3_array *v36; // x28
  System_Int32_array *v37; // x29
  UnityEngine_Vector2_array *v38; // x25
  __int64 v39; // x9
  float v40; // s12
  int v41; // w26
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  __int64 v45; // x9
  float v46; // s8
  float v47; // s9
  float v49; // [xsp+8h] [xbp-A8h]
  float v50; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector4_o drawingUVs; // 0:kr00_16.16
  UnityEngine_Vector2_o v52; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  m_Height = outer.fields.m_Height;
  m_Width = outer.fields.m_Width;
  m_YMin = outer.fields.m_YMin;
  m_XMin = outer.fields.m_XMin;
  if ( (byte_4D3228C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_Vector3__Add__);
    sub_1C93AD4(&Method_BetterList_Color32__Add__);
    sub_1C93AD4(&Method_BetterList_Vector2__Add__);
    sub_1C93AD4(&UIMeshSprite_TypeInfo);
    byte_4D3228C = 1;
  }
  klass = this->klass;
  this->fields.mOuterUV.fields.m_XMin = m_XMin;
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
  v49 = v17;
  v50 = v16;
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
    goto LABEL_30;
  meshType = this->fields.meshType;
  if ( (unsigned int)meshType >= LODWORD(meshPolygons->max_length) )
    goto LABEL_28;
  sprMeshVert = static_fields->sprMeshVert;
  if ( !sprMeshVert )
    goto LABEL_30;
  if ( (unsigned int)meshType >= LODWORD(sprMeshVert->max_length) )
    goto LABEL_28;
  uvIndex = static_fields->uvIndex;
  if ( !uvIndex )
    goto LABEL_30;
  if ( (unsigned int)meshType >= LODWORD(uvIndex->max_length) )
    goto LABEL_28;
  sprMeshUv = static_fields->sprMeshUv;
  if ( !sprMeshUv )
    goto LABEL_30;
  if ( (unsigned int)meshType >= LODWORD(sprMeshUv->max_length) )
LABEL_28:
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C93D34)(drawingColor);
  v33 = meshPolygons->m_Items[meshType];
  if ( !v33 )
LABEL_30:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(drawingColor, v25);
  max_length = v33->max_length;
  if ( (int)max_length >= 1 )
  {
    v35 = v21 - v49;
    v36 = sprMeshVert->m_Items[meshType];
    v37 = uvIndex->m_Items[meshType];
    v38 = sprMeshUv->m_Items[meshType];
    v39 = 0;
    v40 = v19 - v50;
    v41 = 1;
    while ( v36 )
    {
      v42 = v33->m_Items[v39];
      if ( (unsigned int)v42 >= LODWORD(v36->max_length) )
        goto LABEL_28;
      if ( !v37 )
        break;
      if ( (unsigned int)(v41 - 1) >= LODWORD(v37->max_length) )
        goto LABEL_28;
      if ( !v38 )
        break;
      v43 = v37->m_Items[v39];
      if ( (unsigned int)v43 >= LODWORD(v38->max_length) )
        goto LABEL_28;
      if ( !verts )
        break;
      v44 = (__int64)v36 + 12 * v42;
      v45 = (__int64)v38 + 8 * v43;
      v53.fields.y = v49 + (float)(v35 * *(float *)(v44 + 36));
      v46 = *(float *)(v45 + 32);
      v47 = *(float *)(v45 + 36);
      v53.fields.x = v50 + (float)(v40 * *(float *)(v44 + 32));
      v53.fields.z = 0.0;
      BetterList_Vector3___Add(verts, v53, (const MethodInfo_33DDC38 *)Method_BetterList_Vector3__Add__);
      if ( !uvs )
        break;
      v52.fields.y = drawingUVs.fields.y + (float)((float)(drawingUVs.fields.w - drawingUVs.fields.y) * v47);
      v52.fields.x = drawingUVs.fields.x + (float)((float)(drawingUVs.fields.z - drawingUVs.fields.x) * v46);
      BetterList_Vector2___Add(uvs, v52, (const MethodInfo_33DD1AC *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        break;
      BetterList_Color32___Add(
        cols,
        (UnityEngine_Color32_o)rgba,
        (const MethodInfo_33DAC60 *)Method_BetterList_Color32__Add__);
      if ( (_DWORD)max_length == v41 )
        return;
      v39 = v41;
      if ( (unsigned int)v41++ >= LODWORD(v33->max_length) )
        goto LABEL_28;
    }
    goto LABEL_30;
  }
}


UnityEngine_Color32_o UIMeshSprite__get_drawingColor(UIMeshSprite_o *this, const MethodInfo *method)
{
  long double v2; // q8
  long double v3; // q9
  long double v4; // q10
  long double v5; // q11
  long double v7; // q0
  long double v8; // q0
  long double v9; // q0
  long double v10; // q0
  long double v11; // q1
  long double v12; // q2
  long double v13; // q3
  UnityEngine_Color_o v15; // 0:kr00_16.16
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D3228A & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D3228A = 1;
  }
  *(float *)&v4 = this->fields.mColor.fields.g;
  *(float *)&v3 = this->fields.mColor.fields.b;
  *(float *)&v2 = this->fields.finalAlpha;
  *(float *)&v5 = this->fields.mColor.fields.r;
  if ( (((__int64 (__fastcall *)(UIMeshSprite_o *, const MethodInfo *))this->klass->vtable._41_get_premultipliedAlpha.methodPtr)(
          this,
          this->klass->vtable._41_get_premultipliedAlpha.method)
      & 1) != 0 )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v16.fields.r = *(float *)&v5;
    v16.fields.g = *(float *)&v4;
    v16.fields.b = *(float *)&v3;
    v16.fields.a = *(float *)&v2;
    v15 = NGUITools__ApplyPMA(v16, 0);
    *(float *)&v10 = v15.fields.r;
    *(float *)&v11 = v15.fields.g;
    *(float *)&v12 = v15.fields.b;
    *(float *)&v13 = v15.fields.a;
    v5 = v10;
    v4 = v11;
    v3 = v12;
    v2 = v13;
  }
  if ( UnityEngine_QualitySettings__get_activeColorSpace(0) == 1 )
  {
    *(float *)&v7 = powf(*(float *)&v5, 2.2);
    v5 = v7;
    *(float *)&v8 = powf(*(float *)&v4, 2.2);
    v4 = v8;
    *(float *)&v9 = powf(*(float *)&v3, 2.2);
    v3 = v9;
  }
  return (UnityEngine_Color32_o)(unsigned int)sub_25BA1B8(0, v5, v4, v3, v2);
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