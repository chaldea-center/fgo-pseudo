void UIProgressBar___ctor(UIProgressBar_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3511B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4D3511B = 1;
  }
  this->fields.mValue = 1.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onChange, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIProgressBar__ForceUpdate(UIProgressBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFG; // x20
  struct UIWidget_o *v4; // x8
  __int64 naturalAligment; // x11
  struct UIWidget_o *v6; // x20
  unsigned int mFill; // w21
  UnityEngine_Behaviour_o *cachedTransform; // x0
  const MethodInfo *v9; // x1
  UIBasicSprite_o *v10; // x0
  int32_t v11; // w1
  float value; // s0
  _BOOL4 v13; // w23
  struct UIWidget_o *v14; // x20
  int32_t v15; // w21
  float v16; // s0
  float v17; // s4
  UIWidget_o *v20; // x0
  struct UIWidget_o *v22; // x20
  int32_t v23; // w21
  float v24; // s0
  const MethodInfo *v25; // x1
  UnityEngine_Object_o *thumb; // x20
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_o *mBG; // x20
  UnityEngine_Object_o *v29; // x20
  __int64 v30; // x20
  UnityEngine_Object_o *v31; // x21
  float v32; // s0
  float v33; // s1
  float v34; // s2
  float v35; // s3
  unsigned int v36; // w8
  float v37; // s0
  float v38; // s2
  float v39; // s4
  float v40; // s3
  float v41; // s1
  UnityEngine_Object_o *v42; // x21
  unsigned __int64 v43; // x9
  UnityEngine_Transform_o *v44; // x21
  unsigned __int64 v45; // x22
  __int64 v46; // x24
  unsigned int v47; // w8
  float32x2_t v48; // d0
  float v49; // s1
  float32x2_t v50; // d8
  float v51; // s9
  float32x2_t v52; // d10
  float v53; // s11
  float32x2_t v54; // d12
  float v55; // s13
  unsigned int v56; // w20
  const MethodInfo *v57; // x1
  float v58; // s0
  float32x2_t v59; // d3
  float v60; // s1
  float32x2_t v61; // d2
  float v62; // s0
  float32x2_t v63; // d1
  float v64; // s2
  unsigned __int64 v65; // d0
  float32x2_t v66; // d10
  float v67; // s11
  float32x2_t v68; // d12
  float v69; // s13
  float32x2_t v70; // d14
  float v71; // s15
  unsigned int v72; // w20
  float v73; // s0
  float32x2_t v74; // d4
  float v75; // s1
  float32x2_t v76; // d3
  UnityEngine_Vector3_o v77; // 0:kr00_12.12
  UnityEngine_Vector3_o v78; // 0:kr14_12.12
  UnityEngine_Vector4_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D35119 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIBasicSprite_TypeInfo);
    byte_4D35119 = 1;
  }
  this->fields.mIsDirty = 0;
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
    goto LABEL_27;
  v4 = this->fields.mFG;
  if ( v4
    && (naturalAligment = UIBasicSprite_TypeInfo->_2.naturalAligment,
        v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UIBasicSprite_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] == UIBasicSprite_TypeInfo )
      v6 = this->fields.mFG;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  mFill = this->fields.mFill;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( mFill > 1 )
  {
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_100;
      if ( ((unsigned int (__fastcall *)(struct UIWidget_o *, void *))v6->klass[1]._1.image)(
             v6,
             v6->klass[1]._1.gc_desc) == 3 )
      {
        if ( HIDWORD(v6[1].klass) <= 1 )
        {
          v11 = 1;
          v10 = (UIBasicSprite_o *)v6;
          goto LABEL_25;
        }
LABEL_26:
        value = UIProgressBar__get_value(this, v9);
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)v6, value, 0);
LABEL_27:
        v13 = 0;
        goto LABEL_43;
      }
    }
    v22 = this->fields.mFG;
    v23 = this->fields.mFill;
    v24 = UIProgressBar__get_value(this, v9);
    if ( !v22 )
      goto LABEL_100;
    v79.fields.y = 0.0;
    if ( (v23 & 0xFFFFFFFD) == 1 )
    {
      v79.fields.y = 1.0 - v24;
      v79.fields.w = 1.0;
    }
    else
    {
      v79.fields.w = v24;
    }
    v79.fields.x = 0.0;
    v79.fields.z = 1.0;
    v20 = v22;
  }
  else
  {
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_100;
      if ( ((unsigned int (__fastcall *)(struct UIWidget_o *, void *))v6->klass[1]._1.image)(
             v6,
             v6->klass[1]._1.gc_desc) == 3 )
      {
        if ( HIDWORD(v6[1].klass) <= 1 )
        {
          v10 = (UIBasicSprite_o *)v6;
          v11 = 0;
LABEL_25:
          UIBasicSprite__set_fillDirection(v10, v11, 0);
          UIBasicSprite__set_invert((UIBasicSprite_o *)v6, (this->fields.mFill & 0xFFFFFFFD) == 1, 0);
          goto LABEL_26;
        }
        goto LABEL_26;
      }
    }
    v14 = this->fields.mFG;
    v15 = this->fields.mFill;
    v16 = UIProgressBar__get_value(this, v9);
    if ( !v14 )
      goto LABEL_100;
    if ( (v15 & 0xFFFFFFFD) == 1 )
      v17 = 1.0 - v16;
    else
      v17 = 0.0;
    if ( (v15 & 0xFFFFFFFD) == 1 )
      v79.fields.z = 1.0;
    else
      v79.fields.z = v16;
    v79.fields.y = 0.0;
    v79.fields.w = 1.0;
    v20 = v14;
    v79.fields.x = v17;
  }
  UIWidget__set_drawRegion(v20, v79, 0);
  cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mFG;
  if ( !cachedTransform )
    goto LABEL_100;
  UnityEngine_Behaviour__set_enabled(cachedTransform, 1, 0);
  v13 = UIProgressBar__get_value(this, v25) < 0.001;
