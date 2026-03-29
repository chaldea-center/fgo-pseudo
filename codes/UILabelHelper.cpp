void UILabelHelper__SetLabelWithScroll(
        UILabel_o *self,
        System_String_o *detail,
        int32_t lineThreshold,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  Il2CppObject *ComponentInParent_object__52017352; // x20
  bool v11; // w19
  const MethodInfo *v12; // x2

  if ( (byte_4D323D1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323D1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      goto LABEL_13;
    UIWidget__set_height((UIWidget_o *)self, self->fields.mFontSize * lineThreshold, 0);
    v9 = WrapControlText__textBBCodeAdjust(self, detail, self->fields.mFontSize, self->fields.mFontSize, 0);
    UIWidget__ResizeCollider((UIWidget_o *)self, 0);
    ComponentInParent_object__52017352 = UnityEngine_Component__GetComponentInParent_object__52017352(
                                           (UnityEngine_Component_o *)self,
                                           (const MethodInfo_319B8C8 *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__52017352, 0, 0);
    if ( v7 )
    {
      if ( ComponentInParent_object__52017352 )
      {
        v11 = v9 > lineThreshold;
        UIScrollView__ResetPosition((UIScrollView_o *)ComponentInParent_object__52017352, 0);
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)ComponentInParent_object__52017352[4].klass, v11, v12);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ComponentInParent_object__52017352, v11, 0);
        return;
      }
LABEL_13:
      sub_1C93D2C(v7, v8);
    }
  }
}


void UILabelHelper__SetTextSafely(UILabel_o *self, System_String_o *text, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D323CF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323CF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_1C93D2C(v5, v6);
    UILabel__set_text(self, text, 0);
  }
}


void UILabelHelper__SetTextSafely_44847596(
        UILabel_o *self,
        System_String_o *format,
        System_Object_array *args,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4D323D0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D323D0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
  {
    v7 = System_String__Format_64467168(format, args, 0);
    if ( !self )
      sub_1C93D2C(v7, v8);
    UILabel__set_text(self, v7, 0);
  }
}