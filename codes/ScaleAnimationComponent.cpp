void ScaleAnimationComponent___ctor(ScaleAnimationComponent_o *this, const MethodInfo *method)
{
  int v3; // w10
  UnityEngine_Vector3_c *v4; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v7; // x8
  float v8; // s1

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v3 = (unsigned __int8)byte_5931945;
  v4 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.minScale.fields.z = z;
  if ( !v3 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    v4 = UnityEngine_Vector3_TypeInfo;
    byte_5931945 = 1;
  }
  v7 = v4->static_fields;
  v8 = v7->oneVector.fields.z;
  *(_QWORD *)&this->fields.maxScale.fields.x = *(_QWORD *)&v7->oneVector.fields.x;
  this->fields.maxScale.fields.z = v8;
  TweenAnimationComponent___ctor((TweenAnimationComponent_o *)this, 0);
}


void ScaleAnimationComponent__PlayAnimation(
        ScaleAnimationComponent_o *this,
        int32_t animationType,
        System_Action_o *onFinish,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_o *p_maxScale; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct UnityEngine_Vector3_o *p_minScale; // x11
  float *v8; // x12
  float *v9; // x13
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s3.4,4:s4.4,8:s5.4

  if ( animationType == 1 )
  {
    p_maxScale = &this->fields.maxScale;
    p_y = &this->fields.maxScale.fields.y;
    p_z = &this->fields.maxScale.fields.z;
    p_minScale = &this->fields.minScale;
    v8 = &this->fields.minScale.fields.y;
    v9 = &this->fields.minScale.fields.z;
  }
  else
  {
    if ( animationType )
      return;
    p_maxScale = &this->fields.minScale;
    p_y = &this->fields.minScale.fields.y;
    p_z = &this->fields.minScale.fields.z;
    p_minScale = &this->fields.maxScale;
    v8 = &this->fields.maxScale.fields.y;
    v9 = &this->fields.maxScale.fields.z;
  }
  v11.fields.z = *v9;
  v11.fields.y = *v8;
  v10.fields.x = p_maxScale->fields.x;
  v11.fields.x = p_minScale->fields.x;
  v10.fields.z = *p_z;
  v10.fields.y = *p_y;
  ScaleAnimationComponent__PlayAnimation_38408736(this, animationType, v10, v11, onFinish, method);
}


void ScaleAnimationComponent__PlayAnimation_38408736(
        ScaleAnimationComponent_o *this,
        int32_t animationType,
        UnityEngine_Vector3_o fromScale,
        UnityEngine_Vector3_o toScale,
        System_Action_o *onFinish,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v9; // s11
  float v10; // s12
  float v11; // s13
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *Target; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  z = toScale.fields.z;
  y = toScale.fields.y;
  x = toScale.fields.x;
  v9 = fromScale.fields.z;
  v10 = fromScale.fields.y;
  v11 = fromScale.fields.x;
  if ( (byte_59326FD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59326FD = 1;
  }
  Target = (UnityEngine_Object_o *)TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Equality(Target, 0, 0) )
    goto LABEL_14;
  transform = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
  if ( !transform || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
LABEL_16:
    sub_21FFECC(transform, v19);
  v24.fields.x = v11;
  v24.fields.y = v10;
  v24.fields.z = v9;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v24, 0);
  v20 = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v23 = (UnityEngine_Object_o *)TweenScale__Begin(v20, this->fields.animationTime, v26, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Equality(v23, 0, 0) )
  {
    transform = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( transform )
      {
        v25.fields.x = x;
        v25.fields.y = y;
        v25.fields.z = z;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v25, 0);
LABEL_14:
        ActionExtensions__Call(onFinish, 0);
        return;
      }
    }
    goto LABEL_16;
  }
  TweenAnimationComponent__Setup((TweenAnimationComponent_o *)this, animationType, (UITweener_o *)v23, onFinish, 0);
}