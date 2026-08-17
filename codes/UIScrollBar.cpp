void UIScrollBar___ctor(UIScrollBar_o *this, const MethodInfo *method)
{
  this->fields.mSize = 1.0;
  this->fields.mDir = 2;
  *(_QWORD *)&this->fields.rawValue = 0x23F800000LL;
  UIProgressBar___ctor((UIProgressBar_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void UIScrollBar__ForceUpdate(UIScrollBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mFG; // x20
  float mSize; // s0
  float v5; // s1
  float v6; // s1
  float v7; // s10
  float value; // s0
  float v9; // s2
  float v10; // s0
  float v11; // s0
  float v12; // s9
  float v13; // s8
  bool isHorizontal; // w0
  UIWidget_o *v15; // x20
  bool v16; // w21
  UIRect_o *isInverted; // x0
  __int64 v18; // x1
  float v19; // s3
  float v20; // s0 OVERLAPPED
  float v21; // s2
  float v22; // s1
  __int64 v23; // x1
  UnityEngine_Object_o *thumb; // x20
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s3
  float v29; // s8
  float v30; // s9
  float v31; // s11
  float v32; // s10
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5975061 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975061 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    UIProgressBar__ForceUpdate((UIProgressBar_o *)this, 0);
    return;
  }
  mSize = this->fields.mSize;
  this->fields.mIsDirty = 0;
  if ( mSize <= 1.0 )
    v5 = mSize;
  else
    v5 = 1.0;
  v6 = v5 * 0.5;
  if ( mSize >= 0.0 )
    v7 = v6;
  else
    v7 = 0.0;
  value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
  if ( value <= 1.0 )
    v9 = value;
  else
    v9 = 1.0;
  if ( value >= 0.0 )
    v10 = v9;
  else
    v10 = 0.0;
  v11 = v7 + (float)(v10 * (float)((float)(1.0 - v7) - v7));
  v12 = v11 - v7;
  v13 = v7 + v11;
  isHorizontal = UIProgressBar__get_isHorizontal((UIProgressBar_o *)this, 0);
  v15 = this->fields.mFG;
  v16 = isHorizontal;
  isInverted = (UIRect_o *)UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0);
  if ( v16 )
  {
    if ( !v15 )
      goto LABEL_40;
    v19 = 1.0;
    v20 = 1.0 - v13;
    if ( ((unsigned __int8)isInverted & 1) != 0 )
    {
      v21 = 1.0 - v12;
    }
    else
    {
      v20 = v12;
      v21 = v13;
    }
    v22 = 0.0;
  }
  else
  {
    if ( !v15 )
      goto LABEL_40;
    v21 = 1.0;
    v19 = 1.0 - v12;
    if ( ((unsigned __int8)isInverted & 1) != 0 )
      v22 = 1.0 - v13;
    else
      v22 = v12;
    if ( ((unsigned __int8)isInverted & 1) == 0 )
      v19 = v13;
    v20 = 0.0;
  }
  UIWidget__set_drawRegion(v15, *(UnityEngine_Vector4_o *)&v20, 0);
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    isInverted = (UIRect_o *)this->fields.mFG;
    if ( isInverted )
    {
      ((void (__fastcall *)(UIRect_o *, const char *))isInverted->klass[1]._1.name)(
        isInverted,
        isInverted->klass[1]._1.namespaze);
      isInverted = (UIRect_o *)this->fields.mFG;
      if ( isInverted )
      {
        v29 = v25;
        v30 = v26;
        v31 = v27;
        v32 = v28;
        isInverted = (UIRect_o *)UIRect__get_cachedTransform(isInverted, 0);
        if ( isInverted )
        {
          v33.fields.z = 0.0;
          v33.fields.x = v29 + (float)((float)(v31 - v29) * 0.5);
          v33.fields.y = v30 + (float)((float)(v32 - v30) * 0.5);
          v34 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)isInverted, v33, 0);
          UIProgressBar__SetThumbPosition((UIProgressBar_o *)this, v34, 0);
          return;
        }
      }
    }
LABEL_40:
    sub_2213CDC(isInverted, v18);
  }
}


