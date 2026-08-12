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
  if ( (byte_596CF01 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_2213A60(&ObjectDomain_TypeInfo);
    byte_596CF01 = 1;
  }
  if ( !v3 )
    sub_2213CDC(positionCalculator, method);
  v4.n64_u64[0] = (unsigned __int64)v3->fields._PanelUnitSize_k__BackingField;
  v5 = sub_2213CCC(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_83321228; // x0
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

  if ( (byte_596CF05 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    byte_596CF05 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  Pixels_83321228 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0,
                                                 0);
  v7 = 0;
  if ( ((unsigned __int8)Pixels_83321228 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_18;
    Pixels_83321228 = UnityEngine_Texture2D__GetPixels_83321228(baseTexture, 0);
    if ( !Pixels_83321228 )
      goto LABEL_18;
    v8 = Pixels_83321228;
    Pixels_83321228 = (UnityEngine_Color_array *)sub_2213B20(
                                                   UnityEngine_Color___TypeInfo,
                                                   LODWORD(Pixels_83321228->max_length));
    v9 = Pixels_83321228;
    if ( (int)v8->max_length >= 1 )
    {
      v10 = 0;
      max_length = (unsigned int)v8->max_length;
      p_a = &v8->m_Items[0].fields.a;
      v13 = &Pixels_83321228->m_Items[0].fields.a;
      do
      {
        if ( v10 >= LODWORD(v8->max_length) )
          goto LABEL_17;
        if ( !Pixels_83321228 )
          goto LABEL_18;
        if ( v10 >= LODWORD(Pixels_83321228->max_length) )
LABEL_17:
          sub_2213CE4(Pixels_83321228);
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
    v7 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_83319124(v7, v17, v18, 0);
    if ( !v7 )
LABEL_18:
      sub_2213CDC(Pixels_83321228, v6);
    UnityEngine_Texture2D__SetPixels_83320140(v7, v9, 0);
    UnityEngine_Texture2D__Apply_83320824(v7, 0);
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
  if ( (byte_596CF03 & 1) == 0 )
  {
    sub_2213A60(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    byte_596CF03 = 1;
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
  v43 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_83319124(v43, v9, v10, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_83321228(closedPanelTexture, 0);
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
                    sub_2213CE4(objDomain);
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
    sub_2213CDC(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_83320140(v43, (UnityEngine_Color_array *)v31, 0);
  UnityEngine_Texture2D__Apply_83320824(v43, 0);
  return v41;
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
  float v16; // s8
  Il2CppClass *v17; // x0
  ObjectDomain_array *v18; // x21
  int v19; // w22
  int v20; // w23
  int v21; // s8
  int v22; // w24
  Il2CppObject *v23; // x0
  int v24; // w10
  int v25; // w8
  Il2CppObject *v26; // x22
  float v27; // s9
  float v28; // s10
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int v36; // w22
  float v37; // s8
  int v38; // w23
  int v39; // w24
  float v40; // s9
  int v41; // s11
  float v42; // s10
  Il2CppObject *v43; // x0
  int v44; // w8
  Il2CppObject *v45; // x22
  float v46; // s1
  int v47; // w8
  float v48; // s9
  float v49; // s8
  float v50; // s10
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int v57; // w22
  float v58; // s8
  int v59; // w23
  int v60; // s9
  int v61; // w24
  Il2CppObject *v62; // x0
  int v63; // w8
  Il2CppObject *v64; // x22
  float v65; // s0
  int v66; // w8
  float v67; // s8
  float v68; // s10
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  int v75; // w22
  float v76; // s8
  int v77; // w23
  float v78; // s9
  int v79; // w19
  float v80; // s11
  int v81; // s12
  float v82; // s10
  Il2CppObject *v83; // x0
  float v84; // s0
  int v85; // w8
  Il2CppObject *v86; // x19
  int v87; // w9
  float v88; // s10
  float v89; // s8
  float v90; // s9
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  __int64 v98; // x0
  float v99; // s1

  if ( (byte_596CEFF & 1) == 0 )
  {
    sub_2213A60(&ObjectDomain___TypeInfo);
    sub_2213A60(&ObjectDomain_TypeInfo);
    sub_2213A60(&float___TypeInfo);
    byte_596CEFF = 1;
  }
  v5 = sub_2213B20(float___TypeInfo, 4);
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
  if ( (*(_DWORD *)(v7 + 24) & 0xFFFFFFFE) == 0 )
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
  if ( (*(_DWORD *)(v7 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_61;
  v15 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  v16 = (float)(v15 >> 1);
  v99 = COERCE_FLOAT(LODWORD(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v14).fields.y));
  v17 = ObjectDomain___TypeInfo;
  *(float *)(v7 + 44) = v16 - v99;
  v18 = (ObjectDomain_array *)sub_2213B20(v17, 4);
  v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._4_get_width.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v20 = v5;
  v21 = *(_DWORD *)(v7 + 32);
  v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v23 = (Il2CppObject *)sub_2213CCC(ObjectDomain_TypeInfo);
  v24 = 1 - v19;
  if ( v19 <= 0 )
    v24 = -v19;
  v25 = v20 <= 0 ? -v20 : 1 - v20;
  v26 = v23;
  v27 = (float)(v24 >> 1);
  v28 = (float)(v25 >> 1);
  System_Object___ctor(v23, 0);
  *(float *)&v26[1].klass = v27;
  *((float *)&v26[1].klass + 1) = v28;
  LODWORD(v26[1].monitor) = v21;
  *((float *)&v26[1].monitor + 1) = (float)v22;
  if ( !v18 )
LABEL_62:
    sub_2213CDC(v5, v6);
  v5 = sub_2213BB4(v26, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !LODWORD(v18->max_length) )
    goto LABEL_61;
  v18->m_Items[0] = (ObjectDomain_o *)v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v18->m_Items, (int32_t)v26, v30, v31, v32, v33, v34, v35);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v36 = v5;
  v37 = *(float *)(v7 + 32);
  v38 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v39 = v5;
  v41 = *(_DWORD *)(v7 + 36);
  v40 = *(float *)(v7 + 40);
  v42 = *(float *)(v7 + 32);
  v43 = (Il2CppObject *)sub_2213CCC(ObjectDomain_TypeInfo);
  if ( v36 <= 0 )
    v44 = -v36;
  else
    v44 = 1 - v36;
  v45 = v43;
  v46 = (float)(v44 >> 1);
  v47 = 1 - v38;
  if ( v38 <= 0 )
    v47 = -v38;
  v48 = (float)((float)v39 - v42) - v40;
  v49 = v37 + v46;
  v50 = (float)(v47 >> 1);
  System_Object___ctor(v43, 0);
  *(float *)&v45[1].klass = v49;
  *((float *)&v45[1].klass + 1) = v50;
  *(float *)&v45[1].monitor = v48;
  HIDWORD(v45[1].monitor) = v41;
  v5 = sub_2213BB4(v45, v18->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v98 = sub_2213D00(v5, v29);
    sub_2213BA0(v98, 0);
  }
  if ( (v18->max_length & 0xFFFFFFFE) == 0
    || (v18->m_Items[1] = (ObjectDomain_o *)v45,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[1], (int32_t)v45, v51, v52, v53, v54, v55, v56),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._4_get_width.method),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v57 = v5,
        v58 = *(float *)(v7 + 40),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._6_get_height.method),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_2213CE4(v5);
  }
  v59 = v5;
  v60 = *(_DWORD *)(v7 + 40);
  v61 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._6_get_height.method);
  v62 = (Il2CppObject *)sub_2213CCC(ObjectDomain_TypeInfo);
  if ( v57 >= 0 )
    v63 = v57;
  else
    v63 = v57 + 1;
  v64 = v62;
  v65 = (float)(v63 >> 1);
  v66 = 1 - v59;
  if ( v59 <= 0 )
    v66 = -v59;
  v67 = v65 - v58;
  v68 = (float)(v66 >> 1);
  System_Object___ctor(v62, 0);
  *(float *)&v64[1].klass = v67;
  *((float *)&v64[1].klass + 1) = v68;
  LODWORD(v64[1].monitor) = v60;
  *((float *)&v64[1].monitor + 1) = (float)v61;
  v5 = sub_2213BB4(v64, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( LODWORD(v18->max_length) <= 2 )
    goto LABEL_61;
  v18->m_Items[2] = (ObjectDomain_o *)v64;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[2], (int32_t)v64, v69, v70, v71, v72, v73, v74);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v75 = v5;
  v76 = *(float *)(v7 + 32);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._6_get_height.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._6_get_height.method);
  if ( (*(_DWORD *)(v7 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_61;
  v77 = v5;
  v78 = *(float *)(v7 + 44);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.methodPtr)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._4_get_width.method);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v79 = v5;
  v80 = *(float *)(v7 + 40);
  v81 = *(_DWORD *)(v7 + 44);
  v82 = *(float *)(v7 + 32);
  v83 = (Il2CppObject *)sub_2213CCC(ObjectDomain_TypeInfo);
  v84 = (float)v79;
  if ( v75 <= 0 )
    v85 = -v75;
  else
    v85 = 1 - v75;
  v86 = v83;
  if ( v77 >= 0 )
    v87 = v77;
  else
    v87 = v77 + 1;
  v88 = (float)(v84 - v82) - v80;
  v89 = v76 + (float)(v85 >> 1);
  v90 = (float)(v87 >> 1) - v78;
  System_Object___ctor(v83, 0);
  *(float *)&v86[1].klass = v89;
  *((float *)&v86[1].klass + 1) = v90;
  *(float *)&v86[1].monitor = v88;
  HIDWORD(v86[1].monitor) = v81;
  v5 = sub_2213BB4(v86, v18->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( (v18->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_61;
  v18->m_Items[3] = (ObjectDomain_o *)v86;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->m_Items[3], (int32_t)v86, v91, v92, v93, v94, v95, v96);
  return v18;
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
  if ( (byte_596CF00 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_2213A60(&ObjectDomain_TypeInfo);
    byte_596CF00 = 1;
  }
  if ( !v3 )
    sub_2213CDC(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = (unsigned __int64)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                                          v3,
                                          (const MethodInfo *)closedPanelTexture);
  RightTopEdgePos = (unsigned __int64)SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v4);
  v5 = sub_2213CCC(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = LeftBottomEdgePos;
  *(float *)(v5 + 24) = *(float *)&RightTopEdgePos - *(float *)&LeftBottomEdgePos;
  *(float *)(v5 + 28) = *((float *)&RightTopEdgePos + 1) - *((float *)&LeftBottomEdgePos + 1);
  return (ObjectDomain_o *)v5;
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
  UnityEngine_RenderTexture_o *Temporary_83342284; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596CF04 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Graphics_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    byte_596CF04 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&resizeWidth, *(_QWORD *)&resizeHeight);
  v7 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0, 0) )
  {
    Temporary_83342284 = UnityEngine_RenderTexture__GetTemporary_83342284(resizeWidth, resizeHeight, 0, 7, 1, 0);
    if ( !*(&UnityEngine_Graphics_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v8, v9);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_83342284, 0);
    active = UnityEngine_RenderTexture__get_active(0);
    UnityEngine_RenderTexture__set_active(Temporary_83342284, 0);
    v7 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_83319124(v7, resizeWidth, resizeHeight, 0);
    if ( !v7 )
      sub_2213CDC(v12, v13);
    v15.fields.m_Height = (float)resizeHeight;
    v15.fields.m_Width = (float)resizeWidth;
    v15.fields.m_XMin = 0.0;
    v15.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_83321100(v7, v15, 0, 0, 0);
    UnityEngine_Texture2D__Apply_83320824(v7, 0);
    UnityEngine_RenderTexture__set_active(active, 0);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_83342284, 0);
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
  if ( (byte_596CF02 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    byte_596CF02 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0;
  v8 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
  v9 = v8;
  v10 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v11 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  UnityEngine_Texture2D___ctor_83319124(v8, v10, v11, 0);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_83317872(closedPanelTexture, v23, v27, v28, v29, 0);
  if ( !v9 )
LABEL_35:
    sub_2213CDC(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_83320140(v9, (UnityEngine_Color_array *)objDomain, 0);
  UnityEngine_Texture2D__Apply_83320824(v9, 0);
  return v9;
}