void UIProgressBar___ctor(UIProgressBar_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5975056 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_5975056 = 1;
  }
  v3 = System_Collections_Generic_List_EventDelegate__TypeInfo;
  this->fields.mValue = 1.0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onChange, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  UIWidgetContainer___ctor((UIWidgetContainer_o *)this, 0);
}


void UIProgressBar__ForceUpdate(UIProgressBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *mFG; // x20
  __int64 v5; // x1
  struct UIWidget_o *v6; // x8
  __int64 naturalAligment; // x11
  struct UIWidget_o *v8; // x20
  int v9; // w8
  __int64 cachedTransform; // x0
  const MethodInfo *v11; // x1
  UIBasicSprite_o *v12; // x0
  int32_t v13; // w1
  float value; // s0
  _BOOL4 v15; // w23
  struct UIWidget_o *v16; // x20
  unsigned int v17; // w21
  float v18; // s0
  UIWidget_o *v19; // x0
  float v20; // s4
  struct UIWidget_o *v24; // x20
  unsigned int v25; // w21
  float v26; // s0
  const MethodInfo *v27; // x1
  UnityEngine_Object_o *thumb; // x20
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Object_o *mBG; // x20
  UnityEngine_Object_o *v31; // x20
  __int64 v32; // x0
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x21
  __int64 v35; // x20
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s3
  unsigned int v40; // w8
  UnityEngine_Object_c *v41; // x0
  UnityEngine_Object_o *v42; // x21
  float v43; // s4
  float v44; // s3
  float v45; // s0
  int v46; // w8
  float v47; // s2
  float v48; // s1
  UnityEngine_Transform_o *v49; // x21
  unsigned __int64 v50; // x22
  __int64 v51; // x24
  unsigned int mFill; // w21
  unsigned int v53; // w8
  float32x2_t v54; // d8
  float v55; // s9
  float v56; // s10
  const MethodInfo *v57; // x1
  float v58; // s0
  float v59; // s1
  float32x2_t v60; // d3
  float32x2_t v61; // d4
  float32x2_t v62; // d2
  float v63; // s0
  float32x2_t v64; // d1
  float v65; // s2
  unsigned __int64 v66; // d0
  float v67; // s2
  float v68; // s8
  float v69; // s9
  float v70; // s0
  float v71; // s1
  float32x2_t v72; // d3
  float32x2_t v73; // d5
  float32x2_t v74; // d4
  float32x2_t v75; // d6
  float32x2_t v76; // d2
  float32x2_t v77; // d3
  float v78; // s0
  float32x2_t v79; // d1
  float v80; // s3
  UnityEngine_Vector3_o v81; // 0:kr00_12.12
  UnityEngine_Vector3_o v82; // 0:kr14_12.12
  UnityEngine_Vector4_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5975054 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIBasicSprite_TypeInfo);
    byte_5975054 = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  this->fields.mIsDirty = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
    goto LABEL_29;
  v6 = this->fields.mFG;
  if ( v6
    && (naturalAligment = UIBasicSprite_TypeInfo->_2.naturalAligment,
        v6->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UIBasicSprite_c *)v6->klass->_2.typeHierarchy[naturalAligment - 1] == UIBasicSprite_TypeInfo )
      v8 = this->fields.mFG;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.mFill > 1u )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_107;
      cachedTransform = ((__int64 (__fastcall *)(struct UIWidget_o *, void *))v8->klass[1]._1.image)(
                          v8,
                          v8->klass[1]._1.gc_desc);
      if ( (_DWORD)cachedTransform == 3 )
      {
        if ( HIDWORD(v8[1].klass) <= 1 )
        {
          v12 = (UIBasicSprite_o *)v8;
          v13 = 1;
          goto LABEL_27;
        }
LABEL_28:
        value = UIProgressBar__get_value(this, v11);
        UIBasicSprite__set_fillAmount((UIBasicSprite_o *)v8, value, 0);
LABEL_29:
        v15 = 0;
        goto LABEL_45;
      }
    }
    v24 = this->fields.mFG;
    if ( !v24 )
      goto LABEL_107;
    v25 = this->fields.mFill & 0xFFFFFFFD;
    v26 = UIProgressBar__get_value(this, v11);
    v83.fields.z = 1.0;
    v19 = v24;
    v83.fields.y = 1.0 - v26;
    if ( v25 == 1 )
    {
      v83.fields.w = 1.0;
    }
    else
    {
      v83.fields.y = 0.0;
      v83.fields.w = v26;
    }
    v83.fields.x = 0.0;
  }
  else
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_107;
      cachedTransform = ((__int64 (__fastcall *)(struct UIWidget_o *, void *))v8->klass[1]._1.image)(
                          v8,
                          v8->klass[1]._1.gc_desc);
      if ( (_DWORD)cachedTransform == 3 )
      {
        if ( HIDWORD(v8[1].klass) <= 1 )
        {
          v12 = (UIBasicSprite_o *)v8;
          v13 = 0;
LABEL_27:
          UIBasicSprite__set_fillDirection(v12, v13, 0);
          UIBasicSprite__set_invert((UIBasicSprite_o *)v8, (this->fields.mFill & 0xFFFFFFFD) == 1, 0);
          goto LABEL_28;
        }
        goto LABEL_28;
      }
    }
    v16 = this->fields.mFG;
    if ( !v16 )
      goto LABEL_107;
    v17 = this->fields.mFill & 0xFFFFFFFD;
    v18 = UIProgressBar__get_value(this, v11);
    v19 = v16;
    if ( v17 == 1 )
      v20 = 1.0 - v18;
    else
      v20 = 0.0;
    if ( v17 == 1 )
      v83.fields.z = 1.0;
    else
      v83.fields.z = v18;
    v83.fields.y = 0.0;
    v83.fields.w = 1.0;
    v83.fields.x = v20;
  }
  UIWidget__set_drawRegion(v19, v83, 0);
  cachedTransform = (__int64)this->fields.mFG;
  if ( !cachedTransform )
    goto LABEL_107;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cachedTransform, 1, 0);
  v15 = UIProgressBar__get_value(this, v27) < 0.001;
