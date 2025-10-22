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
  if ( (byte_4C5367F & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C3E564(&ObjectDomain_TypeInfo);
    byte_4C5367F = 1;
  }
  if ( !v3 )
    sub_1C3E7C0(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1C3E7B0(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_71232356; // x0
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
  if ( (byte_4C53683 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Color___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Texture2D_TypeInfo);
    byte_4C53683 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_71232356 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0,
                                                 0);
  v6 = 0;
  if ( ((unsigned __int8)Pixels_71232356 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_71232356 = UnityEngine_Texture2D__GetPixels_71232356(baseTexture, 0);
    if ( !Pixels_71232356 )
      goto LABEL_19;
    v7 = Pixels_71232356;
    Pixels_71232356 = (UnityEngine_Color_array *)sub_1C3E60C(
                                                   UnityEngine_Color___TypeInfo,
                                                   LODWORD(Pixels_71232356->max_length));
    v8 = Pixels_71232356;
    if ( (int)v7->max_length >= 1 )
    {
      if ( !(unsigned int)v7->max_length )
LABEL_15:
        sub_1C3E7C8(Pixels_71232356, v5);
      v9 = 0;
      v10.n64_u64[0] = vdup_lane_s32(v19, 0).n64_u64[0];
      v11 = (unsigned int)v7->max_length - 1LL;
      p_a = &Pixels_71232356->m_Items[0].fields.a;
      v13 = &v7->m_Items[0].fields.a;
      while ( Pixels_71232356 )
      {
        if ( v9 >= LODWORD(Pixels_71232356->max_length) )
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
      sub_1C3E7C0(Pixels_71232356, v5);
    }
LABEL_16:
    v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._4_get_width.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._4_get_width.method);
    v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._6_get_height.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._6_get_height.method);
    v6 = (UnityEngine_Texture2D_o *)sub_1C3E7B0(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71229968(v6, v16, v17, 0);
    if ( !v6 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_71230860(v6, v8, 0);
    UnityEngine_Texture2D__Apply_71231632(v6, 0);
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
  if ( (byte_4C53681 & 1) == 0 )
  {
    sub_1C3E564(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_1C3E564(&UnityEngine_Texture2D_TypeInfo);
    byte_4C53681 = 1;
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
  v42 = (UnityEngine_Texture2D_o *)sub_1C3E7B0(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_71229968(v42, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71232356(closedPanelTexture, 0);
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
                    sub_1C3E7C8(objDomain, excludePanelUniqueIds);
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
    sub_1C3E7C0(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_71230860(v42, (UnityEngine_Color_array *)v30, 0);
  UnityEngine_Texture2D__Apply_71231632(v42, 0);
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
  int v13; // w8
  int v14; // w8
  float v15; // s8
  ObjectDomain_array *v16; // x21
  int v17; // w23
  int v18; // s8
  int v19; // w24
  int v20; // w25
  Il2CppObject *v21; // x0
  int v22; // w8
  int v23; // w9
  Il2CppObject *v24; // x22
  float v25; // s9
  float v26; // s10
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  float v29; // s8
  int v30; // w22
  int v31; // w24
  int v32; // w25
  float v33; // s9
  int v34; // s11
  float v35; // s10
  Il2CppObject *v36; // x0
  int v37; // w8
  int v38; // w9
  int v39; // w9
  float v40; // s0
  Il2CppObject *v41; // x23
  float v42; // s8
  float v43; // s10
  float v44; // s9
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  float v47; // s8
  int v48; // w23
  int v49; // s9
  int v50; // w24
  int v51; // w25
  Il2CppObject *v52; // x0
  int v53; // w10
  int v54; // w9
  Il2CppObject *v55; // x22
  float v56; // s8
  float v57; // s10
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  float v60; // s8
  int v61; // w22
  float v62; // s9
  int v63; // w23
  int v64; // w24
  float v65; // s10
  float v66; // s11
  int v67; // s12
  Il2CppObject *v68; // x0
  int v69; // w8
  int v70; // w8
  int v71; // w9
  float v72; // s8
  Il2CppObject *v73; // x19
  float v74; // s9
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  __int64 v78; // x0
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5367D & 1) == 0 )
  {
    sub_1C3E564(&ObjectDomain___TypeInfo);
    sub_1C3E564(&ObjectDomain_TypeInfo);
    sub_1C3E564(&float___TypeInfo);
    byte_4C5367D = 1;
  }
  v5 = sub_1C3E60C(float___TypeInfo, 4);
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
  v79 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v6);
  y = v79.fields.y;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, long double))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method,
         *(long double *)&v79.fields.x);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_61;
  v12 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 36) = y + (float)(v12 >> 1);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v13 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 40) = (float)(v13 >> 1)
                      - COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v6));
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v14 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  v15 = (float)(v14 >> 1);
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v6);
  *(float *)(v7 + 44) = v15 - RightTopEdgePos.fields.y;
  v16 = (ObjectDomain_array *)sub_1C3E60C(ObjectDomain___TypeInfo, 4);
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._4_get_width.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v18 = *(_DWORD *)(v7 + 32);
  v19 = v5;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v21 = (Il2CppObject *)sub_1C3E7B0(ObjectDomain_TypeInfo);
  v22 = 1 - v19;
  if ( v17 <= 0 )
    v23 = -v17;
  else
    v23 = 1 - v17;
  if ( v19 <= 0 )
    v22 = -v19;
  v24 = v21;
  v25 = (float)(v23 >> 1);
  v26 = (float)(v22 >> 1);
  System_Object___ctor(v21, 0);
  *(float *)&v24[1].klass = v25;
  *((float *)&v24[1].klass + 1) = v26;
  LODWORD(v24[1].monitor) = v18;
  *((float *)&v24[1].monitor + 1) = (float)v20;
  if ( !v16 )
