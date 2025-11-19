void UIDragDropContainer___ctor(UIDragDropContainer_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropContainer__Start(UIDragDropContainer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *reparentTarget; // x21
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4CBA949 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBA949 = 1;
  }
  reparentTarget = (UnityEngine_Object_o *)this->fields.reparentTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(reparentTarget, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    this->fields.reparentTarget = transform;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.reparentTarget, (int32_t)transform, v5, v6);
  }
}