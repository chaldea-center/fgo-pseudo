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
  if ( (byte_4AB2915 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1BAB41C(&ObjectDomain_TypeInfo, method);
    byte_4AB2915 = 1;
  }
  if ( !v3 )
    sub_1BAB678(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1BAB668(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_69691460; // x0
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
  if ( (byte_4AB2919 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Color___TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    sub_1BAB41C(&UnityEngine_Texture2D_TypeInfo, v5);
    byte_4AB2919 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_69691460 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v8 = 0LL;
  if ( ((unsigned __int8)Pixels_69691460 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_69691460 = UnityEngine_Texture2D__GetPixels_69691460(baseTexture, 0LL);
    if ( !Pixels_69691460 )
      goto LABEL_19;
    v9 = Pixels_69691460;
    Pixels_69691460 = (UnityEngine_Color_array *)sub_1BAB4C4(UnityEngine_Color___TypeInfo, Pixels_69691460->max_length);
    v10 = Pixels_69691460;
    if ( (int)*(_QWORD *)&v9->max_length >= 1 )
    {
      if ( !(unsigned int)*(_QWORD *)&v9->max_length )
LABEL_15:
        sub_1BAB680(Pixels_69691460, v7);
      v11 = 0LL;
      v12.n64_u64[0] = vdup_lane_s32(v21, 0).n64_u64[0];
      v13 = (unsigned int)*(_QWORD *)&v9->max_length - 1LL;
      p_r = &Pixels_69691460->m_Items[1].fields.r;
      v15 = &v9->m_Items[1].fields.r;
      while ( Pixels_69691460 )
      {
        if ( v11 >= Pixels_69691460->max_length )
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
      sub_1BAB678(Pixels_69691460, v7);
    }
LABEL_16:
    v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v8 = (UnityEngine_Texture2D_o *)sub_1BAB668(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69689072(v8, v18, v19, 0LL);
    if ( !v8 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_69689964(v8, v10, 0LL);
    UnityEngine_Texture2D__Apply_69690736(v8, 0LL);
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
  if ( (byte_4AB2917 & 1) == 0 )
  {
    sub_1BAB41C(&PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds);
    objDomain = (ObjectDomain_o *)sub_1BAB41C(&UnityEngine_Texture2D_TypeInfo, v9);
    byte_4AB2917 = 1;
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
  v43 = (UnityEngine_Texture2D_o *)sub_1BAB668(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_69689072(v43, v10, v11, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_69691460(closedPanelTexture, 0LL);
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
                    sub_1BAB680(objDomain, excludePanelUniqueIds);
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
    sub_1BAB678(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_69689964(v43, v31, 0LL);
  UnityEngine_Texture2D__Apply_69690736(v43, 0LL);
  return v41;
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
  int v20; // w9
  ObjectDomain_array *v21; // x21
  int v22; // w23
  int v23; // s8
  int v24; // w24
  int v25; // w25
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
  int v37; // w25
  float v38; // s9
  int v39; // s11
  float v40; // s10
  Il2CppObject *v41; // x0
  int v42; // w8
  int v43; // w9
  int v44; // w9
  float v45; // s0
  Il2CppObject *v46; // x23
  float v47; // s8
  float v48; // s10
  float v49; // s9
  int32_t v50; // w2
  int32_t v51; // w3
  float v52; // s8
  int v53; // w23
  int v54; // s9
  int v55; // w24
  int v56; // w25
  Il2CppObject *v57; // x0
  int v58; // w10
  int v59; // w9
  Il2CppObject *v60; // x22
  float v61; // s8
  float v62; // s10
  int32_t v63; // w2
  int32_t v64; // w3
  float v65; // s8
  int v66; // w22
  float v67; // s9
  int v68; // w23
  int v69; // w24
  float v70; // s10
  float v71; // s11
  int v72; // s12
  Il2CppObject *v73; // x0
  int v74; // w8
  int v75; // w8
  int v76; // w9
  float v77; // s8
  Il2CppObject *v78; // x19
  float v79; // s9
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v83; // x0
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AB2913 & 1) == 0 )
  {
    sub_1BAB41C(&ObjectDomain___TypeInfo, closedPanelTexture);
    sub_1BAB41C(&ObjectDomain_TypeInfo, v5);
    sub_1BAB41C(&float___TypeInfo, v6);
    byte_4AB2913 = 1;
  }
  v7 = sub_1BAB4C4(float___TypeInfo, 4LL);
  if ( !positionCalculator )
    goto LABEL_62;
  v9 = v7;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
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
  v84 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = v84.fields.y;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v84.fields.x);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_61;
  v14 = (int)v7 >= 0 ? v7 : (int)v7 + 1;
  *(float *)(v9 + 36) = y + (float)(v14 >> 1);
  v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  LODWORD(v16) = (unsigned int)SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 2u )
    goto LABEL_61;
  v17 = v15 >= 0 ? v15 : v15 + 1;
  *(float *)(v9 + 40) = (float)(v17 >> 1) - v16;
  v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  *(UnityEngine_Vector3_o *)(&v19 - 1) = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_61;
  v20 = v18 >= 0 ? v18 : v18 + 1;
  *(float *)(v9 + 44) = (float)(v20 >> 1) - v19;
  v21 = (ObjectDomain_array *)sub_1BAB4C4(ObjectDomain___TypeInfo, 4LL);
  v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v23 = *(_DWORD *)(v9 + 32);
  v24 = v7;
  v25 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v26 = (Il2CppObject *)sub_1BAB668(ObjectDomain_TypeInfo);
  v27 = 1 - v24;
  if ( v22 <= 0 )
    v28 = -v22;
  else
    v28 = 1 - v22;
  if ( v24 <= 0 )
    v27 = -v24;
  v29 = v26;
  v30 = (float)(v28 >> 1);
  v31 = (float)(v27 >> 1);
  System_Object___ctor(v26, 0LL);
  *(float *)&v29[1].klass = v30;
  *((float *)&v29[1].klass + 1) = v31;
  LODWORD(v29[1].monitor) = v23;
  *((float *)&v29[1].monitor + 1) = (float)v25;
  if ( !v21 )
LABEL_62:
    sub_1BAB678(v7, v8);
  v7 = sub_1BAB558(v29, v21->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( !v21->max_length )
    goto LABEL_61;
  v21->m_Items[0] = (ObjectDomain_o *)v29;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v21->m_Items, (int32_t)v29, v32, v33);
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
  v37 = v7;
  v39 = *(_DWORD *)(v9 + 36);
  v38 = *(float *)(v9 + 40);
  v40 = *(float *)(v9 + 32);
  v41 = (Il2CppObject *)sub_1BAB668(ObjectDomain_TypeInfo);
  v42 = 1 - v36;
  if ( v35 <= 0 )
    v43 = -v35;
  else
    v43 = 1 - v35;
  v44 = v43 >> 1;
  if ( v36 <= 0 )
    v42 = -v36;
  v45 = (float)v37 - v40;
  v46 = v41;
  v47 = v34 + (float)v44;
  v48 = (float)(v42 >> 1);
  v49 = v45 - v38;
  System_Object___ctor(v41, 0LL);
  *(float *)&v46[1].klass = v47;
  *((float *)&v46[1].klass + 1) = v48;
  *(float *)&v46[1].monitor = v49;
  HIDWORD(v46[1].monitor) = v39;
  v7 = sub_1BAB558(v46, v21->obj.klass->_1.element_class);
  if ( !v7 )
  {
LABEL_63:
    v83 = sub_1BAB69C();
    sub_1BAB544(v83, 0LL);
  }
  if ( v21->max_length <= 1
    || (v21->m_Items[1] = (ObjectDomain_o *)v46,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v46, v50, v51),
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v52 = *(float *)(v9 + 40),
        v53 = v7,
        v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
LABEL_61:
    sub_1BAB680(v7, v8);
  }
  v54 = *(_DWORD *)(v9 + 40);
  v55 = v7;
  v56 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v57 = (Il2CppObject *)sub_1BAB668(ObjectDomain_TypeInfo);
  if ( v53 >= 0 )
    v58 = v53;
  else
    v58 = v53 + 1;
  v59 = 1 - v55;
  if ( v55 <= 0 )
    v59 = -v55;
  v60 = v57;
  v61 = (float)(v58 >> 1) - v52;
  v62 = (float)(v59 >> 1);
  System_Object___ctor(v57, 0LL);
  *(float *)&v60[1].klass = v61;
  *((float *)&v60[1].klass + 1) = v62;
  LODWORD(v60[1].monitor) = v54;
  *((float *)&v60[1].monitor + 1) = (float)v56;
  v7 = sub_1BAB558(v60, v21->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( v21->max_length <= 2 )
    goto LABEL_61;
  v21->m_Items[2] = (ObjectDomain_o *)v60;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], (int32_t)v60, v63, v64);
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_61;
  v65 = *(float *)(v9 + 32);
  v66 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v9 + 24) <= 3u )
    goto LABEL_61;
  v67 = *(float *)(v9 + 44);
  v68 = v7;
  v7 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v9 + 24) < 4u )
    goto LABEL_61;
  v69 = v7;
  v70 = *(float *)(v9 + 32);
  v71 = *(float *)(v9 + 40);
  v72 = *(_DWORD *)(v9 + 44);
  v73 = (Il2CppObject *)sub_1BAB668(ObjectDomain_TypeInfo);
  if ( v66 <= 0 )
    v74 = -v66;
  else
    v74 = 1 - v66;
  v75 = v74 >> 1;
  if ( v68 >= 0 )
    v76 = v68;
  else
    v76 = v68 + 1;
  v77 = v65 + (float)v75;
  v78 = v73;
  v79 = (float)(v76 >> 1) - v67;
  System_Object___ctor(v73, 0LL);
  *(float *)&v78[1].klass = v77;
  *((float *)&v78[1].klass + 1) = v79;
  *(float *)&v78[1].monitor = (float)((float)v69 - v70) - v71;
  HIDWORD(v78[1].monitor) = v72;
  v7 = sub_1BAB558(v78, v21->obj.klass->_1.element_class);
  if ( !v7 )
    goto LABEL_63;
  if ( v21->max_length <= 3 )
    goto LABEL_61;
  v21->m_Items[3] = (ObjectDomain_o *)v78;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v78, v80, v81);
  return v21;
}


ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreatePanelOccupiedTotalDomain(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  SubmarinePanelPositionCalculator_o *v3; // x19
  unsigned int LeftBottomEdgePos; // s8
  float y; // s9
  float v6; // s10
  float v7; // s11
  float v8; // s12
  float v9; // s13
  __int64 v10; // x19
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v3 = positionCalculator;
  if ( (byte_4AB2914 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1BAB41C(&ObjectDomain_TypeInfo, closedPanelTexture);
    byte_4AB2914 = 1;
  }
  if ( !v3 )
    sub_1BAB678(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v12 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  y = v12.fields.y;
  v6 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL));
  v7 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL));
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL);
  v8 = RightTopEdgePos.fields.y;
  v14 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v9 = v14.fields.y;
  v10 = sub_1BAB668(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = LeftBottomEdgePos;
  *(float *)(v10 + 20) = y;
  *(float *)(v10 + 24) = v6 - v7;
  *(float *)(v10 + 28) = v8 - v9;
  return (ObjectDomain_o *)v10;
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
  UnityEngine_RenderTexture_o *Temporary_69708864; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AB2918 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Graphics_TypeInfo, *(_QWORD *)&resizeWidth);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    sub_1BAB41C(&UnityEngine_Texture2D_TypeInfo, v8);
    byte_4AB2918 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_69708864 = UnityEngine_RenderTexture__GetTemporary_69708864(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_69708864, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_69708864, 0LL);
    v9 = (UnityEngine_Texture2D_o *)sub_1BAB668(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69689072(v9, resizeWidth, resizeHeight, 0LL);
    if ( !v9 )
      sub_1BAB678(v12, v13);
    v15.fields.m_Height = (float)resizeHeight;
    v15.fields.m_Width = (float)resizeWidth;
    v15.fields.m_XMin = 0.0;
    v15.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_69691156(v9, v15, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_69690736(v9, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_69708864, 0LL);
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
  if ( (byte_4AB2916 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1BAB41C(&UnityEngine_Texture2D_TypeInfo, positionCalculator);
    byte_4AB2916 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0LL;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0LL;
  v8 = (UnityEngine_Texture2D_o *)sub_1BAB668(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_69689072(v8, v9, v10, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_69687760(closedPanelTexture, v24, v25, v26, v27, 0LL);
  if ( !v11 )
LABEL_35:
    sub_1BAB678(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_69689964(v11, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_69690736(v11, 0LL);
  return v11;
}