LABEL_62:
    sub_1C3E7C0(v5, v6);
  v5 = sub_1C3E6A0(v24, v16->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_61;
  v16->m_Items[0] = (ObjectDomain_o *)v24;
  sub_1C3E508((CGThumbnailListItem_o *)v16->m_Items, (int32_t)v24, v27, v28);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v29 = *(float *)(v7 + 32);
  v30 = v5;
  v31 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v32 = v5;
  v34 = *(_DWORD *)(v7 + 36);
  v33 = *(float *)(v7 + 40);
  v35 = *(float *)(v7 + 32);
  v36 = (Il2CppObject *)sub_1C3E7B0(ObjectDomain_TypeInfo);
  v37 = 1 - v31;
  if ( v30 <= 0 )
    v38 = -v30;
  else
    v38 = 1 - v30;
  v39 = v38 >> 1;
  if ( v31 <= 0 )
    v37 = -v31;
  v40 = (float)v32 - v35;
  v41 = v36;
  v42 = v29 + (float)v39;
  v43 = (float)(v37 >> 1);
  v44 = v40 - v33;
  System_Object___ctor(v36, 0);
  *(float *)&v41[1].klass = v42;
  *((float *)&v41[1].klass + 1) = v43;
  *(float *)&v41[1].monitor = v44;
  HIDWORD(v41[1].monitor) = v34;
  v5 = sub_1C3E6A0(v41, v16->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v78 = sub_1C3E7E4();
    sub_1C3E68C(v78, 0);
  }
  if ( LODWORD(v16->max_length) <= 1
    || (v16->m_Items[1] = (ObjectDomain_o *)v41,
        sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[1], (int32_t)v41, v45, v46),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._4_get_width.method),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v47 = *(float *)(v7 + 40),
        v48 = v5,
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._6_get_height.method),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_1C3E7C8(v5, v6);
  }
  v49 = *(_DWORD *)(v7 + 40);
  v50 = v5;
  v51 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v52 = (Il2CppObject *)sub_1C3E7B0(ObjectDomain_TypeInfo);
  if ( v48 >= 0 )
    v53 = v48;
  else
    v53 = v48 + 1;
  v54 = 1 - v50;
  if ( v50 <= 0 )
    v54 = -v50;
  v55 = v52;
  v56 = (float)(v53 >> 1) - v47;
  v57 = (float)(v54 >> 1);
  System_Object___ctor(v52, 0);
  *(float *)&v55[1].klass = v56;
  *((float *)&v55[1].klass + 1) = v57;
  LODWORD(v55[1].monitor) = v49;
  *((float *)&v55[1].monitor + 1) = (float)v51;
  v5 = sub_1C3E6A0(v55, v16->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_61;
  v16->m_Items[2] = (ObjectDomain_o *)v55;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[2], (int32_t)v55, v58, v59);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v60 = *(float *)(v7 + 32);
  v61 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v62 = *(float *)(v7 + 44);
  v63 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v64 = v5;
  v65 = *(float *)(v7 + 32);
  v66 = *(float *)(v7 + 40);
  v67 = *(_DWORD *)(v7 + 44);
  v68 = (Il2CppObject *)sub_1C3E7B0(ObjectDomain_TypeInfo);
  if ( v61 <= 0 )
    v69 = -v61;
  else
    v69 = 1 - v61;
  v70 = v69 >> 1;
  if ( v63 >= 0 )
    v71 = v63;
  else
    v71 = v63 + 1;
  v72 = v60 + (float)v70;
  v73 = v68;
  v74 = (float)(v71 >> 1) - v62;
  System_Object___ctor(v68, 0);
  *(float *)&v73[1].klass = v72;
  *((float *)&v73[1].klass + 1) = v74;
  *(float *)&v73[1].monitor = (float)((float)v64 - v65) - v66;
  HIDWORD(v73[1].monitor) = v67;
  v5 = sub_1C3E6A0(v73, v16->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v16->max_length) <= 3 )
    goto LABEL_61;
  v16->m_Items[3] = (ObjectDomain_o *)v73;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[3], (int32_t)v73, v75, v76);
  return v16;
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
  if ( (byte_4C5367E & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C3E564(&ObjectDomain_TypeInfo);
    byte_4C5367E = 1;
  }
  if ( !v3 )
    sub_1C3E7C0(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v9 = sub_1C3E7B0(ObjectDomain_TypeInfo);
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
  UnityEngine_RenderTexture_o *Temporary_71249828; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C53682 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Graphics_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Texture2D_TypeInfo);
    byte_4C53682 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0, 0) )
  {
    Temporary_71249828 = UnityEngine_RenderTexture__GetTemporary_71249828(resizeWidth, resizeHeight, 0, 7, 1, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_71249828, 0);
    active = UnityEngine_RenderTexture__get_active(0);
    UnityEngine_RenderTexture__set_active(Temporary_71249828, 0);
    v7 = (UnityEngine_Texture2D_o *)sub_1C3E7B0(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71229968(v7, resizeWidth, resizeHeight, 0);
    if ( !v7 )
      sub_1C3E7C0(v10, v11);
    v13.fields.m_Height = (float)resizeHeight;
    v13.fields.m_Width = (float)resizeWidth;
    v13.fields.m_XMin = 0.0;
    v13.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_71232052(v7, v13, 0, 0, 0);
    UnityEngine_Texture2D__Apply_71231632(v7, 0);
    UnityEngine_RenderTexture__set_active(active, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_71249828, 0);
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
  if ( (byte_4C53680 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1C3E564(&UnityEngine_Texture2D_TypeInfo);
    byte_4C53680 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0;
  v8 = (UnityEngine_Texture2D_o *)sub_1C3E7B0(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_71229968(v8, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71228656(closedPanelTexture, v24, v25, v26, v27, 0);
  if ( !v11 )
LABEL_35:
    sub_1C3E7C0(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_71230860(v11, (UnityEngine_Color_array *)objDomain, 0);
  UnityEngine_Texture2D__Apply_71231632(v11, 0);
  return v11;
}