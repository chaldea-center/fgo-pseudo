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
  if ( (byte_4C3F8E4 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C37058(&ObjectDomain_TypeInfo);
    byte_4C3F8E4 = 1;
  }
  if ( !v3 )
    sub_1C372B4(positionCalculator);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1C372A4(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_71157544; // x0
  UnityEngine_Texture2D_o *v5; // x21
  UnityEngine_Color_array *v6; // x21
  UnityEngine_Color_array *v7; // x20
  unsigned __int64 v8; // x8
  float32x2_t v9; // d0
  __int64 v10; // x9
  float *p_a; // x10
  float *v12; // x11
  float v13; // s3
  float v14; // s2
  int32_t v15; // w22
  int32_t v16; // w19
  int32x2_t v18; // [xsp+0h] [xbp-40h]

  v18.n64_u64[0] = *(unsigned __int64 *)&darkRate;
  if ( (byte_4C3F8E8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Color___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Texture2D_TypeInfo);
    byte_4C3F8E8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_71157544 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0,
                                                 0);
  v5 = 0;
  if ( ((unsigned __int8)Pixels_71157544 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_71157544 = UnityEngine_Texture2D__GetPixels_71157544(baseTexture, 0);
    if ( !Pixels_71157544 )
      goto LABEL_19;
    v6 = Pixels_71157544;
    Pixels_71157544 = (UnityEngine_Color_array *)sub_1C37100(
                                                   UnityEngine_Color___TypeInfo,
                                                   LODWORD(Pixels_71157544->max_length));
    v7 = Pixels_71157544;
    if ( (int)v6->max_length >= 1 )
    {
      if ( !(unsigned int)v6->max_length )
LABEL_15:
        sub_1C372BC(Pixels_71157544);
      v8 = 0;
      v9.n64_u64[0] = vdup_lane_s32(v18, 0).n64_u64[0];
      v10 = (unsigned int)v6->max_length - 1LL;
      p_a = &Pixels_71157544->m_Items[0].fields.a;
      v12 = &v6->m_Items[0].fields.a;
      while ( Pixels_71157544 )
      {
        if ( v8 >= LODWORD(Pixels_71157544->max_length) )
          goto LABEL_15;
        v13 = *v12;
        v14 = *(v12 - 1) * v18.n64_f32[0];
        *(float32x2_t *)(p_a - 3) = vmul_f32(*(float32x2_t *)(v12 - 3), v9);
        *(p_a - 1) = v14;
        *p_a = v13;
        if ( v10 == v8 )
          goto LABEL_16;
        ++v8;
        p_a += 4;
        v12 += 4;
        if ( v8 >= LODWORD(v6->max_length) )
          goto LABEL_15;
      }
LABEL_19:
      sub_1C372B4(Pixels_71157544);
    }
LABEL_16:
    v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._4_get_width.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._4_get_width.method);
    v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._6_get_height.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._6_get_height.method);
    v5 = (UnityEngine_Texture2D_o *)sub_1C372A4(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71155156(v5, v15, v16, 0);
    if ( !v5 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_71156048(v5, v7, 0);
    UnityEngine_Texture2D__Apply_71156820(v5, 0);
  }
  return v5;
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
  if ( (byte_4C3F8E6 & 1) == 0 )
  {
    sub_1C37058(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_1C37058(&UnityEngine_Texture2D_TypeInfo);
    byte_4C3F8E6 = 1;
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
  v42 = (UnityEngine_Texture2D_o *)sub_1C372A4(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_71155156(v42, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71157544(closedPanelTexture, 0);
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
                    sub_1C372BC(objDomain);
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
    sub_1C372B4(objDomain);
  UnityEngine_Texture2D__SetPixels_71156048(v42, (UnityEngine_Color_array *)v30, 0);
  UnityEngine_Texture2D__Apply_71156820(v42, 0);
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
  const MethodInfo *v10; // x1
  int v11; // w8
  float y; // s8
  int v13; // w8
  const MethodInfo *v14; // x1
  int v15; // w8
  const MethodInfo *v16; // x1
  int v17; // w8
  float v18; // s8
  ObjectDomain_array *v19; // x21
  int v20; // w23
  int v21; // s8
  int v22; // w24
  int v23; // w25
  Il2CppObject *v24; // x0
  int v25; // w8
  int v26; // w9
  Il2CppObject *v27; // x22
  float v28; // s9
  float v29; // s10
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  float v32; // s8
  int v33; // w22
  int v34; // w24
  int v35; // w25
  float v36; // s9
  int v37; // s11
  float v38; // s10
  Il2CppObject *v39; // x0
  int v40; // w8
  int v41; // w9
  int v42; // w9
  float v43; // s0
  Il2CppObject *v44; // x23
  float v45; // s8
  float v46; // s10
  float v47; // s9
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  float v50; // s8
  int v51; // w23
  int v52; // s9
  int v53; // w24
  int v54; // w25
  Il2CppObject *v55; // x0
  int v56; // w10
  int v57; // w9
  Il2CppObject *v58; // x22
  float v59; // s8
  float v60; // s10
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  float v63; // s8
  int v64; // w22
  float v65; // s9
  int v66; // w23
  int v67; // w24
  float v68; // s10
  float v69; // s11
  int v70; // s12
  Il2CppObject *v71; // x0
  int v72; // w8
  int v73; // w8
  int v74; // w9
  float v75; // s8
  Il2CppObject *v76; // x19
  float v77; // s9
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int64 v81; // x0
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F8E2 & 1) == 0 )
  {
    sub_1C37058(&ObjectDomain___TypeInfo);
    sub_1C37058(&ObjectDomain_TypeInfo);
    sub_1C37058(&float___TypeInfo);
    byte_4C3F8E2 = 1;
  }
  v5 = sub_1C37100(float___TypeInfo, 4);
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
  v82 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v10);
  y = v82.fields.y;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, long double))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method,
         *(long double *)&v82.fields.x);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_61;
  v13 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 36) = y + (float)(v13 >> 1);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v15 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 40) = (float)(v15 >> 1)
                      - COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v14));
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v17 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  v18 = (float)(v17 >> 1);
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v16);
  *(float *)(v7 + 44) = v18 - RightTopEdgePos.fields.y;
  v19 = (ObjectDomain_array *)sub_1C37100(ObjectDomain___TypeInfo, 4);
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._4_get_width.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v21 = *(_DWORD *)(v7 + 32);
  v22 = v5;
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v24 = (Il2CppObject *)sub_1C372A4(ObjectDomain_TypeInfo);
  v25 = 1 - v22;
  if ( v20 <= 0 )
    v26 = -v20;
  else
    v26 = 1 - v20;
  if ( v22 <= 0 )
    v25 = -v22;
  v27 = v24;
  v28 = (float)(v26 >> 1);
  v29 = (float)(v25 >> 1);
  System_Object___ctor(v24, 0);
  *(float *)&v27[1].klass = v28;
  *((float *)&v27[1].klass + 1) = v29;
  LODWORD(v27[1].monitor) = v21;
  *((float *)&v27[1].monitor + 1) = (float)v23;
  if ( !v19 )
