void UIButtonRotation___ctor(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  __int64 v7; // d0
  float v8; // s1

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.hover.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.hover.fields.z = z;
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->zeroVector.fields.x;
  v8 = v6->zeroVector.fields.z;
  this->fields.duration = 0.2;
  *(_QWORD *)&this->fields.pressed.fields.x = v7;
  this->fields.pressed.fields.z = v8;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIButtonRotation__OnDisable(UIButtonRotation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  __int64 v4; // x1
  struct UnityEngine_Transform_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_5974F9E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenRotation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F9E = 1;
  }
  if ( this->fields.mStarted )
  {
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(tweenTarget, 0, 0) )
    {
      v5 = this->fields.tweenTarget;
      if ( !v5 )
        goto LABEL_14;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v5,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenRotation___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      v5 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( Component_object )
        {
          TweenRotation__set_value((TweenRotation_o *)Component_object, this->fields.mRot, 0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
          return;
        }
LABEL_14:
        sub_2213CDC(v5, v4);
      }
    }
  }
}


void UIButtonRotation__OnEnable(UIButtonRotation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w8
  const MethodInfo *v6; // x2

  if ( (byte_5974F9D & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F9D = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIButtonRotation__OnHover(this, IsHighlighted, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIButtonRotation__OnHover(UIButtonRotation_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *tweenTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float duration; // s8
  float x; // s11
  UnityEngine_GameObject_o *v10; // x19
  float z; // s9
  float y; // s10
  float w; // s12
  unsigned __int64 v14; // d0 OVERLAPPED
  float v15; // s2
  int v16; // s1
  float v17; // s18
  float v18; // s4
  float v19; // s6
  float v20; // s7
  float v21; // s16
  float v22; // s18
  float v23; // s4
  float v24; // s5
  float v25; // s6
  float v26; // s7
  UnityEngine_Quaternion_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v28; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
      UIButtonRotation__Start(this, v5);
    tweenTarget = (UnityEngine_Component_o *)this->fields.tweenTarget;
    if ( !tweenTarget )
      goto LABEL_10;
    gameObject = UnityEngine_Component__get_gameObject(tweenTarget, 0);
    duration = this->fields.duration;
    x = this->fields.mRot.fields.x;
    v10 = gameObject;
    y = this->fields.mRot.fields.y;
    z = this->fields.mRot.fields.z;
    w = this->fields.mRot.fields.w;
    if ( isOver )
    {
      v14 = vmul_f32(*(float32x2_t *)&this->fields.hover.fields.x, vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
      v15 = this->fields.hover.fields.z * 0.017453;
      v16 = HIDWORD(v14);
      v27 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v14, 0);
      v17 = x * v27.fields.x;
      v18 = (float)(w * v27.fields.x) + (float)(x * v27.fields.w);
      v19 = (float)(w * v27.fields.y) + (float)(y * v27.fields.w);
      v20 = z * v27.fields.x;
      v27.fields.x = y * v27.fields.x;
      v21 = (float)(w * v27.fields.z) + (float)(z * v27.fields.w);
      v27.fields.w = (float)(w * v27.fields.w) - v17;
      v22 = y * v27.fields.y;
      v23 = (float)(y * v27.fields.z) + v18;
      v24 = v20 + v19;
      v25 = x * v27.fields.z;
      v27.fields.z = z * v27.fields.z;
      v26 = (float)(x * v27.fields.y) + v21;
      x = v23 - (float)(z * v27.fields.y);
      y = v24 - v25;
      z = v26 - v27.fields.x;
      w = (float)(v27.fields.w - v22) - v27.fields.z;
    }
    v28.fields.x = x;
    v28.fields.y = y;
    v28.fields.z = z;
    v28.fields.w = w;
    tweenTarget = (UnityEngine_Component_o *)TweenRotation__Begin(v10, duration, v28, 0);
    if ( !tweenTarget )
LABEL_10:
      sub_2213CDC(tweenTarget, v5);
    LODWORD(tweenTarget[1].monitor) = 3;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIButtonRotation__OnPress(UIButtonRotation_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *tweenTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float duration; // s8
  UnityEngine_GameObject_o *v9; // x19
  float x; // s9
  float y; // s10
  float z; // s11
  float w; // s12
  unsigned __int64 v14; // d0 OVERLAPPED
  float v15; // s2
  int v16; // s1
  float v17; // s18
  float v18; // s4
  float v19; // s5
  float v20; // s19
  float v21; // s7
  float v22; // s16
  float v23; // s2
  float v24; // s4
  float v25; // s5
  float v26; // s3
  float v27; // s11
  float v28; // s10
  float v29; // s9
  __int64 v30; // x1
  UnityEngine_GameObject_o *v31; // x21
  bool IsHighlighted; // w0
  float v33; // s12
  unsigned __int64 v34; // d0 OVERLAPPED
  float v35; // s2
  int v36; // s1
  float v37; // s18
  float v38; // s4
  float v39; // s7
  float v40; // s16
  float v41; // s4
  float v42; // s5
  float v43; // s6
  float v44; // s7
  UnityEngine_Quaternion_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v47; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_5974F9F & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974F9F = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !this->fields.mStarted )
      UIButtonRotation__Start(this, v5);
    tweenTarget = (UnityEngine_Component_o *)this->fields.tweenTarget;
    if ( !tweenTarget )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(tweenTarget, 0);
    duration = this->fields.duration;
    v9 = gameObject;
    if ( isPressed )
    {
      x = this->fields.mRot.fields.x;
      y = this->fields.mRot.fields.y;
      z = this->fields.mRot.fields.z;
      w = this->fields.mRot.fields.w;
      v14 = vmul_f32(*(float32x2_t *)&this->fields.pressed.fields.x, vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
      v15 = this->fields.pressed.fields.z * 0.017453;
      v16 = HIDWORD(v14);
      v45 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v14, 0);
      v17 = x * v45.fields.x;
      v18 = (float)(w * v45.fields.x) + (float)(x * v45.fields.w);
      v19 = y * v45.fields.z;
      v20 = x * v45.fields.z;
      v21 = z * v45.fields.x;
      v45.fields.x = y * v45.fields.x;
      v22 = (float)(w * v45.fields.z) + (float)(z * v45.fields.w);
      v23 = z * v45.fields.z;
      v24 = v19 + v18;
      v25 = v21 + (float)((float)(w * v45.fields.y) + (float)(y * v45.fields.w));
      v26 = (float)((float)(w * v45.fields.w) - v17) - (float)(y * v45.fields.y);
      v27 = v24 - (float)(z * v45.fields.y);
      v28 = v25 - v20;
      v29 = (float)((float)(x * v45.fields.y) + v22) - v45.fields.x;
    }
    else
    {
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v30);
      IsHighlighted = UICamera__IsHighlighted(v31, 0);
      v27 = this->fields.mRot.fields.x;
      v28 = this->fields.mRot.fields.y;
      v29 = this->fields.mRot.fields.z;
      v33 = this->fields.mRot.fields.w;
      if ( !IsHighlighted )
      {
LABEL_14:
        v47.fields.x = v27;
        v47.fields.y = v28;
        v47.fields.z = v29;
        v47.fields.w = v33;
        tweenTarget = (UnityEngine_Component_o *)TweenRotation__Begin(v9, duration, v47, 0);
        if ( tweenTarget )
        {
          LODWORD(tweenTarget[1].monitor) = 3;
          return;
        }
LABEL_17:
        sub_2213CDC(tweenTarget, v5);
      }
      v34 = vmul_f32(*(float32x2_t *)&this->fields.hover.fields.x, vdup_n_s32(0x3C8EFA35u)).n64_u64[0];
      v35 = this->fields.hover.fields.z * 0.017453;
      v36 = HIDWORD(v34);
      v46 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v34, 0);
      v37 = v27 * v46.fields.x;
      v38 = (float)(v33 * v46.fields.x) + (float)(v27 * v46.fields.w);
      v39 = v29 * v46.fields.x;
      v46.fields.x = v28 * v46.fields.x;
      v40 = (float)(v33 * v46.fields.z) + (float)(v29 * v46.fields.w);
      v41 = (float)(v28 * v46.fields.z) + v38;
      v42 = v39 + (float)((float)(v33 * v46.fields.y) + (float)(v28 * v46.fields.w));
      v43 = v27 * v46.fields.z;
      v23 = v29 * v46.fields.z;
      v44 = (float)(v27 * v46.fields.y) + v40;
      v26 = (float)((float)(v33 * v46.fields.w) - v37) - (float)(v28 * v46.fields.y);
      v27 = v41 - (float)(v29 * v46.fields.y);
      v28 = v42 - v43;
      v29 = v44 - v46.fields.x;
    }
    v33 = v26 - v23;
    goto LABEL_14;
  }
}


void UIButtonRotation__OnSelect(UIButtonRotation_o *this, bool isSelected, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UICamera_c *v7; // x0

  if ( (byte_5974FA0 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FA0 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( !isSelected )
      goto LABEL_8;
    v7 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v7 = UICamera_TypeInfo;
    }
    if ( v7->static_fields->currentScheme == 2 )
LABEL_8:
      UIButtonRotation__OnHover(this, isSelected, v6);
  }
}


void UIButtonRotation__Start(UIButtonRotation_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o **p_tweenTarget; // x20
  UnityEngine_Object_o *tweenTarget; // x21
  __int64 v5; // x1
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5974F9C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F9C = 1;
  }
  if ( !this->fields.mStarted )
  {
    p_tweenTarget = &this->fields.tweenTarget;
    tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
    this->fields.mStarted = 1;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      this->fields.tweenTarget = transform;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.tweenTarget,
        (int32_t)transform,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
    if ( !*p_tweenTarget )
      sub_2213CDC(0, v5);
    this->fields.mRot = UnityEngine_Transform__get_localRotation(*p_tweenTarget, 0);
  }
}