void UILineInput___ctor(UILineInput_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *UILineInput__GetText(UILineInput_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIInput_o *mInput; // x0
  System_String_o *value; // x19

  if ( (byte_4CEFECE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEFECE = 1;
  }
  if ( !UILineInput__Init(this, method) )
    return (System_String_o *)StringLiteral_1/*""*/;
  mInput = this->fields.mInput;
  if ( !mInput )
    sub_1C7BD40(0, v3);
  value = UIInput__get_value(mInput, 0);
  if ( System_String__IsNullOrEmpty(value, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return value;
}


bool UILineInput__Init(UILineInput_o *this, const MethodInfo *method)
{
  struct UIInput_o **p_mInput; // x20
  UnityEngine_Object_o *mInput; // x21
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x19
  UILabel_o *label; // x0
  __int64 v14; // x1
  bool v15; // w19

  if ( (byte_4CEFECC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFECC = 1;
  }
  p_mInput = &this->fields.mInput;
  mInput = (UnityEngine_Object_o *)this->fields.mInput;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInput, 0, 0) )
    return 1;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  this->fields.mInput = (struct UIInput_o *)Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mInput, (int32_t)Component_object, v6, v7, v8, v9, v10, v11);
  v12 = (UnityEngine_Object_o *)this->fields.mInput;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  label = (UILabel_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
  if ( ((unsigned __int8)label & 1) == 0 )
    return 0;
  if ( !*p_mInput || (label = (*p_mInput)->fields.label) == 0 )
    sub_1C7BD40(label, v14);
  v15 = 1;
  UILabel__set_maxLineCount(label, 1, 0);
  return v15;
}


void UILineInput__SetInputEnable(UILineInput_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *Component_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4CEFECD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CEFECD = 1;
  }
  Component_object = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)this,
                                                 (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    goto LABEL_8;
  UnityEngine_Collider__set_enabled(Component_object, flag, 0);
  if ( UILineInput__Init(this, v7) )
  {
    Component_object = (UnityEngine_Collider_o *)this->fields.mInput;
    if ( Component_object )
    {
      UIInput__set_isSelected((UIInput_o *)Component_object, 0, 0);
      return;
    }
LABEL_8:
    sub_1C7BD40(Component_object, v6);
  }
}