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
  __int64 v8; // x19

  v3 = positionCalculator;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4AFE9DA & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1BC3008(&ObjectDomain_TypeInfo, method);
    byte_4AFE9DA = 1;
  }
  if ( !v3 )
    sub_1BC3264(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1BC3254(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(float *)(v8 + 16) = x - (float)(v6 * 0.5);
  *(float *)(v8 + 20) = y - (float)(v7 * 0.5);
  *(float *)(v8 + 24) = v6;
  *(float *)(v8 + 28) = v7;
  return (ObjectDomain_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Color_array *Pixels_69925092; // x0
  __int64 v7; // x1
  UnityEngine_Texture2D_o *v8; // x21
  UnityEngine_Color_array *v9; // x21
  __int64 v10; // x2
  UnityEngine_Color_array *v11; // x20
  unsigned __int64 v12; // x8
  float32x2_t v13; // d0
  __int64 v14; // x9
  float *p_r; // x10
  float *v16; // x11
  float v17; // s3
  float v18; // s2
  int32_t v19; // w22
  int32_t v20; // w19
  int32x2_t v22; // [xsp+0h] [xbp-40h]

  v22.n64_u64[0] = *(unsigned __int64 *)&darkRate;
  if ( (byte_4AFE9DE & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Color___TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_4AFE9DE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_69925092 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v8 = 0LL;
  if ( ((unsigned __int8)Pixels_69925092 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_69925092 = UnityEngine_Texture2D__GetPixels_69925092(baseTexture, 0LL);
    if ( !Pixels_69925092 )
      goto LABEL_19;
    v9 = Pixels_69925092;
    Pixels_69925092 = (UnityEngine_Color_array *)sub_1BC30B0(UnityEngine_Color___TypeInfo, Pixels_69925092->max_length);
    v11 = Pixels_69925092;
    if ( (int)*(_QWORD *)&v9->max_length >= 1 )
    {
      if ( !(unsigned int)*(_QWORD *)&v9->max_length )
LABEL_15:
        sub_1BC326C(Pixels_69925092, v7, v10);
      v12 = 0LL;
      v13.n64_u64[0] = vdup_lane_s32(v22, 0).n64_u64[0];
      v14 = (unsigned int)*(_QWORD *)&v9->max_length - 1LL;
      p_r = &Pixels_69925092->m_Items[1].fields.r;
      v16 = &v9->m_Items[1].fields.r;
      while ( Pixels_69925092 )
      {
        if ( v12 >= Pixels_69925092->max_length )
          goto LABEL_15;
        v17 = *v16;
        v18 = *(v16 - 1) * v22.n64_f32[0];
        *(float32x2_t *)(p_r - 3) = vmul_f32(*(float32x2_t *)(v16 - 3), v13);
        *(p_r - 1) = v18;
        *p_r = v17;
        if ( v14 == v12 )
          goto LABEL_16;
        ++v12;
        p_r += 4;
        v16 += 4;
        if ( v12 >= v9->max_length )
          goto LABEL_15;
      }
LABEL_19:
      sub_1BC3264(Pixels_69925092, v7);
    }
LABEL_16:
    v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v8 = (UnityEngine_Texture2D_o *)sub_1BC3254(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69922704(v8, v19, v20, 0LL);
    if ( !v8 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_69923596(v8, v11, 0LL);
    UnityEngine_Texture2D__Apply_69924368(v8, 0LL);
  }
  return v8;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDomainSubtractTexture(
        ObjectDomain_o *objDomain,
        System_Int32_array *excludePanelUniqueIds,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  ObjectDomain_o *v8; // x22
  __int64 v9; // x1
  int32_t v10; // w24
  int32_t v11; // w25
  float X_k__BackingField; // s8
  int v13; // w0
  float Y_k__BackingField; // s9
  int v15; // w22
  int v16; // w0
  int v17; // w10
  int v18; // w10
  int v19; // w11
  float v20; // s0
  float v21; // s1
  unsigned int v22; // w21
  unsigned int v23; // w25
  float x; // s0
  float y; // s1
  int v26; // w22
  int v27; // w26
  int v28; // w27
  const MethodInfo *v29; // x3
  int32_t HorizontalPanelNum_k__BackingField; // w9
  UnityEngine_Color_array *v31; // x23
  int32_t VerticalPanelNum_k__BackingField; // w8
  int32_t v33; // w24
  unsigned int v34; // w29
  int32_t v35; // w25
  __int64 v36; // x2
  int v37; // w8
  unsigned int v38; // w9
  __int64 v39; // x10
  il2cpp_array_size_t v40; // w11
  Il2CppObject *v41; // x12
  UnityEngine_Texture2D_o *v42; // x19
  UnityEngine_Texture2D_o *v44; // [xsp+0h] [xbp-80h]
  unsigned int v45; // [xsp+Ch] [xbp-74h]

  v8 = objDomain;
  if ( (byte_4AFE9DC & 1) == 0 )
  {
    sub_1BC3008(&PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds);
    objDomain = (ObjectDomain_o *)sub_1BC3008(&UnityEngine_Texture2D_TypeInfo, v9);
    byte_4AFE9DC = 1;
  }
  if ( !v8 )
    goto LABEL_48;
  if ( v8->fields._Width_k__BackingField <= 0.0 || v8->fields._Height_k__BackingField <= 0.0 )
    return 0LL;
  if ( !closedPanelTexture )
    goto LABEL_48;
  v10 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, SubmarinePanelPositionCalculator_o *, UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr,
          positionCalculator,
          closedPanelTexture,
          method);
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v44 = (UnityEngine_Texture2D_o *)sub_1BC3254(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_69922704(v44, v10, v11, 0LL);
  X_k__BackingField = v8->fields._X_k__BackingField;
  v13 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v8->fields._Y_k__BackingField;
  v15 = v13;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v17 = v15 >= 0 ? v15 : v15 + 1;
  v18 = v17 >> 1;
  v19 = v16 >= 0 ? v16 : v16 + 1;
  v20 = X_k__BackingField + (float)v18;
  v21 = Y_k__BackingField + (float)(v19 >> 1);
  v22 = v20 == INFINITY ? 0x80000000 : (int)v20;
  v23 = v21 == INFINITY ? 0x80000000 : (int)v21;
  objDomain = (ObjectDomain_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                                  closedPanelTexture,
                                  closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !positionCalculator )
    goto LABEL_48;
  x = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  y = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v26 = (int)objDomain;
  if ( x == INFINITY )
    v27 = 0x80000000;
  else
    v27 = (int)x;
  if ( y == INFINITY )
    v28 = 0x80000000;
  else
    v28 = (int)y;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_69925092(closedPanelTexture, 0LL);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v31 = (UnityEngine_Color_array *)objDomain;
  if ( HorizontalPanelNum_k__BackingField >= 1 )
  {
    VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
    v33 = 0;
    v34 = v22 + v23 * v26;
    do
    {
      if ( VerticalPanelNum_k__BackingField >= 1 )
      {
        v35 = 0;
        v45 = v34;
        do
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(v33, v35, excludePanelUniqueIds, v29);
          if ( ((unsigned __int8)objDomain & 1) == 0 && v27 >= 1 )
          {
            v37 = 0;
            v38 = v34;
            do
            {
              if ( v28 >= 1 )
              {
                v39 = (unsigned int)v28;
                v40 = v38;
                if ( !v31 )
                  goto LABEL_48;
                do
                {
                  if ( v40 >= v31->max_length )
                    sub_1BC326C(objDomain, excludePanelUniqueIds, v36);
                  v41 = &v31->obj + (int)v40;
                  --v39;
                  v40 += v26;
                  v41[2].klass = 0LL;
                  v41[2].monitor = 0LL;
                }
                while ( v39 );
              }
              ++v37;
              ++v38;
            }
            while ( v37 != v27 );
          }
          VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
          ++v35;
          v34 += v28 * v26;
        }
        while ( v35 < VerticalPanelNum_k__BackingField );
        HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        v34 = v45;
      }
      ++v33;
      v34 += v27;
    }
    while ( v33 < HorizontalPanelNum_k__BackingField );
  }
  v42 = v44;
  if ( !v44 )
LABEL_48:
    sub_1BC3264(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_69923596(v44, v31, 0LL);
  UnityEngine_Texture2D__Apply_69924368(v44, 0LL);
  return v42;
}


ObjectDomain_array *__fastcall ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x20
  unsigned int LeftBottomEdgePos; // s0
  float v11; // s8
  __int64 v12; // x2
  int v13; // w8
  float y; // s8
  int v15; // w8
  int v16; // w8
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
  const MethodInfo *v47; // x3
  float v48; // s8
  int v49; // w23
  int v50; // s9
  int v51; // w24
  int v52; // w25
  Il2CppObject *v53; // x0
  int v54; // w10
  int v55; // w9
  Il2CppObject *v56; // x22
  float v57; // s8
  float v58; // s10
  const MethodInfo *v59; // x3
  float v60; // s8
  int v61; // w22
  float v62; // s9
  int v63; // w23
  int v64; // w24
  float v65; // s10
  float v66; // s11
  int v67; // s12
  Il2CppObject *v68; // x0
  int v69; // w8
  int v70; // w8
  int v71; // w9
  float v72; // s8
  Il2CppObject *v73; // x19
  float v74; // s9
  const MethodInfo *v75; // x3
  __int64 v77; // x0
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFE9D8 & 1) == 0 )
  {
    sub_1BC3008(&ObjectDomain___TypeInfo, closedPanelTexture);
    sub_1BC3008(&ObjectDomain_TypeInfo, v5);
    sub_1BC3008(&float___TypeInfo, v6);
    byte_4AFE9D8 = 1;
  }
  v7 = sub_1BC30B0(float___TypeInfo, 4LL);
  if ( !positionCalculator )
    goto LABEL_62;
  v9 = v7;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v8);
  if ( !closedPanelTexture )
    goto LABEL_62;
  v11 = *(float *)&LeftBottomEdgePos;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !v9 )
    goto LABEL_62;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v13 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 32) = v11 + (float)(v13 >> 1);
  v78 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v8);
  y = v78.fields.y;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v78.fields.x);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_61;
  v15 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 36) = y + (float)(v15 >> 1);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_61;
  v16 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 40) = (float)(v16 >> 1)
                      - COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v8));
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_61;
  v17 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  v18 = (float)(v17 >> 1);
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v8);
  *(float *)(v9 + 44) = v18 - RightTopEdgePos.fields.y;
  v19 = (ObjectDomain_array *)sub_1BC30B0(ObjectDomain___TypeInfo, 4LL);
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v21 = *(_DWORD *)(v9 + 32);
  v22 = v7;
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v24 = (Il2CppObject *)sub_1BC3254(ObjectDomain_TypeInfo);
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
  System_Object___ctor(v24, 0LL);
  *(float *)&v27[1].klass = v28;
  *((float *)&v27[1].klass + 1) = v29;
  LODWORD(v27[1].monitor) = v21;
  *((float *)&v27[1].monitor + 1) = (float)v23;
  if ( !v19 )
