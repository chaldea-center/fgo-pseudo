void UISliderWithButton___ctor(UISliderWithButton_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.rawValue = 0x23F800000LL;
  this->fields.isTouchEnable = 1;
  UIProgressBar___ctor((UIProgressBar_o *)this, 0);
}


void UISliderWithButton__OnClickMinusButton(UISliderWithButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  float v7; // s0
  float v8; // s8
  float v9; // s0

  if ( (byte_593A004 & 1) == 0 )
  {
    sub_21FFC50(&Method_UISliderWithButton_OnClickMinusButton__);
    byte_593A004 = 1;
  }
  if ( this->fields.isTouchEnable )
  {
    if ( this->fields.nowStep != this->fields.minStep )
    {
      v5 = Method_UISliderWithButton_OnClickMinusButton__;
      if ( (*((_BYTE *)Method_UISliderWithButton_OnClickMinusButton__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_UISliderWithButton_OnClickMinusButton__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      v7 = (float)(this->fields.maxStep - this->fields.minStep);
      this->fields.valueChange = -1;
      v8 = 1.0 / v7;
      if ( (float)(UIProgressBar__get_value((UIProgressBar_o *)this, 0) - (float)(1.0 / v7)) >= 0.0 )
        v9 = UIProgressBar__get_value((UIProgressBar_o *)this, 0) - v8;
      else
        v9 = 0.0;
      UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0);
    }
  }
  else
  {
    v3 = Method_UISliderWithButton_OnClickMinusButton__;
    if ( (*((_BYTE *)Method_UISliderWithButton_OnClickMinusButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_UISliderWithButton_OnClickMinusButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
  }
}


void UISliderWithButton__OnClickPlusButton(UISliderWithButton_o *this, const MethodInfo *method)
{
  int32_t nowStep; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  float v8; // s0
  float v9; // s8
  float v10; // s0

  if ( (byte_593A003 & 1) == 0 )
  {
    sub_21FFC50(&Method_UISliderWithButton_OnClickPlusButton__);
    byte_593A003 = 1;
  }
  if ( this->fields.isTouchEnable )
  {
    nowStep = this->fields.nowStep;
    if ( nowStep != this->fields.maxStep && nowStep != this->fields.maxConfigurableStep )
    {
      v6 = Method_UISliderWithButton_OnClickPlusButton__;
      if ( (*((_BYTE *)Method_UISliderWithButton_OnClickPlusButton__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_21FFC68(Method_UISliderWithButton_OnClickPlusButton__);
      v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      v8 = (float)(this->fields.maxStep - this->fields.minStep);
      this->fields.valueChange = 1;
      v9 = 1.0 / v8;
      if ( (float)(UIProgressBar__get_value((UIProgressBar_o *)this, 0) + (float)(1.0 / v8)) <= 1.0 )
        v10 = v9 + UIProgressBar__get_value((UIProgressBar_o *)this, 0);
      else
        v10 = 1.0;
      UIProgressBar__set_value((UIProgressBar_o *)this, v10, 0);
    }
  }
  else
  {
    v4 = Method_UISliderWithButton_OnClickPlusButton__;
    if ( (*((_BYTE *)Method_UISliderWithButton_OnClickPlusButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_UISliderWithButton_OnClickPlusButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void UISliderWithButton__OnDragBackground(
        UISliderWithButton_o *this,
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

  if ( (byte_593A000 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593A000 = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 && this->fields.isTouchEnable )
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


void UISliderWithButton__OnDragForeground(
        UISliderWithButton_o *this,
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

  if ( (byte_593A002 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593A002 = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 && this->fields.isTouchEnable )
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


void UISliderWithButton__OnKey(UISliderWithButton_o *this, int32_t key, const MethodInfo *method)
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
void UISliderWithButton__OnPressBackground(
        UISliderWithButton_o *this,
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

  if ( (byte_5939FFF & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_5939FFF = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 && this->fields.isTouchEnable )
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
void UISliderWithButton__OnPressForeground(
        UISliderWithButton_o *this,
        UnityEngine_GameObject_o *go,
        bool isPressed,
        const MethodInfo *method)
{
  UICamera_c *v6; // x0
  UnityEngine_Transform_o *thumb; // x0
  float v8; // s0 OVERLAPPED
  float v9; // s1
  float v10; // s2
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UICamera_c *v18; // x0
  struct UnityEngine_Camera_o *currentCamera; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *mFG; // x20
  bool v22; // w0
  float v23; // s0
  __int64 v24; // x1
  float value; // s0
  UICamera_c *v26; // x0
  float v27; // s8
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593A001 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593A001 = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, go);
    v6 = UICamera_TypeInfo;
  }
  if ( v6->static_fields->currentScheme != 2 && this->fields.isTouchEnable )
  {
    thumb = this->fields.thumb;
    if ( isPressed )
    {
      if ( thumb )
      {
        v29.fields.x = 2.0;
        v29.fields.y = 2.0;
        v29.fields.z = 1.0;
        UnityEngine_Transform__set_localScale(thumb, v29, 0);
        thumb = (UnityEngine_Transform_o *)this->fields.mBG;
        if ( thumb )
        {
          thumb = UnityEngine_Component__get_transform((UnityEngine_Component_o *)thumb, 0);
          if ( thumb )
          {
            v30.fields.x = 1.0;
            v30.fields.y = 2.0;
            v30.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(thumb, v30, 0);
            thumb = (UnityEngine_Transform_o *)this->fields.mFG;
            if ( thumb )
            {
              thumb = UnityEngine_Component__get_transform((UnityEngine_Component_o *)thumb, 0);
              if ( thumb )
              {
                v8 = 1.0;
                v9 = 2.0;
LABEL_20:
                v10 = 1.0;
                UnityEngine_Transform__set_localScale(thumb, *(UnityEngine_Vector3_o *)&v8, 0);
                v18 = UICamera_TypeInfo;
                if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v11);
                  v18 = UICamera_TypeInfo;
                }
                currentCamera = v18->static_fields->currentCamera;
                this->fields.mCam = currentCamera;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.mCam,
                  (int32_t)currentCamera,
                  v12,
                  v13,
                  v14,
                  v15,
                  v16,
                  v17);
                if ( isPressed )
                {
                  mFG = (UnityEngine_Object_o *)this->fields.mFG;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
                  v22 = UnityEngine_Object__op_Equality(mFG, 0, 0);
                  v23 = 0.0;
                  if ( !v22 )
                  {
                    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
                    v26 = UICamera_TypeInfo;
                    v27 = value;
                    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v24);
                      v26 = UICamera_TypeInfo;
                    }
                    v23 = v27
                        - UIProgressBar__ScreenToValue(
                            (UIProgressBar_o *)this,
                            v26->static_fields->lastTouchPosition,
                            0);
                  }
                  this->fields.mOffset = v23;
                }
                else
                {
                  onDragFinished = this->fields.onDragFinished;
                  if ( onDragFinished )
                    ((void (__fastcall *)(intptr_t, intptr_t))onDragFinished->fields.invoke_impl)(
                      onDragFinished->fields.method_code,
                      onDragFinished->fields.method);
                }
                return;
              }
            }
          }
        }
      }
    }
    else if ( thumb )
    {
      v31.fields.x = 1.0;
      v31.fields.y = 1.0;
      v31.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(thumb, v31, 0);
      thumb = (UnityEngine_Transform_o *)this->fields.mBG;
      if ( thumb )
      {
        thumb = UnityEngine_Component__get_transform((UnityEngine_Component_o *)thumb, 0);
        if ( thumb )
        {
          v32.fields.x = 1.0;
          v32.fields.y = 1.0;
          v32.fields.z = 1.0;
          UnityEngine_Transform__set_localScale(thumb, v32, 0);
          thumb = (UnityEngine_Transform_o *)this->fields.mFG;
          if ( thumb )
          {
            thumb = UnityEngine_Component__get_transform((UnityEngine_Component_o *)thumb, 0);
            if ( thumb )
            {
              v8 = 1.0;
              v9 = 1.0;
              goto LABEL_20;
            }
          }
        }
      }
    }
    sub_21FFECC(thumb, go);
  }
}


void UISliderWithButton__OnStart(UISliderWithButton_o *this, const MethodInfo *method)
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

  if ( (byte_5939FFE & 1) == 0 )
  {
    sub_21FFC50(&UIEventListener_BoolDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UISliderWithButton_OnDragBackground__);
    sub_21FFC50(&Method_UISliderWithButton_OnDragForeground__);
    sub_21FFC50(&Method_UISliderWithButton_OnPressBackground__);
    sub_21FFC50(&Method_UISliderWithButton_OnPressForeground__);
    sub_21FFC50(&UIEventListener_VectorDelegate_TypeInfo);
    byte_5939FFE = 1;
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
  UIEventListener_BoolDelegate___ctor(v16, (Il2CppObject *)this, Method_UISliderWithButton_OnPressBackground__, 0);
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
  UIEventListener_VectorDelegate___ctor(v27, (Il2CppObject *)this, Method_UISliderWithButton_OnDragBackground__, 0);
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
            UIEventListener_BoolDelegate___ctor(
              v47,
              (Il2CppObject *)this,
              Method_UISliderWithButton_OnPressForeground__,
              0);
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
            UIEventListener_VectorDelegate___ctor(
              v55,
              (Il2CppObject *)this,
              Method_UISliderWithButton_OnDragForeground__,
              0);
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


void UISliderWithButton__SetGray(UISliderWithButton_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *plusButton; // x0
  UnityEngine_Transform_o *thumb; // x20
  UnityEngine_Transform_o *v5; // x20
  UnityEngine_Transform_o *v6; // x19
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593A006 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    byte_593A006 = 1;
  }
  plusButton = (UnityEngine_Component_o *)this->fields.plusButton;
  this->fields.isTouchEnable = 0;
  if ( !plusButton )
    goto LABEL_25;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))plusButton->klass[1]._1.nestedTypes)(
    plusButton,
    3,
    1,
    plusButton->klass[1]._1.implementedInterfaces);
  plusButton = (UnityEngine_Component_o *)this->fields.minusButton;
  if ( !plusButton )
    goto LABEL_25;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))plusButton->klass[1]._1.nestedTypes)(
    plusButton,
    3,
    1,
    plusButton->klass[1]._1.implementedInterfaces);
  plusButton = (UnityEngine_Component_o *)this->fields.thumb;
  if ( !plusButton )
    goto LABEL_25;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                            plusButton,
                                            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !plusButton )
    goto LABEL_25;
  v7.fields.r = 0.5;
  v7.fields.g = 0.5;
  v7.fields.b = 0.5;
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)plusButton, v7, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.minLabel;
  if ( !plusButton )
    goto LABEL_25;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)plusButton, v8, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.maxLabel;
  if ( !plusButton )
    goto LABEL_25;
  v9.fields.r = 0.5;
  v9.fields.g = 0.5;
  v9.fields.b = 0.5;
  v9.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)plusButton, v9, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.minValue;
  if ( !plusButton )
    goto LABEL_25;
  v10.fields.r = 0.5;
  v10.fields.g = 0.5;
  v10.fields.b = 0.5;
  v10.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)plusButton, v10, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.maxValue;
  if ( !plusButton )
    goto LABEL_25;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)plusButton, v11, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_25;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)plusButton, v12, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_25;
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)plusButton, v13, 0);
  thumb = this->fields.thumb;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !thumb )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(thumb, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_25;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v5 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v5 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_25;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v6 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v6 )
