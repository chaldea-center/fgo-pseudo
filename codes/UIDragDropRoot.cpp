void UIDragDropRoot___ctor(UIDragDropRoot_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropRoot__OnDisable(UIDragDropRoot_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *root; // x20
  UnityEngine_Object_o *transform; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3C006 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDragDropRoot_TypeInfo);
    byte_4C3C006 = 1;
  }
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(root, transform, 0) )
  {
    UIDragDropRoot_TypeInfo->static_fields->root = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)UIDragDropRoot_TypeInfo->static_fields, 0, v5, v6);
  }
}


void UIDragDropRoot__OnEnable(UIDragDropRoot_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3C005 & 1) == 0 )
  {
    sub_1C32C20(&UIDragDropRoot_TypeInfo);
    byte_4C3C005 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  UIDragDropRoot_TypeInfo->static_fields->root = transform;
  sub_1C32BC4((CGThumbnailListItem_o *)UIDragDropRoot_TypeInfo->static_fields, (int32_t)transform, v4, v5);
}