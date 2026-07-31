ObjectDomain_o *ClosePanelTextureUtil__CreateClosedPanelDomain(
        UnityEngine_Vector3_o pos,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  SubmarinePanelPositionCalculator_o *v3; // x19
  float32x2_t v4; // d8
  __int64 v5; // x19
  float x; // [xsp+0h] [xbp-50h]
  float y; // [xsp+10h] [xbp-40h]

  v3 = positionCalculator;
  x = pos.fields.x;
  y = pos.fields.y;
  if ( (byte_5934DD2 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_21FFC50(&ObjectDomain_TypeInfo);
    byte_5934DD2 = 1;
  }
  if ( !v3 )
    sub_21FFECC(positionCalculator, method);
  v4.n64_u64[0] = (unsigned __int64)v3->fields._PanelUnitSize_k__BackingField;
  v5 = sub_21FFEBC(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(float32x2_t *)(v5 + 16) = vadd_f32(
                                (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x)),
                                vmul_f32(v4, (float32x2_t)0xBF000000BF000000LL));
  *(float32x2_t *)(v5 + 24) = v4;
  return (ObjectDomain_o *)v5;
}


UnityEngine_Texture2D_o *ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Color_array *Pixels_83107924; // x0
  __int64 v6; // x1
  UnityEngine_Texture2D_o *v7; // x21
  UnityEngine_Color_array *v8; // x21
  UnityEngine_Color_array *v9; // x20
  unsigned __int64 v10; // x8
  __int64 max_length; // x9
  float *p_a; // x10
  float *v13; // x11
  float v14; // s1
  float v15; // s2
  float32x2_t v16; // d0
  int32_t v17; // w22
  int32_t v18; // w19

  if ( (byte_5934DD6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Color___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    byte_5934DD6 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  Pixels_83107924 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0,
                                                 0);
  v7 = 0;
  if ( ((unsigned __int8)Pixels_83107924 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_18;
    Pixels_83107924 = UnityEngine_Texture2D__GetPixels_83107924(baseTexture, 0);
    if ( !Pixels_83107924 )
      goto LABEL_18;
    v8 = Pixels_83107924;
    Pixels_83107924 = (UnityEngine_Color_array *)sub_21FFD10(
                                                   UnityEngine_Color___TypeInfo,
                                                   LODWORD(Pixels_83107924->max_length));
    v9 = Pixels_83107924;
    if ( (int)v8->max_length >= 1 )
    {
      v10 = 0;
      max_length = (unsigned int)v8->max_length;
      p_a = &v8->m_Items[0].fields.a;
      v13 = &Pixels_83107924->m_Items[0].fields.a;
      do
      {
        if ( v10 >= LODWORD(v8->max_length) )
          goto LABEL_17;
        if ( !Pixels_83107924 )
          goto LABEL_18;
        if ( v10 >= LODWORD(Pixels_83107924->max_length) )
LABEL_17:
          sub_21FFED4(Pixels_83107924);
        v14 = *(p_a - 1);
        v15 = *p_a;
        ++v10;
        v16.n64_u64[0] = *(unsigned __int64 *)(p_a - 3);
        p_a += 4;
        *(float32x2_t *)(v13 - 3) = vmul_n_f32(v16, darkRate);
        *(v13 - 1) = v14 * darkRate;
        *v13 = v15;
        v13 += 4;
      }
      while ( max_length != v10 );
    }
    v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._4_get_width.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._4_get_width.method);
    v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))baseTexture->klass->vtable._6_get_height.methodPtr)(
            baseTexture,
            baseTexture->klass->vtable._6_get_height.method);
    v7 = (UnityEngine_Texture2D_o *)sub_21FFEBC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_83105820(v7, v17, v18, 0);
    if ( !v7 )
