// local variable allocation has failed, the output may be wrong!
ObjectDomain_o *__fastcall ClosePanelTextureUtil__CreateClosedPanelDomain(
        UnityEngine_Vector3_o pos,
        SubmarinePanelPositionCalculator_o *positionCalculator,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  SubmarinePanelPositionCalculator_o *v5; // x19
  float y; // s8
  float x; // s9
  float v8; // s10
  float v9; // s11
  __int64 v10; // x19

  v5 = positionCalculator;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B12D81 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1BCA7E0(&ObjectDomain_TypeInfo, method, v3);
    byte_4B12D81 = 1;
  }
  if ( !v5 )
    sub_1BCAA3C(positionCalculator, method);
  v8 = v5->fields._PanelUnitSize_k__BackingField.fields.x;
  v9 = v5->fields._PanelUnitSize_k__BackingField.fields.y;
  v10 = sub_1BCAA2C(ObjectDomain_TypeInfo, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(float *)(v10 + 16) = x - (float)(v8 * 0.5);
  *(float *)(v10 + 20) = y - (float)(v9 * 0.5);
  *(float *)(v10 + 24) = v8;
  *(float *)(v10 + 28) = v9;
  return (ObjectDomain_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateDarkTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        float darkRate,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Color_array *Pixels_70044996; // x0
  __int64 v10; // x1
  UnityEngine_Texture2D_o *v11; // x21
  UnityEngine_Color_array *v12; // x21
  UnityEngine_Color_array *v13; // x20
  unsigned __int64 v14; // x8
  float32x2_t v15; // d0
  __int64 v16; // x9
  float *p_r; // x10
  float *v18; // x11
  float v19; // s3
  float v20; // s2
  int32_t v21; // w22
  int32_t v22; // w19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  int32x2_t v27; // [xsp+0h] [xbp-40h]

  v27.n64_u64[0] = *(unsigned __int64 *)&darkRate;
  if ( (byte_4B12D85 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v7, v8);
    byte_4B12D85 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Pixels_70044996 = (UnityEngine_Color_array *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)baseTexture,
                                                 0LL,
                                                 0LL);
  v11 = 0LL;
  if ( ((unsigned __int8)Pixels_70044996 & 1) == 0 )
  {
    if ( !baseTexture )
      goto LABEL_19;
    Pixels_70044996 = UnityEngine_Texture2D__GetPixels_70044996(baseTexture, 0LL);
    if ( !Pixels_70044996 )
      goto LABEL_19;
    v12 = Pixels_70044996;
    Pixels_70044996 = (UnityEngine_Color_array *)sub_1BCA888(UnityEngine_Color___TypeInfo, Pixels_70044996->max_length);
    v13 = Pixels_70044996;
    if ( (int)*(_QWORD *)&v12->max_length >= 1 )
    {
      if ( !(unsigned int)*(_QWORD *)&v12->max_length )
LABEL_15:
        sub_1BCAA44(Pixels_70044996, v10);
      v14 = 0LL;
      v15.n64_u64[0] = vdup_lane_s32(v27, 0).n64_u64[0];
      v16 = (unsigned int)*(_QWORD *)&v12->max_length - 1LL;
      p_r = &Pixels_70044996->m_Items[1].fields.r;
      v18 = &v12->m_Items[1].fields.r;
      while ( Pixels_70044996 )
      {
        if ( v14 >= Pixels_70044996->max_length )
          goto LABEL_15;
        v19 = *v18;
        v20 = *(v18 - 1) * v27.n64_f32[0];
        *(float32x2_t *)(p_r - 3) = vmul_f32(*(float32x2_t *)(v18 - 3), v15);
        *(p_r - 1) = v20;
        *p_r = v19;
        if ( v16 == v14 )
          goto LABEL_16;
        ++v14;
        p_r += 4;
        v18 += 4;
        if ( v14 >= v12->max_length )
          goto LABEL_15;
      }
LABEL_19:
      sub_1BCAA3C(Pixels_70044996, v10);
    }
LABEL_16:
    v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._4_get_width.method)(
            baseTexture,
            baseTexture->klass->vtable._5_set_width.methodPtr);
    v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))baseTexture->klass->vtable._6_get_height.method)(
            baseTexture,
            baseTexture->klass->vtable._7_set_height.methodPtr);
    v11 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v23, v24, v25);
    UnityEngine_Texture2D___ctor_70042608(v11, v21, v22, 0LL);
    if ( !v11 )
      goto LABEL_19;
    UnityEngine_Texture2D__SetPixels_70043500(v11, v13, 0LL);
    UnityEngine_Texture2D__Apply_70044272(v11, 0LL);
  }
  return v11;
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
  __int64 v10; // x2
  int32_t v11; // w24
  int32_t v12; // w25
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  float X_k__BackingField; // s8
  int v17; // w0
  float Y_k__BackingField; // s9
  int v19; // w22
  int v20; // w0
  int v21; // w10
  int v22; // w10
  int v23; // w11
  float v24; // s0
  float v25; // s1
  unsigned int v26; // w21
  unsigned int v27; // w25
  float x; // s0
  float y; // s1
  int v30; // w22
  int v31; // w26
  int v32; // w27
  const MethodInfo *v33; // x3
  int32_t HorizontalPanelNum_k__BackingField; // w9
  UnityEngine_Color_array *v35; // x23
  int32_t VerticalPanelNum_k__BackingField; // w8
  int32_t v37; // w24
  unsigned int v38; // w29
  int32_t v39; // w25
  int v40; // w8
  unsigned int v41; // w9
  __int64 v42; // x10
  il2cpp_array_size_t v43; // w11
  Il2CppObject *v44; // x12
  UnityEngine_Texture2D_o *v45; // x19
  UnityEngine_Texture2D_o *v47; // [xsp+0h] [xbp-80h]
  unsigned int v48; // [xsp+Ch] [xbp-74h]

  v8 = objDomain;
  if ( (byte_4B12D83 & 1) == 0 )
  {
    sub_1BCA7E0(&PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds, positionCalculator);
    objDomain = (ObjectDomain_o *)sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v9, v10);
    byte_4B12D83 = 1;
  }
  if ( !v8 )
    goto LABEL_48;
  if ( v8->fields._Width_k__BackingField <= 0.0 || v8->fields._Height_k__BackingField <= 0.0 )
    return 0LL;
  if ( !closedPanelTexture )
    goto LABEL_48;
  v11 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, SubmarinePanelPositionCalculator_o *, UnityEngine_Texture2D_o *, const MethodInfo *))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr,
          positionCalculator,
          closedPanelTexture,
          method);
  v12 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v47 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v13, v14, v15);
  UnityEngine_Texture2D___ctor_70042608(v47, v11, v12, 0LL);
  X_k__BackingField = v8->fields._X_k__BackingField;
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  Y_k__BackingField = v8->fields._Y_k__BackingField;
  v19 = v17;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v21 = v19 >= 0 ? v19 : v19 + 1;
  v22 = v21 >> 1;
  v23 = v20 >= 0 ? v20 : v20 + 1;
  v24 = X_k__BackingField + (float)v22;
  v25 = Y_k__BackingField + (float)(v23 >> 1);
  v26 = v24 == INFINITY ? 0x80000000 : (int)v24;
  v27 = v25 == INFINITY ? 0x80000000 : (int)v25;
  objDomain = (ObjectDomain_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
                                  closedPanelTexture,
                                  closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !positionCalculator )
    goto LABEL_48;
  x = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.x;
  y = positionCalculator->fields._PanelUnitSize_k__BackingField.fields.y;
  v30 = (int)objDomain;
  if ( x == INFINITY )
    v31 = 0x80000000;
  else
    v31 = (int)x;
  if ( y == INFINITY )
    v32 = 0x80000000;
  else
    v32 = (int)y;
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_70044996(closedPanelTexture, 0LL);
  HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
  v35 = (UnityEngine_Color_array *)objDomain;
  if ( HorizontalPanelNum_k__BackingField >= 1 )
  {
    VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
    v37 = 0;
    v38 = v26 + v27 * v30;
    do
    {
      if ( VerticalPanelNum_k__BackingField >= 1 )
      {
        v39 = 0;
        v48 = v38;
        do
        {
          if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, excludePanelUniqueIds);
          objDomain = (ObjectDomain_o *)PanelUniqueIDUtil__HasID(v37, v39, excludePanelUniqueIds, v33);
          if ( ((unsigned __int8)objDomain & 1) == 0 && v31 >= 1 )
          {
            v40 = 0;
            v41 = v38;
            do
            {
              if ( v32 >= 1 )
              {
                v42 = (unsigned int)v32;
                v43 = v41;
                if ( !v35 )
                  goto LABEL_48;
                do
                {
                  if ( v43 >= v35->max_length )
                    sub_1BCAA44(objDomain, excludePanelUniqueIds);
                  v44 = &v35->obj + (int)v43;
                  --v42;
                  v43 += v30;
                  v44[2].klass = 0LL;
                  v44[2].monitor = 0LL;
                }
                while ( v42 );
              }
              ++v40;
              ++v41;
            }
            while ( v40 != v31 );
          }
          VerticalPanelNum_k__BackingField = positionCalculator->fields._VerticalPanelNum_k__BackingField;
          ++v39;
          v38 += v32 * v30;
        }
        while ( v39 < VerticalPanelNum_k__BackingField );
        HorizontalPanelNum_k__BackingField = positionCalculator->fields._HorizontalPanelNum_k__BackingField;
        v38 = v48;
      }
      ++v37;
      v38 += v31;
    }
    while ( v37 < HorizontalPanelNum_k__BackingField );
  }
  v45 = v47;
  if ( !v47 )
