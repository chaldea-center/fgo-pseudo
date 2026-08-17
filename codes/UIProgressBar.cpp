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


// local variable allocation has failed, the output may be wrong!
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
  float v21; // s2 OVERLAPPED
  float v22; // s1
  float v23; // s3
  float v24; // s0
  struct UIWidget_o *v25; // x20
  unsigned int v26; // w21
  float v27; // s0
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *thumb; // x20
  UnityEngine_Object_o *v30; // x20
  UnityEngine_Object_o *mBG; // x20
  UnityEngine_Object_o *v32; // x20
  __int64 v33; // x0
  __int64 v34; // x1
  UnityEngine_Object_o *v35; // x21
  __int64 v36; // x20
  float v37; // s0
  float v38; // s1
  float v39; // s2
  float v40; // s3
  unsigned int v41; // w8
  UnityEngine_Object_c *v42; // x0
  UnityEngine_Object_o *v43; // x21
  float v44; // s4
  float v45; // s3
  float v46; // s0
  int v47; // w8
  float v48; // s2
  float v49; // s1
  UnityEngine_Transform_o *v50; // x21
  unsigned __int64 v51; // x22
  __int64 v52; // x24
  unsigned int mFill; // w21
  unsigned int v54; // w8
  float32x2_t v55; // d8
  float v56; // s9
  float v57; // s10
  const MethodInfo *v58; // x1
  float v59; // s0
  float v60; // s1
  float32x2_t v61; // d3
  float32x2_t v62; // d4
  float32x2_t v63; // d2
  float v64; // s0
  float32x2_t v65; // d1
  float v66; // s2
  unsigned __int64 v67; // d0 OVERLAPPED
  float v68; // s2
  float v69; // s8
  float v70; // s9
  float v71; // s0
  float v72; // s1
  float32x2_t v73; // d3
  float32x2_t v74; // d5
  float32x2_t v75; // d4
  float32x2_t v76; // d6
  float32x2_t v77; // d2
  float32x2_t v78; // d3
  float v79; // s0
  float32x2_t v80; // d1
  float v81; // s3
  int v82; // s1
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

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
    v25 = this->fields.mFG;
    if ( !v25 )
      goto LABEL_107;
    v26 = this->fields.mFill & 0xFFFFFFFD;
    v27 = UIProgressBar__get_value(this, v11);
    v21 = 1.0;
    v19 = v25;
    v22 = 1.0 - v27;
    if ( v26 == 1 )
    {
      v23 = 1.0;
    }
    else
    {
      v22 = 0.0;
      v23 = v27;
    }
    v24 = 0.0;
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
      v21 = 1.0;
    else
      v21 = v18;
    v22 = 0.0;
    v23 = 1.0;
    v24 = v20;
  }
  UIWidget__set_drawRegion(v19, *(UnityEngine_Vector4_o *)(&v21 - 2), 0);
  cachedTransform = (__int64)this->fields.mFG;
  if ( !cachedTransform )
    goto LABEL_107;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)cachedTransform, 1, 0);
  v15 = UIProgressBar__get_value(this, v28) < 0.001;
