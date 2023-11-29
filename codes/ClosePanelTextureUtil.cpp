// local variable allocation has failed, the output may be wrong!
ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreateClosedPanelDomain(
        UnityEngine_Vector3_o pos,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  float y; // s8
  float x; // s9
  float v9; // s10
  float v10; // s11
  ObjectDomain_o *v11; // x19

  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F99F0 & 1) == 0 )
  {
    sub_B16FFC(&ObjectDomain_TypeInfo, method);
    byte_40F99F0 = 1;
  }
  if ( !positionCalculator )
    sub_B170D4();
  v9 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  v10 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v11 = (ObjectDomain_o *)sub_B170CC(ObjectDomain_TypeInfo, method, v3, v4, v5);
  ObjectDomain___ctor(v11, x - (float)(v9 * 0.5), y - (float)(v10 * 0.5), v9, v10, 0LL);
  return v11;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Texture2D_o *v7; // x21
  UnityEngine_Color_array *Pixels_34914336; // x0
  __int64 v9; // x2
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
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t v24; // w22
  int32_t v25; // w19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  MethodInfo v31; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F99F4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Color___TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, v6);
    byte_40F99F4 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_34914336 = UnityEngine_Texture2D__GetPixels_34914336(baseTexture, 0LL);
    if ( !Pixels_34914336 )
      goto LABEL_19;
    v10 = Pixels_34914336;
    v11 = sub_B17014(UnityEngine_Color___TypeInfo, Pixels_34914336->max_length, v9);
    v16 = *(_QWORD *)&v10->max_length;
    v17 = (UnityEngine_Color_array *)v11;
    if ( (int)v16 >= 1 )
    {
      v18 = 0LL;
      v19 = (int)v16;
      p_r = &v10->m_Items[1].fields.r;
      while ( 1 )
      {
        v32.fields.a = *p_r;
        v32.fields.r = *(p_r - 3) * darkRate;
        v32.fields.g = *(p_r - 2) * darkRate;
        v32.fields.b = *(p_r - 1) * darkRate;
        *(_OWORD *)&v31.methodPointer = 0uLL;
        UnityEngine_Color___ctor(v32, v12, v13, v14, v15, &v31);
        if ( !v17 )
          break;
        if ( v18 >= v17->max_length )
          goto LABEL_15;
        *(_OWORD *)&v17->m_Items[v18++].fields.g = *(_OWORD *)&v31.methodPointer;
        if ( (__int64)v18 >= v19 )
          goto LABEL_16;
        p_r += 4;
        if ( v18 >= v10->max_length )
        {
LABEL_15:
          sub_B17100(v21, v22, v23);
          sub_B170A0();
        }
      }
LABEL_19:
      sub_B170D4();
    }
