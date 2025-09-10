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
  if ( (byte_4C23C26 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C2D490(&ObjectDomain_TypeInfo);
    byte_4C23C26 = 1;
  }
  if ( !v3 )
    sub_1C2D6EC(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1C2D6DC(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_71054496; // x0
  __int64 v5; // x1
  UnityEngine_Texture2D_o *v6; // x21
  UnityEngine_Color_array *v7; // x21
  __int64 v8; // x2
  UnityEngine_Color_array *v9; // x20
  unsigned __int64 v10; // x8
  float32x2_t v11; // d0
  __int64 v12; // x9
  float *p_a; // x10
  float *v14; // x11
  float v15; // s3
  float v16; // s2
  int32_t v17; // w22
  int32_t v18; // w19
  int32x2_t v20; // [xsp+0h] [xbp-40h]

  v20.n64_u64[0] = *(unsigned __int64 *)&darkRate;
  if ( (byte_4C23C2A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Color___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Texture2D_TypeInfo);
    byte_4C23C2A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_71054496 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0,
                                                 0);
  v6 = 0;
  if ( ((unsigned __int8)Pixels_71054496 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_71054496 = UnityEngine_Texture2D__GetPixels_71054496(baseTexture, 0);
    if ( !Pixels_71054496 )
      goto LABEL_19;
    v7 = Pixels_71054496;
    Pixels_71054496 = (UnityEngine_Color_array *)sub_1C2D538(
                                                   UnityEngine_Color___TypeInfo,
                                                   LODWORD(Pixels_71054496->max_length));
    v9 = Pixels_71054496;
    if ( (int)v7->max_length >= 1 )
    {
      if ( !(unsigned int)v7->max_length )
LABEL_15:
        sub_1C2D6F4(Pixels_71054496, v5, v8);
      v10 = 0;
      v11.n64_u64[0] = vdup_lane_s32(v20, 0).n64_u64[0];
      v12 = (unsigned int)v7->max_length - 1LL;
      p_a = &Pixels_71054496->m_Items[0].fields.a;
      v14 = &v7->m_Items[0].fields.a;
      while ( Pixels_71054496 )
      {
        if ( v10 >= LODWORD(Pixels_71054496->max_length) )
          goto LABEL_15;
        v15 = *v14;
        v16 = *(v14 - 1) * v20.n64_f32[0];
        *(float32x2_t *)(p_a - 3) = vmul_f32(*(float32x2_t *)(v14 - 3), v11);
        *(p_a - 1) = v16;
        *p_a = v15;
        if ( v12 == v10 )
          goto LABEL_16;
        ++v10;
        p_a += 4;
        v14 += 4;
        if ( v10 >= LODWORD(v7->max_length) )
          goto LABEL_15;
      }
LABEL_19:
      sub_1C2D6EC(Pixels_71054496, v5);
    }
LABEL_16:
    v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._4_get_width.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._4_get_width.method);
    v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._6_get_height.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._6_get_height.method);
    v6 = (UnityEngine_Texture2D_o *)sub_1C2D6DC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71052108(v6, v17, v18, 0);
    if ( !v6 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_71053000(v6, v9, 0);
    UnityEngine_Texture2D__Apply_71053772(v6, 0);
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
  __int64 v35; // x2
  int v36; // w8
  unsigned int v37; // w9
  __int64 v38; // x10
  unsigned int v39; // w11
  char *v40; // x12
  UnityEngine_Texture2D_o *v41; // x19
  UnityEngine_Texture2D_o *v43; // [xsp+0h] [xbp-80h]
  unsigned int v44; // [xsp+Ch] [xbp-74h]

  v8 = objDomain;
  if ( (byte_4C23C28 & 1) == 0 )
  {
    sub_1C2D490(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_1C2D490(&UnityEngine_Texture2D_TypeInfo);
    byte_4C23C28 = 1;
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
  v43 = (UnityEngine_Texture2D_o *)sub_1C2D6DC(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_71052108(v43, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71054496(closedPanelTexture, 0);
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
        v44 = v33;
        do
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(v32, v34, excludePanelUniqueIds, v28);
          if ( ((unsigned __int8)objDomain & 1) == 0 && v26 >= 1 )
          {
            v36 = 0;
            v37 = v33;
            do
            {
              if ( v27 >= 1 )
              {
                v38 = (unsigned int)v27;
                v39 = v37;
                if ( !v30 )
                  goto LABEL_48;
                do
                {
                  if ( v39 >= LODWORD(v30->fields._Width_k__BackingField) )
                    sub_1C2D6F4(objDomain, excludePanelUniqueIds, v35);
                  v40 = (char *)v30 + 16 * (int)v39;
                  --v38;
                  v39 += v25;
                  *((_QWORD *)v40 + 4) = 0;
                  *((_QWORD *)v40 + 5) = 0;
                }
                while ( v38 );
              }
              ++v36;
              ++v37;
            }
            while ( v36 != v26 );
          }
          VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
          ++v34;
          v33 += v27 * v25;
        }
        while ( v34 < VerticalPanelNum_k__BackingField );
        HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        v33 = v44;
      }
      ++v32;
      v33 += v26;
    }
    while ( v32 < HorizontalPanelNum_k__BackingField );
  }
  v41 = v43;
  if ( !v43 )
LABEL_48:
    sub_1C2D6EC(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_71053000(v43, (UnityEngine_Color_array *)v30, 0);
  UnityEngine_Texture2D__Apply_71053772(v43, 0);
  return v41;
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
  __int64 v10; // x2
  int v11; // w8
  float y; // s8
  int v13; // w8
  int v14; // w8
  int v15; // w8
  float v16; // s8
  ObjectDomain_array *v17; // x21
  int v18; // w23
  int v19; // s8
  int v20; // w24
  int v21; // w25
  Il2CppObject *v22; // x0
  int v23; // w8
  int v24; // w9
  Il2CppObject *v25; // x22
  float v26; // s9
  float v27; // s10
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
  const MethodInfo *v45; // x3
  float v46; // s8
  int v47; // w23
  int v48; // s9
  int v49; // w24
  int v50; // w25
  Il2CppObject *v51; // x0
  int v52; // w10
  int v53; // w9
  Il2CppObject *v54; // x22
  float v55; // s8
  float v56; // s10
  const MethodInfo *v57; // x3
  float v58; // s8
  int v59; // w22
  float v60; // s9
  int v61; // w23
  int v62; // w24
  float v63; // s10
  float v64; // s11
  int v65; // s12
  Il2CppObject *v66; // x0
  int v67; // w8
  int v68; // w8
  int v69; // w9
  float v70; // s8
  Il2CppObject *v71; // x19
  float v72; // s9
  const MethodInfo *v73; // x3
  __int64 v75; // x0
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23C24 & 1) == 0 )
  {
    sub_1C2D490(&ObjectDomain___TypeInfo);
    sub_1C2D490(&ObjectDomain_TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    byte_4C23C24 = 1;
  }
  v5 = sub_1C2D538(float___TypeInfo, 4);
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
  v11 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 32) = v9 + (float)(v11 >> 1);
  v76 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v6);
  y = v76.fields.y;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, long double))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method,
         *(long double *)&v76.fields.x);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_61;
  v13 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 36) = y + (float)(v13 >> 1);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v14 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 40) = (float)(v14 >> 1)
                      - COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v6));
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v15 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  v16 = (float)(v15 >> 1);
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v6);
  *(float *)(v7 + 44) = v16 - RightTopEdgePos.fields.y;
  v17 = (ObjectDomain_array *)sub_1C2D538(ObjectDomain___TypeInfo, 4);
  v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._4_get_width.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v19 = *(_DWORD *)(v7 + 32);
  v20 = v5;
  v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v22 = (Il2CppObject *)sub_1C2D6DC(ObjectDomain_TypeInfo);
  v23 = 1 - v20;
  if ( v18 <= 0 )
    v24 = -v18;
  else
    v24 = 1 - v18;
  if ( v20 <= 0 )
    v23 = -v20;
  v25 = v22;
  v26 = (float)(v24 >> 1);
  v27 = (float)(v23 >> 1);
  System_Object___ctor(v22, 0);
  *(float *)&v25[1].klass = v26;
  *((float *)&v25[1].klass + 1) = v27;
  LODWORD(v25[1].monitor) = v19;
  *((float *)&v25[1].monitor + 1) = (float)v21;
  if ( !v17 )
