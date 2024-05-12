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
  if ( (byte_438B6B2 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_B775C4(&ObjectDomain_TypeInfo);
    byte_438B6B2 = 1;
  }
  if ( !v3 )
    sub_B7769C(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = (ObjectDomain_o *)sub_B77694(ObjectDomain_TypeInfo);
  ObjectDomain___ctor(v8, x - (float)(v6 * 0.5), y - (float)(v7 * 0.5), v6, v7, 0LL);
  return v8;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  UnityEngine_Color_array *Pixels_36415064; // x0
  __int64 v6; // x1
  UnityEngine_Texture2D_o *v7; // x21
  UnityEngine_Color_array *v8; // x21
  __int64 v9; // x0
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  __int64 v14; // x8
  UnityEngine_Color_array *v15; // x20
  unsigned __int64 v16; // x22
  signed __int64 v17; // x23
  float *p_r; // x25
  __int64 v19; // x0
  int32_t v20; // w22
  int32_t v21; // w19
  MethodInfo v23; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438B6B6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Color___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Texture2D_TypeInfo);
    byte_438B6B6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Pixels_36415064 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v7 = 0LL;
  if ( ((unsigned __int8)Pixels_36415064 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_36415064 = UnityEngine_Texture2D__GetPixels_36415064(baseTexture, 0LL);
    if ( !Pixels_36415064 )
      goto LABEL_19;
    v8 = Pixels_36415064;
    v9 = sub_B775DC(UnityEngine_Color___TypeInfo, Pixels_36415064->max_length);
    v14 = *(_QWORD *)&v8->max_length;
    v15 = (UnityEngine_Color_array *)v9;
    if ( (int)v14 >= 1 )
    {
      v16 = 0LL;
      v17 = (int)v14;
      p_r = &v8->m_Items[1].fields.r;
      while ( 1 )
      {
        v24.fields.a = *p_r;
        v24.fields.r = *(p_r - 3) * darkRate;
        v24.fields.g = *(p_r - 2) * darkRate;
        v24.fields.b = *(p_r - 1) * darkRate;
        *(_OWORD *)&v23.methodPointer = 0uLL;
        UnityEngine_Color___ctor(v24, v10, v11, v12, v13, &v23);
        if ( !v15 )
          break;
        if ( v16 >= v15->max_length )
          goto LABEL_15;
        *(_OWORD *)&v15->m_Items[v16++].fields.g = *(_OWORD *)&v23.methodPointer;
        if ( (__int64)v16 >= v17 )
          goto LABEL_16;
        p_r += 4;
        if ( v16 >= v8->max_length )
        {
LABEL_15:
          v19 = sub_B776C8(Pixels_36415064);
          sub_B77668(v19, 0LL);
        }
      }
LABEL_19:
      sub_B7769C(Pixels_36415064, v6);
    }
LABEL_16:
    v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v7 = (UnityEngine_Texture2D_o *)sub_B77694(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_36412808(v7, v20, v21, 0LL);
    if ( !v7 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_36413720(v7, v15, 0LL);
    UnityEngine_Texture2D__Apply_36414548(v7, 0LL);
  }
  return v7;
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
  int32_t v8; // w24
  int32_t v9; // w25
  float X_k__BackingField; // s8
  int v11; // w0
  float Y_k__BackingField; // s9
  int v13; // w24
  int v14; // w0
  float v15; // s4
  float v16; // s5
  float v17; // s6
  float v18; // s7
  int v19; // w8
  int v20; // w8
  int v21; // w9
  float x; // s0
  double v24; // d1
  double v25; // d2
  double v26; // d8
  float y; // s0
  double v28; // d10
  float v29; // s0
  float v30; // s1
  int v31; // w22
  double v32; // d11
  double v33; // d9
  int32_t HorizontalPanelNum_k__BackingField; // w8
  UnityEngine_Color_array *v35; // x23
  int32_t VerticalPanelNum_k__BackingField; // w9
  int v37; // w27
  int v38; // w11
  int v39; // w26
  int32_t v40; // w25
  int v41; // w20
  int v42; // w19
  __int64 v43; // x24
  il2cpp_array_size_t v44; // w21
  int v45; // s0
  int v46; // s1
  int v47; // s2
  int v48; // s3
  Il2CppObject *v49; // x8
  UnityEngine_Texture2D_o *v50; // x19
  __int64 v52; // x0
  UnityEngine_Texture2D_o *v53; // [xsp+8h] [xbp-A8h]
  int v54; // [xsp+10h] [xbp-A0h]
  SubmarinePanelPositionCalculator_o *v55; // [xsp+18h] [xbp-98h]
  int32_t hIndex; // [xsp+28h] [xbp-88h]
  int v58; // [xsp+2Ch] [xbp-84h]
  MethodInfo methoda; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Rect_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = objDomain;
  if ( (byte_438B6B4 & 1) == 0 )
  {
    sub_B775C4(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_B775C4(&UnityEngine_Texture2D_TypeInfo);
    byte_438B6B4 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( !v7 )
    goto LABEL_50;
  if ( v7->fields._Width_k__BackingField <= 0.0 || v7->fields._Height_k__BackingField <= 0.0 )
    return 0LL;
  if ( !closedPanelTexture )
    goto LABEL_50;
  v8 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, SubmarinePanelPositionCalculator_o *, UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr,
         positionCalculator,
         closedPanelTexture,
         method);
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v53 = (UnityEngine_Texture2D_o *)sub_B77694(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_36412808(v53, v8, v9, 0LL);
  X_k__BackingField = v7->fields._X_k__BackingField;
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v7->fields._Y_k__BackingField;
  v13 = v11;
  v14 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v19 = v13 >= 0 ? v13 : v13 + 1;
  v20 = v19 >> 1;
  v21 = v14 >= 0 ? v14 : v14 + 1;
  v60.fields.m_XMin = X_k__BackingField + (float)v20;
  v60.fields.m_YMin = Y_k__BackingField + (float)(v21 >> 1);
  v60.fields.m_Width = v7->fields._Width_k__BackingField;
  v60.fields.m_Height = v7->fields._Height_k__BackingField;
  UnityEngine_Rect___ctor(v60, v15, v16, v17, v18, &methoda);
  x = UnityEngine_Rect__get_x(v61, &methoda);
  v26 = x == INFINITY ? -x : x;
  v24 = x;
  v25 = -x;
  y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)&x, &methoda);
  v28 = y == INFINITY ? -INFINITY : y;
  objDomain = (ObjectDomain_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                                  closedPanelTexture,
                                  closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !positionCalculator )
LABEL_50:
    sub_B7769C(objDomain, excludePanelUniqueIds);
  v29 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  v30 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v31 = (int)objDomain;
  if ( v29 == INFINITY )
    v32 = -v29;
  else
    v32 = v29;
  if ( v30 == INFINITY )
    v33 = -INFINITY;
  else
    v33 = v30;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_36415064(closedPanelTexture, 0LL);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v35 = (UnityEngine_Color_array *)objDomain;
  if ( HorizontalPanelNum_k__BackingField < 1 )
    goto LABEL_45;
  VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
  v37 = (int)v33;
  v38 = (int)v26 + v31 * (int)v28;
  hIndex = 0;
  v39 = (int)v32;
  v55 = positionCalculator;
  do
  {
    if ( VerticalPanelNum_k__BackingField < 1 )
      goto LABEL_44;
    v40 = 0;
    v54 = v38;
    v58 = v38;
    do
    {
      if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      }
      objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(hIndex, v40, excludePanelUniqueIds, 0LL);
      if ( ((unsigned __int8)objDomain & 1) == 0 && v39 >= 1 )
      {
        v41 = v58;
        v42 = 0;
        while ( v37 < 1 )
        {
LABEL_41:
          ++v42;
          ++v41;
          if ( v42 >= v39 )
            goto LABEL_42;
        }
        v43 = 0LL;
        v44 = v41;
        while ( 1 )
        {
          *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_clear(0LL);
          if ( !v35 )
            goto LABEL_50;
          if ( v44 >= v35->max_length )
          {
            v52 = sub_B776C8(objDomain);
            sub_B77668(v52, 0LL);
          }
          ++v43;
          v49 = &v35->obj + (int)v44;
          v44 += v31;
          LODWORD(v49[2].klass) = v45;
          HIDWORD(v49[2].klass) = v46;
          LODWORD(v49[2].monitor) = v47;
          HIDWORD(v49[2].monitor) = v48;
          if ( v43 >= v37 )
            goto LABEL_41;
        }
      }
LABEL_42:
      ++v40;
      VerticalPanelNum_k__BackingField = v55->fields._VerticalPanelNum_k__BackingField;
      v58 += v31 * (int)v33;
    }
    while ( v40 < VerticalPanelNum_k__BackingField );
    HorizontalPanelNum_k__BackingField = v55->fields._HorizontalPanelNum_k__BackingField;
    v38 = v54;
LABEL_44:
    v38 += v39;
    ++hIndex;
  }
  while ( hIndex < HorizontalPanelNum_k__BackingField );
LABEL_45:
  v50 = v53;
  if ( !v53 )
    goto LABEL_50;
  UnityEngine_Texture2D__SetPixels_36413720(v53, v35, 0LL);
  UnityEngine_Texture2D__Apply_36414548(v53, 0LL);
  return v50;
}


// local variable allocation has failed, the output may be wrong!
ObjectDomain_array *__fastcall ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  unsigned int LeftBottomEdgePos; // s0
  float v9; // s8
  int v10; // w8
  float y; // s8
  int v12; // w8
  int v13; // w22
  float v14; // s0
  int v15; // w8
  int v16; // w22
  float v17; // s1
  int v18; // w8
  ObjectDomain_array *v19; // x21
  int v20; // w23
  float v21; // s8
  int v22; // w24
  int v23; // w25
  ObjectDomain_o *v24; // x0
  int v25; // w8
  int v26; // w9
  System_Int32_array **v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  float v34; // s9
  int v35; // w22
  int v36; // w24
  int v37; // w25
  float v38; // s8
  float v39; // s10
  float v40; // s11
  ObjectDomain_o *v41; // x0
  int v42; // w8
  int v43; // w9
  int v44; // w9
  System_Int32_array **v45; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  float v52; // s9
  int v53; // w23
  float v54; // s8
  int v55; // w24
  int v56; // w25
  ObjectDomain_o *v57; // x0
  int v58; // w10
  int v59; // w9
  System_Int32_array **v60; // x22
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  float v67; // s9
  int v68; // w22
  float v69; // s10
  int v70; // w23
  int v71; // w24
  float v72; // s11
  float v73; // s8
  float v74; // s12
  ObjectDomain_o *v75; // x0
  int v76; // w8
  int v77; // w8
  int v78; // w9
  System_Int32_array **v79; // x19
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v87; // x0
  __int64 v88; // x0
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438B6B0 & 1) == 0 )
  {
    sub_B775C4(&ObjectDomain___TypeInfo);
    sub_B775C4(&ObjectDomain_TypeInfo);
    sub_B775C4(&float___TypeInfo);
    byte_438B6B0 = 1;
  }
  v5 = sub_B775DC(float___TypeInfo, 4LL);
  if ( !positionCalculator )
    goto LABEL_66;
  v7 = v5;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_66;
  v9 = *(float *)&LeftBottomEdgePos;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !v7 )
    goto LABEL_66;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_65;
  v10 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 32) = v9 + (float)(v10 >> 1);
  v89 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = v89.fields.y;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v89.fields.x);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_65;
  v12 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 36) = y + (float)(v12 >> 1);
  v13 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  LODWORD(v14) = (unsigned int)SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_65;
  v15 = v13 >= 0 ? v13 : v13 + 1;
  *(float *)(v7 + 40) = (float)(v15 >> 1) - v14;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  *(UnityEngine_Vector3_o *)(&v17 - 1) = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_65;
  v18 = v16 >= 0 ? v16 : v16 + 1;
  *(float *)(v7 + 44) = (float)(v18 >> 1) - v17;
  v19 = (ObjectDomain_array *)sub_B775DC(ObjectDomain___TypeInfo, 4LL);
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_65;
  v21 = *(float *)(v7 + 32);
  v22 = v5;
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v24 = (ObjectDomain_o *)sub_B77694(ObjectDomain_TypeInfo);
  v25 = 1 - v22;
  if ( v20 <= 0 )
    v26 = -v20;
  else
    v26 = 1 - v20;
  if ( v22 <= 0 )
    v25 = -v22;
  v27 = (System_Int32_array **)v24;
  ObjectDomain___ctor(v24, (float)(v26 >> 1), (float)(v25 >> 1), v21, (float)v23, 0LL);
  if ( !v19 )