LABEL_43:
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v27 = (UnityEngine_Object_o *)this->fields.mFG;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
      goto LABEL_52;
    mBG = (UnityEngine_Object_o *)this->fields.mBG;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
    {
LABEL_52:
      v29 = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
      {
        cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mFG;
        if ( !cachedTransform )
          goto LABEL_100;
      }
      else
      {
        cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mBG;
        if ( !cachedTransform )
          goto LABEL_100;
      }
      v30 = ((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))cachedTransform->klass[1]._1.generic_class)(
              cachedTransform,
              cachedTransform->klass[1]._1.typeMetadataHandle);
      v31 = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
      {
        cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mFG;
        if ( !cachedTransform )
          goto LABEL_100;
      }
      else
      {
        cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mBG;
        if ( !cachedTransform )
          goto LABEL_100;
      }
      cachedTransform = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))cachedTransform->klass[2]._1.events)(
                                                     cachedTransform,
                                                     cachedTransform->klass[2]._1.properties);
      if ( !v30 )
        goto LABEL_100;
      v36 = *(_DWORD *)(v30 + 24);
      if ( v36 )
      {
        *(float *)(v30 + 32) = v32 + *(float *)(v30 + 32);
        if ( v36 != 1 )
        {
          *(float *)(v30 + 44) = v32 + *(float *)(v30 + 44);
          if ( v36 > 2 )
          {
            *(float *)(v30 + 56) = *(float *)(v30 + 56) - v34;
            if ( v36 != 3 )
            {
              v37 = v33 + *(float *)(v30 + 36);
              v38 = *(float *)(v30 + 68) - v34;
              v39 = *(float *)(v30 + 48) - v35;
              v40 = *(float *)(v30 + 60) - v35;
              v41 = v33 + *(float *)(v30 + 72);
              *(float *)(v30 + 36) = v37;
              *(float *)(v30 + 48) = v39;
              *(float *)(v30 + 60) = v40;
              *(float *)(v30 + 68) = v38;
              *(float *)(v30 + 72) = v41;
              v42 = (UnityEngine_Object_o *)this->fields.mFG;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
              {
                cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mFG;
                if ( !cachedTransform )
LABEL_100:
                  sub_1C93D2C(cachedTransform, v9);
              }
              else
              {
                cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mBG;
                if ( !cachedTransform )
                  goto LABEL_100;
              }
              cachedTransform = (UnityEngine_Behaviour_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
              LODWORD(v43) = *(_DWORD *)(v30 + 24);
              v44 = (UnityEngine_Transform_o *)cachedTransform;
              v45 = 0;
              v46 = v30 + 40;
              do
              {
                if ( v45 >= (unsigned int)v43 )
                  goto LABEL_99;
                if ( !v44 )
                  goto LABEL_100;
                v77 = UnityEngine_Transform__TransformPoint(v44, *(UnityEngine_Vector3_o *)(v46 - 8), 0);
                v43 = *(unsigned int *)(v30 + 24);
                if ( v45 >= v43 )
                  goto LABEL_99;
                ++v45;
                *(UnityEngine_Vector3_o *)(v46 - 8) = v77;
                v46 += 12;
              }
              while ( v45 != 4 );
              if ( (_DWORD)v43 )
              {
                v47 = this->fields.mFill;
                v48.n64_u64[0] = *(unsigned __int64 *)(v30 + 32);
                v49 = *(float *)(v30 + 40);
                if ( v47 > 1 )
                {
                  if ( (unsigned int)v43 > 3 )
                  {
                    v66.n64_u64[0] = *(unsigned __int64 *)(v30 + 44);
                    v67 = *(float *)(v30 + 52);
                    v68.n64_u64[0] = *(unsigned __int64 *)(v30 + 56);
                    v69 = *(float *)(v30 + 64);
                    v70.n64_u64[0] = vadd_f32(
                                       v48,
                                       vmul_f32(
                                         vsub_f32(*(float32x2_t *)(v30 + 68), v48),
                                         (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                    v71 = v49 + (float)((float)(*(float *)(v30 + 76) - v49) * 0.5);
                    v72 = v47 & 0xFFFFFFFD;
                    v73 = UIProgressBar__get_value(this, v9);
                    v74.n64_u64[0] = vmul_f32(vsub_f32(v68, v66), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                    if ( v72 == 1 )
                      v73 = 1.0 - v73;
                    v75 = fminf(v73, 1.0);
                    v76.n64_u64[0] = vsub_f32(vadd_f32(v66, v74), v70).n64_u64[0];
                    if ( v73 < 0.0 )
                      v75 = 0.0;
                    v64 = v71 + (float)((float)((float)(v67 + (float)((float)(v69 - v67) * 0.5)) - v71) * v75);
                    v65 = vadd_f32(v70, vmul_n_f32(v76, v75)).n64_u64[0];
                    goto LABEL_94;
                  }
                }
                else if ( (unsigned int)v43 >= 4 )
                {
                  v50.n64_u64[0] = *(unsigned __int64 *)(v30 + 56);
                  v51 = *(float *)(v30 + 64);
                  v52.n64_u64[0] = *(unsigned __int64 *)(v30 + 68);
                  v53 = *(float *)(v30 + 76);
                  v54.n64_u64[0] = vadd_f32(
                                     v48,
                                     vmul_f32(
                                       vsub_f32(*(float32x2_t *)(v30 + 44), v48),
                                       (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                  v55 = v49 + (float)((float)(*(float *)(v30 + 52) - v49) * 0.5);
                  v56 = v47 & 0xFFFFFFFD;
                  v58 = UIProgressBar__get_value(this, v9);
                  v59.n64_u64[0] = vmul_f32(vsub_f32(v52, v50), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                  if ( v56 == 1 )
                    v58 = 1.0 - v58;
                  v60 = fminf(v58, 1.0);
                  v61.n64_u64[0] = vsub_f32(vadd_f32(v50, v59), v54).n64_u64[0];
                  if ( v58 < 0.0 )
                    v60 = 0.0;
                  v62 = (float)((float)(v51 + (float)((float)(v53 - v51) * 0.5)) - v55) * v60;
                  v63.n64_u64[0] = vmul_n_f32(v61, v60).n64_u64[0];
                  v64 = v55 + v62;
                  v65 = vadd_f32(v54, v63).n64_u64[0];
LABEL_94:
                  *(_QWORD *)&v78.fields.x = v65;
                  v78.fields.z = v64;
                  UIProgressBar__SetThumbPosition(this, v78, v57);
                  goto LABEL_95;
                }
              }
            }
          }
        }
      }
LABEL_99:
      sub_1C93D34(cachedTransform);
    }
  }
LABEL_95:
  if ( v13 )
  {
    cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mFG;
    if ( !cachedTransform )
      goto LABEL_100;
    UnityEngine_Behaviour__set_enabled(cachedTransform, 0, 0);
  }
}


float UIProgressBar__LocalToValue(UIProgressBar_o *this, UnityEngine_Vector2_o localPos, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *mFG; // x20
  const MethodInfo *v7; // x1
  struct UIWidget_o *v8; // x0
  unsigned int mFill; // w8
  float v10; // s1
  unsigned int v11; // w8
  float v12; // s2
  float v13; // s0
  float v14; // s1
  float result; // s0
  float v16; // s1

  y = localPos.fields.y;
  x = localPos.fields.x;
  if ( (byte_4D35118 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35118 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
    return UIProgressBar__get_value(this, v7);
  v8 = this->fields.mFG;
  if ( !v8
    || (v8 = (struct UIWidget_o *)((__int64 (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v8->klass->vtable._10_get_localCorners.methodPtr)(
                                    v8,
                                    v8->klass->vtable._10_get_localCorners.method)) == 0 )
  {
    sub_1C93D2C(v8, v7);
  }
  if ( LODWORD(v8->fields.m_CancellationTokenSource) <= 2 )
    sub_1C93D34(v8);
  mFill = this->fields.mFill;
  if ( mFill > 1 )
  {
    v16 = *((float *)&v8->fields.leftAnchor + 1);
    v11 = mFill & 0xFFFFFFFD;
    v12 = 1.0;
    v13 = *((float *)&v8->fields.topAnchor + 1) - v16;
    v14 = y - v16;
  }
  else
  {
    v10 = *(float *)&v8->fields.leftAnchor;
    v11 = mFill & 0xFFFFFFFD;
    v12 = 1.0;
    v13 = *(float *)&v8->fields.topAnchor - v10;
    v14 = x - v10;
  }
  result = v14 / v13;
  if ( v11 == 1 )
    return v12 - result;
  return result;
}


void UIProgressBar__OnStart(UIProgressBar_o *this, const MethodInfo *method)
{
  ;
}


void UIProgressBar__OnValidate(UIProgressBar_o *this, const MethodInfo *method)
{
  float mValue; // s1
  float v4; // s0
  int32_t numberOfSteps; // w8
  int32_t v6; // w8
  float v7; // s1
  float v8; // s0
  int32_t v9; // w8

  if ( (byte_4D35117 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    byte_4D35117 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._4_Upgrade.methodPtr)(
      this,
      this->klass->vtable._4_Upgrade.method);
    mValue = this->fields.mValue;
    v4 = fminf(mValue, 1.0);
    if ( mValue < 0.0 )
      v4 = 0.0;
    this->fields.mIsDirty = 1;
    if ( mValue != v4 )
      this->fields.mValue = v4;
    numberOfSteps = this->fields.numberOfSteps;
    if ( numberOfSteps < 0 )
    {
      v6 = 0;
    }
    else
    {
      if ( numberOfSteps < 21 )
      {
LABEL_22:
        ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._7_ForceUpdate.methodPtr)(
          this,
          this->klass->vtable._7_ForceUpdate.method);
        return;
      }
      v6 = 20;
    }
    this->fields.numberOfSteps = v6;
    goto LABEL_22;
  }
  v7 = this->fields.mValue;
  v8 = fminf(v7, 1.0);
  if ( v7 < 0.0 )
    v8 = 0.0;
  if ( v7 != v8 )
    this->fields.mValue = v8;
  v9 = this->fields.numberOfSteps;
  if ( v9 < 0 )
  {
    this->fields.numberOfSteps = 0;
  }
  else if ( v9 >= 21 )
  {
    this->fields.numberOfSteps = 20;
  }
}


float UIProgressBar__ScreenToValue(UIProgressBar_o *this, UnityEngine_Vector2_o screenPos, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x20
  const MethodInfo *v9; // x1
  float v10; // s0
  float v11; // s10
  float v12; // s14
  float z; // s13
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo *v15; // x1
  float v16; // s8
  __int64 v17; // kr50_8
  float v18; // s9
  float v19; // s0
  struct UnityEngine_Mathf_StaticFields *v20; // x8
  float v21; // s0
  float result; // s0
  UnityEngine_Ray_o v23; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Ray_o v24; // [xsp+20h] [xbp-90h] BYREF
  float v25; // [xsp+88h] [xbp-28h]
  float v26; // [xsp+8Ch] [xbp-24h]
  UnityEngine_Vector3_o v27; // 0:kr10_12.12
  UnityEngine_Vector3_o position; // 0:kr24_12.12
  UnityEngine_Vector3_o v29; // 0:kr44_12.12
  UnityEngine_Quaternion_o rotation; // 0:kr00_16.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  memset(&v24, 0, sizeof(v24));
  cachedTransform = UIProgressBar__get_cachedTransform(this, method);
  if ( !cachedTransform )
    goto LABEL_22;
  v8 = cachedTransform;
  rotation = UnityEngine_Transform__get_rotation(cachedTransform, 0);
  if ( !byte_4D2D067 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2D067 = 1;
  }
  v27 = UnityEngine_Quaternion__op_Multiply_72058644(
          rotation,
          UnityEngine_Vector3_TypeInfo->static_fields->backVector,
          0);
  position = UnityEngine_Transform__get_position(v8, 0);
  v25 = position.fields.y;
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = sqrtf(
          (float)(v27.fields.z * v27.fields.z)
        + (float)((float)(v27.fields.x * v27.fields.x) + (float)(v27.fields.y * v27.fields.y)));
  v26 = position.fields.x;
  if ( v10 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v11 = static_fields->zeroVector.fields.x;
    v12 = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v11 = v27.fields.x / v10;
    v12 = v27.fields.y / v10;
    z = v27.fields.z / v10;
  }
  cachedTransform = (UnityEngine_Transform_o *)UIProgressBar__get_cachedCamera(this, v9);
  if ( !cachedTransform )
LABEL_22:
    sub_1C93D2C(cachedTransform, v7);
  v31.fields.z = 0.0;
  v31.fields.x = x;
  v31.fields.y = y;
  UnityEngine_Camera__ScreenPointToRay_71924968(&v23, (UnityEngine_Camera_o *)cachedTransform, v31, 0);
  v24 = v23;
  v16 = v23.fields.m_Origin.fields.z;
  v17 = *(_QWORD *)&v23.fields.m_Origin.fields.x;
  v18 = (float)(z * v23.fields.m_Direction.fields.z)
      + (float)((float)(v11 * v23.fields.m_Direction.fields.x) + (float)(v12 * v23.fields.m_Direction.fields.y));
  if ( !byte_4D2A13D )
  {
    sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
    byte_4D2A13D = 1;
  }
  v19 = fmaxf(fabsf(v18), 0.0) * 0.000001;
  v20 = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v19 <= (float)(v20->Epsilon * 8.0) )
    v19 = v20->Epsilon * 8.0;
  if ( vabds_f32(0.0, v18) < v19 )
    return UIProgressBar__get_value(this, v15);
  v21 = (float)((float)((float)(position.fields.z * z) + (float)((float)(v26 * v11) + (float)(v25 * v12)))
              - (float)((float)(z * v16) + (float)((float)(v11 * *(float *)&v17) + (float)(v12 * *((float *)&v17 + 1)))))
      / v18;
  if ( v21 <= 0.0 )
    return UIProgressBar__get_value(this, v15);
  Point = UnityEngine_Ray__GetPoint(&v24, v21, 0);
  v29 = UnityEngine_Transform__InverseTransformPoint(v8, Point, 0);
  ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *, float, float, float))this->klass->vtable._6_LocalToValue.methodPtr)(
    this,
    this->klass->vtable._6_LocalToValue.method,
    v29.fields.x,
    v29.fields.y,
    v29.fields.z);
  return result;
}


void UIProgressBar__SetThumbPosition(UIProgressBar_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *thumb; // x0
  UnityEngine_Object_o *parent; // x20
  unsigned __int64 v9; // kr00_8
  double v10; // d0
  double v11; // d0
  float v12; // s1
  __int64 v13; // x8
  float v14; // s0
  float v15; // s1
  float v16; // s8
  double v17; // d0
  double v18; // d0
  float v19; // s1
  __int64 v20; // x8
  float v21; // s0
  float v22; // s1
  float v23; // s9
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o position; // 0:kr14_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4D3511A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3511A = 1;
  }
  thumb = this->fields.thumb;
  if ( !thumb )
    goto LABEL_45;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(thumb, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  thumb = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( ((unsigned __int8)thumb & 1) != 0 )
  {
    if ( !parent )
      goto LABEL_45;
    v27.fields.x = x;
    v27.fields.y = y;
    v27.fields.z = z;
    v9 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v27, 0);
    v10 = modf(*(float *)&v9, &iptr);
    if ( *(float *)&v9 >= 0.0 )
    {
      if ( v10 != 0.5 )
      {
        v16 = floorf(*(float *)&v9 + 0.5);
        goto LABEL_26;
      }
      v11 = iptr;
      v12 = 1.0;
    }
    else
    {
      if ( v10 != -0.5 )
      {
        v16 = ceilf(*(float *)&v9 + -0.5);
        goto LABEL_26;
      }
      v11 = iptr;
      v12 = -1.0;
    }
    v13 = (__int64)v11;
    v14 = v11;
    v15 = v14 + v12;
    if ( (v13 & 1) != 0 )
      v16 = v15;
    else
      v16 = v14;
LABEL_26:
    v17 = modf(*((float *)&v9 + 1), &iptr);
    if ( *((float *)&v9 + 1) >= 0.0 )
    {
      if ( v17 != 0.5 )
      {
        v23 = floorf(*((float *)&v9 + 1) + 0.5);
        goto LABEL_36;
      }
      v18 = iptr;
      v19 = 1.0;
    }
    else
    {
      if ( v17 != -0.5 )
      {
        v23 = ceilf(*((float *)&v9 + 1) + -0.5);
        goto LABEL_36;
      }
      v18 = iptr;
      v19 = -1.0;
    }
    v20 = (__int64)v18;
    v21 = v18;
    v22 = v21 + v19;
    if ( (v20 & 1) != 0 )
      v23 = v22;
    else
      v23 = v21;
LABEL_36:
    thumb = this->fields.thumb;
    if ( !thumb )
      goto LABEL_45;
    localPosition = UnityEngine_Transform__get_localPosition(thumb, 0);
    if ( !byte_4D2A137 )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A137 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf(
           (float)(localPosition.fields.z * localPosition.fields.z)
         + (float)((float)((float)(localPosition.fields.x - v16) * (float)(localPosition.fields.x - v16))
                 + (float)((float)(localPosition.fields.y - v23) * (float)(localPosition.fields.y - v23)))) > 0.001 )
    {
      thumb = this->fields.thumb;
      if ( thumb )
      {
        v29.fields.x = v16;
        v29.fields.y = v23;
        v29.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(thumb, v29, 0);
        return;
      }
LABEL_45:
      sub_1C93D2C(thumb, method);
    }
    return;
  }
  thumb = this->fields.thumb;
  if ( !thumb )
    goto LABEL_45;
  position = UnityEngine_Transform__get_position(thumb, 0);
  if ( !byte_4D2A137 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A137 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf(
         (float)((float)(position.fields.z - z) * (float)(position.fields.z - z))
       + (float)((float)((float)(position.fields.x - x) * (float)(position.fields.x - x))
               + (float)((float)(position.fields.y - y) * (float)(position.fields.y - y)))) > 0.00001 )
  {
    thumb = this->fields.thumb;
    if ( thumb )
    {
      v28.fields.x = x;
      v28.fields.y = y;
      v28.fields.z = z;
      UnityEngine_Transform__set_position(thumb, v28, 0);
      return;
    }
    goto LABEL_45;
  }
}


void UIProgressBar__Start(UIProgressBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBG; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UIWidget_o *v6; // x8
  UnityEngine_Object_o *current; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D35116 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIProgressBar_TypeInfo);
    byte_4D35116 = 1;
  }
  ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._4_Upgrade.methodPtr)(
    this,
    this->klass->vtable._4_Upgrade.method);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    mBG = (UnityEngine_Object_o *)this->fields.mBG;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality(mBG, 0, 0);
    if ( v4 )
    {
      v6 = this->fields.mBG;
      if ( !v6 )
        sub_1C93D2C(v4, v5);
      v6->fields.autoResizeBoxCollider = 1;
    }
    ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._5_OnStart.methodPtr)(
      this,
      this->klass->vtable._5_OnStart.method);
    current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) && this->fields.onChange )
    {
      UIProgressBar_TypeInfo->static_fields->current = this;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
        (int32_t)this,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      onChange = this->fields.onChange;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49943632(onChange, 0);
      UIProgressBar_TypeInfo->static_fields->current = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)UIProgressBar_TypeInfo->static_fields, 0, v15, v16, v17, v18, v19, v20);
    }
  }
  ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._7_ForceUpdate.methodPtr)(
    this,
    this->klass->vtable._7_ForceUpdate.method);
}


