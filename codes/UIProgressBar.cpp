void UIProgressBar___ctor(UIProgressBar_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5B411 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4C5B411 = 1;
  }
  this->fields.mValue = 1.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onChange, (int32_t)v3, v4, v5);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  float v18; // s2 OVERLAPPED
  float v19; // s1
  float v20; // s3
  UIWidget_o *v21; // x0
  float v22; // s0
  struct UIWidget_o *v23; // x20
  int32_t v24; // w21
  float v25; // s0
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *thumb; // x20
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *mBG; // x20
  UnityEngine_Object_o *v30; // x20
  __int64 v31; // x20
  UnityEngine_Object_o *v32; // x21
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  unsigned int v37; // w8
  float v38; // s0
  float v39; // s2
  float v40; // s4
  float v41; // s3
  float v42; // s1
  UnityEngine_Object_o *v43; // x21
  unsigned __int64 v44; // x9
  UnityEngine_Transform_o *v45; // x21
  unsigned __int64 v46; // x22
  __int64 v47; // x24
  unsigned int v48; // w8
  float32x2_t v49; // d0
  float v50; // s1
  float32x2_t v51; // d8
  float v52; // s9
  float32x2_t v53; // d10
  float v54; // s11
  float32x2_t v55; // d12
  float v56; // s13
  unsigned int v57; // w20
  const MethodInfo *v58; // x1
  float v59; // s0
  float32x2_t v60; // d3
  float v61; // s1
  float32x2_t v62; // d2
  float v63; // s0
  float32x2_t v64; // d1
  float v65; // s2
  unsigned __int64 v66; // d0 OVERLAPPED
  float32x2_t v67; // d10
  float v68; // s11
  float32x2_t v69; // d12
  float v70; // s13
  float32x2_t v71; // d14
  float v72; // s15
  unsigned int v73; // w20
  float v74; // s0
  float32x2_t v75; // d4
  float v76; // s1
  float32x2_t v77; // d3
  int v78; // s1
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B40F & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIBasicSprite_TypeInfo);
    byte_4C5B40F = 1;
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
    v23 = this->fields.mFG;
    v24 = this->fields.mFill;
    v25 = UIProgressBar__get_value(this, v9);
    if ( !v23 )
      goto LABEL_100;
    v19 = 0.0;
    if ( (v24 & 0xFFFFFFFD) == 1 )
    {
      v19 = 1.0 - v25;
      v20 = 1.0;
    }
    else
    {
      v20 = v25;
    }
    v22 = 0.0;
    v18 = 1.0;
    v21 = v23;
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
      v18 = 1.0;
    else
      v18 = v16;
    v19 = 0.0;
    v20 = 1.0;
    v21 = v14;
    v22 = v17;
  }
  UIWidget__set_drawRegion(v21, *(UnityEngine_Vector4_o *)(&v18 - 2), 0);
  cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mFG;
  if ( !cachedTransform )
    goto LABEL_100;
  UnityEngine_Behaviour__set_enabled(cachedTransform, 1, 0);
  v13 = UIProgressBar__get_value(this, v26) < 0.001;
