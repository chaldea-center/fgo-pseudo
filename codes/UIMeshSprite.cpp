void UIMeshSprite___ctor(UIMeshSprite_o *this, const MethodInfo *method)
{
  this->fields.meshType = 1;
  UISprite___ctor((UISprite_o *)this, 0);
}


void UIMeshSprite__Initialize(UIMeshSprite_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Array_o *v4; // x21
  System_RuntimeFieldHandle_o v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Array_o *v14; // x21
  System_RuntimeFieldHandle_o v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Array_o *v22; // x0
  System_RuntimeFieldHandle_o v23; // x1
  System_Array_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Array_o *v31; // x0
  System_RuntimeFieldHandle_o v32; // x1
  System_Array_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  __int64 v46; // x20
  System_Array_o *v47; // x21
  System_RuntimeFieldHandle_o v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  System_Array_o *v55; // x21
  System_RuntimeFieldHandle_o v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Array_o *v63; // x0
  System_RuntimeFieldHandle_o v64; // x1
  System_Array_o *v65; // x21
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Array_o *v72; // x0
  System_RuntimeFieldHandle_o v73; // x1
  System_Array_o *v74; // x21
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct UIMeshSprite_StaticFields *static_fields; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  __int64 v88; // x20
  System_Array_o *v89; // x21
  System_RuntimeFieldHandle_o v90; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  System_Array_o *v97; // x21
  System_RuntimeFieldHandle_o v98; // x1
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  System_Array_o *v105; // x21
  System_RuntimeFieldHandle_o v106; // x1
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  System_Array_o *v113; // x21
  System_RuntimeFieldHandle_o v114; // x1
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  struct UIMeshSprite_StaticFields *v121; // x0
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  __int64 v128; // x20
  System_Array_o *v129; // x21
  System_RuntimeFieldHandle_o v130; // x1
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  System_Array_o *v137; // x21
  System_RuntimeFieldHandle_o v138; // x1
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  System_Array_o *v145; // x0
  System_RuntimeFieldHandle_o v146; // x1
  System_Array_o *v147; // x21
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  System_Array_o *v154; // x0
  System_RuntimeFieldHandle_o v155; // x1
  System_Array_o *v156; // x21
  int32_t v157; // w2
  int32_t v158; // w3
  System_String_o *v159; // x4
  int32_t v160; // w5
  int64_t v161; // x6
  System_String_o *v162; // x7
  struct UIMeshSprite_StaticFields *v163; // x0
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  struct UIMeshSprite_StaticFields *v170; // x8
  struct System_Int32_array_array *meshPolygons; // x9
  unsigned int max_length; // w10
  unsigned int v173; // w11
  int32x2_t *v174; // x12
  unsigned __int64 v175; // x13
  int32x2_t *v176; // x12
  __int64 v177; // x14
  int32x2_t *v178; // x15
  unsigned __int64 v179; // x15
  unsigned __int64 v180; // x14
  __int64 v181; // x13
  struct System_Int32_array_array *uvIndex; // x12
  int32x2_t *v183; // x14
  unsigned __int64 v184; // x15
  unsigned __int64 v185; // x13
  unsigned __int64 v186; // x12
  int32x2_t *v187; // x14
  __int64 v188; // x15
  __int64 v189; // x0
  struct UIMeshSprite_StaticFields *v190; // x8
  int32_t v191; // w2
  int32_t v192; // w3
  System_String_o *v193; // x4
  int32_t v194; // w5
  int64_t v195; // x6
  System_String_o *v196; // x7
  __int64 v197; // x0
  struct UIMeshSprite_StaticFields *v198; // x8
  int32_t v199; // w2
  int32_t v200; // w3
  System_String_o *v201; // x4
  int32_t v202; // w5
  int64_t v203; // x6
  System_String_o *v204; // x7
  unsigned int v205; // w22
  struct UIMeshSprite_StaticFields *v206; // x9
  struct System_Double_array_array *meshVertices; // x8
  struct System_Double_array_array *uvPos; // x9
  System_Double_array *v209; // x21
  System_Double_array *v210; // x29
  __int64 v211; // x20
  unsigned int v212; // w8
  unsigned __int64 v213; // x9
  unsigned __int64 v214; // x10
  float *v215; // x11
  unsigned int v216; // w14
  float v217; // s0
  float v218; // s1
  float v219; // s2
  int32_t v220; // w2
  int32_t v221; // w3
  System_String_o *v222; // x4
  int32_t v223; // w5
  int64_t v224; // x6
  System_String_o *v225; // x7
  int32x2_t v226; // d2
  unsigned __int64 v227; // d4
  __int64 v228; // x21
  __int64 v229; // x12
  unsigned __int64 v230; // x10
  unsigned __int64 v231; // x8
  unsigned __int64 v232; // x11
  unsigned __int64 max_length_low; // x13
  float64x2_t v234; // q0
  bool v235; // zf
  __int64 v236; // x9
  unsigned __int64 v237; // x8
  float32x2_t v238; // d0
  __int64 v239; // x10
  float *v240; // x11
  float v241; // s1
  float v242; // s3
  float v243; // s3
  unsigned __int64 v244; // x9
  float32x2_t v245; // d1
  float *v246; // x10
  float v247; // s4
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x8
  Il2CppClass **v249; // x0
  int32_t v250; // w2
  int32_t v251; // w3
  System_String_o *v252; // x4
  int32_t v253; // w5
  int64_t v254; // x6
  System_String_o *v255; // x7
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x8
  Il2CppClass **v257; // x0

  if ( (byte_4D2E198 & 1) == 0 )
  {
    sub_1C94098(&double_____TypeInfo);
    sub_1C94098(&double___TypeInfo);
    sub_1C94098(&int_____TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08);
    sub_1C94098(&Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E);
    sub_1C94098(&Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D);
    sub_1C94098(&Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C);
    sub_1C94098(&Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E);
    sub_1C94098(&Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4);
    sub_1C94098(&Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE);
    sub_1C94098(&Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48);
    sub_1C94098(&Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB);
    sub_1C94098(&Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F);
    sub_1C94098(&UIMeshSprite_TypeInfo);
    sub_1C94098(&UnityEngine_Vector2_____TypeInfo);
    sub_1C94098(&UnityEngine_Vector2___TypeInfo);
    sub_1C94098(&UnityEngine_Vector3_____TypeInfo);
    sub_1C94098(&UnityEngine_Vector3___TypeInfo);
    byte_4D2E198 = 1;
  }
  if ( !UIMeshSprite_TypeInfo->static_fields->sprMeshVert )
  {
    v3 = sub_1C94140(double_____TypeInfo, 4);
    v4 = (System_Array_o *)sub_1C94140(double___TypeInfo, 12);
    v5.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v4, v5, 0);
    if ( v3 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_93;
      *(_QWORD *)(v3 + 32) = v4;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v4, v8, v9, v10, v11, v12, v13);
      v14 = (System_Array_o *)sub_1C94140(double___TypeInfo, 18);
      v15.fields.value = Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v14, v15, 0);
      if ( *(_DWORD *)(v3 + 24) <= 1u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 40) = v14;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v14, v16, v17, v18, v19, v20, v21);
      v22 = (System_Array_o *)sub_1C94140(double___TypeInfo, 12);
      v23.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
      v24 = v22;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v22, v23, 0);
      if ( *(_DWORD *)(v3 + 24) <= 2u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 48) = v24;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 48), (int32_t)v24, v25, v26, v27, v28, v29, v30);
      v31 = (System_Array_o *)sub_1C94140(double___TypeInfo, 12);
      v32.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
      v33 = v31;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v31, v32, 0);
      if ( *(_DWORD *)(v3 + 24) <= 3u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 56) = v33;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 56), (int32_t)v33, v34, v35, v36, v37, v38, v39);
      UIMeshSprite_TypeInfo->static_fields->meshVertices = (struct System_Double_array_array *)v3;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)UIMeshSprite_TypeInfo->static_fields, v3, v40, v41, v42, v43, v44, v45);
      v46 = sub_1C94140(int_____TypeInfo, 4);
      v47 = (System_Array_o *)sub_1C94140(int___TypeInfo, 4);
      v48.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v47, v48, 0);
      if ( v46 )
      {
        if ( !*(_DWORD *)(v46 + 24) )
          goto LABEL_93;
        *(_QWORD *)(v46 + 32) = v47;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v46 + 32), (int32_t)v47, v49, v50, v51, v52, v53, v54);
        v55 = (System_Array_o *)sub_1C94140(int___TypeInfo, 8);
        v56.fields.value = Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v55, v56, 0);
        if ( *(_DWORD *)(v46 + 24) <= 1u )
          goto LABEL_93;
        *(_QWORD *)(v46 + 40) = v55;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v46 + 40), (int32_t)v55, v57, v58, v59, v60, v61, v62);
        v63 = (System_Array_o *)sub_1C94140(int___TypeInfo, 4);
        v64.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
        v65 = v63;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v63, v64, 0);
        if ( *(_DWORD *)(v46 + 24) <= 2u )
          goto LABEL_93;
        *(_QWORD *)(v46 + 48) = v65;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v46 + 48), (int32_t)v65, v66, v67, v68, v69, v70, v71);
        v72 = (System_Array_o *)sub_1C94140(int___TypeInfo, 4);
        v73.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
        v74 = v72;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v72, v73, 0);
        if ( *(_DWORD *)(v46 + 24) <= 3u )
          goto LABEL_93;
        *(_QWORD *)(v46 + 56) = v74;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v46 + 56), (int32_t)v74, v75, v76, v77, v78, v79, v80);
        static_fields = UIMeshSprite_TypeInfo->static_fields;
        static_fields->meshPolygons = (struct System_Int32_array_array *)v46;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->meshPolygons, v46, v82, v83, v84, v85, v86, v87);
        v88 = sub_1C94140(double_____TypeInfo, 4);
        v89 = (System_Array_o *)sub_1C94140(double___TypeInfo, 8);
        v90.fields.value = Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v89, v90, 0);
        if ( v88 )
        {
          if ( !*(_DWORD *)(v88 + 24) )
            goto LABEL_93;
          *(_QWORD *)(v88 + 32) = v89;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v88 + 32), (int32_t)v89, v91, v92, v93, v94, v95, v96);
          v97 = (System_Array_o *)sub_1C94140(double___TypeInfo, 12);
          v98.fields.value = Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v97, v98, 0);
          if ( *(_DWORD *)(v88 + 24) <= 1u )
            goto LABEL_93;
          *(_QWORD *)(v88 + 40) = v97;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v88 + 40), (int32_t)v97, v99, v100, v101, v102, v103, v104);
          v105 = (System_Array_o *)sub_1C94140(double___TypeInfo, 8);
          v106.fields.value = Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v105, v106, 0);
          if ( *(_DWORD *)(v88 + 24) <= 2u )
            goto LABEL_93;
          *(_QWORD *)(v88 + 48) = v105;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v88 + 48), (int32_t)v105, v107, v108, v109, v110, v111, v112);
          v113 = (System_Array_o *)sub_1C94140(double___TypeInfo, 8);
          v114.fields.value = Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v113, v114, 0);
          if ( *(_DWORD *)(v88 + 24) <= 3u )
            goto LABEL_93;
          *(_QWORD *)(v88 + 56) = v113;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v88 + 56), (int32_t)v113, v115, v116, v117, v118, v119, v120);
          v121 = UIMeshSprite_TypeInfo->static_fields;
          v121->uvPos = (struct System_Double_array_array *)v88;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v121->uvPos, v88, v122, v123, v124, v125, v126, v127);
          v128 = sub_1C94140(int_____TypeInfo, 4);
          v129 = (System_Array_o *)sub_1C94140(int___TypeInfo, 4);
          v130.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v129, v130, 0);
          if ( v128 )
          {
            if ( !*(_DWORD *)(v128 + 24) )
              goto LABEL_93;
            *(_QWORD *)(v128 + 32) = v129;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v128 + 32), (int32_t)v129, v131, v132, v133, v134, v135, v136);
            v137 = (System_Array_o *)sub_1C94140(int___TypeInfo, 8);
            v138.fields.value = Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v137, v138, 0);
            if ( *(_DWORD *)(v128 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v128 + 40) = v137;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v128 + 40), (int32_t)v137, v139, v140, v141, v142, v143, v144);
            v145 = (System_Array_o *)sub_1C94140(int___TypeInfo, 4);
            v146.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
            v147 = v145;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v145, v146, 0);
            if ( *(_DWORD *)(v128 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v128 + 48) = v147;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v128 + 48), (int32_t)v147, v148, v149, v150, v151, v152, v153);
            v154 = (System_Array_o *)sub_1C94140(int___TypeInfo, 4);
            v155.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
            v156 = v154;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v154, v155, 0);
            if ( *(_DWORD *)(v128 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v128 + 56) = v156;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v128 + 56), (int32_t)v156, v157, v158, v159, v160, v161, v162);
            v163 = UIMeshSprite_TypeInfo->static_fields;
            v163->uvIndex = (struct System_Int32_array_array *)v128;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)&v163->uvIndex, v128, v164, v165, v166, v167, v168, v169);
            v170 = UIMeshSprite_TypeInfo->static_fields;
            meshPolygons = v170->meshPolygons;
            if ( meshPolygons )
            {
              max_length = meshPolygons->max_length;
              v173 = 0;
              while ( 1 )
              {
                if ( v173 >= max_length )
                  goto LABEL_93;
                v174 = (int32x2_t *)meshPolygons->m_Items[v173];
                if ( !v174 )
                  break;
                v175 = v174[3].n64_u64[0];
                if ( (int)v175 >= 1 )
                {
                  v176 = v174 + 4;
                  v177 = (unsigned int)v175;
                  v178 = v176;
                  do
                  {
                    if ( (v178->n64_u32[0] & 0x80000000) != 0 )
                      v178->n64_u32[0] = ~v178->n64_u32[0];
                    --v177;
                    v178 = (int32x2_t *)((char *)v178 + 4);
                  }
                  while ( v177 );
                  if ( (int)v175 >= 2 )
                  {
                    v179 = (unsigned int)v175;
                    v180 = 0;
                    v181 = 2LL * ((unsigned int)v175 >> 1);
                    do
                    {
                      if ( v180 >= v179 || v180 + 1 >= v179 )
                        goto LABEL_93;
                      v180 += 2LL;
                      v176->n64_u64[0] = vrev64_s32((int32x2_t)v176->n64_u64[0]).n64_u64[0];
                      ++v176;
                    }
                    while ( v181 != v180 );
                  }
                }
                uvIndex = v170->uvIndex;
                if ( !uvIndex )
                  break;
                if ( v173 >= LODWORD(uvIndex->max_length) )
                  goto LABEL_93;
                v183 = (int32x2_t *)uvIndex->m_Items[v173];
                if ( !v183 )
                  break;
                v184 = v183[3].n64_u64[0];
                if ( (int)v184 >= 2 )
                {
                  v185 = (unsigned int)v183[3].n64_u64[0];
                  v186 = 0;
                  v187 = v183 + 4;
                  v188 = 2LL * ((unsigned int)v184 >> 1);
                  do
                  {
                    if ( v186 >= v185 || v186 + 1 >= v185 )
                      goto LABEL_93;
                    v186 += 2LL;
                    v187->n64_u64[0] = vrev64_s32((int32x2_t)v187->n64_u64[0]).n64_u64[0];
                    ++v187;
                  }
                  while ( v188 != v186 );
                }
                if ( ++v173 == 4 )
                {
                  v189 = sub_1C94140(UnityEngine_Vector3_____TypeInfo, 4);
                  v190 = UIMeshSprite_TypeInfo->static_fields;
                  v190->sprMeshVert = (struct UnityEngine_Vector3_array_array *)v189;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)&v190->sprMeshVert,
                    v189,
                    v191,
                    v192,
                    v193,
                    v194,
                    v195,
                    v196);
                  v197 = sub_1C94140(UnityEngine_Vector2_____TypeInfo, 4);
                  v198 = UIMeshSprite_TypeInfo->static_fields;
                  v198->sprMeshUv = (struct UnityEngine_Vector2_array_array *)v197;
                  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v198->sprMeshUv, v197, v199, v200, v201, v202, v203, v204);
                  v205 = 0;
                  while ( 1 )
                  {
                    v206 = UIMeshSprite_TypeInfo->static_fields;
                    meshVertices = v206->meshVertices;
                    if ( !v206->meshVertices )
                      goto LABEL_94;
                    if ( v205 >= LODWORD(meshVertices->max_length) )
                      goto LABEL_93;
                    uvPos = v206->uvPos;
                    if ( !uvPos )
                      goto LABEL_94;
                    if ( v205 >= LODWORD(uvPos->max_length) )
                      goto LABEL_93;
                    v209 = meshVertices->m_Items[v205];
                    if ( !v209 )
                      goto LABEL_94;
                    v210 = uvPos->m_Items[v205];
                    v6 = sub_1C94140(UnityEngine_Vector3___TypeInfo, (unsigned int)(SLODWORD(v209->max_length) / 3));
                    if ( !v6 )
                      goto LABEL_94;
                    v211 = v6;
                    if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
                      break;
LABEL_61:
                    if ( !v210 )
                      goto LABEL_94;
                    v6 = sub_1C94140(UnityEngine_Vector2___TypeInfo, (unsigned int)(SLODWORD(v210->max_length) / 2));
                    if ( !v6 )
                      goto LABEL_94;
                    v228 = v6;
                    if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
                    {
                      v229 = 0;
                      v230 = 0;
                      v231 = (unsigned int)*(_QWORD *)(v6 + 24);
                      v232 = -1;
                      do
                      {
                        max_length_low = LODWORD(v210->max_length);
                        if ( v232 + 1 >= max_length_low )
                          goto LABEL_93;
                        v232 += 2LL;
                        if ( v232 >= max_length_low || v230 >= v231 )
                          goto LABEL_93;
                        v234 = *(float64x2_t *)((char *)v210->m_Items + (v229 >> 29));
                        v229 += 0x200000000LL;
                        v235 = v231 == v230 + 1;
                        *(float32x2_t *)(v6 + 32 + 8 * v230++) = vcvt_f32_f64(v234);
                      }
                      while ( !v235 );
                    }
                    v236 = *(_QWORD *)(v211 + 24);
                    if ( (int)v236 >= 1 )
                    {
                      v237 = (unsigned int)*(_QWORD *)(v211 + 24);
                      v238.n64_u32[0] = 1148846080;
                      v239 = 0;
                      v240 = (float *)(v211 + 36);
                      v226.n64_u32[0] = 0;
                      v241 = 1000.0;
                      v242 = 0.0;
                      do
                      {
                        if ( v237 == v239 )
                          goto LABEL_93;
                        *(float *)&v227 = *(v240 - 1);
                        if ( *(float *)&v227 >= v238.n64_f32[0] )
                        {
                          if ( *(float *)&v227 > v226.n64_f32[0] )
                            v226.n64_u64[0] = v227;
                        }
                        else
                        {
                          v238.n64_f32[0] = *(v240 - 1);
                        }
                        if ( *v240 >= v241 )
                        {
                          if ( *v240 > v242 )
                            v242 = *v240;
                        }
                        else
                        {
                          v241 = *v240;
                        }
                        ++v239;
                        v240 += 3;
                      }
                      while ( v239 < (int)v236 );
                      v226.n64_f32[0] = v226.n64_f32[0] - v238.n64_f32[0];
                      v243 = v242 - v241;
                      if ( v226.n64_f32[0] < v243 )
                        v226.n64_f32[0] = v243;
                      v244 = 0;
                      v238.n64_f32[1] = v241;
                      v245.n64_u64[0] = vdup_lane_s32(v226, 0).n64_u64[0];
                      v246 = (float *)(v211 + 40);
                      while ( v244 < v237 )
                      {
                        ++v244;
                        v247 = (float)(*v246 + 0.0) / v226.n64_f32[0];
                        *((float32x2_t *)v246 - 1) = vdiv_f32(vsub_f32(*(float32x2_t *)(v246 - 2), v238), v245);
                        *v246 = v247;
                        v246 += 3;
                        if ( v237 == v244 )
                          goto LABEL_87;
                      }
                      goto LABEL_93;
                    }
LABEL_87:
                    sprMeshVert = UIMeshSprite_TypeInfo->static_fields->sprMeshVert;
                    if ( !sprMeshVert )
                      goto LABEL_94;
                    if ( v205 >= LODWORD(sprMeshVert->max_length) )
                      goto LABEL_93;
                    v249 = &sprMeshVert->obj.klass + (int)v205;
                    v249[4] = (Il2CppClass *)v211;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v249 + 4), v211, v220, v221, v222, v223, v224, v225);
                    sprMeshUv = UIMeshSprite_TypeInfo->static_fields->sprMeshUv;
                    if ( !sprMeshUv )
                      goto LABEL_94;
                    if ( v205 >= LODWORD(sprMeshUv->max_length) )
                      goto LABEL_93;
                    v257 = &sprMeshUv->obj.klass + (int)v205;
                    v257[4] = (Il2CppClass *)v228;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v257 + 4), v228, v250, v251, v252, v253, v254, v255);
                    if ( ++v205 == 4 )
                      goto LABEL_92;
                  }
                  v212 = 0;
                  v213 = 0;
                  v214 = (unsigned int)*(_QWORD *)(v6 + 24);
                  v215 = (float *)(v6 + 40);
                  while ( 1 )
                  {
                    v216 = v209->max_length;
                    if ( v212 >= v216 || v212 + 1 >= v216 || v212 + 2 >= v216 || v213 >= v214 )
                      break;
                    ++v213;
                    v217 = v209->m_Items[v212 + 2];
                    v218 = v209->m_Items[v212 + 1];
                    v219 = v209->m_Items[v212];
                    v212 += 3;
                    *(v215 - 2) = v219;
                    *(v215 - 1) = v218;
                    *v215 = v217;
                    v215 += 3;
                    if ( v214 == v213 )
                      goto LABEL_61;
                  }
