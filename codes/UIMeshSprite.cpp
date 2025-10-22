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
  const MethodInfo *v9; // x3
  System_Array_o *v10; // x21
  System_RuntimeFieldHandle_o v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Array_o *v14; // x0
  System_RuntimeFieldHandle_o v15; // x1
  System_Array_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Array_o *v19; // x0
  System_RuntimeFieldHandle_o v20; // x1
  System_Array_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x20
  System_Array_o *v27; // x21
  System_RuntimeFieldHandle_o v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Array_o *v31; // x21
  System_RuntimeFieldHandle_o v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Array_o *v35; // x0
  System_RuntimeFieldHandle_o v36; // x1
  System_Array_o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Array_o *v40; // x0
  System_RuntimeFieldHandle_o v41; // x1
  System_Array_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct UIMeshSprite_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x20
  System_Array_o *v49; // x21
  System_RuntimeFieldHandle_o v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Array_o *v53; // x21
  System_RuntimeFieldHandle_o v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Array_o *v57; // x21
  System_RuntimeFieldHandle_o v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Array_o *v61; // x21
  System_RuntimeFieldHandle_o v62; // x1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct UIMeshSprite_StaticFields *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x20
  System_Array_o *v69; // x21
  System_RuntimeFieldHandle_o v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Array_o *v73; // x21
  System_RuntimeFieldHandle_o v74; // x1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  System_Array_o *v77; // x0
  System_RuntimeFieldHandle_o v78; // x1
  System_Array_o *v79; // x21
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Array_o *v82; // x0
  System_RuntimeFieldHandle_o v83; // x1
  System_Array_o *v84; // x21
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct UIMeshSprite_StaticFields *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct UIMeshSprite_StaticFields *v90; // x8
  struct System_Int32_array_array *meshPolygons; // x9
  unsigned int max_length; // w10
  unsigned int v93; // w11
  int32x2_t *v94; // x12
  unsigned __int64 v95; // x13
  int32x2_t *v96; // x12
  __int64 v97; // x14
  int32x2_t *v98; // x15
  unsigned __int64 v99; // x15
  unsigned __int64 v100; // x14
  __int64 v101; // x13
  struct System_Int32_array_array *uvIndex; // x12
  int32x2_t *v103; // x14
  unsigned __int64 v104; // x15
  unsigned __int64 v105; // x13
  unsigned __int64 v106; // x12
  int32x2_t *v107; // x14
  __int64 v108; // x15
  __int64 v109; // x0
  struct UIMeshSprite_StaticFields *v110; // x8
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  __int64 v113; // x0
  struct UIMeshSprite_StaticFields *v114; // x8
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  unsigned int v117; // w22
  struct UIMeshSprite_StaticFields *v118; // x9
  struct System_Double_array_array *meshVertices; // x8
  struct System_Double_array_array *uvPos; // x9
  System_Double_array *v121; // x21
  System_Double_array *v122; // x29
  __int64 v123; // x20
  unsigned int v124; // w8
  unsigned __int64 v125; // x9
  unsigned __int64 v126; // x10
  float *v127; // x11
  unsigned int v128; // w14
  float v129; // s0
  float v130; // s1
  float v131; // s2
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  int32x2_t v134; // d2
  unsigned __int64 v135; // d4
  __int64 v136; // x21
  __int64 v137; // x12
  unsigned __int64 v138; // x10
  unsigned __int64 v139; // x8
  unsigned __int64 v140; // x11
  unsigned __int64 max_length_low; // x13
  float64x2_t v142; // q0
  bool v143; // zf
  __int64 v144; // x9
  unsigned __int64 v145; // x8
  float32x2_t v146; // d0
  __int64 v147; // x10
  float *v148; // x11
  float v149; // s1
  float v150; // s3
  float v151; // s3
  unsigned __int64 v152; // x9
  float32x2_t v153; // d1
  float *v154; // x10
  float v155; // s4
  struct UnityEngine_Vector3_array_array *sprMeshVert; // x8
  Il2CppClass **v157; // x0
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  struct UnityEngine_Vector2_array_array *sprMeshUv; // x8
  Il2CppClass **v161; // x0

  if ( (byte_4C5865B & 1) == 0 )
  {
    sub_1C3E564(&double_____TypeInfo);
    sub_1C3E564(&double___TypeInfo);
    sub_1C3E564(&int_____TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08);
    sub_1C3E564(&Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E);
    sub_1C3E564(&Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D);
    sub_1C3E564(&Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C);
    sub_1C3E564(&Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E);
    sub_1C3E564(&Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4);
    sub_1C3E564(&Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE);
    sub_1C3E564(&Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48);
    sub_1C3E564(&Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB);
    sub_1C3E564(&Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F);
    sub_1C3E564(&UIMeshSprite_TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2_____TypeInfo);
    sub_1C3E564(&UnityEngine_Vector2___TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3_____TypeInfo);
    sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    byte_4C5865B = 1;
  }
  if ( !UIMeshSprite_TypeInfo->static_fields->sprMeshVert )
  {
    v3 = sub_1C3E60C(double_____TypeInfo, 4);
    v4 = (System_Array_o *)sub_1C3E60C(double___TypeInfo, 12);
    v5.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v4, v5, 0);
    if ( v3 )
    {
      if ( !*(_DWORD *)(v3 + 24) )
        goto LABEL_93;
      *(_QWORD *)(v3 + 32) = v4;
      sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v4, v8, v9);
      v10 = (System_Array_o *)sub_1C3E60C(double___TypeInfo, 18);
      v11.fields.value = Field__PrivateImplementationDetails__760678574AC754570788C16023649BA2DD5F4E1DEFC8EECDAFDEFD9E455FB18D;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v10, v11, 0);
      if ( *(_DWORD *)(v3 + 24) <= 1u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 40) = v10;
      sub_1C3E508((CGThumbnailListItem_o *)(v3 + 40), (int32_t)v10, v12, v13);
      v14 = (System_Array_o *)sub_1C3E60C(double___TypeInfo, 12);
      v15.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
      v16 = v14;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v14, v15, 0);
      if ( *(_DWORD *)(v3 + 24) <= 2u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 48) = v16;
      sub_1C3E508((CGThumbnailListItem_o *)(v3 + 48), (int32_t)v16, v17, v18);
      v19 = (System_Array_o *)sub_1C3E60C(double___TypeInfo, 12);
      v20.fields.value = Field__PrivateImplementationDetails__DE20FBDC7AE005F294CB7F36726D94483663568309C8140669555C980F7950EB;
      v21 = v19;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v19, v20, 0);
      if ( *(_DWORD *)(v3 + 24) <= 3u )
        goto LABEL_93;
      *(_QWORD *)(v3 + 56) = v21;
      sub_1C3E508((CGThumbnailListItem_o *)(v3 + 56), (int32_t)v21, v22, v23);
      UIMeshSprite_TypeInfo->static_fields->meshVertices = (struct System_Double_array_array *)v3;
      sub_1C3E508((CGThumbnailListItem_o *)UIMeshSprite_TypeInfo->static_fields, v3, v24, v25);
      v26 = sub_1C3E60C(int_____TypeInfo, 4);
      v27 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 4);
      v28.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v27, v28, 0);
      if ( v26 )
      {
        if ( !*(_DWORD *)(v26 + 24) )
          goto LABEL_93;
        *(_QWORD *)(v26 + 32) = v27;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v27, v29, v30);
        v31 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 8);
        v32.fields.value = Field__PrivateImplementationDetails__FA106D01A783872947C63534621698735FDDB45CF0224FF39E81FA1D5CFE503F;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v31, v32, 0);
        if ( *(_DWORD *)(v26 + 24) <= 1u )
          goto LABEL_93;
        *(_QWORD *)(v26 + 40) = v31;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 40), (int32_t)v31, v33, v34);
        v35 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 4);
        v36.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
        v37 = v35;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v35, v36, 0);
        if ( *(_DWORD *)(v26 + 24) <= 2u )
          goto LABEL_93;
        *(_QWORD *)(v26 + 48) = v37;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 48), (int32_t)v37, v38, v39);
        v40 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 4);
        v41.fields.value = Field__PrivateImplementationDetails__7697393717A78F974D3D99FBC523001D071C386C42DCBA44DF71CAE4C67AA21C;
        v42 = v40;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v40, v41, 0);
        if ( *(_DWORD *)(v26 + 24) <= 3u )
          goto LABEL_93;
        *(_QWORD *)(v26 + 56) = v42;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 56), (int32_t)v42, v43, v44);
        static_fields = UIMeshSprite_TypeInfo->static_fields;
        static_fields->meshPolygons = (struct System_Int32_array_array *)v26;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->meshPolygons, v26, v46, v47);
        v48 = sub_1C3E60C(double_____TypeInfo, 4);
        v49 = (System_Array_o *)sub_1C3E60C(double___TypeInfo, 8);
        v50.fields.value = Field__PrivateImplementationDetails__A7D34401E4A32665A44B3A0EDC41B741B897D63BD99AA951B9A422E659B956E4;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v49, v50, 0);
        if ( v48 )
        {
          if ( !*(_DWORD *)(v48 + 24) )
            goto LABEL_93;
          *(_QWORD *)(v48 + 32) = v49;
          sub_1C3E508((CGThumbnailListItem_o *)(v48 + 32), (int32_t)v49, v51, v52);
          v53 = (System_Array_o *)sub_1C3E60C(double___TypeInfo, 12);
          v54.fields.value = Field__PrivateImplementationDetails__2EE364B28C2DF2751CBCB67FD5C712FDCCB16455384FE2153A7A1B9A39BF4E08;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v53, v54, 0);
          if ( *(_DWORD *)(v48 + 24) <= 1u )
            goto LABEL_93;
          *(_QWORD *)(v48 + 40) = v53;
          sub_1C3E508((CGThumbnailListItem_o *)(v48 + 40), (int32_t)v53, v55, v56);
          v57 = (System_Array_o *)sub_1C3E60C(double___TypeInfo, 8);
          v58.fields.value = Field__PrivateImplementationDetails__BFB6381577CD3F50A9C3EA1AA2779200B89E7FDCEDE42A7A76BBF94A108B4D48;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v57, v58, 0);
          if ( *(_DWORD *)(v48 + 24) <= 2u )
            goto LABEL_93;
          *(_QWORD *)(v48 + 48) = v57;
          sub_1C3E508((CGThumbnailListItem_o *)(v48 + 48), (int32_t)v57, v59, v60);
          v61 = (System_Array_o *)sub_1C3E60C(double___TypeInfo, 8);
          v62.fields.value = Field__PrivateImplementationDetails__39B0CE9F8BB751D3CDA95DFF4CCBD2F76AA8BE076E08F92CD3A2CE32D7FD5D9E;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v61, v62, 0);
          if ( *(_DWORD *)(v48 + 24) <= 3u )
            goto LABEL_93;
          *(_QWORD *)(v48 + 56) = v61;
          sub_1C3E508((CGThumbnailListItem_o *)(v48 + 56), (int32_t)v61, v63, v64);
          v65 = UIMeshSprite_TypeInfo->static_fields;
          v65->uvPos = (struct System_Double_array_array *)v48;
          sub_1C3E508((CGThumbnailListItem_o *)&v65->uvPos, v48, v66, v67);
          v68 = sub_1C3E60C(int_____TypeInfo, 4);
          v69 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 4);
          v70.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v69, v70, 0);
          if ( v68 )
          {
            if ( !*(_DWORD *)(v68 + 24) )
              goto LABEL_93;
            *(_QWORD *)(v68 + 32) = v69;
            sub_1C3E508((CGThumbnailListItem_o *)(v68 + 32), (int32_t)v69, v71, v72);
            v73 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 8);
            v74.fields.value = Field__PrivateImplementationDetails__8B30583BA1D630C1FD8BC2C781FC5CFD0D44EE537275F60F4BCC1CB95F36790E;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v73, v74, 0);
            if ( *(_DWORD *)(v68 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v68 + 40) = v73;
            sub_1C3E508((CGThumbnailListItem_o *)(v68 + 40), (int32_t)v73, v75, v76);
            v77 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 4);
            v78.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
            v79 = v77;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v77, v78, 0);
            if ( *(_DWORD *)(v68 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v68 + 48) = v79;
            sub_1C3E508((CGThumbnailListItem_o *)(v68 + 48), (int32_t)v79, v80, v81);
            v82 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 4);
            v83.fields.value = Field__PrivateImplementationDetails__BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;
            v84 = v82;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v82, v83, 0);
            if ( *(_DWORD *)(v68 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v68 + 56) = v84;
            sub_1C3E508((CGThumbnailListItem_o *)(v68 + 56), (int32_t)v84, v85, v86);
            v87 = UIMeshSprite_TypeInfo->static_fields;
            v87->uvIndex = (struct System_Int32_array_array *)v68;
            sub_1C3E508((CGThumbnailListItem_o *)&v87->uvIndex, v68, v88, v89);
            v90 = UIMeshSprite_TypeInfo->static_fields;
            meshPolygons = v90->meshPolygons;
            if ( meshPolygons )
            {
              max_length = meshPolygons->max_length;
              v93 = 0;
              while ( 1 )
              {
                if ( v93 >= max_length )
                  goto LABEL_93;
                v94 = (int32x2_t *)meshPolygons->m_Items[v93];
                if ( !v94 )
                  break;
                v95 = v94[3].n64_u64[0];
                if ( (int)v95 >= 1 )
                {
                  v96 = v94 + 4;
                  v97 = (unsigned int)v95;
                  v98 = v96;
                  do
                  {
                    if ( (v98->n64_u32[0] & 0x80000000) != 0 )
                      v98->n64_u32[0] = ~v98->n64_u32[0];
                    --v97;
                    v98 = (int32x2_t *)((char *)v98 + 4);
                  }
                  while ( v97 );
                  if ( (int)v95 >= 2 )
                  {
                    v99 = (unsigned int)v95;
                    v100 = 0;
                    v101 = 2LL * ((unsigned int)v95 >> 1);
                    do
                    {
                      if ( v100 >= v99 || v100 + 1 >= v99 )
                        goto LABEL_93;
                      v100 += 2LL;
                      v96->n64_u64[0] = vrev64_s32((int32x2_t)v96->n64_u64[0]).n64_u64[0];
                      ++v96;
                    }
                    while ( v101 != v100 );
                  }
                }
                uvIndex = v90->uvIndex;
                if ( !uvIndex )
                  break;
                if ( v93 >= LODWORD(uvIndex->max_length) )
                  goto LABEL_93;
                v103 = (int32x2_t *)uvIndex->m_Items[v93];
                if ( !v103 )
                  break;
                v104 = v103[3].n64_u64[0];
                if ( (int)v104 >= 2 )
                {
                  v105 = (unsigned int)v103[3].n64_u64[0];
                  v106 = 0;
                  v107 = v103 + 4;
                  v108 = 2LL * ((unsigned int)v104 >> 1);
                  do
                  {
                    if ( v106 >= v105 || v106 + 1 >= v105 )
                      goto LABEL_93;
                    v106 += 2LL;
                    v107->n64_u64[0] = vrev64_s32((int32x2_t)v107->n64_u64[0]).n64_u64[0];
                    ++v107;
                  }
                  while ( v108 != v106 );
                }
                if ( ++v93 == 4 )
                {
                  v109 = sub_1C3E60C(UnityEngine_Vector3_____TypeInfo, 4);
                  v110 = UIMeshSprite_TypeInfo->static_fields;
                  v110->sprMeshVert = (struct UnityEngine_Vector3_array_array *)v109;
                  sub_1C3E508((CGThumbnailListItem_o *)&v110->sprMeshVert, v109, v111, v112);
                  v113 = sub_1C3E60C(UnityEngine_Vector2_____TypeInfo, 4);
                  v114 = UIMeshSprite_TypeInfo->static_fields;
                  v114->sprMeshUv = (struct UnityEngine_Vector2_array_array *)v113;
                  sub_1C3E508((CGThumbnailListItem_o *)&v114->sprMeshUv, v113, v115, v116);
                  v117 = 0;
                  while ( 1 )
                  {
                    v118 = UIMeshSprite_TypeInfo->static_fields;
                    meshVertices = v118->meshVertices;
                    if ( !v118->meshVertices )
                      goto LABEL_94;
                    if ( v117 >= LODWORD(meshVertices->max_length) )
                      goto LABEL_93;
                    uvPos = v118->uvPos;
                    if ( !uvPos )
                      goto LABEL_94;
                    if ( v117 >= LODWORD(uvPos->max_length) )
                      goto LABEL_93;
                    v121 = meshVertices->m_Items[v117];
                    if ( !v121 )
                      goto LABEL_94;
                    v122 = uvPos->m_Items[v117];
                    v6 = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, (unsigned int)(SLODWORD(v121->max_length) / 3));
                    if ( !v6 )
                      goto LABEL_94;
                    v123 = v6;
                    if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
                      break;
LABEL_61:
                    if ( !v122 )
                      goto LABEL_94;
                    v6 = sub_1C3E60C(UnityEngine_Vector2___TypeInfo, (unsigned int)(SLODWORD(v122->max_length) / 2));
                    if ( !v6 )
                      goto LABEL_94;
                    v136 = v6;
                    if ( (int)*(_QWORD *)(v6 + 24) >= 1 )
                    {
                      v137 = 0;
                      v138 = 0;
                      v139 = (unsigned int)*(_QWORD *)(v6 + 24);
                      v140 = -1;
                      do
                      {
                        max_length_low = LODWORD(v122->max_length);
                        if ( v140 + 1 >= max_length_low )
                          goto LABEL_93;
                        v140 += 2LL;
                        if ( v140 >= max_length_low || v138 >= v139 )
                          goto LABEL_93;
                        v142 = *(float64x2_t *)((char *)v122->m_Items + (v137 >> 29));
                        v137 += 0x200000000LL;
                        v143 = v139 == v138 + 1;
                        *(float32x2_t *)(v6 + 32 + 8 * v138++) = vcvt_f32_f64(v142);
                      }
                      while ( !v143 );
                    }
                    v144 = *(_QWORD *)(v123 + 24);
                    if ( (int)v144 >= 1 )
                    {
                      v145 = (unsigned int)*(_QWORD *)(v123 + 24);
                      v146.n64_u32[0] = 1148846080;
                      v147 = 0;
                      v148 = (float *)(v123 + 36);
                      v134.n64_u32[0] = 0;
                      v149 = 1000.0;
                      v150 = 0.0;
                      do
                      {
                        if ( v145 == v147 )
                          goto LABEL_93;
                        *(float *)&v135 = *(v148 - 1);
                        if ( *(float *)&v135 >= v146.n64_f32[0] )
                        {
                          if ( *(float *)&v135 > v134.n64_f32[0] )
                            v134.n64_u64[0] = v135;
                        }
                        else
                        {
                          v146.n64_f32[0] = *(v148 - 1);
                        }
                        if ( *v148 >= v149 )
                        {
                          if ( *v148 > v150 )
                            v150 = *v148;
                        }
                        else
                        {
                          v149 = *v148;
                        }
                        ++v147;
                        v148 += 3;
                      }
                      while ( v147 < (int)v144 );
                      v134.n64_f32[0] = v134.n64_f32[0] - v146.n64_f32[0];
                      v151 = v150 - v149;
                      if ( v134.n64_f32[0] < v151 )
                        v134.n64_f32[0] = v151;
                      v152 = 0;
                      v146.n64_f32[1] = v149;
                      v153.n64_u64[0] = vdup_lane_s32(v134, 0).n64_u64[0];
                      v154 = (float *)(v123 + 40);
                      while ( v152 < v145 )
                      {
                        ++v152;
                        v155 = (float)(*v154 + 0.0) / v134.n64_f32[0];
                        *((float32x2_t *)v154 - 1) = vdiv_f32(vsub_f32(*(float32x2_t *)(v154 - 2), v146), v153);
                        *v154 = v155;
                        v154 += 3;
                        if ( v145 == v152 )
                          goto LABEL_87;
                      }
                      goto LABEL_93;
                    }
LABEL_87:
                    sprMeshVert = UIMeshSprite_TypeInfo->static_fields->sprMeshVert;
                    if ( !sprMeshVert )
                      goto LABEL_94;
                    if ( v117 >= LODWORD(sprMeshVert->max_length) )
                      goto LABEL_93;
                    v157 = &sprMeshVert->obj.klass + (int)v117;
                    v157[4] = (Il2CppClass *)v123;
                    sub_1C3E508((CGThumbnailListItem_o *)(v157 + 4), v123, v132, v133);
                    sprMeshUv = UIMeshSprite_TypeInfo->static_fields->sprMeshUv;
                    if ( !sprMeshUv )
                      goto LABEL_94;
                    if ( v117 >= LODWORD(sprMeshUv->max_length) )
                      goto LABEL_93;
                    v161 = &sprMeshUv->obj.klass + (int)v117;
                    v161[4] = (Il2CppClass *)v136;
                    sub_1C3E508((CGThumbnailListItem_o *)(v161 + 4), v136, v158, v159);
                    if ( ++v117 == 4 )
                      goto LABEL_92;
                  }
                  v124 = 0;
                  v125 = 0;
                  v126 = (unsigned int)*(_QWORD *)(v6 + 24);
                  v127 = (float *)(v6 + 40);
                  while ( 1 )
                  {
                    v128 = v121->max_length;
                    if ( v124 >= v128 || v124 + 1 >= v128 || v124 + 2 >= v128 || v125 >= v126 )
                      break;
                    ++v125;
                    v129 = v121->m_Items[v124 + 2];
                    v130 = v121->m_Items[v124 + 1];
                    v131 = v121->m_Items[v124];
                    v124 += 3;
                    *(v127 - 2) = v131;
                    *(v127 - 1) = v130;
                    *v127 = v129;
                    v127 += 3;
                    if ( v126 == v125 )
                      goto LABEL_61;
                  }
LABEL_93:
                  sub_1C3E7C8(v6, v7);
                }
              }
            }
          }
        }
      }
    }
