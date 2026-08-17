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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Array_o *v14; // x21
  System_RuntimeFieldHandle_o v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Array_o *v22; // x0
  System_RuntimeFieldHandle_o v23; // x1
  System_Array_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Array_o *v31; // x0
  System_RuntimeFieldHandle_o v32; // x1
  System_Array_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x20
  System_Array_o *v47; // x21
  System_RuntimeFieldHandle_o v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Array_o *v55; // x21
  System_RuntimeFieldHandle_o v56; // x1
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Array_o *v63; // x0
  System_RuntimeFieldHandle_o v64; // x1
  System_Array_o *v65; // x21
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_Array_o *v72; // x0
  System_RuntimeFieldHandle_o v73; // x1
  System_Array_o *v74; // x21
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct UIMeshSprite_StaticFields *static_fields; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  __int64 v88; // x20
  System_Array_o *v89; // x21
  System_RuntimeFieldHandle_o v90; // x1
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Array_o *v97; // x21
  System_RuntimeFieldHandle_o v98; // x1
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  System_Array_o *v105; // x21
  System_RuntimeFieldHandle_o v106; // x1
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  System_Array_o *v113; // x21
  System_RuntimeFieldHandle_o v114; // x1
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  struct UIMeshSprite_StaticFields *v121; // x0
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  __int64 v128; // x20
  System_Array_o *v129; // x21
  System_RuntimeFieldHandle_o v130; // x1
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  System_Array_o *v137; // x21
  System_RuntimeFieldHandle_o v138; // x1
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  System_Array_o *v145; // x0
  System_RuntimeFieldHandle_o v146; // x1
  System_Array_o *v147; // x21
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  System_Array_o *v154; // x0
  System_RuntimeFieldHandle_o v155; // x1
  System_Array_o *v156; // x21
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  struct UIMeshSprite_StaticFields *v163; // x0
  System_String_o *v164; // x2
  System_String_o *v165; // x3
  int32_t v166; // w4
  int32_t v167; // w5
  bool v168; // w6
  bool v169; // w7
  struct UIMeshSprite_StaticFields *v170; // x8
  struct System_Int32_array_array *meshPolygons; // x9
  __int64 max_length_low; // x10
  unsigned __int64 v173; // x11
  int32x2_t *v174; // x12
  unsigned __int64 v175; // x13
  int32x2_t *v176; // x12
  __int64 v177; // x14
  int32x2_t *v178; // x15
  unsigned __int64 v179; // x14
  unsigned __int64 v180; // x15
  __int64 v181; // x13
  struct System_Int32_array_array *uvIndex; // x12
  int32x2_t *v183; // x14
  unsigned __int64 v184; // x15
  unsigned __int64 v185; // x12
  unsigned __int64 v186; // x13
  int32x2_t *v187; // x14
  __int64 v188; // x15
  __int64 v189; // x0
  struct UIMeshSprite_StaticFields *v190; // x8
  System_String_o *v191; // x2
  System_String_o *v192; // x3
  int32_t v193; // w4
  int32_t v194; // w5
  bool v195; // w6
  bool v196; // w7
  __int64 v197; // x0
  struct UIMeshSprite_StaticFields *v198; // x8
  System_String_o *v199; // x2
  System_String_o *v200; // x3
  int32_t v201; // w4
  int32_t v202; // w5
  bool v203; // w6
  bool v204; // w7
  unsigned __int64 v205; // x22
  struct UIMeshSprite_StaticFields *v206; // x9
  struct System_Double_array_array *meshVertices; // x8
  struct System_Double_array_array *uvPos; // x9
  System_Double_array *v209; // x21
  System_Double_array *v210; // x28
  __int64 v211; // x20
  unsigned __int64 v212; // x8
  __int64 v213; // x9
  float *v214; // x10
  int v215; // w11
  unsigned int max_length; // w14
  int v217; // w13
  int v218; // w12
  double v219; // d2
  float v220; // s1
  float v221; // s0
  System_String_o *v222; // x2
  System_String_o *v223; // x3
  int32_t v224; // w4
  int32_t v225; // w5
  bool v226; // w6
  bool v227; // w7
  __int64 v228; // x21
  __int64 v229; // x11
  unsigned __int64 v230; // x10
  __int64 v231; // x8
  unsigned __int64 v232; // x12
  unsigned __int64 v233; // x13
  float64x2_t *v234; // x13
  bool v235; // zf
  int32x2_t v236; // d1
  float v237; // s3
  float32x2_t v238; // d0
  __int64 v239; // x8
  float *v240; // x10
  __int64 v241; // x11
  float v242; // s2
  float v243; // s4
  float v244; // s3
  float32x2_t v245; // d2
  unsigned __int64 v246; // x9
  float *v247; // x10
  float v248; // s4
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x8
  Il2CppClass **v250; // x0
  System_String_o *v251; // x2
  System_String_o *v252; // x3
  int32_t v253; // w4
  int32_t v254; // w5
  bool v255; // w6
  bool v256; // w7
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x8
  Il2CppClass **v258; // x0

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
    v5.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v4, v5, 0);
    if ( v3 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_92;
      *(_QWORD *)(v3 + 32) = v4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v4, v8, v9, v10, v11, v12, v13);
      v14 = (System_Array_o *)sub_2213B20(double___TypeInfo, 18);
      v15.fields.value = Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v14, v15, 0);
      if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_92;
      *(_QWORD *)(v3 + 40) = v14;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v14, v16, v17, v18, v19, v20, v21);
      v22 = (System_Array_o *)sub_2213B20(double___TypeInfo, 12);
      v23.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
      v24 = v22;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v22, v23, 0);
      if ( *(_DWORD *)(v3 + 24) <= 2u )
        goto LABEL_92;
      *(_QWORD *)(v3 + 48) = v24;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 48), (int32_t)v24, v25, v26, v27, v28, v29, v30);
      v31 = (System_Array_o *)sub_2213B20(double___TypeInfo, 12);
      v32.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
      v33 = v31;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v31, v32, 0);
      if ( (*(_DWORD *)(v3 + 24) & 0xFFFFFFFC) == 0 )
        goto LABEL_92;
      *(_QWORD *)(v3 + 56) = v33;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 56), (int32_t)v33, v34, v35, v36, v37, v38, v39);
      UIMeshSprite_TypeInfo->static_fields->meshVertices = (struct System_Double_array_array *)v3;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)UIMeshSprite_TypeInfo->static_fields,
        v3,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      v46 = sub_2213B20(int_____TypeInfo, 4);
      v47 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
      v48.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v47, v48, 0);
      if ( v46 )
      {
        if ( !*(_DWORD *)(v46 + 24) )
          goto LABEL_92;
        *(_QWORD *)(v46 + 32) = v47;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 32), (int32_t)v47, v49, v50, v51, v52, v53, v54);
        v55 = (System_Array_o *)sub_2213B20(int___TypeInfo, 8);
        v56.fields.value = Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v55, v56, 0);
        if ( (*(_DWORD *)(v46 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_92;
        *(_QWORD *)(v46 + 40) = v55;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 40), (int32_t)v55, v57, v58, v59, v60, v61, v62);
        v63 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
        v64.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
        v65 = v63;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v63, v64, 0);
        if ( *(_DWORD *)(v46 + 24) <= 2u )
          goto LABEL_92;
        *(_QWORD *)(v46 + 48) = v65;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 48), (int32_t)v65, v66, v67, v68, v69, v70, v71);
        v72 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
        v73.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
        v74 = v72;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v72, v73, 0);
        if ( (*(_DWORD *)(v46 + 24) & 0xFFFFFFFC) == 0 )
          goto LABEL_92;
        *(_QWORD *)(v46 + 56) = v74;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 56), (int32_t)v74, v75, v76, v77, v78, v79, v80);
        static_fields = UIMeshSprite_TypeInfo->static_fields;
        static_fields->meshPolygons = (struct System_Int32_array_array *)v46;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->meshPolygons, v46, v82, v83, v84, v85, v86, v87);
        v88 = sub_2213B20(double_____TypeInfo, 4);
        v89 = (System_Array_o *)sub_2213B20(double___TypeInfo, 8);
        v90.fields.value = Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v89, v90, 0);
        if ( v88 )
        {
          if ( !*(_DWORD *)(v88 + 24) )
            goto LABEL_92;
          *(_QWORD *)(v88 + 32) = v89;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v88 + 32), (int32_t)v89, v91, v92, v93, v94, v95, v96);
          v97 = (System_Array_o *)sub_2213B20(double___TypeInfo, 12);
          v98.fields.value = Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v97, v98, 0);
          if ( (*(_DWORD *)(v88 + 24) & 0xFFFFFFFE) == 0 )
            goto LABEL_92;
          *(_QWORD *)(v88 + 40) = v97;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v88 + 40), (int32_t)v97, v99, v100, v101, v102, v103, v104);
          v105 = (System_Array_o *)sub_2213B20(double___TypeInfo, 8);
          v106.fields.value = Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v105, v106, 0);
          if ( *(_DWORD *)(v88 + 24) <= 2u )
            goto LABEL_92;
          *(_QWORD *)(v88 + 48) = v105;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v88 + 48), (int32_t)v105, v107, v108, v109, v110, v111, v112);
          v113 = (System_Array_o *)sub_2213B20(double___TypeInfo, 8);
          v114.fields.value = Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v113, v114, 0);
          if ( (*(_DWORD *)(v88 + 24) & 0xFFFFFFFC) == 0 )
            goto LABEL_92;
          *(_QWORD *)(v88 + 56) = v113;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v88 + 56), (int32_t)v113, v115, v116, v117, v118, v119, v120);
          v121 = UIMeshSprite_TypeInfo->static_fields;
          v121->uvPos = (struct System_Double_array_array *)v88;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v121->uvPos, v88, v122, v123, v124, v125, v126, v127);
          v128 = sub_2213B20(int_____TypeInfo, 4);
          v129 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
          v130.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v129, v130, 0);
          if ( v128 )
          {
            if ( !*(_DWORD *)(v128 + 24) )
              goto LABEL_92;
            *(_QWORD *)(v128 + 32) = v129;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v128 + 32),
              (int32_t)v129,
              v131,
              v132,
              v133,
              v134,
              v135,
              v136);
            v137 = (System_Array_o *)sub_2213B20(int___TypeInfo, 8);
            v138.fields.value = Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v137, v138, 0);
            if ( (*(_DWORD *)(v128 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_92;
            *(_QWORD *)(v128 + 40) = v137;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v128 + 40),
              (int32_t)v137,
              v139,
              v140,
              v141,
              v142,
              v143,
              v144);
            v145 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
            v146.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
            v147 = v145;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v145, v146, 0);
            if ( *(_DWORD *)(v128 + 24) <= 2u )
              goto LABEL_92;
            *(_QWORD *)(v128 + 48) = v147;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v128 + 48),
              (int32_t)v147,
              v148,
              v149,
              v150,
              v151,
              v152,
              v153);
            v154 = (System_Array_o *)sub_2213B20(int___TypeInfo, 4);
            v155.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
            v156 = v154;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v154, v155, 0);
            if ( (*(_DWORD *)(v128 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_92;
            *(_QWORD *)(v128 + 56) = v156;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v128 + 56),
              (int32_t)v156,
              v157,
              v158,
              v159,
              v160,
              v161,
              v162);
            v163 = UIMeshSprite_TypeInfo->static_fields;
            v163->uvIndex = (struct System_Int32_array_array *)v128;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v163->uvIndex, v128, v164, v165, v166, v167, v168, v169);
            v170 = UIMeshSprite_TypeInfo->static_fields;
            meshPolygons = v170->meshPolygons;
            if ( meshPolygons )
            {
              max_length_low = LODWORD(meshPolygons->max_length);
              v173 = 0;
              while ( 1 )
              {
                if ( v173 == max_length_low )
                  goto LABEL_92;
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
                  if ( (_DWORD)v175 != 1 )
                  {
                    v179 = 0;
                    v180 = (unsigned int)v175;
                    v181 = (unsigned int)v175 & 0xFFFFFFFE;
                    do
                    {
                      if ( v179 >= v180 || v179 + 1 >= v180 )
                        goto LABEL_92;
                      v179 += 2LL;
                      v176->n64_u64[0] = vrev64_s32((int32x2_t)v176->n64_u64[0]).n64_u64[0];
                      ++v176;
                    }
                    while ( v181 != v179 );
                  }
                }
                uvIndex = v170->uvIndex;
                if ( !uvIndex )
                  break;
                if ( v173 >= LODWORD(uvIndex->max_length) )
                  goto LABEL_92;
                v183 = (int32x2_t *)uvIndex->m_Items[v173];
                if ( !v183 )
                  break;
                v184 = v183[3].n64_u64[0];
                if ( (int)v184 >= 2 )
                {
                  v185 = 0;
                  v186 = (unsigned int)v183[3].n64_u64[0];
                  v187 = v183 + 4;
                  v188 = (unsigned int)v184 & 0xFFFFFFFE;
                  do
                  {
                    if ( v185 >= v186 || v185 + 1 >= v186 )
                      goto LABEL_92;
                    v185 += 2LL;
                    v187->n64_u64[0] = vrev64_s32((int32x2_t)v187->n64_u64[0]).n64_u64[0];
                    ++v187;
                  }
                  while ( v188 != v185 );
                }
                if ( ++v173 == 4 )
                {
                  v189 = sub_2213B20(UnityEngine_Vector3_____TypeInfo, 4);
                  v190 = UIMeshSprite_TypeInfo->static_fields;
                  v190->sprMeshVert = (struct UnityEngine_Vector3_array_array *)v189;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v190->sprMeshVert,
                    v189,
                    v191,
                    v192,
                    v193,
                    v194,
                    v195,
                    v196);
                  v197 = sub_2213B20(UnityEngine_Vector2_____TypeInfo, 4);
                  v198 = UIMeshSprite_TypeInfo->static_fields;
                  v198->sprMeshUv = (struct UnityEngine_Vector2_array_array *)v197;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v198->sprMeshUv,
                    v197,
                    v199,
                    v200,
                    v201,
                    v202,
                    v203,
                    v204);
                  v205 = 0;
                  while ( 1 )
                  {
                    v206 = UIMeshSprite_TypeInfo->static_fields;
                    meshVertices = v206->meshVertices;
                    if ( !v206->meshVertices )
                      goto LABEL_93;
                    if ( v205 >= LODWORD(meshVertices->max_length) )
                      goto LABEL_92;
                    uvPos = v206->uvPos;
                    if ( !uvPos )
                      goto LABEL_93;
                    if ( v205 >= LODWORD(uvPos->max_length) )
                      goto LABEL_92;
                    v209 = meshVertices->m_Items[v205];
                    if ( !v209 )
                      goto LABEL_93;
                    v210 = uvPos->m_Items[v205];
                    v6 = sub_2213B20(UnityEngine_Vector3___TypeInfo, (unsigned int)(SLODWORD(v209->max_length) / 3));
                    if ( !v6 )
                      goto LABEL_93;
                    v211 = v6;
                    if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
                      break;
LABEL_61:
                    if ( !v210 )
                      goto LABEL_93;
                    v6 = sub_2213B20(UnityEngine_Vector2___TypeInfo, (unsigned int)(SLODWORD(v210->max_length) / 2));
                    if ( !v6 )
                      goto LABEL_93;
                    v228 = v6;
                    if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
                    {
                      v229 = 0;
                      v230 = 0;
                      v231 = (unsigned int)*(_QWORD *)(v6 + 24);
                      v232 = -1;
                      do
                      {
                        v233 = LODWORD(v210->max_length);
                        if ( v232 + 1 >= v233 )
                          goto LABEL_92;
                        v232 += 2LL;
                        if ( v232 >= v233 || v230 >= *(unsigned int *)(v6 + 24) )
                          goto LABEL_92;
                        v234 = (float64x2_t *)((char *)v210 + (v229 >> 29));
                        v229 += 0x200000000LL;
                        v235 = v231 == v230 + 1;
                        *(float32x2_t *)(v6 + 32 + 8 * v230++) = vcvt_f32_f64(v234[2]);
                      }
                      while ( !v235 );
                    }
                    if ( (int)*(_QWORD *)(v211 + 24) >= 1 )
                    {
                      v236.n64_u64[0] = 0;
                      v237 = 0.0;
                      v238.n64_u32[0] = 1148846080;
                      v239 = (unsigned int)*(_QWORD *)(v211 + 24);
                      v240 = (float *)(v211 + 36);
                      v241 = v239;
                      v242 = 1000.0;
                      do
                      {
                        v243 = *(v240 - 1);
                        if ( v243 >= v238.n64_f32[0] )
                        {
                          if ( v243 > v236.n64_f32[0] )
                            v236.n64_f32[0] = *(v240 - 1);
                        }
                        else
                        {
                          v238.n64_f32[0] = *(v240 - 1);
                        }
                        if ( *v240 >= v242 )
                        {
                          if ( *v240 > v237 )
                            v237 = *v240;
                        }
                        else
                        {
                          v242 = *v240;
                        }
                        --v241;
                        v240 += 3;
                      }
                      while ( v241 );
                      v236.n64_f32[0] = v236.n64_f32[0] - v238.n64_f32[0];
                      v244 = v237 - v242;
                      if ( v236.n64_f32[0] < v244 )
                        v236.n64_f32[0] = v244;
                      v238.n64_f32[1] = v242;
                      v245.n64_u64[0] = vdup_lane_s32(v236, 0).n64_u64[0];
                      v246 = 0;
                      v247 = (float *)(v211 + 40);
                      while ( v246 < *(unsigned int *)(v211 + 24) )
                      {
                        ++v246;
                        v248 = (float)(*v247 + 0.0) / v236.n64_f32[0];
                        *((float32x2_t *)v247 - 1) = vdiv_f32(vsub_f32(*(float32x2_t *)(v247 - 2), v238), v245);
                        *v247 = v248;
                        v247 += 3;
                        if ( v239 == v246 )
                          goto LABEL_86;
                      }
                      goto LABEL_92;
                    }
LABEL_86:
                    sprMeshVert = UIMeshSprite_TypeInfo->static_fields->sprMeshVert;
                    if ( !sprMeshVert )
                      goto LABEL_93;
                    if ( v205 >= LODWORD(sprMeshVert->max_length) )
                      goto LABEL_92;
                    v250 = &sprMeshVert->obj.klass + v205;
                    v250[4] = (Il2CppClass *)v211;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v250 + 4),
                      v211,
                      v222,
                      v223,
                      v224,
                      v225,
                      v226,
                      v227);
                    sprMeshUv = UIMeshSprite_TypeInfo->static_fields->sprMeshUv;
                    if ( !sprMeshUv )
                      goto LABEL_93;
                    if ( v205 >= LODWORD(sprMeshUv->max_length) )
                      goto LABEL_92;
                    v258 = &sprMeshUv->obj.klass + v205;
                    v258[4] = (Il2CppClass *)v228;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v258 + 4),
                      v228,
                      v251,
                      v252,
                      v253,
                      v254,
                      v255,
                      v256);
                    if ( ++v205 == 4 )
                      goto LABEL_91;
                  }
                  v212 = 0;
                  v213 = (unsigned int)*(_QWORD *)(v6 + 24);
                  v214 = (float *)(v6 + 40);
                  v215 = 2;
                  while ( 1 )
                  {
                    max_length = v209->max_length;
                    v217 = v215 - 2;
                    if ( v215 - 2 >= max_length )
                      break;
                    v218 = v215 - 1;
                    if ( v215 - 1 >= max_length || v215 >= max_length || v212 >= *(unsigned int *)(v6 + 24) )
                      break;
                    ++v212;
                    v219 = v209->m_Items[v215];
                    v215 += 3;
                    v220 = v209->m_Items[v218];
                    *(float *)&v219 = v219;
                    v221 = v209->m_Items[v217];
                    *(v214 - 2) = v221;
                    *(v214 - 1) = v220;
                    *v214 = *(float *)&v219;
                    v214 += 3;
                    if ( v213 == v212 )
                      goto LABEL_61;
                  }
