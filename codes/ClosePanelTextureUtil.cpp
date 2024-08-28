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
  if ( (byte_4A058A6 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1B686D4(&ObjectDomain_TypeInfo, method);
    byte_4A058A6 = 1;
  }
  if ( !v3 )
    sub_1B68930(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1B68920(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_69062656; // x0
  __int64 v7; // x1
  UnityEngine_Texture2D_o *v8; // x21
  UnityEngine_Color_array *v9; // x21
  UnityEngine_Color_array *v10; // x20
  unsigned __int64 v11; // x8
  float32x2_t v12; // d0
  __int64 v13; // x9
  float *p_r; // x10
  float *v15; // x11
  float v16; // s3
  float v17; // s2
  int32_t v18; // w22
  int32_t v19; // w19
  int32x2_t v21; // [xsp+0h] [xbp-40h]

  v21.n64_u64[0] = *(unsigned __int64 *)&darkRate;
  if ( (byte_4A058AA & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Color___TypeInfo, method);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v4);
    sub_1B686D4(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_4A058AA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_69062656 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v8 = 0LL;
  if ( ((unsigned __int8)Pixels_69062656 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_69062656 = UnityEngine_Texture2D__GetPixels_69062656(baseTexture, 0LL);
    if ( !Pixels_69062656 )
      goto LABEL_19;
    v9 = Pixels_69062656;
    Pixels_69062656 = (UnityEngine_Color_array *)sub_1B6877C(UnityEngine_Color___TypeInfo, Pixels_69062656->max_length);
    v10 = Pixels_69062656;
    if ( (int)*(_QWORD *)&v9->max_length >= 1 )
    {
      if ( !(unsigned int)*(_QWORD *)&v9->max_length )
LABEL_15:
        sub_1B68938(Pixels_69062656, v7);
      v11 = 0LL;
      v12.n64_u64[0] = vdup_lane_s32(v21, 0).n64_u64[0];
      v13 = (unsigned int)*(_QWORD *)&v9->max_length - 1LL;
      p_r = &Pixels_69062656->m_Items[1].fields.r;
      v15 = &v9->m_Items[1].fields.r;
      while ( Pixels_69062656 )
      {
        if ( v11 >= Pixels_69062656->max_length )
          goto LABEL_15;
        v16 = *v15;
        v17 = *(v15 - 1) * v21.n64_f32[0];
        *(float32x2_t *)(p_r - 3) = vmul_f32(*(float32x2_t *)(v15 - 3), v12);
        *(p_r - 1) = v17;
        *p_r = v16;
        if ( v13 == v11 )
          goto LABEL_16;
        ++v11;
        p_r += 4;
        v15 += 4;
        if ( v11 >= v9->max_length )
          goto LABEL_15;
      }
LABEL_19:
      sub_1B68930(Pixels_69062656, v7);
    }
LABEL_16:
    v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v8 = (UnityEngine_Texture2D_o *)sub_1B68920(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69060268(v8, v18, v19, 0LL);
    if ( !v8 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_69061160(v8, v10, 0LL);
    UnityEngine_Texture2D__Apply_69061932(v8, 0LL);
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
  int v36; // w8
  unsigned int v37; // w9
  __int64 v38; // x10
  il2cpp_array_size_t v39; // w11
  Il2CppObject *v40; // x12
  UnityEngine_Texture2D_o *v41; // x19
  UnityEngine_Texture2D_o *v43; // [xsp+0h] [xbp-80h]
  unsigned int v44; // [xsp+Ch] [xbp-74h]

  v8 = objDomain;
  if ( (byte_4A058A8 & 1) == 0 )
  {
    sub_1B686D4(&PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds);
    objDomain = (ObjectDomain_o *)sub_1B686D4(&UnityEngine_Texture2D_TypeInfo, v9);
    byte_4A058A8 = 1;
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
  v43 = (UnityEngine_Texture2D_o *)sub_1B68920(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_69060268(v43, v10, v11, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_69062656(closedPanelTexture, 0LL);
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
        v44 = v34;
        do
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(v33, v35, excludePanelUniqueIds, v29);
          if ( ((unsigned __int8)objDomain & 1) == 0 && v27 >= 1 )
          {
            v36 = 0;
            v37 = v34;
            do
            {
              if ( v28 >= 1 )
              {
                v38 = (unsigned int)v28;
                v39 = v37;
                if ( !v31 )
                  goto LABEL_48;
                do
                {
                  if ( v39 >= v31->max_length )
                    sub_1B68938(objDomain, excludePanelUniqueIds);
                  v40 = &v31->obj + (int)v39;
                  --v38;
                  v39 += v26;
                  v40[2].klass = 0LL;
                  v40[2].monitor = 0LL;
                }
                while ( v38 );
              }
              ++v36;
              ++v37;
            }
            while ( v36 != v27 );
          }
          VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
          ++v35;
          v34 += v28 * v26;
        }
        while ( v35 < VerticalPanelNum_k__BackingField );
        HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        v34 = v44;
      }
      ++v33;
      v34 += v27;
    }
    while ( v33 < HorizontalPanelNum_k__BackingField );
  }
  v41 = v43;
  if ( !v43 )
LABEL_48:
    sub_1B68930(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_69061160(v43, v31, 0LL);
  UnityEngine_Texture2D__Apply_69061932(v43, 0LL);
  return v41;
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
  int v12; // w8
  float y; // s8
  int v14; // w8
  int v15; // w8
  int v16; // w8
  float v17; // s8
  ObjectDomain_array *v18; // x21
  int v19; // w23
  int v20; // s8
  int v21; // w24
  int v22; // w25
  Il2CppObject *v23; // x0
  int v24; // w8
  int v25; // w9
  Il2CppObject *v26; // x22
  float v27; // s9
  float v28; // s10
  int32_t v29; // w2
  int32_t v30; // w3
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
  int32_t v47; // w2
  int32_t v48; // w3
  float v49; // s8
  int v50; // w23
  int v51; // s9
  int v52; // w24
  int v53; // w25
  Il2CppObject *v54; // x0
  int v55; // w10
  int v56; // w9
  Il2CppObject *v57; // x22
  float v58; // s8
  float v59; // s10
  int32_t v60; // w2
  int32_t v61; // w3
  float v62; // s8
  int v63; // w22
  float v64; // s9
  int v65; // w23
  int v66; // w24
  float v67; // s10
  float v68; // s11
  int v69; // s12
  Il2CppObject *v70; // x0
  int v71; // w8
  int v72; // w8
  int v73; // w9
  float v74; // s8
  Il2CppObject *v75; // x19
  float v76; // s9
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v80; // x0
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A058A4 & 1) == 0 )
  {
    sub_1B686D4(&ObjectDomain___TypeInfo, closedPanelTexture);
    sub_1B686D4(&ObjectDomain_TypeInfo, v5);
    sub_1B686D4(&float___TypeInfo, v6);
    byte_4A058A4 = 1;
  }
  v7 = sub_1B6877C(float___TypeInfo, 4LL);
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
  v12 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 32) = v11 + (float)(v12 >> 1);
  v81 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v8);
  y = v81.fields.y;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v81.fields.x);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_61;
  v14 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 36) = y + (float)(v14 >> 1);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_61;
  v15 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 40) = (float)(v15 >> 1)
                      - COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v8));
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_61;
  v16 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  v17 = (float)(v16 >> 1);
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v8);
  *(float *)(v9 + 44) = v17 - RightTopEdgePos.fields.y;
  v18 = (ObjectDomain_array *)sub_1B6877C(ObjectDomain___TypeInfo, 4LL);
  v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v20 = *(_DWORD *)(v9 + 32);
  v21 = v7;
  v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v23 = (Il2CppObject *)sub_1B68920(ObjectDomain_TypeInfo);
  v24 = 1 - v21;
  if ( v19 <= 0 )
    v25 = -v19;
  else
    v25 = 1 - v19;
  if ( v21 <= 0 )
    v24 = -v21;
  v26 = v23;
  v27 = (float)(v25 >> 1);
  v28 = (float)(v24 >> 1);
  System_Object___ctor(v23, 0LL);
  *(float *)&v26[1].klass = v27;
  *((float *)&v26[1].klass + 1) = v28;
  LODWORD(v26[1].monitor) = v20;
  *((float *)&v26[1].monitor + 1) = (float)v22;
  if ( !v18 )