LABEL_94:
    sub_1C3E7C0(v6, v7);
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
  const MethodInfo *v15; // x3
  int width; // w11
  int height; // w12
  int32_t borderTop; // w13
  int x; // w9
  int y; // w10
  int32_t borderLeft; // w15
  float v22; // s8
  float v23; // s9
  float v24; // s12
  float v25; // s13
  float v26; // s14
  float v27; // s15
  float v28; // s10
  float v29; // s11
  int32_t v30; // w24
  int32_t v31; // w0
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  int32_t v36; // w24
  int32_t v37; // w0
  const MethodInfo *v38; // x4
  int v39; // s4 OVERLAPPED
  unsigned int size; // w23
  struct UIWidget_OnPostFillCallback_o *onPostFill; // x8
  UnityEngine_Rect_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5865D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5865D = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mSprite, (int32_t)Sprite, v14, v15);
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
      v22 = (float)height;
      v23 = (float)width;
      v24 = (float)(borderTop + y);
      v25 = (float)(borderLeft + x);
      v26 = (float)(height - borderTop - mSprite->fields.borderBottom);
      v27 = (float)(width - borderLeft - mSprite->fields.borderRight);
      v28 = (float)y;
      v29 = (float)x;
      v30 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v31 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v45.fields.m_XMin = v29;
      v45.fields.m_YMin = v28;
      v45.fields.m_Width = v23;
      v45.fields.m_Height = v22;
      v46 = NGUIMath__ConvertToTexCoords(v45, v30, v31, 0);
      m_XMin = v46.fields.m_XMin;
      m_YMin = v46.fields.m_YMin;
      m_Width = v46.fields.m_Width;
      m_Height = v46.fields.m_Height;
      v36 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, void *))v9->klass[1]._1.image)(v9, v9->klass[1]._1.gc_desc);
      v37 = ((__int64 (__fastcall *)(UnityEngine_Object_o *, _QWORD))v9->klass[1]._1.byval_arg.data)(
              v9,
              *(_QWORD *)&v9->klass[1]._1.byval_arg.bits);
      v47.fields.m_XMin = v25;
      v47.fields.m_YMin = v24;
      v47.fields.m_Width = v27;
      v47.fields.m_Height = v26;
      NGUIMath__ConvertToTexCoords(v47, v36, v37, 0);
      if ( verts )
      {
        size = verts->fields.size;
        v48.fields.m_XMin = m_XMin;
        v48.fields.m_YMin = m_YMin;
        v48.fields.m_Width = m_Width;
        v48.fields.m_Height = m_Height;
        UIMeshSprite__RotFill(this, verts, uvs, cols, v48, *(UnityEngine_Rect_o *)&v39, v38);
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
    sub_1C3E7C0(mAtlas, v11);
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
  if ( (byte_4C5865E & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_Vector3__Add__);
    sub_1C3E564(&Method_BetterList_Color32__Add__);
    sub_1C3E564(&Method_BetterList_Vector2__Add__);
    sub_1C3E564(&UIMeshSprite_TypeInfo);
    byte_4C5865E = 1;
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
    sub_1C3E7C8(drawingColor, v29);
  v37 = meshPolygons->m_Items[meshType];
  if ( !v37 )
LABEL_30:
    sub_1C3E7C0(drawingColor, v29);
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
      BetterList_Vector3___Add(verts, v59, (const MethodInfo_332DBCC *)Method_BetterList_Vector3__Add__);
      if ( !uvs )
        break;
      v58.fields.y = y + (float)(v45 * v53);
      v58.fields.x = x + (float)(v46 * v52);
      BetterList_Vector2___Add(uvs, v58, (const MethodInfo_332D140 *)Method_BetterList_Vector2__Add__);
      if ( !cols )
        break;
      v54 = (UnityEngine_Color32_o)rgba;
      BetterList_Color32___Add(cols, v54, (const MethodInfo_332ABF4 *)Method_BetterList_Color32__Add__);
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

  if ( (byte_4C5865C & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5865C = 1;
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
  return (UnityEngine_Color32_o)(unsigned int)sub_2531AB4(0, v5, v4, v3, v2);
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