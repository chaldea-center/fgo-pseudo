void UISlider___ctor(UISlider_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.rawValue = 0x23F800000LL;
  UIProgressBar___ctor((UIProgressBar_o *)this, 0);
}


void UISlider__OnDragBackground(
        UISlider_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UICamera_c *v6; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float v9; // s0

  if ( (byte_4C5B437 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B437 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)currentCamera, (int32_t)method, v4);
    v9 = UIProgressBar__ScreenToValue((UIProgressBar_o *)this, UICamera_TypeInfo->static_fields->lastTouchPosition, 0);
    UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0);
  }
}


void UISlider__OnDragForeground(
        UISlider_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3
  UICamera_c *v6; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float mOffset; // s8
  float v10; // s0

  if ( (byte_4C5B439 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B439 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)currentCamera, (int32_t)method, v4);
    mOffset = this->fields.mOffset;
    v10 = UIProgressBar__ScreenToValue((UIProgressBar_o *)this, UICamera_TypeInfo->static_fields->lastTouchPosition, 0);
    UIProgressBar__set_value((UIProgressBar_o *)this, mOffset + v10, 0);
  }
}


void UISlider__OnKey(UISlider_o *this, int32_t key, const MethodInfo *method)
{
  int32_t numberOfSteps; // w8
  float v6; // s0
  float v7; // s0

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    numberOfSteps = this->fields.numberOfSteps;
    v6 = 0.125;
    if ( numberOfSteps >= 2 )
      v6 = 1.0 / (float)(numberOfSteps - 1);
    switch ( this->fields.mFill )
    {
      case 0:
        if ( key == 275 )
          goto LABEL_16;
        if ( key == 276 )
          goto LABEL_18;
        return;
      case 1:
        if ( key == 275 )
          goto LABEL_18;
        if ( key == 276 )
          goto LABEL_16;
        return;
      case 2:
        if ( key == 273 )
          goto LABEL_16;
        if ( key == 274 )
          goto LABEL_18;
        return;
      case 3:
        if ( key == 273 )
        {
LABEL_18:
          v7 = this->fields.mValue - v6;
          goto LABEL_19;
        }
        if ( key == 274 )
        {
LABEL_16:
          v7 = v6 + this->fields.mValue;
LABEL_19:
          UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0);
          return;
        }
        break;
      default:
        return;
    }
  }
}


void UISlider__OnPressBackground(
        UISlider_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  UICamera_c *v6; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float v9; // s0
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8

  if ( (byte_4C5B436 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B436 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)currentCamera, isPressed, method);
    v9 = UIProgressBar__ScreenToValue((UIProgressBar_o *)this, UICamera_TypeInfo->static_fields->lastTouchPosition, 0);
    UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0);
    if ( !isPressed )
    {
      onDragFinished = this->fields.onDragFinished;
      if ( onDragFinished )
        ((void (__fastcall *)(intptr_t, intptr_t))onDragFinished->fields.invoke_impl)(
          onDragFinished->fields.method_code,
          onDragFinished->fields.method);
    }
  }
}


void UISlider__OnPressForeground(
        UISlider_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  UICamera_c *v6; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  UnityEngine_Object_o *mFG; // x20
  bool v10; // w0
  float v11; // s0
  float value; // s0
  UICamera_c *v13; // x0
  float v14; // s8
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8

  if ( (byte_4C5B438 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B438 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCam, (int32_t)currentCamera, isPressed, method);
    if ( isPressed )
    {
      mFG = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality(mFG, 0, 0);
      v11 = 0.0;
      if ( !v10 )
      {
        value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
        v13 = UICamera_TypeInfo;
        v14 = value;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v13 = UICamera_TypeInfo;
        }
        v11 = v14 - UIProgressBar__ScreenToValue((UIProgressBar_o *)this, v13->static_fields->lastTouchPosition, 0);
      }
      this->fields.mOffset = v11;
    }
    else
    {
      onDragFinished = this->fields.onDragFinished;
      if ( onDragFinished )
        ((void (__fastcall *)(intptr_t, intptr_t))onDragFinished->fields.invoke_impl)(
          onDragFinished->fields.method_code,
          onDragFinished->fields.method);
    }
  }
}


