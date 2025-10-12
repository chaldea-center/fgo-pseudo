void UILabelHelper__SetTextSafely(UILabel_o *self, System_String_o *text, const MethodInfo *method)
{
  _BOOL8 v5; // x0

  if ( (byte_4C393D0 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C393D0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C32E7C(v5);
    UILabel__set_text(self, text, 0);
  }
}


void UILabelHelper__SetTextSafely_44056924(
        UILabel_o *self,
        System_String_o *format,
        System_Object_array *args,
        const MethodInfo *method)
{
  System_String_o *v7; // x0

  if ( (byte_4C393D1 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C393D1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
  {
    v7 = System_String__Format_63559972(format, args, 0);
    if ( !self )
      sub_1C32E7C(v7);
    UILabel__set_text(self, v7, 0);
  }
}