LABEL_62:
    sub_1B68930(v7, v8);
  v7 = sub_1B68810(v26, v18->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( !v18->max_length )
    goto LABEL_61;
  v18->m_Items[0] = (ObjectDomain_o *)v26;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v18->m_Items, (int32_t)v26, v29, v30);
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
  v38 = (Il2CppObject *)sub_1B68920(ObjectDomain_TypeInfo);
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
  v7 = sub_1B68810(v43, v18->obj.klass->_1.element_class);
  if ( !v7 )
  {
LABEL_63:
    v80 = sub_1B68954();
    sub_1B687FC(v80, 0LL);
  }
  if ( v18->max_length <= 1
    || (v18->m_Items[1] = (ObjectDomain_o *)v43,
        sub_1B68678((ServantStatusBattleListViewItem_o *)&v18->m_Items[1], (int32_t)v43, v47, v48),
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v49 = *(float *)(v9 + 40),
        v50 = v7,
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
LABEL_61:
    sub_1B68938(v7, v8);
  }
  v51 = *(_DWORD *)(v9 + 40);
  v52 = v7;
  v53 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v54 = (Il2CppObject *)sub_1B68920(ObjectDomain_TypeInfo);
  if ( v50 >= 0 )
    v55 = v50;
  else
    v55 = v50 + 1;
  v56 = 1 - v52;
  if ( v52 <= 0 )
    v56 = -v52;
  v57 = v54;
  v58 = (float)(v55 >> 1) - v49;
  v59 = (float)(v56 >> 1);
  System_Object___ctor(v54, 0LL);
  *(float *)&v57[1].klass = v58;
  *((float *)&v57[1].klass + 1) = v59;
  LODWORD(v57[1].monitor) = v51;
  *((float *)&v57[1].monitor + 1) = (float)v53;
  v7 = sub_1B68810(v57, v18->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( v18->max_length <= 2 )
    goto LABEL_61;
  v18->m_Items[2] = (ObjectDomain_o *)v57;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v18->m_Items[2], (int32_t)v57, v60, v61);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v62 = *(float *)(v9 + 32);
  v63 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_61;
  v64 = *(float *)(v9 + 44);
  v65 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) < 4u )
    goto LABEL_61;
  v66 = v7;
  v67 = *(float *)(v9 + 32);
  v68 = *(float *)(v9 + 40);
  v69 = *(_DWORD *)(v9 + 44);
  v70 = (Il2CppObject *)sub_1B68920(ObjectDomain_TypeInfo);
  if ( v63 <= 0 )
    v71 = -v63;
  else
    v71 = 1 - v63;
  v72 = v71 >> 1;
  if ( v65 >= 0 )
    v73 = v65;
  else
    v73 = v65 + 1;
  v74 = v62 + (float)v72;
  v75 = v70;
  v76 = (float)(v73 >> 1) - v64;
  System_Object___ctor(v70, 0LL);
  *(float *)&v75[1].klass = v74;
  *((float *)&v75[1].klass + 1) = v76;
  *(float *)&v75[1].monitor = (float)((float)v66 - v67) - v68;
  HIDWORD(v75[1].monitor) = v69;
  v7 = sub_1B68810(v75, v18->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( v18->max_length <= 3 )
    goto LABEL_61;
  v18->m_Items[3] = (ObjectDomain_o *)v75;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v18->m_Items[3], (int32_t)v75, v77, v78);
  return v18;
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
  if ( (byte_4A058A5 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1B686D4(&ObjectDomain_TypeInfo, closedPanelTexture);
    byte_4A058A5 = 1;
  }
  if ( !v3 )
    sub_1B68930(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v9 = sub_1B68920(ObjectDomain_TypeInfo);
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
  UnityEngine_RenderTexture_o *Temporary_69080060; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A058A9 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Graphics_TypeInfo, *(_QWORD *)&resizeWidth);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v7);
    sub_1B686D4(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_4A058A9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_69080060 = UnityEngine_RenderTexture__GetTemporary_69080060(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_69080060, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_69080060, 0LL);
    v9 = (UnityEngine_Texture2D_o *)sub_1B68920(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69060268(v9, resizeWidth, resizeHeight, 0LL);
    if ( !v9 )
      sub_1B68930(v12, v13);
    v15.fields.m_Height = (float)resizeHeight;
    v15.fields.m_Width = (float)resizeWidth;
    v15.fields.m_XMin = 0.0;
    v15.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_69062352(v9, v15, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_69061932(v9, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_69080060, 0LL);
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
  if ( (byte_4A058A7 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1B686D4(&UnityEngine_Texture2D_TypeInfo, positionCalculator);
    byte_4A058A7 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0LL;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0LL;
  v8 = (UnityEngine_Texture2D_o *)sub_1B68920(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_69060268(v8, v9, v10, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_69058956(closedPanelTexture, v24, v25, v26, v27, 0LL);
  if ( !v11 )
LABEL_35:
    sub_1B68930(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_69061160(v11, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_69061932(v11, 0LL);
  return v11;
}