LABEL_62:
    sub_1C2D6EC(v5, v6);
  v5 = sub_1C2D5CC(v25, v17->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !LODWORD(v17->max_length) )
    goto LABEL_61;
  v17->m_Items[0] = (ObjectDomain_o *)v25;
  sub_1C2D434((CGThumbnailListItem_o *)v17->m_Items, (int32_t)v25, v10, v28);
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
  v36 = (Il2CppObject *)sub_1C2D6DC(ObjectDomain_TypeInfo);
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
  v5 = sub_1C2D5CC(v41, v17->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v75 = sub_1C2D710();
    sub_1C2D5B8(v75, 0);
  }
  if ( LODWORD(v17->max_length) <= 1
    || (v17->m_Items[1] = (ObjectDomain_o *)v41,
        sub_1C2D434((CGThumbnailListItem_o *)&v17->m_Items[1], (int32_t)v41, v10, v45),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._4_get_width.method),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v46 = *(float *)(v7 + 40),
        v47 = v5,
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._6_get_height.method),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_1C2D6F4(v5, v6, v10);
  }
  v48 = *(_DWORD *)(v7 + 40);
  v49 = v5;
  v50 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v51 = (Il2CppObject *)sub_1C2D6DC(ObjectDomain_TypeInfo);
  if ( v47 >= 0 )
    v52 = v47;
  else
    v52 = v47 + 1;
  v53 = 1 - v49;
  if ( v49 <= 0 )
    v53 = -v49;
  v54 = v51;
  v55 = (float)(v52 >> 1) - v46;
  v56 = (float)(v53 >> 1);
  System_Object___ctor(v51, 0);
  *(float *)&v54[1].klass = v55;
  *((float *)&v54[1].klass + 1) = v56;
  LODWORD(v54[1].monitor) = v48;
  *((float *)&v54[1].monitor + 1) = (float)v50;
  v5 = sub_1C2D5CC(v54, v17->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_61;
  v17->m_Items[2] = (ObjectDomain_o *)v54;
  sub_1C2D434((CGThumbnailListItem_o *)&v17->m_Items[2], (int32_t)v54, v10, v57);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v58 = *(float *)(v7 + 32);
  v59 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v60 = *(float *)(v7 + 44);
  v61 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v62 = v5;
  v63 = *(float *)(v7 + 32);
  v64 = *(float *)(v7 + 40);
  v65 = *(_DWORD *)(v7 + 44);
  v66 = (Il2CppObject *)sub_1C2D6DC(ObjectDomain_TypeInfo);
  if ( v59 <= 0 )
    v67 = -v59;
  else
    v67 = 1 - v59;
  v68 = v67 >> 1;
  if ( v61 >= 0 )
    v69 = v61;
  else
    v69 = v61 + 1;
  v70 = v58 + (float)v68;
  v71 = v66;
  v72 = (float)(v69 >> 1) - v60;
  System_Object___ctor(v66, 0);
  *(float *)&v71[1].klass = v70;
  *((float *)&v71[1].klass + 1) = v72;
  *(float *)&v71[1].monitor = (float)((float)v62 - v63) - v64;
  HIDWORD(v71[1].monitor) = v65;
  v5 = sub_1C2D5CC(v71, v17->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v17->max_length) <= 3 )
    goto LABEL_61;
  v17->m_Items[3] = (ObjectDomain_o *)v71;
  sub_1C2D434((CGThumbnailListItem_o *)&v17->m_Items[3], (int32_t)v71, v10, v73);
  return v17;
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
  if ( (byte_4C23C25 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C2D490(&ObjectDomain_TypeInfo);
    byte_4C23C25 = 1;
  }
  if ( !v3 )
    sub_1C2D6EC(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v9 = sub_1C2D6DC(ObjectDomain_TypeInfo);
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
  UnityEngine_RenderTexture_o *Temporary_71071968; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C23C29 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Graphics_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Texture2D_TypeInfo);
    byte_4C23C29 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0, 0) )
  {
    Temporary_71071968 = UnityEngine_RenderTexture__GetTemporary_71071968(resizeWidth, resizeHeight, 0, 7, 1, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_71071968, 0);
    active = UnityEngine_RenderTexture__get_active(0);
    UnityEngine_RenderTexture__set_active(Temporary_71071968, 0);
    v7 = (UnityEngine_Texture2D_o *)sub_1C2D6DC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71052108(v7, resizeWidth, resizeHeight, 0);
    if ( !v7 )
      sub_1C2D6EC(v10, v11);
    v13.fields.m_Height = (float)resizeHeight;
    v13.fields.m_Width = (float)resizeWidth;
    v13.fields.m_XMin = 0.0;
    v13.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_71054192(v7, v13, 0, 0, 0);
    UnityEngine_Texture2D__Apply_71053772(v7, 0);
    UnityEngine_RenderTexture__set_active(active, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_71071968, 0);
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
  if ( (byte_4C23C27 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1C2D490(&UnityEngine_Texture2D_TypeInfo);
    byte_4C23C27 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0;
  v8 = (UnityEngine_Texture2D_o *)sub_1C2D6DC(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_71052108(v8, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71050796(closedPanelTexture, v24, v25, v26, v27, 0);
  if ( !v11 )
LABEL_35:
    sub_1C2D6EC(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_71053000(v11, (UnityEngine_Color_array *)objDomain, 0);
  UnityEngine_Texture2D__Apply_71053772(v11, 0);
  return v11;
}