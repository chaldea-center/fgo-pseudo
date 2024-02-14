// local variable allocation has failed, the output may be wrong!
ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreateClosedPanelDomain(
        UnityEngine_Vector3_o pos,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  __int64 v3; // x2
  SubmarinePanelPositionCalculator_o *v4; // x19
  float y; // s8
  float x; // s9
  float v7; // s10
  float v8; // s11
  ObjectDomain_o *v9; // x19

  v4 = positionCalculator;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_421471E & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_B0D8A4(&ObjectDomain_TypeInfo, method);
    byte_421471E = 1;
  }
  if ( !v4 )
    sub_B0D97C(positionCalculator);
  v7 = v4->fields._PanelUnitSize_k__BackingField.fields.x;
  v8 = v4->fields._PanelUnitSize_k__BackingField.fields.y;
  v9 = (ObjectDomain_o *)sub_B0D974(ObjectDomain_TypeInfo, method, v3);
  ObjectDomain___ctor(v9, x - (float)(v7 * 0.5), y - (float)(v8 * 0.5), v7, v8, 0LL);
  return v9;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Color_array *Pixels_35040192; // x0
  UnityEngine_Texture2D_o *v8; // x21
  UnityEngine_Color_array *v9; // x21
  __int64 v10; // x0
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s7
  __int64 v15; // x8
  UnityEngine_Color_array *v16; // x20
  unsigned __int64 v17; // x22
  signed __int64 v18; // x23
  float *p_r; // x25
  __int64 v20; // x0
  int32_t v21; // w22
  int32_t v22; // w19
  __int64 v23; // x1
  __int64 v24; // x2
  MethodInfo v26; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214722 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Color___TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Texture2D_TypeInfo, v6);
    byte_4214722 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Pixels_35040192 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v8 = 0LL;
  if ( ((unsigned __int8)Pixels_35040192 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_35040192 = UnityEngine_Texture2D__GetPixels_35040192(baseTexture, 0LL);
    if ( !Pixels_35040192 )
      goto LABEL_19;
    v9 = Pixels_35040192;
    v10 = sub_B0D8BC(UnityEngine_Color___TypeInfo, Pixels_35040192->max_length);
    v15 = *(_QWORD *)&v9->max_length;
    v16 = (UnityEngine_Color_array *)v10;
    if ( (int)v15 >= 1 )
    {
      v17 = 0LL;
      v18 = (int)v15;
      p_r = &v9->m_Items[1].fields.r;
      while ( 1 )
      {
        v27.fields.a = *p_r;
        v27.fields.r = *(p_r - 3) * darkRate;
        v27.fields.g = *(p_r - 2) * darkRate;
        v27.fields.b = *(p_r - 1) * darkRate;
        *(_OWORD *)&v26.methodPointer = 0uLL;
        UnityEngine_Color___ctor(v27, v11, v12, v13, v14, &v26);
        if ( !v16 )
          break;
        if ( v17 >= v16->max_length )
          goto LABEL_15;
        *(_OWORD *)&v16->m_Items[v17++].fields.g = *(_OWORD *)&v26.methodPointer;
        if ( (__int64)v17 >= v18 )
          goto LABEL_16;
        p_r += 4;
        if ( v17 >= v9->max_length )
        {
LABEL_15:
          v20 = sub_B0D9A8(Pixels_35040192);
          sub_B0D948(v20, 0LL);
        }
      }
LABEL_19:
      sub_B0D97C(Pixels_35040192);
    }
LABEL_16:
    v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v8 = (UnityEngine_Texture2D_o *)sub_B0D974(UnityEngine_Texture2D_TypeInfo, v23, v24);
    UnityEngine_Texture2D___ctor_35037936(v8, v21, v22, 0LL);
    if ( !v8 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_35038848(v8, v16, 0LL);
    UnityEngine_Texture2D__Apply_35039676(v8, 0LL);
  }
  return v8;
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
  __int64 v8; // x1
  int32_t v9; // w24
  int32_t v10; // w25
  __int64 v11; // x1
  __int64 v12; // x2
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
  if ( (byte_4214720 & 1) == 0 )
  {
    sub_B0D8A4(&PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds);
    objDomain = (ObjectDomain_o *)sub_B0D8A4(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_4214720 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( !v7 )
    goto LABEL_50;
  if ( v7->fields._Width_k__BackingField <= 0.0 || v7->fields._Height_k__BackingField <= 0.0 )
    return 0LL;
  if ( !closedPanelTexture )
    goto LABEL_50;
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, SubmarinePanelPositionCalculator_o *, UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr,
         positionCalculator,
         closedPanelTexture,
         method);
  v10 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v56 = (UnityEngine_Texture2D_o *)sub_B0D974(UnityEngine_Texture2D_TypeInfo, v11, v12);
  UnityEngine_Texture2D___ctor_35037936(v56, v9, v10, 0LL);
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
    sub_B0D97C(objDomain);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_35040192(closedPanelTexture, 0LL);
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
            v55 = sub_B0D9A8(objDomain);
            sub_B0D948(v55, 0LL);
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
  UnityEngine_Texture2D__SetPixels_35038848(v56, v38, 0LL);
  UnityEngine_Texture2D__Apply_35039676(v56, 0LL);
  return v53;
}


// local variable allocation has failed, the output may be wrong!
ObjectDomain_array *__fastcall ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x20
  unsigned int LeftBottomEdgePos; // s0
  float v10; // s8
  int v11; // w8
  float y; // s8
  int v13; // w8
  int v14; // w22
  float v15; // s0
  int v16; // w8
  int v17; // w22
  float v18; // s1
  int v19; // w8
  ObjectDomain_array *v20; // x21
  int v21; // w23
  float v22; // s8
  int v23; // w24
  int v24; // w25
  __int64 v25; // x1
  __int64 v26; // x2
  ObjectDomain_o *v27; // x0
  int v28; // w8
  int v29; // w9
  System_Int32_array **v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  float v37; // s9
  int v38; // w22
  int v39; // w24
  __int64 v40; // x1
  __int64 v41; // x2
  int v42; // w25
  float v43; // s8
  float v44; // s10
  float v45; // s11
  ObjectDomain_o *v46; // x0
  int v47; // w8
  int v48; // w9
  int v49; // w9
  System_Int32_array **v50; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  float v57; // s9
  int v58; // w23
  float v59; // s8
  int v60; // w24
  int v61; // w25
  __int64 v62; // x1
  __int64 v63; // x2
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
  __int64 v78; // x1
  __int64 v79; // x2
  int v80; // w24
  float v81; // s11
  float v82; // s8
  float v83; // s12
  ObjectDomain_o *v84; // x0
  int v85; // w8
  int v86; // w8
  int v87; // w9
  System_Int32_array **v88; // x19
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v96; // x0
  __int64 v97; // x0
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421471C & 1) == 0 )
  {
    sub_B0D8A4(&ObjectDomain___TypeInfo, closedPanelTexture);
    sub_B0D8A4(&ObjectDomain_TypeInfo, v5);
    sub_B0D8A4(&float___TypeInfo, v6);
    byte_421471C = 1;
  }
  v7 = sub_B0D8BC(float___TypeInfo, 4LL);
  if ( !positionCalculator )
    goto LABEL_66;
  v8 = v7;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_66;
  v10 = *(float *)&LeftBottomEdgePos;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !v8 )
    goto LABEL_66;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_65;
  v11 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v8 + 32) = v10 + (float)(v11 >> 1);
  v98 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = v98.fields.y;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v98.fields.x);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
    goto LABEL_65;
  v13 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v8 + 36) = y + (float)(v13 >> 1);
  v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  LODWORD(v15) = (unsigned int)SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v8 + 24) <= 2u )
    goto LABEL_65;
  v16 = v14 >= 0 ? v14 : v14 + 1;
  *(float *)(v8 + 40) = (float)(v16 >> 1) - v15;
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  *(UnityEngine_Vector3_o *)(&v18 - 1) = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v8 + 24) <= 3u )
    goto LABEL_65;
  v19 = v17 >= 0 ? v17 : v17 + 1;
  *(float *)(v8 + 44) = (float)(v19 >> 1) - v18;
  v20 = (ObjectDomain_array *)sub_B0D8BC(ObjectDomain___TypeInfo, 4LL);
  v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_65;
  v22 = *(float *)(v8 + 32);
  v23 = v7;
  v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v27 = (ObjectDomain_o *)sub_B0D974(ObjectDomain_TypeInfo, v25, v26);
  v28 = 1 - v23;
  if ( v21 <= 0 )
    v29 = -v21;
  else
    v29 = 1 - v21;
  if ( v23 <= 0 )
    v28 = -v23;
  v30 = (System_Int32_array **)v27;
  ObjectDomain___ctor(v27, (float)(v29 >> 1), (float)(v28 >> 1), v22, (float)v24, 0LL);
  if ( !v20 )
