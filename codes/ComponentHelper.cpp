// local variable allocation has failed, the output may be wrong!
void __fastcall ComponentHelper__SetLocalPosition(
        UnityEngine_Component_o *self,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4B463EC & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B463EC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !self )
      sub_1BDBAD4(v7, v8);
    transform = UnityEngine_Component__get_transform(self, 0LL);
    v11.fields.y = y;
    v11.fields.z = z;
    v11.fields.x = x;
    TransformHelper__SetLocalPosition(transform, v11, v10);
  }
}


void __fastcall ComponentHelper__SetLocalPositionX(
        UnityEngine_Component_o *self,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B463E9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B463E9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1BDBAD4(v5, v6);
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

  if ( (byte_4B463EA & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B463EA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1BDBAD4(v5, v6);
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

  if ( (byte_4B463EB & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B463EB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0LL, 0LL);
  if ( !v5 )
  {
    if ( !self )
      sub_1BDBAD4(v5, v6);
    transform = UnityEngine_Component__get_transform(self, 0LL);
    TransformHelper__SetLocalPositionZ(transform, value, v8);
  }
}