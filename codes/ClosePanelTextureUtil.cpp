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
  __int64 v9; // x19

  v4 = positionCalculator;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_49F90A0 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1B640C8(&ObjectDomain_TypeInfo, method);
    byte_49F90A0 = 1;
  }
  if ( !v4 )
    sub_1B64324(positionCalculator);
  v7 = v4->fields._PanelUnitSize_k__BackingField.fields.x;
  v8 = v4->fields._PanelUnitSize_k__BackingField.fields.y;
  v9 = sub_1B64314(ObjectDomain_TypeInfo, method, v3);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(float *)(v9 + 16) = x - (float)(v7 * 0.5);
  *(float *)(v9 + 20) = y - (float)(v8 * 0.5);
  *(float *)(v9 + 24) = v7;
  *(float *)(v9 + 28) = v8;
  return (ObjectDomain_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Color_array *Pixels_69018576; // x0
  UnityEngine_Texture2D_o *v7; // x21
  UnityEngine_Color_array *v8; // x21
  __int64 v9; // x1
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
  __int64 v20; // x1
  __int64 v21; // x2
  int32x2_t v23; // [xsp+0h] [xbp-40h]

  v23.n64_u64[0] = *(unsigned __int64 *)&darkRate;
  if ( (byte_49F90A4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Color___TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_49F90A4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_69018576 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v7 = 0LL;
  if ( ((unsigned __int8)Pixels_69018576 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_69018576 = UnityEngine_Texture2D__GetPixels_69018576(baseTexture, 0LL);
    if ( !Pixels_69018576 )
      goto LABEL_19;
    v8 = Pixels_69018576;
    Pixels_69018576 = (UnityEngine_Color_array *)sub_1B64170(UnityEngine_Color___TypeInfo, Pixels_69018576->max_length);
    v10 = Pixels_69018576;
    if ( (int)*(_QWORD *)&v8->max_length >= 1 )
    {
      if ( !(unsigned int)*(_QWORD *)&v8->max_length )
LABEL_15:
        sub_1B6432C(Pixels_69018576, v9);
      v11 = 0LL;
      v12.n64_u64[0] = vdup_lane_s32(v23, 0).n64_u64[0];
      v13 = (unsigned int)*(_QWORD *)&v8->max_length - 1LL;
      p_r = &Pixels_69018576->m_Items[1].fields.r;
      v15 = &v8->m_Items[1].fields.r;
      while ( Pixels_69018576 )
      {
        if ( v11 >= Pixels_69018576->max_length )
          goto LABEL_15;
        v16 = *v15;
        v17 = *(v15 - 1) * v23.n64_f32[0];
        *(float32x2_t *)(p_r - 3) = vmul_f32(*(float32x2_t *)(v15 - 3), v12);
        *(p_r - 1) = v17;
        *p_r = v16;
        if ( v13 == v11 )
          goto LABEL_16;
        ++v11;
        p_r += 4;
        v15 += 4;
        if ( v11 >= v8->max_length )
          goto LABEL_15;
      }
LABEL_19:
      sub_1B64324(Pixels_69018576);
    }
LABEL_16:
    v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v7 = (UnityEngine_Texture2D_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, v20, v21);
    UnityEngine_Texture2D___ctor_69016188(v7, v18, v19, 0LL);
    if ( !v7 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_69017080(v7, v10, 0LL);
    UnityEngine_Texture2D__Apply_69017852(v7, 0LL);
  }
  return v7;
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
  __int64 v12; // x1
  __int64 v13; // x2
  float X_k__BackingField; // s8
  int v15; // w0
  float Y_k__BackingField; // s9
  int v17; // w22
  int v18; // w0
  int v19; // w10
  int v20; // w10
  int v21; // w11
  float v22; // s0
  float v23; // s1
  unsigned int v24; // w21
  unsigned int v25; // w25
  float x; // s0
  float y; // s1
  int v28; // w22
  int v29; // w26
  int v30; // w27
  const MethodInfo *v31; // x3
  int32_t HorizontalPanelNum_k__BackingField; // w9
  UnityEngine_Color_array *v33; // x23
  int32_t VerticalPanelNum_k__BackingField; // w8
  int32_t v35; // w24
  unsigned int v36; // w29
  int32_t v37; // w25
  __int64 v38; // x1
  int v39; // w8
  unsigned int v40; // w9
  __int64 v41; // x10
  il2cpp_array_size_t v42; // w11
  Il2CppObject *v43; // x12
  UnityEngine_Texture2D_o *v44; // x19
  UnityEngine_Texture2D_o *v46; // [xsp+0h] [xbp-80h]
  unsigned int v47; // [xsp+Ch] [xbp-74h]

  v8 = objDomain;
  if ( (byte_49F90A2 & 1) == 0 )
  {
    sub_1B640C8(&PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds);
    objDomain = (ObjectDomain_o *)sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, v9);
    byte_49F90A2 = 1;
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
  v46 = (UnityEngine_Texture2D_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, v12, v13);
  UnityEngine_Texture2D___ctor_69016188(v46, v10, v11, 0LL);
  X_k__BackingField = v8->fields._X_k__BackingField;
  v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v8->fields._Y_k__BackingField;
  v17 = v15;
  v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v19 = v17 >= 0 ? v17 : v17 + 1;
  v20 = v19 >> 1;
  v21 = v18 >= 0 ? v18 : v18 + 1;
  v22 = X_k__BackingField + (float)v20;
  v23 = Y_k__BackingField + (float)(v21 >> 1);
  v24 = v22 == INFINITY ? 0x80000000 : (int)v22;
  v25 = v23 == INFINITY ? 0x80000000 : (int)v23;
  objDomain = (ObjectDomain_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                                  closedPanelTexture,
                                  closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !positionCalculator )
    goto LABEL_48;
  x = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  y = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v28 = (int)objDomain;
  if ( x == INFINITY )
    v29 = 0x80000000;
  else
    v29 = (int)x;
  if ( y == INFINITY )
    v30 = 0x80000000;
  else
    v30 = (int)y;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_69018576(closedPanelTexture, 0LL);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v33 = (UnityEngine_Color_array *)objDomain;
  if ( HorizontalPanelNum_k__BackingField >= 1 )
  {
    VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
    v35 = 0;
    v36 = v24 + v25 * v28;
    do
    {
      if ( VerticalPanelNum_k__BackingField >= 1 )
      {
        v37 = 0;
        v47 = v36;
        do
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(v35, v37, excludePanelUniqueIds, v31);
          if ( ((unsigned __int8)objDomain & 1) == 0 && v29 >= 1 )
          {
            v39 = 0;
            v40 = v36;
            do
            {
              if ( v30 >= 1 )
              {
                v41 = (unsigned int)v30;
                v42 = v40;
                if ( !v33 )
                  goto LABEL_48;
                do
                {
                  if ( v42 >= v33->max_length )
                    sub_1B6432C(objDomain, v38);
                  v43 = &v33->obj + (int)v42;
                  --v41;
                  v42 += v28;
                  v43[2].klass = 0LL;
                  v43[2].monitor = 0LL;
                }
                while ( v41 );
              }
              ++v39;
              ++v40;
            }
            while ( v39 != v29 );
          }
          VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
          ++v37;
          v36 += v30 * v28;
        }
        while ( v37 < VerticalPanelNum_k__BackingField );
        HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        v36 = v47;
      }
      ++v35;
      v36 += v29;
    }
    while ( v35 < HorizontalPanelNum_k__BackingField );
  }
  v44 = v46;
  if ( !v46 )
LABEL_48:
    sub_1B64324(objDomain);
  UnityEngine_Texture2D__SetPixels_69017080(v46, v33, 0LL);
  UnityEngine_Texture2D__Apply_69017852(v46, 0LL);
  return v44;
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
  const MethodInfo *v12; // x1
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
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x0
  int v27; // w8
  int v28; // w9
  Il2CppObject *v29; // x22
  float v30; // s9
  float v31; // s10
  int32_t v32; // w2
  int32_t v33; // w3
  float v34; // s8
  int v35; // w22
  int v36; // w24
  __int64 v37; // x2
  int v38; // w25
  float v39; // s9
  int v40; // s11
  float v41; // s10
  Il2CppObject *v42; // x0
  int v43; // w8
  int v44; // w9
  int v45; // w9
  float v46; // s0
  Il2CppObject *v47; // x23
  float v48; // s8
  float v49; // s10
  float v50; // s9
  int32_t v51; // w2
  int32_t v52; // w3
  float v53; // s8
  int v54; // w23
  int v55; // s9
  int v56; // w24
  int v57; // w25
  __int64 v58; // x1
  __int64 v59; // x2
  Il2CppObject *v60; // x0
  int v61; // w10
  int v62; // w9
  Il2CppObject *v63; // x22
  float v64; // s8
  float v65; // s10
  int32_t v66; // w2
  int32_t v67; // w3
  float v68; // s8
  int v69; // w22
  float v70; // s9
  int v71; // w23
  __int64 v72; // x2
  int v73; // w24
  float v74; // s10
  float v75; // s11
  int v76; // s12
  Il2CppObject *v77; // x0
  int v78; // w8
  int v79; // w8
  int v80; // w9
  float v81; // s8
  Il2CppObject *v82; // x19
  float v83; // s9
  int32_t v84; // w2
  int32_t v85; // w3
  __int64 v87; // x0
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F909E & 1) == 0 )
  {
    sub_1B640C8(&ObjectDomain___TypeInfo, closedPanelTexture);
    sub_1B640C8(&ObjectDomain_TypeInfo, v5);
    sub_1B640C8(&float___TypeInfo, v6);
    byte_49F909E = 1;
  }
  v7 = sub_1B64170(float___TypeInfo, 4LL);
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
  v88 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, v12);
  y = v88.fields.y;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v88.fields.x);
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
                      - COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v12));
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_61;
  v17 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  v18 = (float)(v17 >> 1);
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, v12);
  *(float *)(v9 + 44) = v18 - RightTopEdgePos.fields.y;
  v19 = (ObjectDomain_array *)sub_1B64170(ObjectDomain___TypeInfo, 4LL);
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
  v26 = (Il2CppObject *)sub_1B64314(ObjectDomain_TypeInfo, v24, v25);
  v27 = 1 - v22;
  if ( v20 <= 0 )
    v28 = -v20;
  else
    v28 = 1 - v20;
  if ( v22 <= 0 )
    v27 = -v22;
  v29 = v26;
  v30 = (float)(v28 >> 1);
  v31 = (float)(v27 >> 1);
  System_Object___ctor(v26, 0LL);
  *(float *)&v29[1].klass = v30;
  *((float *)&v29[1].klass + 1) = v31;
  LODWORD(v29[1].monitor) = v21;
  *((float *)&v29[1].monitor + 1) = (float)v23;
  if ( !v19 )