float UIScrollBar__LocalToValue(UIScrollBar_o *this, UnityEngine_Vector2_o localPos, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *mFG; // x20
  __int64 v7; // x1
  float mSize; // s1
  struct UIWidget_o *isHorizontal; // x0
  float v10; // s2
  float v11; // s2
  float v12; // s1
  __int64 v13; // x20
  int8x8_t v19; // d1
  int8x8_t v20; // d0
  unsigned __int64 v21; // d0
  float v22; // s8
  float v23; // s10
  bool isInverted; // w0
  float v25; // s1
  float v26; // s0
  float result; // s0
  unsigned int v28; // w8
  float v29; // s2
  float v30; // s1
  float v31; // s0
  float v32; // s9
  float v33; // s11
  float v34; // s1
  float v35; // [xsp+0h] [xbp-60h]
  float v36; // [xsp+10h] [xbp-50h]
  float v37; // [xsp+10h] [xbp-50h]
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4

  y = localPos.fields.y;
  x = localPos.fields.x;
  if ( (byte_5975060 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975060 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v38.fields.x = x;
    v38.fields.y = y;
    return UIProgressBar__LocalToValue((UIProgressBar_o *)this, v38, 0);
  }
  mSize = this->fields.mSize;
  isHorizontal = this->fields.mFG;
  if ( mSize <= 1.0 )
    v10 = this->fields.mSize;
  else
    v10 = 1.0;
  v11 = v10 * 0.5;
  if ( mSize >= 0.0 )
    v12 = v11;
  else
    v12 = 0.0;
  if ( !isHorizontal )
    goto LABEL_38;
  v35 = 1.0 - v12;
  v36 = v12;
  v13 = ((__int64 (__fastcall *)(struct UIWidget_o *, const MethodInfo *))isHorizontal->klass->vtable._10_get_localCorners.methodPtr)(
          isHorizontal,
          isHorizontal->klass->vtable._10_get_localCorners.method);
  isHorizontal = (struct UIWidget_o *)UIProgressBar__get_isHorizontal((UIProgressBar_o *)this, 0);
  if ( ((unsigned __int8)isHorizontal & 1) != 0 )
  {
    if ( v13 )
    {
      if ( *(_DWORD *)(v13 + 24) > 2u )
      {
        __asm { FMOV            V0.2S, #1.0 }
        v19.n64_u64[0] = vcgt_f32((float32x2_t)__PAIR64__(LODWORD(v36), LODWORD(v35)), _D0).n64_u64[0];
        v20.n64_u64[0] = vbsl_s8(v19, _D0, (int8x8_t)__PAIR64__(LODWORD(v36), LODWORD(v35))).n64_u64[0];
        v19.n64_u32[0] = *(_DWORD *)(v13 + 32);
        v21 = vadd_f32(
                vdup_lane_s32(v19, 0),
                vmul_n_f32(
                  vbic_s8(v20, vcltz_f32((float32x2_t)__PAIR64__(LODWORD(v36), LODWORD(v35)))),
                  *(float *)(v13 + 56) - v19.n64_f32[0])).n64_u64[0];
        v22 = *((float *)&v21 + 1);
        v23 = *(float *)&v21 - *((float *)&v21 + 1);
        if ( (float)(*(float *)&v21 - *((float *)&v21 + 1)) != 0.0 )
        {
          v37 = *(float *)&v21;
          isInverted = UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0);
          v25 = x - v22;
          v26 = v37 - x;
          goto LABEL_34;
        }
        return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
      }
LABEL_37:
      sub_2213CE4(isHorizontal);
    }
LABEL_38:
    sub_2213CDC(isHorizontal, v7);
  }
  if ( !v13 )
    goto LABEL_38;
  v28 = *(_DWORD *)(v13 + 24);
  if ( v28 < 2 )
    goto LABEL_37;
  v29 = 1.0;
  v30 = 0.0;
  if ( v36 <= 1.0 )
    v31 = v36;
  else
    v31 = 1.0;
  if ( v36 < 0.0 )
    v31 = 0.0;
  if ( v28 <= 3 )
    goto LABEL_37;
  if ( v35 <= 1.0 )
    v29 = v35;
  if ( v35 >= 0.0 )
    v30 = v29;
  v32 = *(float *)(v13 + 36) + (float)(v31 * (float)(*(float *)(v13 + 48) - *(float *)(v13 + 36)));
  v33 = *(float *)(v13 + 72) + (float)(v30 * (float)(*(float *)(v13 + 60) - *(float *)(v13 + 72)));
  v23 = v33 - v32;
  if ( (float)(v33 - v32) == 0.0 )
    return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
  isInverted = UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0);
  v26 = v33 - y;
  v25 = y - v32;
LABEL_34:
  result = v26 / v23;
  v34 = v25 / v23;
  if ( !isInverted )
    return v34;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void UIScrollBar__OnDragBackground(
        UIScrollBar_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x1
  const MethodInfo *v7; // x2
  float alpha; // s0 OVERLAPPED
  float v9; // s1

  if ( (byte_5975063 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975063 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v5 = UICamera_TypeInfo;
  }
  if ( v5->static_fields->currentScheme != 2 )
  {
    alpha = UIProgressBar__get_alpha((UIProgressBar_o *)this, 0);
    v9 = 1.0;
    if ( alpha == 1.0 )
      UISlider__OnDragBackground((UISlider_o *)this, v6, *(UnityEngine_Vector2_o *)&alpha, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIScrollBar__OnDragForeground(
        UIScrollBar_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  UICamera_c *v5; // x0
  UnityEngine_GameObject_o *v6; // x1
  const MethodInfo *v7; // x2
  float alpha; // s0 OVERLAPPED
  float v9; // s1

  if ( (byte_5975065 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975065 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v5 = UICamera_TypeInfo;
  }
  if ( v5->static_fields->currentScheme != 2 )
  {
    alpha = UIProgressBar__get_alpha((UIProgressBar_o *)this, 0);
    v9 = 1.0;
    if ( alpha == 1.0 )
      UISlider__OnDragForeground((UISlider_o *)this, v6, *(UnityEngine_Vector2_o *)&alpha, v7);
  }
}


void UIScrollBar__OnPressBackground(
        UIScrollBar_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  UICamera_c *v6; // x0
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_5975062 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975062 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v6 = UICamera_TypeInfo;
  }
  if ( v6->static_fields->currentScheme != 2 && UIProgressBar__get_alpha((UIProgressBar_o *)this, 0) == 1.0 )
    UISlider__OnPressBackground((UISlider_o *)this, v7, isPressed, v8);
}


void UIScrollBar__OnPressForeground(
        UIScrollBar_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  UICamera_c *v6; // x0
  UnityEngine_GameObject_o *v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_5975064 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975064 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v6 = UICamera_TypeInfo;
  }
  if ( v6->static_fields->currentScheme != 2 && UIProgressBar__get_alpha((UIProgressBar_o *)this, 0) == 1.0 )
    UISlider__OnPressForeground((UISlider_o *)this, v7, isPressed, v8);
}


void UIScrollBar__OnStart(UIScrollBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBG; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v11; // x20
  MissionNaviTransitionBoardItem_o *v12; // x21
  System_Delegate_o *klass; // x22
  UIEventListener_BoolDelegate_o *v14; // x23
  System_Delegate_o *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Delegate_o *v22; // x8
  System_Delegate_c *v23; // x1
  System_Delegate_o *monitor; // t1
  UIEventListener_VectorDelegate_o *v25; // x22
  System_Delegate_o *v26; // x0
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UnityEngine_Object_o *mFG; // x20
  UnityEngine_Object_o *v33; // x20
  __int64 v34; // x1
  UnityEngine_Object_o *v35; // x21
  __int64 v36; // x1
  Il2CppObject *v37; // x20
  __int64 v38; // x1
  Il2CppObject *v39; // x20
  UnityEngine_GameObject_o *v40; // x0
  MissionNaviTransitionBoardItem_o *v41; // x21
  System_Delegate_o *v42; // x22
  UIEventListener_BoolDelegate_o *v43; // x23
  System_Delegate_o *v44; // x0
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Delegate_o *v50; // t1
  UIEventListener_VectorDelegate_o *v51; // x22
  System_Delegate_o *v52; // x0
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct UIWidget_o *v58; // x8

  if ( (byte_597505F & 1) == 0 )
  {
    sub_2213A60(&UIEventListener_BoolDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UIScrollBar_OnDragBackground__);
    sub_2213A60(&Method_UIScrollBar_OnDragForeground__);
    sub_2213A60(&Method_UIScrollBar_OnPressBackground__);
    sub_2213A60(&Method_UIScrollBar_OnPressForeground__);
    sub_2213A60(&UIEventListener_VectorDelegate_TypeInfo);
    byte_597505F = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v5 )
      goto LABEL_57;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v5,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      goto LABEL_14;
    v5 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v5 )
      goto LABEL_57;
    v9 = UnityEngine_Component__GetComponent_object_(
           v5,
           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
    {
LABEL_14:
      v5 = (UnityEngine_Component_o *)this->fields.mBG;
      if ( !v5 )
        goto LABEL_57;
      gameObject = UnityEngine_Component__get_gameObject(v5, 0);
      v5 = (UnityEngine_Component_o *)UIEventListener__Get(gameObject, 0);
      if ( !v5 )
        goto LABEL_57;
      v11 = v5;
      v12 = (MissionNaviTransitionBoardItem_o *)&v5[3];
      klass = (System_Delegate_o *)v5[3].klass;
      v14 = (UIEventListener_BoolDelegate_o *)sub_2213CCC(UIEventListener_BoolDelegate_TypeInfo);
      UIEventListener_BoolDelegate___ctor(v14, (Il2CppObject *)this, Method_UIScrollBar_OnPressBackground__, 0);
      v15 = System_Delegate__Combine(klass, (System_Delegate_o *)v14, 0);
      v22 = v15;
      if ( v15 )
      {
        v23 = (System_Delegate_c *)UIEventListener_BoolDelegate_TypeInfo;
        if ( (UIEventListener_BoolDelegate_c *)v15->klass != UIEventListener_BoolDelegate_TypeInfo )
          goto LABEL_52;
        v12->klass = (MissionNaviTransitionBoardItem_c *)v15;
        if ( v15->klass != v23 )
          goto LABEL_52;
      }
      else
      {
        v12->klass = 0;
      }
      sub_2213A04(v12, (int32_t)v15, v16, v17, v18, v19, v20, v21);
      monitor = (System_Delegate_o *)v11[4].monitor;
      v11 = (UnityEngine_Component_o *)((char *)v11 + 104);
      v25 = (UIEventListener_VectorDelegate_o *)sub_2213CCC(UIEventListener_VectorDelegate_TypeInfo);
      UIEventListener_VectorDelegate___ctor(v25, (Il2CppObject *)this, Method_UIScrollBar_OnDragBackground__, 0);
      v26 = System_Delegate__Combine(monitor, (System_Delegate_o *)v25, 0);
      v22 = v26;
      if ( v26 )
      {
        v23 = (System_Delegate_c *)UIEventListener_VectorDelegate_TypeInfo;
        if ( (UIEventListener_VectorDelegate_c *)v26->klass != UIEventListener_VectorDelegate_TypeInfo )
          goto LABEL_52;
        v11->klass = (UnityEngine_Component_c *)v26;
        if ( v26->klass != v23 )
          goto LABEL_52;
      }
      else
      {
        v11->klass = 0;
      }
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v11, (int32_t)v26, v16, v27, v28, v29, v30, v31);
    }
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v5 )
      goto LABEL_57;
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( UnityEngine_Object__op_Inequality(v33, v35, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.mFG;
      if ( !v5 )
        goto LABEL_57;
      v37 = UnityEngine_Component__GetComponent_object_(
              v5,
              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0, 0) )
        goto LABEL_42;
      v5 = (UnityEngine_Component_o *)this->fields.mFG;
      if ( !v5 )
        goto LABEL_57;
      v39 = UnityEngine_Component__GetComponent_object_(
              v5,
              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0) )
      {
LABEL_42:
        v5 = (UnityEngine_Component_o *)this->fields.mFG;
        if ( !v5 )
          goto LABEL_57;
        v40 = UnityEngine_Component__get_gameObject(v5, 0);
        v5 = (UnityEngine_Component_o *)UIEventListener__Get(v40, 0);
        if ( !v5 )
          goto LABEL_57;
        v11 = v5;
        v41 = (MissionNaviTransitionBoardItem_o *)&v5[3];
        v42 = (System_Delegate_o *)v5[3].klass;
        v43 = (UIEventListener_BoolDelegate_o *)sub_2213CCC(UIEventListener_BoolDelegate_TypeInfo);
        UIEventListener_BoolDelegate___ctor(v43, (Il2CppObject *)this, Method_UIScrollBar_OnPressForeground__, 0);
        v44 = System_Delegate__Combine(v42, (System_Delegate_o *)v43, 0);
        v22 = v44;
        if ( v44 )
        {
          v23 = (System_Delegate_c *)UIEventListener_BoolDelegate_TypeInfo;
          if ( (UIEventListener_BoolDelegate_c *)v44->klass != UIEventListener_BoolDelegate_TypeInfo )
            goto LABEL_52;
          v41->klass = (MissionNaviTransitionBoardItem_c *)v44;
          if ( v44->klass != v23 )
            goto LABEL_52;
        }
        else
        {
          v41->klass = 0;
        }
        sub_2213A04(v41, (int32_t)v44, v16, v45, v46, v47, v48, v49);
        v50 = (System_Delegate_o *)v11[4].monitor;
        v11 = (UnityEngine_Component_o *)((char *)v11 + 104);
        v51 = (UIEventListener_VectorDelegate_o *)sub_2213CCC(UIEventListener_VectorDelegate_TypeInfo);
        UIEventListener_VectorDelegate___ctor(v51, (Il2CppObject *)this, Method_UIScrollBar_OnDragForeground__, 0);
        v52 = System_Delegate__Combine(v50, (System_Delegate_o *)v51, 0);
        v22 = v52;
        if ( !v52 )
        {
LABEL_53:
          v11->klass = 0;
          goto LABEL_54;
        }
        v23 = (System_Delegate_c *)UIEventListener_VectorDelegate_TypeInfo;
        if ( (UIEventListener_VectorDelegate_c *)v52->klass == UIEventListener_VectorDelegate_TypeInfo )
        {
          v11->klass = (UnityEngine_Component_c *)v52;
          if ( v52->klass == v23 )
          {
LABEL_54:
            sub_2213A04((MissionNaviTransitionBoardItem_o *)v11, (int32_t)v22, v16, v53, v54, v55, v56, v57);
            v58 = this->fields.mFG;
            if ( v58 )
            {
              v58->fields.autoResizeBoxCollider = 1;
              return;
            }
LABEL_57:
            sub_2213CDC(v5, v4);
          }
        }
LABEL_52:
        sub_221405C(v22, v23, v16);
        goto LABEL_53;
      }
    }
  }
}


