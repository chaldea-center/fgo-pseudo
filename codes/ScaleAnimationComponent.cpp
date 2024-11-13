void __fastcall ScaleAnimationComponent___ctor(ScaleAnimationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Vector3_c *v4; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v7; // x8
  float v8; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  v4 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.minScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.minScale.fields.z = z;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    v4 = UnityEngine_Vector3_TypeInfo;
    byte_4B109C6 = 1;
  }
  v7 = v4->static_fields;
  v8 = v7->oneVector.fields.z;
  *(_QWORD *)&this->fields.maxScale.fields.x = *(_QWORD *)&v7->oneVector.fields.x;
  this->fields.maxScale.fields.z = v8;
  TweenAnimationComponent___ctor((TweenAnimationComponent_o *)this, 0LL);
}


void __fastcall ScaleAnimationComponent__PlayAnimation(
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
  v11.fields.x = p_minScale->fields.x;
  v10.fields.z = *p_z;
  v10.fields.y = *p_y;
  v10.fields.x = p_maxScale->fields.x;
  ScaleAnimationComponent__PlayAnimation_30914968(this, animationType, v10, v11, onFinish, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScaleAnimationComponent__PlayAnimation_30914968(
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
  float v10; // s11
  float v11; // s12
  float v12; // s13
  __int64 v15; // x1
  UnityEngine_Object_o *Target; // x22
  UnityEngine_GameObject_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s1.4,4:s2.4,8:s3.4

  z = toScale.fields.z;
  y = toScale.fields.y;
  x = toScale.fields.x;
  v10 = fromScale.fields.z;
  v11 = fromScale.fields.y;
  v12 = fromScale.fields.x;
  if ( (byte_4B10FC2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&animationType, onFinish);
    byte_4B10FC2 = 1;
  }
  Target = (UnityEngine_Object_o *)TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Equality(Target, 0LL, 0LL) )
    goto LABEL_14;
  transform = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0LL);
  if ( !transform
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(transform, v18);
  }
  v22.fields.x = v12;
  v22.fields.y = v11;
  v22.fields.z = v10;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v22, 0LL);
  v19 = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0LL);
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  v21 = (UnityEngine_Object_o *)TweenScale__Begin(v19, this->fields.animationTime, v24, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Equality(v21, 0LL, 0LL) )
  {
    transform = TweenAnimationComponent__get_Target((TweenAnimationComponent_o *)this, 0LL);
    if ( transform )
    {
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
      if ( transform )
      {
        v23.fields.x = x;
        v23.fields.y = y;
        v23.fields.z = z;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v23, 0LL);
LABEL_14:
        ActionExtensions__Call(onFinish, 0LL);
        return;
      }
    }
    goto LABEL_16;
  }
  TweenAnimationComponent__Setup((TweenAnimationComponent_o *)this, animationType, (UITweener_o *)v21, onFinish, 0LL);
}