LABEL_45:
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v29 = (UnityEngine_Object_o *)this->fields.mFG;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
      goto LABEL_54;
    mBG = (UnityEngine_Object_o *)this->fields.mBG;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
    {
LABEL_54:
      v31 = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
      {
        cachedTransform = (__int64)this->fields.mFG;
        if ( !cachedTransform )
          goto LABEL_107;
      }
      else
      {
        cachedTransform = (__int64)this->fields.mBG;
        if ( !cachedTransform )
          goto LABEL_107;
      }
      v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)cachedTransform + 472LL))(
              cachedTransform,
              *(_QWORD *)(*(_QWORD *)cachedTransform + 480LL));
      v34 = (UnityEngine_Object_o *)this->fields.mFG;
      v35 = v32;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
      {
        cachedTransform = (__int64)this->fields.mFG;
        if ( !cachedTransform )
          goto LABEL_107;
      }
      else
      {
        cachedTransform = (__int64)this->fields.mBG;
        if ( !cachedTransform )
          goto LABEL_107;
      }
      cachedTransform = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)cachedTransform + 888LL))(
                          cachedTransform,
                          *(_QWORD *)(*(_QWORD *)cachedTransform + 896LL));
      if ( !v35 )
        goto LABEL_107;
      v40 = *(_DWORD *)(v35 + 24);
      if ( v40 )
      {
        *(float *)(v35 + 32) = v36 + *(float *)(v35 + 32);
        if ( v40 != 1 )
        {
          *(float *)(v35 + 44) = v36 + *(float *)(v35 + 44);
          if ( v40 > 2 )
          {
            *(float *)(v35 + 56) = *(float *)(v35 + 56) - v38;
            if ( v40 != 3 )
            {
              v41 = UnityEngine_Object_TypeInfo;
              v42 = (UnityEngine_Object_o *)this->fields.mFG;
              v43 = *(float *)(v35 + 48) - v39;
              v44 = *(float *)(v35 + 60) - v39;
              v45 = v37 + *(float *)(v35 + 36);
              v46 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
              v47 = *(float *)(v35 + 68) - v38;
              v48 = v37 + *(float *)(v35 + 72);
              *(float *)(v35 + 36) = v45;
              *(float *)(v35 + 48) = v43;
              *(float *)(v35 + 60) = v44;
              *(float *)(v35 + 68) = v47;
              *(float *)(v35 + 72) = v48;
              if ( !v46 )
                j_il2cpp_runtime_class_init_0(v41, v11);
              if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
              {
                cachedTransform = (__int64)this->fields.mFG;
                if ( !cachedTransform )
LABEL_107:
                  sub_2213CDC(cachedTransform, v11);
              }
              else
              {
                cachedTransform = (__int64)this->fields.mBG;
                if ( !cachedTransform )
                  goto LABEL_107;
              }
              cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
              v49 = (UnityEngine_Transform_o *)cachedTransform;
              v50 = 0;
              v51 = v35 + 40;
              do
              {
                if ( v50 >= *(unsigned int *)(v35 + 24) )
                  goto LABEL_106;
                if ( !v49 )
                  goto LABEL_107;
                v81 = UnityEngine_Transform__TransformPoint(v49, *(UnityEngine_Vector3_o *)(v51 - 8), 0);
                if ( v50 >= *(unsigned int *)(v35 + 24) )
                  goto LABEL_106;
                ++v50;
                *(UnityEngine_Vector3_o *)(v51 - 8) = v81;
                v51 += 12;
              }
              while ( v50 != 4 );
              mFill = this->fields.mFill;
              v53 = *(_DWORD *)(v35 + 24);
              if ( mFill > 1 )
              {
                if ( v53 >= 4 )
                {
                  v68 = *(float *)(v35 + 40) + (float)((float)(*(float *)(v35 + 76) - *(float *)(v35 + 40)) * 0.5);
                  v69 = *(float *)(v35 + 52) + (float)((float)(*(float *)(v35 + 64) - *(float *)(v35 + 52)) * 0.5);
                  v70 = UIProgressBar__get_value(this, v11);
                  v71 = 1.0;
                  v72.n64_u64[0] = *(unsigned __int64 *)(v35 + 32);
                  v73.n64_u64[0] = *(unsigned __int64 *)(v35 + 44);
                  v74.n64_u64[0] = vsub_f32(*(float32x2_t *)(v35 + 68), v72).n64_u64[0];
                  v75.n64_u64[0] = vsub_f32(*(float32x2_t *)(v35 + 56), v73).n64_u64[0];
                  if ( (mFill & 0xFFFFFFFD) == 1 )
                    v70 = 1.0 - v70;
                  v76.n64_u64[0] = vadd_f32(v72, vmul_f32(v74, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                  v77.n64_u64[0] = vadd_f32(v73, vmul_f32(v75, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                  if ( v70 <= 1.0 )
                    v71 = v70;
                  if ( v70 >= 0.0 )
                    v78 = v71;
                  else
                    v78 = 0.0;
                  v79.n64_u64[0] = vmul_n_f32(vsub_f32(v77, v76), v78).n64_u64[0];
                  v80 = (float)(v69 - v68) * v78;
                  v66 = vadd_f32(v76, v79).n64_u64[0];
                  v67 = v68 + v80;
                  goto LABEL_101;
                }
              }
              else if ( v53 >= 4 )
              {
                v54.n64_u64[0] = vadd_f32(
                                   *(float32x2_t *)(v35 + 32),
                                   vmul_f32(
                                     vsub_f32(*(float32x2_t *)(v35 + 44), *(float32x2_t *)(v35 + 32)),
                                     (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                v55 = *(float *)(v35 + 40) + (float)((float)(*(float *)(v35 + 52) - *(float *)(v35 + 40)) * 0.5);
                v56 = *(float *)(v35 + 64) + (float)((float)(*(float *)(v35 + 76) - *(float *)(v35 + 64)) * 0.5);
                v58 = UIProgressBar__get_value(this, v11);
                v59 = 1.0;
                v60.n64_u64[0] = *(unsigned __int64 *)(v35 + 56);
                v61.n64_u64[0] = vsub_f32(*(float32x2_t *)(v35 + 68), v60).n64_u64[0];
                if ( mFill == 1 )
                  v58 = 1.0 - v58;
                v62.n64_u64[0] = vadd_f32(v60, vmul_f32(v61, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                if ( v58 <= 1.0 )
                  v59 = v58;
                if ( v58 >= 0.0 )
                  v63 = v59;
                else
                  v63 = 0.0;
                v64.n64_u64[0] = vmul_n_f32(vsub_f32(v62, v54), v63).n64_u64[0];
                v65 = (float)(v56 - v55) * v63;
                v66 = vadd_f32(v54, v64).n64_u64[0];
                v67 = v55 + v65;
LABEL_101:
                *(_QWORD *)&v82.fields.x = v66;
                v82.fields.z = v67;
                UIProgressBar__SetThumbPosition(this, v82, v57);
                goto LABEL_102;
              }
            }
          }
        }
      }
LABEL_106:
      sub_2213CE4(cachedTransform);
    }
  }
LABEL_102:
  if ( v15 )
  {
    cachedTransform = (__int64)this->fields.mFG;
    if ( !cachedTransform )
      goto LABEL_107;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cachedTransform, 0, 0);
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
  float v11; // s0
  float v12; // s1
  float result; // s0
  float v14; // s1

  y = localPos.fields.y;
  x = localPos.fields.x;
  if ( (byte_5975053 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975053 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
    return UIProgressBar__get_value(this, v7);
  v8 = this->fields.mFG;
  if ( !v8
    || (v8 = (struct UIWidget_o *)((__int64 (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v8->klass->vtable._10_get_localCorners.methodPtr)(
                                    v8,
                                    v8->klass->vtable._10_get_localCorners.method)) == 0 )
  {
    sub_2213CDC(v8, v7);
  }
  if ( LODWORD(v8->fields.m_CancellationTokenSource) <= 2 )
    sub_2213CE4(v8);
  mFill = this->fields.mFill;
  if ( mFill > 1 )
  {
    v14 = *((float *)&v8->fields.leftAnchor + 1);
    mFill &= ~2u;
    v11 = *((float *)&v8->fields.topAnchor + 1) - v14;
    v12 = y - v14;
  }
  else
  {
    v10 = *(float *)&v8->fields.leftAnchor;
    v11 = *(float *)&v8->fields.topAnchor - v10;
    v12 = x - v10;
  }
  result = v12 / v11;
  if ( mFill == 1 )
    return 1.0 - result;
  return result;
}


void UIProgressBar__OnStart(UIProgressBar_o *this, const MethodInfo *method)
{
  ;
}


void UIProgressBar__OnValidate(UIProgressBar_o *this, const MethodInfo *method)
{
  float v3; // s0
  float mValue; // s1
  unsigned int numberOfSteps; // w8
  int32_t v6; // w8
  float v7; // s0
  float v8; // s1
  unsigned int v9; // w8

  if ( (byte_5975052 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5975052 = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._4_Upgrade.methodPtr)(
      this,
      this->klass->vtable._4_Upgrade.method);
    v3 = 1.0;
    mValue = this->fields.mValue;
    this->fields.mIsDirty = 1;
    if ( mValue <= 1.0 )
      v3 = mValue;
    if ( mValue < 0.0 )
      v3 = 0.0;
    if ( mValue != v3 )
      this->fields.mValue = v3;
    numberOfSteps = this->fields.numberOfSteps;
    if ( (numberOfSteps & 0x80000000) != 0 )
    {
      v6 = 0;
    }
    else
    {
      if ( numberOfSteps < 0x15 )
      {
LABEL_26:
        ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._7_ForceUpdate.methodPtr)(
          this,
          this->klass->vtable._7_ForceUpdate.method);
        return;
      }
      v6 = 20;
    }
    this->fields.numberOfSteps = v6;
    goto LABEL_26;
  }
  v7 = 1.0;
  v8 = this->fields.mValue;
  if ( v8 <= 1.0 )
    v7 = this->fields.mValue;
  if ( v8 < 0.0 )
    v7 = 0.0;
  if ( v8 != v7 )
    this->fields.mValue = v7;
  v9 = this->fields.numberOfSteps;
  if ( (v9 & 0x80000000) != 0 )
  {
    this->fields.numberOfSteps = 0;
  }
  else if ( v9 >= 0x15 )
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
  __int64 v16; // kr50_8
  float v17; // s11
  float v18; // s8
  struct UnityEngine_Mathf_StaticFields *v19; // x8
  float v20; // s0
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
  if ( !byte_596CDEB )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  v27 = UnityEngine_Quaternion__op_Multiply_83371700(
          rotation,
          UnityEngine_Vector3_TypeInfo->static_fields->backVector,
          0);
  position = UnityEngine_Transform__get_position(v8, 0);
  v25 = position.fields.y;
  v26 = position.fields.x;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
  v10 = sqrtf(
          (float)(v27.fields.z * v27.fields.z)
        + (float)((float)(v27.fields.x * v27.fields.x) + (float)(v27.fields.y * v27.fields.y)));
  if ( v10 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
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
    sub_2213CDC(cachedTransform, v7);
  v31.fields.z = 0.0;
  v31.fields.x = x;
  v31.fields.y = y;
  UnityEngine_Camera__ScreenPointToRay_83198808(&v23, (UnityEngine_Camera_o *)cachedTransform, v31, 0);
  v24 = v23;
  v16 = *(_QWORD *)&v23.fields.m_Origin.fields.y;
  v17 = v23.fields.m_Origin.fields.x;
  v18 = (float)(z * v23.fields.m_Direction.fields.z)
      + (float)((float)(v11 * v23.fields.m_Direction.fields.x) + (float)(v12 * v23.fields.m_Direction.fields.y));
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v19 = UnityEngine_Mathf_TypeInfo->static_fields;
  v20 = fmaxf(fabsf(v18), 0.0) * 0.000001;
  if ( v20 <= (float)(v19->Epsilon * 8.0) )
    v20 = v19->Epsilon * 8.0;
  if ( vabds_f32(0.0, v18) < v20 )
    return UIProgressBar__get_value(this, v15);
  v21 = (float)((float)((float)(position.fields.z * z) + (float)((float)(v26 * v11) + (float)(v25 * v12)))
              - (float)((float)(z * *((float *)&v16 + 1)) + (float)((float)(v11 * v17) + (float)(v12 * *(float *)&v16))))
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
  __int64 v8; // x1
  UnityEngine_Object_o *parent; // x20
  unsigned __int64 v10; // kr00_8
  double v11; // d0
  double v12; // d0
  float v13; // s2
  float v14; // s1
  float v15; // s8
  double v16; // d0
  double v17; // d0
  float v18; // s2
  float v19; // s1
  float v20; // s9
  double iptr; // [xsp+38h] [xbp-18h] BYREF
  UnityEngine_Vector3_o position; // 0:kr14_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  x = worldPos.fields.x;
  if ( (byte_5975055 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975055 = 1;
  }
  thumb = this->fields.thumb;
  if ( !thumb )
    goto LABEL_45;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(thumb, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  thumb = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  if ( ((unsigned __int8)thumb & 1) != 0 )
  {
    if ( !parent )
      goto LABEL_45;
    v24.fields.x = x;
    v24.fields.y = y;
    v24.fields.z = z;
    v10 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v24, 0);
    v11 = modf(*(float *)&v10, &iptr);
    if ( *(float *)&v10 >= 0.0 )
    {
      if ( v11 != 0.5 )
      {
        v15 = floorf(*(float *)&v10 + 0.5);
        goto LABEL_26;
      }
      v12 = iptr;
      v13 = 1.0;
    }
    else
    {
      if ( v11 != -0.5 )
      {
        v15 = ceilf(*(float *)&v10 + -0.5);
        goto LABEL_26;
      }
      v12 = iptr;
      v13 = -1.0;
    }
    if ( ((__int64)v12 & 1) != 0 )
    {
      v14 = v12;
      v15 = v14 + v13;
    }
    else
    {
      v15 = v12;
    }
LABEL_26:
    v16 = modf(*((float *)&v10 + 1), &iptr);
    if ( *((float *)&v10 + 1) >= 0.0 )
    {
      if ( v16 != 0.5 )
      {
        v20 = floorf(*((float *)&v10 + 1) + 0.5);
        goto LABEL_36;
      }
      v17 = iptr;
      v18 = 1.0;
    }
    else
    {
      if ( v16 != -0.5 )
      {
        v20 = ceilf(*((float *)&v10 + 1) + -0.5);
        goto LABEL_36;
      }
      v17 = iptr;
      v18 = -1.0;
    }
    if ( ((__int64)v17 & 1) != 0 )
    {
      v19 = v17;
      v20 = v19 + v18;
    }
    else
    {
      v20 = v17;
    }
LABEL_36:
    thumb = this->fields.thumb;
    if ( !thumb )
      goto LABEL_45;
    localPosition = UnityEngine_Transform__get_localPosition(thumb, 0);
    if ( !byte_5969ADE )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969ADE = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    if ( sqrtf(
           (float)(localPosition.fields.z * localPosition.fields.z)
         + (float)((float)((float)(localPosition.fields.x - v15) * (float)(localPosition.fields.x - v15))
                 + (float)((float)(localPosition.fields.y - v20) * (float)(localPosition.fields.y - v20)))) > 0.001 )
    {
      thumb = this->fields.thumb;
      if ( thumb )
      {
        v26.fields.x = v15;
        v26.fields.y = v20;
        v26.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(thumb, v26, 0);
        return;
      }
LABEL_45:
      sub_2213CDC(thumb, method);
    }
    return;
  }
  thumb = this->fields.thumb;
  if ( !thumb )
    goto LABEL_45;
  position = UnityEngine_Transform__get_position(thumb, 0);
  if ( !byte_5969ADE )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADE = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  if ( sqrtf(
         (float)((float)(position.fields.z - z) * (float)(position.fields.z - z))
       + (float)((float)((float)(position.fields.x - x) * (float)(position.fields.x - x))
               + (float)((float)(position.fields.y - y) * (float)(position.fields.y - y)))) > 0.00001 )
  {
    thumb = this->fields.thumb;
    if ( thumb )
    {
      v25.fields.x = x;
      v25.fields.y = y;
      v25.fields.z = z;
      UnityEngine_Transform__set_position(thumb, v25, 0);
      return;
    }
    goto LABEL_45;
  }
}


void UIProgressBar__Start(UIProgressBar_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mBG; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct UIWidget_o *v8; // x8
  __int64 v9; // x1
  UnityEngine_Object_o *current; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5975051 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIProgressBar_TypeInfo);
    byte_5975051 = 1;
  }
  ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._4_Upgrade.methodPtr)(
    this,
    this->klass->vtable._4_Upgrade.method);
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v3);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    mBG = (UnityEngine_Object_o *)this->fields.mBG;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality(mBG, 0, 0);
    if ( v6 )
    {
      v8 = this->fields.mBG;
      if ( !v8 )
        sub_2213CDC(v6, v7);
      v8->fields.autoResizeBoxCollider = 1;
    }
    ((void (__fastcall *)(UIProgressBar_o *, const MethodInfo *))this->klass->vtable._5_OnStart.methodPtr)(
      this,
      this->klass->vtable._5_OnStart.method);
    current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) && this->fields.onChange )
    {
      UIProgressBar_TypeInfo->static_fields->current = this;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
        (int32_t)this,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      onChange = this->fields.onChange;
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v17);
      EventDelegate__Execute_56285144(onChange, 0);
      UIProgressBar_TypeInfo->static_fields->current = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
        0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
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

  if ( (byte_597504F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597504F = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v5 = this->fields.mFG;
    if ( v5 )
      return ((float (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v5->klass->vtable._7_get_alpha.methodPtr)(
               v5,
               v5->klass->vtable._7_get_alpha.method);
LABEL_12:
    sub_2213CDC(v5, v4);
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
  MissionNaviTransitionBoardItem_o *p_mCam; // x19
  UnityEngine_Object_o *mCam; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t layer; // w20
  UnityEngine_Camera_o *CameraForLayer; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_597504B & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597504B = 1;
  }
  p_mCam = (MissionNaviTransitionBoardItem_o *)&this->fields.mCam;
  mCam = (UnityEngine_Object_o *)this->fields.mCam;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mCam, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_2213CDC(0, v6);
    layer = UnityEngine_GameObject__get_layer(gameObject, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
    CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
    p_mCam->klass = (MissionNaviTransitionBoardItem_c *)CameraForLayer;
    sub_2213A04(p_mCam, (int32_t)CameraForLayer, v10, v11, v12, v13, v14, v15);
  }
  return (UnityEngine_Camera_o *)p_mCam->klass;
}


UnityEngine_Transform_o *UIProgressBar__get_cachedTransform(UIProgressBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTrans; // x21
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_597504A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597504A = 1;
  }
  mTrans = (UnityEngine_Object_o *)this->fields.mTrans;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mTrans, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.mTrans = transform;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
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
  float v5; // s9
  double v6; // d0
  double v7; // d0
  float v8; // s2
  float v9; // s1
  __int64 v10; // x8
  float v11; // s0
  double iptr; // [xsp+18h] [xbp-8h] BYREF

  numberOfSteps = this->fields.numberOfSteps;
  result = this->fields.mValue;
  if ( numberOfSteps >= 2 )
  {
    v4 = (float)(numberOfSteps - 1);
    v5 = result * v4;
    v6 = modf((float)(result * v4), &iptr);
    if ( v5 >= 0.0 )
    {
      if ( v6 == 0.5 )
      {
        v7 = iptr;
        v8 = 1.0;
LABEL_7:
        v9 = v7;
        v10 = (__int64)v7;
        v11 = v9 + v8;
        if ( (v10 & 1) == 0 )
          v11 = v9;
        return v11 / v4;
      }
      v11 = floorf(v5 + 0.5);
    }
    else
    {
      if ( v6 == -0.5 )
      {
        v7 = iptr;
        v8 = -1.0;
        goto LABEL_7;
      }
      v11 = ceilf(v5 + -0.5);
    }
    return v11 / v4;
  }
  return result;
}


void UIProgressBar__set_alpha(UIProgressBar_o *this, float value, const MethodInfo *method)
{
  UnityEngine_Object_o *mFG; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  bool v10; // w8
  struct UIWidget_o *v11; // x8
  UnityEngine_Collider_o *v12; // x20
  float v13; // s0
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  struct UIWidget_o *v16; // x8
  UnityEngine_Behaviour_o *v17; // x20
  float v18; // s0
  UnityEngine_Object_o *mBG; // x20
  __int64 v20; // x1
  Il2CppObject *v21; // x20
  bool v22; // w8
  struct UIWidget_o *v23; // x8
  UnityEngine_Collider_o *v24; // x20
  float v25; // s0
  __int64 v26; // x1
  Il2CppObject *v27; // x20
  struct UIWidget_o *v28; // x8
  UnityEngine_Behaviour_o *v29; // x20
  float v30; // s0
  UnityEngine_Object_o *thumb; // x20
  __int64 v32; // x1
  Il2CppObject *v33; // x19
  __int64 v34; // x1
  Il2CppObject *v35; // x20
  Il2CppObject *v36; // x20
  float v37; // s0
  __int64 v38; // x1
  Il2CppObject *v39; // x20
  Il2CppObject *v40; // x20
  float v41; // s0

  if ( (byte_5975050 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975050 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v7 )
      goto LABEL_62;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))v7->klass[1]._1.element_class)(
      v7,
      v7->klass[1]._1.castClass,
      value);
    v7 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v7 )
      goto LABEL_62;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v7,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    v7 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( v10 )
    {
      if ( !v7 )
        goto LABEL_62;
      v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        v7,
                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
      v11 = this->fields.mFG;
      if ( !v11 )
        goto LABEL_62;
      v12 = (UnityEngine_Collider_o *)v7;
      v7 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v11->klass->vtable._7_get_alpha.methodPtr)(
                                        v11,
                                        this->fields.mFG,
                                        v11->klass->vtable._7_get_alpha.method);
      if ( !v12 )
        goto LABEL_62;
      UnityEngine_Collider__set_enabled(v12, v13 > 0.001, 0);
    }
    else
    {
      if ( !v7 )
        goto LABEL_62;
      v15 = UnityEngine_Component__GetComponent_object_(
              v7,
              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0) )
      {
        v7 = (UnityEngine_Component_o *)this->fields.mFG;
        if ( !v7 )
          goto LABEL_62;
        v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          v7,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v16 = this->fields.mFG;
        if ( !v16 )
          goto LABEL_62;
        v17 = (UnityEngine_Behaviour_o *)v7;
        v7 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v16->klass->vtable._7_get_alpha.methodPtr)(
                                          v16,
                                          this->fields.mFG,
                                          v16->klass->vtable._7_get_alpha.method);
        if ( !v17 )
          goto LABEL_62;
        UnityEngine_Behaviour__set_enabled(v17, v18 > 0.001, 0);
      }
    }
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v7 )
      goto LABEL_62;
    ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))v7->klass[1]._1.element_class)(
      v7,
      v7->klass[1]._1.castClass,
      value);
    v7 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v7 )
      goto LABEL_62;
    v21 = UnityEngine_Component__GetComponent_object_(
            v7,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
    v7 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( v22 )
    {
      if ( !v7 )
        goto LABEL_62;
      v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                        v7,
                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
      v23 = this->fields.mBG;
      if ( !v23 )
        goto LABEL_62;
      v24 = (UnityEngine_Collider_o *)v7;
      v7 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v23->klass->vtable._7_get_alpha.methodPtr)(
                                        v23,
                                        this->fields.mBG,
                                        v23->klass->vtable._7_get_alpha.method);
      if ( !v24 )
        goto LABEL_62;
      UnityEngine_Collider__set_enabled(v24, v25 > 0.001, 0);
    }
    else
    {
      if ( !v7 )
        goto LABEL_62;
      v27 = UnityEngine_Component__GetComponent_object_(
              v7,
              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
      {
        v7 = (UnityEngine_Component_o *)this->fields.mBG;
        if ( !v7 )
          goto LABEL_62;
        v7 = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                          v7,
                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v28 = this->fields.mBG;
        if ( !v28 )
          goto LABEL_62;
        v29 = (UnityEngine_Behaviour_o *)v7;
        v7 = (UnityEngine_Component_o *)((UnityEngine_Component_o *(__fastcall *)(struct UIWidget_o *__return_ptr, struct UIWidget_o *, const MethodInfo *))v28->klass->vtable._7_get_alpha.methodPtr)(
                                          v28,
                                          this->fields.mBG,
                                          v28->klass->vtable._7_get_alpha.method);
        if ( !v29 )
          goto LABEL_62;
        UnityEngine_Behaviour__set_enabled(v29, v30 > 0.001, 0);
      }
    }
  }
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v7 )
      goto LABEL_62;
    v33 = UnityEngine_Component__GetComponent_object_(
            v7,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    v7 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( !v33 )
        goto LABEL_62;
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, float))v33->klass->vtable[8].methodPtr)(
        v33,
        v33->klass->vtable[8].method,
        value);
      v35 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v33,
              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v35, 0, 0) )
      {
        v36 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v33,
                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
        v7 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v33->klass->vtable[7].methodPtr)(
                                          v33,
                                          v33->klass->vtable[7].method);
        if ( v36 )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v36, v37 > 0.001, 0);
          return;
        }