LABEL_16:
    v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v25 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v7 = (UnityEngine_Texture2D_o *)sub_B170CC(UnityEngine_Texture2D_TypeInfo, v26, v27, v28, v29);
    UnityEngine_Texture2D___ctor_34912080(v7, v24, v25, 0LL);
    if ( !v7 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_34912992(v7, v17, 0LL);
    UnityEngine_Texture2D__Apply_34913820(v7, 0LL);
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
  __int64 v8; // x1
  int32_t v9; // w24
  int32_t v10; // w25
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  float X_k__BackingField; // s8
  int v16; // w0
  float Y_k__BackingField; // s9
  int v18; // w24
  int v19; // w0
  float v20; // s4
  float v21; // s5
  float v22; // s6
  float v23; // s7
  int v24; // w8
  int v25; // w8
  int v26; // w9
  float x; // s0
  double v29; // d1
  double v30; // d2
  double v31; // d8
  float y; // s0
  double v33; // d10
  int v34; // w0
  float v35; // s0
  float v36; // s1
  int v37; // w22
  double v38; // d11
  double v39; // d9
  UnityEngine_Color_array *Pixels_34914336; // x0
  int32_t HorizontalPanelNum_k__BackingField; // w8
  UnityEngine_Color_array *v42; // x23
  int32_t VerticalPanelNum_k__BackingField; // w9
  int v44; // w27
  int v45; // w11
  int v46; // w26
  int32_t v47; // w25
  int v48; // w20
  int v49; // w19
  __int64 v50; // x24
  il2cpp_array_size_t v51; // w21
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  int v55; // s0
  int v56; // s1
  int v57; // s2
  int v58; // s3
  Il2CppObject *v59; // x8
  UnityEngine_Texture2D_o *v60; // x19
  UnityEngine_Texture2D_o *v62; // [xsp+8h] [xbp-A8h]
  int v63; // [xsp+10h] [xbp-A0h]
  SubmarinePanelPositionCalculator_o *v64; // [xsp+18h] [xbp-98h]
  int32_t hIndex; // [xsp+28h] [xbp-88h]
  int v67; // [xsp+2Ch] [xbp-84h]
  MethodInfo methoda; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Rect_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F99F2 & 1) == 0 )
  {
    sub_B16FFC(&PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds);
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_40F99F2 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  if ( !objDomain )
    goto LABEL_50;
  if ( objDomain->fields._Width_k__BackingField <= 0.0 || objDomain->fields._Height_k__BackingField <= 0.0 )
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
  v62 = (UnityEngine_Texture2D_o *)sub_B170CC(UnityEngine_Texture2D_TypeInfo, v11, v12, v13, v14);
  UnityEngine_Texture2D___ctor_34912080(v62, v9, v10, 0LL);
  X_k__BackingField = objDomain->fields._X_k__BackingField;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = objDomain->fields._Y_k__BackingField;
  v18 = v16;
  v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v24 = v18 >= 0 ? v18 : v18 + 1;
  v25 = v24 >> 1;
  v26 = v19 >= 0 ? v19 : v19 + 1;
  v69.fields.m_XMin = X_k__BackingField + (float)v25;
  v69.fields.m_YMin = Y_k__BackingField + (float)(v26 >> 1);
  v69.fields.m_Width = objDomain->fields._Width_k__BackingField;
  v69.fields.m_Height = objDomain->fields._Height_k__BackingField;
  UnityEngine_Rect___ctor(v69, v20, v21, v22, v23, &methoda);
  x = UnityEngine_Rect__get_x(v70, &methoda);
  v31 = x == INFINITY ? -x : x;
  v29 = x;
  v30 = -x;
  y = UnityEngine_Rect__get_y(*(UnityEngine_Rect_o *)&x, &methoda);
  v33 = y == INFINITY ? -INFINITY : y;
  v34 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !positionCalculator )
LABEL_50:
    sub_B170D4();
  v35 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  v36 = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v37 = v34;
  if ( v35 == INFINITY )
    v38 = -v35;
  else
    v38 = v35;
  if ( v36 == INFINITY )
    v39 = -INFINITY;
  else
    v39 = v36;
  Pixels_34914336 = UnityEngine_Texture2D__GetPixels_34914336(closedPanelTexture, 0LL);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v42 = Pixels_34914336;
  if ( HorizontalPanelNum_k__BackingField < 1 )
    goto LABEL_45;
  VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
  v44 = (int)v39;
  v45 = (int)v31 + v37 * (int)v33;
  hIndex = 0;
  v46 = (int)v38;
  v64 = positionCalculator;
  do
  {
    if ( VerticalPanelNum_k__BackingField < 1 )
      goto LABEL_44;
    v47 = 0;
    v63 = v45;
    v67 = v45;
    do
    {
      if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      }
      if ( !PanelUniqueIDUtil__HasID(hIndex, v47, excludePanelUniqueIds, 0LL) && v46 >= 1 )
      {
        v48 = v67;
        v49 = 0;
        while ( v44 < 1 )
        {
LABEL_41:
          ++v49;
          ++v48;
          if ( v49 >= v46 )
            goto LABEL_42;
        }
        v50 = 0LL;
        v51 = v48;
        while ( 1 )
        {
          *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_clear(0LL);
          if ( !v42 )
            goto LABEL_50;
          if ( v51 >= v42->max_length )
          {
            sub_B17100(v52, v53, v54);
            sub_B170A0();
          }
          ++v50;
          v59 = &v42->obj + (int)v51;
          v51 += v37;
          LODWORD(v59[2].klass) = v55;
          HIDWORD(v59[2].klass) = v56;
          LODWORD(v59[2].monitor) = v57;
          HIDWORD(v59[2].monitor) = v58;
          if ( v50 >= v44 )
            goto LABEL_41;
        }
      }
LABEL_42:
      ++v47;
      VerticalPanelNum_k__BackingField = v64->fields._VerticalPanelNum_k__BackingField;
      v67 += v37 * (int)v39;
    }
    while ( v47 < VerticalPanelNum_k__BackingField );
    HorizontalPanelNum_k__BackingField = v64->fields._HorizontalPanelNum_k__BackingField;
    v45 = v63;