LABEL_93:
                  sub_1C942F8(v6);
                }
              }
            }
          }
        }
      }
    }
LABEL_94:
    sub_1C942F0(v6, v7);
  }
LABEL_92:
  this->fields.isEndInitialize = 1;
}


// local variable allocation has failed, the output may be wrong!
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
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  int32_t v40; // w24
  int32_t v41; // w0
  const MethodInfo *v42; // x4
  int v43; // s4 OVERLAPPED
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2E19A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E19A = 1;
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
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)Sprite, v14, v15, v16, v17, v18, v19);
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
      v49.fields.m_XMin = v33;
      v49.fields.m_YMin = v32;
      v49.fields.m_Width = v27;
      v49.fields.m_Height = v26;
      v50 = NGUIMath__ConvertToTexCoords(v49, v34, v35, 0);
      m_XMin = v50.fields.m_XMin;
      m_YMin = v50.fields.m_YMin;
      m_Width = v50.fields.m_Width;
      m_Height = v50.fields.m_Height;
      v40 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v41 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v51.fields.m_XMin = v29;
      v51.fields.m_YMin = v28;
      v51.fields.m_Width = v31;
      v51.fields.m_Height = v30;
      NGUIMath__ConvertToTexCoords(v51, v40, v41, 0);
      if ( verts )
      {
        size = verts->fields.size;
        v52.fields.m_XMin = m_XMin;
        v52.fields.m_YMin = m_YMin;
        v52.fields.m_Width = m_Width;
        v52.fields.m_Height = m_Height;
        UIMeshSprite__RotFill(this, verts, uvs, cols, v52, *(UnityEngine_Rect_o *)&v43, v42);
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
    sub_1C942F0(mAtlas, v11);
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
  float x; // s10
  float y; // s11
  float z; // s14
  float w; // s15
  const MethodInfo *v27; // x1
  UnityEngine_Color32_o drawingColor; // x0
  const MethodInfo *v29; // x1
  unsigned int rgba; // w22
  struct UIMeshSprite_StaticFields *static_fields; // x12
  struct System_Int32_array_array *meshPolygons; // x9
  __int64 meshType; // x8
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x10
  struct System_Int32_array_array *uvIndex; // x11
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x12
  System_Int32_array *v37; // x23
  il2cpp_array_size_t max_length; // x24
  float v39; // s13
  UnityEngine_Vector3_array *v40; // x28
  System_Int32_array *v41; // x29
  UnityEngine_Vector2_array *v42; // x25
  __int64 v43; // x9
  float v44; // s12
  float v45; // s15
  float v46; // s14
  int v47; // w26
  __int64 v48; // x8
  __int64 v49; // x9
  __int64 v50; // x8
  __int64 v51; // x9
  float v52; // s8
  float v53; // s9
  UnityEngine_Color32_o v54; // x1
  float v56; // [xsp+8h] [xbp-A8h]
  float v57; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  m_Height = outer.fields.m_Height;
  m_Width = outer.fields.m_Width;
  m_YMin = outer.fields.m_YMin;
  m_XMin = outer.fields.m_XMin;
  if ( (byte_4D2E19B & 1) == 0 )
  {
    sub_1C94098(&Method_BetterList_Vector3__Add__);
    sub_1C94098(&Method_BetterList_Color32__Add__);
    sub_1C94098(&Method_BetterList_Vector2__Add__);
    sub_1C94098(&UIMeshSprite_TypeInfo);
    byte_4D2E19B = 1;
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
  v56 = v17;
  v57 = v16;
  v19 = v18;
  v21 = v20;
  drawingUVs = UIMeshSprite__get_drawingUVs(this, v22);
  x = drawingUVs.fields.x;
  y = drawingUVs.fields.y;
  z = drawingUVs.fields.z;
  w = drawingUVs.fields.w;
  drawingColor = UIMeshSprite__get_drawingColor(this, v27);
  rgba = drawingColor.fields.rgba;
  if ( !this->fields.isEndInitialize )
    UIMeshSprite__Initialize(this, v29);
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
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C942F8)(drawingColor);
  v37 = meshPolygons->m_Items[meshType];
  if ( !v37 )
LABEL_30:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(drawingColor, v29);
  max_length = v37->max_length;
  if ( (int)max_length >= 1 )
  {
    v39 = v21 - v56;
    v40 = sprMeshVert->m_Items[meshType];
    v41 = uvIndex->m_Items[meshType];
    v42 = sprMeshUv->m_Items[meshType];
    v43 = 0;
    v44 = v19 - v57;
    v45 = w - y;
    v46 = z - x;
    v47 = 1;
    while ( v40 )
    {
      v48 = v37->m_Items[v43];
      if ( (unsigned int)v48 >= LODWORD(v40->max_length) )
        goto LABEL_28;
      if ( !v41 )
        break;
      if ( (unsigned int)(v47 - 1) >= LODWORD(v41->max_length) )
        goto LABEL_28;
      if ( !v42 )
        break;
      v49 = v41->m_Items[v43];
      if ( (unsigned int)v49 >= LODWORD(v42->max_length) )
        goto LABEL_28;
      if ( !verts )
        break;
      v50 = (__int64)v40 + 12 * v48;
      v51 = (__int64)v42 + 8 * v49;
      v59.fields.y = v56 + (float)(v39 * *(float *)(v50 + 36));
      v52 = *(float *)(v51 + 32);
      v53 = *(float *)(v51 + 36);
      v59.fields.x = v57 + (float)(v44 * *(float *)(v50 + 32));
      v59.fields.z = 0.0;
      BetterList_Vector3___Add(verts, v59, (const MethodInfo_33D5368 *)Method_BetterList_Vector3__Add__);
      if ( !uvs )
        break;
      v58.fields.y = y + (float)(v45 * v53);
      v58.fields.x = x + (float)(v46 * v52);
      BetterList_Vector2___Add(uvs, v58, (const MethodInfo_33D48DC *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        break;
      v54 = (UnityEngine_Color32_o)rgba;
      BetterList_Color32___Add(cols, v54, (const MethodInfo_33D2390 *)Method_BetterList_Color32__Add__);
      if ( (_DWORD)max_length == v47 )
        return;
      v43 = v47;
      if ( (unsigned int)v47++ >= LODWORD(v37->max_length) )
        goto LABEL_28;
    }
    goto LABEL_30;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color32_o UIMeshSprite__get_drawingColor(UIMeshSprite_o *this, const MethodInfo *method)
{
  long double v2; // q8
  long double v3; // q9
  long double v4; // q10
  long double v5; // q11
  long double v7; // q0
  long double v8; // q0
  long double v9; // q0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  long double v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4D2E199 & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    byte_4D2E199 = 1;
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
    v12.fields.r = *(float *)&v5;
    v12.fields.g = *(float *)&v4;
    v12.fields.b = *(float *)&v3;
    v12.fields.a = *(float *)&v2;
    *(UnityEngine_Color_o *)&v13 = NGUITools__ApplyPMA(v12, 0);
    v5 = v13;
    v4 = *(long double *)((char *)&v13 + 4);
    v3 = *(long double *)((char *)&v13 + 8);
    v2 = *(long double *)((char *)&v13 + 12);
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
  return (UnityEngine_Color32_o)(unsigned int)sub_25C4758(0, v5, v4, v3, v2);
}


UnityEngine_Vector4_o UIMeshSprite__get_drawingUVs(UIMeshSprite_o *this, const MethodInfo *method)
{
  int32_t mFlip; // w8
  float m_XMin; // s2
  float v4; // s1
  float m_Height; // s3
  float v6; // s0
  float m_YMin; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mFlip = this->fields.mFlip;
  if ( mFlip == 3 )
  {
    m_XMin = this->fields.mOuterUV.fields.m_XMin;
    m_YMin = this->fields.mOuterUV.fields.m_YMin;
    v6 = this->fields.mOuterUV.fields.m_Width + m_XMin;
    v4 = this->fields.mOuterUV.fields.m_Height + m_YMin;
  }
  else if ( mFlip == 2 )
  {
    v6 = this->fields.mOuterUV.fields.m_XMin;
    m_YMin = this->fields.mOuterUV.fields.m_YMin;
    v4 = this->fields.mOuterUV.fields.m_Height + m_YMin;
    m_XMin = v6 + this->fields.mOuterUV.fields.m_Width;
  }
  else
  {
    if ( mFlip == 1 )
    {
      m_XMin = this->fields.mOuterUV.fields.m_XMin;
      v4 = this->fields.mOuterUV.fields.m_YMin;
      m_Height = this->fields.mOuterUV.fields.m_Height;
      v6 = this->fields.mOuterUV.fields.m_Width + m_XMin;
    }
    else
    {
      v6 = this->fields.mOuterUV.fields.m_XMin;
      v4 = this->fields.mOuterUV.fields.m_YMin;
      m_Height = this->fields.mOuterUV.fields.m_Height;
      m_XMin = v6 + this->fields.mOuterUV.fields.m_Width;
    }
    m_YMin = v4 + m_Height;
  }
  result.fields.w = m_YMin;
  result.fields.z = m_XMin;
  result.fields.y = v4;
  result.fields.x = v6;
  return result;
}