LABEL_62:
        sub_2213CDC(v7, v6);
      }
      v39 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v33,
              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0) )
      {
        v40 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)v33,
                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
        v7 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v33->klass->vtable[7].methodPtr)(
                                          v33,
                                          v33->klass->vtable[7].method);
        if ( !v40 )
          goto LABEL_62;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v40, v41 > 0.001, 0);
      }
    }
  }
}


void UIProgressBar__set_backgroundWidget(UIProgressBar_o *this, UIWidget_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mBG; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_597504D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597504D = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mBG, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mBG = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mBG, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mIsDirty = 1;
  }
}


void UIProgressBar__set_fillDirection(UIProgressBar_o *this, int32_t value, const MethodInfo *method)
{
  UIProgressBar_c *klass; // x9

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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_597504C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597504C = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mFG, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mFG = value;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFG, (int32_t)value, v6, v7, v8, v9, v10, v11);
    this->fields.mIsDirty = 1;
  }
}


void UIProgressBar__set_value(UIProgressBar_o *this, float value, const MethodInfo *method)
{
  float v5; // s0
  float v6; // s9
  float v7; // s8
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *current; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  System_Collections_Generic_List_EventDelegate__o *v21; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_597504E & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIProgressBar_TypeInfo);
    byte_597504E = 1;
  }
  v5 = 1.0;
  if ( value <= 1.0 )
    v5 = value;
  if ( value >= 0.0 )
    v6 = v5;
  else
    v6 = 0.0;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Equality(current, 0, 0) )
      {
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11);
        if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
        {
          onChange = this->fields.onChange;
          if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v12);
          if ( EventDelegate__IsValid_56312868(onChange, 0) )
          {
            UIProgressBar_TypeInfo->static_fields->current = this;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
              (int32_t)this,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
            v21 = this->fields.onChange;
            if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v20);
            EventDelegate__Execute_56285144(v21, 0);
            UIProgressBar_TypeInfo->static_fields->current = 0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
              0,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2016E34;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2016DF4;
}


System_IAsyncResult_o *UIProgressBar_OnDragFinished__BeginInvoke(
        UIProgressBar_OnDragFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void UIProgressBar_OnDragFinished__EndInvoke(
        UIProgressBar_OnDragFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void UIProgressBar_OnDragFinished__Invoke(UIProgressBar_OnDragFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}