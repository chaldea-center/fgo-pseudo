void ComponentHelper__SetLocalPosition(
        UnityEngine_Component_o *self,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 v7; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C393BB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C393BB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      sub_1C32E7C(v7);
    transform = UnityEngine_Component__get_transform(self, 0);
    v10.fields.y = y;
    v10.fields.z = z;
    v10.fields.x = x;
    TransformHelper__SetLocalPosition(transform, v10, v9);
  }
}


void ComponentHelper__SetLocalPositionX(UnityEngine_Component_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C393B8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C393B8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C32E7C(v5);
    transform = UnityEngine_Component__get_transform(self, 0);
    TransformHelper__SetLocalPositionX(transform, value, v7);
  }
}


void ComponentHelper__SetLocalPositionY(UnityEngine_Component_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C393B9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C393B9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C32E7C(v5);
    transform = UnityEngine_Component__get_transform(self, 0);
    TransformHelper__SetLocalPositionY(transform, value, v7);
  }
}


void ComponentHelper__SetLocalPositionZ(UnityEngine_Component_o *self, float value, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C393BA & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C393BA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C32E7C(v5);
    transform = UnityEngine_Component__get_transform(self, 0);
    TransformHelper__SetLocalPositionZ(transform, value, v7);
  }
}


void ComponentHelper__SetLocalScale(
        UnityEngine_Component_o *self,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 v7; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C393BC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C393BC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      sub_1C32E7C(v7);
    transform = UnityEngine_Component__get_transform(self, 0);
    v10.fields.y = y;
    v10.fields.z = z;
    v10.fields.x = x;
    TransformHelper__SetLocalScale(transform, v10, v9);
  }
}