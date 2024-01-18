// local variable allocation has failed, the output may be wrong!
ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreateClosedPanelDomain(
        UnityEngine_Vector3_o pos,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  SubmarinePanelPositionCalculator_o *v3; // x19
  float y; // s8
  float x; // s9
  float v6; // s10
  float v7; // s11
  ObjectDomain_o *v8; // x19

  v3 = positionCalculator;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_418880D & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_B2C35C(&ObjectDomain_TypeInfo, method);
    byte_418880D = 1;
  }
  if ( !v3 )
    sub_B2C434(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = (ObjectDomain_o *)sub_B2C42C(ObjectDomain_TypeInfo);
  ObjectDomain___ctor(v8, x - (float)(v6 * 0.5), y - (float)(v7 * 0.5), v6, v7, 0LL);
  return v8;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Color_array *Pixels_35419812; // x0
  __int64 v8; // x1
  UnityEngine_Texture2D_o *v9; // x21
  UnityEngine_Color_array *v10; // x21
  __int64 v11; // x0
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  __int64 v16; // x8
  UnityEngine_Color_array *v17; // x20
  unsigned __int64 v18; // x22
  signed __int64 v19; // x23
  float *p_r; // x25
  __int64 v21; // x0
  int32_t v22; // w22
  int32_t v23; // w19
  MethodInfo v25; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4188811 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Color___TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, v6);
    byte_4188811 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Pixels_35419812 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v9 = 0LL;
  if ( ((unsigned __int8)Pixels_35419812 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_35419812 = UnityEngine_Texture2D__GetPixels_35419812(baseTexture, 0LL);
    if ( !Pixels_35419812 )
      goto LABEL_19;
    v10 = Pixels_35419812;
    v11 = sub_B2C374(UnityEngine_Color___TypeInfo, Pixels_35419812->max_length);
    v16 = *(_QWORD *)&v10->max_length;
    v17 = (UnityEngine_Color_array *)v11;
    if ( (int)v16 >= 1 )
    {
      v18 = 0LL;
      v19 = (int)v16;
      p_r = &v10->m_Items[1].fields.r;
      while ( 1 )
      {
        v26.fields.a = *p_r;
        v26.fields.r = *(p_r - 3) * darkRate;
        v26.fields.g = *(p_r - 2) * darkRate;
        v26.fields.b = *(p_r - 1) * darkRate;
        *(_OWORD *)&v25.methodPointer = 0uLL;
        UnityEngine_Color___ctor(v26, v12, v13, v14, v15, &v25);
        if ( !v17 )
          break;
        if ( v18 >= v17->max_length )
          goto LABEL_15;
        *(_OWORD *)&v17->m_Items[v18++].fields.g = *(_OWORD *)&v25.methodPointer;
        if ( (__int64)v18 >= v19 )
          goto LABEL_16;
        p_r += 4;
        if ( v18 >= v10->max_length )
        {
LABEL_15:
          v21 = sub_B2C460(Pixels_35419812);
          sub_B2C400(v21, 0LL);
        }
      }
LABEL_19:
      sub_B2C434(Pixels_35419812, v8);
    }
LABEL_16:
    v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v9 = (UnityEngine_Texture2D_o *)sub_B2C42C(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35417556(v9, v22, v23, 0LL);
    if ( !v9 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_35418468(v9, v17, 0LL);
    UnityEngine_Texture2D__Apply_35419296(v9, 0LL);
  }
  return v9;
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
  float X_k__BackingField; // s8
  int v12; // w0
  float Y_k__BackingField; // s9
  int v14; // w24
  int v15; // w0
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  int v20; // w8
  int v21; // w8
  int v22; // w9
  float x; // s0
  double v25; // d1
  double v26; // d2
  double v27; // d8
  float y; // s0
  double v29; // d10
  float v30; // s0
  float v31; // s1
  int v32; // w22
  double v33; // d11
  double v34; // d9
  int32_t HorizontalPanelNum_k__BackingField; // w8
  UnityEngine_Color_array *v36; // x23
  int32_t VerticalPanelNum_k__BackingField; // w9
  int v38; // w27
  int v39; // w11
  int v40; // w26
  int32_t v41; // w25
  int v42; // w20
  int v43; // w19
  __int64 v44; // x24
  il2cpp_array_size_t v45; // w21
  int v46; // s0
  int v47; // s1
  int v48; // s2
  int v49; // s3
  Il2CppObject *v50; // x8
  UnityEngine_Texture2D_o *v51; // x19
  __int64 v53; // x0
  UnityEngine_Texture2D_o *v54; // [xsp+8h] [xbp-A8h]
  int v55; // [xsp+10h] [xbp-A0h]
  SubmarinePanelPositionCalculator_o *v56; // [xsp+18h] [xbp-98h]
  int32_t hIndex; // [xsp+28h] [xbp-88h]
  int v59; // [xsp+2Ch] [xbp-84h]
  MethodInfo methoda; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = objDomain;
  if ( (byte_418880F & 1) == 0 )
  {
    sub_B2C35C(&PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds);
    objDomain = (ObjectDomain_o *)sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_418880F = 1;
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
  v54 = (UnityEngine_Texture2D_o *)sub_B2C42C(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_35417556(v54, v9, v10, 0LL);
  X_k__BackingField = v7->fields._X_k__BackingField;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v7->fields._Y_k__BackingField;
  v14 = v12;
  v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v20 = v14 >= 0 ? v14 : v14 + 1;
  v21 = v20 >> 1;
  v22 = v15 >= 0 ? v15 : v15 + 1;
  v61.fields.m_XMin = X_k__BackingField + (float)v21;
  v61.fields.m_YMin = Y_k__BackingField + (float)(v22 >> 1);
  v61.fields.m_Width = v7->fields._Width_k__BackingField;
  v61.fields.m_Height = v7->fields._Height_k__BackingField;
  UnityEngine_Rect___ctor(v61, v16, v17, v18, v19, &methoda);
  x = UnityEngine_Rect__get_x(v62, &methoda);
  v27 = x == INFINITY ? -x : x;
  v25 = x;
  v26 = -x;
  y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)&x, &methoda);
  v29 = y == INFINITY ? -INFINITY : y;
  objDomain = (ObjectDomain_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                                  closedPanelTexture,
                                  closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !positionCalculator )
LABEL_50:
    sub_B2C434(objDomain, excludePanelUniqueIds);
  v30 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  v31 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v32 = (int)objDomain;
  if ( v30 == INFINITY )
    v33 = -v30;
  else
    v33 = v30;
  if ( v31 == INFINITY )
    v34 = -INFINITY;
  else
    v34 = v31;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_35419812(closedPanelTexture, 0LL);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v36 = (UnityEngine_Color_array *)objDomain;
  if ( HorizontalPanelNum_k__BackingField < 1 )
    goto LABEL_45;
  VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
  v38 = (int)v34;
  v39 = (int)v27 + v32 * (int)v29;
  hIndex = 0;
  v40 = (int)v33;
  v56 = positionCalculator;
  do
  {
    if ( VerticalPanelNum_k__BackingField < 1 )
      goto LABEL_44;
    v41 = 0;
    v55 = v39;
    v59 = v39;
    do
    {
      if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      }
      objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(hIndex, v41, excludePanelUniqueIds, 0LL);
      if ( ((unsigned __int8)objDomain & 1) == 0 && v40 >= 1 )
      {
        v42 = v59;
        v43 = 0;
        while ( v38 < 1 )
        {
LABEL_41:
          ++v43;
          ++v42;
          if ( v43 >= v40 )
            goto LABEL_42;
        }
        v44 = 0LL;
        v45 = v42;
        while ( 1 )
        {
          *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_clear(0LL);
          if ( !v36 )
            goto LABEL_50;
          if ( v45 >= v36->max_length )
          {
            v53 = sub_B2C460(objDomain);
            sub_B2C400(v53, 0LL);
          }
          ++v44;
          v50 = &v36->obj + (int)v45;
          v45 += v32;
          LODWORD(v50[2].klass) = v46;
          HIDWORD(v50[2].klass) = v47;
          LODWORD(v50[2].monitor) = v48;
          HIDWORD(v50[2].monitor) = v49;
          if ( v44 >= v38 )
            goto LABEL_41;
        }
      }
LABEL_42:
      ++v41;
      VerticalPanelNum_k__BackingField = v56->fields._VerticalPanelNum_k__BackingField;
      v59 += v32 * (int)v34;
    }
    while ( v41 < VerticalPanelNum_k__BackingField );
    HorizontalPanelNum_k__BackingField = v56->fields._HorizontalPanelNum_k__BackingField;
    v39 = v55;
LABEL_44:
    v39 += v40;
    ++hIndex;
  }
  while ( hIndex < HorizontalPanelNum_k__BackingField );
LABEL_45:
  v51 = v54;
  if ( !v54 )
    goto LABEL_50;
  UnityEngine_Texture2D__SetPixels_35418468(v54, v36, 0LL);
  UnityEngine_Texture2D__Apply_35419296(v54, 0LL);
  return v51;
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
  __int64 v8; // x1
  __int64 v9; // x20
  unsigned int LeftBottomEdgePos; // s0
  float v11; // s8
  int v12; // w8
  float y; // s8
  int v14; // w8
  int v15; // w22
  float v16; // s0
  int v17; // w8
  int v18; // w22
  float v19; // s1
  int v20; // w8
  ObjectDomain_array *v21; // x21
  int v22; // w23
  float v23; // s8
  int v24; // w24
  int v25; // w25
  ObjectDomain_o *v26; // x0
  int v27; // w8
  int v28; // w9
  System_Int32_array **v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  float v36; // s9
  int v37; // w22
  int v38; // w24
  int v39; // w25
  float v40; // s8
  float v41; // s10
  float v42; // s11
  ObjectDomain_o *v43; // x0
  int v44; // w8
  int v45; // w9
  int v46; // w9
  System_Int32_array **v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  float v54; // s9
  int v55; // w23
  float v56; // s8
  int v57; // w24
  int v58; // w25
  ObjectDomain_o *v59; // x0
  int v60; // w10
  int v61; // w9
  System_Int32_array **v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  float v69; // s9
  int v70; // w22
  float v71; // s10
  int v72; // w23
  int v73; // w24
  float v74; // s11
  float v75; // s8
  float v76; // s12
  ObjectDomain_o *v77; // x0
  int v78; // w8
  int v79; // w8
  int v80; // w9
  System_Int32_array **v81; // x19
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v89; // x0
  __int64 v90; // x0
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418880B & 1) == 0 )
  {
    sub_B2C35C(&ObjectDomain___TypeInfo, closedPanelTexture);
    sub_B2C35C(&ObjectDomain_TypeInfo, v5);
    sub_B2C35C(&float___TypeInfo, v6);
    byte_418880B = 1;
  }
  v7 = sub_B2C374(float___TypeInfo, 4LL);
  if ( !positionCalculator )
    goto LABEL_66;
  v9 = v7;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_66;
  v11 = *(float *)&LeftBottomEdgePos;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !v9 )
    goto LABEL_66;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_65;
  v12 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 32) = v11 + (float)(v12 >> 1);
  v91 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = v91.fields.y;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v91.fields.x);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_65;
  v14 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 36) = y + (float)(v14 >> 1);
  v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  LODWORD(v16) = (unsigned int)SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_65;
  v17 = v15 >= 0 ? v15 : v15 + 1;
  *(float *)(v9 + 40) = (float)(v17 >> 1) - v16;
  v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  *(UnityEngine_Vector3_o *)(&v19 - 1) = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_65;
  v20 = v18 >= 0 ? v18 : v18 + 1;
  *(float *)(v9 + 44) = (float)(v20 >> 1) - v19;
  v21 = (ObjectDomain_array *)sub_B2C374(ObjectDomain___TypeInfo, 4LL);
  v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_65;
  v23 = *(float *)(v9 + 32);
  v24 = v7;
  v25 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v26 = (ObjectDomain_o *)sub_B2C42C(ObjectDomain_TypeInfo);
  v27 = 1 - v24;
  if ( v22 <= 0 )
    v28 = -v22;
  else
    v28 = 1 - v22;
  if ( v24 <= 0 )
    v27 = -v24;
  v29 = (System_Int32_array **)v26;
  ObjectDomain___ctor(v26, (float)(v28 >> 1), (float)(v27 >> 1), v23, (float)v25, 0LL);
  if ( !v21 )
