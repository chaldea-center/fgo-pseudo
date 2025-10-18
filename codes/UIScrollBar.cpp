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
  float v5; // s8
  float v6; // s9
  float v7; // s2
  float v8; // s10
  float value; // s0
  float v10; // s2
  float v11; // s0
  float v12; // s0
  float v13; // s11
  float v14; // s10
  bool isHorizontal; // w0
  UIWidget_o *v16; // x20
  bool v17; // w21
  UIRect_o *isInverted; // x0
  float v19; // s3 OVERLAPPED
  float v20; // s1
  float v21; // s0
  float v22; // s2
  UnityEngine_Object_o *thumb; // x20
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s3
  float v28; // s8
  float v29; // s9
  float v30; // s11
  float v31; // s10
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C47625 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47625 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    UIProgressBar__ForceUpdate((UIProgressBar_o *)this, 0);
    return;
  }
  mSize = this->fields.mSize;
  v5 = 1.0;
  v6 = 0.0;
  v7 = fminf(mSize, 1.0);
  this->fields.mIsDirty = 0;
  if ( mSize < 0.0 )
    v8 = 0.0;
  else
    v8 = v7 * 0.5;
  value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
  v10 = fminf(value, 1.0);
  if ( value < 0.0 )
    v11 = 0.0;
  else
    v11 = v10;
  v12 = v8 + (float)(v11 * (float)((float)(1.0 - v8) - v8));
  v13 = v12 - v8;
  v14 = v8 + v12;
  isHorizontal = UIProgressBar__get_isHorizontal((UIProgressBar_o *)this, 0);
  v16 = this->fields.mFG;
  v17 = isHorizontal;
  isInverted = (UIRect_o *)UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0);
  if ( ((unsigned __int8)isInverted & 1) != 0 )
    v19 = 1.0 - v13;
  else
    v19 = v14;
  if ( ((unsigned __int8)isInverted & 1) != 0 )
    v20 = 1.0 - v14;
  else
    v20 = v13;
  if ( v17 )
  {
    if ( !v16 )
      goto LABEL_31;
    v5 = v19;
    v6 = v20;
    v20 = 0.0;
    v19 = 1.0;
  }
  else if ( !v16 )
  {
    goto LABEL_31;
  }
  v21 = v6;
  v22 = v5;
  UIWidget__set_drawRegion(v16, *(UnityEngine_Vector4_o *)(&v19 - 3), 0);
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v28 = v24;
        v29 = v25;
        v30 = v26;
        v31 = v27;
        isInverted = (UIRect_o *)UIRect__get_cachedTransform(isInverted, 0);
        if ( isInverted )
        {
          v32.fields.x = v28 + (float)((float)(v30 - v28) * 0.5);
          v32.fields.y = v29 + (float)((float)(v31 - v29) * 0.5);
          v32.fields.z = 0.0;
          v33 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)isInverted, v32, 0);
          UIProgressBar__SetThumbPosition((UIProgressBar_o *)this, v33, 0);
          return;
        }
      }
    }
LABEL_31:
    sub_1C372B4(isInverted);
  }
}