LABEL_62:
    sub_1BC3264(v7, v8);
  v7 = sub_1BC3144(v27, v19->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( !v19->max_length )
    goto LABEL_61;
  v19->m_Items[0] = (ObjectDomain_o *)v27;
  sub_1BC2FAC((CGThumbnailListItem_o *)v19->m_Items, (int32_t)v27, v12, v30);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v31 = *(float *)(v9 + 32);
  v32 = v7;
  v33 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) < 3u )
    goto LABEL_61;
  v34 = v7;
  v36 = *(_DWORD *)(v9 + 36);
  v35 = *(float *)(v9 + 40);
  v37 = *(float *)(v9 + 32);
  v38 = (Il2CppObject *)sub_1BC3254(ObjectDomain_TypeInfo);
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
  System_Object___ctor(v38, 0LL);
  *(float *)&v43[1].klass = v44;
  *((float *)&v43[1].klass + 1) = v45;
  *(float *)&v43[1].monitor = v46;
  HIDWORD(v43[1].monitor) = v36;
  v7 = sub_1BC3144(v43, v19->obj.klass->_1.element_class);
  if ( !v7 )
  {
LABEL_63:
    v77 = sub_1BC3288();
    sub_1BC3130(v77, 0LL);
  }
  if ( v19->max_length <= 1
    || (v19->m_Items[1] = (ObjectDomain_o *)v43,
        sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[1], (int32_t)v43, v12, v47),
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v48 = *(float *)(v9 + 40),
        v49 = v7,
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
LABEL_61:
    sub_1BC326C(v7, v8, v12);
  }
  v50 = *(_DWORD *)(v9 + 40);
  v51 = v7;
  v52 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v53 = (Il2CppObject *)sub_1BC3254(ObjectDomain_TypeInfo);
  if ( v49 >= 0 )
    v54 = v49;
  else
    v54 = v49 + 1;
  v55 = 1 - v51;
  if ( v51 <= 0 )
    v55 = -v51;
  v56 = v53;
  v57 = (float)(v54 >> 1) - v48;
  v58 = (float)(v55 >> 1);
  System_Object___ctor(v53, 0LL);
  *(float *)&v56[1].klass = v57;
  *((float *)&v56[1].klass + 1) = v58;
  LODWORD(v56[1].monitor) = v50;
  *((float *)&v56[1].monitor + 1) = (float)v52;
  v7 = sub_1BC3144(v56, v19->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( v19->max_length <= 2 )
    goto LABEL_61;
  v19->m_Items[2] = (ObjectDomain_o *)v56;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[2], (int32_t)v56, v12, v59);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v60 = *(float *)(v9 + 32);
  v61 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_61;
  v62 = *(float *)(v9 + 44);
  v63 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) < 4u )
    goto LABEL_61;
  v64 = v7;
  v65 = *(float *)(v9 + 32);
  v66 = *(float *)(v9 + 40);
  v67 = *(_DWORD *)(v9 + 44);
  v68 = (Il2CppObject *)sub_1BC3254(ObjectDomain_TypeInfo);
  if ( v61 <= 0 )
    v69 = -v61;
  else
    v69 = 1 - v61;
  v70 = v69 >> 1;
  if ( v63 >= 0 )
    v71 = v63;
  else
    v71 = v63 + 1;
  v72 = v60 + (float)v70;
  v73 = v68;
  v74 = (float)(v71 >> 1) - v62;
  System_Object___ctor(v68, 0LL);
  *(float *)&v73[1].klass = v72;
  *((float *)&v73[1].klass + 1) = v74;
  *(float *)&v73[1].monitor = (float)((float)v64 - v65) - v66;
  HIDWORD(v73[1].monitor) = v67;
  v7 = sub_1BC3144(v73, v19->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( v19->max_length <= 3 )
    goto LABEL_61;
  v19->m_Items[3] = (ObjectDomain_o *)v73;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v19->m_Items[3], (int32_t)v73, v12, v75);
  return v19;
}


ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreatePanelOccupiedTotalDomain(
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
  if ( (byte_4AFE9D9 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1BC3008(&ObjectDomain_TypeInfo, closedPanelTexture);
    byte_4AFE9D9 = 1;
  }
  if ( !v3 )
    sub_1BC3264(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v9 = sub_1BC3254(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(float *)(v9 + 16) = x;
  *(float *)(v9 + 20) = y;
  *(float *)(v9 + 24) = v7 - x;
  *(float *)(v9 + 28) = v8 - y;
  return (ObjectDomain_o *)v9;
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
  UnityEngine_RenderTexture_o *Temporary_69942564; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AFE9DD & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Graphics_TypeInfo, *(_QWORD *)&resizeWidth);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_4AFE9DD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_69942564 = UnityEngine_RenderTexture__GetTemporary_69942564(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_69942564, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_69942564, 0LL);
    v9 = (UnityEngine_Texture2D_o *)sub_1BC3254(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69922704(v9, resizeWidth, resizeHeight, 0LL);
    if ( !v9 )
      sub_1BC3264(v12, v13);
    v15.fields.m_Height = (float)resizeHeight;
    v15.fields.m_Width = (float)resizeWidth;
    v15.fields.m_XMin = 0.0;
    v15.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_69924788(v9, v15, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_69924368(v9, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_69942564, 0LL);
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
  if ( (byte_4AFE9DB & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1BC3008(&UnityEngine_Texture2D_TypeInfo, positionCalculator);
    byte_4AFE9DB = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0LL;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0LL;
  v8 = (UnityEngine_Texture2D_o *)sub_1BC3254(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_69922704(v8, v9, v10, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_35;
  X_k__BackingField = v5->fields._X_k__BackingField;
  v13 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v5->fields._Y_k__BackingField;
  v15 = v13;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_69921392(closedPanelTexture, v24, v25, v26, v27, 0LL);
  if ( !v11 )
LABEL_35:
    sub_1BC3264(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_69923596(v11, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_69924368(v11, 0LL);
  return v11;
}