LABEL_44:
    v45 += v46;
    ++hIndex;
  }
  while ( hIndex < HorizontalPanelNum_k__BackingField );
LABEL_45:
  v60 = v62;
  if ( !v62 )
    goto LABEL_50;
  UnityEngine_Texture2D__SetPixels_34912992(v62, v42, 0LL);
  UnityEngine_Texture2D__Apply_34913820(v62, 0LL);
  return v60;
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
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  int v14; // w8
  float y; // s8
  int v16; // w8
  int v17; // w22
  float v18; // s0
  int v19; // w8
  int v20; // w22
  float v21; // s1
  int v22; // w8
  ObjectDomain_array *v23; // x21
  int v24; // w23
  float v25; // s8
  int v26; // w24
  int v27; // w25
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  ObjectDomain_o *v32; // x0
  int v33; // w8
  int v34; // w9
  System_Int32_array **v35; // x22
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  float v41; // s9
  int v42; // w22
  int v43; // w24
  __int64 v44; // x3
  __int64 v45; // x4
  int v46; // w25
  float v47; // s8
  float v48; // s10
  float v49; // s11
  ObjectDomain_o *v50; // x0
  int v51; // w8
  int v52; // w9
  int v53; // w9
  System_Int32_array **v54; // x23
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  float v60; // s9
  int v61; // w23
  float v62; // s8
  int v63; // w24
  int v64; // w25
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  ObjectDomain_o *v69; // x0
  int v70; // w10
  int v71; // w9
  System_Int32_array **v72; // x22
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  float v78; // s9
  int v79; // w22
  float v80; // s10
  int v81; // w23
  __int64 v82; // x3
  __int64 v83; // x4
  int v84; // w24
  float v85; // s11
  float v86; // s8
  float v87; // s12
  ObjectDomain_o *v88; // x0
  int v89; // w8
  int v90; // w8
  int v91; // w9
  System_Int32_array **v92; // x19
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F99EE & 1) == 0 )
  {
    sub_B16FFC(&ObjectDomain___TypeInfo, closedPanelTexture);
    sub_B16FFC(&ObjectDomain_TypeInfo, v5);
    sub_B16FFC(&float___TypeInfo, v6);
    byte_40F99EE = 1;
  }
  v7 = sub_B17014(float___TypeInfo, 4LL, method);
  if ( !positionCalculator )
    goto LABEL_66;
  v8 = v7;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_66;
  v10 = *(float *)&LeftBottomEdgePos;
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !v8 )
    goto LABEL_66;
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_65;
  v14 = (int)v11 >= 0 ? v11 : (int)v11 + 1;
  *(float *)(v8 + 32) = v10 + (float)(v14 >> 1);
  v99 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = v99.fields.y;
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr,
          v99.fields.x);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
    goto LABEL_65;
  v16 = (int)v11 >= 0 ? v11 : (int)v11 + 1;
  *(float *)(v8 + 36) = y + (float)(v16 >> 1);
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  LODWORD(v18) = (unsigned int)SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v8 + 24) <= 2u )
    goto LABEL_65;
  v19 = v17 >= 0 ? v17 : v17 + 1;
  *(float *)(v8 + 40) = (float)(v19 >> 1) - v18;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  *(UnityEngine_Vector3_o *)(&v21 - 1) = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v8 + 24) <= 3u )
    goto LABEL_65;
  v22 = v20 >= 0 ? v20 : v20 + 1;
  *(float *)(v8 + 44) = (float)(v22 >> 1) - v21;
  v23 = (ObjectDomain_array *)sub_B17014(ObjectDomain___TypeInfo, 4LL, v13);
  v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_65;
  v25 = *(float *)(v8 + 32);
  v26 = v11;
  v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v32 = (ObjectDomain_o *)sub_B170CC(ObjectDomain_TypeInfo, v28, v29, v30, v31);
  v33 = 1 - v26;
  if ( v24 <= 0 )
    v34 = -v24;
  else
    v34 = 1 - v24;
  if ( v26 <= 0 )
    v33 = -v26;
  v35 = (System_Int32_array **)v32;
  ObjectDomain___ctor(v32, (float)(v34 >> 1), (float)(v33 >> 1), v25, (float)v27, 0LL);
  if ( !v23 )
