// attributes: thunk
void DebugSelectDialog___ctor(DebugSelectDialog_o *this, const MethodInfo *method)
{
  DummyErrorSelectDialog___ctor((DummyErrorSelectDialog_o *)this, method);
}


void DebugSelectDialog__Init(DebugSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *cancelLabel; // x20
  const MethodInfo *v4; // x1
  UILabel_o *v5; // x0

  if ( (byte_4D2FE64 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FE64 = 1;
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0) )
  {
    v5 = this->fields.cancelLabel;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    UILabel__set_text(v5, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  DummyErrorSelectDialog__Init((DummyErrorSelectDialog_o *)this, v4);
}