void UIProgressBar__Update(UIProgressBar_o *this, const MethodInfo *method)
{
  if ( this->fields.mIsDirty )
    ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._7_ForceUpdate.methodPtr)(
      this,
      this->klass->vtable._7_ForceUpdate.method);
}


void UIProgressBar__Upgrade(UIProgressBar_o *this, const MethodInfo *method)
{
  ;
}


float UIProgressBar__get_alpha(UIProgressBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFG; // x20
  __int64 v4; // x1
  struct UIWidget_o *v5; // x0
  UnityEngine_Object_o *mBG; // x20

  if ( (byte_4D35114 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35114 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v5 = this->fields.mFG;
    if ( v5 )
      return ((float (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v5->klass->vtable._7_get_alpha.methodPtr)(
               v5,
               v5->klass->vtable._7_get_alpha.method);
LABEL_12:
    sub_1C93D2C(v5, v4);
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v5 = this->fields.mBG;
    if ( v5 )
      return ((float (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v5->klass->vtable._7_get_alpha.methodPtr)(
               v5,
               v5->klass->vtable._7_get_alpha.method);
    goto LABEL_12;
  }
  return 1.0;
}


UIWidget_o *UIProgressBar__get_backgroundWidget(UIProgressBar_o *this, const MethodInfo *method)
{
  return this->fields.mBG;
}


UnityEngine_Camera_o *UIProgressBar__get_cachedCamera(UIProgressBar_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_mCam; // x19
  UnityEngine_Object_o *mCam; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t layer; // w20
  UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D35110 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35110 = 1;
  }
  p_mCam = (GrandQuestFolderBoardItem_o *)&this->fields.mCam;
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v6);
    layer = UnityEngine_GameObject__get_layer(gameObject, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
    p_mCam->klass = (GrandQuestFolderBoardItem_c *)CameraForLayer;
    sub_1C93A78(p_mCam, (int32_t)CameraForLayer, v9, v10, v11, v12, v13, v14);
  }
  return (UnityEngine_Camera_o *)p_mCam->klass;
}


UnityEngine_Transform_o *UIProgressBar__get_cachedTransform(UIProgressBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D3510F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3510F = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  }
  return this->fields.mTrans;
}


int32_t UIProgressBar__get_fillDirection(UIProgressBar_o *this, const MethodInfo *method)
{
  return this->fields.mFill;
}


UIWidget_o *UIProgressBar__get_foregroundWidget(UIProgressBar_o *this, const MethodInfo *method)
{
  return this->fields.mFG;
}


bool UIProgressBar__get_isHorizontal(UIProgressBar_o *this, const MethodInfo *method)
{
  return this->fields.mFill < 2u;
}


bool UIProgressBar__get_isInverted(UIProgressBar_o *this, const MethodInfo *method)
{
  return (this->fields.mFill & 0xFFFFFFFD) == 1;
}


float UIProgressBar__get_value(UIProgressBar_o *this, const MethodInfo *method)
{
  int32_t numberOfSteps; // w8
  float result; // s0
  float v4; // s8
  double v6; // d0
  double v7; // d0
  float v8; // s1
  __int64 v9; // x8
  float v10; // s0
  float v11; // s1
  double iptr; // [xsp+8h] [xbp-18h] BYREF

  numberOfSteps = this->fields.numberOfSteps;
  result = this->fields.mValue;
  if ( numberOfSteps >= 2 )
  {
    v4 = result * (float)(numberOfSteps - 1);
    v6 = modf(v4, &iptr);
    if ( v4 >= 0.0 )
    {
      if ( v6 == 0.5 )
      {
        v7 = iptr;
        v8 = 1.0;
LABEL_7:
        v9 = (__int64)v7;
        v10 = v7;
        v11 = v10 + v8;
        if ( (v9 & 1) != 0 )
          v10 = v11;
        return v10 / (float)(this->fields.numberOfSteps - 1);
      }
      v10 = floorf(v4 + 0.5);
    }
    else
    {
      if ( v6 == -0.5 )
      {
        v7 = iptr;
        v8 = -1.0;
        goto LABEL_7;
      }
      v10 = ceilf(v4 + -0.5);
    }
    return v10 / (float)(this->fields.numberOfSteps - 1);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void UIProgressBar__set_alpha(UIProgressBar_o *this, float value, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *mFG; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  Il2CppObject *Component_object; // x20
  struct UIWidget_o *v9; // x8
  UnityEngine_Collider_o *v10; // x20
  float v11; // s0
  Il2CppObject *v12; // x20
  struct UIWidget_o *v13; // x8
  UnityEngine_Behaviour_o *v14; // x20
  float v15; // s0
  UnityEngine_Object_o *mBG; // x20
  Il2CppObject *v17; // x20
  struct UIWidget_o *v18; // x8
  UnityEngine_Collider_o *v19; // x20
  float v20; // s0
  Il2CppObject *v21; // x20
  struct UIWidget_o *v22; // x8
  UnityEngine_Behaviour_o *v23; // x20
  float v24; // s0
  UnityEngine_Object_o *thumb; // x20
  Il2CppObject *v26; // x19
  Il2CppObject *v27; // x20
  Il2CppObject *v28; // x20
  float v29; // s0
  Il2CppObject *v30; // x20
  Il2CppObject *v31; // x20
  float v32; // s0

  v3 = *(long double *)&value;
  if ( (byte_4D35115 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35115 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v7 )
      goto LABEL_60;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))v7->klass[1]._1.element_class)(
      v7,
      v7->klass[1]._1.castClass,
      v3);
    v7 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v7 )
      goto LABEL_60;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v7,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !this->fields.mFG )
      goto LABEL_60;
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.mFG,
                                        (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
      v9 = this->fields.mFG;
      if ( !v9 )
        goto LABEL_60;
      v10 = (UnityEngine_Collider_o *)v7;
      v7 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v9->klass->vtable._7_get_alpha.methodPtr)(
                                        v9,
                                        this->fields.mFG,
                                        v9->klass->vtable._7_get_alpha.method);
      if ( !v10 )
        goto LABEL_60;
      UnityEngine_Collider__set_enabled(v10, v11 > 0.001, 0);
    }
    else
    {
      v12 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this->fields.mFG,
              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0) )
      {
        v7 = (UnityEngine_Component_o *)this->fields.mFG;
        if ( !v7 )
          goto LABEL_60;
        v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          v7,
                                          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v13 = this->fields.mFG;
        if ( !v13 )
          goto LABEL_60;
        v14 = (UnityEngine_Behaviour_o *)v7;
        v7 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v13->klass->vtable._7_get_alpha.methodPtr)(
                                          v13,
                                          this->fields.mFG,
                                          v13->klass->vtable._7_get_alpha.method);
        if ( !v14 )
          goto LABEL_60;
        UnityEngine_Behaviour__set_enabled(v14, v15 > 0.001, 0);
      }
    }
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v7 )
      goto LABEL_60;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))v7->klass[1]._1.element_class)(
      v7,
      v7->klass[1]._1.castClass,
      v3);
    v7 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v7 )
      goto LABEL_60;
    v17 = UnityEngine_Component__GetComponent_object_(
            v7,
            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
    if ( !this->fields.mBG )
      goto LABEL_60;
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.mBG,
                                        (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
      v18 = this->fields.mBG;
      if ( !v18 )
        goto LABEL_60;
      v19 = (UnityEngine_Collider_o *)v7;
      v7 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v18->klass->vtable._7_get_alpha.methodPtr)(
                                        v18,
                                        this->fields.mBG,
                                        v18->klass->vtable._7_get_alpha.method);
      if ( !v19 )
        goto LABEL_60;
      UnityEngine_Collider__set_enabled(v19, v20 > 0.001, 0);
    }
    else
    {
      v21 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this->fields.mBG,
              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0) )
      {
        v7 = (UnityEngine_Component_o *)this->fields.mBG;
        if ( !v7 )
          goto LABEL_60;
        v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          v7,
                                          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v22 = this->fields.mBG;
        if ( !v22 )
          goto LABEL_60;
        v23 = (UnityEngine_Behaviour_o *)v7;
        v7 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v22->klass->vtable._7_get_alpha.methodPtr)(
                                          v22,
                                          this->fields.mBG,
                                          v22->klass->vtable._7_get_alpha.method);
        if ( !v23 )
          goto LABEL_60;
        UnityEngine_Behaviour__set_enabled(v23, v24 > 0.001, 0);
      }
    }
  }
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v7 )
      goto LABEL_60;
    v26 = UnityEngine_Component__GetComponent_object_(
            v7,
            (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_60;
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))v26->klass->vtable[8].methodPtr)(
        v26,
        v26->klass->vtable[8].method,
        v3);
      v27 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v26,
              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
      {
        v28 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v26,
                (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
        v7 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v26->klass->vtable[7].methodPtr)(
                                          v26,
                                          v26->klass->vtable[7].method);
        if ( v28 )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v28, v29 > 0.001, 0);
          return;
        }
