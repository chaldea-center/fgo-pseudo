ObjectDomain_o *ClosePanelTextureUtil__CreateClosedPanelDomain(
        UnityEngine_Vector3_o pos,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  SubmarinePanelPositionCalculator_o *v3; // x19
  float y; // s8
  float x; // s9
  float v6; // s10
  float v7; // s11
  __int64 v8; // x19

  v3 = positionCalculator;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4CEAE86 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C7BAE8(&ObjectDomain_TypeInfo);
    byte_4CEAE86 = 1;
  }
  if ( !v3 )
    sub_1C7BD40(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1C7BD34(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(float *)(v8 + 16) = x - (float)(v6 * 0.5);
  *(float *)(v8 + 20) = y - (float)(v7 * 0.5);
  *(float *)(v8 + 24) = v6;
  *(float *)(v8 + 28) = v7;
  return (ObjectDomain_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  UnityEngine_Color_array *Pixels_71760308; // x0
  __int64 v5; // x1
  UnityEngine_Texture2D_o *v6; // x21
  UnityEngine_Color_array *v7; // x21
  UnityEngine_Color_array *v8; // x20
  unsigned __int64 v9; // x8
  float32x2_t v10; // d0
  __int64 v11; // x9
  float *p_a; // x10
  float *v13; // x11
  float v14; // s3
  float v15; // s2
  int32_t v16; // w22
  int32_t v17; // w19
  int32x2_t v19; // [xsp+0h] [xbp-40h]

  v19.n64_u64[0] = *(unsigned __int64 *)&darkRate;
  if ( (byte_4CEAE8A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Color___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Texture2D_TypeInfo);
    byte_4CEAE8A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_71760308 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0,
                                                 0);
  v6 = 0;
  if ( ((unsigned __int8)Pixels_71760308 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_71760308 = UnityEngine_Texture2D__GetPixels_71760308(baseTexture, 0);
    if ( !Pixels_71760308 )
      goto LABEL_19;
    v7 = Pixels_71760308;
    Pixels_71760308 = (UnityEngine_Color_array *)sub_1C7BB90(
                                                   UnityEngine_Color___TypeInfo,
                                                   LODWORD(Pixels_71760308->max_length));
    v8 = Pixels_71760308;
    if ( (int)v7->max_length >= 1 )
    {
      if ( !(unsigned int)v7->max_length )
LABEL_15:
        sub_1C7BD48(Pixels_71760308);
      v9 = 0;
      v10.n64_u64[0] = vdup_lane_s32(v19, 0).n64_u64[0];
      v11 = (unsigned int)v7->max_length - 1LL;
      p_a = &Pixels_71760308->m_Items[0].fields.a;
      v13 = &v7->m_Items[0].fields.a;
      while ( Pixels_71760308 )
      {
        if ( v9 >= LODWORD(Pixels_71760308->max_length) )
          goto LABEL_15;
        v14 = *v13;
        v15 = *(v13 - 1) * v19.n64_f32[0];
        *(float32x2_t *)(p_a - 3) = vmul_f32(*(float32x2_t *)(v13 - 3), v10);
        *(p_a - 1) = v15;
        *p_a = v14;
        if ( v11 == v9 )
          goto LABEL_16;
        ++v9;
        p_a += 4;
        v13 += 4;
        if ( v9 >= LODWORD(v7->max_length) )
          goto LABEL_15;
      }
LABEL_19:
      sub_1C7BD40(Pixels_71760308, v5);
    }
LABEL_16:
    v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._4_get_width.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._4_get_width.method);
    v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._6_get_height.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._6_get_height.method);
    v6 = (UnityEngine_Texture2D_o *)sub_1C7BD34(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71757920(v6, v16, v17, 0);
    if ( !v6 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_71758812(v6, v8, 0);
    UnityEngine_Texture2D__Apply_71759584(v6, 0);
  }
  return v6;
}


UnityEngine_Texture2D_o *ClosePanelTextureUtil__CreateDomainSubtractTexture(
        ObjectDomain_o *objDomain,
        System_Int32_array *excludePanelUniqueIds,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  ObjectDomain_o *v8; // x22
  int32_t v9; // w24
  int32_t v10; // w25
  float X_k__BackingField; // s8
  int v12; // w0
  float Y_k__BackingField; // s9
  int v14; // w22
  int v15; // w0
  int v16; // w10
  int v17; // w10
  int v18; // w11
  float v19; // s0
  float v20; // s1
  unsigned int v21; // w21
  unsigned int v22; // w25
  float x; // s0
  float y; // s1
  int v25; // w22
  int v26; // w26
  int v27; // w27
  const MethodInfo *v28; // x3
  int32_t HorizontalPanelNum_k__BackingField; // w9
  ObjectDomain_o *v30; // x23
  int32_t VerticalPanelNum_k__BackingField; // w8
  int32_t v32; // w24
  unsigned int v33; // w29
  int32_t v34; // w25
  int v35; // w8
  unsigned int v36; // w9
  __int64 v37; // x10
  unsigned int v38; // w11
  char *v39; // x12
  UnityEngine_Texture2D_o *v40; // x19
  UnityEngine_Texture2D_o *v42; // [xsp+0h] [xbp-80h]
  unsigned int v43; // [xsp+Ch] [xbp-74h]

  v8 = objDomain;
  if ( (byte_4CEAE88 & 1) == 0 )
  {
    sub_1C7BAE8(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_1C7BAE8(&UnityEngine_Texture2D_TypeInfo);
    byte_4CEAE88 = 1;
  }
  if ( !v8 )
    goto LABEL_48;
  if ( v8->fields._Width_k__BackingField <= 0.0 || v8->fields._Height_k__BackingField <= 0.0 )
    return 0;
  if ( !closedPanelTexture )
    goto LABEL_48;
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, SubmarinePanelPositionCalculator_o *, UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method,
         positionCalculator,
         closedPanelTexture,
         method);
  v10 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v42 = (UnityEngine_Texture2D_o *)sub_1C7BD34(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_71757920(v42, v9, v10, 0);
  X_k__BackingField = v8->fields._X_k__BackingField;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._4_get_width.method);
  Y_k__BackingField = v8->fields._Y_k__BackingField;
  v14 = v12;
  v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v16 = v14 >= 0 ? v14 : v14 + 1;
  v17 = v16 >> 1;
  v18 = v15 >= 0 ? v15 : v15 + 1;
  v19 = X_k__BackingField + (float)v17;
  v20 = Y_k__BackingField + (float)(v18 >> 1);
  v21 = v19 == INFINITY ? 0x80000000 : (int)v19;
  v22 = v20 == INFINITY ? 0x80000000 : (int)v20;
  objDomain = (ObjectDomain_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
                                  closedPanelTexture,
                                  closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !positionCalculator )
    goto LABEL_48;
  x = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  y = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v25 = (int)objDomain;
  if ( x == INFINITY )
    v26 = 0x80000000;
  else
    v26 = (int)x;
  if ( y == INFINITY )
    v27 = 0x80000000;
  else
    v27 = (int)y;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71760308(closedPanelTexture, 0);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v30 = objDomain;
  if ( HorizontalPanelNum_k__BackingField >= 1 )
  {
    VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
    v32 = 0;
    v33 = v21 + v22 * v25;
    do
    {
      if ( VerticalPanelNum_k__BackingField >= 1 )
      {
        v34 = 0;
        v43 = v33;
        do
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(v32, v34, excludePanelUniqueIds, v28);
          if ( ((unsigned __int8)objDomain & 1) == 0 && v26 >= 1 )
          {
            v35 = 0;
            v36 = v33;
            do
            {
              if ( v27 >= 1 )
              {
                v37 = (unsigned int)v27;
                v38 = v36;
                if ( !v30 )
                  goto LABEL_48;
                do
                {
                  if ( v38 >= LODWORD(v30->fields._Width_k__BackingField) )
                    sub_1C7BD48(objDomain);
                  v39 = (char *)v30 + 16 * (int)v38;
                  --v37;
                  v38 += v25;
                  *((_QWORD *)v39 + 4) = 0;
                  *((_QWORD *)v39 + 5) = 0;
                }
                while ( v37 );
              }
              ++v35;
              ++v36;
            }
            while ( v35 != v26 );
          }
          VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
          ++v34;
          v33 += v27 * v25;
        }
        while ( v34 < VerticalPanelNum_k__BackingField );
        HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        v33 = v43;
      }
      ++v32;
      v33 += v26;
    }
    while ( v32 < HorizontalPanelNum_k__BackingField );
  }
  v40 = v42;
  if ( !v42 )
LABEL_48:
    sub_1C7BD40(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_71758812(v42, (UnityEngine_Color_array *)v30, 0);
  UnityEngine_Texture2D__Apply_71759584(v42, 0);
  return v40;
}


// local variable allocation has failed, the output may be wrong!
ObjectDomain_array *ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x20
  unsigned int LeftBottomEdgePos; // s0
  float v9; // s8
  int v10; // w8
  float y; // s8
  int v12; // w8
  const MethodInfo *v13; // x1
  int v14; // w8
  const MethodInfo *v15; // x1
  int v16; // w8
  float v17; // s8
  ObjectDomain_array *v18; // x21
  int v19; // w23
  int v20; // s8
  int v21; // w24
  int v22; // w25
  Il2CppObject *v23; // x0
  int v24; // w8
  int v25; // w9
  Il2CppObject *v26; // x22
  float v27; // s9
  float v28; // s10
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  float v35; // s8
  int v36; // w22
  int v37; // w24
  int v38; // w25
  float v39; // s9
  int v40; // s11
  float v41; // s10
  Il2CppObject *v42; // x0
  int v43; // w8
  int v44; // w9
  int v45; // w9
  float v46; // s0
  Il2CppObject *v47; // x23
  float v48; // s8
  float v49; // s10
  float v50; // s9
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  float v57; // s8
  int v58; // w23
  int v59; // s9
  int v60; // w24
  int v61; // w25
  Il2CppObject *v62; // x0
  int v63; // w10
  int v64; // w9
  Il2CppObject *v65; // x22
  float v66; // s8
  float v67; // s10
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  float v74; // s8
  int v75; // w22
  float v76; // s9
  int v77; // w23
  int v78; // w24
  float v79; // s10
  float v80; // s11
  int v81; // s12
  Il2CppObject *v82; // x0
  int v83; // w8
  int v84; // w8
  int v85; // w9
  float v86; // s8
  Il2CppObject *v87; // x19
  float v88; // s9
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  __int64 v96; // x0
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEAE84 & 1) == 0 )
  {
    sub_1C7BAE8(&ObjectDomain___TypeInfo);
    sub_1C7BAE8(&ObjectDomain_TypeInfo);
    sub_1C7BAE8(&float___TypeInfo);
    byte_4CEAE84 = 1;
  }
  v5 = sub_1C7BB90(float___TypeInfo, 4);
  if ( !positionCalculator )
    goto LABEL_62;
  v7 = v5;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v6);
  if ( !closedPanelTexture )
    goto LABEL_62;
  v9 = *(float *)&LeftBottomEdgePos;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !v7 )
    goto LABEL_62;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v10 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 32) = v9 + (float)(v10 >> 1);
  v97 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v6);
  y = v97.fields.y;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, long double))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method,
         *(long double *)&v97.fields.x);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_61;
  v12 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 36) = y + (float)(v12 >> 1);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v14 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 40) = (float)(v14 >> 1)
                      - COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v13));
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v16 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  v17 = (float)(v16 >> 1);
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v15);
  *(float *)(v7 + 44) = v17 - RightTopEdgePos.fields.y;
  v18 = (ObjectDomain_array *)sub_1C7BB90(ObjectDomain___TypeInfo, 4);
  v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._4_get_width.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v20 = *(_DWORD *)(v7 + 32);
  v21 = v5;
  v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v23 = (Il2CppObject *)sub_1C7BD34(ObjectDomain_TypeInfo);
  v24 = 1 - v21;
  if ( v19 <= 0 )
    v25 = -v19;
  else
    v25 = 1 - v19;
  if ( v21 <= 0 )
    v24 = -v21;
  v26 = v23;
  v27 = (float)(v25 >> 1);
  v28 = (float)(v24 >> 1);
  System_Object___ctor(v23, 0);
  *(float *)&v26[1].klass = v27;
  *((float *)&v26[1].klass + 1) = v28;
  LODWORD(v26[1].monitor) = v20;
  *((float *)&v26[1].monitor + 1) = (float)v22;
  if ( !v18 )