LABEL_43:
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v28 = (UnityEngine_Object_o *)this->fields.mFG;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
      goto LABEL_52;
    mBG = (UnityEngine_Object_o *)this->fields.mBG;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
    {
LABEL_52:
      v30 = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
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
      v31 = ((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))cachedTransform->klass[1]._1.generic_class)(
              cachedTransform,
              cachedTransform->klass[1]._1.typeMetadataHandle);
      v32 = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
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
      if ( !v31 )
        goto LABEL_100;
      v37 = *(_DWORD *)(v31 + 24);
      if ( v37 )
      {
        *(float *)(v31 + 32) = v33 + *(float *)(v31 + 32);
        if ( v37 != 1 )
        {
          *(float *)(v31 + 44) = v33 + *(float *)(v31 + 44);
          if ( v37 > 2 )
          {
            *(float *)(v31 + 56) = *(float *)(v31 + 56) - v35;
            if ( v37 != 3 )
            {
              v38 = v34 + *(float *)(v31 + 36);
              v39 = *(float *)(v31 + 68) - v35;
              v40 = *(float *)(v31 + 48) - v36;
              v41 = *(float *)(v31 + 60) - v36;
              v42 = v34 + *(float *)(v31 + 72);
              *(float *)(v31 + 36) = v38;
              *(float *)(v31 + 48) = v40;
              *(float *)(v31 + 60) = v41;
              *(float *)(v31 + 68) = v39;
              *(float *)(v31 + 72) = v42;
              v43 = (UnityEngine_Object_o *)this->fields.mFG;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
              {
                cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mFG;
                if ( !cachedTransform )
LABEL_100:
                  sub_1C3E7C0(cachedTransform, v9);
              }
              else
              {
                cachedTransform = (UnityEngine_Behaviour_o *)this->fields.mBG;
                if ( !cachedTransform )
                  goto LABEL_100;
              }
              cachedTransform = (UnityEngine_Behaviour_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
              LODWORD(v44) = *(_DWORD *)(v31 + 24);
              v45 = (UnityEngine_Transform_o *)cachedTransform;
              v46 = 0;
              v47 = v31 + 40;
              do
              {
                if ( v46 >= (unsigned int)v44 )
                  goto LABEL_99;
                if ( !v45 )
                  goto LABEL_100;
                v79 = UnityEngine_Transform__TransformPoint(v45, *(UnityEngine_Vector3_o *)(v47 - 8), 0);
                v44 = *(unsigned int *)(v31 + 24);
                if ( v46 >= v44 )
                  goto LABEL_99;
                ++v46;
                *(UnityEngine_Vector3_o *)(v47 - 8) = v79;
                v47 += 12;
              }
              while ( v46 != 4 );
              if ( (_DWORD)v44 )
              {
                v48 = this->fields.mFill;
                v49.n64_u64[0] = *(unsigned __int64 *)(v31 + 32);
                v50 = *(float *)(v31 + 40);
                if ( v48 > 1 )
                {
                  if ( (unsigned int)v44 > 3 )
                  {
                    v67.n64_u64[0] = *(unsigned __int64 *)(v31 + 44);
                    v68 = *(float *)(v31 + 52);
                    v69.n64_u64[0] = *(unsigned __int64 *)(v31 + 56);
                    v70 = *(float *)(v31 + 64);
                    v71.n64_u64[0] = vadd_f32(
                                       v49,
                                       vmul_f32(
                                         vsub_f32(*(float32x2_t *)(v31 + 68), v49),
                                         (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                    v72 = v50 + (float)((float)(*(float *)(v31 + 76) - v50) * 0.5);
                    v73 = v48 & 0xFFFFFFFD;
                    v74 = UIProgressBar__get_value(this, v9);
                    v75.n64_u64[0] = vmul_f32(vsub_f32(v69, v67), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                    if ( v73 == 1 )
                      v74 = 1.0 - v74;
                    v76 = fminf(v74, 1.0);
                    v77.n64_u64[0] = vsub_f32(vadd_f32(v67, v75), v71).n64_u64[0];
                    if ( v74 < 0.0 )
                      v76 = 0.0;
                    v65 = v72 + (float)((float)((float)(v68 + (float)((float)(v70 - v68) * 0.5)) - v72) * v76);
                    v66 = vadd_f32(v71, vmul_n_f32(v77, v76)).n64_u64[0];
                    goto LABEL_94;
                  }
                }
                else if ( (unsigned int)v44 >= 4 )
                {
                  v51.n64_u64[0] = *(unsigned __int64 *)(v31 + 56);
                  v52 = *(float *)(v31 + 64);
                  v53.n64_u64[0] = *(unsigned __int64 *)(v31 + 68);
                  v54 = *(float *)(v31 + 76);
                  v55.n64_u64[0] = vadd_f32(
                                     v49,
                                     vmul_f32(
                                       vsub_f32(*(float32x2_t *)(v31 + 44), v49),
                                       (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                  v56 = v50 + (float)((float)(*(float *)(v31 + 52) - v50) * 0.5);
                  v57 = v48 & 0xFFFFFFFD;
                  v59 = UIProgressBar__get_value(this, v9);
                  v60.n64_u64[0] = vmul_f32(vsub_f32(v53, v51), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                  if ( v57 == 1 )
                    v59 = 1.0 - v59;
                  v61 = fminf(v59, 1.0);
                  v62.n64_u64[0] = vsub_f32(vadd_f32(v51, v60), v55).n64_u64[0];
                  if ( v59 < 0.0 )
                    v61 = 0.0;
                  v63 = (float)((float)(v52 + (float)((float)(v54 - v52) * 0.5)) - v56) * v61;
                  v64.n64_u64[0] = vmul_n_f32(v62, v61).n64_u64[0];
                  v65 = v56 + v63;
                  v66 = vadd_f32(v55, v64).n64_u64[0];
LABEL_94:
                  v78 = HIDWORD(v66);
                  UIProgressBar__SetThumbPosition(this, *(UnityEngine_Vector3_o *)&v66, v58);
                  goto LABEL_95;
                }
              }
            }
          }
        }
      }
LABEL_99:
      sub_1C3E7C8(cachedTransform, v9);
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
  if ( (byte_4C5B40E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B40E = 1;
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
    sub_1C3E7C0(v8, v7);
  }
  if ( LODWORD(v8->fields.m_CancellationTokenSource) <= 2 )
    sub_1C3E7C8(v8, v7);
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

  if ( (byte_4C5B40D & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    byte_4C5B40D = 1;
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


// local variable allocation has failed, the output may be wrong!
float UIProgressBar__ScreenToValue(UIProgressBar_o *this, UnityEngine_Vector2_o screenPos, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x20
  float v9; // s10
  float v10; // s11
  float z; // s12
  float w; // s13
  float v13; // s13
  float v14; // s14
  float v15; // s15
  const MethodInfo *v16; // x1
  float v17; // s10
  float v18; // s0
  float v19; // s10
  float v20; // s14
  float v21; // s13
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo *v23; // x1
  float v24; // s8
  __int64 v25; // kr00_8
  float v26; // s9
  float v27; // s0
  struct UnityEngine_Mathf_StaticFields *v28; // x8
  float v29; // s0
  float result; // s0
  float v31; // [xsp+4h] [xbp-ACh]
  UnityEngine_Ray_o v32; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Ray_o v33; // [xsp+20h] [xbp-90h] BYREF
  float v34; // [xsp+88h] [xbp-28h]
  float v35; // [xsp+8Ch] [xbp-24h]
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  memset(&v33, 0, sizeof(v33));
  cachedTransform = UIProgressBar__get_cachedTransform(this, method);
  if ( !cachedTransform )
    goto LABEL_22;
  v8 = cachedTransform;
  rotation = UnityEngine_Transform__get_rotation(cachedTransform, 0);
  v9 = rotation.fields.x;
  v10 = rotation.fields.y;
  z = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_4C53574 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C53574 = 1;
  }
  v42.fields.x = v9;
  v42.fields.y = v10;
  v42.fields.z = z;
  v42.fields.w = w;
  v36 = UnityEngine_Quaternion__op_Multiply_71280864(v42, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v13 = v36.fields.x;
  v14 = v36.fields.y;
  v15 = v36.fields.z;
  position = UnityEngine_Transform__get_position(v8, 0);
  v17 = position.fields.x;
  v34 = position.fields.y;
  v31 = position.fields.z;
  if ( !byte_4C506A4 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C506A4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v18 = sqrtf((float)(v15 * v15) + (float)((float)(v13 * v13) + (float)(v14 * v14)));
  v35 = v17;
  if ( v18 <= 0.00001 )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v19 = static_fields->zeroVector.fields.x;
    v20 = static_fields->zeroVector.fields.y;
    v21 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v19 = v13 / v18;
    v20 = v14 / v18;
    v21 = v15 / v18;
  }
  cachedTransform = (UnityEngine_Transform_o *)UIProgressBar__get_cachedCamera(this, v16);
  if ( !cachedTransform )
LABEL_22:
    sub_1C3E7C0(cachedTransform, v7);
  v38.fields.z = 0.0;
  v38.fields.x = x;
  v38.fields.y = y;
  UnityEngine_Camera__ScreenPointToRay_71148320(&v32, (UnityEngine_Camera_o *)cachedTransform, v38, 0);
  v33 = v32;
  v24 = v32.fields.m_Origin.fields.z;
  v25 = *(_QWORD *)&v32.fields.m_Origin.fields.x;
  v26 = (float)(v21 * v32.fields.m_Direction.fields.z)
      + (float)((float)(v19 * v32.fields.m_Direction.fields.x) + (float)(v20 * v32.fields.m_Direction.fields.y));
  if ( !byte_4C506A5 )
  {
    sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
    byte_4C506A5 = 1;
  }
  v27 = fmaxf(fabsf(v26), 0.0) * 0.000001;
  v28 = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v27 <= (float)(v28->Epsilon * 8.0) )
    v27 = v28->Epsilon * 8.0;
  if ( vabds_f32(0.0, v26) < v27 )
    return UIProgressBar__get_value(this, v23);
  v29 = (float)((float)((float)(v31 * v21) + (float)((float)(v35 * v19) + (float)(v34 * v20)))
              - (float)((float)(v21 * v24) + (float)((float)(v19 * *(float *)&v25) + (float)(v20 * *((float *)&v25 + 1)))))
      / v26;
  if ( v29 <= 0.0 )
    return UIProgressBar__get_value(this, v23);
  Point = UnityEngine_Ray__GetPoint(&v33, v29, 0);
  v40 = UnityEngine_Transform__InverseTransformPoint(v8, Point, 0);
  ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *, long double, long double, long double))this->klass->vtable._6_LocalToValue.methodPtr)(
    this,
    this->klass->vtable._6_LocalToValue.method,
    *(long double *)&v40.fields.x,
    *(long double *)&v40.fields.y,
    *(long double *)&v40.fields.z);
  return result;
}


void UIProgressBar__SetThumbPosition(UIProgressBar_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *thumb; // x0
  UnityEngine_Object_o *parent; // x20
  float v9; // s8
  float v10; // s9
  double v11; // d0
  double v12; // d0
  float v13; // s1
  float v14; // s11
  float v15; // s12
  float v16; // s13
  float v17; // s12
  __int64 v18; // x8
  float v19; // s0
  float v20; // s1
  float v21; // s8
  double v22; // d0
  double v23; // d0
  float v24; // s1
  __int64 v25; // x8
  float v26; // s0
  float v27; // s1
  float v28; // s9
  float v29; // s11
  float v30; // s12
  float v31; // s10
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_4C5B410 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B410 = 1;
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
    v33.fields.x = x;
    v33.fields.y = y;
    v33.fields.z = z;
    v34 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v33, 0);
    v9 = v34.fields.x;
    v10 = v34.fields.y;
    v11 = modf(v34.fields.x, &iptr);
    if ( v9 >= 0.0 )
    {
      if ( v11 != 0.5 )
      {
        v21 = floorf(v9 + 0.5);
        goto LABEL_26;
      }
      v12 = iptr;
      v13 = 1.0;
    }
    else
    {
      if ( v11 != -0.5 )
      {
        v21 = ceilf(v9 + -0.5);
        goto LABEL_26;
      }
      v12 = iptr;
      v13 = -1.0;
    }
    v18 = (__int64)v12;
    v19 = v12;
    v20 = v19 + v13;
    if ( (v18 & 1) != 0 )
      v21 = v20;
    else
      v21 = v19;
LABEL_26:
    v22 = modf(v10, &iptr);
    if ( v10 >= 0.0 )
    {
      if ( v22 != 0.5 )
      {
        v28 = floorf(v10 + 0.5);
        goto LABEL_36;
      }
      v23 = iptr;
      v24 = 1.0;
    }
    else
    {
      if ( v22 != -0.5 )
      {
        v28 = ceilf(v10 + -0.5);
        goto LABEL_36;
      }
      v23 = iptr;
      v24 = -1.0;
    }
    v25 = (__int64)v23;
    v26 = v23;
    v27 = v26 + v24;
    if ( (v25 & 1) != 0 )
      v28 = v27;
    else
      v28 = v26;
LABEL_36:
    thumb = this->fields.thumb;
    if ( !thumb )
      goto LABEL_45;
    localPosition = UnityEngine_Transform__get_localPosition(thumb, 0);
    v29 = localPosition.fields.x;
    v30 = localPosition.fields.y;
    v31 = localPosition.fields.z;
    if ( !byte_4C5069F )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C5069F = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( sqrtf(
           (float)(v31 * v31)
         + (float)((float)((float)(v29 - v21) * (float)(v29 - v21)) + (float)((float)(v30 - v28) * (float)(v30 - v28)))) > 0.001 )
    {
      thumb = this->fields.thumb;
      if ( thumb )
      {
        v38.fields.x = v21;
        v38.fields.y = v28;
        v38.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(thumb, v38, 0);
        return;
      }
LABEL_45:
      sub_1C3E7C0(thumb, method);
    }
    return;
  }
  thumb = this->fields.thumb;
  if ( !thumb )
    goto LABEL_45;
  position = UnityEngine_Transform__get_position(thumb, 0);
  v14 = position.fields.x;
  v15 = position.fields.y;
  v16 = position.fields.z;
  if ( !byte_4C5069F )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C5069F = 1;
  }
  v17 = v15 - y;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( sqrtf(
         (float)((float)(v16 - z) * (float)(v16 - z))
       + (float)((float)((float)(v14 - x) * (float)(v14 - x)) + (float)(v17 * v17))) > 0.00001 )
  {
    thumb = this->fields.thumb;
    if ( thumb )
    {
      v36.fields.x = x;
      v36.fields.y = y;
      v36.fields.z = z;
      UnityEngine_Transform__set_position(thumb, v36, 0);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C5B40C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIProgressBar_TypeInfo);
    byte_4C5B40C = 1;
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
        sub_1C3E7C0(v4, v5);
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
      sub_1C3E508((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, (int32_t)this, v8, v9);
      onChange = this->fields.onChange;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49293740(onChange, 0);
      UIProgressBar_TypeInfo->static_fields->current = 0;
      sub_1C3E508((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, 0, v11, v12);
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
  float result; // s0
  UnityEngine_Object_o *mBG; // x20

  if ( (byte_4C5B40A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B40A = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v5 = this->fields.mFG;
    if ( v5 )
    {
LABEL_7:
      ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v5->klass->vtable._7_get_alpha.methodPtr)(
        v5,
        v5->klass->vtable._7_get_alpha.method);
      return result;
    }
LABEL_12:
    sub_1C3E7C0(v5, v4);
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v5 = this->fields.mBG;
    if ( v5 )
      goto LABEL_7;
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
  CGThumbnailListItem_o *p_mCam; // x19
  UnityEngine_Object_o *mCam; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int32_t layer; // w20
  UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5B406 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B406 = 1;
  }
  p_mCam = (CGThumbnailListItem_o *)&this->fields.mCam;
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C3E7C0(0, v6);
    layer = UnityEngine_GameObject__get_layer(gameObject, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
    p_mCam->klass = (CGThumbnailListItem_c *)CameraForLayer;
    sub_1C3E508(p_mCam, (int32_t)CameraForLayer, v9, v10);
  }
  return (UnityEngine_Camera_o *)p_mCam->klass;
}


UnityEngine_Transform_o *UIProgressBar__get_cachedTransform(UIProgressBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C5B405 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B405 = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6);
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
  if ( (byte_4C5B40B & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B40B = 1;
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
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !this->fields.mFG )
      goto LABEL_60;
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.mFG,
                                        (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0) )
      {
        v7 = (UnityEngine_Component_o *)this->fields.mFG;
        if ( !v7 )
          goto LABEL_60;
        v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          v7,
                                          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
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
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
    if ( !this->fields.mBG )
      goto LABEL_60;
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.mBG,
                                        (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0) )
      {
        v7 = (UnityEngine_Component_o *)this->fields.mBG;
        if ( !v7 )
          goto LABEL_60;
        v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          v7,
                                          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
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
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
      {
        v28 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v26,
                (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
        v7 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v26->klass->vtable[7].methodPtr)(
                                          v26,
                                          v26->klass->vtable[7].method);
        if ( v28 )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v28, v29 > 0.001, 0);
          return;
        }
LABEL_60:
        sub_1C3E7C0(v7, v6);
      }
      v30 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v26,
              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0, 0) )
      {
        v31 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v26,
                (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C5B408 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B408 = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mBG = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mBG, (int32_t)value, v6, v7);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C5B407 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B407 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mFG = value;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mFG, (int32_t)value, v6, v7);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_EventDelegate__o *v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C5B409 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIProgressBar_TypeInfo);
    byte_4C5B409 = 1;
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
          if ( EventDelegate__IsValid_49322312(onChange, 0) )
          {
            UIProgressBar_TypeInfo->static_fields->current = this;
            sub_1C3E508((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, (int32_t)this, v11, v12);
            v13 = this->fields.onChange;
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            EventDelegate__Execute_49293740(v13, 0);
            UIProgressBar_TypeInfo->static_fields->current = 0;
            sub_1C3E508((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, 0, v14, v15);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A89684;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A89644;
}


System_IAsyncResult_o *UIProgressBar_OnDragFinished__BeginInvoke(
        UIProgressBar_OnDragFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void UIProgressBar_OnDragFinished__EndInvoke(
        UIProgressBar_OnDragFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UIProgressBar_OnDragFinished__Invoke(UIProgressBar_OnDragFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}