LABEL_60:
        sub_1C93D2C(v7, v6);
      }
      v30 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v26,
              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0, 0) )
      {
        v31 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v26,
                (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v7 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v26->klass->vtable[7].methodPtr)(
                                          v26,
                                          v26->klass->vtable[7].method);
        if ( !v31 )
          goto LABEL_60;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v31, v32 > 0.001, 0);
      }
    }
  }
}


void UIProgressBar__set_backgroundWidget(UIProgressBar_o *this, UIWidget_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mBG; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D35112 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35112 = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mBG = value;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mBG, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mIsDirty = 1;
  }
}


void UIProgressBar__set_fillDirection(UIProgressBar_o *this, int32_t value, const MethodInfo *method)
{
  UIProgressBar_c *klass; // x8

  if ( this->fields.mFill != value )
  {
    klass = this->klass;
    this->fields.mFill = value;
    ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))klass->vtable._7_ForceUpdate.methodPtr)(
      this,
      klass->vtable._7_ForceUpdate.method);
  }
}


void UIProgressBar__set_foregroundWidget(UIProgressBar_o *this, UIWidget_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mFG; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D35111 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35111 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mFG = value;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mFG, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mIsDirty = 1;
  }
}


void UIProgressBar__set_value(UIProgressBar_o *this, float value, const MethodInfo *method)
{
  float v5; // s0
  float v6; // s9
  float v7; // s0
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *current; // x20
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_EventDelegate__o *v17; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D35113 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIProgressBar_TypeInfo);
    byte_4D35113 = 1;
  }
  v5 = fminf(value, 1.0);
  if ( value < 0.0 )
    v6 = 0.0;
  else
    v6 = v5;
  if ( this->fields.mValue != v6 )
  {
    v7 = UIProgressBar__get_value(this, method);
    this->fields.mValue = v6;
    if ( v7 != UIProgressBar__get_value(this, v8) )
    {
      ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._7_ForceUpdate.methodPtr)(
        this,
        this->klass->vtable._7_ForceUpdate.method);
      current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(current, 0, 0) )
      {
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
        {
          onChange = this->fields.onChange;
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          if ( EventDelegate__IsValid_49972204(onChange, 0) )
          {
            UIProgressBar_TypeInfo->static_fields->current = this;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
              (int32_t)this,
              v11,
              v12,
              v13,
              v14,
              v15,
              v16);
            v17 = this->fields.onChange;
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            EventDelegate__Execute_49943632(v17, 0);
            UIProgressBar_TypeInfo->static_fields->current = 0;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
              0,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
          }
        }
      }
    }
  }
}


void UIProgressBar_OnDragFinished___ctor(
        UIProgressBar_OnDragFinished_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ACFD94;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACFD54;
}


System_IAsyncResult_o *UIProgressBar_OnDragFinished__BeginInvoke(
        UIProgressBar_OnDragFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void UIProgressBar_OnDragFinished__EndInvoke(
        UIProgressBar_OnDragFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void UIProgressBar_OnDragFinished__Invoke(UIProgressBar_OnDragFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}