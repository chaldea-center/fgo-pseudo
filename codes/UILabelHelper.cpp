void UILabelHelper__SetLabelWithScroll(
        UILabel_o *self,
        System_String_o *detail,
        int32_t lineThreshold,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  __int64 v10; // x1
  Il2CppObject *ComponentInParent_object__58645868; // x20
  bool v12; // w19
  const MethodInfo *v13; // x2

  if ( (byte_593A111 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A111 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, detail);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v7 )
  {
    if ( !self )
      goto LABEL_13;
    UIWidget__set_height((UIWidget_o *)self, self->fields.mFontSize * lineThreshold, 0);
    v9 = WrapControlText__textBBCodeAdjust(self, detail, self->fields.mFontSize, self->fields.mFontSize, 0);
    UIWidget__ResizeCollider((UIWidget_o *)self, 0);
    ComponentInParent_object__58645868 = UnityEngine_Component__GetComponentInParent_object__58645868(
                                           (UnityEngine_Component_o *)self,
                                           (const MethodInfo_37EDD6C *)Method_UnityEngine_Component_GetComponentInParent_UIScrollView___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInParent_object__58645868, 0, 0);
    if ( v7 )
    {
      if ( ComponentInParent_object__58645868 )
      {
        v12 = v9 > lineThreshold;
        UIScrollView__ResetPosition((UIScrollView_o *)ComponentInParent_object__58645868, 0);
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)ComponentInParent_object__58645868[4].klass, v12, v13);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)ComponentInParent_object__58645868, v12, 0);
        return;
      }
LABEL_13:
      sub_21FFECC(v7, v8);
    }
  }
}


void UILabelHelper__SetTextSafely(UILabel_o *self, System_String_o *text, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_593A10F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A10F = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_21FFECC(v5, v6);
    UILabel__set_text(self, text, 0);
  }
}


void UILabelHelper__SetTextSafely_51104760(
        UILabel_o *self,
        System_String_o *format,
        System_Object_array *args,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_593A110 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A110 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, format);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
  {
    v7 = System_String__Format_75484712(format, args, 0);
    if ( !self )
      sub_21FFECC(v7, v8);
    UILabel__set_text(self, v7, 0);
  }
}