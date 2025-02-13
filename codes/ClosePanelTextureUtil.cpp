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
  if ( (byte_4BD9055 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C21E38(&ObjectDomain_TypeInfo);
    byte_4BD9055 = 1;
  }
  if ( !v3 )
    sub_1C22094(positionCalculator, method);
  v6 = v3->fields._PanelUnitSize_k__BackingField.fields.x;
  v7 = v3->fields._PanelUnitSize_k__BackingField.fields.y;
  v8 = sub_1C22084(ObjectDomain_TypeInfo);
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
  UnityEngine_Color_array *Pixels_70760364; // x0
  __int64 v5; // x1
  UnityEngine_Texture2D_o *v6; // x21
  UnityEngine_Color_array *v7; // x21
  UnityEngine_Color_array *v8; // x20
  unsigned __int64 v9; // x8
  float32x2_t v10; // d0
  __int64 v11; // x9
  float *p_r; // x10
  float *v13; // x11
  float v14; // s3
  float v15; // s2
  int32_t v16; // w22
  int32_t v17; // w19
  int32x2_t v19; // [xsp+0h] [xbp-40h]

  v19.n64_u64[0] = *(unsigned __int64 *)&darkRate;
  if ( (byte_4BD9059 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Color___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    byte_4BD9059 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Pixels_70760364 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v6 = 0LL;
  if ( ((unsigned __int8)Pixels_70760364 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_70760364 = UnityEngine_Texture2D__GetPixels_70760364(baseTexture, 0LL);
    if ( !Pixels_70760364 )
      goto LABEL_19;
    v7 = Pixels_70760364;
    Pixels_70760364 = (UnityEngine_Color_array *)sub_1C21EE0(UnityEngine_Color___TypeInfo, Pixels_70760364->max_length);
    v8 = Pixels_70760364;
    if ( (int)*(_QWORD *)&v7->max_length >= 1 )
    {
      if ( !(unsigned int)*(_QWORD *)&v7->max_length )
LABEL_15:
        sub_1C2209C(Pixels_70760364, v5);
      v9 = 0LL;
      v10.n64_u64[0] = vdup_lane_s32(v19, 0).n64_u64[0];
      v11 = (unsigned int)*(_QWORD *)&v7->max_length - 1LL;
      p_r = &Pixels_70760364->m_Items[1].fields.r;
      v13 = &v7->m_Items[1].fields.r;
      while ( Pixels_70760364 )
      {
        if ( v9 >= Pixels_70760364->max_length )
          goto LABEL_15;
        v14 = *v13;
        v15 = *(v13 - 1) * v19.n64_f32[0];
        *(float32x2_t *)(p_r - 3) = vmul_f32(*(float32x2_t *)(v13 - 3), v10);
        *(p_r - 1) = v15;
        *p_r = v14;
        if ( v11 == v9 )
          goto LABEL_16;
        ++v9;
        p_r += 4;
        v13 += 4;
        if ( v9 >= v7->max_length )
          goto LABEL_15;
      }
LABEL_19:
      sub_1C22094(Pixels_70760364, v5);
    }
LABEL_16:
    v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v6 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_70757976(v6, v16, v17, 0LL);
    if ( !v6 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_70758868(v6, v8, 0LL);
    UnityEngine_Texture2D__Apply_70759640(v6, 0LL);
  }
  return v6;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDomainSubtractTexture(
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
  int v16; // w10
  int v17; // w10
  int v18; // w11
  float v19; // s0
  float v20; // s1
  unsigned int v21; // w21
  unsigned int v22; // w25
  float x; // s0
  float y; // s1
  int v25; // w22
  int v26; // w26
  int v27; // w27
  const MethodInfo *v28; // x3
  int32_t HorizontalPanelNum_k__BackingField; // w9
  UnityEngine_Color_array *v30; // x23
  int32_t VerticalPanelNum_k__BackingField; // w8
  int32_t v32; // w24
  unsigned int v33; // w29
  int32_t v34; // w25
  int v35; // w8
  unsigned int v36; // w9
  __int64 v37; // x10
  il2cpp_array_size_t v38; // w11
  Il2CppObject *v39; // x12
  UnityEngine_Texture2D_o *v40; // x19
  UnityEngine_Texture2D_o *v42; // [xsp+0h] [xbp-80h]
  unsigned int v43; // [xsp+Ch] [xbp-74h]

  v8 = objDomain;
  if ( (byte_4BD9057 & 1) == 0 )
  {
    sub_1C21E38(&PanelUniqueIDUtil_TypeInfo);
    objDomain = (ObjectDomain_o *)sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    byte_4BD9057 = 1;
  }
  if ( !v8 )
    goto LABEL_48;
  if ( v8->fields._Width_k__BackingField <= 0.0 || v8->fields._Height_k__BackingField <= 0.0 )
    return 0LL;
  if ( !closedPanelTexture )
    goto LABEL_48;
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, SubmarinePanelPositionCalculator_o *, UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr,
         positionCalculator,
         closedPanelTexture,
         method);
  v10 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v42 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
  UnityEngine_Texture2D___ctor_70757976(v42, v9, v10, 0LL);
  X_k__BackingField = v8->fields._X_k__BackingField;
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v8->fields._Y_k__BackingField;
  v14 = v12;
  v15 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v16 = v14 >= 0 ? v14 : v14 + 1;
  v17 = v16 >> 1;
  v18 = v15 >= 0 ? v15 : v15 + 1;
  v19 = X_k__BackingField + (float)v17;
  v20 = Y_k__BackingField + (float)(v18 >> 1);
  v21 = v19 == INFINITY ? 0x80000000 : (int)v19;
  v22 = v20 == INFINITY ? 0x80000000 : (int)v20;
  objDomain = (ObjectDomain_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                                  closedPanelTexture,
                                  closedPanelTexture->klass->vtable._5_set_width.methodPtr);
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
    v27 = 0x80000000;
  else
    v27 = (int)y;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_70760364(closedPanelTexture, 0LL);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v30 = (UnityEngine_Color_array *)objDomain;
  if ( HorizontalPanelNum_k__BackingField >= 1 )
  {
    VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
    v32 = 0;
    v33 = v21 + v22 * v25;
    do
    {
      if ( VerticalPanelNum_k__BackingField >= 1 )
      {
        v34 = 0;
        v43 = v33;
        do
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
          objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(v32, v34, excludePanelUniqueIds, v28);
          if ( ((unsigned __int8)objDomain & 1) == 0 && v26 >= 1 )
          {
            v35 = 0;
            v36 = v33;
            do
            {
              if ( v27 >= 1 )
              {
                v37 = (unsigned int)v27;
                v38 = v36;
                if ( !v30 )
                  goto LABEL_48;
                do
                {
                  if ( v38 >= v30->max_length )
                    sub_1C2209C(objDomain, excludePanelUniqueIds);
                  v39 = &v30->obj + (int)v38;
                  --v37;
                  v38 += v25;
                  v39[2].klass = 0LL;
                  v39[2].monitor = 0LL;
                }
                while ( v37 );
              }
              ++v35;
              ++v36;
            }
            while ( v35 != v26 );
          }
          VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
          ++v34;
          v33 += v27 * v25;
        }
        while ( v34 < VerticalPanelNum_k__BackingField );
        HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        v33 = v43;
      }
      ++v32;
      v33 += v26;
    }
    while ( v32 < HorizontalPanelNum_k__BackingField );
  }
  v40 = v42;
  if ( !v42 )
LABEL_48:
    sub_1C22094(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_70758868(v42, v30, 0LL);
  UnityEngine_Texture2D__Apply_70759640(v42, 0LL);
  return v40;
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
  int v18; // w9
  ObjectDomain_array *v19; // x21
  int v20; // w23
  int v21; // s8
  int v22; // w24
  int v23; // w25
  Il2CppObject *v24; // x0
  int v25; // w8
  int v26; // w9
  int64_t v27; // x22
  float v28; // s9
  float v29; // s10
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  float v36; // s8
  int v37; // w22
  int v38; // w24
  int v39; // w25
  float v40; // s9
  int v41; // s11
  float v42; // s10
  Il2CppObject *v43; // x0
  int v44; // w8
  int v45; // w9
  int v46; // w9
  float v47; // s0
  int64_t v48; // x23
  float v49; // s8
  float v50; // s10
  float v51; // s9
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  float v58; // s8
  int v59; // w23
  int v60; // s9
  int v61; // w24
  int v62; // w25
  Il2CppObject *v63; // x0
  int v64; // w10
  int v65; // w9
  int64_t v66; // x22
  float v67; // s8
  float v68; // s10
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  float v75; // s8
  int v76; // w22
  float v77; // s9
  int v78; // w23
  int v79; // w24
  float v80; // s10
  float v81; // s11
  int v82; // s12
  Il2CppObject *v83; // x0
  int v84; // w8
  int v85; // w8
  int v86; // w9
  float v87; // s8
  int64_t v88; // x19
  float v89; // s9
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v97; // x0
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9053 & 1) == 0 )
  {
    sub_1C21E38(&ObjectDomain___TypeInfo);
    sub_1C21E38(&ObjectDomain_TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    byte_4BD9053 = 1;
  }
  v5 = sub_1C21EE0(float___TypeInfo, 4LL);
  if ( !positionCalculator )
    goto LABEL_62;
  v7 = v5;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_62;
  v9 = *(float *)&LeftBottomEdgePos;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !v7 )
    goto LABEL_62;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v10 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 32) = v9 + (float)(v10 >> 1);
  v98 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = v98.fields.y;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v98.fields.x);
  if ( *(_DWORD *)(v7 + 24) <= 1u )
    goto LABEL_61;
  v12 = (int)v5 >= 0 ? v5 : (int)v5 + 1;
  *(float *)(v7 + 36) = y + (float)(v12 >> 1);
  v13 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  LODWORD(v14) = (unsigned int)SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 2u )
    goto LABEL_61;
  v15 = v13 >= 0 ? v13 : v13 + 1;
  *(float *)(v7 + 40) = (float)(v15 >> 1) - v14;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  *(UnityEngine_Vector3_o *)(&v17 - 1) = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v18 = v16 >= 0 ? v16 : v16 + 1;
  *(float *)(v7 + 44) = (float)(v18 >> 1) - v17;
  v19 = (ObjectDomain_array *)sub_1C21EE0(ObjectDomain___TypeInfo, 4LL);
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v21 = *(_DWORD *)(v7 + 32);
  v22 = v5;
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v24 = (Il2CppObject *)sub_1C22084(ObjectDomain_TypeInfo);
  v25 = 1 - v22;
  if ( v20 <= 0 )
    v26 = -v20;
  else
    v26 = 1 - v20;
  if ( v22 <= 0 )
    v25 = -v22;
  v27 = (int64_t)v24;
  v28 = (float)(v26 >> 1);
  v29 = (float)(v25 >> 1);
  System_Object___ctor(v24, 0LL);
  *(float *)(v27 + 16) = v28;
  *(float *)(v27 + 20) = v29;
  *(_DWORD *)(v27 + 24) = v21;
  *(float *)(v27 + 28) = (float)v23;
  if ( !v19 )
