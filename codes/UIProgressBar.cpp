void UIProgressBar___ctor(UIProgressBar_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4761A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4C4761A = 1;
  }
  this->fields.mValue = 1.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onChange, (int32_t)v3, v4, v5);
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
  const MethodInfo *v48; // x1
  unsigned int v49; // w8
  float32x2_t v50; // d0
  float v51; // s1
  float32x2_t v52; // d8
  float v53; // s9
  float32x2_t v54; // d10
  float v55; // s11
  float32x2_t v56; // d12
  float v57; // s13
  unsigned int v58; // w20
  const MethodInfo *v59; // x1
  float v60; // s0
  float32x2_t v61; // d3
  float v62; // s1
  float32x2_t v63; // d2
  float v64; // s0
  float32x2_t v65; // d1
  float v66; // s2
  unsigned __int64 v67; // d0 OVERLAPPED
  float32x2_t v68; // d10
  float v69; // s11
  float32x2_t v70; // d12
  float v71; // s13
  float32x2_t v72; // d14
  float v73; // s15
  unsigned int v74; // w20
  float v75; // s0
  float32x2_t v76; // d4
  float v77; // s1
  float32x2_t v78; // d3
  int v79; // s1
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C47618 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIBasicSprite_TypeInfo);
    byte_4C47618 = 1;
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
                  sub_1C372B4(cachedTransform);
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
                v80 = UnityEngine_Transform__TransformPoint(v45, *(UnityEngine_Vector3_o *)(v47 - 8), 0);
                v44 = *(unsigned int *)(v31 + 24);
                if ( v46 >= v44 )
                  goto LABEL_99;
                ++v46;
                *(UnityEngine_Vector3_o *)(v47 - 8) = v80;
                v47 += 12;
              }
              while ( v46 != 4 );
              if ( (_DWORD)v44 )
              {
                v49 = this->fields.mFill;
                v50.n64_u64[0] = *(unsigned __int64 *)(v31 + 32);
                v51 = *(float *)(v31 + 40);
                if ( v49 > 1 )
                {
                  if ( (unsigned int)v44 > 3 )
                  {
                    v68.n64_u64[0] = *(unsigned __int64 *)(v31 + 44);
                    v69 = *(float *)(v31 + 52);
                    v70.n64_u64[0] = *(unsigned __int64 *)(v31 + 56);
                    v71 = *(float *)(v31 + 64);
                    v72.n64_u64[0] = vadd_f32(
                                       v50,
                                       vmul_f32(
                                         vsub_f32(*(float32x2_t *)(v31 + 68), v50),
                                         (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                    v73 = v51 + (float)((float)(*(float *)(v31 + 76) - v51) * 0.5);
                    v74 = v49 & 0xFFFFFFFD;
                    v75 = UIProgressBar__get_value(this, v48);
                    v76.n64_u64[0] = vmul_f32(vsub_f32(v70, v68), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                    if ( v74 == 1 )
                      v75 = 1.0 - v75;
                    v77 = fminf(v75, 1.0);
                    v78.n64_u64[0] = vsub_f32(vadd_f32(v68, v76), v72).n64_u64[0];
                    if ( v75 < 0.0 )
                      v77 = 0.0;
                    v66 = v73 + (float)((float)((float)(v69 + (float)((float)(v71 - v69) * 0.5)) - v73) * v77);
                    v67 = vadd_f32(v72, vmul_n_f32(v78, v77)).n64_u64[0];
                    goto LABEL_94;
                  }
                }
                else if ( (unsigned int)v44 >= 4 )
                {
                  v52.n64_u64[0] = *(unsigned __int64 *)(v31 + 56);
                  v53 = *(float *)(v31 + 64);
                  v54.n64_u64[0] = *(unsigned __int64 *)(v31 + 68);
                  v55 = *(float *)(v31 + 76);
                  v56.n64_u64[0] = vadd_f32(
                                     v50,
                                     vmul_f32(
                                       vsub_f32(*(float32x2_t *)(v31 + 44), v50),
                                       (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                  v57 = v51 + (float)((float)(*(float *)(v31 + 52) - v51) * 0.5);
                  v58 = v49 & 0xFFFFFFFD;
                  v60 = UIProgressBar__get_value(this, v48);
                  v61.n64_u64[0] = vmul_f32(vsub_f32(v54, v52), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
                  if ( v58 == 1 )
                    v60 = 1.0 - v60;
                  v62 = fminf(v60, 1.0);
                  v63.n64_u64[0] = vsub_f32(vadd_f32(v52, v61), v56).n64_u64[0];
                  if ( v60 < 0.0 )
                    v62 = 0.0;
                  v64 = (float)((float)(v53 + (float)((float)(v55 - v53) * 0.5)) - v57) * v62;
                  v65.n64_u64[0] = vmul_n_f32(v63, v62).n64_u64[0];
                  v66 = v57 + v64;
                  v67 = vadd_f32(v56, v65).n64_u64[0];
LABEL_94:
                  v79 = HIDWORD(v67);
                  UIProgressBar__SetThumbPosition(this, *(UnityEngine_Vector3_o *)&v67, v59);
                  goto LABEL_95;
                }
              }
            }
          }
        }
      }
LABEL_99:
      sub_1C372BC(cachedTransform);
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
  if ( (byte_4C47617 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47617 = 1;
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
    sub_1C372B4(v8);
  }
  if ( LODWORD(v8->fields.m_CancellationTokenSource) <= 2 )
    sub_1C372BC(v8);
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

  if ( (byte_4C47616 & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    byte_4C47616 = 1;
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
  UnityEngine_Transform_o *v7; // x20
  float v8; // s10
  float v9; // s11
  float z; // s12
  float w; // s13
  float v12; // s13
  float v13; // s14
  float v14; // s15
  const MethodInfo *v15; // x1
  float v16; // s10
  float v17; // s0
  float v18; // s10
  float v19; // s14
  float v20; // s13
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo *v22; // x1
  float v23; // s8
  __int64 v24; // kr00_8
  float v25; // s9
  float v26; // s0
  struct UnityEngine_Mathf_StaticFields *v27; // x8
  float v28; // s0
  float result; // s0
  float v30; // [xsp+4h] [xbp-ACh]
  UnityEngine_Ray_o v31; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Ray_o v32; // [xsp+20h] [xbp-90h] BYREF
  float v33; // [xsp+88h] [xbp-28h]
  float v34; // [xsp+8Ch] [xbp-24h]
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = screenPos.fields.y;
  x = screenPos.fields.x;
  memset(&v32, 0, sizeof(v32));
  cachedTransform = UIProgressBar__get_cachedTransform(this, method);
  if ( !cachedTransform )
    goto LABEL_22;
  v7 = cachedTransform;
  rotation = UnityEngine_Transform__get_rotation(cachedTransform, 0);
  v8 = rotation.fields.x;
  v9 = rotation.fields.y;
  z = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_4C3F7D9 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3F7D9 = 1;
  }
  v41.fields.x = v8;
  v41.fields.y = v9;
  v41.fields.z = z;
  v41.fields.w = w;
  v35 = UnityEngine_Quaternion__op_Multiply_71206052(v41, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v12 = v35.fields.x;
  v13 = v35.fields.y;
  v14 = v35.fields.z;
  position = UnityEngine_Transform__get_position(v7, 0);
  v16 = position.fields.x;
  v33 = position.fields.y;
  v30 = position.fields.z;
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = sqrtf((float)(v14 * v14) + (float)((float)(v12 * v12) + (float)(v13 * v13)));
  v34 = v16;
  if ( v17 <= 0.00001 )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v18 = static_fields->zeroVector.fields.x;
    v19 = static_fields->zeroVector.fields.y;
    v20 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v18 = v12 / v17;
    v19 = v13 / v17;
    v20 = v14 / v17;
  }
  cachedTransform = (UnityEngine_Transform_o *)UIProgressBar__get_cachedCamera(this, v15);
  if ( !cachedTransform )
LABEL_22:
    sub_1C372B4(cachedTransform);
  v37.fields.z = 0.0;
  v37.fields.x = x;
  v37.fields.y = y;
  UnityEngine_Camera__ScreenPointToRay_71073508(&v31, (UnityEngine_Camera_o *)cachedTransform, v37, 0);
  v32 = v31;
  v23 = v31.fields.m_Origin.fields.z;
  v24 = *(_QWORD *)&v31.fields.m_Origin.fields.x;
  v25 = (float)(v20 * v31.fields.m_Direction.fields.z)
      + (float)((float)(v18 * v31.fields.m_Direction.fields.x) + (float)(v19 * v31.fields.m_Direction.fields.y));
  if ( !byte_4C3C925 )
  {
    sub_1C37058(&UnityEngine_Mathf_TypeInfo);
    byte_4C3C925 = 1;
  }
  v26 = fmaxf(fabsf(v25), 0.0) * 0.000001;
  v27 = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v26 <= (float)(v27->Epsilon * 8.0) )
    v26 = v27->Epsilon * 8.0;
  if ( vabds_f32(0.0, v25) < v26 )
    return UIProgressBar__get_value(this, v22);
  v28 = (float)((float)((float)(v30 * v20) + (float)((float)(v34 * v18) + (float)(v33 * v19)))
              - (float)((float)(v20 * v23) + (float)((float)(v18 * *(float *)&v24) + (float)(v19 * *((float *)&v24 + 1)))))
      / v25;
  if ( v28 <= 0.0 )
    return UIProgressBar__get_value(this, v22);
  Point = UnityEngine_Ray__GetPoint(&v32, v28, 0);
  v39 = UnityEngine_Transform__InverseTransformPoint(v7, Point, 0);
  ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *, long double, long double, long double))this->klass->vtable._6_LocalToValue.methodPtr)(
    this,
    this->klass->vtable._6_LocalToValue.method,
    *(long double *)&v39.fields.x,
    *(long double *)&v39.fields.y,
    *(long double *)&v39.fields.z);
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
  if ( (byte_4C47619 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47619 = 1;
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
    if ( !byte_4C3C91F )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3C91F = 1;
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
      sub_1C372B4(thumb);
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
  if ( !byte_4C3C91F )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C91F = 1;
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
  struct UIWidget_o *v5; // x8
  UnityEngine_Object_o *current; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C47615 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIProgressBar_TypeInfo);
    byte_4C47615 = 1;
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
      v5 = this->fields.mBG;
      if ( !v5 )
        sub_1C372B4(v4);
      v5->fields.autoResizeBoxCollider = 1;
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
      sub_1C36FFC((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, (int32_t)this, v7, v8);
      onChange = this->fields.onChange;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49220500(onChange, 0);
      UIProgressBar_TypeInfo->static_fields->current = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, 0, v10, v11);
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
  struct UIWidget_o *v4; // x0
  float result; // s0
  UnityEngine_Object_o *mBG; // x20

  if ( (byte_4C47613 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47613 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v4 = this->fields.mFG;
    if ( v4 )
    {
LABEL_7:
      ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v4->klass->vtable._7_get_alpha.methodPtr)(
        v4,
        v4->klass->vtable._7_get_alpha.method);
      return result;
    }
LABEL_12:
    sub_1C372B4(v4);
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v4 = this->fields.mBG;
    if ( v4 )
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
  int32_t layer; // w20
  UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C4760F & 1) == 0 )
  {
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4760F = 1;
  }
  p_mCam = (CGThumbnailListItem_o *)&this->fields.mCam;
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    layer = UnityEngine_GameObject__get_layer(gameObject, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
    p_mCam->klass = (CGThumbnailListItem_c *)CameraForLayer;
    sub_1C36FFC(p_mCam, (int32_t)CameraForLayer, v8, v9);
  }
  return (UnityEngine_Camera_o *)p_mCam->klass;
}


UnityEngine_Transform_o *UIProgressBar__get_cachedTransform(UIProgressBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C4760E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4760E = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6);
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
  UnityEngine_Component_o *v6; // x0
  Il2CppObject *Component_object; // x20
  struct UIWidget_o *v8; // x8
  UnityEngine_Collider_o *v9; // x20
  float v10; // s0
  Il2CppObject *v11; // x20
  struct UIWidget_o *v12; // x8
  UnityEngine_Behaviour_o *v13; // x20
  float v14; // s0
  UnityEngine_Object_o *mBG; // x20
  Il2CppObject *v16; // x20
  struct UIWidget_o *v17; // x8
  UnityEngine_Collider_o *v18; // x20
  float v19; // s0
  Il2CppObject *v20; // x20
  struct UIWidget_o *v21; // x8
  UnityEngine_Behaviour_o *v22; // x20
  float v23; // s0
  UnityEngine_Object_o *thumb; // x20
  Il2CppObject *v25; // x19
  Il2CppObject *v26; // x20
  Il2CppObject *v27; // x20
  float v28; // s0
  Il2CppObject *v29; // x20
  Il2CppObject *v30; // x20
  float v31; // s0

  v3 = *(long double *)&value;
  if ( (byte_4C47614 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47614 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v6 )
      goto LABEL_60;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))v6->klass[1]._1.element_class)(
      v6,
      v6->klass[1]._1.castClass,
      v3);
    v6 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v6 )
      goto LABEL_60;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v6,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !this->fields.mFG )
      goto LABEL_60;
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v6 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.mFG,
                                        (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      v8 = this->fields.mFG;
      if ( !v8 )
        goto LABEL_60;
      v9 = (UnityEngine_Collider_o *)v6;
      v6 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v8->klass->vtable._7_get_alpha.methodPtr)(
                                        v8,
                                        this->fields.mFG,
                                        v8->klass->vtable._7_get_alpha.method);
      if ( !v9 )
        goto LABEL_60;
      UnityEngine_Collider__set_enabled(v9, v10 > 0.001, 0);
    }
    else
    {
      v11 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this->fields.mFG,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0) )
      {
        v6 = (UnityEngine_Component_o *)this->fields.mFG;
        if ( !v6 )
          goto LABEL_60;
        v6 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          v6,
                                          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v12 = this->fields.mFG;
        if ( !v12 )
          goto LABEL_60;
        v13 = (UnityEngine_Behaviour_o *)v6;
        v6 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v12->klass->vtable._7_get_alpha.methodPtr)(
                                          v12,
                                          this->fields.mFG,
                                          v12->klass->vtable._7_get_alpha.method);
        if ( !v13 )
          goto LABEL_60;
        UnityEngine_Behaviour__set_enabled(v13, v14 > 0.001, 0);
      }
    }
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v6 )
      goto LABEL_60;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, long double))v6->klass[1]._1.element_class)(
      v6,
      v6->klass[1]._1.castClass,
      v3);
    v6 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v6 )
      goto LABEL_60;
    v16 = UnityEngine_Component__GetComponent_object_(
            v6,
            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
    if ( !this->fields.mBG )
      goto LABEL_60;
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v6 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)this->fields.mBG,
                                        (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      v17 = this->fields.mBG;
      if ( !v17 )
        goto LABEL_60;
      v18 = (UnityEngine_Collider_o *)v6;
      v6 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v17->klass->vtable._7_get_alpha.methodPtr)(
                                        v17,
                                        this->fields.mBG,
                                        v17->klass->vtable._7_get_alpha.method);
      if ( !v18 )
        goto LABEL_60;
      UnityEngine_Collider__set_enabled(v18, v19 > 0.001, 0);
    }
    else
    {
      v20 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)this->fields.mBG,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0) )
      {
        v6 = (UnityEngine_Component_o *)this->fields.mBG;
        if ( !v6 )
          goto LABEL_60;
        v6 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          v6,
                                          (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v21 = this->fields.mBG;
        if ( !v21 )
          goto LABEL_60;
        v22 = (UnityEngine_Behaviour_o *)v6;
        v6 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v21->klass->vtable._7_get_alpha.methodPtr)(
                                          v21,
                                          this->fields.mBG,
                                          v21->klass->vtable._7_get_alpha.method);
        if ( !v22 )
          goto LABEL_60;
        UnityEngine_Behaviour__set_enabled(v22, v23 > 0.001, 0);
      }
    }
  }
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v6 )
      goto LABEL_60;
    v25 = UnityEngine_Component__GetComponent_object_(
            v6,
            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      if ( !v25 )
        goto LABEL_60;
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))v25->klass->vtable[8].methodPtr)(
        v25,
        v25->klass->vtable[8].method,
        v3);
      v26 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v25,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
      {
        v27 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v25,
                (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
        v6 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v25->klass->vtable[7].methodPtr)(
                                          v25,
                                          v25->klass->vtable[7].method);
        if ( v27 )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v27, v28 > 0.001, 0);
          return;
        }
