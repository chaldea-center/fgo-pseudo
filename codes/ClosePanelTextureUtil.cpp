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
  if ( (byte_4CB2BCF & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C6BA08(&ObjectDomain_TypeInfo);
    byte_4CB2BCF = 1;
  }
  if ( !v3 )
    sub_1C6BC60(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1C6BC54(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_71549836; // x0
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
  if ( (byte_4CB2BD3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Color___TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UnityEngine_Texture2D_TypeInfo);
    byte_4CB2BD3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_71549836 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0,
                                                 0);
  v6 = 0;
  if ( ((unsigned __int8)Pixels_71549836 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_71549836 = UnityEngine_Texture2D__GetPixels_71549836(baseTexture, 0);
    if ( !Pixels_71549836 )
      goto LABEL_19;
    v7 = Pixels_71549836;
    Pixels_71549836 = (UnityEngine_Color_array *)sub_1C6BAB0(
                                                   UnityEngine_Color___TypeInfo,
                                                   LODWORD(Pixels_71549836->max_length));
    v8 = Pixels_71549836;
    if ( (int)v7->max_length >= 1 )
    {
      if ( !(unsigned int)v7->max_length )
LABEL_15:
        sub_1C6BC68(Pixels_71549836);
      v9 = 0;
      v10.n64_u64[0] = vdup_lane_s32(v19, 0).n64_u64[0];
      v11 = (unsigned int)v7->max_length - 1LL;
      p_a = &Pixels_71549836->m_Items[0].fields.a;
      v13 = &v7->m_Items[0].fields.a;
      while ( Pixels_71549836 )
      {
        if ( v9 >= LODWORD(Pixels_71549836->max_length) )
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
      sub_1C6BC60(Pixels_71549836, v5);
    }
LABEL_16:
    v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._4_get_width.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._4_get_width.method);
    v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._6_get_height.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._6_get_height.method);
    v6 = (UnityEngine_Texture2D_o *)sub_1C6BC54(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71547448(v6, v16, v17, 0);
    if ( !v6 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_71548340(v6, v8, 0);
    UnityEngine_Texture2D__Apply_71549112(v6, 0);
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
  if ( (byte_4CB2BD1 & 1) == 0 )
  {
    sub_1C6BA08(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_1C6BA08(&UnityEngine_Texture2D_TypeInfo);
    byte_4CB2BD1 = 1;
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
  v42 = (UnityEngine_Texture2D_o *)sub_1C6BC54(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_71547448(v42, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71549836(closedPanelTexture, 0);
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
                    sub_1C6BC68(objDomain);
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
    sub_1C6BC60(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_71548340(v42, (UnityEngine_Color_array *)v30, 0);
  UnityEngine_Texture2D__Apply_71549112(v42, 0);
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
  const MethodInfo *v30; // x3
  float v31; // s8
  int v32; // w22
  int v33; // w24
  int v34; // w25
  float v35; // s9
  int v36; // s11
  float v37; // s10
  Il2CppObject *v38; // x0
  int v39; // w8
  int v40; // w9
  int v41; // w9
  float v42; // s0
  Il2CppObject *v43; // x23
  float v44; // s8
  float v45; // s10
  float v46; // s9
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  float v49; // s8
  int v50; // w23
  int v51; // s9
  int v52; // w24
  int v53; // w25
  Il2CppObject *v54; // x0
  int v55; // w10
  int v56; // w9
  Il2CppObject *v57; // x22
  float v58; // s8
  float v59; // s10
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  float v62; // s8
  int v63; // w22
  float v64; // s9
  int v65; // w23
  int v66; // w24
  float v67; // s10
  float v68; // s11
  int v69; // s12
  Il2CppObject *v70; // x0
  int v71; // w8
  int v72; // w8
  int v73; // w9
  float v74; // s8
  Il2CppObject *v75; // x19
  float v76; // s9
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  __int64 v80; // x0
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB2BCD & 1) == 0 )
  {
    sub_1C6BA08(&ObjectDomain___TypeInfo);
    sub_1C6BA08(&ObjectDomain_TypeInfo);
    sub_1C6BA08(&float___TypeInfo);
    byte_4CB2BCD = 1;
  }
  v5 = sub_1C6BAB0(float___TypeInfo, 4);
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
  v81 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v6);
  y = v81.fields.y;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, long double))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method,
         *(long double *)&v81.fields.x);
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
  v18 = (ObjectDomain_array *)sub_1C6BAB0(ObjectDomain___TypeInfo, 4);
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
  v23 = (Il2CppObject *)sub_1C6BC54(ObjectDomain_TypeInfo);
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
    sub_1C6BC60(v5, v6);
  v5 = sub_1C6BB44(v26, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !LODWORD(v18->max_length) )
    goto LABEL_61;
  v18->m_Items[0] = (ObjectDomain_o *)v26;
  sub_1C6B9AC((CGThumbnailListItem_o *)v18->m_Items, (int32_t)v26, v29, v30);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v31 = *(float *)(v7 + 32);
  v32 = v5;
  v33 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v34 = v5;
  v36 = *(_DWORD *)(v7 + 36);
  v35 = *(float *)(v7 + 40);
  v37 = *(float *)(v7 + 32);
  v38 = (Il2CppObject *)sub_1C6BC54(ObjectDomain_TypeInfo);
  v39 = 1 - v33;
  if ( v32 <= 0 )
    v40 = -v32;
  else
    v40 = 1 - v32;
  v41 = v40 >> 1;
  if ( v33 <= 0 )
    v39 = -v33;
  v42 = (float)v34 - v37;
  v43 = v38;
  v44 = v31 + (float)v41;
  v45 = (float)(v39 >> 1);
  v46 = v42 - v35;
  System_Object___ctor(v38, 0);
  *(float *)&v43[1].klass = v44;
  *((float *)&v43[1].klass + 1) = v45;
  *(float *)&v43[1].monitor = v46;
  HIDWORD(v43[1].monitor) = v36;
  v5 = sub_1C6BB44(v43, v18->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v80 = sub_1C6BC84();
    sub_1C6BB30(v80, 0);
  }
  if ( LODWORD(v18->max_length) <= 1
    || (v18->m_Items[1] = (ObjectDomain_o *)v43,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v18->m_Items[1], (int32_t)v43, v47, v48),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._4_get_width.method),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v49 = *(float *)(v7 + 40),
        v50 = v5,
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._6_get_height.method),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_1C6BC68(v5);
  }
  v51 = *(_DWORD *)(v7 + 40);
  v52 = v5;
  v53 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v54 = (Il2CppObject *)sub_1C6BC54(ObjectDomain_TypeInfo);
  if ( v50 >= 0 )
    v55 = v50;
  else
    v55 = v50 + 1;
  v56 = 1 - v52;
  if ( v52 <= 0 )
    v56 = -v52;
  v57 = v54;
  v58 = (float)(v55 >> 1) - v49;
  v59 = (float)(v56 >> 1);
  System_Object___ctor(v54, 0);
  *(float *)&v57[1].klass = v58;
  *((float *)&v57[1].klass + 1) = v59;
  LODWORD(v57[1].monitor) = v51;
  *((float *)&v57[1].monitor + 1) = (float)v53;
  v5 = sub_1C6BB44(v57, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_61;
  v18->m_Items[2] = (ObjectDomain_o *)v57;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18->m_Items[2], (int32_t)v57, v60, v61);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v62 = *(float *)(v7 + 32);
  v63 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v64 = *(float *)(v7 + 44);
  v65 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v66 = v5;
  v67 = *(float *)(v7 + 32);
  v68 = *(float *)(v7 + 40);
  v69 = *(_DWORD *)(v7 + 44);
  v70 = (Il2CppObject *)sub_1C6BC54(ObjectDomain_TypeInfo);
  if ( v63 <= 0 )
    v71 = -v63;
  else
    v71 = 1 - v63;
  v72 = v71 >> 1;
  if ( v65 >= 0 )
    v73 = v65;
  else
    v73 = v65 + 1;
  v74 = v62 + (float)v72;
  v75 = v70;
  v76 = (float)(v73 >> 1) - v64;
  System_Object___ctor(v70, 0);
  *(float *)&v75[1].klass = v74;
  *((float *)&v75[1].klass + 1) = v76;
  *(float *)&v75[1].monitor = (float)((float)v66 - v67) - v68;
  HIDWORD(v75[1].monitor) = v69;
  v5 = sub_1C6BB44(v75, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v18->max_length) <= 3 )
    goto LABEL_61;
  v18->m_Items[3] = (ObjectDomain_o *)v75;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18->m_Items[3], (int32_t)v75, v77, v78);
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
  if ( (byte_4CB2BCE & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C6BA08(&ObjectDomain_TypeInfo);
    byte_4CB2BCE = 1;
  }
  if ( !v3 )
    sub_1C6BC60(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v9 = sub_1C6BC54(ObjectDomain_TypeInfo);
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
  UnityEngine_RenderTexture_o *Temporary_71567308; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB2BD2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Graphics_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UnityEngine_Texture2D_TypeInfo);
    byte_4CB2BD2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0, 0) )
  {
    Temporary_71567308 = UnityEngine_RenderTexture__GetTemporary_71567308(resizeWidth, resizeHeight, 0, 7, 1, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_71567308, 0);
    active = UnityEngine_RenderTexture__get_active(0);
    UnityEngine_RenderTexture__set_active(Temporary_71567308, 0);
    v7 = (UnityEngine_Texture2D_o *)sub_1C6BC54(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71547448(v7, resizeWidth, resizeHeight, 0);
    if ( !v7 )
      sub_1C6BC60(v10, v11);
    v13.fields.m_Height = (float)resizeHeight;
    v13.fields.m_Width = (float)resizeWidth;
    v13.fields.m_XMin = 0.0;
    v13.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_71549532(v7, v13, 0, 0, 0);
    UnityEngine_Texture2D__Apply_71549112(v7, 0);
    UnityEngine_RenderTexture__set_active(active, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_71567308, 0);
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
  if ( (byte_4CB2BD0 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1C6BA08(&UnityEngine_Texture2D_TypeInfo);
    byte_4CB2BD0 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0;
  v8 = (UnityEngine_Texture2D_o *)sub_1C6BC54(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_71547448(v8, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71546136(closedPanelTexture, v24, v25, v26, v27, 0);
  if ( !v11 )
LABEL_35:
    sub_1C6BC60(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_71548340(v11, (UnityEngine_Color_array *)objDomain, 0);
  UnityEngine_Texture2D__Apply_71549112(v11, 0);
  return v11;
}