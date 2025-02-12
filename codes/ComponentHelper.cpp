void __fastcall ComponentHelper__SetLocalPositionX(
        UnityEngine_Component_o *self,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BB5EF5 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB5EF5 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C13F80(v5, v6);
    transform = UnityEngine_Component__get_transform(self, 0LL);
    TransformHelper__SetLocalPositionX(transform, value, v8);
  }
}


void __fastcall ComponentHelper__SetLocalPositionY(
        UnityEngine_Component_o *self,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BB5EF6 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB5EF6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C13F80(v5, v6);
    transform = UnityEngine_Component__get_transform(self, 0LL);
    TransformHelper__SetLocalPositionY(transform, value, v8);
  }
}


void __fastcall ComponentHelper__SetLocalPositionZ(
        UnityEngine_Component_o *self,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4BB5EF7 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB5EF7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1C13F80(v5, v6);
    transform = UnityEngine_Component__get_transform(self, 0LL);
    TransformHelper__SetLocalPositionZ(transform, value, v8);
  }
}