LABEL_66:
    sub_B2C434(v7, v8);
  if ( v29 )
  {
    v7 = sub_B2C41C(v29, v21->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_67;
  }
  if ( !v21->max_length )
    goto LABEL_65;
  v21->m_Items[0] = (ObjectDomain_o *)v29;
  sub_B2C2F8((BattleServantConfConponent_o *)v21->m_Items, v29, v30, v31, v32, v33, v34, v35);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_65;
  v36 = *(float *)(v9 + 32);
  v37 = v7;
  v38 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) < 3u )
    goto LABEL_65;
  v39 = v7;
  v40 = *(float *)(v9 + 36);
  v41 = *(float *)(v9 + 40);
  v42 = *(float *)(v9 + 32);
  v43 = (ObjectDomain_o *)sub_B2C42C(ObjectDomain_TypeInfo);
  v44 = 1 - v38;
  if ( v37 <= 0 )
    v45 = -v37;
  else
    v45 = 1 - v37;
  v46 = v45 >> 1;
  if ( v38 <= 0 )
    v44 = -v38;
  v47 = (System_Int32_array **)v43;
  ObjectDomain___ctor(v43, v36 + (float)v46, (float)(v44 >> 1), (float)((float)v39 - v42) - v41, v40, 0LL);
  if ( v47 )
  {
    v7 = sub_B2C41C(v47, v21->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_67:
      v90 = sub_B2C454(v7);
      sub_B2C400(v90, 0LL);
    }
  }
  if ( v21->max_length <= 1
    || (v21->m_Items[1] = (ObjectDomain_o *)v47,
        sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[1], v47, v48, v49, v50, v51, v52, v53),
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v54 = *(float *)(v9 + 40),
        v55 = v7,
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
LABEL_65:
    v89 = sub_B2C460(v7);
    sub_B2C400(v89, 0LL);
  }
  v56 = *(float *)(v9 + 40);
  v57 = v7;
  v58 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v59 = (ObjectDomain_o *)sub_B2C42C(ObjectDomain_TypeInfo);
  if ( v55 >= 0 )
    v60 = v55;
  else
    v60 = v55 + 1;
  v61 = 1 - v57;
  if ( v57 <= 0 )
    v61 = -v57;
  v62 = (System_Int32_array **)v59;
  ObjectDomain___ctor(v59, (float)(v60 >> 1) - v54, (float)(v61 >> 1), v56, (float)v58, 0LL);
  if ( v62 )
  {
    v7 = sub_B2C41C(v62, v21->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_67;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_65;
  v21->m_Items[2] = (ObjectDomain_o *)v62;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[2], v62, v63, v64, v65, v66, v67, v68);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_65;
  v69 = *(float *)(v9 + 32);
  v70 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_65;
  v71 = *(float *)(v9 + 44);
  v72 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) < 4u )
    goto LABEL_65;
  v73 = v7;
  v74 = *(float *)(v9 + 32);
  v76 = *(float *)(v9 + 40);
  v75 = *(float *)(v9 + 44);
  v77 = (ObjectDomain_o *)sub_B2C42C(ObjectDomain_TypeInfo);
  if ( v70 <= 0 )
    v78 = -v70;
  else
    v78 = 1 - v70;
  v79 = v78 >> 1;
  if ( v72 >= 0 )
    v80 = v72;
  else
    v80 = v72 + 1;
  v81 = (System_Int32_array **)v77;
  ObjectDomain___ctor(v77, v69 + (float)v79, (float)(v80 >> 1) - v71, (float)((float)v73 - v74) - v76, v75, 0LL);
  if ( v81 )
  {
    v7 = sub_B2C41C(v81, v21->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_67;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_65;
  v21->m_Items[3] = (ObjectDomain_o *)v81;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->m_Items[3], v81, v82, v83, v84, v85, v86, v87);
  return v21;
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
  ObjectDomain_o *v10; // x19
  UnityEngine_Vector3_o LeftBottomEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v3 = positionCalculator;
  if ( (byte_418880C & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_B2C35C(&ObjectDomain_TypeInfo, closedPanelTexture);
    byte_418880C = 1;
  }
  if ( !v3 )
    sub_B2C434(positionCalculator, closedPanelTexture);
  LODWORD(v4) = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  y = LeftBottomEdgePos.fields.y;
  v6 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL));
  v7 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL));
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL);
  v8 = RightTopEdgePos.fields.y;
  v14 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v9 = v14.fields.y;
  v10 = (ObjectDomain_o *)sub_B2C42C(ObjectDomain_TypeInfo);
  ObjectDomain___ctor(v10, v4, y, v6 - v7, v8 - v9, 0LL);
  return v10;
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
  UnityEngine_RenderTexture_o *Temporary_35374328; // x21
  UnityEngine_RenderTexture_o *active; // x22
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  __int64 v16; // x0
  __int64 v17; // x1
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4188810 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Graphics_TypeInfo, *(_QWORD *)&resizeWidth);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_4188810 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_35374328 = UnityEngine_RenderTexture__GetTemporary_35374328(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_35374328, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_35374328, 0LL);
    v9 = (UnityEngine_Texture2D_o *)sub_B2C42C(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35417556(v9, resizeWidth, resizeHeight, 0LL);
    v20.fields.m_Width = (float)resizeWidth;
    v20.fields.m_Height = (float)resizeHeight;
    v20.fields.m_XMin = 0.0;
    v20.fields.m_YMin = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v20, v12, v13, v14, v15, &var40);
    if ( !v9 )
      sub_B2C434(v16, v17);
    *(_QWORD *)&v21.fields.m_XMin = var40.methodPointer;
    *(_QWORD *)&v21.fields.m_Width = var40.invoker_method;
    UnityEngine_Texture2D__ReadPixels_35419472(v9, v21, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_35419296(v9, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_35374328, 0LL);
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
  if ( (byte_418880E & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, positionCalculator);
    byte_418880E = 1;
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
  v8 = (UnityEngine_Texture2D_o *)sub_B2C42C(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField;
  if ( Width_k__BackingField == INFINITY )
    v9 = -Width_k__BackingField;
  v10 = (int)v9;
  v11 = Height_k__BackingField == INFINITY ? -INFINITY : Height_k__BackingField;
  v12 = v8;
  UnityEngine_Texture2D___ctor_35417556(v8, v10, (int)v11, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_35416740(
                                  closedPanelTexture,
                                  v30,
                                  v32,
                                  (int)v33,
                                  (int)v34,
                                  0LL);
  if ( !v12 )
LABEL_32:
    sub_B2C434(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_35418468(v12, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_35419296(v12, 0LL);
  return v12;
}