LABEL_62:
    sub_1C22094(v5, v6);
  v5 = sub_1C21F74(v27, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( !v19->max_length )
    goto LABEL_61;
  v19->m_Items[0] = (ObjectDomain_o *)v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)v19->m_Items, v27, v30, v31, v32, v33, v34, v35);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v36 = *(float *)(v7 + 32);
  v37 = v5;
  v38 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v7 + 24) < 3u )
    goto LABEL_61;
  v39 = v5;
  v41 = *(_DWORD *)(v7 + 36);
  v40 = *(float *)(v7 + 40);
  v42 = *(float *)(v7 + 32);
  v43 = (Il2CppObject *)sub_1C22084(ObjectDomain_TypeInfo);
  v44 = 1 - v38;
  if ( v37 <= 0 )
    v45 = -v37;
  else
    v45 = 1 - v37;
  v46 = v45 >> 1;
  if ( v38 <= 0 )
    v44 = -v38;
  v47 = (float)v39 - v42;
  v48 = (int64_t)v43;
  v49 = v36 + (float)v46;
  v50 = (float)(v44 >> 1);
  v51 = v47 - v40;
  System_Object___ctor(v43, 0LL);
  *(float *)(v48 + 16) = v49;
  *(float *)(v48 + 20) = v50;
  *(float *)(v48 + 24) = v51;
  *(_DWORD *)(v48 + 28) = v41;
  v5 = sub_1C21F74(v48, v19->obj.klass->_1.element_class);
  if ( !v5 )
  {
LABEL_63:
    v97 = sub_1C220B8();
    sub_1C21F60(v97, 0LL);
  }
  if ( v19->max_length <= 1
    || (v19->m_Items[1] = (ObjectDomain_o *)v48,
        sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[1], v48, v52, v53, v54, v55, v56, v57),
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v7 + 24) <= 2u)
    || (v58 = *(float *)(v7 + 40),
        v59 = v5,
        v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v7 + 24) <= 2u) )
  {
LABEL_61:
    sub_1C2209C(v5, v6);
  }
  v60 = *(_DWORD *)(v7 + 40);
  v61 = v5;
  v62 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v63 = (Il2CppObject *)sub_1C22084(ObjectDomain_TypeInfo);
  if ( v59 >= 0 )
    v64 = v59;
  else
    v64 = v59 + 1;
  v65 = 1 - v61;
  if ( v61 <= 0 )
    v65 = -v61;
  v66 = (int64_t)v63;
  v67 = (float)(v64 >> 1) - v58;
  v68 = (float)(v65 >> 1);
  System_Object___ctor(v63, 0LL);
  *(float *)(v66 + 16) = v67;
  *(float *)(v66 + 20) = v68;
  *(_DWORD *)(v66 + 24) = v60;
  *(float *)(v66 + 28) = (float)v62;
  v5 = sub_1C21F74(v66, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( v19->max_length <= 2 )
    goto LABEL_61;
  v19->m_Items[2] = (ObjectDomain_o *)v66;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[2], v66, v69, v70, v71, v72, v73, v74);
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_61;
  v75 = *(float *)(v7 + 32);
  v76 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v7 + 24) <= 3u )
    goto LABEL_61;
  v77 = *(float *)(v7 + 44);
  v78 = v5;
  v5 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v7 + 24) < 4u )
    goto LABEL_61;
  v79 = v5;
  v80 = *(float *)(v7 + 32);
  v81 = *(float *)(v7 + 40);
  v82 = *(_DWORD *)(v7 + 44);
  v83 = (Il2CppObject *)sub_1C22084(ObjectDomain_TypeInfo);
  if ( v76 <= 0 )
    v84 = -v76;
  else
    v84 = 1 - v76;
  v85 = v84 >> 1;
  if ( v78 >= 0 )
    v86 = v78;
  else
    v86 = v78 + 1;
  v87 = v75 + (float)v85;
  v88 = (int64_t)v83;
  v89 = (float)(v86 >> 1) - v77;
  System_Object___ctor(v83, 0LL);
  *(float *)(v88 + 16) = v87;
  *(float *)(v88 + 20) = v89;
  *(float *)(v88 + 24) = (float)((float)v79 - v80) - v81;
  *(_DWORD *)(v88 + 28) = v82;
  v5 = sub_1C21F74(v88, v19->obj.klass->_1.element_class);
  if ( !v5 )
    goto LABEL_63;
  if ( v19->max_length <= 3 )
    goto LABEL_61;
  v19->m_Items[3] = (ObjectDomain_o *)v88;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->m_Items[3], v88, v90, v91, v92, v93, v94, v95);
  return v19;
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
  if ( (byte_4BD9054 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1C21E38(&ObjectDomain_TypeInfo);
    byte_4BD9054 = 1;
  }
  if ( !v3 )
    sub_1C22094(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v12 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  y = v12.fields.y;
  v6 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL));
  v7 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL));
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL);
  v8 = RightTopEdgePos.fields.y;
  v14 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v9 = v14.fields.y;
  v10 = sub_1C22084(ObjectDomain_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = LeftBottomEdgePos;
  *(float *)(v10 + 20) = y;
  *(float *)(v10 + 24) = v6 - v7;
  *(float *)(v10 + 28) = v8 - v9;
  return (ObjectDomain_o *)v10;
}


UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateResizedTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        int32_t resizeWidth,
        int32_t resizeHeight,
        const MethodInfo *method)
{
  UnityEngine_Texture2D_o *v7; // x23
  UnityEngine_RenderTexture_o *Temporary_70777768; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD9058 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Graphics_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    byte_4BD9058 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_70777768 = UnityEngine_RenderTexture__GetTemporary_70777768(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_70777768, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_70777768, 0LL);
    v7 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_70757976(v7, resizeWidth, resizeHeight, 0LL);
    if ( !v7 )
      sub_1C22094(v10, v11);
    v13.fields.m_Height = (float)resizeHeight;
    v13.fields.m_Width = (float)resizeWidth;
    v13.fields.m_XMin = 0.0;
    v13.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_70760060(v7, v13, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_70759640(v7, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_70777768, 0LL);
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
  if ( (byte_4BD9056 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    byte_4BD9056 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0LL;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0LL;
  v8 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_70757976(v8, v9, v10, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_70756664(closedPanelTexture, v24, v25, v26, v27, 0LL);
  if ( !v11 )
LABEL_35:
    sub_1C22094(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_70758868(v11, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_70759640(v11, 0LL);
  return v11;
}