LABEL_62:
    sub_1C7BD40(v5, v6);
  v5 = sub_1C7BC24(v26, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !LODWORD(v18->max_length) )
    goto LABEL_61;
  v18->m_Items[0] = (ObjectDomain_o *)v26;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v18->m_Items, (int32_t)v26, v29, v30, v31, v32, v33, v34);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v35 = *(float *)(v7 + 32);
  v36 = v5;
  v37 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v38 = v5;
  v40 = *(_DWORD *)(v7 + 36);
  v39 = *(float *)(v7 + 40);
  v41 = *(float *)(v7 + 32);
  v42 = (Il2CppObject *)sub_1C7BD34(ObjectDomain_TypeInfo);
  v43 = 1 - v37;
  if ( v36 <= 0 )
    v44 = -v36;
  else
    v44 = 1 - v36;
  v45 = v44 >> 1;
  if ( v37 <= 0 )
    v43 = -v37;
  v46 = (float)v38 - v41;
  v47 = v42;
  v48 = v35 + (float)v45;
  v49 = (float)(v43 >> 1);
  v50 = v46 - v39;
  System_Object___ctor(v42, 0);
  *(float *)&v47[1].klass = v48;
  *((float *)&v47[1].klass + 1) = v49;
  *(float *)&v47[1].monitor = v50;
  HIDWORD(v47[1].monitor) = v40;
  v5 = sub_1C7BC24(v47, v18->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v96 = sub_1C7BD64();
    sub_1C7BC10(v96, 0);
  }
  if ( LODWORD(v18->max_length) <= 1
    || (v18->m_Items[1] = (ObjectDomain_o *)v47,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v18->m_Items[1], (int32_t)v47, v51, v52, v53, v54, v55, v56),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._4_get_width.method),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v57 = *(float *)(v7 + 40),
        v58 = v5,
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._6_get_height.method),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_1C7BD48(v5);
  }
  v59 = *(_DWORD *)(v7 + 40);
  v60 = v5;
  v61 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v62 = (Il2CppObject *)sub_1C7BD34(ObjectDomain_TypeInfo);
  if ( v58 >= 0 )
    v63 = v58;
  else
    v63 = v58 + 1;
  v64 = 1 - v60;
  if ( v60 <= 0 )
    v64 = -v60;
  v65 = v62;
  v66 = (float)(v63 >> 1) - v57;
  v67 = (float)(v64 >> 1);
  System_Object___ctor(v62, 0);
  *(float *)&v65[1].klass = v66;
  *((float *)&v65[1].klass + 1) = v67;
  LODWORD(v65[1].monitor) = v59;
  *((float *)&v65[1].monitor + 1) = (float)v61;
  v5 = sub_1C7BC24(v65, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_61;
  v18->m_Items[2] = (ObjectDomain_o *)v65;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v18->m_Items[2], (int32_t)v65, v68, v69, v70, v71, v72, v73);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v74 = *(float *)(v7 + 32);
  v75 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v76 = *(float *)(v7 + 44);
  v77 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v78 = v5;
  v79 = *(float *)(v7 + 32);
  v80 = *(float *)(v7 + 40);
  v81 = *(_DWORD *)(v7 + 44);
  v82 = (Il2CppObject *)sub_1C7BD34(ObjectDomain_TypeInfo);
  if ( v75 <= 0 )
    v83 = -v75;
  else
    v83 = 1 - v75;
  v84 = v83 >> 1;
  if ( v77 >= 0 )
    v85 = v77;
  else
    v85 = v77 + 1;
  v86 = v74 + (float)v84;
  v87 = v82;
  v88 = (float)(v85 >> 1) - v76;
  System_Object___ctor(v82, 0);
  *(float *)&v87[1].klass = v86;
  *((float *)&v87[1].klass + 1) = v88;
  *(float *)&v87[1].monitor = (float)((float)v78 - v79) - v80;
  HIDWORD(v87[1].monitor) = v81;
  v5 = sub_1C7BC24(v87, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v18->max_length) <= 3 )
    goto LABEL_61;
  v18->m_Items[3] = (ObjectDomain_o *)v87;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v18->m_Items[3], (int32_t)v87, v89, v90, v91, v92, v93, v94);
  return v18;
}


