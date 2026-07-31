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
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float v13; // s0

  if ( (byte_593CDA5 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CDA5 = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, go);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mCam,
      (int32_t)currentCamera,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7,
      v8);
    v13 = UIProgressBar__ScreenToValue((UIProgressBar_o *)this, UICamera_TypeInfo->static_fields->lastTouchPosition, 0);
    UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0);
  }
}


void UISlider__OnDragForeground(
        UISlider_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float mOffset; // s8
  float v14; // s0

  if ( (byte_593CDA7 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CDA7 = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, go);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mCam,
      (int32_t)currentCamera,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7,
      v8);
    mOffset = this->fields.mOffset;
    v14 = UIProgressBar__ScreenToValue((UIProgressBar_o *)this, UICamera_TypeInfo->static_fields->lastTouchPosition, 0);
    UIProgressBar__set_value((UIProgressBar_o *)this, mOffset + v14, 0);
  }
}


void UISlider__OnKey(UISlider_o *this, int32_t key, const MethodInfo *method)
{
  int32_t numberOfSteps; // w8
  float v6; // s0
  int32_t mFill; // w8
  float v8; // s0

  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  numberOfSteps = this->fields.numberOfSteps;
  v6 = 0.125;
  if ( numberOfSteps >= 2 )
    v6 = 1.0 / (float)(numberOfSteps - 1);
  mFill = this->fields.mFill;
  if ( mFill <= 1 )
  {
    if ( mFill )
    {
      if ( mFill == 1 )
      {
        if ( key != 275 )
        {
          if ( key != 276 )
            return;
          goto LABEL_21;
        }
LABEL_17:
        v8 = this->fields.mValue - v6;
LABEL_22:
        UIProgressBar__set_value((UIProgressBar_o *)this, v8, 0);
        return;
      }
      return;
    }
    if ( key != 275 )
    {
      if ( key == 276 )
        goto LABEL_17;
      return;
    }
LABEL_21:
    v8 = v6 + this->fields.mValue;
    goto LABEL_22;
  }
  if ( mFill == 2 )
  {
    if ( key != 273 )
    {
      if ( key == 274 )
        goto LABEL_17;
      return;
    }
    goto LABEL_21;
  }
  if ( mFill == 3 )
  {
    if ( key == 273 )
      goto LABEL_17;
    if ( key == 274 )
      goto LABEL_21;
  }
}