void UISlider__OnStart(UISlider_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mBG; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v9; // x20
  CGThumbnailListItem_o *v10; // x21
  System_Delegate_o *klass; // x22
  UIEventListener_BoolDelegate_o *v12; // x23
  System_Delegate_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Delegate_o *v16; // x8
  UIEventListener_BoolDelegate_c *v17; // x1
  System_Delegate_o *monitor; // t1
  UIEventListener_VectorDelegate_o *v19; // x22
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UIEventListener_VectorDelegate_c *v23; // x1
  UnityEngine_Object_o *thumb; // x20
  Il2CppObject *v25; // x20
  Il2CppObject *v26; // x20
  UnityEngine_Object_o *mFG; // x20
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *cachedTransform; // x21
  UnityEngine_GameObject_o *v30; // x0
  CGThumbnailListItem_o *v31; // x21
  System_Delegate_o *v32; // x22
  UIEventListener_BoolDelegate_o *v33; // x23
  System_Delegate_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UIEventListener_BoolDelegate_c *v37; // x1
  System_Delegate_o *v38; // t1
  UIEventListener_VectorDelegate_o *v39; // x22
  System_Delegate_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  UIEventListener_VectorDelegate_c *v43; // x1

  if ( (byte_4C5B435 & 1) == 0 )
  {
    sub_1C3E564(&UIEventListener_BoolDelegate_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_UISlider_OnDragBackground__);
    sub_1C3E564(&Method_UISlider_OnDragForeground__);
    sub_1C3E564(&Method_UISlider_OnPressBackground__);
    sub_1C3E564(&Method_UISlider_OnPressForeground__);
    sub_1C3E564(&UIEventListener_VectorDelegate_TypeInfo);
    byte_4C5B435 = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mBG, 0, 0) )
    goto LABEL_16;
  v5 = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !v5 )
    goto LABEL_60;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       v5,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_14;
  v5 = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !v5 )
    goto LABEL_60;
  v7 = UnityEngine_Component__GetComponent_object_(
         v5,
         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) )
  {
LABEL_14:
    v5 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v5 )
      goto LABEL_60;
  }
  else
  {
LABEL_16:
    v5 = (UnityEngine_Component_o *)this;
  }
  gameObject = UnityEngine_Component__get_gameObject(v5, 0);
  v5 = (UnityEngine_Component_o *)UIEventListener__Get(gameObject, 0);
  if ( !v5 )
    goto LABEL_60;
  v9 = v5;
  v10 = (CGThumbnailListItem_o *)&v5[3];
  klass = (System_Delegate_o *)v5[3].klass;
  v12 = (UIEventListener_BoolDelegate_o *)sub_1C3E7B0(UIEventListener_BoolDelegate_TypeInfo);
  UIEventListener_BoolDelegate___ctor(v12, (Il2CppObject *)this, Method_UISlider_OnPressBackground__, 0);
  v13 = System_Delegate__Combine(klass, (System_Delegate_o *)v12, 0);
  v16 = v13;
  if ( v13 )
  {
    v17 = UIEventListener_BoolDelegate_TypeInfo;
    if ( (UIEventListener_BoolDelegate_c *)v13->klass != UIEventListener_BoolDelegate_TypeInfo )
      goto LABEL_57;
    v10->klass = (CGThumbnailListItem_c *)v13;
    if ( (UIEventListener_BoolDelegate_c *)v13->klass != v17 )
      goto LABEL_57;
  }
  else
  {
    v10->klass = 0;
  }
  sub_1C3E508(v10, (int32_t)v13, v14, v15);
  monitor = (System_Delegate_o *)v9[4].monitor;
  v9 = (UnityEngine_Component_o *)((char *)v9 + 104);
  v19 = (UIEventListener_VectorDelegate_o *)sub_1C3E7B0(UIEventListener_VectorDelegate_TypeInfo);
  UIEventListener_VectorDelegate___ctor(v19, (Il2CppObject *)this, Method_UISlider_OnDragBackground__, 0);
  v20 = System_Delegate__Combine(monitor, (System_Delegate_o *)v19, 0);
  v16 = v20;
  if ( v20 )
  {
    v23 = UIEventListener_VectorDelegate_TypeInfo;
    if ( (UIEventListener_VectorDelegate_c *)v20->klass != UIEventListener_VectorDelegate_TypeInfo )
      goto LABEL_57;
    v9->klass = (UnityEngine_Component_c *)v20;
    if ( (UIEventListener_VectorDelegate_c *)v20->klass != v23 )
      goto LABEL_57;
  }
  else
  {
    v9->klass = 0;
  }
  sub_1C3E508((CGThumbnailListItem_o *)v9, (int32_t)v20, v21, v22);
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v5 )
      goto LABEL_60;
    v25 = UnityEngine_Component__GetComponent_object_(
            v5,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0) )
      goto LABEL_39;
    v5 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v5 )
      goto LABEL_60;
    v26 = UnityEngine_Component__GetComponent_object_(
            v5,
            (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
    {
LABEL_39:
      mFG = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(mFG, 0, 0) )
        goto LABEL_46;
      v5 = (UnityEngine_Component_o *)this->fields.mFG;
      if ( !v5 )
        goto LABEL_60;
      v28 = (UnityEngine_Object_o *)this->fields.thumb;
      cachedTransform = (UnityEngine_Object_o *)UIRect__get_cachedTransform((UIRect_o *)v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v28, cachedTransform, 0) )
      {
LABEL_46:
        v5 = (UnityEngine_Component_o *)this->fields.thumb;
        if ( !v5
          || (v30 = UnityEngine_Component__get_gameObject(v5, 0),
              (v5 = (UnityEngine_Component_o *)UIEventListener__Get(v30, 0)) == 0) )
        {
LABEL_60:
          sub_1C3E7C0(v5, v4);
        }
        v9 = v5;
        v31 = (CGThumbnailListItem_o *)&v5[3];
        v32 = (System_Delegate_o *)v5[3].klass;
        v33 = (UIEventListener_BoolDelegate_o *)sub_1C3E7B0(UIEventListener_BoolDelegate_TypeInfo);
        UIEventListener_BoolDelegate___ctor(v33, (Il2CppObject *)this, Method_UISlider_OnPressForeground__, 0);
        v34 = System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0);
        v16 = v34;
        if ( v34 )
        {
          v37 = UIEventListener_BoolDelegate_TypeInfo;
          if ( (UIEventListener_BoolDelegate_c *)v34->klass != UIEventListener_BoolDelegate_TypeInfo )
            goto LABEL_57;
          v31->klass = (CGThumbnailListItem_c *)v34;
          if ( (UIEventListener_BoolDelegate_c *)v34->klass != v37 )
            goto LABEL_57;
        }
        else
        {
          v31->klass = 0;
        }
        sub_1C3E508(v31, (int32_t)v34, v35, v36);
        v38 = (System_Delegate_o *)v9[4].monitor;
        v9 = (UnityEngine_Component_o *)((char *)v9 + 104);
        v39 = (UIEventListener_VectorDelegate_o *)sub_1C3E7B0(UIEventListener_VectorDelegate_TypeInfo);
        UIEventListener_VectorDelegate___ctor(v39, (Il2CppObject *)this, Method_UISlider_OnDragForeground__, 0);
        v40 = System_Delegate__Combine(v38, (System_Delegate_o *)v39, 0);
        v16 = v40;
        if ( !v40 )
        {
LABEL_58:
          v9->klass = (UnityEngine_Component_c *)v16;
LABEL_59:
          sub_1C3E508((CGThumbnailListItem_o *)v9, (int32_t)v16, v41, v42);
          return;
        }
        v43 = UIEventListener_VectorDelegate_TypeInfo;
        if ( (UIEventListener_VectorDelegate_c *)v40->klass == UIEventListener_VectorDelegate_TypeInfo )
        {
          v9->klass = (UnityEngine_Component_c *)v40;
          if ( (UIEventListener_VectorDelegate_c *)v40->klass == v43 )
            goto LABEL_59;
        }
LABEL_57:
        sub_1C3EA80(v16);
        goto LABEL_58;
      }
    }
  }
}