void UIScrollBar__Upgrade(UIScrollBar_o *this, const MethodInfo *method)
{
  int32_t mDir; // w8
  _BOOL4 mInverted; // w9
  float mScroll; // s0
  int v5; // w11
  int32_t v6; // w8

  mDir = this->fields.mDir;
  if ( mDir != 2 )
  {
    mInverted = this->fields.mInverted;
    mScroll = this->fields.mScroll;
    this->fields.mDir = 2;
    this->fields.mValue = mScroll;
    if ( mInverted )
      v5 = 2;
    else
      v5 = 3;
    if ( mDir )
      v6 = v5;
    else
      v6 = mInverted;
    this->fields.mFill = v6;
  }
}


float UIScrollBar__get_barSize(UIScrollBar_o *this, const MethodInfo *method)
{
  return this->fields.mSize;
}


float UIScrollBar__get_scrollValue(UIScrollBar_o *this, const MethodInfo *method)
{
  return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
}


void UIScrollBar__set_barSize(UIScrollBar_o *this, float value, const MethodInfo *method)
{
  float v5; // s0
  __int64 v6; // x1
  UnityEngine_Object_o *current; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_597505E & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIProgressBar_TypeInfo);
    byte_597505E = 1;
  }
  v5 = 1.0;
  if ( value <= 1.0 )
    v5 = value;
  if ( value < 0.0 )
    v5 = 0.0;
  if ( this->fields.mSize != v5 )
  {
    this->fields.mSize = v5;
    this->fields.mIsDirty = 1;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Equality(current, 0, 0) && this->fields.onChange )
      {
        UIProgressBar_TypeInfo->static_fields->current = (struct UIProgressBar_o *)this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
          (int32_t)this,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        onChange = this->fields.onChange;
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v14);
        EventDelegate__Execute_56285144(onChange, v14);
        UIProgressBar_TypeInfo->static_fields->current = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)UIProgressBar_TypeInfo->static_fields,
          0,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      ((void (__fastcall *)(UIScrollBar_o *, const MethodInfo *))this->klass->vtable._7_ForceUpdate.methodPtr)(
        this,
        this->klass->vtable._7_ForceUpdate.method);
    }
  }
}


void UIScrollBar__set_scrollValue(UIScrollBar_o *this, float value, const MethodInfo *method)
{
  UIProgressBar__set_value((UIProgressBar_o *)this, value, 0);
}