LABEL_48:
    sub_1BCAA3C(objDomain, excludePanelUniqueIds);
  UnityEngine_Texture2D__SetPixels_70043500(v47, v35, 0LL);
  UnityEngine_Texture2D__Apply_70044272(v47, 0LL);
  return v45;
}


// local variable allocation has failed, the output may be wrong!
ObjectDomain_array *__fastcall ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
        SubmarinePanelPositionCalculator_o *positionCalculator,
        UnityEngine_Texture2D_o *closedPanelTexture,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x20
  unsigned int LeftBottomEdgePos; // s0
  float v13; // s8
  int v14; // w8
  float y; // s8
  int v16; // w8
  int v17; // w22
  float v18; // s0
  int v19; // w8
  int v20; // w22
  float v21; // s1
  int v22; // w9
  ObjectDomain_array *v23; // x21
  int v24; // w23
  int v25; // s8
  int v26; // w24
  int v27; // w25
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  Il2CppObject *v31; // x0
  int v32; // w8
  int v33; // w9
  int64_t v34; // x22
  float v35; // s9
  float v36; // s10
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  float v43; // s8
  int v44; // w22
  int v45; // w24
  __int64 v46; // x2
  __int64 v47; // x3
  int v48; // w25
  float v49; // s9
  int v50; // s11
  float v51; // s10
  Il2CppObject *v52; // x0
  int v53; // w8
  int v54; // w9
  int v55; // w9
  float v56; // s0
  int64_t v57; // x23
  float v58; // s8
  float v59; // s10
  float v60; // s9
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  float v67; // s8
  int v68; // w23
  int v69; // s9
  int v70; // w24
  int v71; // w25
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  Il2CppObject *v75; // x0
  int v76; // w10
  int v77; // w9
  int64_t v78; // x22
  float v79; // s8
  float v80; // s10
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  float v87; // s8
  int v88; // w22
  float v89; // s9
  int v90; // w23
  __int64 v91; // x2
  __int64 v92; // x3
  int v93; // w24
  float v94; // s10
  float v95; // s11
  int v96; // s12
  Il2CppObject *v97; // x0
  int v98; // w8
  int v99; // w8
  int v100; // w9
  float v101; // s8
  int64_t v102; // x19
  float v103; // s9
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v111; // x0
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12D7F & 1) == 0 )
  {
    sub_1BCA7E0(&ObjectDomain___TypeInfo, closedPanelTexture, method);
    sub_1BCA7E0(&ObjectDomain_TypeInfo, v5, v6);
    sub_1BCA7E0(&float___TypeInfo, v7, v8);
    byte_4B12D7F = 1;
  }
  v9 = sub_1BCA888(float___TypeInfo, 4LL);
  if ( !positionCalculator )
    goto LABEL_62;
  v11 = v9;
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  if ( !closedPanelTexture )
    goto LABEL_62;
  v13 = *(float *)&LeftBottomEdgePos;
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !v11 )
    goto LABEL_62;
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_61;
  v14 = (int)v9 >= 0 ? v9 : (int)v9 + 1;
  *(float *)(v11 + 32) = v13 + (float)(v14 >> 1);
  v112 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(positionCalculator, 0LL);
  y = v112.fields.y;
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer, float))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr,
         v112.fields.x);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_61;
  v16 = (int)v9 >= 0 ? v9 : (int)v9 + 1;
  *(float *)(v11 + 36) = y + (float)(v16 >> 1);
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  LODWORD(v18) = (unsigned int)SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_61;
  v19 = v17 >= 0 ? v17 : v17 + 1;
  *(float *)(v11 + 40) = (float)(v19 >> 1) - v18;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  *(UnityEngine_Vector3_o *)(&v21 - 1) = SubmarinePanelPositionCalculator__get_RightTopEdgePos(positionCalculator, 0LL);
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_61;
  v22 = v20 >= 0 ? v20 : v20 + 1;
  *(float *)(v11 + 44) = (float)(v22 >> 1) - v21;
  v23 = (ObjectDomain_array *)sub_1BCA888(ObjectDomain___TypeInfo, 4LL);
  v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_61;
  v25 = *(_DWORD *)(v11 + 32);
  v26 = v9;
  v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v31 = (Il2CppObject *)sub_1BCAA2C(ObjectDomain_TypeInfo, v28, v29, v30);
  v32 = 1 - v26;
  if ( v24 <= 0 )
    v33 = -v24;
  else
    v33 = 1 - v24;
  if ( v26 <= 0 )
    v32 = -v26;
  v34 = (int64_t)v31;
  v35 = (float)(v33 >> 1);
  v36 = (float)(v32 >> 1);
  System_Object___ctor(v31, 0LL);
  *(float *)(v34 + 16) = v35;
  *(float *)(v34 + 20) = v36;
  *(_DWORD *)(v34 + 24) = v25;
  *(float *)(v34 + 28) = (float)v27;
  if ( !v23 )