LABEL_66:
    sub_B0D97C(v7);
  if ( v30 )
  {
    v7 = sub_B0D964(v30, v20->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_67;
  }
  if ( !v20->max_length )
    goto LABEL_65;
  v20->m_Items[0] = (ObjectDomain_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)v20->m_Items, v30, v31, v32, v33, v34, v35, v36);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_65;
  v37 = *(float *)(v8 + 32);
  v38 = v7;
  v39 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v8 + 24) < 3u )
    goto LABEL_65;
  v42 = v7;
  v43 = *(float *)(v8 + 36);
  v44 = *(float *)(v8 + 40);
  v45 = *(float *)(v8 + 32);
  v46 = (ObjectDomain_o *)sub_B0D974(ObjectDomain_TypeInfo, v40, v41);
  v47 = 1 - v39;
  if ( v38 <= 0 )
    v48 = -v38;
  else
    v48 = 1 - v38;
  v49 = v48 >> 1;
  if ( v39 <= 0 )
    v47 = -v39;
  v50 = (System_Int32_array **)v46;
  ObjectDomain___ctor(v46, v37 + (float)v49, (float)(v47 >> 1), (float)((float)v42 - v45) - v44, v43, 0LL);
  if ( v50 )
  {
    v7 = sub_B0D964(v50, v20->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_67:
      v97 = sub_B0D99C(v7);
      sub_B0D948(v97, 0LL);
    }
  }
  if ( v20->max_length <= 1
    || (v20->m_Items[1] = (ObjectDomain_o *)v50,
        sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[1], v50, v51, v52, v53, v54, v55, v56),
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v8 + 24) <= 2u)
    || (v57 = *(float *)(v8 + 40),
        v58 = v7,
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v8 + 24) <= 2u) )
  {
LABEL_65:
    v96 = sub_B0D9A8(v7);
    sub_B0D948(v96, 0LL);
  }
  v59 = *(float *)(v8 + 40);
  v60 = v7;
  v61 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v64 = (ObjectDomain_o *)sub_B0D974(ObjectDomain_TypeInfo, v62, v63);
  if ( v58 >= 0 )
    v65 = v58;
  else
    v65 = v58 + 1;
  v66 = 1 - v60;
  if ( v60 <= 0 )
    v66 = -v60;
  v67 = (System_Int32_array **)v64;
  ObjectDomain___ctor(v64, (float)(v65 >> 1) - v57, (float)(v66 >> 1), v59, (float)v61, 0LL);
  if ( v67 )
  {
    v7 = sub_B0D964(v67, v20->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_67;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_65;
  v20->m_Items[2] = (ObjectDomain_o *)v67;
  sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[2], v67, v68, v69, v70, v71, v72, v73);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_65;
  v74 = *(float *)(v8 + 32);
  v75 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v8 + 24) <= 3u )
    goto LABEL_65;
  v76 = *(float *)(v8 + 44);
  v77 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v8 + 24) < 4u )
    goto LABEL_65;
  v80 = v7;
  v81 = *(float *)(v8 + 32);
  v83 = *(float *)(v8 + 40);
  v82 = *(float *)(v8 + 44);
  v84 = (ObjectDomain_o *)sub_B0D974(ObjectDomain_TypeInfo, v78, v79);
  if ( v75 <= 0 )
    v85 = -v75;
  else
    v85 = 1 - v75;
  v86 = v85 >> 1;
  if ( v77 >= 0 )
    v87 = v77;
  else
    v87 = v77 + 1;
  v88 = (System_Int32_array **)v84;
  ObjectDomain___ctor(v84, v74 + (float)v86, (float)(v87 >> 1) - v76, (float)((float)v80 - v81) - v83, v82, 0LL);
  if ( v88 )
  {
    v7 = sub_B0D964(v88, v20->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_67;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_65;
  v20->m_Items[3] = (ObjectDomain_o *)v88;
  sub_B0D840((BattleServantConfConponent_o *)&v20->m_Items[3], v88, v89, v90, v91, v92, v93, v94);
  return v20;
}


ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreatePanelOccupiedTotalDomain(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  SubmarinePanelPositionCalculator_o *v3; // x19
  float v4; // s8
  float y; // s9
  float v6; // s10
  float v7; // s11
  float v8; // s12
  float v9; // s13
  __int64 v10; // x1
  __int64 v11; // x2
  ObjectDomain_o *v12; // x19
  UnityEngine_Vector3_o LeftBottomEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v3 = positionCalculator;
  if ( (byte_421471D & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_B0D8A4(&ObjectDomain_TypeInfo, closedPanelTexture);
    byte_421471D = 1;
  }
  if ( !v3 )
    sub_B0D97C(positionCalculator);
  LODWORD(v4) = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  y = LeftBottomEdgePos.fields.y;
  v6 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL));
  v7 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL));
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL);
  v8 = RightTopEdgePos.fields.y;
  v16 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v9 = v16.fields.y;
  v12 = (ObjectDomain_o *)sub_B0D974(ObjectDomain_TypeInfo, v10, v11);
  ObjectDomain___ctor(v12, v4, y, v6 - v7, v8 - v9, 0LL);
  return v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateResizedTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        int32_t resizeWidth,
        int32_t resizeHeight,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Texture2D_o *v9; // x23
  UnityEngine_RenderTexture_o *Temporary_34994708; // x21
  UnityEngine_RenderTexture_o *active; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  __int64 v18; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214721 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Graphics_TypeInfo, *(_QWORD *)&resizeWidth);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_4214721 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_34994708 = UnityEngine_RenderTexture__GetTemporary_34994708(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_34994708, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_34994708, 0LL);
    v9 = (UnityEngine_Texture2D_o *)sub_B0D974(UnityEngine_Texture2D_TypeInfo, v12, v13);
    UnityEngine_Texture2D___ctor_35037936(v9, resizeWidth, resizeHeight, 0LL);
    v21.fields.m_Width = (float)resizeWidth;
    v21.fields.m_Height = (float)resizeHeight;
    v21.fields.m_XMin = 0.0;
    v21.fields.m_YMin = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v21, v14, v15, v16, v17, &var40);
    if ( !v9 )
      sub_B0D97C(v18);
    *(_QWORD *)&v22.fields.m_XMin = var40.methodPointer;
    *(_QWORD *)&v22.fields.m_Width = var40.invoker_method;
    UnityEngine_Texture2D__ReadPixels_35039852(v9, v22, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_35039676(v9, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_34994708, 0LL);
  }
  return v9;
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
  if ( (byte_421471F & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_B0D8A4(&UnityEngine_Texture2D_TypeInfo, positionCalculator);
    byte_421471F = 1;
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
  v8 = (UnityEngine_Texture2D_o *)sub_B0D974(UnityEngine_Texture2D_TypeInfo, positionCalculator, closedPanelTexture);
  v9 = Width_k__BackingField;
  if ( Width_k__BackingField == INFINITY )
    v9 = -Width_k__BackingField;
  v10 = (int)v9;
  v11 = Height_k__BackingField == INFINITY ? -INFINITY : Height_k__BackingField;
  v12 = v8;
  UnityEngine_Texture2D___ctor_35037936(v8, v10, (int)v11, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_35037120(
                                  closedPanelTexture,
                                  v30,
                                  v32,
                                  (int)v33,
                                  (int)v34,
                                  0LL);
  if ( !v12 )
LABEL_32:
    sub_B0D97C(objDomain);
  UnityEngine_Texture2D__SetPixels_35038848(v12, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_35039676(v12, 0LL);
  return v12;
}