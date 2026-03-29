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
  if ( (byte_4D2D241 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C93AD4(&ObjectDomain_TypeInfo);
    byte_4D2D241 = 1;
  }
  if ( !v3 )
    sub_1C93D2C(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1C93D20(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_72010068; // x0
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
  if ( (byte_4D2D245 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Color___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_Texture2D_TypeInfo);
    byte_4D2D245 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_72010068 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0,
                                                 0);
  v6 = 0;
  if ( ((unsigned __int8)Pixels_72010068 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_72010068 = UnityEngine_Texture2D__GetPixels_72010068(baseTexture, 0);
    if ( !Pixels_72010068 )
      goto LABEL_19;
    v7 = Pixels_72010068;
    Pixels_72010068 = (UnityEngine_Color_array *)sub_1C93B7C(
                                                   UnityEngine_Color___TypeInfo,
                                                   LODWORD(Pixels_72010068->max_length));
    v8 = Pixels_72010068;
    if ( (int)v7->max_length >= 1 )
    {
      if ( !(unsigned int)v7->max_length )
LABEL_15:
        sub_1C93D34(Pixels_72010068);
      v9 = 0;
      v10.n64_u64[0] = vdup_lane_s32(v19, 0).n64_u64[0];
      v11 = (unsigned int)v7->max_length - 1LL;
      p_a = &Pixels_72010068->m_Items[0].fields.a;
      v13 = &v7->m_Items[0].fields.a;
      while ( Pixels_72010068 )
      {
        if ( v9 >= LODWORD(Pixels_72010068->max_length) )
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
      sub_1C93D2C(Pixels_72010068, v5);
    }
LABEL_16:
    v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._4_get_width.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._4_get_width.method);
    v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._6_get_height.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._6_get_height.method);
    v6 = (UnityEngine_Texture2D_o *)sub_1C93D20(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_72007680(v6, v16, v17, 0);
    if ( !v6 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_72008572(v6, v8, 0);
    UnityEngine_Texture2D__Apply_72009344(v6, 0);
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
  if ( (byte_4D2D243 & 1) == 0 )
  {
    sub_1C93AD4(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_1C93AD4(&UnityEngine_Texture2D_TypeInfo);
    byte_4D2D243 = 1;
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
  v42 = (UnityEngine_Texture2D_o *)sub_1C93D20(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_72007680(v42, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_72010068(closedPanelTexture, 0);
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
                    sub_1C93D34(objDomain);
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
    sub_1C93D2C(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_72008572(v42, (UnityEngine_Color_array *)v30, 0);
  UnityEngine_Texture2D__Apply_72009344(v42, 0);
  return v40;
}


ObjectDomain_array *ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x20
  float v8; // kr00_4
  int v9; // w8
  unsigned __int64 LeftBottomEdgePos; // kr14_8
  int v11; // w8
  const MethodInfo *v12; // x1
  int v13; // w8
  const MethodInfo *v14; // x1
  int v15; // w8
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
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  float v33; // s8
  int v34; // w22
  int v35; // w24
  int v36; // w25
  float v37; // s9
  int v38; // s11
  float v39; // s10
  Il2CppObject *v40; // x0
  int v41; // w8
  int v42; // w9
  int v43; // w9
  float v44; // s0
  Il2CppObject *v45; // x23
  float v46; // s8
  float v47; // s10
  float v48; // s9
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  float v55; // s8
  int v56; // w23
  int v57; // s9
  int v58; // w24
  int v59; // w25
  Il2CppObject *v60; // x0
  int v61; // w10
  int v62; // w9
  Il2CppObject *v63; // x22
  float v64; // s8
  float v65; // s10
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  float v72; // s8
  int v73; // w22
  float v74; // s9
  int v75; // w23
  int v76; // w24
  float v77; // s10
  float v78; // s11
  int v79; // s12
  Il2CppObject *v80; // x0
  int v81; // w8
  int v82; // w8
  int v83; // w9
  float v84; // s8
  Il2CppObject *v85; // x19
  float v86; // s9
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  __int64 v94; // x0

  if ( (byte_4D2D23F & 1) == 0 )
  {
    sub_1C93AD4(&ObjectDomain___TypeInfo);
    sub_1C93AD4(&ObjectDomain_TypeInfo);
    sub_1C93AD4(&float___TypeInfo);
    byte_4D2D23F = 1;
  }
  v5 = sub_1C93B7C(float___TypeInfo, 4);
  if ( !positionCalculator )
    goto LABEL_62;
  v7 = v5;
  LODWORD(v8) = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v6);
  if ( !closedPanelTexture )
    goto LABEL_62;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !v7 )
    goto LABEL_62;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v9 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 32) = v8 + (float)(v9 >> 1);
  LeftBottomEdgePos = (unsigned __int64)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v6);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, float))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method,
         *(float *)&LeftBottomEdgePos);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_61;
  v11 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 36) = *((float *)&LeftBottomEdgePos + 1) + (float)(v11 >> 1);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v13 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 40) = (float)(v13 >> 1)
                      - COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v12));
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v15 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 44) = (float)(v15 >> 1)
                      - COERCE_FLOAT(LODWORD(SubmarinePanelPositionCalculator__get_RightTopEdgePos(
                                               positionCalculator,
                                               v14).fields.y));
  v16 = (ObjectDomain_array *)sub_1C93B7C(ObjectDomain___TypeInfo, 4);
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
  v21 = (Il2CppObject *)sub_1C93D20(ObjectDomain_TypeInfo);
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
    sub_1C93D2C(v5, v6);
  v5 = sub_1C93C10(v24, v16->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !LODWORD(v16->max_length) )
    goto LABEL_61;
  v16->m_Items[0] = (ObjectDomain_o *)v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v16->m_Items, (int32_t)v24, v27, v28, v29, v30, v31, v32);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v33 = *(float *)(v7 + 32);
  v34 = v5;
  v35 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v36 = v5;
  v38 = *(_DWORD *)(v7 + 36);
  v37 = *(float *)(v7 + 40);
  v39 = *(float *)(v7 + 32);
  v40 = (Il2CppObject *)sub_1C93D20(ObjectDomain_TypeInfo);
  v41 = 1 - v35;
  if ( v34 <= 0 )
    v42 = -v34;
  else
    v42 = 1 - v34;
  v43 = v42 >> 1;
  if ( v35 <= 0 )
    v41 = -v35;
  v44 = (float)v36 - v39;
  v45 = v40;
  v46 = v33 + (float)v43;
  v47 = (float)(v41 >> 1);
  v48 = v44 - v37;
  System_Object___ctor(v40, 0);
  *(float *)&v45[1].klass = v46;
  *((float *)&v45[1].klass + 1) = v47;
  *(float *)&v45[1].monitor = v48;
  HIDWORD(v45[1].monitor) = v38;
  v5 = sub_1C93C10(v45, v16->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v94 = sub_1C93D50();
    sub_1C93BFC(v94, 0);
  }
  if ( LODWORD(v16->max_length) <= 1
    || (v16->m_Items[1] = (ObjectDomain_o *)v45,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->m_Items[1], (int32_t)v45, v49, v50, v51, v52, v53, v54),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._4_get_width.method),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v55 = *(float *)(v7 + 40),
        v56 = v5,
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._6_get_height.method),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_1C93D34(v5);
  }
  v57 = *(_DWORD *)(v7 + 40);
  v58 = v5;
  v59 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v60 = (Il2CppObject *)sub_1C93D20(ObjectDomain_TypeInfo);
  if ( v56 >= 0 )
    v61 = v56;
  else
    v61 = v56 + 1;
  v62 = 1 - v58;
  if ( v58 <= 0 )
    v62 = -v58;
  v63 = v60;
  v64 = (float)(v61 >> 1) - v55;
  v65 = (float)(v62 >> 1);
  System_Object___ctor(v60, 0);
  *(float *)&v63[1].klass = v64;
  *((float *)&v63[1].klass + 1) = v65;
  LODWORD(v63[1].monitor) = v57;
  *((float *)&v63[1].monitor + 1) = (float)v59;
  v5 = sub_1C93C10(v63, v16->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_61;
  v16->m_Items[2] = (ObjectDomain_o *)v63;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->m_Items[2], (int32_t)v63, v66, v67, v68, v69, v70, v71);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v72 = *(float *)(v7 + 32);
  v73 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v74 = *(float *)(v7 + 44);
  v75 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v76 = v5;
  v77 = *(float *)(v7 + 32);
  v78 = *(float *)(v7 + 40);
  v79 = *(_DWORD *)(v7 + 44);
  v80 = (Il2CppObject *)sub_1C93D20(ObjectDomain_TypeInfo);
  if ( v73 <= 0 )
    v81 = -v73;
  else
    v81 = 1 - v73;
  v82 = v81 >> 1;
  if ( v75 >= 0 )
    v83 = v75;
  else
    v83 = v75 + 1;
  v84 = v72 + (float)v82;
  v85 = v80;
  v86 = (float)(v83 >> 1) - v74;
  System_Object___ctor(v80, 0);
  *(float *)&v85[1].klass = v84;
  *((float *)&v85[1].klass + 1) = v86;
  *(float *)&v85[1].monitor = (float)((float)v76 - v77) - v78;
  HIDWORD(v85[1].monitor) = v79;
  v5 = sub_1C93C10(v85, v16->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v16->max_length) <= 3 )
    goto LABEL_61;
  v16->m_Items[3] = (ObjectDomain_o *)v85;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->m_Items[3], (int32_t)v85, v87, v88, v89, v90, v91, v92);
  return v16;
}