ObjectDomain_o *ClosePanelTextureUtil__CreatePanelOccupiedTotalDomain(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  SubmarinePanelPositionCalculator_o *v3; // x19
  float x; // s8
  float y; // s9
  const MethodInfo *v6; // x1
  float v7; // s10
  float v8; // s11
  __int64 v9; // x19
  UnityEngine_Vector3_o LeftBottomEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  v3 = positionCalculator;
  if ( (byte_4CEAE85 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C7BAE8(&ObjectDomain_TypeInfo);
    byte_4CEAE85 = 1;
  }
  if ( !v3 )
    sub_1C7BD40(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v9 = sub_1C7BD34(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(float *)(v9 + 16) = x;
  *(float *)(v9 + 20) = y;
  *(float *)(v9 + 24) = v7 - x;
  *(float *)(v9 + 28) = v8 - y;
  return (ObjectDomain_o *)v9;
}


UnityEngine_Texture2D_o *ClosePanelTextureUtil__CreateResizedTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        int32_t resizeWidth,
        int32_t resizeHeight,
        const MethodInfo *method)
{
  UnityEngine_Texture2D_o *v7; // x23
  UnityEngine_RenderTexture_o *Temporary_71777780; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEAE89 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Graphics_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Texture2D_TypeInfo);
    byte_4CEAE89 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0, 0) )
  {
    Temporary_71777780 = UnityEngine_RenderTexture__GetTemporary_71777780(resizeWidth, resizeHeight, 0, 7, 1, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_71777780, 0);
    active = UnityEngine_RenderTexture__get_active(0);
    UnityEngine_RenderTexture__set_active(Temporary_71777780, 0);
    v7 = (UnityEngine_Texture2D_o *)sub_1C7BD34(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71757920(v7, resizeWidth, resizeHeight, 0);
    if ( !v7 )
      sub_1C7BD40(v10, v11);
    v13.fields.m_Height = (float)resizeHeight;
    v13.fields.m_Width = (float)resizeWidth;
    v13.fields.m_XMin = 0.0;
    v13.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_71760004(v7, v13, 0, 0, 0);
    UnityEngine_Texture2D__Apply_71759584(v7, 0);
    UnityEngine_RenderTexture__set_active(active, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_71777780, 0);
  }
  return v7;
}