LABEL_66:
    sub_B7769C(v5, v6);
  if ( v27 )
  {
    v5 = sub_B77684(v27, v19->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_67;
  }
  if ( !v19->max_length )
    goto LABEL_65;
  v19->m_Items[0] = (ObjectDomain_o *)v27;
  sub_B77560((BattleServantConfConponent_o *)v19->m_Items, v27, v28, v29, v30, v31, v32, v33);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_65;
  v34 = *(float *)(v7 + 32);
  v35 = v5;
  v36 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v7 + 24) < 3u )
    goto LABEL_65;
  v37 = v5;
  v38 = *(float *)(v7 + 36);
  v39 = *(float *)(v7 + 40);
  v40 = *(float *)(v7 + 32);
  v41 = (ObjectDomain_o *)sub_B77694(ObjectDomain_TypeInfo);
  v42 = 1 - v36;
  if ( v35 <= 0 )
    v43 = -v35;
  else
    v43 = 1 - v35;
  v44 = v43 >> 1;
  if ( v36 <= 0 )
    v42 = -v36;
  v45 = (System_Int32_array **)v41;
  ObjectDomain___ctor(v41, v34 + (float)v44, (float)(v42 >> 1), (float)((float)v37 - v40) - v39, v38, 0LL);
  if ( v45 )
  {
    v5 = sub_B77684(v45, v19->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_67:
      v88 = sub_B776BC(v5);
      sub_B77668(v88, 0LL);
    }
  }
  if ( v19->max_length <= 1
    || (v19->m_Items[1] = (ObjectDomain_o *)v45,
        sub_B77560((BattleServantConfConponent_o *)&v19->m_Items[1], v45, v46, v47, v48, v49, v50, v51),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v52 = *(float *)(v7 + 40),
        v53 = v5,
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_65:
    v87 = sub_B776C8(v5);
    sub_B77668(v87, 0LL);
  }
  v54 = *(float *)(v7 + 40);
  v55 = v5;
  v56 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v57 = (ObjectDomain_o *)sub_B77694(ObjectDomain_TypeInfo);
  if ( v53 >= 0 )
    v58 = v53;
  else
    v58 = v53 + 1;
  v59 = 1 - v55;
  if ( v55 <= 0 )
    v59 = -v55;
  v60 = (System_Int32_array **)v57;
  ObjectDomain___ctor(v57, (float)(v58 >> 1) - v52, (float)(v59 >> 1), v54, (float)v56, 0LL);
  if ( v60 )
  {
    v5 = sub_B77684(v60, v19->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_67;
  }
  if ( v19->max_length <= 2 )
    goto LABEL_65;
  v19->m_Items[2] = (ObjectDomain_o *)v60;
  sub_B77560((BattleServantConfConponent_o *)&v19->m_Items[2], v60, v61, v62, v63, v64, v65, v66);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_65;
  v67 = *(float *)(v7 + 32);
  v68 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_65;
  v69 = *(float *)(v7 + 44);
  v70 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_65;
  v71 = v5;
  v72 = *(float *)(v7 + 32);
  v74 = *(float *)(v7 + 40);
  v73 = *(float *)(v7 + 44);
  v75 = (ObjectDomain_o *)sub_B77694(ObjectDomain_TypeInfo);
  if ( v68 <= 0 )
    v76 = -v68;
  else
    v76 = 1 - v68;
  v77 = v76 >> 1;
  if ( v70 >= 0 )
    v78 = v70;
  else
    v78 = v70 + 1;
  v79 = (System_Int32_array **)v75;
  ObjectDomain___ctor(v75, v67 + (float)v77, (float)(v78 >> 1) - v69, (float)((float)v71 - v72) - v74, v73, 0LL);
  if ( v79 )
  {
    v5 = sub_B77684(v79, v19->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_67;
  }
  if ( v19->max_length <= 3 )
    goto LABEL_65;
  v19->m_Items[3] = (ObjectDomain_o *)v79;
  sub_B77560((BattleServantConfConponent_o *)&v19->m_Items[3], v79, v80, v81, v82, v83, v84, v85);
  return v19;
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
  if ( (byte_438B6B1 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_B775C4(&ObjectDomain_TypeInfo);
    byte_438B6B1 = 1;
  }
  if ( !v3 )
    sub_B7769C(positionCalculator, closedPanelTexture);
  LODWORD(v4) = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  y = LeftBottomEdgePos.fields.y;
  v6 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL));
  v7 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL));
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL);
  v8 = RightTopEdgePos.fields.y;
  v14 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v9 = v14.fields.y;
  v10 = (ObjectDomain_o *)sub_B77694(ObjectDomain_TypeInfo);
  ObjectDomain___ctor(v10, v4, y, v6 - v7, v8 - v9, 0LL);
  return v10;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateResizedTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        int32_t resizeWidth,
        int32_t resizeHeight,
        const MethodInfo *method)
{
  UnityEngine_Texture2D_o *v7; // x23
  UnityEngine_RenderTexture_o *Temporary_36369412; // x21
  UnityEngine_RenderTexture_o *active; // x22
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  __int64 v14; // x0
  __int64 v15; // x1
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438B6B5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Graphics_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Texture2D_TypeInfo);
    byte_438B6B5 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_36369412 = UnityEngine_RenderTexture__GetTemporary_36369412(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_36369412, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_36369412, 0LL);
    v7 = (UnityEngine_Texture2D_o *)sub_B77694(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_36412808(v7, resizeWidth, resizeHeight, 0LL);
    v18.fields.m_Width = (float)resizeWidth;
    v18.fields.m_Height = (float)resizeHeight;
    v18.fields.m_XMin = 0.0;
    v18.fields.m_YMin = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v18, v10, v11, v12, v13, &var40);
    if ( !v7 )
      sub_B7769C(v14, v15);
    *(_QWORD *)&v19.fields.m_XMin = var40.methodPointer;
    *(_QWORD *)&v19.fields.m_Width = var40.invoker_method;
    UnityEngine_Texture2D__ReadPixels_36414724(v7, v19, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_36414548(v7, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_36369412, 0LL);
  }
  return v7;
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
  if ( (byte_438B6B3 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_B775C4(&UnityEngine_Texture2D_TypeInfo);
    byte_438B6B3 = 1;
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
  v8 = (UnityEngine_Texture2D_o *)sub_B77694(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField;
  if ( Width_k__BackingField == INFINITY )
    v9 = -Width_k__BackingField;
  v10 = (int)v9;
  v11 = Height_k__BackingField == INFINITY ? -INFINITY : Height_k__BackingField;
  v12 = v8;
  UnityEngine_Texture2D___ctor_36412808(v8, v10, (int)v11, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_36411992(
                                  closedPanelTexture,
                                  v30,
                                  v32,
                                  (int)v33,
                                  (int)v34,
                                  0LL);
  if ( !v12 )
LABEL_32:
    sub_B7769C(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_36413720(v12, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_36414548(v12, 0LL);
  return v12;
}