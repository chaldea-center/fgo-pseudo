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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Array_o *v9; // x21
  System_RuntimeFieldHandle_o v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Array_o *v13; // x0
  System_RuntimeFieldHandle_o v14; // x1
  System_Array_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Array_o *v18; // x0
  System_RuntimeFieldHandle_o v19; // x1
  System_Array_o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x20
  System_Array_o *v26; // x21
  System_RuntimeFieldHandle_o v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Array_o *v30; // x21
  System_RuntimeFieldHandle_o v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Array_o *v34; // x0
  System_RuntimeFieldHandle_o v35; // x1
  System_Array_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Array_o *v39; // x0
  System_RuntimeFieldHandle_o v40; // x1
  System_Array_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct UIMeshSprite_StaticFields *static_fields; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x20
  System_Array_o *v48; // x21
  System_RuntimeFieldHandle_o v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Array_o *v52; // x21
  System_RuntimeFieldHandle_o v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Array_o *v56; // x21
  System_RuntimeFieldHandle_o v57; // x1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Array_o *v60; // x21
  System_RuntimeFieldHandle_o v61; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct UIMeshSprite_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x20
  System_Array_o *v68; // x21
  System_RuntimeFieldHandle_o v69; // x1
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Array_o *v72; // x21
  System_RuntimeFieldHandle_o v73; // x1
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Array_o *v76; // x0
  System_RuntimeFieldHandle_o v77; // x1
  System_Array_o *v78; // x21
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_Array_o *v81; // x0
  System_RuntimeFieldHandle_o v82; // x1
  System_Array_o *v83; // x21
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct UIMeshSprite_StaticFields *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct UIMeshSprite_StaticFields *v89; // x8
  struct System_Int32_array_array *meshPolygons; // x9
  unsigned int max_length; // w10
  unsigned int v92; // w11
  int32x2_t *v93; // x12
  unsigned __int64 v94; // x13
  int32x2_t *v95; // x12
  __int64 v96; // x14
  int32x2_t *v97; // x15
  unsigned __int64 v98; // x15
  unsigned __int64 v99; // x14
  __int64 v100; // x13
  struct System_Int32_array_array *uvIndex; // x12
  int32x2_t *v102; // x14
  unsigned __int64 v103; // x15
  unsigned __int64 v104; // x13
  unsigned __int64 v105; // x12
  int32x2_t *v106; // x14
  __int64 v107; // x15
  __int64 v108; // x0
  struct UIMeshSprite_StaticFields *v109; // x8
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  __int64 v112; // x0
  struct UIMeshSprite_StaticFields *v113; // x8
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  unsigned int v116; // w22
  struct UIMeshSprite_StaticFields *v117; // x9
  struct System_Double_array_array *meshVertices; // x8
  struct System_Double_array_array *uvPos; // x9
  System_Double_array *v120; // x21
  System_Double_array *v121; // x29
  __int64 v122; // x20
  unsigned int v123; // w8
  unsigned __int64 v124; // x9
  unsigned __int64 v125; // x10
  float *v126; // x11
  unsigned int v127; // w14
  float v128; // s0
  float v129; // s1
  float v130; // s2
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  int32x2_t v133; // d2
  unsigned __int64 v134; // d4
  __int64 v135; // x21
  __int64 v136; // x12
  unsigned __int64 v137; // x10
  unsigned __int64 v138; // x8
  unsigned __int64 v139; // x11
  unsigned __int64 max_length_low; // x13
  float64x2_t v141; // q0
  bool v142; // zf
  __int64 v143; // x9
  unsigned __int64 v144; // x8
  float32x2_t v145; // d0
  __int64 v146; // x10
  float *v147; // x11
  float v148; // s1
  float v149; // s3
  float v150; // s3
  unsigned __int64 v151; // x9
  float32x2_t v152; // d1
  float *v153; // x10
  float v154; // s4
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x8
  Il2CppClass **v156; // x0
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x8
  Il2CppClass **v160; // x0

  if ( (byte_4C44890 & 1) == 0 )
  {
    sub_1C37058(&double_____TypeInfo);
    sub_1C37058(&double___TypeInfo);
    sub_1C37058(&int_____TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08);
    sub_1C37058(&Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E);
    sub_1C37058(&Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D);
    sub_1C37058(&Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C);
    sub_1C37058(&Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E);
    sub_1C37058(&Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4);
    sub_1C37058(&Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE);
    sub_1C37058(&Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48);
    sub_1C37058(&Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB);
    sub_1C37058(&Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F);
    sub_1C37058(&UIMeshSprite_TypeInfo);
    sub_1C37058(&UnityEngine_Vector2_____TypeInfo);
    sub_1C37058(&UnityEngine_Vector2___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3_____TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    byte_4C44890 = 1;
  }
  if ( !UIMeshSprite_TypeInfo->static_fields->sprMeshVert )
  {
    v3 = sub_1C37100(double_____TypeInfo, 4);
    v4 = (System_Array_o *)sub_1C37100(double___TypeInfo, 12);
    v5.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v4, v5, 0);
    if ( v3 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_93;
      *(_QWORD *)(v3 + 32) = v4;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v4, v7, v8);
      v9 = (System_Array_o *)sub_1C37100(double___TypeInfo, 18);
      v10.fields.value = Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v9, v10, 0);
      if ( *(_DWORD *)(v3 + 24) <= 1u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 40) = v9;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)v9, v11, v12);
      v13 = (System_Array_o *)sub_1C37100(double___TypeInfo, 12);
      v14.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
      v15 = v13;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v13, v14, 0);
      if ( *(_DWORD *)(v3 + 24) <= 2u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 48) = v15;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v15, v16, v17);
      v18 = (System_Array_o *)sub_1C37100(double___TypeInfo, 12);
      v19.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
      v20 = v18;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v18, v19, 0);
      if ( *(_DWORD *)(v3 + 24) <= 3u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 56) = v20;
      sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 56), (int32_t)v20, v21, v22);
      UIMeshSprite_TypeInfo->static_fields->meshVertices = (struct System_Double_array_array *)v3;
      sub_1C36FFC((CGThumbnailListItem_o *)UIMeshSprite_TypeInfo->static_fields, v3, v23, v24);
      v25 = sub_1C37100(int_____TypeInfo, 4);
      v26 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
      v27.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v26, v27, 0);
      if ( v25 )
      {
        if ( !*(_DWORD *)(v25 + 24) )
          goto LABEL_93;
        *(_QWORD *)(v25 + 32) = v26;
        sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 32), (int32_t)v26, v28, v29);
        v30 = (System_Array_o *)sub_1C37100(int___TypeInfo, 8);
        v31.fields.value = Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v30, v31, 0);
        if ( *(_DWORD *)(v25 + 24) <= 1u )
          goto LABEL_93;
        *(_QWORD *)(v25 + 40) = v30;
        sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 40), (int32_t)v30, v32, v33);
        v34 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
        v35.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
        v36 = v34;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v34, v35, 0);
        if ( *(_DWORD *)(v25 + 24) <= 2u )
          goto LABEL_93;
        *(_QWORD *)(v25 + 48) = v36;
        sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 48), (int32_t)v36, v37, v38);
        v39 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
        v40.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
        v41 = v39;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v39, v40, 0);
        if ( *(_DWORD *)(v25 + 24) <= 3u )
          goto LABEL_93;
        *(_QWORD *)(v25 + 56) = v41;
        sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 56), (int32_t)v41, v42, v43);
        static_fields = UIMeshSprite_TypeInfo->static_fields;
        static_fields->meshPolygons = (struct System_Int32_array_array *)v25;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->meshPolygons, v25, v45, v46);
        v47 = sub_1C37100(double_____TypeInfo, 4);
        v48 = (System_Array_o *)sub_1C37100(double___TypeInfo, 8);
        v49.fields.value = Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v48, v49, 0);
        if ( v47 )
        {
          if ( !*(_DWORD *)(v47 + 24) )
            goto LABEL_93;
          *(_QWORD *)(v47 + 32) = v48;
          sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v48, v50, v51);
          v52 = (System_Array_o *)sub_1C37100(double___TypeInfo, 12);
          v53.fields.value = Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v52, v53, 0);
          if ( *(_DWORD *)(v47 + 24) <= 1u )
            goto LABEL_93;
          *(_QWORD *)(v47 + 40) = v52;
          sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 40), (int32_t)v52, v54, v55);
          v56 = (System_Array_o *)sub_1C37100(double___TypeInfo, 8);
          v57.fields.value = Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v56, v57, 0);
          if ( *(_DWORD *)(v47 + 24) <= 2u )
            goto LABEL_93;
          *(_QWORD *)(v47 + 48) = v56;
          sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 48), (int32_t)v56, v58, v59);
          v60 = (System_Array_o *)sub_1C37100(double___TypeInfo, 8);
          v61.fields.value = Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v60, v61, 0);
          if ( *(_DWORD *)(v47 + 24) <= 3u )
            goto LABEL_93;
          *(_QWORD *)(v47 + 56) = v60;
          sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 56), (int32_t)v60, v62, v63);
          v64 = UIMeshSprite_TypeInfo->static_fields;
          v64->uvPos = (struct System_Double_array_array *)v47;
          sub_1C36FFC((CGThumbnailListItem_o *)&v64->uvPos, v47, v65, v66);
          v67 = sub_1C37100(int_____TypeInfo, 4);
          v68 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
          v69.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v68, v69, 0);
          if ( v67 )
          {
            if ( !*(_DWORD *)(v67 + 24) )
              goto LABEL_93;
            *(_QWORD *)(v67 + 32) = v68;
            sub_1C36FFC((CGThumbnailListItem_o *)(v67 + 32), (int32_t)v68, v70, v71);
            v72 = (System_Array_o *)sub_1C37100(int___TypeInfo, 8);
            v73.fields.value = Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v72, v73, 0);
            if ( *(_DWORD *)(v67 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v67 + 40) = v72;
            sub_1C36FFC((CGThumbnailListItem_o *)(v67 + 40), (int32_t)v72, v74, v75);
            v76 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
            v77.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
            v78 = v76;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v76, v77, 0);
            if ( *(_DWORD *)(v67 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v67 + 48) = v78;
            sub_1C36FFC((CGThumbnailListItem_o *)(v67 + 48), (int32_t)v78, v79, v80);
            v81 = (System_Array_o *)sub_1C37100(int___TypeInfo, 4);
            v82.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
            v83 = v81;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v81, v82, 0);
            if ( *(_DWORD *)(v67 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v67 + 56) = v83;
            sub_1C36FFC((CGThumbnailListItem_o *)(v67 + 56), (int32_t)v83, v84, v85);
            v86 = UIMeshSprite_TypeInfo->static_fields;
            v86->uvIndex = (struct System_Int32_array_array *)v67;
            sub_1C36FFC((CGThumbnailListItem_o *)&v86->uvIndex, v67, v87, v88);
            v89 = UIMeshSprite_TypeInfo->static_fields;
            meshPolygons = v89->meshPolygons;
            if ( meshPolygons )
            {
              max_length = meshPolygons->max_length;
              v92 = 0;
              while ( 1 )
              {
                if ( v92 >= max_length )
                  goto LABEL_93;
                v93 = (int32x2_t *)meshPolygons->m_Items[v92];
                if ( !v93 )
                  break;
                v94 = v93[3].n64_u64[0];
                if ( (int)v94 >= 1 )
                {
                  v95 = v93 + 4;
                  v96 = (unsigned int)v94;
                  v97 = v95;
                  do
                  {
                    if ( (v97->n64_u32[0] & 0x80000000) != 0 )
                      v97->n64_u32[0] = ~v97->n64_u32[0];
                    --v96;
                    v97 = (int32x2_t *)((char *)v97 + 4);
                  }
                  while ( v96 );
                  if ( (int)v94 >= 2 )
                  {
                    v98 = (unsigned int)v94;
                    v99 = 0;
                    v100 = 2LL * ((unsigned int)v94 >> 1);
                    do
                    {
                      if ( v99 >= v98 || v99 + 1 >= v98 )
                        goto LABEL_93;
                      v99 += 2LL;
                      v95->n64_u64[0] = vrev64_s32((int32x2_t)v95->n64_u64[0]).n64_u64[0];
                      ++v95;
                    }
                    while ( v100 != v99 );
                  }
                }
                uvIndex = v89->uvIndex;
                if ( !uvIndex )
                  break;
                if ( v92 >= LODWORD(uvIndex->max_length) )
                  goto LABEL_93;
                v102 = (int32x2_t *)uvIndex->m_Items[v92];
                if ( !v102 )
                  break;
                v103 = v102[3].n64_u64[0];
                if ( (int)v103 >= 2 )
                {
                  v104 = (unsigned int)v102[3].n64_u64[0];
                  v105 = 0;
                  v106 = v102 + 4;
                  v107 = 2LL * ((unsigned int)v103 >> 1);
                  do
                  {
                    if ( v105 >= v104 || v105 + 1 >= v104 )
                      goto LABEL_93;
                    v105 += 2LL;
                    v106->n64_u64[0] = vrev64_s32((int32x2_t)v106->n64_u64[0]).n64_u64[0];
                    ++v106;
                  }
                  while ( v107 != v105 );
                }
                if ( ++v92 == 4 )
                {
                  v108 = sub_1C37100(UnityEngine_Vector3_____TypeInfo, 4);
                  v109 = UIMeshSprite_TypeInfo->static_fields;
                  v109->sprMeshVert = (struct UnityEngine_Vector3_array_array *)v108;
                  sub_1C36FFC((CGThumbnailListItem_o *)&v109->sprMeshVert, v108, v110, v111);
                  v112 = sub_1C37100(UnityEngine_Vector2_____TypeInfo, 4);
                  v113 = UIMeshSprite_TypeInfo->static_fields;
                  v113->sprMeshUv = (struct UnityEngine_Vector2_array_array *)v112;
                  sub_1C36FFC((CGThumbnailListItem_o *)&v113->sprMeshUv, v112, v114, v115);
                  v116 = 0;
                  while ( 1 )
                  {
                    v117 = UIMeshSprite_TypeInfo->static_fields;
                    meshVertices = v117->meshVertices;
                    if ( !v117->meshVertices )
                      goto LABEL_94;
                    if ( v116 >= LODWORD(meshVertices->max_length) )
                      goto LABEL_93;
                    uvPos = v117->uvPos;
                    if ( !uvPos )
                      goto LABEL_94;
                    if ( v116 >= LODWORD(uvPos->max_length) )
                      goto LABEL_93;
                    v120 = meshVertices->m_Items[v116];
                    if ( !v120 )
                      goto LABEL_94;
                    v121 = uvPos->m_Items[v116];
                    v6 = sub_1C37100(UnityEngine_Vector3___TypeInfo, (unsigned int)(SLODWORD(v120->max_length) / 3));
                    if ( !v6 )
                      goto LABEL_94;
                    v122 = v6;
                    if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
                      break;
LABEL_61:
                    if ( !v121 )
                      goto LABEL_94;
                    v6 = sub_1C37100(UnityEngine_Vector2___TypeInfo, (unsigned int)(SLODWORD(v121->max_length) / 2));
                    if ( !v6 )
                      goto LABEL_94;
                    v135 = v6;
                    if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
                    {
                      v136 = 0;
                      v137 = 0;
                      v138 = (unsigned int)*(_QWORD *)(v6 + 24);
                      v139 = -1;
                      do
                      {
                        max_length_low = LODWORD(v121->max_length);
                        if ( v139 + 1 >= max_length_low )
                          goto LABEL_93;
                        v139 += 2LL;
                        if ( v139 >= max_length_low || v137 >= v138 )
                          goto LABEL_93;
                        v141 = *(float64x2_t *)((char *)v121->m_Items + (v136 >> 29));
                        v136 += 0x200000000LL;
                        v142 = v138 == v137 + 1;
                        *(float32x2_t *)(v6 + 32 + 8 * v137++) = vcvt_f32_f64(v141);
                      }
                      while ( !v142 );
                    }
                    v143 = *(_QWORD *)(v122 + 24);
                    if ( (int)v143 >= 1 )
                    {
                      v144 = (unsigned int)*(_QWORD *)(v122 + 24);
                      v145.n64_u32[0] = 1148846080;
                      v146 = 0;
                      v147 = (float *)(v122 + 36);
                      v133.n64_u32[0] = 0;
                      v148 = 1000.0;
                      v149 = 0.0;
                      do
                      {
                        if ( v144 == v146 )
                          goto LABEL_93;
                        *(float *)&v134 = *(v147 - 1);
                        if ( *(float *)&v134 >= v145.n64_f32[0] )
                        {
                          if ( *(float *)&v134 > v133.n64_f32[0] )
                            v133.n64_u64[0] = v134;
                        }
                        else
                        {
                          v145.n64_f32[0] = *(v147 - 1);
                        }
                        if ( *v147 >= v148 )
                        {
                          if ( *v147 > v149 )
                            v149 = *v147;
                        }
                        else
                        {
                          v148 = *v147;
                        }
                        ++v146;
                        v147 += 3;
                      }
                      while ( v146 < (int)v143 );
                      v133.n64_f32[0] = v133.n64_f32[0] - v145.n64_f32[0];
                      v150 = v149 - v148;
                      if ( v133.n64_f32[0] < v150 )
                        v133.n64_f32[0] = v150;
                      v151 = 0;
                      v145.n64_f32[1] = v148;
                      v152.n64_u64[0] = vdup_lane_s32(v133, 0).n64_u64[0];
                      v153 = (float *)(v122 + 40);
                      while ( v151 < v144 )
                      {
                        ++v151;
                        v154 = (float)(*v153 + 0.0) / v133.n64_f32[0];
                        *((float32x2_t *)v153 - 1) = vdiv_f32(vsub_f32(*(float32x2_t *)(v153 - 2), v145), v152);
                        *v153 = v154;
                        v153 += 3;
                        if ( v144 == v151 )
                          goto LABEL_87;
                      }
                      goto LABEL_93;
                    }
LABEL_87:
                    sprMeshVert = UIMeshSprite_TypeInfo->static_fields->sprMeshVert;
                    if ( !sprMeshVert )
                      goto LABEL_94;
                    if ( v116 >= LODWORD(sprMeshVert->max_length) )
                      goto LABEL_93;
                    v156 = &sprMeshVert->obj.klass + (int)v116;
                    v156[4] = (Il2CppClass *)v122;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v156 + 4), v122, v131, v132);
                    sprMeshUv = UIMeshSprite_TypeInfo->static_fields->sprMeshUv;
                    if ( !sprMeshUv )
                      goto LABEL_94;
                    if ( v116 >= LODWORD(sprMeshUv->max_length) )
                      goto LABEL_93;
                    v160 = &sprMeshUv->obj.klass + (int)v116;
                    v160[4] = (Il2CppClass *)v135;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v160 + 4), v135, v157, v158);
                    if ( ++v116 == 4 )
                      goto LABEL_92;
                  }
                  v123 = 0;
                  v124 = 0;
                  v125 = (unsigned int)*(_QWORD *)(v6 + 24);
                  v126 = (float *)(v6 + 40);
                  while ( 1 )
                  {
                    v127 = v120->max_length;
                    if ( v123 >= v127 || v123 + 1 >= v127 || v123 + 2 >= v127 || v124 >= v125 )
                      break;
                    ++v124;
                    v128 = v120->m_Items[v123 + 2];
                    v129 = v120->m_Items[v123 + 1];
                    v130 = v120->m_Items[v123];
                    v123 += 3;
                    *(v126 - 2) = v130;
                    *(v126 - 1) = v129;
                    *v126 = v128;
                    v126 += 3;
                    if ( v125 == v124 )
                      goto LABEL_61;
                  }
