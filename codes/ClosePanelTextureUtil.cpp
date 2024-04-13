// local variable allocation has failed, the output may be wrong!
ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreateClosedPanelDomain(
        UnityEngine_Vector3_o pos,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  SubmarinePanelPositionCalculator_o *v5; // x19
  float y; // s8
  float x; // s9
  float v8; // s10
  float v9; // s11
  ObjectDomain_o *v10; // x19

  v5 = positionCalculator;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42EA90C & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_B5D5C4(
                                                                 &ObjectDomain_TypeInfo,
                                                                 (_DWORD)method,
                                                                 v3,
                                                                 v4);
    byte_42EA90C = 1;
  }
  if ( !v5 )
    sub_B5D69C(positionCalculator, method);
  v8 = v5->fields._PanelUnitSize_k__BackingField.fields.x;
  v9 = v5->fields._PanelUnitSize_k__BackingField.fields.y;
  v10 = (ObjectDomain_o *)sub_B5D694(ObjectDomain_TypeInfo);
  ObjectDomain___ctor(v10, x - (float)(v8 * 0.5), y - (float)(v9 * 0.5), v8, v9, 0LL);
  return v10;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Color_array *Pixels_35725256; // x0
  __int64 v14; // x1
  UnityEngine_Texture2D_o *v15; // x21
  UnityEngine_Color_array *v16; // x21
  __int64 v17; // x0
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  __int64 v22; // x8
  UnityEngine_Color_array *v23; // x20
  unsigned __int64 v24; // x22
  signed __int64 v25; // x23
  float *p_r; // x25
  __int64 v27; // x0
  int32_t v28; // w22
  int32_t v29; // w19
  MethodInfo v31; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA910 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Texture2D_TypeInfo, v10, v11, v12);
    byte_42EA910 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Pixels_35725256 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v15 = 0LL;
  if ( ((unsigned __int8)Pixels_35725256 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_35725256 = UnityEngine_Texture2D__GetPixels_35725256(baseTexture, 0LL);
    if ( !Pixels_35725256 )
      goto LABEL_19;
    v16 = Pixels_35725256;
    v17 = sub_B5D5DC(UnityEngine_Color___TypeInfo, Pixels_35725256->max_length);
    v22 = *(_QWORD *)&v16->max_length;
    v23 = (UnityEngine_Color_array *)v17;
    if ( (int)v22 >= 1 )
    {
      v24 = 0LL;
      v25 = (int)v22;
      p_r = &v16->m_Items[1].fields.r;
      while ( 1 )
      {
        v32.fields.a = *p_r;
        v32.fields.r = *(p_r - 3) * darkRate;
        v32.fields.g = *(p_r - 2) * darkRate;
        v32.fields.b = *(p_r - 1) * darkRate;
        *(_OWORD *)&v31.methodPointer = 0uLL;
        UnityEngine_Color___ctor(v32, v18, v19, v20, v21, &v31);
        if ( !v23 )
          break;
        if ( v24 >= v23->max_length )
          goto LABEL_15;
        *(_OWORD *)&v23->m_Items[v24++].fields.g = *(_OWORD *)&v31.methodPointer;
        if ( (__int64)v24 >= v25 )
          goto LABEL_16;
        p_r += 4;
        if ( v24 >= v16->max_length )
        {
LABEL_15:
          v27 = sub_B5D6C8(Pixels_35725256);
          sub_B5D668(v27, 0LL);
        }
      }
LABEL_19:
      sub_B5D69C(Pixels_35725256, v14);
    }
LABEL_16:
    v28 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v29 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v15 = (UnityEngine_Texture2D_o *)sub_B5D694(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35723000(v15, v28, v29, 0LL);
    if ( !v15 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_35723912(v15, v23, 0LL);
    UnityEngine_Texture2D__Apply_35724740(v15, 0LL);
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDomainSubtractTexture(
        ObjectDomain_o *objDomain,
        System_Int32_array *excludePanelUniqueIds,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  ObjectDomain_o *v7; // x22
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t v11; // w24
  int32_t v12; // w25
  float X_k__BackingField; // s8
  int v14; // w0
  float Y_k__BackingField; // s9
  int v16; // w24
  int v17; // w0
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  int v22; // w8
  int v23; // w8
  int v24; // w9
  float x; // s0
  double v27; // d1
  double v28; // d2
  double v29; // d8
  float y; // s0
  double v31; // d10
  float v32; // s0
  float v33; // s1
  int v34; // w22
  double v35; // d11
  double v36; // d9
  int32_t HorizontalPanelNum_k__BackingField; // w8
  UnityEngine_Color_array *v38; // x23
  int32_t VerticalPanelNum_k__BackingField; // w9
  int v40; // w27
  int v41; // w11
  int v42; // w26
  int32_t v43; // w25
  int v44; // w20
  int v45; // w19
  __int64 v46; // x24
  il2cpp_array_size_t v47; // w21
  int v48; // s0
  int v49; // s1
  int v50; // s2
  int v51; // s3
  Il2CppObject *v52; // x8
  UnityEngine_Texture2D_o *v53; // x19
  __int64 v55; // x0
  UnityEngine_Texture2D_o *v56; // [xsp+8h] [xbp-A8h]
  int v57; // [xsp+10h] [xbp-A0h]
  SubmarinePanelPositionCalculator_o *v58; // [xsp+18h] [xbp-98h]
  int32_t hIndex; // [xsp+28h] [xbp-88h]
  int v61; // [xsp+2Ch] [xbp-84h]
  MethodInfo methoda; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Rect_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = objDomain;
  if ( (byte_42EA90E & 1) == 0 )
  {
    sub_B5D5C4(
      &PanelUniqueIDUtil_TypeInfo,
      (_DWORD)excludePanelUniqueIds,
      (_DWORD)positionCalculator,
      closedPanelTexture);
    objDomain = (ObjectDomain_o *)sub_B5D5C4(&UnityEngine_Texture2D_TypeInfo, v8, v9, v10);
    byte_42EA90E = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( !v7 )
    goto LABEL_50;
  if ( v7->fields._Width_k__BackingField <= 0.0 || v7->fields._Height_k__BackingField <= 0.0 )
    return 0LL;
  if ( !closedPanelTexture )
    goto LABEL_50;
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, SubmarinePanelPositionCalculator_o *, UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr,
          positionCalculator,
          closedPanelTexture,
          method);
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v56 = (UnityEngine_Texture2D_o *)sub_B5D694(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_35723000(v56, v11, v12, 0LL);
  X_k__BackingField = v7->fields._X_k__BackingField;
  v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v7->fields._Y_k__BackingField;
  v16 = v14;
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v22 = v16 >= 0 ? v16 : v16 + 1;
  v23 = v22 >> 1;
  v24 = v17 >= 0 ? v17 : v17 + 1;
  v63.fields.m_XMin = X_k__BackingField + (float)v23;
  v63.fields.m_YMin = Y_k__BackingField + (float)(v24 >> 1);
  v63.fields.m_Width = v7->fields._Width_k__BackingField;
  v63.fields.m_Height = v7->fields._Height_k__BackingField;
  UnityEngine_Rect___ctor(v63, v18, v19, v20, v21, &methoda);
  x = UnityEngine_Rect__get_x(v64, &methoda);
  v29 = x == INFINITY ? -x : x;
  v27 = x;
  v28 = -x;
  y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)&x, &methoda);
  v31 = y == INFINITY ? -INFINITY : y;
  objDomain = (ObjectDomain_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                                  closedPanelTexture,
                                  closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !positionCalculator )
LABEL_50:
    sub_B5D69C(objDomain, excludePanelUniqueIds);
  v32 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  v33 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v34 = (int)objDomain;
  if ( v32 == INFINITY )
    v35 = -v32;
  else
    v35 = v32;
  if ( v33 == INFINITY )
    v36 = -INFINITY;
  else
    v36 = v33;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_35725256(closedPanelTexture, 0LL);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v38 = (UnityEngine_Color_array *)objDomain;
  if ( HorizontalPanelNum_k__BackingField < 1 )
    goto LABEL_45;
  VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
  v40 = (int)v36;
  v41 = (int)v29 + v34 * (int)v31;
  hIndex = 0;
  v42 = (int)v35;
  v58 = positionCalculator;
  do
  {
    if ( VerticalPanelNum_k__BackingField < 1 )
      goto LABEL_44;
    v43 = 0;
    v57 = v41;
    v61 = v41;
    do
    {
      if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      }
      objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(hIndex, v43, excludePanelUniqueIds, 0LL);
      if ( ((unsigned __int8)objDomain & 1) == 0 && v42 >= 1 )
      {
        v44 = v61;
        v45 = 0;
        while ( v40 < 1 )
        {
LABEL_41:
          ++v45;
          ++v44;
          if ( v45 >= v42 )
            goto LABEL_42;
        }
        v46 = 0LL;
        v47 = v44;
        while ( 1 )
        {
          *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_clear(0LL);
          if ( !v38 )
            goto LABEL_50;
          if ( v47 >= v38->max_length )
          {
            v55 = sub_B5D6C8(objDomain);
            sub_B5D668(v55, 0LL);
          }
          ++v46;
          v52 = &v38->obj + (int)v47;
          v47 += v34;
          LODWORD(v52[2].klass) = v48;
          HIDWORD(v52[2].klass) = v49;
          LODWORD(v52[2].monitor) = v50;
          HIDWORD(v52[2].monitor) = v51;
          if ( v46 >= v40 )
            goto LABEL_41;
        }
      }
LABEL_42:
      ++v43;
      VerticalPanelNum_k__BackingField = v58->fields._VerticalPanelNum_k__BackingField;
      v61 += v34 * (int)v36;
    }
    while ( v43 < VerticalPanelNum_k__BackingField );
    HorizontalPanelNum_k__BackingField = v58->fields._HorizontalPanelNum_k__BackingField;
    v41 = v57;
LABEL_44:
    v41 += v42;
    ++hIndex;
  }
  while ( hIndex < HorizontalPanelNum_k__BackingField );
LABEL_45:
  v53 = v56;
  if ( !v56 )
    goto LABEL_50;
  UnityEngine_Texture2D__SetPixels_35723912(v56, v38, 0LL);
  UnityEngine_Texture2D__Apply_35724740(v56, 0LL);
  return v53;
}


// local variable allocation has failed, the output may be wrong!
ObjectDomain_array *__fastcall ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  unsigned int LeftBottomEdgePos; // s0
  float v16; // s8
  int v17; // w8
  float y; // s8
  int v19; // w8
  int v20; // w22
  float v21; // s0
  int v22; // w8
  int v23; // w22
  float v24; // s1
  int v25; // w8
  ObjectDomain_array *v26; // x21
  int v27; // w23
  float v28; // s8
  int v29; // w24
  int v30; // w25
  ObjectDomain_o *v31; // x0
  int v32; // w8
  int v33; // w9
  System_Int32_array **v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  float v41; // s9
  int v42; // w22
  int v43; // w24
  int v44; // w25
  float v45; // s8
  float v46; // s10
  float v47; // s11
  ObjectDomain_o *v48; // x0
  int v49; // w8
  int v50; // w9
  int v51; // w9
  System_Int32_array **v52; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  float v59; // s9
  int v60; // w23
  float v61; // s8
  int v62; // w24
  int v63; // w25
  ObjectDomain_o *v64; // x0
  int v65; // w10
  int v66; // w9
  System_Int32_array **v67; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  float v74; // s9
  int v75; // w22
  float v76; // s10
  int v77; // w23
  int v78; // w24
  float v79; // s11
  float v80; // s8
  float v81; // s12
  ObjectDomain_o *v82; // x0
  int v83; // w8
  int v84; // w8
  int v85; // w9
  System_Int32_array **v86; // x19
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  __int64 v94; // x0
  __int64 v95; // x0
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EA90A & 1) == 0 )
  {
    sub_B5D5C4(&ObjectDomain___TypeInfo, (_DWORD)closedPanelTexture, (_DWORD)method, v3);
    sub_B5D5C4(&ObjectDomain_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&float___TypeInfo, v9, v10, v11);
    byte_42EA90A = 1;
  }
  v12 = sub_B5D5DC(float___TypeInfo, 4LL);
  if ( !positionCalculator )
    goto LABEL_66;
  v14 = v12;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_66;
  v16 = *(float *)&LeftBottomEdgePos;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !v14 )
    goto LABEL_66;
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_65;
  v17 = (int)v12 >= 0 ? v12 : (int)v12 + 1;
  *(float *)(v14 + 32) = v16 + (float)(v17 >> 1);
  v96 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = v96.fields.y;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr,
          v96.fields.x);
  if ( *(_DWORD *)(v14 + 24) <= 1u )
    goto LABEL_65;
  v19 = (int)v12 >= 0 ? v12 : (int)v12 + 1;
  *(float *)(v14 + 36) = y + (float)(v19 >> 1);
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  LODWORD(v21) = (unsigned int)SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v14 + 24) <= 2u )
    goto LABEL_65;
  v22 = v20 >= 0 ? v20 : v20 + 1;
  *(float *)(v14 + 40) = (float)(v22 >> 1) - v21;
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  *(UnityEngine_Vector3_o *)(&v24 - 1) = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v14 + 24) <= 3u )
    goto LABEL_65;
  v25 = v23 >= 0 ? v23 : v23 + 1;
  *(float *)(v14 + 44) = (float)(v25 >> 1) - v24;
  v26 = (ObjectDomain_array *)sub_B5D5DC(ObjectDomain___TypeInfo, 4LL);
  v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_65;
  v28 = *(float *)(v14 + 32);
  v29 = v12;
  v30 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v31 = (ObjectDomain_o *)sub_B5D694(ObjectDomain_TypeInfo);
  v32 = 1 - v29;
  if ( v27 <= 0 )
    v33 = -v27;
  else
    v33 = 1 - v27;
  if ( v29 <= 0 )
    v32 = -v29;
  v34 = (System_Int32_array **)v31;
  ObjectDomain___ctor(v31, (float)(v33 >> 1), (float)(v32 >> 1), v28, (float)v30, 0LL);
  if ( !v26 )