// local variable allocation has failed, the output may be wrong!
void UISlider__OnPressBackground(
        UISlider_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float v13; // s0
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8

  if ( (byte_593CDA4 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CDA4 = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, go);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mCam,
      (int32_t)currentCamera,
      (System_String_o *)isPressed,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    v13 = UIProgressBar__ScreenToValue((UIProgressBar_o *)this, UICamera_TypeInfo->static_fields->lastTouchPosition, 0);
    UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0);
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


// local variable allocation has failed, the output may be wrong!
void UISlider__OnPressForeground(
        UISlider_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *mFG; // x20
  bool v15; // w0
  float v16; // s0
  __int64 v17; // x1
  float value; // s0
  UICamera_c *v19; // x0
  float v20; // s8
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8

  if ( (byte_593CDA6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CDA6 = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, go);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mCam,
      (int32_t)currentCamera,
      (System_String_o *)isPressed,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    if ( isPressed )
    {
      mFG = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v15 = UnityEngine_Object__op_Equality(mFG, 0, 0);
      v16 = 0.0;
      if ( !v15 )
      {
        value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
        v19 = UICamera_TypeInfo;
        v20 = value;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v17);
          v19 = UICamera_TypeInfo;
        }
        v16 = v20 - UIProgressBar__ScreenToValue((UIProgressBar_o *)this, v19->static_fields->lastTouchPosition, 0);
      }
      this->fields.mOffset = v16;
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
  bool v5; // w8
  UnityEngine_Component_o *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  bool v11; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v13; // x20
  MissionNaviTransitionBoardItem_o *v14; // x21
  System_Delegate_o *klass; // x22
  UIEventListener_BoolDelegate_o *v16; // x23
  System_Delegate_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Delegate_o *v24; // x8
  System_Delegate_c *v25; // x1
  System_Delegate_o *monitor; // t1
  UIEventListener_VectorDelegate_o *v27; // x22
  System_Delegate_o *v28; // x0
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  UnityEngine_Object_o *thumb; // x20
  __int64 v36; // x1
  Il2CppObject *v37; // x20
  __int64 v38; // x1
  Il2CppObject *v39; // x20
  UnityEngine_Object_o *mFG; // x20
  UnityEngine_Object_o *v41; // x20
  __int64 v42; // x1
  UnityEngine_Object_o *cachedTransform; // x21
  UnityEngine_GameObject_o *v44; // x0
  MissionNaviTransitionBoardItem_o *v45; // x21
  System_Delegate_o *v46; // x22
  UIEventListener_BoolDelegate_o *v47; // x23
  System_Delegate_o *v48; // x0
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Delegate_o *v54; // t1
  UIEventListener_VectorDelegate_o *v55; // x22
  System_Delegate_o *v56; // x0
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7

  if ( (byte_593CDA3 & 1) == 0 )
  {
    sub_21FFC50(&UIEventListener_BoolDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UISlider_OnDragBackground__);
    sub_21FFC50(&Method_UISlider_OnDragForeground__);
    sub_21FFC50(&Method_UISlider_OnPressBackground__);
    sub_21FFC50(&Method_UISlider_OnPressForeground__);
    sub_21FFC50(&UIEventListener_VectorDelegate_TypeInfo);
    byte_593CDA3 = 1;
  }
  mBG = (UnityEngine_Object_o *)this->fields.mBG;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(mBG, 0, 0);
  v6 = (UnityEngine_Component_o *)this;
  if ( v5 )
  {
    v6 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v6 )
      goto LABEL_58;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v6,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      goto LABEL_14;
    v6 = (UnityEngine_Component_o *)this->fields.mBG;
    if ( !v6 )
      goto LABEL_58;
    v10 = UnityEngine_Component__GetComponent_object_(
            v6,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
    v6 = (UnityEngine_Component_o *)this;
    if ( v11 )
    {
LABEL_14:
      v6 = (UnityEngine_Component_o *)this->fields.mBG;
      if ( !v6 )
        goto LABEL_58;
    }
  }
  gameObject = UnityEngine_Component__get_gameObject(v6, 0);
  v6 = (UnityEngine_Component_o *)UIEventListener__Get(gameObject, 0);
  if ( !v6 )
LABEL_58:
    sub_21FFECC(v6, v4);
  v13 = v6;
  v14 = (MissionNaviTransitionBoardItem_o *)&v6[3];
  klass = (System_Delegate_o *)v6[3].klass;
  v16 = (UIEventListener_BoolDelegate_o *)sub_21FFEBC(UIEventListener_BoolDelegate_TypeInfo);
  UIEventListener_BoolDelegate___ctor(v16, (Il2CppObject *)this, Method_UISlider_OnPressBackground__, 0);
  v17 = System_Delegate__Combine(klass, (System_Delegate_o *)v16, 0);
  v24 = v17;
  if ( v17 )
  {
    v25 = (System_Delegate_c *)UIEventListener_BoolDelegate_TypeInfo;
    if ( (UIEventListener_BoolDelegate_c *)v17->klass != UIEventListener_BoolDelegate_TypeInfo )
      goto LABEL_55;
    v14->klass = (MissionNaviTransitionBoardItem_c *)v17;
    if ( v17->klass != v25 )
      goto LABEL_55;
  }
  else
  {
    v14->klass = 0;
  }
  sub_21FFBF4(v14, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  monitor = (System_Delegate_o *)v13[4].monitor;
  v13 = (UnityEngine_Component_o *)((char *)v13 + 104);
  v27 = (UIEventListener_VectorDelegate_o *)sub_21FFEBC(UIEventListener_VectorDelegate_TypeInfo);
  UIEventListener_VectorDelegate___ctor(v27, (Il2CppObject *)this, Method_UISlider_OnDragBackground__, 0);
  v28 = System_Delegate__Combine(monitor, (System_Delegate_o *)v27, 0);
  v24 = v28;
  if ( v28 )
  {
    v25 = (System_Delegate_c *)UIEventListener_VectorDelegate_TypeInfo;
    if ( (UIEventListener_VectorDelegate_c *)v28->klass != UIEventListener_VectorDelegate_TypeInfo )
      goto LABEL_55;
    v13->klass = (UnityEngine_Component_c *)v28;
    if ( v28->klass != v25 )
      goto LABEL_55;
  }
  else
  {
    v13->klass = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v13, (int32_t)v28, v18, v29, v30, v31, v32, v33);
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v6 )
      goto LABEL_58;
    v37 = UnityEngine_Component__GetComponent_object_(
            v6,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0, 0) )
      goto LABEL_37;
    v6 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v6 )
      goto LABEL_58;
    v39 = UnityEngine_Component__GetComponent_object_(
            v6,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0, 0) )
    {
LABEL_37:
      mFG = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      if ( UnityEngine_Object__op_Equality(mFG, 0, 0) )
        goto LABEL_44;
      v6 = (UnityEngine_Component_o *)this->fields.mFG;
      if ( !v6 )
        goto LABEL_58;
      v41 = (UnityEngine_Object_o *)this->fields.thumb;
      cachedTransform = (UnityEngine_Object_o *)UIRect__get_cachedTransform((UIRect_o *)v6, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
      if ( UnityEngine_Object__op_Inequality(v41, cachedTransform, 0) )
      {
LABEL_44:
        v6 = (UnityEngine_Component_o *)this->fields.thumb;
        if ( v6 )
        {
          v44 = UnityEngine_Component__get_gameObject(v6, 0);
          v6 = (UnityEngine_Component_o *)UIEventListener__Get(v44, 0);
          if ( v6 )
          {
            v13 = v6;
            v45 = (MissionNaviTransitionBoardItem_o *)&v6[3];
            v46 = (System_Delegate_o *)v6[3].klass;
            v47 = (UIEventListener_BoolDelegate_o *)sub_21FFEBC(UIEventListener_BoolDelegate_TypeInfo);
            UIEventListener_BoolDelegate___ctor(v47, (Il2CppObject *)this, Method_UISlider_OnPressForeground__, 0);
            v48 = System_Delegate__Combine(v46, (System_Delegate_o *)v47, 0);
            v24 = v48;
            if ( v48 )
            {
              v25 = (System_Delegate_c *)UIEventListener_BoolDelegate_TypeInfo;
              if ( (UIEventListener_BoolDelegate_c *)v48->klass != UIEventListener_BoolDelegate_TypeInfo )
                goto LABEL_55;
              v45->klass = (MissionNaviTransitionBoardItem_c *)v48;
              if ( v48->klass != v25 )
                goto LABEL_55;
            }
            else
            {
              v45->klass = 0;
            }
            sub_21FFBF4(v45, (int32_t)v48, v18, v49, v50, v51, v52, v53);
            v54 = (System_Delegate_o *)v13[4].monitor;
            v13 = (UnityEngine_Component_o *)((char *)v13 + 104);
            v55 = (UIEventListener_VectorDelegate_o *)sub_21FFEBC(UIEventListener_VectorDelegate_TypeInfo);
            UIEventListener_VectorDelegate___ctor(v55, (Il2CppObject *)this, Method_UISlider_OnDragForeground__, 0);
            v56 = System_Delegate__Combine(v54, (System_Delegate_o *)v55, 0);
            v24 = v56;
            if ( !v56 )
            {
LABEL_56:
              v13->klass = 0;
LABEL_57:
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v13, (int32_t)v24, v18, v57, v58, v59, v60, v61);
              return;
            }
            v25 = (System_Delegate_c *)UIEventListener_VectorDelegate_TypeInfo;
            if ( (UIEventListener_VectorDelegate_c *)v56->klass == UIEventListener_VectorDelegate_TypeInfo )
            {
              v13->klass = (UnityEngine_Component_c *)v56;
              if ( v56->klass == v25 )
                goto LABEL_57;
            }
LABEL_55:
            sub_220024C(v24, v25, v18);
            goto LABEL_56;
          }
        }
        goto LABEL_58;
      }
    }
  }
}


void UISlider__Upgrade(UISlider_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *foreground; // x20
  UnityEngine_Object_c *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t mInverted; // w8
  int32_t direction; // w9
  int v16; // w11

  if ( (byte_593CDA2 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CDA2 = 1;
  }
  if ( this->fields.direction != 2 )
  {
    foreground = (UnityEngine_Object_o *)this->fields.foreground;
    v4 = UnityEngine_Object_TypeInfo;
    this->fields.mValue = this->fields.rawValue;
    if ( !*(&v4->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v4, method);
    if ( UnityEngine_Object__op_Inequality(foreground, 0, 0) )
    {
      v6 = (UnityEngine_Component_o *)this->fields.foreground;
      if ( !v6 )
        sub_21FFECC(0, v5);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v6,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.mFG = (struct UIWidget_o *)Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mFG,
        (int32_t)Component_object,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
    mInverted = this->fields.mInverted;
    direction = this->fields.direction;
    this->fields.direction = 2;
    if ( mInverted )
      v16 = 3;
    else
      v16 = 2;
    if ( direction )
      mInverted = v16;
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