void UISlider__Upgrade(UISlider_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *foreground; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t mInverted; // w8
  int32_t direction; // w9
  int v11; // w11

  if ( (byte_4C5B434 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B434 = 1;
  }
  if ( this->fields.direction != 2 )
  {
    this->fields.mValue = this->fields.rawValue;
    foreground = (UnityEngine_Object_o *)this->fields.foreground;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(foreground, 0, 0) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.foreground;
      if ( !v5 )
        sub_1C3E7C0(0, v4);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v5,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.mFG = (struct UIWidget_o *)Component_object;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mFG, (int32_t)Component_object, v7, v8);
    }
    mInverted = this->fields.mInverted;
    direction = this->fields.direction;
    this->fields.direction = 2;
    if ( mInverted )
      v11 = 3;
    else
      v11 = 2;
    if ( direction )
      mInverted = v11;
    this->fields.mFill = mInverted;
  }
}


bool UISlider__get_inverted(UISlider_o *this, const MethodInfo *method)
{
  return UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0);
}


float UISlider__get_sliderValue(UISlider_o *this, const MethodInfo *method)
{
  return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
}


void UISlider__set_inverted(UISlider_o *this, bool value, const MethodInfo *method)
{
  ;
}


void UISlider__set_sliderValue(UISlider_o *this, float value, const MethodInfo *method)
{
  UIProgressBar__set_value((UIProgressBar_o *)this, value, 0);
}