LABEL_18:
      sub_21FFECC(Pixels_83107924, v6);
    UnityEngine_Texture2D__SetPixels_83106836(v7, v9, 0);
    UnityEngine_Texture2D__Apply_83107520(v7, 0);
  }
  return v7;
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
  int v16; // w8
  float v17; // s0
  int v18; // w8
  float v19; // s0
  float v20; // s1
  unsigned int v21; // w21
  unsigned int v22; // w24
  float x; // s0
  float y; // s1
  int v25; // w22
  int v26; // w26
  __int64 v27; // x27
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  int32_t HorizontalPanelNum_k__BackingField; // w8
  ObjectDomain_o *v31; // x23
  unsigned int v32; // w28
  int32_t VerticalPanelNum_k__BackingField; // w9
  int32_t i; // w24
  int32_t v35; // w25
  int v36; // w8
  unsigned int v37; // w9
  __int64 v38; // x10
  unsigned int v39; // w11
  char *v40; // x12
  UnityEngine_Texture2D_o *v41; // x19
  UnityEngine_Texture2D_o *v43; // [xsp+0h] [xbp-80h]
  unsigned int v44; // [xsp+Ch] [xbp-74h]

  v8 = objDomain;
  if ( (byte_5934DD4 & 1) == 0 )
  {
    sub_21FFC50(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    byte_5934DD4 = 1;
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
  v43 = (UnityEngine_Texture2D_o *)sub_21FFEBC(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_83105820(v43, v9, v10, 0);
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
  v17 = (float)(v16 >> 1);
  v18 = v15 >= 0 ? v15 : v15 + 1;
  v19 = X_k__BackingField + v17;
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
    v27 = 0x80000000LL;
  else
    v27 = (unsigned int)(int)y;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_83107924(closedPanelTexture, 0);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v31 = objDomain;
  if ( HorizontalPanelNum_k__BackingField >= 1 )
  {
    v32 = v21 + v22 * v25;
    VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
    for ( i = 0; i < HorizontalPanelNum_k__BackingField; ++i )
    {
      if ( VerticalPanelNum_k__BackingField >= 1 )
      {
        v35 = 0;
        v44 = v32;
        do
        {
          if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds, v28);
          objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(i, v35, excludePanelUniqueIds, v29);
          if ( ((unsigned __int8)objDomain & 1) == 0 && v26 >= 1 )
          {
            v36 = 0;
            v37 = v32;
            do
            {
              if ( (int)v27 >= 1 )
              {
                v38 = v27;
                v39 = v37;
                if ( !v31 )
                  goto LABEL_48;
                do
                {
                  if ( v39 >= LODWORD(v31->fields._Width_k__BackingField) )
                    sub_21FFED4(objDomain);
                  v40 = (char *)v31 + 16 * (int)v39;
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
          ++v35;
          v32 += v27 * v25;
        }
        while ( v35 < VerticalPanelNum_k__BackingField );
        HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        v32 = v44;
      }
      v32 += v26;
    }
  }
  v41 = v43;
  if ( !v43 )
LABEL_48:
    sub_21FFECC(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_83106836(v43, (UnityEngine_Color_array *)v31, 0);
  UnityEngine_Texture2D__Apply_83107520(v43, 0);
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
  int v10; // w8
  float y; // s8
  int v12; // w8
  const MethodInfo *v13; // x1
  int v14; // w8
  const MethodInfo *v15; // x1
  int v16; // w8
  float v17; // s8
  Il2CppClass *v18; // x0
  ObjectDomain_array *v19; // x21
  int v20; // w22
  int v21; // w23
  int v22; // s8
  int v23; // w24
  Il2CppObject *v24; // x0
  int v25; // w10
  int v26; // w8
  Il2CppObject *v27; // x22
  float v28; // s9
  float v29; // s10
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int v37; // w22
  float v38; // s8
  int v39; // w23
  int v40; // w24
  float v41; // s9
  int v42; // s11
  float v43; // s10
  Il2CppObject *v44; // x0
  int v45; // w8
  Il2CppObject *v46; // x22
  float v47; // s1
  int v48; // w8
  float v49; // s9
  float v50; // s8
  float v51; // s10
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int v58; // w22
  float v59; // s8
  int v60; // w23
  int v61; // s9
  int v62; // w24
  Il2CppObject *v63; // x0
  int v64; // w8
  Il2CppObject *v65; // x22
  float v66; // s0
  int v67; // w8
  float v68; // s8
  float v69; // s10
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  int v76; // w22
  float v77; // s8
  int v78; // w23
  float v79; // s9
  int v80; // w19
  float v81; // s11
  int v82; // s12
  float v83; // s10
  Il2CppObject *v84; // x0
  float v85; // s0
  int v86; // w8
  Il2CppObject *v87; // x19
  int v88; // w9
  float v89; // s10
  float v90; // s8
  float v91; // s9
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  __int64 v99; // x0
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5934DD0 & 1) == 0 )
  {
    sub_21FFC50(&ObjectDomain___TypeInfo);
    sub_21FFC50(&ObjectDomain_TypeInfo);
    sub_21FFC50(&float___TypeInfo);
    byte_5934DD0 = 1;
  }
  v5 = sub_21FFD10(float___TypeInfo, 4);
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
  v100 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v6);
  y = v100.fields.y;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *, long double))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method,
         *(long double *)&v100.fields.x);
  if ( (*(_DWORD *)(v7 + 24) & 0xFFFFFFFE) == 0 )
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
  if ( (*(_DWORD *)(v7 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_61;
  v16 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  v17 = (float)(v16 >> 1);
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v15);
  v18 = ObjectDomain___TypeInfo;
  *(float *)(v7 + 44) = v17 - RightTopEdgePos.fields.y;
  v19 = (ObjectDomain_array *)sub_21FFD10(v18, 4);
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._4_get_width.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v21 = v5;
  v22 = *(_DWORD *)(v7 + 32);
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v24 = (Il2CppObject *)sub_21FFEBC(ObjectDomain_TypeInfo);
  v25 = 1 - v20;
  if ( v20 <= 0 )
    v25 = -v20;
  v26 = v21 <= 0 ? -v21 : 1 - v21;
  v27 = v24;
  v28 = (float)(v25 >> 1);
  v29 = (float)(v26 >> 1);
  System_Object___ctor(v24, 0);
  *(float *)&v27[1].klass = v28;
  *((float *)&v27[1].klass + 1) = v29;
  LODWORD(v27[1].monitor) = v22;
  *((float *)&v27[1].monitor + 1) = (float)v23;
  if ( !v19 )
LABEL_62:
    sub_21FFECC(v5, v6);
  v5 = sub_21FFDA4(v27, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !LODWORD(v19->max_length) )
    goto LABEL_61;
  v19->m_Items[0] = (ObjectDomain_o *)v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v19->m_Items, (int32_t)v27, v31, v32, v33, v34, v35, v36);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v37 = v5;
  v38 = *(float *)(v7 + 32);
  v39 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v40 = v5;
  v42 = *(_DWORD *)(v7 + 36);
  v41 = *(float *)(v7 + 40);
  v43 = *(float *)(v7 + 32);
  v44 = (Il2CppObject *)sub_21FFEBC(ObjectDomain_TypeInfo);
  if ( v37 <= 0 )
    v45 = -v37;
  else
    v45 = 1 - v37;
  v46 = v44;
  v47 = (float)(v45 >> 1);
  v48 = 1 - v39;
  if ( v39 <= 0 )
    v48 = -v39;
  v49 = (float)((float)v40 - v43) - v41;
  v50 = v38 + v47;
  v51 = (float)(v48 >> 1);
  System_Object___ctor(v44, 0);
  *(float *)&v46[1].klass = v50;
  *((float *)&v46[1].klass + 1) = v51;
  *(float *)&v46[1].monitor = v49;
  HIDWORD(v46[1].monitor) = v42;
  v5 = sub_21FFDA4(v46, v19->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v99 = sub_21FFEF0(v5, v30);
    sub_21FFD90(v99, 0);
  }
  if ( (v19->max_length & 0xFFFFFFFE) == 0
    || (v19->m_Items[1] = (ObjectDomain_o *)v46,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->m_Items[1], (int32_t)v46, v52, v53, v54, v55, v56, v57),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._4_get_width.method),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v58 = v5,
        v59 = *(float *)(v7 + 40),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._6_get_height.method),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_21FFED4(v5);
  }
  v60 = v5;
  v61 = *(_DWORD *)(v7 + 40);
  v62 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v63 = (Il2CppObject *)sub_21FFEBC(ObjectDomain_TypeInfo);
  if ( v58 >= 0 )
    v64 = v58;
  else
    v64 = v58 + 1;
  v65 = v63;
  v66 = (float)(v64 >> 1);
  v67 = 1 - v60;
  if ( v60 <= 0 )
    v67 = -v60;
  v68 = v66 - v59;
  v69 = (float)(v67 >> 1);
  System_Object___ctor(v63, 0);
  *(float *)&v65[1].klass = v68;
  *((float *)&v65[1].klass + 1) = v69;
  LODWORD(v65[1].monitor) = v61;
  *((float *)&v65[1].monitor + 1) = (float)v62;
  v5 = sub_21FFDA4(v65, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v19->max_length) <= 2 )
    goto LABEL_61;
  v19->m_Items[2] = (ObjectDomain_o *)v65;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->m_Items[2], (int32_t)v65, v70, v71, v72, v73, v74, v75);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v76 = v5;
  v77 = *(float *)(v7 + 32);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( (*(_DWORD *)(v7 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_61;
  v78 = v5;
  v79 = *(float *)(v7 + 44);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v80 = v5;
  v81 = *(float *)(v7 + 40);
  v82 = *(_DWORD *)(v7 + 44);
  v83 = *(float *)(v7 + 32);
  v84 = (Il2CppObject *)sub_21FFEBC(ObjectDomain_TypeInfo);
  v85 = (float)v80;
  if ( v76 <= 0 )
    v86 = -v76;
  else
    v86 = 1 - v76;
  v87 = v84;
  if ( v78 >= 0 )
    v88 = v78;
  else
    v88 = v78 + 1;
  v89 = (float)(v85 - v83) - v81;
  v90 = v77 + (float)(v86 >> 1);
  v91 = (float)(v88 >> 1) - v79;
  System_Object___ctor(v84, 0);
  *(float *)&v87[1].klass = v90;
  *((float *)&v87[1].klass + 1) = v91;
  *(float *)&v87[1].monitor = v89;
  HIDWORD(v87[1].monitor) = v82;
  v5 = sub_21FFDA4(v87, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( (v19->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_61;
  v19->m_Items[3] = (ObjectDomain_o *)v87;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->m_Items[3], (int32_t)v87, v92, v93, v94, v95, v96, v97);
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
  ObjectDomain_o *result; // x0
  UnityEngine_Vector3_o LeftBottomEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  v3 = positionCalculator;
  if ( (byte_5934DD1 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_21FFC50(&ObjectDomain_TypeInfo);
    byte_5934DD1 = 1;
  }
  if ( !v3 )
    sub_21FFECC(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v9 = sub_21FFEBC(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(float *)(v9 + 16) = x;
  *(float *)(v9 + 20) = y;
  result = (ObjectDomain_o *)v9;
  *(float *)(v9 + 24) = v7 - x;
  *(float *)(v9 + 28) = v8 - y;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *ClosePanelTextureUtil__CreateResizedTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        int32_t resizeWidth,
        int32_t resizeHeight,
        const MethodInfo *method)
{
  UnityEngine_Texture2D_o *v7; // x23
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_RenderTexture_o *Temporary_83128980; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5934DD5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Graphics_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    byte_5934DD5 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&resizeWidth, *(_QWORD *)&resizeHeight);
  v7 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0, 0) )
  {
    Temporary_83128980 = UnityEngine_RenderTexture__GetTemporary_83128980(resizeWidth, resizeHeight, 0, 7, 1, 0);
    if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v8, v9);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_83128980, 0);
    active = UnityEngine_RenderTexture__get_active(0);
    UnityEngine_RenderTexture__set_active(Temporary_83128980, 0);
    v7 = (UnityEngine_Texture2D_o *)sub_21FFEBC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_83105820(v7, resizeWidth, resizeHeight, 0);
    if ( !v7 )
      sub_21FFECC(v12, v13);
    v15.fields.m_Height = (float)resizeHeight;
    v15.fields.m_Width = (float)resizeWidth;
    v15.fields.m_XMin = 0.0;
    v15.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_83107796(v7, v15, 0, 0, 0);
    UnityEngine_Texture2D__Apply_83107520(v7, 0);
    UnityEngine_RenderTexture__set_active(active, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_83128980, 0);
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
  float Width_k__BackingField; // s9
  float Height_k__BackingField; // s8
  UnityEngine_Texture2D_o *v8; // x0
  UnityEngine_Texture2D_o *v9; // x20
  int32_t v10; // w1
  int32_t v11; // w2
  float X_k__BackingField; // s8
  int v13; // w0
  float Y_k__BackingField; // s9
  int v15; // w22
  int v16; // w0
  int v17; // w8
  float v18; // s0
  int v19; // w8
  float v20; // s0
  float v21; // s1
  int v22; // w8
  int32_t v23; // w1
  bool v24; // zf
  float v25; // s0
  float v26; // s1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w4

  v5 = objDomain;
  if ( (byte_5934DD3 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    byte_5934DD3 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0;
  v8 = (UnityEngine_Texture2D_o *)sub_21FFEBC(UnityEngine_Texture2D_TypeInfo);
  v9 = v8;
  v10 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v11 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  UnityEngine_Texture2D___ctor_83105820(v8, v10, v11, 0);
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
  v18 = (float)(v17 >> 1);
  v19 = v16 >= 0 ? v16 : v16 + 1;
  v20 = X_k__BackingField + v18;
  v21 = Y_k__BackingField + (float)(v19 >> 1);
  v22 = (int)v21;
  v23 = v20 == INFINITY ? 0x80000000 : (int)v20;
  v24 = v21 == INFINITY;
  v25 = v5->fields._Width_k__BackingField;
  v26 = v5->fields._Height_k__BackingField;
  v27 = v24 ? 0x80000000 : v22;
  v28 = v25 == INFINITY ? 0x80000000 : (int)v25;
  v29 = v26 == INFINITY ? 0x80000000 : (int)v26;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_83104568(closedPanelTexture, v23, v27, v28, v29, 0);
  if ( !v9 )
LABEL_35:
    sub_21FFECC(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_83106836(v9, (UnityEngine_Color_array *)objDomain, 0);
  UnityEngine_Texture2D__Apply_83107520(v9, 0);
  return v9;
}