LABEL_25:
    sub_21FFECC(plusButton, method);
  UnityEngine_Transform__set_localScale(v6, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}


void UISliderWithButton__SetMaxConfigurableStep(
        UISliderWithButton_o *this,
        int32_t configurableStep,
        const MethodInfo *method)
{
  this->fields.maxConfigurableStep = configurableStep;
}


void UISliderWithButton__SetTouchEnable(UISliderWithButton_o *this, bool isEnable, const MethodInfo *method)
{
  this->fields.isTouchEnable = isEnable;
}


void UISliderWithButton__Upgrade(UISliderWithButton_o *this, const MethodInfo *method)
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

  if ( (byte_5939FFD & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939FFD = 1;
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


bool UISliderWithButton__get_inverted(UISliderWithButton_o *this, const MethodInfo *method)
{
  return UIProgressBar__get_isInverted((UIProgressBar_o *)this, 0);
}


float UISliderWithButton__get_sliderValue(UISliderWithButton_o *this, const MethodInfo *method)
{
  return UIProgressBar__get_value((UIProgressBar_o *)this, 0);
}


void UISliderWithButton__grayMode(UISliderWithButton_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *plusButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *thumb; // x20
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x19
  UnityEngine_Color_o v16; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v17; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v18; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v19; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v20; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v21; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v22; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v23; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v24; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  plusButton = (UnityEngine_Component_o *)this->fields.plusButton;
  this->fields.isTouchEnable = 0;
  if ( !plusButton )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))plusButton->klass[1]._1.nestedTypes)(
    plusButton,
    3,
    1,
    plusButton->klass[1]._1.implementedInterfaces);
  plusButton = (UnityEngine_Component_o *)this->fields.minusButton;
  if ( !plusButton )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))plusButton->klass[1]._1.nestedTypes)(
    plusButton,
    3,
    1,
    plusButton->klass[1]._1.implementedInterfaces);
  plusButton = (UnityEngine_Component_o *)this->fields.thumb;
  if ( !plusButton )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(plusButton, 0);
  v16.fields.r = 0.5;
  v16.fields.g = 0.5;
  v16.fields.b = 0.5;
  v16.fields.a = 1.0;
  TweenColor__Begin(gameObject, 0.5, v16, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.plusButton;
  if ( !plusButton )
    goto LABEL_24;
  v5 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v17.fields.r = 0.5;
  v17.fields.g = 0.5;
  v17.fields.b = 0.5;
  v17.fields.a = 1.0;
  TweenColor__Begin(v5, 0.5, v17, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.minusButton;
  if ( !plusButton )
    goto LABEL_24;
  v6 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v18.fields.r = 0.5;
  v18.fields.g = 0.5;
  v18.fields.b = 0.5;
  v18.fields.a = 1.0;
  TweenColor__Begin(v6, 0.5, v18, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.minLabel;
  if ( !plusButton )
    goto LABEL_24;
  v7 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v19.fields.r = 0.5;
  v19.fields.g = 0.5;
  v19.fields.b = 0.5;
  v19.fields.a = 1.0;
  TweenColor__Begin(v7, 0.5, v19, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.maxLabel;
  if ( !plusButton )
    goto LABEL_24;
  v8 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v20.fields.r = 0.5;
  v20.fields.g = 0.5;
  v20.fields.b = 0.5;
  v20.fields.a = 1.0;
  TweenColor__Begin(v8, 0.5, v20, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.minValue;
  if ( !plusButton )
    goto LABEL_24;
  v9 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v21.fields.r = 0.5;
  v21.fields.g = 0.5;
  v21.fields.b = 0.5;
  v21.fields.a = 1.0;
  TweenColor__Begin(v9, 0.5, v21, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.maxValue;
  if ( !plusButton )
    goto LABEL_24;
  v10 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v22.fields.r = 0.5;
  v22.fields.g = 0.5;
  v22.fields.b = 0.5;
  v22.fields.a = 1.0;
  TweenColor__Begin(v10, 0.5, v22, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_24;
  v11 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v23.fields.r = 0.5;
  v23.fields.g = 0.5;
  v23.fields.b = 0.5;
  v23.fields.a = 1.0;
  TweenColor__Begin(v11, 0.5, v23, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_24;
  v12 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v24.fields.r = 0.5;
  v24.fields.g = 0.5;
  v24.fields.b = 0.5;
  v24.fields.a = 1.0;
  plusButton = (UnityEngine_Component_o *)TweenColor__Begin(v12, 0.5, v24, 0);
  thumb = this->fields.thumb;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !thumb )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(thumb, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_24;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v14 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v14 )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_24;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v15 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v15 )
LABEL_24:
    sub_21FFECC(plusButton, method);
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}


// local variable allocation has failed, the output may be wrong!
void UISliderWithButton__init(
        UISliderWithButton_o *this,
        int32_t max,
        bool setMax,
        int32_t min,
        const MethodInfo *method)
{
  UILabel_o *minLabel; // x23
  System_String_o *NumberFormatLong; // x0
  __int64 v11; // x1
  UILabel_o *maxLabel; // x23
  float v13; // s0
  int32_t v14; // w8
  UILabel_o *minValue; // x20
  __int64 v16; // x1
  UILabel_o *maxValue; // x20
  int64_t maxStep; // x21

  if ( (byte_5939FFC & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12540/*"SHOP_BULK_WINDOW_MIN_LABEL"*/);
    sub_21FFC50(&StringLiteral_12539/*"SHOP_BULK_WINDOW_MAX_LABEL"*/);
    byte_5939FFC = 1;
  }
  minLabel = this->fields.minLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&max);
  NumberFormatLong = LocalizationManager__Get((System_String_o *)StringLiteral_12540/*"SHOP_BULK_WINDOW_MIN_LABEL"*/, 0);
  if ( !minLabel )
    goto LABEL_17;
  UILabel__set_text(minLabel, NumberFormatLong, 0);
  maxLabel = this->fields.maxLabel;
  NumberFormatLong = LocalizationManager__Get((System_String_o *)StringLiteral_12539/*"SHOP_BULK_WINDOW_MAX_LABEL"*/, 0);
  if ( !maxLabel )
    goto LABEL_17;
  UILabel__set_text(maxLabel, NumberFormatLong, 0);
  v13 = 0.0;
  if ( setMax )
    v14 = max;
  else
    v14 = min;
  this->fields.nowStep = v14;
  this->fields.minStep = min;
  if ( setMax )
    v13 = 1.0;
  this->fields.maxConfigurableStep = max;
  this->fields.valueChange = 0;
  this->fields.maxStep = max;
  this->fields.numberOfSteps = max - min + 1;
  UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0);
  minValue = this->fields.minValue;
  NumberFormatLong = System_Int32__ToString((int)this + 188, 0);
  if ( !minValue )
    goto LABEL_17;
  UILabel__set_text(minValue, NumberFormatLong, 0);
  maxValue = this->fields.maxValue;
  maxStep = this->fields.maxStep;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(maxStep, 0);
  if ( !maxValue )
LABEL_17:
    sub_21FFECC(NumberFormatLong, v11);
  UILabel__set_text(maxValue, NumberFormatLong, 0);
  ((void (__fastcall *)(UISliderWithButton_o *, const MethodInfo *))this->klass->vtable._7_ForceUpdate.methodPtr)(
    this,
    this->klass->vtable._7_ForceUpdate.method);
}


void UISliderWithButton__normalMode(UISliderWithButton_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *plusButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *thumb; // x20
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x19
  UnityEngine_Color_o v16; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v17; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v18; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v19; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v20; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v21; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v22; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v23; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4
  UnityEngine_Color_o v24; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  plusButton = (UnityEngine_Component_o *)this->fields.plusButton;
  this->fields.isTouchEnable = 1;
  if ( !plusButton )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))plusButton->klass[1]._1.nestedTypes)(
    plusButton,
    0,
    1,
    plusButton->klass[1]._1.implementedInterfaces);
  plusButton = (UnityEngine_Component_o *)this->fields.minusButton;
  if ( !plusButton )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))plusButton->klass[1]._1.nestedTypes)(
    plusButton,
    0,
    1,
    plusButton->klass[1]._1.implementedInterfaces);
  plusButton = (UnityEngine_Component_o *)this->fields.thumb;
  if ( !plusButton )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(plusButton, 0);
  v16.fields.r = 1.0;
  v16.fields.g = 1.0;
  v16.fields.b = 1.0;
  v16.fields.a = 1.0;
  TweenColor__Begin(gameObject, 0.5, v16, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.plusButton;
  if ( !plusButton )
    goto LABEL_24;
  v5 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v17.fields.r = 1.0;
  v17.fields.g = 1.0;
  v17.fields.b = 1.0;
  v17.fields.a = 1.0;
  TweenColor__Begin(v5, 0.5, v17, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.minusButton;
  if ( !plusButton )
    goto LABEL_24;
  v6 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v18.fields.r = 1.0;
  v18.fields.g = 1.0;
  v18.fields.b = 1.0;
  v18.fields.a = 1.0;
  TweenColor__Begin(v6, 0.5, v18, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.minLabel;
  if ( !plusButton )
    goto LABEL_24;
  v7 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v19.fields.r = 1.0;
  v19.fields.g = 1.0;
  v19.fields.b = 1.0;
  v19.fields.a = 1.0;
  TweenColor__Begin(v7, 0.5, v19, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.maxLabel;
  if ( !plusButton )
    goto LABEL_24;
  v8 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v20.fields.r = 1.0;
  v20.fields.g = 1.0;
  v20.fields.b = 1.0;
  v20.fields.a = 1.0;
  TweenColor__Begin(v8, 0.5, v20, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.minValue;
  if ( !plusButton )
    goto LABEL_24;
  v9 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v21.fields.r = 1.0;
  v21.fields.g = 1.0;
  v21.fields.b = 1.0;
  v21.fields.a = 1.0;
  TweenColor__Begin(v9, 0.5, v21, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.maxValue;
  if ( !plusButton )
    goto LABEL_24;
  v10 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v22.fields.r = 1.0;
  v22.fields.g = 1.0;
  v22.fields.b = 1.0;
  v22.fields.a = 1.0;
  TweenColor__Begin(v10, 0.5, v22, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_24;
  v11 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v23.fields.r = 1.0;
  v23.fields.g = 1.0;
  v23.fields.b = 1.0;
  v23.fields.a = 1.0;
  TweenColor__Begin(v11, 0.5, v23, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_24;
  v12 = UnityEngine_Component__get_gameObject(plusButton, 0);
  v24.fields.r = 1.0;
  v24.fields.g = 1.0;
  v24.fields.b = 1.0;
  v24.fields.a = 1.0;
  plusButton = (UnityEngine_Component_o *)TweenColor__Begin(v12, 0.5, v24, 0);
  thumb = this->fields.thumb;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !thumb )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(thumb, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_24;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v14 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v14 )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_24;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v15 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_5931945 )
  {
    plusButton = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v15 )
LABEL_24:
    sub_21FFECC(plusButton, method);
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}


void UISliderWithButton__set_inverted(UISliderWithButton_o *this, bool value, const MethodInfo *method)
{
  ;
}


void UISliderWithButton__set_sliderValue(UISliderWithButton_o *this, float value, const MethodInfo *method)
{
  UIProgressBar__set_value((UIProgressBar_o *)this, value, 0);
}


int32_t UISliderWithButton__sliderValueChange(UISliderWithButton_o *this, const MethodInfo *method)
{
  int32_t valueChange; // w9
  int32_t minStep; // w8
  int32_t v5; // w10
  __int64 v6; // x1
  float value; // s8
  BalanceConfig_c *v8; // x0
  __int64 v9; // x1
  float v10; // s8
  float v11; // s9
  float v12; // s9
  double v13; // d8
  double v14; // d0
  double v15; // d0
  double v16; // d1
  int32_t maxStep; // w9
  int32_t v18; // w8
  int32_t *p_nowStep; // x20
  int maxConfigurableStep; // w9
  int32_t v21; // w10
  int v22; // w8
  double v23; // d1
  int v24; // w9
  int32_t v25; // w10
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_593A005 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_593A005 = 1;
  }
  valueChange = this->fields.valueChange;
  if ( valueChange )
  {
    minStep = this->fields.minStep;
    v5 = this->fields.nowStep + valueChange;
    this->fields.nowStep = v5;
    if ( v5 >= minStep )
    {
      maxStep = this->fields.maxStep;
      if ( v5 > maxStep )
      {
        v5 = this->fields.maxStep;
        this->fields.nowStep = maxStep;
      }
    }
    else
    {
      this->fields.nowStep = minStep;
      v5 = minStep;
    }
    goto LABEL_30;
  }
  value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
  v8 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( value < v8->static_fields->FloatAfterDecimalPointMax )
  {
    v10 = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    v11 = (float)(this->fields.maxStep - this->fields.minStep);
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    v12 = v10 * v11;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    v13 = v12;
    v14 = modf(v12, &iptr);
    if ( v12 >= 0.0 )
    {
      if ( v14 == 0.5 )
      {
        v16 = 1.0;
        v15 = iptr;
LABEL_22:
        v23 = v15 + v16;
        if ( ((__int64)v15 & 1) != 0 )
          v15 = v23;
        goto LABEL_27;
      }
      v15 = floor(v13 + 0.5);
    }
    else
    {
      if ( v14 == -0.5 )
      {
        v15 = iptr;
        v16 = -1.0;
        goto LABEL_22;
      }
      v15 = ceil(v13 + -0.5);
    }
LABEL_27:
    v24 = (int)v15;
    minStep = this->fields.minStep;
    if ( v15 == INFINITY )
      v24 = 0x80000000;
    v5 = minStep + v24;
    this->fields.nowStep = minStep + v24;
LABEL_30:
    maxConfigurableStep = this->fields.maxConfigurableStep;
    p_nowStep = &this->fields.nowStep;
    this->fields.valueChange = 0;
    if ( v5 > maxConfigurableStep )
    {
      v25 = this->fields.maxStep;
      this->fields.nowStep = maxConfigurableStep;
      v22 = v25 - minStep;
      goto LABEL_32;
    }
    return *p_nowStep;
  }
  v18 = this->fields.maxStep;
  this->fields.nowStep = v18;
  p_nowStep = &this->fields.nowStep;
  maxConfigurableStep = this->fields.maxConfigurableStep;
  if ( v18 > maxConfigurableStep )
  {
    v21 = this->fields.minStep;
    this->fields.nowStep = maxConfigurableStep;
    v22 = v18 - v21;
LABEL_32:
    UIProgressBar__set_value((UIProgressBar_o *)this, (float)(1.0 / (float)v22) * (float)maxConfigurableStep, 0);
  }
  return *p_nowStep;
}