LABEL_62:
    sub_1BCAA3C(v9, v10);
  v9 = sub_1BCA91C(v34, v23->obj.klass->_1.element_class);
  if ( !v9 )
    goto LABEL_63;
  if ( !v23->max_length )
    goto LABEL_61;
  v23->m_Items[0] = (ObjectDomain_o *)v34;
  sub_1BCA784((PartyOrganizationUtility_o *)v23->m_Items, v34, v37, v38, v39, v40, v41, v42);
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_61;
  v43 = *(float *)(v11 + 32);
  v44 = v9;
  v45 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v11 + 24) < 3u )
    goto LABEL_61;
  v48 = v9;
  v50 = *(_DWORD *)(v11 + 36);
  v49 = *(float *)(v11 + 40);
  v51 = *(float *)(v11 + 32);
  v52 = (Il2CppObject *)sub_1BCAA2C(ObjectDomain_TypeInfo, v10, v46, v47);
  v53 = 1 - v45;
  if ( v44 <= 0 )
    v54 = -v44;
  else
    v54 = 1 - v44;
  v55 = v54 >> 1;
  if ( v45 <= 0 )
    v53 = -v45;
  v56 = (float)v48 - v51;
  v57 = (int64_t)v52;
  v58 = v43 + (float)v55;
  v59 = (float)(v53 >> 1);
  v60 = v56 - v49;
  System_Object___ctor(v52, 0LL);
  *(float *)(v57 + 16) = v58;
  *(float *)(v57 + 20) = v59;
  *(float *)(v57 + 24) = v60;
  *(_DWORD *)(v57 + 28) = v50;
  v9 = sub_1BCA91C(v57, v23->obj.klass->_1.element_class);
  if ( !v9 )
  {
LABEL_63:
    v111 = sub_1BCAA60();
    sub_1BCA908(v111, 0LL);
  }
  if ( v23->max_length <= 1
    || (v23->m_Items[1] = (ObjectDomain_o *)v57,
        sub_1BCA784((PartyOrganizationUtility_o *)&v23->m_Items[1], v57, v61, v62, v63, v64, v65, v66),
        v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._5_set_width.methodPtr),
        *(_DWORD *)(v11 + 24) <= 2u)
    || (v67 = *(float *)(v11 + 40),
        v68 = v9,
        v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
               closedPanelTexture,
               closedPanelTexture->klass->vtable._7_set_height.methodPtr),
        *(_DWORD *)(v11 + 24) <= 2u) )
  {
LABEL_61:
    sub_1BCAA44(v9, v10);
  }
  v69 = *(_DWORD *)(v11 + 40);
  v70 = v9;
  v71 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
          closedPanelTexture,
          closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  v75 = (Il2CppObject *)sub_1BCAA2C(ObjectDomain_TypeInfo, v72, v73, v74);
  if ( v68 >= 0 )
    v76 = v68;
  else
    v76 = v68 + 1;
  v77 = 1 - v70;
  if ( v70 <= 0 )
    v77 = -v70;
  v78 = (int64_t)v75;
  v79 = (float)(v76 >> 1) - v67;
  v80 = (float)(v77 >> 1);
  System_Object___ctor(v75, 0LL);
  *(float *)(v78 + 16) = v79;
  *(float *)(v78 + 20) = v80;
  *(_DWORD *)(v78 + 24) = v69;
  *(float *)(v78 + 28) = (float)v71;
  v9 = sub_1BCA91C(v78, v23->obj.klass->_1.element_class);
  if ( !v9 )
    goto LABEL_63;
  if ( v23->max_length <= 2 )
    goto LABEL_61;
  v23->m_Items[2] = (ObjectDomain_o *)v78;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->m_Items[2], v78, v81, v82, v83, v84, v85, v86);
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_61;
  v87 = *(float *)(v11 + 32);
  v88 = v9;
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._6_get_height.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._7_set_height.methodPtr);
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_61;
  v89 = *(float *)(v11 + 44);
  v90 = v9;
  v9 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))closedPanelTexture->klass->vtable._4_get_width.method)(
         closedPanelTexture,
         closedPanelTexture->klass->vtable._5_set_width.methodPtr);
  if ( *(_DWORD *)(v11 + 24) < 4u )
    goto LABEL_61;
  v93 = v9;
  v94 = *(float *)(v11 + 32);
  v95 = *(float *)(v11 + 40);
  v96 = *(_DWORD *)(v11 + 44);
  v97 = (Il2CppObject *)sub_1BCAA2C(ObjectDomain_TypeInfo, v10, v91, v92);
  if ( v88 <= 0 )
    v98 = -v88;
  else
    v98 = 1 - v88;
  v99 = v98 >> 1;
  if ( v90 >= 0 )
    v100 = v90;
  else
    v100 = v90 + 1;
  v101 = v87 + (float)v99;
  v102 = (int64_t)v97;
  v103 = (float)(v100 >> 1) - v89;
  System_Object___ctor(v97, 0LL);
  *(float *)(v102 + 16) = v101;
  *(float *)(v102 + 20) = v103;
  *(float *)(v102 + 24) = (float)((float)v93 - v94) - v95;
  *(_DWORD *)(v102 + 28) = v96;
  v9 = sub_1BCA91C(v102, v23->obj.klass->_1.element_class);
  if ( !v9 )
    goto LABEL_63;
  if ( v23->max_length <= 3 )
    goto LABEL_61;
  v23->m_Items[3] = (ObjectDomain_o *)v102;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->m_Items[3], v102, v104, v105, v106, v107, v108, v109);
  return v23;
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x19
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o RightTopEdgePos; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v3 = positionCalculator;
  if ( (byte_4B12D80 & 1) == 0 )
  {
    positionCalculator = (SubmarinePanelPositionCalculator_o *)sub_1BCA7E0(
                                                                 &ObjectDomain_TypeInfo,
                                                                 closedPanelTexture,
                                                                 method);
    byte_4B12D80 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(positionCalculator, closedPanelTexture);
  LeftBottomEdgePos = (unsigned int)SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v15 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  y = v15.fields.y;
  v6 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL));
  v7 = COERCE_FLOAT(SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL));
  RightTopEdgePos = SubmarinePanelPositionCalculator__get_RightTopEdgePos(v3, 0LL);
  v8 = RightTopEdgePos.fields.y;
  v17 = SubmarinePanelPositionCalculator__get_LeftBottomEdgePos(v3, 0LL);
  v9 = v17.fields.y;
  v13 = sub_1BCAA2C(ObjectDomain_TypeInfo, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_DWORD *)(v13 + 16) = LeftBottomEdgePos;
  *(float *)(v13 + 20) = y;
  *(float *)(v13 + 24) = v6 - v7;
  *(float *)(v13 + 28) = v8 - v9;
  return (ObjectDomain_o *)v13;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall ClosePanelTextureUtil__CreateResizedTexture2D(
        UnityEngine_Texture2D_o *baseTexture,
        int32_t resizeWidth,
        int32_t resizeHeight,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Texture2D_o *v11; // x23
  __int64 v12; // x1
  UnityEngine_RenderTexture_o *Temporary_70062400; // x22
  UnityEngine_RenderTexture_o *active; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x0
  __int64 v19; // x1
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12D84 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Graphics_TypeInfo, *(_QWORD *)&resizeWidth, *(_QWORD *)&resizeHeight);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v9, v10);
    byte_4B12D84 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&resizeWidth);
  v11 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)baseTexture, 0LL, 0LL) )
  {
    Temporary_70062400 = UnityEngine_RenderTexture__GetTemporary_70062400(resizeWidth, resizeHeight, 0, 7, 1, 0LL);
    if ( !UnityEngine_Graphics_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Graphics_TypeInfo, v12);
    UnityEngine_Graphics__Blit((UnityEngine_Texture_o *)baseTexture, Temporary_70062400, 0LL);
    active = UnityEngine_RenderTexture__get_active(0LL);
    UnityEngine_RenderTexture__set_active(Temporary_70062400, 0LL);
    v11 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v15, v16, v17);
    UnityEngine_Texture2D___ctor_70042608(v11, resizeWidth, resizeHeight, 0LL);
    if ( !v11 )
      sub_1BCAA3C(v18, v19);
    v21.fields.m_Height = (float)resizeHeight;
    v21.fields.m_Width = (float)resizeWidth;
    v21.fields.m_XMin = 0.0;
    v21.fields.m_YMin = 0.0;
    UnityEngine_Texture2D__ReadPixels_70044692(v11, v21, 0, 0, 0LL);
    UnityEngine_Texture2D__Apply_70044272(v11, 0LL);
    UnityEngine_RenderTexture__set_active(active, 0LL);
    UnityEngine_RenderTexture__ReleaseTemporary(Temporary_70062400, 0LL);
  }
  return v11;
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
  if ( (byte_4B12D82 & 1) == 0 )
  {
    objDomain = (ObjectDomain_o *)sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, positionCalculator, closedPanelTexture);
    byte_4B12D82 = 1;
  }
  if ( !v5 )
    goto LABEL_35;
  Width_k__BackingField = v5->fields._Width_k__BackingField;
  if ( Width_k__BackingField <= 0.0 )
    return 0LL;
  Height_k__BackingField = v5->fields._Height_k__BackingField;
  if ( Height_k__BackingField <= 0.0 )
    return 0LL;
  v8 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(
                                    UnityEngine_Texture2D_TypeInfo,
                                    positionCalculator,
                                    closedPanelTexture,
                                    method);
  v9 = Width_k__BackingField == INFINITY ? 0x80000000 : (int)Width_k__BackingField;
  v10 = Height_k__BackingField == INFINITY ? 0x80000000 : (int)Height_k__BackingField;
  v11 = v8;
  UnityEngine_Texture2D___ctor_70042608(v8, v9, v10, 0LL);
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
  objDomain = (ObjectDomain_o *)UnityEngine_Texture2D__GetPixels_70041296(closedPanelTexture, v24, v25, v26, v27, 0LL);
  if ( !v11 )
LABEL_35:
    sub_1BCAA3C(objDomain, positionCalculator);
  UnityEngine_Texture2D__SetPixels_70043500(v11, (UnityEngine_Color_array *)objDomain, 0LL);
  UnityEngine_Texture2D__Apply_70044272(v11, 0LL);
  return v11;
}