LABEL_93:
                  sub_1C372BC(v6);
                }
              }
            }
          }
        }
      }
    }
LABEL_94:
    sub_1C372B4(v6);
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
  struct UISpriteData_o *mSprite; // x8
  struct UISpriteData_o *Sprite; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int width; // w11
  int height; // w12
  int32_t borderTop; // w13
  int x; // w9
  int y; // w10
  int32_t borderLeft; // w15
  float v21; // s8
  float v22; // s9
  float v23; // s12
  float v24; // s13
  float v25; // s14
  float v26; // s15
  float v27; // s10
  float v28; // s11
  int32_t v29; // w24
  int32_t v30; // w0
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  int32_t v35; // w24
  int32_t v36; // w0
  const MethodInfo *v37; // x4
  int v38; // s4 OVERLAPPED
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C44892 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44892 = 1;
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSprite, (int32_t)Sprite, v13, v14);
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
      v21 = (float)height;
      v22 = (float)width;
      v23 = (float)(borderTop + y);
      v24 = (float)(borderLeft + x);
      v25 = (float)(height - borderTop - mSprite->fields.borderBottom);
      v26 = (float)(width - borderLeft - mSprite->fields.borderRight);
      v27 = (float)y;
      v28 = (float)x;
      v29 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v30 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v44.fields.m_XMin = v28;
      v44.fields.m_YMin = v27;
      v44.fields.m_Width = v22;
      v44.fields.m_Height = v21;
      v45 = NGUIMath__ConvertToTexCoords(v44, v29, v30, 0);
      m_XMin = v45.fields.m_XMin;
      m_YMin = v45.fields.m_YMin;
      m_Width = v45.fields.m_Width;
      m_Height = v45.fields.m_Height;
      v35 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v36 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v46.fields.m_XMin = v24;
      v46.fields.m_YMin = v23;
      v46.fields.m_Width = v26;
      v46.fields.m_Height = v25;
      NGUIMath__ConvertToTexCoords(v46, v35, v36, 0);
      if ( verts )
      {
        size = verts->fields.size;
        v47.fields.m_XMin = m_XMin;
        v47.fields.m_YMin = m_YMin;
        v47.fields.m_Width = m_Width;
        v47.fields.m_Height = m_Height;
        UIMeshSprite__RotFill(this, verts, uvs, cols, v47, *(UnityEngine_Rect_o *)&v38, v37);
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
    sub_1C372B4(mAtlas);
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
  if ( (byte_4C44893 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_Vector3__Add__);
    sub_1C37058(&Method_BetterList_Color32__Add__);
    sub_1C37058(&Method_BetterList_Vector2__Add__);
    sub_1C37058(&UIMeshSprite_TypeInfo);
    byte_4C44893 = 1;
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
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C372BC)(drawingColor);
  v37 = meshPolygons->m_Items[meshType];
  if ( !v37 )
LABEL_30:
    ((void (__fastcall __noreturn *)(_QWORD))sub_1C372B4)(drawingColor);
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
      BetterList_Vector3___Add(verts, v59, (const MethodInfo_331BD14 *)Method_BetterList_Vector3__Add__);
      if ( !uvs )
        break;
      v58.fields.y = y + (float)(v45 * v53);
      v58.fields.x = x + (float)(v46 * v52);
      BetterList_Vector2___Add(uvs, v58, (const MethodInfo_331B288 *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        break;
      v54 = (UnityEngine_Color32_o)rgba;
      BetterList_Color32___Add(cols, v54, (const MethodInfo_3318D3C *)Method_BetterList_Color32__Add__);
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

  if ( (byte_4C44891 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C44891 = 1;
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
  return (UnityEngine_Color32_o)(unsigned int)sub_2526688(0, v5, v4, v3, v2);
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