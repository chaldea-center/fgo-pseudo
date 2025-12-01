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
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float v13; // s0

  if ( (byte_4CCBB6D & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBB6D = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.mCam,
      (int32_t)currentCamera,
      (int32_t)method,
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
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float mOffset; // s8
  float v14; // s0

  if ( (byte_4CCBB6F & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBB6F = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.mCam,
      (int32_t)currentCamera,
      (int32_t)method,
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  float v13; // s0
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8

  if ( (byte_4CCBB6C & 1) == 0 )
  {
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBB6C = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.mCam,
      (int32_t)currentCamera,
      isPressed,
      (int32_t)method,
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


void UISlider__OnPressForeground(
        UISlider_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UICamera_c *v10; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UnityEngine_Camera_o *currentCamera; // x1
  UnityEngine_Object_o *mFG; // x20
  bool v14; // w0
  float v15; // s0
  float value; // s0
  UICamera_c *v17; // x0
  float v18; // s8
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8

  if ( (byte_4CCBB6E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBB6E = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.mCam,
      (int32_t)currentCamera,
      isPressed,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    if ( isPressed )
    {
      mFG = (UnityEngine_Object_o *)this->fields.mFG;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Equality(mFG, 0, 0);
      v15 = 0.0;
      if ( !v14 )
      {
        value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
        v17 = UICamera_TypeInfo;
        v18 = value;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v17 = UICamera_TypeInfo;
        }
        v15 = v18 - UIProgressBar__ScreenToValue((UIProgressBar_o *)this, v17->static_fields->lastTouchPosition, 0);
      }
      this->fields.mOffset = v15;
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
  GrandQuestFolderBoardItem_o *v10; // x21
  System_Delegate_o *klass; // x22
  UIEventListener_BoolDelegate_o *v12; // x23
  System_Delegate_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Delegate_o *v20; // x8
  UIEventListener_BoolDelegate_c *v21; // x1
  System_Delegate_o *monitor; // t1
  UIEventListener_VectorDelegate_o *v23; // x22
  System_Delegate_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UIEventListener_VectorDelegate_c *v31; // x1
  UnityEngine_Object_o *thumb; // x20
  Il2CppObject *v33; // x20
  Il2CppObject *v34; // x20
  UnityEngine_Object_o *mFG; // x20
  UnityEngine_Object_o *v36; // x20
  UnityEngine_Object_o *cachedTransform; // x21
  UnityEngine_GameObject_o *v38; // x0
  GrandQuestFolderBoardItem_o *v39; // x21
  System_Delegate_o *v40; // x22
  UIEventListener_BoolDelegate_o *v41; // x23
  System_Delegate_o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  UIEventListener_BoolDelegate_c *v49; // x1
  System_Delegate_o *v50; // t1
  UIEventListener_VectorDelegate_o *v51; // x22
  System_Delegate_o *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  UIEventListener_VectorDelegate_c *v59; // x1

  if ( (byte_4CCBB6B & 1) == 0 )
  {
    sub_1C713B0(&UIEventListener_BoolDelegate_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UISlider_OnDragBackground__);
    sub_1C713B0(&Method_UISlider_OnDragForeground__);
    sub_1C713B0(&Method_UISlider_OnPressBackground__);
    sub_1C713B0(&Method_UISlider_OnPressForeground__);
    sub_1C713B0(&UIEventListener_VectorDelegate_TypeInfo);
    byte_4CCBB6B = 1;
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
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_14;
  v5 = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !v5 )
    goto LABEL_60;
  v7 = UnityEngine_Component__GetComponent_object_(
         v5,
         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider2D___);
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
  v10 = (GrandQuestFolderBoardItem_o *)&v5[3];
  klass = (System_Delegate_o *)v5[3].klass;
  v12 = (UIEventListener_BoolDelegate_o *)sub_1C715FC(UIEventListener_BoolDelegate_TypeInfo);
  UIEventListener_BoolDelegate___ctor(v12, (Il2CppObject *)this, Method_UISlider_OnPressBackground__, 0);
  v13 = System_Delegate__Combine(klass, (System_Delegate_o *)v12, 0);
  v20 = v13;
  if ( v13 )
  {
    v21 = UIEventListener_BoolDelegate_TypeInfo;
    if ( (UIEventListener_BoolDelegate_c *)v13->klass != UIEventListener_BoolDelegate_TypeInfo )
      goto LABEL_57;
    v10->klass = (GrandQuestFolderBoardItem_c *)v13;
    if ( (UIEventListener_BoolDelegate_c *)v13->klass != v21 )
      goto LABEL_57;
  }
  else
  {
    v10->klass = 0;
  }
  sub_1C71354(v10, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  monitor = (System_Delegate_o *)v9[4].monitor;
  v9 = (UnityEngine_Component_o *)((char *)v9 + 104);
  v23 = (UIEventListener_VectorDelegate_o *)sub_1C715FC(UIEventListener_VectorDelegate_TypeInfo);
  UIEventListener_VectorDelegate___ctor(v23, (Il2CppObject *)this, Method_UISlider_OnDragBackground__, 0);
  v24 = System_Delegate__Combine(monitor, (System_Delegate_o *)v23, 0);
  v20 = v24;
  if ( v24 )
  {
    v31 = UIEventListener_VectorDelegate_TypeInfo;
    if ( (UIEventListener_VectorDelegate_c *)v24->klass != UIEventListener_VectorDelegate_TypeInfo )
      goto LABEL_57;
    v9->klass = (UnityEngine_Component_c *)v24;
    if ( (UIEventListener_VectorDelegate_c *)v24->klass != v31 )
      goto LABEL_57;
  }
  else
  {
    v9->klass = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)v9, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  thumb = (UnityEngine_Object_o *)this->fields.thumb;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(thumb, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v5 )
      goto LABEL_60;
    v33 = UnityEngine_Component__GetComponent_object_(
            v5,
            (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0) )
      goto LABEL_39;
    v5 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v5 )
      goto LABEL_60;
    v34 = UnityEngine_Component__GetComponent_object_(
            v5,
            (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider2D___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0) )
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
      v36 = (UnityEngine_Object_o *)this->fields.thumb;
      cachedTransform = (UnityEngine_Object_o *)UIRect__get_cachedTransform((UIRect_o *)v5, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v36, cachedTransform, 0) )
      {
LABEL_46:
        v5 = (UnityEngine_Component_o *)this->fields.thumb;
        if ( !v5
          || (v38 = UnityEngine_Component__get_gameObject(v5, 0),
              (v5 = (UnityEngine_Component_o *)UIEventListener__Get(v38, 0)) == 0) )
        {
LABEL_60:
          sub_1C71608(v5, v4);
        }
        v9 = v5;
        v39 = (GrandQuestFolderBoardItem_o *)&v5[3];
        v40 = (System_Delegate_o *)v5[3].klass;
        v41 = (UIEventListener_BoolDelegate_o *)sub_1C715FC(UIEventListener_BoolDelegate_TypeInfo);
        UIEventListener_BoolDelegate___ctor(v41, (Il2CppObject *)this, Method_UISlider_OnPressForeground__, 0);
        v42 = System_Delegate__Combine(v40, (System_Delegate_o *)v41, 0);
        v20 = v42;
        if ( v42 )
        {
          v49 = UIEventListener_BoolDelegate_TypeInfo;
          if ( (UIEventListener_BoolDelegate_c *)v42->klass != UIEventListener_BoolDelegate_TypeInfo )
            goto LABEL_57;
          v39->klass = (GrandQuestFolderBoardItem_c *)v42;
          if ( (UIEventListener_BoolDelegate_c *)v42->klass != v49 )
            goto LABEL_57;
        }
        else
        {
          v39->klass = 0;
        }
        sub_1C71354(v39, (int32_t)v42, v43, v44, v45, v46, v47, v48);
        v50 = (System_Delegate_o *)v9[4].monitor;
        v9 = (UnityEngine_Component_o *)((char *)v9 + 104);
        v51 = (UIEventListener_VectorDelegate_o *)sub_1C715FC(UIEventListener_VectorDelegate_TypeInfo);
        UIEventListener_VectorDelegate___ctor(v51, (Il2CppObject *)this, Method_UISlider_OnDragForeground__, 0);
        v52 = System_Delegate__Combine(v50, (System_Delegate_o *)v51, 0);
        v20 = v52;
        if ( !v52 )
        {
LABEL_58:
          v9->klass = (UnityEngine_Component_c *)v20;
LABEL_59:
          sub_1C71354((GrandQuestFolderBoardItem_o *)v9, (int32_t)v20, v53, v54, v55, v56, v57, v58);
          return;
        }
        v59 = UIEventListener_VectorDelegate_TypeInfo;
        if ( (UIEventListener_VectorDelegate_c *)v52->klass == UIEventListener_VectorDelegate_TypeInfo )
        {
          v9->klass = (UnityEngine_Component_c *)v52;
          if ( (UIEventListener_VectorDelegate_c *)v52->klass == v59 )
            goto LABEL_59;
        }
LABEL_57:
        sub_1C719A4(v20);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t mInverted; // w8
  int32_t direction; // w9
  int v15; // w11

  if ( (byte_4CCBB6A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB6A = 1;
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
        sub_1C71608(0, v4);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v5,
                           (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.mFG = (struct UIWidget_o *)Component_object;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.mFG,
        (int32_t)Component_object,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
    mInverted = this->fields.mInverted;
    direction = this->fields.direction;
    this->fields.direction = 2;
    if ( mInverted )
      v15 = 3;
    else
      v15 = 2;
    if ( direction )
      mInverted = v15;
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