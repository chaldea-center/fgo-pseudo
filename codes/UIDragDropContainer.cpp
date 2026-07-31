void UIDragDropContainer___ctor(UIDragDropContainer_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropContainer__Start(UIDragDropContainer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *reparentTarget; // x21
  struct UnityEngine_Transform_o *transform; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593CCDA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCDA = 1;
  }
  reparentTarget = (UnityEngine_Object_o *)this->fields.reparentTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(reparentTarget, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.reparentTarget = transform;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.reparentTarget,
      (int32_t)transform,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
}