LABEL_62:
    sub_1C372B4(v5);
  v5 = sub_1C37194(v27, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_61;
  v19->m_Items[0] = (ObjectDomain_o *)v27;
  sub_1C36FFC((CGThumbnailListItem_o *)v19->m_Items, (int32_t)v27, v30, v31);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v32 = *(float *)(v7 + 32);
  v33 = v5;
  v34 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v35 = v5;
  v37 = *(_DWORD *)(v7 + 36);
  v36 = *(float *)(v7 + 40);
  v38 = *(float *)(v7 + 32);
  v39 = (Il2CppObject *)sub_1C372A4(ObjectDomain_TypeInfo);
  v40 = 1 - v34;
  if ( v33 <= 0 )
    v41 = -v33;
  else
    v41 = 1 - v33;
  v42 = v41 >> 1;
  if ( v34 <= 0 )
    v40 = -v34;
  v43 = (float)v35 - v38;
  v44 = v39;
  v45 = v32 + (float)v42;
  v46 = (float)(v40 >> 1);
  v47 = v43 - v36;
  System_Object___ctor(v39, 0);
  *(float *)&v44[1].klass = v45;
  *((float *)&v44[1].klass + 1) = v46;
  *(float *)&v44[1].monitor = v47;
  HIDWORD(v44[1].monitor) = v37;
  v5 = sub_1C37194(v44, v19->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v81 = sub_1C372D8();
    sub_1C37180(v81, 0);
  }
  if ( LODWORD(v19->max_length) <= 1
    || (v19->m_Items[1] = (ObjectDomain_o *)v44,
        sub_1C36FFC((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v44, v48, v49),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._4_get_width.method),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v50 = *(float *)(v7 + 40),
        v51 = v5,
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._6_get_height.method),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_1C372BC(v5);
  }
  v52 = *(_DWORD *)(v7 + 40);
  v53 = v5;
  v54 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v55 = (Il2CppObject *)sub_1C372A4(ObjectDomain_TypeInfo);
  if ( v51 >= 0 )
    v56 = v51;
  else
    v56 = v51 + 1;
  v57 = 1 - v53;
  if ( v53 <= 0 )
    v57 = -v53;
  v58 = v55;
  v59 = (float)(v56 >> 1) - v50;
  v60 = (float)(v57 >> 1);
  System_Object___ctor(v55, 0);
  *(float *)&v58[1].klass = v59;
  *((float *)&v58[1].klass + 1) = v60;
  LODWORD(v58[1].monitor) = v52;
  *((float *)&v58[1].monitor + 1) = (float)v54;
  v5 = sub_1C37194(v58, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v19->max_length) <= 2 )
    goto LABEL_61;
  v19->m_Items[2] = (ObjectDomain_o *)v58;
  sub_1C36FFC((CGThumbnailListItem_o *)&v19->m_Items[2], (int32_t)v58, v61, v62);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v63 = *(float *)(v7 + 32);
  v64 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v65 = *(float *)(v7 + 44);
  v66 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v67 = v5;
  v68 = *(float *)(v7 + 32);
  v69 = *(float *)(v7 + 40);
  v70 = *(_DWORD *)(v7 + 44);
  v71 = (Il2CppObject *)sub_1C372A4(ObjectDomain_TypeInfo);
  if ( v64 <= 0 )
    v72 = -v64;
  else
    v72 = 1 - v64;
  v73 = v72 >> 1;
  if ( v66 >= 0 )
    v74 = v66;
  else
    v74 = v66 + 1;
  v75 = v63 + (float)v73;
  v76 = v71;
  v77 = (float)(v74 >> 1) - v65;
  System_Object___ctor(v71, 0);
  *(float *)&v76[1].klass = v75;
  *((float *)&v76[1].klass + 1) = v77;
  *(float *)&v76[1].monitor = (float)((float)v67 - v68) - v69;
  HIDWORD(v76[1].monitor) = v70;
  v5 = sub_1C37194(v76, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v19->max_length) <= 3 )
    goto LABEL_61;
  v19->m_Items[3] = (ObjectDomain_o *)v76;
  sub_1C36FFC((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)v76, v78, v79);
  return v19;
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
  if ( (byte_4C3F8E3 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C37058(&ObjectDomain_TypeInfo);
    byte_4C3F8E3 = 1;
  }
  if ( !v3 )
    sub_1C372B4(positionCalculator);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v9 = sub_1C372A4(ObjectDomain_TypeInfo);
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
  UnityEngine_RenderTexture_o *Temporary_71175016; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v10; // x0
  UnityEngine_Rect_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3F8E7 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Graphics_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Texture2D_TypeInfo);
    byte_4C3F8E7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0, 0) )
  {
    Temporary_71175016 = UnityEngine_RenderTexture__GetTemporary_71175016(resizeWidth, resizeHeight, 0, 7, 1, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_71175016, 0);
    active = UnityEngine_RenderTexture__get_active(0);
    UnityEngine_RenderTexture__set_active(Temporary_71175016, 0);
    v7 = (UnityEngine_Texture2D_o *)sub_1C372A4(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71155156(v7, resizeWidth, resizeHeight, 0);
    if ( !v7 )
      sub_1C372B4(v10);
    v12.fields.m_Height = (float)resizeHeight;
    v12.fields.m_Width = (float)resizeWidth;
    v12.fields.m_XMin = 0.0;
    v12.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_71157240(v7, v12, 0, 0, 0);
    UnityEngine_Texture2D__Apply_71156820(v7, 0);
    UnityEngine_RenderTexture__set_active(active, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_71175016, 0);
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
  if ( (byte_4C3F8E5 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1C37058(&UnityEngine_Texture2D_TypeInfo);
    byte_4C3F8E5 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0;
  v8 = (UnityEngine_Texture2D_o *)sub_1C372A4(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_71155156(v8, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_71153844(closedPanelTexture, v24, v25, v26, v27, 0);
  if ( !v11 )
LABEL_35:
    sub_1C372B4(objDomain);
  UnityEngine_Texture2D__SetPixels_71156048(v11, (UnityEngine_Color_array *)objDomain, 0);
  UnityEngine_Texture2D__Apply_71156820(v11, 0);
  return v11;
}