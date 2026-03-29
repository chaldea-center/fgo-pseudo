void MoveAnimationComponent___ctor(MoveAnimationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  float v7; // s1

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.beginPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.beginPosition.fields.z = z;
  v6 = v3->static_fields;
  v7 = v6->zeroVector.fields.z;
  *(_QWORD *)&this->fields.endPosition.fields.x = *(_QWORD *)&v6->zeroVector.fields.x;
  this->fields.endPosition.fields.z = v7;
  TweenAnimationComponent___ctor((TweenAnimationComponent_o *)this, 0);
}


void MoveAnimationComponent__PlayAnimation(
        MoveAnimationComponent_o *this,
        int32_t animationType,
        System_Action_o *onFinish,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_o *p_endPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct UnityEngine_Vector3_o *p_beginPosition; // x11
  float *v8; // x12
  float *v9; // x13
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s3.4,4:s4.4,8:s5.4

  if ( animationType == 1 )
  {
    p_endPosition = &this->fields.endPosition;
    p_y = &this->fields.endPosition.fields.y;
    p_z = &this->fields.endPosition.fields.z;
    p_beginPosition = &this->fields.beginPosition;
    v8 = &this->fields.beginPosition.fields.y;
    v9 = &this->fields.beginPosition.fields.z;
  }
  else
  {
    if ( animationType )
      return;
    p_endPosition = &this->fields.beginPosition;
    p_y = &this->fields.beginPosition.fields.y;
    p_z = &this->fields.beginPosition.fields.z;
    p_beginPosition = &this->fields.endPosition;
    v8 = &this->fields.endPosition.fields.y;
    v9 = &this->fields.endPosition.fields.z;
  }
  v11.fields.z = *v9;
  v11.fields.y = *v8;
  v11.fields.x = p_beginPosition->fields.x;
  v10.fields.z = *p_z;
  v10.fields.y = *p_y;
  v10.fields.x = p_endPosition->fields.x;
  MoveAnimationComponent__PlayAnimation_31735400(this, animationType, v10, v11, onFinish, method);
}


void MoveAnimationComponent__PlayAnimation_31735400(
        MoveAnimationComponent_o *this,
        int32_t animationType,
        UnityEngine_Vector3_o fromPosition,
        UnityEngine_Vector3_o toPosition,
        System_Action_o *onFinish,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v10; // s11
  float v11; // s12
  float v12; // s13
  UnityEngine_Object_o *Target; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  z = toPosition.fields.z;
  y = toPosition.fields.y;
  x = toPosition.fields.x;
  v10 = fromPosition.fields.z;
  v11 = fromPosition.fields.y;
  v12 = fromPosition.fields.x;
  if ( (byte_4D2A738 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A738 = 1;
  }
  Target = (UnityEngine_Object_o *)TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(Target, 0, 0) )
    goto LABEL_14;
  transform = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
  if ( !transform || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
LABEL_16:
    sub_1C93D2C(transform, v17);
  v20.fields.x = v12;
  v20.fields.y = v11;
  v20.fields.z = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v20, 0);
  v18 = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  v19 = (UnityEngine_Object_o *)TweenPosition__Begin(v18, this->fields.animationTime, v22, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v19, 0, 0) )
  {
    transform = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      if ( transform )
      {
        v21.fields.x = x;
        v21.fields.y = y;
        v21.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v21, 0);
LABEL_14:
        ActionExtensions__Call(onFinish, 0);
        return;
      }
    }
    goto LABEL_16;
  }
  TweenAnimationComponent__Setup((TweenAnimationComponent_o *)this, animationType, (UITweener_o *)v19, onFinish, 0);
}


void MoveAnimationComponent__SetBeginWorldPosition(
        MoveAnimationComponent_o *this,
        UnityEngine_Vector3_o worldPosition,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *Target; // x0
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPosition.fields.z;
  y = worldPosition.fields.y;
  x = worldPosition.fields.x;
  Target = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0);
  if ( !Target
    || (Target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Target, 0)) == 0
    || (v9.fields.x = x,
        v9.fields.y = y,
        v9.fields.z = z,
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)Target, v9, 0),
        (Target = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0)) == 0)
    || (Target = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Target, 0)) == 0 )
  {
    sub_1C93D2C(Target, v8);
  }
  this->fields.beginPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Target, 0);
}