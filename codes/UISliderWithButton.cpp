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
  int v7; // w8
  float v8; // s8
  float v9; // s0

  if ( (byte_4CEFF3D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UISliderWithButton_OnClickMinusButton__);
    byte_4CEFF3D = 1;
  }
  if ( this->fields.isTouchEnable )
  {
    if ( this->fields.nowStep != this->fields.minStep )
    {
      v5 = Method_UISliderWithButton_OnClickMinusButton__;
      if ( (*((_BYTE *)Method_UISliderWithButton_OnClickMinusButton__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C7BB00(Method_UISliderWithButton_OnClickMinusButton__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      v7 = this->fields.maxStep - this->fields.minStep;
      this->fields.valueChange = -1;
      v8 = 1.0 / (float)v7;
      if ( (float)(UIProgressBar__get_value((UIProgressBar_o *)this, 0) - v8) >= 0.0 )
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
      v3 = (_QWORD *)sub_1C7BB00(Method_UISliderWithButton_OnClickMinusButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
  int v8; // w8
  float v9; // s8
  float v10; // s0

  if ( (byte_4CEFF3C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UISliderWithButton_OnClickPlusButton__);
    byte_4CEFF3C = 1;
  }
  if ( this->fields.isTouchEnable )
  {
    nowStep = this->fields.nowStep;
    if ( nowStep != this->fields.maxStep && nowStep != this->fields.maxConfigurableStep )
    {
      v6 = Method_UISliderWithButton_OnClickPlusButton__;
      if ( (*((_BYTE *)Method_UISliderWithButton_OnClickPlusButton__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C7BB00(Method_UISliderWithButton_OnClickPlusButton__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      v8 = this->fields.maxStep - this->fields.minStep;
      this->fields.valueChange = 1;
      v9 = 1.0 / (float)v8;
      if ( (float)(UIProgressBar__get_value((UIProgressBar_o *)this, 0) + v9) <= 1.0 )
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
      v4 = (_QWORD *)sub_1C7BB00(Method_UISliderWithButton_OnClickPlusButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
}


void UISliderWithButton__OnDragBackground(
        UISliderWithButton_o *this,
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

  if ( (byte_4CEFF39 & 1) == 0 )
  {
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEFF39 = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 && this->fields.isTouchEnable )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C7BA8C(
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


void UISliderWithButton__OnDragForeground(
        UISliderWithButton_o *this,
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

  if ( (byte_4CEFF3B & 1) == 0 )
  {
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEFF3B = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 && this->fields.isTouchEnable )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C7BA8C(
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


void UISliderWithButton__OnKey(UISliderWithButton_o *this, int32_t key, const MethodInfo *method)
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


void UISliderWithButton__OnPressBackground(
        UISliderWithButton_o *this,
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

  if ( (byte_4CEFF38 & 1) == 0 )
  {
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEFF38 = 1;
  }
  v10 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->currentScheme != 2 && this->fields.isTouchEnable )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = UICamera_TypeInfo->static_fields;
    }
    currentCamera = static_fields->currentCamera;
    this->fields.mCam = currentCamera;
    sub_1C7BA8C(
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UICamera_c *v17; // x0
  struct UnityEngine_Camera_o *currentCamera; // x1
  UnityEngine_Object_o *mFG; // x20
  bool v20; // w0
  float v21; // s0
  float value; // s0
  UICamera_c *v23; // x0
  float v24; // s8
  struct UIProgressBar_OnDragFinished_o *onDragFinished; // x8
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEFF3A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEFF3A = 1;
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  if ( v6->static_fields->currentScheme != 2 && this->fields.isTouchEnable )
  {
    thumb = this->fields.thumb;
    if ( isPressed )
    {
      if ( thumb )
      {
        v26.fields.x = 2.0;
        v26.fields.y = 2.0;
        v26.fields.z = 1.0;
        UnityEngine_Transform__set_localScale(thumb, v26, 0);
        thumb = (UnityEngine_Transform_o *)this->fields.mBG;
        if ( thumb )
        {
          thumb = UnityEngine_Component__get_transform((UnityEngine_Component_o *)thumb, 0);
          if ( thumb )
          {
            v27.fields.x = 1.0;
            v27.fields.y = 2.0;
            v27.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(thumb, v27, 0);
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
                v17 = UICamera_TypeInfo;
                if ( !UICamera_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                  v17 = UICamera_TypeInfo;
                }
                currentCamera = v17->static_fields->currentCamera;
                this->fields.mCam = currentCamera;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.mCam,
                  (int32_t)currentCamera,
                  v11,
                  v12,
                  v13,
                  v14,
                  v15,
                  v16);
                if ( isPressed )
                {
                  mFG = (UnityEngine_Object_o *)this->fields.mFG;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  v20 = UnityEngine_Object__op_Equality(mFG, 0, 0);
                  v21 = 0.0;
                  if ( !v20 )
                  {
                    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
                    v23 = UICamera_TypeInfo;
                    v24 = value;
                    if ( !UICamera_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                      v23 = UICamera_TypeInfo;
                    }
                    v21 = v24
                        - UIProgressBar__ScreenToValue(
                            (UIProgressBar_o *)this,
                            v23->static_fields->lastTouchPosition,
                            0);
                  }
                  this->fields.mOffset = v21;
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
      v28.fields.x = 1.0;
      v28.fields.y = 1.0;
      v28.fields.z = 1.0;
      UnityEngine_Transform__set_localScale(thumb, v28, 0);
      thumb = (UnityEngine_Transform_o *)this->fields.mBG;
      if ( thumb )
      {
        thumb = UnityEngine_Component__get_transform((UnityEngine_Component_o *)thumb, 0);
        if ( thumb )
        {
          v29.fields.x = 1.0;
          v29.fields.y = 1.0;
          v29.fields.z = 1.0;
          UnityEngine_Transform__set_localScale(thumb, v29, 0);
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
    sub_1C7BD40(thumb, go);
  }
}


void UISliderWithButton__OnStart(UISliderWithButton_o *this, const MethodInfo *method)
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

  if ( (byte_4CEFF37 & 1) == 0 )
  {
    sub_1C7BAE8(&UIEventListener_BoolDelegate_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider2D___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UISliderWithButton_OnDragBackground__);
    sub_1C7BAE8(&Method_UISliderWithButton_OnDragForeground__);
    sub_1C7BAE8(&Method_UISliderWithButton_OnPressBackground__);
    sub_1C7BAE8(&Method_UISliderWithButton_OnPressForeground__);
    sub_1C7BAE8(&UIEventListener_VectorDelegate_TypeInfo);
    byte_4CEFF37 = 1;
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
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    goto LABEL_14;
  v5 = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !v5 )
    goto LABEL_60;
  v7 = UnityEngine_Component__GetComponent_object_(
         v5,
         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
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
  v12 = (UIEventListener_BoolDelegate_o *)sub_1C7BD34(UIEventListener_BoolDelegate_TypeInfo);
  UIEventListener_BoolDelegate___ctor(v12, (Il2CppObject *)this, Method_UISliderWithButton_OnPressBackground__, 0);
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
  sub_1C7BA8C(v10, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  monitor = (System_Delegate_o *)v9[4].monitor;
  v9 = (UnityEngine_Component_o *)((char *)v9 + 104);
  v23 = (UIEventListener_VectorDelegate_o *)sub_1C7BD34(UIEventListener_VectorDelegate_TypeInfo);
  UIEventListener_VectorDelegate___ctor(v23, (Il2CppObject *)this, Method_UISliderWithButton_OnDragBackground__, 0);
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
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v9, (int32_t)v24, v25, v26, v27, v28, v29, v30);
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
            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0, 0) )
      goto LABEL_39;
    v5 = (UnityEngine_Component_o *)this->fields.thumb;
    if ( !v5 )
      goto LABEL_60;
    v34 = UnityEngine_Component__GetComponent_object_(
            v5,
            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider2D___);
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
          sub_1C7BD40(v5, v4);
        }
        v9 = v5;
        v39 = (GrandQuestFolderBoardItem_o *)&v5[3];
        v40 = (System_Delegate_o *)v5[3].klass;
        v41 = (UIEventListener_BoolDelegate_o *)sub_1C7BD34(UIEventListener_BoolDelegate_TypeInfo);
        UIEventListener_BoolDelegate___ctor(v41, (Il2CppObject *)this, Method_UISliderWithButton_OnPressForeground__, 0);
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
        sub_1C7BA8C(v39, (int32_t)v42, v43, v44, v45, v46, v47, v48);
        v50 = (System_Delegate_o *)v9[4].monitor;
        v9 = (UnityEngine_Component_o *)((char *)v9 + 104);
        v51 = (UIEventListener_VectorDelegate_o *)sub_1C7BD34(UIEventListener_VectorDelegate_TypeInfo);
        UIEventListener_VectorDelegate___ctor(
          v51,
          (Il2CppObject *)this,
          Method_UISliderWithButton_OnDragForeground__,
          0);
        v52 = System_Delegate__Combine(v50, (System_Delegate_o *)v51, 0);
        v20 = v52;
        if ( !v52 )
        {
LABEL_58:
          v9->klass = (UnityEngine_Component_c *)v20;
LABEL_59:
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v9, (int32_t)v20, v53, v54, v55, v56, v57, v58);
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
        sub_1C7C0DC(v20);
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

  if ( (byte_4CEFF3F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    byte_4CEFF3F = 1;
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
                                            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !thumb )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(thumb, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_25;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v5 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v5 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_25;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v6 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v6 )
LABEL_25:
    sub_1C7BD40(plusButton, method);
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

  if ( (byte_4CEFF36 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFF36 = 1;
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
        sub_1C7BD40(0, v4);
      Component_object = UnityEngine_Component__GetComponent_object_(
                           v5,
                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.mFG = (struct UIWidget_o *)Component_object;
      sub_1C7BA8C(
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
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !thumb )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(thumb, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_24;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v14 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v14 )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_24;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v15 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v15 )
LABEL_24:
    sub_1C7BD40(plusButton, method);
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}


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
  int32_t v14; // w9
  UILabel_o *minValue; // x20
  UILabel_o *maxValue; // x20
  int64_t maxStep; // x21

  if ( (byte_4CEFF35 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12101/*"SHOP_BULK_WINDOW_MIN_LABEL"*/);
    sub_1C7BAE8(&StringLiteral_12100/*"SHOP_BULK_WINDOW_MAX_LABEL"*/);
    byte_4CEFF35 = 1;
  }
  minLabel = this->fields.minLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormatLong = LocalizationManager__Get((System_String_o *)StringLiteral_12101/*"SHOP_BULK_WINDOW_MIN_LABEL"*/, 0);
  if ( !minLabel )
    goto LABEL_17;
  UILabel__set_text(minLabel, NumberFormatLong, 0);
  maxLabel = this->fields.maxLabel;
  NumberFormatLong = LocalizationManager__Get((System_String_o *)StringLiteral_12100/*"SHOP_BULK_WINDOW_MAX_LABEL"*/, 0);
  if ( !maxLabel )
    goto LABEL_17;
  UILabel__set_text(maxLabel, NumberFormatLong, 0);
  v13 = 0.0;
  if ( setMax )
    v14 = max;
  else
    v14 = min;
  if ( setMax )
    v13 = 1.0;
  this->fields.minStep = min;
  this->fields.maxConfigurableStep = max;
  this->fields.valueChange = 0;
  this->fields.maxStep = max;
  this->fields.nowStep = v14;
  this->fields.numberOfSteps = max - min + 1;
  UIProgressBar__set_value((UIProgressBar_o *)this, v13, 0);
  minValue = this->fields.minValue;
  NumberFormatLong = System_Int32__ToString((int)this + 188, 0);
  if ( !minValue )
    goto LABEL_17;
  UILabel__set_text(minValue, NumberFormatLong, 0);
  maxValue = this->fields.maxValue;
  maxStep = this->fields.maxStep;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(maxStep, 0);
  if ( !maxValue )
LABEL_17:
    sub_1C7BD40(NumberFormatLong, v11);
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
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !thumb )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(thumb, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mBG;
  if ( !plusButton )
    goto LABEL_24;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v14 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v14 )
    goto LABEL_24;
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  plusButton = (UnityEngine_Component_o *)this->fields.mFG;
  if ( !plusButton )
    goto LABEL_24;
  plusButton = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(plusButton, 0);
  v15 = (UnityEngine_Transform_o *)plusButton;
  if ( !byte_4CE7E5E )
  {
    plusButton = (UnityEngine_Component_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v15 )
LABEL_24:
    sub_1C7BD40(plusButton, method);
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
  int32_t v5; // w9
  float value; // s8
  BalanceConfig_c *v7; // x0
  float v8; // s8
  float v9; // s9
  float v10; // s9
  double v11; // d8
  double v12; // d0
  double v13; // d0
  double v14; // d1
  int32_t maxStep; // w10
  int32_t v16; // w8
  int32_t *p_nowStep; // x20
  int v18; // w9
  int32_t v19; // w10
  float v20; // s0
  float v21; // s1
  double v22; // d1
  int v23; // w9
  int maxConfigurableStep; // w10
  int32_t v25; // w9
  double iptr; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4CEFF3E & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    byte_4CEFF3E = 1;
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
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( value < v7->static_fields->FloatAfterDecimalPointMax )
  {
    v8 = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    v9 = (float)(this->fields.maxStep - this->fields.minStep);
    if ( !byte_4CE8569 )
    {
      sub_1C7BAE8(&System_Math_TypeInfo);
      byte_4CE8569 = 1;
    }
    v10 = v8 * v9;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v11 = v10;
    v12 = modf(v10, &iptr);
    if ( v10 >= 0.0 )
    {
      if ( v12 == 0.5 )
      {
        v13 = iptr;
        v14 = 1.0;
LABEL_22:
        v22 = v13 + v14;
        if ( ((__int64)v13 & 1) != 0 )
          v13 = v22;
        goto LABEL_27;
      }
      v13 = floor(v11 + 0.5);
    }
    else
    {
      if ( v12 == -0.5 )
      {
        v13 = iptr;
        v14 = -1.0;
        goto LABEL_22;
      }
      v13 = ceil(v11 + -0.5);
    }
LABEL_27:
    minStep = this->fields.minStep;
    v23 = (int)v13;
    if ( v13 == INFINITY )
      v23 = 0x80000000;
    v5 = minStep + v23;
    this->fields.nowStep = v5;
LABEL_30:
    maxConfigurableStep = this->fields.maxConfigurableStep;
    p_nowStep = &this->fields.nowStep;
    this->fields.valueChange = 0;
    if ( v5 > maxConfigurableStep )
    {
      v25 = this->fields.maxStep;
      this->fields.nowStep = maxConfigurableStep;
      v20 = 1.0 / (float)(v25 - minStep);
      v21 = (float)maxConfigurableStep;
      goto LABEL_32;
    }
    return *p_nowStep;
  }
  v16 = this->fields.maxStep;
  this->fields.nowStep = v16;
  p_nowStep = &this->fields.nowStep;
  v18 = this->fields.maxConfigurableStep;
  if ( v16 > v18 )
  {
    v19 = this->fields.minStep;
    this->fields.nowStep = v18;
    v20 = 1.0 / (float)(v16 - v19);
    v21 = (float)v18;
LABEL_32:
    UIProgressBar__set_value((UIProgressBar_o *)this, v20 * v21, 0);
  }
  return *p_nowStep;
}