// attributes: thunk
void DebugSelectDialog___ctor(DebugSelectDialog_o *this, const MethodInfo *method)
{
  DummyErrorSelectDialog___ctor((DummyErrorSelectDialog_o *)this, method);
}


void DebugSelectDialog__Init(DebugSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelLabel; // x20
  const MethodInfo *v5; // x1
  UILabel_o *v6; // x0

  if ( (byte_5937A2A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937A2A = 1;
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0) )
  {
    v6 = this->fields.cancelLabel;
    if ( !v6 )
      sub_21FFECC(0, v5);
    UILabel__set_text(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  DummyErrorSelectDialog__Init((DummyErrorSelectDialog_o *)this, v5);
}