LABEL_62:
    sub_1B64324(v7);
  v7 = sub_1B64204(v29, v19->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( !v19->max_length )
    goto LABEL_61;
  v19->m_Items[0] = (ObjectDomain_o *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v19->m_Items, (int32_t)v29, v32, v33);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v34 = *(float *)(v9 + 32);
  v35 = v7;
  v36 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) < 3u )
    goto LABEL_61;
  v38 = v7;
  v40 = *(_DWORD *)(v9 + 36);
  v39 = *(float *)(v9 + 40);
  v41 = *(float *)(v9 + 32);
  v42 = (Il2CppObject *)sub_1B64314(ObjectDomain_TypeInfo, v12, v37);
  v43 = 1 - v36;
  if ( v35 <= 0 )
    v44 = -v35;
  else
    v44 = 1 - v35;
  v45 = v44 >> 1;
  if ( v36 <= 0 )
    v43 = -v36;
  v46 = (float)v38 - v41;
  v47 = v42;
  v48 = v34 + (float)v45;
  v49 = (float)(v43 >> 1);
  v50 = v46 - v39;
  System_Object___ctor(v42, 0LL);
  *(float *)&v47[1].klass = v48;
  *((float *)&v47[1].klass + 1) = v49;
  *(float *)&v47[1].monitor = v50;
  HIDWORD(v47[1].monitor) = v40;
  v7 = sub_1B64204(v47, v19->obj.klass->_1.element_class);
  if ( !v7 )
  {
LABEL_63:
    v87 = sub_1B64348();
    sub_1B641F0(v87, 0LL);
  }
  if ( v19->max_length <= 1
    || (v19->m_Items[1] = (ObjectDomain_o *)v47,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->m_Items[1], (int32_t)v47, v51, v52),
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v53 = *(float *)(v9 + 40),
        v54 = v7,
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
LABEL_61:
    sub_1B6432C(v7, v12);
  }
  v55 = *(_DWORD *)(v9 + 40);
  v56 = v7;
  v57 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v60 = (Il2CppObject *)sub_1B64314(ObjectDomain_TypeInfo, v58, v59);
  if ( v54 >= 0 )
    v61 = v54;
  else
    v61 = v54 + 1;
  v62 = 1 - v56;
  if ( v56 <= 0 )
    v62 = -v56;
  v63 = v60;
  v64 = (float)(v61 >> 1) - v53;
  v65 = (float)(v62 >> 1);
  System_Object___ctor(v60, 0LL);
  *(float *)&v63[1].klass = v64;
  *((float *)&v63[1].klass + 1) = v65;
  LODWORD(v63[1].monitor) = v55;
  *((float *)&v63[1].monitor + 1) = (float)v57;
  v7 = sub_1B64204(v63, v19->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( v19->max_length <= 2 )
    goto LABEL_61;
  v19->m_Items[2] = (ObjectDomain_o *)v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->m_Items[2], (int32_t)v63, v66, v67);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v68 = *(float *)(v9 + 32);
  v69 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_61;
  v70 = *(float *)(v9 + 44);
  v71 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) < 4u )
    goto LABEL_61;
  v73 = v7;
  v74 = *(float *)(v9 + 32);
  v75 = *(float *)(v9 + 40);
  v76 = *(_DWORD *)(v9 + 44);
  v77 = (Il2CppObject *)sub_1B64314(ObjectDomain_TypeInfo, v12, v72);
  if ( v69 <= 0 )
    v78 = -v69;
  else
    v78 = 1 - v69;
  v79 = v78 >> 1;
  if ( v71 >= 0 )
    v80 = v71;
  else
    v80 = v71 + 1;
  v81 = v68 + (float)v79;
  v82 = v77;
  v83 = (float)(v80 >> 1) - v70;
  System_Object___ctor(v77, 0LL);
  *(float *)&v82[1].klass = v81;
  *((float *)&v82[1].klass + 1) = v83;
  *(float *)&v82[1].monitor = (float)((float)v73 - v74) - v75;
  HIDWORD(v82[1].monitor) = v76;
  v7 = sub_1B64204(v82, v19->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( v19->max_length <= 3 )
    goto LABEL_61;
  v19->m_Items[3] = (ObjectDomain_o *)v82;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->m_Items[3], (int32_t)v82, v84, v85);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x19
  UnityEngine_Vector3_o LeftBottomEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4

  v3 = positionCalculator;
  if ( (byte_49F909F & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1B640C8(&ObjectDomain_TypeInfo, closedPanelTexture);
    byte_49F909F = 1;
  }
  if ( !v3 )
    sub_1B64324(positionCalculator);
  LeftBottomEdgePos = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(
                        v3,
                        (const MethodInfo *)closedPanelTexture);
  x = LeftBottomEdgePos.fields.x;
  y = LeftBottomEdgePos.fields.y;
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, v6);
  v7 = RightTopEdgePos.fields.x;
  v8 = RightTopEdgePos.fields.y;
  v11 = sub_1B64314(ObjectDomain_TypeInfo, v9, v10);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(float *)(v11 + 16) = x;
  *(float *)(v11 + 20) = y;
  *(float *)(v11 + 24) = v7 - x;
  *(float *)(v11 + 28) = v8 - y;
  return (ObjectDomain_o *)v11;
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
  UnityEngine_RenderTexture_o *Temporary_69035980; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x0
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F90A3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Graphics_TypeInfo, *(_QWORD *)&resizeWidth);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_49F90A3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_69035980 = UnityEngine_RenderTexture__GetTemporary_69035980(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_69035980, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_69035980, 0LL);
    v9 = (UnityEngine_Texture2D_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, v12, v13);
    UnityEngine_Texture2D___ctor_69016188(v9, resizeWidth, resizeHeight, 0LL);
    if ( !v9 )
      sub_1B64324(v14);
    v16.fields.m_Height = (float)resizeHeight;
    v16.fields.m_Width = (float)resizeWidth;
    v16.fields.m_XMin = 0.0;
    v16.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_69018272(v9, v16, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_69017852(v9, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_69035980, 0LL);
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
  if ( (byte_49F90A1 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, positionCalculator);
    byte_49F90A1 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0LL;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0LL;
  v8 = (UnityEngine_Texture2D_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, positionCalculator, closedPanelTexture);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_69016188(v8, v9, v10, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_69014876(closedPanelTexture, v24, v25, v26, v27, 0LL);
  if ( !v11 )
LABEL_35:
    sub_1B64324(objDomain);
  UnityEngine_Texture2D__SetPixels_69017080(v11, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_69017852(v11, 0LL);
  return v11;
}