LABEL_92:
                  sub_2213CE4(v6);
                }
              }
            }
          }
        }
      }
    }
LABEL_93:
    sub_2213CDC(v6, v7);
  }
LABEL_91:
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
  float m_XMin; // s10
  float m_YMin; // s11
  float m_Width; // s12
  float m_Height; // s13
  int32_t v44; // w24
  int32_t v45; // w0
  const MethodInfo *v46; // x4
  int v47; // s4 OVERLAPPED
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
      v53.fields.m_XMin = v33;
      v53.fields.m_YMin = v36;
      v53.fields.m_Width = v31;
      v53.fields.m_Height = v30;
      v54 = NGUIMath__ConvertToTexCoords(v53, v38, v39, 0);
      m_XMin = v54.fields.m_XMin;
      m_YMin = v54.fields.m_YMin;
      m_Width = v54.fields.m_Width;
      m_Height = v54.fields.m_Height;
      v44 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v10->klass[1]._1.image)(
              v10,
              v10->klass[1]._1.gc_desc);
      v45 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v10->klass[1]._1.byval_arg.data)(
              v10,
              *(_QWORD *)&v10->klass[1]._1.byval_arg.bits);
      v55.fields.m_XMin = v35;
      v55.fields.m_YMin = v34;
      v55.fields.m_Width = v37;
      v55.fields.m_Height = v32;
      NGUIMath__ConvertToTexCoords(v55, v44, v45, 0);
      if ( verts )
      {
        v56.fields.m_XMin = m_XMin;
        v56.fields.m_YMin = m_YMin;
        size = verts->fields.size;
        v56.fields.m_Width = m_Width;
        v56.fields.m_Height = m_Height;
        UIMeshSprite__RotFill(this, verts, uvs, cols, v56, *(UnityEngine_Rect_o *)&v47, v46);
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
  float x; // s10
  float y; // s11
  float z; // s14
  float w; // s15
  const MethodInfo *v27; // x1
  UnityEngine_Color32_o drawingColor; // x0
  const MethodInfo *v29; // x1
  unsigned int rgba; // w22
  struct UIMeshSprite_StaticFields *static_fields; // x12
  struct System_Int32_array_array *meshPolygons; // x10
  __int64 meshType; // x8
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x9
  struct System_Int32_array_array *uvIndex; // x11
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x12
  System_Int32_array *v37; // x23
  float v38; // s15
  float v39; // s14
  System_Int32_array *v40; // x29
  __int64 v41; // x25
  float v42; // s13
  float v43; // s12
  UnityEngine_Vector3_array *v44; // x26
  UnityEngine_Vector2_array *v45; // x27
  unsigned int v46; // w8
  __int64 v47; // x9
  __int64 v48; // x8
  float v49; // s0
  float v50; // s1
  __int64 v51; // x8
  float v52; // s8
  float v53; // s9
  UnityEngine_Color32_o v54; // x1
  il2cpp_array_size_t max_length; // [xsp+0h] [xbp-B0h]
  float v56; // [xsp+8h] [xbp-A8h]
  float v57; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Vector2_o v58; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o drawingUVs; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
  v37 = meshPolygons->m_Items[meshType];
  if ( !v37 )
LABEL_28:
    sub_2213CDC(drawingColor, v29);
  max_length = v37->max_length;
  if ( (int)max_length >= 1 )
  {
    v38 = w - y;
    v39 = z - x;
    v40 = uvIndex->m_Items[meshType];
    v41 = 0;
    v42 = v21 - v56;
    v43 = v19 - v57;
    v44 = sprMeshVert->m_Items[meshType];
    v45 = sprMeshUv->m_Items[meshType];
    while ( (unsigned int)v41 < LODWORD(v37->max_length) )
    {
      if ( !v44 )
        goto LABEL_28;
      v46 = v37->m_Items[v41];
      if ( v46 >= LODWORD(v44->max_length) )
        break;
      if ( !v40 )
        goto LABEL_28;
      if ( (unsigned int)v41 >= LODWORD(v40->max_length) )
        break;
      if ( !v45 )
        goto LABEL_28;
      v47 = v40->m_Items[v41];
      if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
        break;
      if ( !verts )
        goto LABEL_28;
      v48 = (__int64)v44 + 12 * (int)v46;
      v49 = *(float *)(v48 + 32);
      v50 = *(float *)(v48 + 36);
      v51 = (__int64)v45 + 8 * v47;
      v52 = *(float *)(v51 + 32);
      v53 = *(float *)(v51 + 36);
      v59.fields.y = v56 + (float)(v42 * v50);
      v59.fields.x = v57 + (float)(v43 * v49);
      v59.fields.z = 0.0;
      BetterList_Vector3___Add(verts, v59, (const MethodInfo_3E716D4 *)Method_BetterList_Vector3__Add__);
      if ( !uvs )
        goto LABEL_28;
      v58.fields.y = y + (float)(v38 * v53);
      v58.fields.x = x + (float)(v39 * v52);
      BetterList_Vector2___Add(uvs, v58, (const MethodInfo_3E70CB8 *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        goto LABEL_28;
      v54 = (UnityEngine_Color32_o)rgba;
      BetterList_Color32___Add(cols, v54, (const MethodInfo_3E6E720 *)Method_BetterList_Color32__Add__);
      if ( (_DWORD)max_length == (_DWORD)++v41 )
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
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
    v12 = NGUITools__ApplyPMA(v11, 0);
    r = v12.fields.r;
    g = v12.fields.g;
    b = v12.fields.b;
    finalAlpha = v12.fields.a;
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