UnityEngine_Texture2D_o *ClosePanelTextureUtil__ExtractCutTextureFromObjectDomain(
        ObjectDomain_o *objDomain,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  ObjectDomain_o *v5; // x21
  float Width_k__BackingField; // s8
  float Height_k__BackingField; // s9
  UnityEngine_Texture2D_o *v8; // x0
  int32_t v9; // w1
  int32_t v10; // w2
  UnityEngine_Texture2D_o *v11; // x20
  float X_k__BackingField; // s8
  int v13; // w0
  float Y_k__BackingField; // s9
  int v15; // w22
  int v16; // w0
  int v17; // w9
  int v18; // w9
  int v19; // w10
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w4

  v5 = objDomain;
  if ( (byte_4CEAE87 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1C7BAE8(&UnityEngine_Texture2D_TypeInfo);
    byte_4CEAE87 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0;
  v8 = (UnityEngine_Texture2D_o *)sub_1C7BD34(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_71757920(v8, v9, v10, 0);
  if ( !closedPanelTexture )
    goto LABEL_35;
  X_k__BackingField = v5->fields._X_k__BackingField;
  v13 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._4_get_width.method);
  Y_k__BackingField = v5->fields._Y_k__BackingField;
  v15 = v13;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v17 = v15 >= 0 ? v15 : v15 + 1;
  v18 = v17 >> 1;
  v19 = v16 >= 0 ? v16 : v16 + 1;
  v20 = v5->fields._Width_k__BackingField;
  v21 = v5->fields._Height_k__BackingField;
  v22 = X_k__BackingField + (float)v18;
  v23 = Y_k__BackingField + (float)(v19 >> 1);
  v24 = v22 == INFINITY ? 0x80000000 : (int)v22;
  v25 = v23 == INFINITY ? 0x80000000 : (int)v23;
  v26 = v20 == INFINITY ? 0x80000000 : (int)v20;
  v27 = v21 == INFINITY ? 0x80000000 : (int)v21;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71756608(closedPanelTexture, v24, v25, v26, v27, 0);
  if ( !v11 )
LABEL_35:
    sub_1C7BD40(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_71758812(v11, (UnityEngine_Color_array *)objDomain, 0);
  UnityEngine_Texture2D__Apply_71759584(v11, 0);
  return v11;
}