LABEL_66:
    sub_B5D69C(v12, v13);
  if ( v34 )
  {
    v12 = sub_B5D684(v34, v26->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( !v26->max_length )
    goto LABEL_65;
  v26->m_Items[0] = (ObjectDomain_o *)v34;
  sub_B5D560((BattleServantConfConponent_o *)v26->m_Items, v34, v35, v36, v37, v38, v39, v40);
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_65;
  v41 = *(float *)(v14 + 32);
  v42 = v12;
  v43 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v14 + 24) < 3u )
    goto LABEL_65;
  v44 = v12;
  v45 = *(float *)(v14 + 36);
  v46 = *(float *)(v14 + 40);
  v47 = *(float *)(v14 + 32);
  v48 = (ObjectDomain_o *)sub_B5D694(ObjectDomain_TypeInfo);
  v49 = 1 - v43;
  if ( v42 <= 0 )
    v50 = -v42;
  else
    v50 = 1 - v42;
  v51 = v50 >> 1;
  if ( v43 <= 0 )
    v49 = -v43;
  v52 = (System_Int32_array **)v48;
  ObjectDomain___ctor(v48, v41 + (float)v51, (float)(v49 >> 1), (float)((float)v44 - v47) - v46, v45, 0LL);
  if ( v52 )
  {
    v12 = sub_B5D684(v52, v26->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_67:
      v95 = sub_B5D6BC(v12);
      sub_B5D668(v95, 0LL);
    }
  }
  if ( v26->max_length <= 1
    || (v26->m_Items[1] = (ObjectDomain_o *)v52,
        sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[1], v52, v53, v54, v55, v56, v57, v58),
        v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                closedPanelTexture,
                closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v14 + 24) <= 2u)
    || (v59 = *(float *)(v14 + 40),
        v60 = v12,
        v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
                closedPanelTexture,
                closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v14 + 24) <= 2u) )
  {
LABEL_65:
    v94 = sub_B5D6C8(v12);
    sub_B5D668(v94, 0LL);
  }
  v61 = *(float *)(v14 + 40);
  v62 = v12;
  v63 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v64 = (ObjectDomain_o *)sub_B5D694(ObjectDomain_TypeInfo);
  if ( v60 >= 0 )
    v65 = v60;
  else
    v65 = v60 + 1;
  v66 = 1 - v62;
  if ( v62 <= 0 )
    v66 = -v62;
  v67 = (System_Int32_array **)v64;
  ObjectDomain___ctor(v64, (float)(v65 >> 1) - v59, (float)(v66 >> 1), v61, (float)v63, 0LL);
  if ( v67 )
  {
    v12 = sub_B5D684(v67, v26->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_65;
  v26->m_Items[2] = (ObjectDomain_o *)v67;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[2], v67, v68, v69, v70, v71, v72, v73);
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v14 + 24) )
    goto LABEL_65;
  v74 = *(float *)(v14 + 32);
  v75 = v12;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v14 + 24) <= 3u )
    goto LABEL_65;
  v76 = *(float *)(v14 + 44);
  v77 = v12;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v14 + 24) < 4u )
    goto LABEL_65;
  v78 = v12;
  v79 = *(float *)(v14 + 32);
  v81 = *(float *)(v14 + 40);
  v80 = *(float *)(v14 + 44);
  v82 = (ObjectDomain_o *)sub_B5D694(ObjectDomain_TypeInfo);
  if ( v75 <= 0 )
    v83 = -v75;
  else
    v83 = 1 - v75;
  v84 = v83 >> 1;
  if ( v77 >= 0 )
    v85 = v77;
  else
    v85 = v77 + 1;
  v86 = (System_Int32_array **)v82;
  ObjectDomain___ctor(v82, v74 + (float)v84, (float)(v85 >> 1) - v76, (float)((float)v78 - v79) - v81, v80, 0LL);
  if ( v86 )
  {
    v12 = sub_B5D684(v86, v26->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( v26->max_length <= 3 )
    goto LABEL_65;
  v26->m_Items[3] = (ObjectDomain_o *)v86;
  sub_B5D560((BattleServantConfConponent_o *)&v26->m_Items[3], v86, v87, v88, v89, v90, v91, v92);
  return v26;
}


ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreatePanelOccupiedTotalDomain(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SubmarinePanelPositionCalculator_o *v4; // x19
  float v5; // s8
  float y; // s9
  float v7; // s10
  float v8; // s11
  float v9; // s12
  float v10; // s13
  ObjectDomain_o *v11; // x19
  UnityEngine_Vector3_o LeftBottomEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v4 = positionCalculator;
  if ( (byte_42EA90B & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_B5D5C4(
                                                                 &ObjectDomain_TypeInfo,
                                                                 (_DWORD)closedPanelTexture,
                                                                 (_DWORD)method,
                                                                 v3);
    byte_42EA90B = 1;
  }
  if ( !v4 )
    sub_B5D69C(positionCalculator, closedPanelTexture);
  LODWORD(v5) = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v4, 0LL);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v4, 0LL);
  y = LeftBottomEdgePos.fields.y;
  v7 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(v4, 0LL));
  v8 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v4, 0LL));
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v4, 0LL);
  v9 = RightTopEdgePos.fields.y;
  v15 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v4, 0LL);
  v10 = v15.fields.y;
  v11 = (ObjectDomain_o *)sub_B5D694(ObjectDomain_TypeInfo);
  ObjectDomain___ctor(v11, v5, y, v7 - v8, v9 - v10, 0LL);
  return v11;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateResizedTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        int32_t resizeWidth,
        int32_t resizeHeight,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Texture2D_o *v13; // x23
  UnityEngine_RenderTexture_o *Temporary_35679668; // x21
  UnityEngine_RenderTexture_o *active; // x22
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  __int64 v20; // x0
  __int64 v21; // x1
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Rect_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA90F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Graphics_TypeInfo, resizeWidth, resizeHeight, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Texture2D_TypeInfo, v10, v11, v12);
    byte_42EA90F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_35679668 = UnityEngine_RenderTexture__GetTemporary_35679668(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_35679668, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_35679668, 0LL);
    v13 = (UnityEngine_Texture2D_o *)sub_B5D694(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35723000(v13, resizeWidth, resizeHeight, 0LL);
    v24.fields.m_Width = (float)resizeWidth;
    v24.fields.m_Height = (float)resizeHeight;
    v24.fields.m_XMin = 0.0;
    v24.fields.m_YMin = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v24, v16, v17, v18, v19, &var40);
    if ( !v13 )
      sub_B5D69C(v20, v21);
    *(_QWORD *)&v25.fields.m_XMin = var40.methodPointer;
    *(_QWORD *)&v25.fields.m_Width = var40.invoker_method;
    UnityEngine_Texture2D__ReadPixels_35724916(v13, v25, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_35724740(v13, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_35679668, 0LL);
  }
  return v13;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__ExtractCutTextureFromObjectDomain(
        ObjectDomain_o *objDomain,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  ObjectDomain_o *v5; // x21
  float Width_k__BackingField; // s8
  float Height_k__BackingField; // s9
  UnityEngine_Texture2D_o *v8; // x0
  double v9; // d0
  int32_t v10; // w1
  double v11; // d0
  UnityEngine_Texture2D_o *v12; // x20
  float X_k__BackingField; // s8
  int v14; // w0
  float Y_k__BackingField; // s9
  int v16; // w22
  int v17; // w0
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  int v22; // w8
  int v23; // w8
  int v24; // w9
  float m_XMin; // s8
  float v26; // s9
  float v27; // s10
  float height; // s0
  double v29; // d1
  int32_t v30; // w1
  double v31; // d1
  int32_t v32; // w2
  double v33; // d1
  double v34; // d0
  MethodInfo v36; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Rect_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = objDomain;
  if ( (byte_42EA90D & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_B5D5C4(
                                    &UnityEngine_Texture2D_TypeInfo,
                                    (_DWORD)positionCalculator,
                                    (_DWORD)closedPanelTexture,
                                    method);
    byte_42EA90D = 1;
  }
  v36.methodPointer = 0LL;
  v36.invoker_method = 0LL;
  if ( !v5 )
    goto LABEL_32;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0LL;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0LL;
  v8 = (UnityEngine_Texture2D_o *)sub_B5D694(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField;
  if ( Width_k__BackingField == INFINITY )
    v9 = -Width_k__BackingField;
  v10 = (int)v9;
  v11 = Height_k__BackingField == INFINITY ? -INFINITY : Height_k__BackingField;
  v12 = v8;
  UnityEngine_Texture2D___ctor_35723000(v8, v10, (int)v11, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_32;
  X_k__BackingField = v5->fields._X_k__BackingField;
  v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v5->fields._Y_k__BackingField;
  v16 = v14;
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( v16 >= 0 )
    v22 = v16;
  else
    v22 = v16 + 1;
  v23 = v22 >> 1;
  if ( v17 >= 0 )
    v24 = v17;
  else
    v24 = v17 + 1;
  v37.fields.m_XMin = X_k__BackingField + (float)v23;
  v37.fields.m_YMin = Y_k__BackingField + (float)(v24 >> 1);
  v37.fields.m_Width = v5->fields._Width_k__BackingField;
  v37.fields.m_Height = v5->fields._Height_k__BackingField;
  UnityEngine_Rect___ctor(v37, v18, v19, v20, v21, &v36);
  v39.fields.m_XMin = UnityEngine_Rect__get_x(v38, &v36);
  m_XMin = v39.fields.m_XMin;
  v40.fields.m_XMin = UnityEngine_Rect__get_y(v39, &v36);
  v26 = v40.fields.m_XMin;
  v41.fields.m_XMin = UnityEngine_Rect__get_width(v40, &v36);
  v27 = v41.fields.m_XMin;
  height = UnityEngine_Rect__get_height(v41, &v36);
  v29 = m_XMin;
  if ( m_XMin == INFINITY )
    v29 = -INFINITY;
  v30 = (int)v29;
  v31 = -v26;
  if ( v26 != INFINITY )
    v31 = v26;
  v32 = (int)v31;
  v33 = v27 == INFINITY ? -v27 : v27;
  v34 = height == INFINITY ? -height : height;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_35722184(
                                  closedPanelTexture,
                                  v30,
                                  v32,
                                  (int)v33,
                                  (int)v34,
                                  0LL);
  if ( !v12 )
LABEL_32:
    sub_B5D69C(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_35723912(v12, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_35724740(v12, 0LL);
  return v12;
}