LABEL_45:
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v30 = (UnityEngine_Object_o *)this->fields.mFG;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
      goto LABEL_54;
    mBG = (UnityEngine_Object_o *)this->fields.mBG;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
    {
LABEL_54:
      v32 = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
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
      v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)cachedTransform + 472LL))(
              cachedTransform,
              *(_QWORD *)(*(_QWORD *)cachedTransform + 480LL));
      v35 = (UnityEngine_Object_o *)this->fields.mFG;
      v36 = v33;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
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
      if ( !v36 )
        goto LABEL_107;
      v41 = *(_DWORD *)(v36 + 24);
      if ( v41 )
      {
        *(float *)(v36 + 32) = v37 + *(float *)(v36 + 32);
        if ( v41 != 1 )
        {
          *(float *)(v36 + 44) = v37 + *(float *)(v36 + 44);
          if ( v41 > 2 )
          {
            *(float *)(v36 + 56) = *(float *)(v36 + 56) - v39;
            if ( v41 != 3 )
            {
              v42 = UnityEngine_Object_TypeInfo;
              v43 = (UnityEngine_Object_o *)this->fields.mFG;
              v44 = *(float *)(v36 + 48) - v40;
              v45 = *(float *)(v36 + 60) - v40;
              v46 = v38 + *(float *)(v36 + 36);
              v47 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
              v48 = *(float *)(v36 + 68) - v39;
              v49 = v38 + *(float *)(v36 + 72);
              *(float *)(v36 + 36) = v46;
              *(float *)(v36 + 48) = v44;
              *(float *)(v36 + 60) = v45;
              *(float *)(v36 + 68) = v48;
              *(float *)(v36 + 72) = v49;
              if ( !v47 )
                j_il2cpp_runtime_class_init_0(v42, v11);
              if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
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
              v50 = (UnityEngine_Transform_o *)cachedTransform;
              v51 = 0;
              v52 = v36 + 40;
              do
              {
                if ( v51 >= *(unsigned int *)(v36 + 24) )
                  goto LABEL_106;
                if ( !v50 )
                  goto LABEL_107;
                v83 = UnityEngine_Transform__TransformPoint(v50, *(UnityEngine_Vector3_o *)(v52 - 8), 0);
                if ( v51 >= *(unsigned int *)(v36 + 24) )
                  goto LABEL_106;
                ++v51;
                *(UnityEngine_Vector3_o *)(v52 - 8) = v83;
                v52 += 12;
              }
              while ( v51 != 4 );
              mFill = this->fields.mFill;
              v54 = *(_DWORD *)(v36 + 24);
              if ( mFill > 1 )
              {
                if ( v54 >= 4 )
                {
                  v69 = *(float *)(v36 + 40) + (float)((float)(*(float *)(v36 + 76) - *(float *)(v36 + 40)) * 0.5);
                  v70 = *(float *)(v36 + 52) + (float)((float)(*(float *)(v36 + 64) - *(float *)(v36 + 52)) * 0.5);
                  v71 = UIProgressBar__get_value(this, v11);
                  v72 = 1.0;
                  v73.n64_u64[0] = *(unsigned __int64 *)(v36 + 32);
                  v74.n64_u64[0] = *(unsigned __int64 *)(v36 + 44);
                  v75.n64_u64[0] = vsub_f32(*(float32x2_t *)(v36 + 68), v73).n64_u64[0];
                  v76.n64_u64[0] = vsub_f32(*(float32x2_t *)(v36 + 56), v74).n64_u64[0];
                  if ( (mFill & 0xFFFFFFFD) == 1 )
                    v71 = 1.0 - v71;
                  v77.n64_u64[0] = vadd_f32(v73, vmul_f32(v75, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                  v78.n64_u64[0] = vadd_f32(v74, vmul_f32(v76, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                  if ( v71 <= 1.0 )
                    v72 = v71;
                  if ( v71 >= 0.0 )
                    v79 = v72;
                  else
                    v79 = 0.0;
                  v80.n64_u64[0] = vmul_n_f32(vsub_f32(v78, v77), v79).n64_u64[0];
                  v81 = (float)(v70 - v69) * v79;
                  v67 = vadd_f32(v77, v80).n64_u64[0];
                  v68 = v69 + v81;
                  goto LABEL_101;
                }
              }
              else if ( v54 >= 4 )
              {
                v55.n64_u64[0] = vadd_f32(
                                   *(float32x2_t *)(v36 + 32),
                                   vmul_f32(
                                     vsub_f32(*(float32x2_t *)(v36 + 44), *(float32x2_t *)(v36 + 32)),
                                     (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                v56 = *(float *)(v36 + 40) + (float)((float)(*(float *)(v36 + 52) - *(float *)(v36 + 40)) * 0.5);
                v57 = *(float *)(v36 + 64) + (float)((float)(*(float *)(v36 + 76) - *(float *)(v36 + 64)) * 0.5);
                v59 = UIProgressBar__get_value(this, v11);
                v60 = 1.0;
                v61.n64_u64[0] = *(unsigned __int64 *)(v36 + 56);
                v62.n64_u64[0] = vsub_f32(*(float32x2_t *)(v36 + 68), v61).n64_u64[0];
                if ( mFill == 1 )
                  v59 = 1.0 - v59;
                v63.n64_u64[0] = vadd_f32(v61, vmul_f32(v62, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
                if ( v59 <= 1.0 )
                  v60 = v59;
                if ( v59 >= 0.0 )
                  v64 = v60;
                else
                  v64 = 0.0;
                v65.n64_u64[0] = vmul_n_f32(vsub_f32(v63, v55), v64).n64_u64[0];
                v66 = (float)(v57 - v56) * v64;
                v67 = vadd_f32(v55, v65).n64_u64[0];
                v68 = v56 + v66;
LABEL_101:
                v82 = HIDWORD(v67);
                UIProgressBar__SetThumbPosition(this, *(UnityEngine_Vector3_o *)&v67, v58);
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
  float v17; // s0
  float v18; // s10
  float v19; // s14
  float v20; // s13
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo *v22; // x1
  __int64 v23; // kr00_8
  float v24; // s11
  float v25; // s8
  struct UnityEngine_Mathf_StaticFields *v26; // x8
  float v27; // s0
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
  v8 = cachedTransform;
  rotation = UnityEngine_Transform__get_rotation(cachedTransform, 0);
  v9 = rotation.fields.x;
  v10 = rotation.fields.y;
  z = rotation.fields.z;
  w = rotation.fields.w;
  if ( !byte_596CDEB )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  v41.fields.x = v9;
  v41.fields.y = v10;
  v41.fields.z = z;
  v41.fields.w = w;
  v35 = UnityEngine_Quaternion__op_Multiply_83371700(v41, UnityEngine_Vector3_TypeInfo->static_fields->backVector, 0);
  v13 = v35.fields.x;
  v14 = v35.fields.y;
  v15 = v35.fields.z;
  position = UnityEngine_Transform__get_position(v8, 0);
  v33 = position.fields.y;
  v34 = position.fields.x;
  v30 = position.fields.z;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
  v17 = sqrtf((float)(v15 * v15) + (float)((float)(v13 * v13) + (float)(v14 * v14)));
  if ( v17 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v18 = static_fields->zeroVector.fields.x;
    v19 = static_fields->zeroVector.fields.y;
    v20 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v18 = v13 / v17;
    v19 = v14 / v17;
    v20 = v15 / v17;
  }
  cachedTransform = (UnityEngine_Transform_o *)UIProgressBar__get_cachedCamera(this, v16);
  if ( !cachedTransform )
LABEL_22:
    sub_2213CDC(cachedTransform, v7);
  v37.fields.z = 0.0;
  v37.fields.x = x;
  v37.fields.y = y;
  UnityEngine_Camera__ScreenPointToRay_83198808(&v31, (UnityEngine_Camera_o *)cachedTransform, v37, 0);
  v32 = v31;
  v23 = *(_QWORD *)&v31.fields.m_Origin.fields.y;
  v24 = v31.fields.m_Origin.fields.x;
  v25 = (float)(v20 * v31.fields.m_Direction.fields.z)
      + (float)((float)(v18 * v31.fields.m_Direction.fields.x) + (float)(v19 * v31.fields.m_Direction.fields.y));
  if ( !byte_5969AE4 )
  {
    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v26 = UnityEngine_Mathf_TypeInfo->static_fields;
  v27 = fmaxf(fabsf(v25), 0.0) * 0.000001;
  if ( v27 <= (float)(v26->Epsilon * 8.0) )
    v27 = v26->Epsilon * 8.0;
  if ( vabds_f32(0.0, v25) < v27 )
    return UIProgressBar__get_value(this, v22);
  v28 = (float)((float)((float)(v30 * v20) + (float)((float)(v34 * v18) + (float)(v33 * v19)))
              - (float)((float)(v20 * *((float *)&v23 + 1)) + (float)((float)(v18 * v24) + (float)(v19 * *(float *)&v23))))
      / v25;
  if ( v28 <= 0.0 )
    return UIProgressBar__get_value(this, v22);
  Point = UnityEngine_Ray__GetPoint(&v32, v28, 0);
  v39 = UnityEngine_Transform__InverseTransformPoint(v8, Point, 0);
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
  __int64 v8; // x1
  UnityEngine_Object_o *parent; // x20
  float v10; // s8
  float v11; // s9
  double v12; // d0
  double v13; // d0
  float v14; // s2
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s1
  float v19; // s8
  double v20; // d0
  double v21; // d0
  float v22; // s2
  float v23; // s1
  float v24; // s9
  float v25; // s10
  float v26; // s12
  float v27; // s11
  double iptr; // [xsp+38h] [xbp-18h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

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
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    v30 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)parent, v29, 0);
    v10 = v30.fields.x;
    v11 = v30.fields.y;
    v12 = modf(v30.fields.x, &iptr);
    if ( v10 >= 0.0 )
    {
      if ( v12 != 0.5 )
      {
        v19 = floorf(v10 + 0.5);
        goto LABEL_26;
      }
      v13 = iptr;
      v14 = 1.0;
    }
    else
    {
      if ( v12 != -0.5 )
      {
        v19 = ceilf(v10 + -0.5);
        goto LABEL_26;
      }
      v13 = iptr;
      v14 = -1.0;
    }
    if ( ((__int64)v13 & 1) != 0 )
    {
      v18 = v13;
      v19 = v18 + v14;
    }
    else
    {
      v19 = v13;
    }
LABEL_26:
    v20 = modf(v11, &iptr);
    if ( v11 >= 0.0 )
    {
      if ( v20 != 0.5 )
      {
        v24 = floorf(v11 + 0.5);
        goto LABEL_36;
      }
      v21 = iptr;
      v22 = 1.0;
    }
    else
    {
      if ( v20 != -0.5 )
      {
        v24 = ceilf(v11 + -0.5);
        goto LABEL_36;
      }
      v21 = iptr;
      v22 = -1.0;
    }
    if ( ((__int64)v21 & 1) != 0 )
    {
      v23 = v21;
      v24 = v23 + v22;
    }
    else
    {
      v24 = v21;
    }
LABEL_36:
    thumb = this->fields.thumb;
    if ( !thumb )
      goto LABEL_45;
    localPosition = UnityEngine_Transform__get_localPosition(thumb, 0);
    v25 = localPosition.fields.x;
    v26 = localPosition.fields.y;
    v27 = localPosition.fields.z;
    if ( !byte_5969ADE )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969ADE = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    if ( sqrtf(
           (float)(v27 * v27)
         + (float)((float)((float)(v25 - v19) * (float)(v25 - v19)) + (float)((float)(v26 - v24) * (float)(v26 - v24)))) > 0.001 )
    {
      thumb = this->fields.thumb;
      if ( thumb )
      {
        v34.fields.x = v19;
        v34.fields.y = v24;
        v34.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(thumb, v34, 0);
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
  v15 = position.fields.x;
  v16 = position.fields.y;
  v17 = position.fields.z;
  if ( !byte_5969ADE )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADE = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  if ( sqrtf(
         (float)((float)(v17 - z) * (float)(v17 - z))
       + (float)((float)((float)(v15 - x) * (float)(v15 - x)) + (float)((float)(v16 - y) * (float)(v16 - y)))) > 0.00001 )
  {
    thumb = this->fields.thumb;
    if ( thumb )
    {
      v32.fields.x = x;
      v32.fields.y = y;
      v32.fields.z = z;
      UnityEngine_Transform__set_position(thumb, v32, 0);
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
  float result; // s0
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
    {
LABEL_7:
      ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *))v5->klass->vtable._7_get_alpha.methodPtr)(
        v5,
        v5->klass->vtable._7_get_alpha.method);
      return result;
    }
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
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
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