LABEL_66:
    sub_B170D4();
  if ( v35 )
  {
    v11 = sub_B170BC(v35, v23->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_67;
  }
  if ( !v23->max_length )
    goto LABEL_65;
  v23->m_Items[0] = (ObjectDomain_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)v23->m_Items, v35, v13, v36, v37, v38, v39, v40);
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_65;
  v41 = *(float *)(v8 + 32);
  v42 = v11;
  v43 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v8 + 24) < 3u )
    goto LABEL_65;
  v46 = v11;
  v47 = *(float *)(v8 + 36);
  v48 = *(float *)(v8 + 40);
  v49 = *(float *)(v8 + 32);
  v50 = (ObjectDomain_o *)sub_B170CC(ObjectDomain_TypeInfo, v12, v13, v44, v45);
  v51 = 1 - v43;
  if ( v42 <= 0 )
    v52 = -v42;
  else
    v52 = 1 - v42;
  v53 = v52 >> 1;
  if ( v43 <= 0 )
    v51 = -v43;
  v54 = (System_Int32_array **)v50;
  ObjectDomain___ctor(v50, v41 + (float)v53, (float)(v51 >> 1), (float)((float)v46 - v49) - v48, v47, 0LL);
  if ( v54 )
  {
    v11 = sub_B170BC(v54, v23->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_67:
      sub_B170F4(v11);
      sub_B170A0();
    }
  }
  if ( v23->max_length <= 1
    || (v23->m_Items[1] = (ObjectDomain_o *)v54,
        sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[1], v54, v13, v55, v56, v57, v58, v59),
        v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                closedPanelTexture,
                closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v8 + 24) <= 2u)
    || (v60 = *(float *)(v8 + 40),
        v61 = v11,
        v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
                closedPanelTexture,
                closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v8 + 24) <= 2u) )
  {
LABEL_65:
    sub_B17100(v11, v12, v13);
    sub_B170A0();
  }
  v62 = *(float *)(v8 + 40);
  v63 = v11;
  v64 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v69 = (ObjectDomain_o *)sub_B170CC(ObjectDomain_TypeInfo, v65, v66, v67, v68);
  if ( v61 >= 0 )
    v70 = v61;
  else
    v70 = v61 + 1;
  v71 = 1 - v63;
  if ( v63 <= 0 )
    v71 = -v63;
  v72 = (System_Int32_array **)v69;
  ObjectDomain___ctor(v69, (float)(v70 >> 1) - v60, (float)(v71 >> 1), v62, (float)v64, 0LL);
  if ( v72 )
  {
    v11 = sub_B170BC(v72, v23->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_67;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_65;
  v23->m_Items[2] = (ObjectDomain_o *)v72;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[2], v72, v13, v73, v74, v75, v76, v77);
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v8 + 24) )
    goto LABEL_65;
  v78 = *(float *)(v8 + 32);
  v79 = v11;
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v8 + 24) <= 3u )
    goto LABEL_65;
  v80 = *(float *)(v8 + 44);
  v81 = v11;
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v8 + 24) < 4u )
    goto LABEL_65;
  v84 = v11;
  v85 = *(float *)(v8 + 32);
  v87 = *(float *)(v8 + 40);
  v86 = *(float *)(v8 + 44);
  v88 = (ObjectDomain_o *)sub_B170CC(ObjectDomain_TypeInfo, v12, v13, v82, v83);
  if ( v79 <= 0 )
    v89 = -v79;
  else
    v89 = 1 - v79;
  v90 = v89 >> 1;
  if ( v81 >= 0 )
    v91 = v81;
  else
    v91 = v81 + 1;
  v92 = (System_Int32_array **)v88;
  ObjectDomain___ctor(v88, v78 + (float)v90, (float)(v91 >> 1) - v80, (float)((float)v84 - v85) - v87, v86, 0LL);
  if ( v92 )
  {
    v11 = sub_B170BC(v92, v23->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_67;
  }
  if ( v23->max_length <= 3 )
    goto LABEL_65;
  v23->m_Items[3] = (ObjectDomain_o *)v92;
  sub_B16F98((BattleServantConfConponent_o *)&v23->m_Items[3], v92, v13, v93, v94, v95, v96, v97);
  return v23;
}


ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreatePanelOccupiedTotalDomain(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  float v4; // s8
  float y; // s9
  float v6; // s10
  float v7; // s11
  float v8; // s12
  float v9; // s13
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ObjectDomain_o *v14; // x19
  UnityEngine_Vector3_o LeftBottomEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F99EF & 1) == 0 )
  {
    sub_B16FFC(&ObjectDomain_TypeInfo, closedPanelTexture);
    byte_40F99EF = 1;
  }
  if ( !positionCalculator )
    sub_B170D4();
  LODWORD(v4) = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = LeftBottomEdgePos.fields.y;
  v6 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL));
  v7 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL));
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  v8 = RightTopEdgePos.fields.y;
  v18 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  v9 = v18.fields.y;
  v14 = (ObjectDomain_o *)sub_B170CC(ObjectDomain_TypeInfo, v10, v11, v12, v13);
  ObjectDomain___ctor(v14, v4, y, v6 - v7, v8 - v9, 0LL);
  return v14;
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
  UnityEngine_RenderTexture_o *Temporary_34868896; // x21
  UnityEngine_RenderTexture_o *active; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F99F3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Graphics_TypeInfo, *(_QWORD *)&resizeWidth);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_40F99F3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_34868896 = UnityEngine_RenderTexture__GetTemporary_34868896(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( (BYTE3(UnityEngine_Graphics_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    }
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_34868896, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_34868896, 0LL);
    v9 = (UnityEngine_Texture2D_o *)sub_B170CC(UnityEngine_Texture2D_TypeInfo, v12, v13, v14, v15);
    UnityEngine_Texture2D___ctor_34912080(v9, resizeWidth, resizeHeight, 0LL);
    v22.fields.m_Width = (float)resizeWidth;
    v22.fields.m_Height = (float)resizeHeight;
    v22.fields.m_XMin = 0.0;
    v22.fields.m_YMin = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Rect___ctor(v22, v16, v17, v18, v19, &var40);
    if ( !v9 )
      sub_B170D4();
    *(_QWORD *)&v23.fields.m_XMin = var40.methodPointer;
    *(_QWORD *)&v23.fields.m_Width = var40.invoker_method;
    UnityEngine_Texture2D__ReadPixels_34913996(v9, v23, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_34913820(v9, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_34868896, 0LL);
  }
  return v9;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__ExtractCutTextureFromObjectDomain(
        ObjectDomain_o *objDomain,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v4; // x4
  float Width_k__BackingField; // s8
  float Height_k__BackingField; // s9
  UnityEngine_Texture2D_o *v9; // x0
  double v10; // d0
  int32_t v11; // w1
  double v12; // d0
  UnityEngine_Texture2D_o *v13; // x20
  float X_k__BackingField; // s8
  int v15; // w0
  float Y_k__BackingField; // s9
  int v17; // w22
  int v18; // w0
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  int v23; // w8
  int v24; // w8
  int v25; // w9
  float m_XMin; // s8
  float v27; // s9
  float v28; // s10
  float height; // s0
  double v30; // d1
  int32_t v31; // w1
  double v32; // d1
  int32_t v33; // w2
  double v34; // d1
  double v35; // d0
  UnityEngine_Color_array *Pixels_34911264; // x0
  MethodInfo v38; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Rect_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F99F1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, positionCalculator);
    byte_40F99F1 = 1;
  }
  v38.methodPointer = 0LL;
  v38.invoker_method = 0LL;
  if ( !objDomain )
    goto LABEL_32;
  Width_k__BackingField = objDomain->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0LL;
  Height_k__BackingField = objDomain->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0LL;
  v9 = (UnityEngine_Texture2D_o *)sub_B170CC(
                                    UnityEngine_Texture2D_TypeInfo,
                                    positionCalculator,
                                    closedPanelTexture,
                                    method,
                                    v4);
  v10 = Width_k__BackingField;
  if ( Width_k__BackingField == INFINITY )
    v10 = -Width_k__BackingField;
  v11 = (int)v10;
  v12 = Height_k__BackingField == INFINITY ? -INFINITY : Height_k__BackingField;
  v13 = v9;
  UnityEngine_Texture2D___ctor_34912080(v9, v11, (int)v12, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_32;
  X_k__BackingField = objDomain->fields._X_k__BackingField;
  v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = objDomain->fields._Y_k__BackingField;
  v17 = v15;
  v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( v17 >= 0 )
    v23 = v17;
  else
    v23 = v17 + 1;
  v24 = v23 >> 1;
  if ( v18 >= 0 )
    v25 = v18;
  else
    v25 = v18 + 1;
  v39.fields.m_XMin = X_k__BackingField + (float)v24;
  v39.fields.m_YMin = Y_k__BackingField + (float)(v25 >> 1);
  v39.fields.m_Width = objDomain->fields._Width_k__BackingField;
  v39.fields.m_Height = objDomain->fields._Height_k__BackingField;
  UnityEngine_Rect___ctor(v39, v19, v20, v21, v22, &v38);
  v41.fields.m_XMin = UnityEngine_Rect__get_x(v40, &v38);
  m_XMin = v41.fields.m_XMin;
  v42.fields.m_XMin = UnityEngine_Rect__get_y(v41, &v38);
  v27 = v42.fields.m_XMin;
  v43.fields.m_XMin = UnityEngine_Rect__get_width(v42, &v38);
  v28 = v43.fields.m_XMin;
  height = UnityEngine_Rect__get_height(v43, &v38);
  v30 = m_XMin;
  if ( m_XMin == INFINITY )
    v30 = -INFINITY;
  v31 = (int)v30;
  v32 = -v27;
  if ( v27 != INFINITY )
    v32 = v27;
  v33 = (int)v32;
  v34 = v28 == INFINITY ? -v28 : v28;
  v35 = height == INFINITY ? -height : height;
  Pixels_34911264 = UnityEngine_Texture2D__GetPixels_34911264(closedPanelTexture, v31, v33, (int)v34, (int)v35, 0LL);
  if ( !v13 )
LABEL_32:
    sub_B170D4();
  UnityEngine_Texture2D__SetPixels_34912992(v13, Pixels_34911264, 0LL);
  UnityEngine_Texture2D__Apply_34913820(v13, 0LL);
  return v13;
}