float UIScrollBar__LocalToValue(UIScrollBar_o *this, UnityEngine_Vector2_o localPos, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  UnityEngine_Object_o *mFG; // x20
  float mSize; // s0
  struct UIWidget_o *isHorizontal; // x0
  float v9; // s2
  float v10; // s10
  __int64 v11; // x20
  unsigned int v12; // w8
  float v13; // s0
  float v14; // s1
  float v15; // s5
  float v16; // s3
  float v17; // s0
  float v18; // s2
  float v19; // s10
  float v20; // s11
  float v21; // s0
  float v23; // s2
  float v24; // s1
  float v25; // s0
  float v26; // s10
  float v27; // s11
  float v28; // s0
  UnityEngine_Vector2_o v29; // 0:s0.4,4:s1.4

  y = localPos.fields.y;
  x = localPos.fields.x;
  if ( (byte_4C47624 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47624 = 1;
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v29.fields.x = x;
    v29.fields.y = y;
    return UIProgressBar__LocalToValue((UIProgressBar_o *)this, v29, 0);
  }
  mSize = this->fields.mSize;
  isHorizontal = this->fields.mFG;
  v9 = fminf(mSize, 1.0);
  if ( mSize < 0.0 )
    v10 = 0.0;
  else
    v10 = v9 * 0.5;
  if ( !isHorizontal
    || (v11 = ((__int64 (__fastcall *)(struct UIWidget_o *, const MethodInfo *))isHorizontal->klass->vtable._10_get_localCorners.methodPtr)(
                isHorizontal,
                isHorizontal->klass->vtable._10_get_localCorners.method),
        isHorizontal = (struct UIWidget_o *)UIProgressBar__get_isHorizontal((UIProgressBar_o *)this, 0),
        !v11) )
  {
    sub_1C372B4(isHorizontal);
  }
  v12 = *(_DWORD *)(v11 + 24);
  if ( !v12 )
    goto LABEL_38;
  v13 = 1.0 - v10;
  if ( ((unsigned __int8)isHorizontal & 1) != 0 )
  {
    if ( v12 > 2 )
    {
      v14 = *(float *)(v11 + 32);
      v15 = fminf(v10, 1.0);
      v16 = fminf(v13, 1.0);
      if ( v10 < 0.0 )
        v15 = 0.0;
      if ( v13 < 0.0 )
        v17 = 0.0;
      else
        v17 = v16;
      v18 = *(float *)(v11 + 56) - v14;
      v19 = v14 + (float)(v15 * v18);
      v20 = v14 + (float)(v17 * v18);
      if ( (float)(v20 - v19) != 0.0 )
      {
        if ( UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0) )
          v21 = v20 - x;
        else
          v21 = x - v19;
        return v21 / (float)(v20 - v19);
      }
      return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    }
LABEL_38:
    sub_1C372BC(isHorizontal);
  }
  if ( v12 <= 1 )
    goto LABEL_38;
  v23 = fminf(v10, 1.0);
  if ( v10 < 0.0 )
    v23 = 0.0;
  if ( v12 <= 3 )
    goto LABEL_38;
  v24 = fminf(v13, 1.0);
  if ( v13 < 0.0 )
    v25 = 0.0;
  else
    v25 = v24;
  v26 = *(float *)(v11 + 36) + (float)(v23 * (float)(*(float *)(v11 + 48) - *(float *)(v11 + 36)));
  v27 = *(float *)(v11 + 72) + (float)(v25 * (float)(*(float *)(v11 + 60) - *(float *)(v11 + 72)));
  if ( (float)(v27 - v26) == 0.0 )
    return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
  if ( UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0) )
    v28 = v27 - y;
  else
    v28 = y - v26;
  return v28 / (float)(v27 - v26);
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

  if ( (byte_4C47627 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47627 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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

  if ( (byte_4C47629 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47629 = 1;
  }
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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

  if ( (byte_4C47626 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47626 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
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

  if ( (byte_4C47628 & 1) == 0 )
  {
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C47628 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  if ( v6->static_fields->currentScheme != 2 && UIProgressBar__get_alpha((UIProgressBar_o *)this, 0) == 1.0 )
    UISlider__OnPressForeground((UISlider_o *)this, v7, isPressed, v8);
}


void UIScrollBar__OnStart(UIScrollBar_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBG; // x20
  UnityEngine_Component_o *v4; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v8; // x20
  CGThumbnailListItem_o *v9; // x21
  System_Delegate_o *klass; // x22
  UIEventListener_BoolDelegate_o *v11; // x23
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Delegate_o *v15; // x8
  UIEventListener_BoolDelegate_c *v16; // x1
  System_Delegate_o *monitor; // t1
  UIEventListener_VectorDelegate_o *v18; // x22
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UIEventListener_VectorDelegate_c *v22; // x1
  UnityEngine_Object_o *mFG; // x20
  UnityEngine_Object_o *v24; // x20
  UnityEngine_Object_o *v25; // x21
  Il2CppObject *v26; // x20
  Il2CppObject *v27; // x20
  UnityEngine_GameObject_o *v28; // x0
  CGThumbnailListItem_o *v29; // x21
  System_Delegate_o *v30; // x22
  UIEventListener_BoolDelegate_o *v31; // x23
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UIEventListener_BoolDelegate_c *v35; // x1
  System_Delegate_o *v36; // t1
  UIEventListener_VectorDelegate_o *v37; // x22
  System_Delegate_o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UIEventListener_VectorDelegate_c *v41; // x1
  struct UIWidget_o *v42; // x8

  if ( (byte_4C47623 & 1) == 0 )
  {
    sub_1C37058(&UIEventListener_BoolDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UIScrollBar_OnDragBackground__);
    sub_1C37058(&Method_UIScrollBar_OnDragForeground__);
    sub_1C37058(&Method_UIScrollBar_OnPressBackground__);
    sub_1C37058(&Method_UIScrollBar_OnPressForeground__);
    sub_1C37058(&UIEventListener_VectorDelegate_TypeInfo);
    byte_4C47623 = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mBG, 0, 0) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v4 )
      goto LABEL_57;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v4,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      goto LABEL_14;
    v4 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v4 )
      goto LABEL_57;
    v6 = UnityEngine_Component__GetComponent_object_(
           v4,
           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
    {
LABEL_14:
      v4 = (UnityEngine_Component_o *)this->fields.mBG;
      if ( !v4 )
        goto LABEL_57;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0);
      v4 = (UnityEngine_Component_o *)UIEventListener__Get(gameObject, 0);
      if ( !v4 )
        goto LABEL_57;
      v8 = v4;
      v9 = (CGThumbnailListItem_o *)&v4[3];
      klass = (System_Delegate_o *)v4[3].klass;
      v11 = (UIEventListener_BoolDelegate_o *)sub_1C372A4(UIEventListener_BoolDelegate_TypeInfo);
      UIEventListener_BoolDelegate___ctor(v11, (Il2CppObject *)this, Method_UIScrollBar_OnPressBackground__, 0);
      v12 = System_Delegate__Combine(klass, (System_Delegate_o *)v11, 0);
      v15 = v12;
      if ( v12 )
      {
        v16 = UIEventListener_BoolDelegate_TypeInfo;
        if ( (UIEventListener_BoolDelegate_c *)v12->klass != UIEventListener_BoolDelegate_TypeInfo )
          goto LABEL_52;
        v9->klass = (CGThumbnailListItem_c *)v12;
        if ( (UIEventListener_BoolDelegate_c *)v12->klass != v16 )
          goto LABEL_52;
      }
      else
      {
        v9->klass = 0;
      }
      sub_1C36FFC(v9, (int32_t)v12, v13, v14);
      monitor = (System_Delegate_o *)v8[4].monitor;
      v8 = (UnityEngine_Component_o *)((char *)v8 + 104);
      v18 = (UIEventListener_VectorDelegate_o *)sub_1C372A4(UIEventListener_VectorDelegate_TypeInfo);
      UIEventListener_VectorDelegate___ctor(v18, (Il2CppObject *)this, Method_UIScrollBar_OnDragBackground__, 0);
      v19 = System_Delegate__Combine(monitor, (System_Delegate_o *)v18, 0);
      v15 = v19;
      if ( v19 )
      {
        v22 = UIEventListener_VectorDelegate_TypeInfo;
        if ( (UIEventListener_VectorDelegate_c *)v19->klass != UIEventListener_VectorDelegate_TypeInfo )
          goto LABEL_52;
        v8->klass = (UnityEngine_Component_c *)v19;
        if ( (UIEventListener_VectorDelegate_c *)v19->klass != v22 )
          goto LABEL_52;
      }
      else
      {
        v8->klass = 0;
      }
      sub_1C36FFC((CGThumbnailListItem_o *)v8, (int32_t)v19, v20, v21);
    }
  }
  mFG = (UnityEngine_Object_o *)this->fields.mFG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFG, 0, 0) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.mFG;
    if ( !v4 )
      goto LABEL_57;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v4, 0);
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, v25, 0) )
    {
      v4 = (UnityEngine_Component_o *)this->fields.mFG;
      if ( !v4 )
        goto LABEL_57;
      v26 = UnityEngine_Component__GetComponent_object_(
              v4,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
        goto LABEL_42;
      v4 = (UnityEngine_Component_o *)this->fields.mFG;
      if ( !v4 )
        goto LABEL_57;
      v27 = UnityEngine_Component__GetComponent_object_(
              v4,
              (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
      {
LABEL_42:
        v4 = (UnityEngine_Component_o *)this->fields.mFG;
        if ( !v4 )
          goto LABEL_57;
        v28 = UnityEngine_Component__get_gameObject(v4, 0);
        v4 = (UnityEngine_Component_o *)UIEventListener__Get(v28, 0);
        if ( !v4 )
          goto LABEL_57;
        v8 = v4;
        v29 = (CGThumbnailListItem_o *)&v4[3];
        v30 = (System_Delegate_o *)v4[3].klass;
        v31 = (UIEventListener_BoolDelegate_o *)sub_1C372A4(UIEventListener_BoolDelegate_TypeInfo);
        UIEventListener_BoolDelegate___ctor(v31, (Il2CppObject *)this, Method_UIScrollBar_OnPressForeground__, 0);
        v32 = System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0);
        v15 = v32;
        if ( v32 )
        {
          v35 = UIEventListener_BoolDelegate_TypeInfo;
          if ( (UIEventListener_BoolDelegate_c *)v32->klass != UIEventListener_BoolDelegate_TypeInfo )
            goto LABEL_52;
          v29->klass = (CGThumbnailListItem_c *)v32;
          if ( (UIEventListener_BoolDelegate_c *)v32->klass != v35 )
            goto LABEL_52;
        }
        else
        {
          v29->klass = 0;
        }
        sub_1C36FFC(v29, (int32_t)v32, v33, v34);
        v36 = (System_Delegate_o *)v8[4].monitor;
        v8 = (UnityEngine_Component_o *)((char *)v8 + 104);
        v37 = (UIEventListener_VectorDelegate_o *)sub_1C372A4(UIEventListener_VectorDelegate_TypeInfo);
        UIEventListener_VectorDelegate___ctor(v37, (Il2CppObject *)this, Method_UIScrollBar_OnDragForeground__, 0);
        v38 = System_Delegate__Combine(v36, (System_Delegate_o *)v37, 0);
        v15 = v38;
        if ( !v38 )
        {
LABEL_53:
          v8->klass = (UnityEngine_Component_c *)v15;
          goto LABEL_54;
        }
        v41 = UIEventListener_VectorDelegate_TypeInfo;
        if ( (UIEventListener_VectorDelegate_c *)v38->klass == UIEventListener_VectorDelegate_TypeInfo )
        {
          v8->klass = (UnityEngine_Component_c *)v38;
          if ( (UIEventListener_VectorDelegate_c *)v38->klass == v41 )
          {
LABEL_54:
            sub_1C36FFC((CGThumbnailListItem_o *)v8, (int32_t)v15, v39, v40);
            v42 = this->fields.mFG;
            if ( v42 )
            {
              v42->fields.autoResizeBoxCollider = 1;
              return;
            }
LABEL_57:
            sub_1C372B4(v4);
          }
        }
LABEL_52:
        sub_1C37574(v15);
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
    if ( mInverted )
      v5 = 2;
    else
      v5 = 3;
    if ( mDir )
      v6 = v5;
    else
      v6 = mInverted;
    this->fields.mValue = mScroll;
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
  UnityEngine_Object_o *current; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C47622 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIProgressBar_TypeInfo);
    byte_4C47622 = 1;
  }
  v5 = fminf(value, 1.0);
  if ( value < 0.0 )
    v5 = 0.0;
  if ( this->fields.mSize != v5 )
  {
    this->fields.mSize = v5;
    this->fields.mIsDirty = 1;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      current = (UnityEngine_Object_o *)UIProgressBar_TypeInfo->static_fields->current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(current, 0, 0) && this->fields.onChange )
      {
        UIProgressBar_TypeInfo->static_fields->current = (struct UIProgressBar_o *)this;
        sub_1C36FFC((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, (int32_t)this, v7, v8);
        onChange = this->fields.onChange;
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Execute_49220500(onChange, v9);
        UIProgressBar_TypeInfo->static_fields->current = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)UIProgressBar_TypeInfo->static_fields, 0, v11, v12);
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