ObjectDomain_o *ClosePanelTextureUtil__CreatePanelOccupiedTotalDomain(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  SubmarinePanelPositionCalculator_o *v3; // x19
  const MethodInfo *v4; // x1
  __int64 v5; // x19
  unsigned __int64 LeftBottomEdgePos; // kr00_8
  unsigned __int64 RightTopEdgePos; // kr20_8

  v3 = positionCalculator;
  if ( (byte_4D2D240 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C93AD4(&ObjectDomain_TypeInfo);
    byte_4D2D240 = 1;
  }
  if ( !v3 )
    sub_1C93D2C(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = (unsigned __int64)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                                          v3,
                                          (const MethodInfo *)closedPanelTexture);
  RightTopEdgePos = (unsigned __int64)SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v4);
  v5 = sub_1C93D20(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = LeftBottomEdgePos;
  *(float *)(v5 + 24) = *(float *)&RightTopEdgePos - *(float *)&LeftBottomEdgePos;
  *(float *)(v5 + 28) = *((float *)&RightTopEdgePos + 1) - *((float *)&LeftBottomEdgePos + 1);
  return (ObjectDomain_o *)v5;
}


UnityEngine_Texture2D_o *ClosePanelTextureUtil__CreateResizedTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        int32_t resizeWidth,
        int32_t resizeHeight,
        const MethodInfo *method)
{
  UnityEngine_Texture2D_o *v7; // x23
  UnityEngine_RenderTexture_o *Temporary_72027540; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2D244 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Graphics_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_Texture2D_TypeInfo);
    byte_4D2D244 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0, 0) )
  {
    Temporary_72027540 = UnityEngine_RenderTexture__GetTemporary_72027540(resizeWidth, resizeHeight, 0, 7, 1, 0);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_72027540, 0);
    active = UnityEngine_RenderTexture__get_active(0);
    UnityEngine_RenderTexture__set_active(Temporary_72027540, 0);
    v7 = (UnityEngine_Texture2D_o *)sub_1C93D20(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_72007680(v7, resizeWidth, resizeHeight, 0);
    if ( !v7 )
      sub_1C93D2C(v10, v11);
    v13.fields.m_Height = (float)resizeHeight;
    v13.fields.m_Width = (float)resizeWidth;
    v13.fields.m_XMin = 0.0;
    v13.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_72009764(v7, v13, 0, 0, 0);
    UnityEngine_Texture2D__Apply_72009344(v7, 0);
    UnityEngine_RenderTexture__set_active(active, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_72027540, 0);
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
  if ( (byte_4D2D242 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1C93AD4(&UnityEngine_Texture2D_TypeInfo);
    byte_4D2D242 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0;
  v8 = (UnityEngine_Texture2D_o *)sub_1C93D20(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_72007680(v8, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_72006368(closedPanelTexture, v24, v25, v26, v27, 0);
  if ( !v11 )
LABEL_35:
    sub_1C93D2C(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_72008572(v11, (UnityEngine_Color_array *)objDomain, 0);
  UnityEngine_Texture2D__Apply_72009344(v11, 0);
  return v11;
}