LABEL_60:
        sub_1C372B4(v6);
      }
      v29 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v25,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0, 0) )
      {
        v30 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v25,
                (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v6 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v25->klass->vtable[7].methodPtr)(
                                          v25,
                                          v25->klass->vtable[7].method);
        if ( !v30 )
          goto LABEL_60;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v30, v31 > 0.001, 0);
      }
    }
  }
}


void UIProgressBar__set_backgroundWidget(UIProgressBar_o *this, UIWidget_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mBG; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C47611 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47611 = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mBG = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mBG, (int32_t)value, v6, v7);
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

  if ( (byte_4C47610 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47610 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mFG = value;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFG, (int32_t)value, v6, v7);
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

  if ( (byte_4C47612 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIProgressBar_TypeInfo);
    byte_4C47612 = 1;
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
          if ( EventDelegate__IsValid_49249072(onChange, 0) )
          {
            UIProgressBar_TypeInfo->static_fields->current = this;
            sub_1C36FFC((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, (int32_t)this, v11, v12);
            v13 = this->fields.onChange;
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            EventDelegate__Execute_49220500(v13, 0);
            UIProgressBar_TypeInfo->static_fields->current = 0;
            sub_1C36FFC((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, 0, v14, v15);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A822DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A8229C;
}


System_IAsyncResult_o *UIProgressBar_OnDragFinished__BeginInvoke(
        UIProgressBar_OnDragFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void UIProgressBar_OnDragFinished__EndInvoke(
        UIProgressBar_OnDragFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void UIProgressBar_OnDragFinished__Invoke(UIProgressBar_OnDragFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}