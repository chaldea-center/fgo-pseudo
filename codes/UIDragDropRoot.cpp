void UIDragDropRoot___ctor(UIDragDropRoot_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropRoot__OnDisable(UIDragDropRoot_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *root; // x20
  UnityEngine_Object_o *transform; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CF2C92 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIDragDropRoot_TypeInfo);
    byte_4CF2C92 = 1;
  }
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(root, transform, 0) )
  {
    UIDragDropRoot_TypeInfo->static_fields->root = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)UIDragDropRoot_TypeInfo->static_fields, 0, v5, v6, v7, v8, v9, v10);
  }
}


void UIDragDropRoot__OnEnable(UIDragDropRoot_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF2C91 & 1) == 0 )
  {
    sub_1C7BAE8(&UIDragDropRoot_TypeInfo);
    byte_4CF2C91 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  UIDragDropRoot_TypeInfo->static_fields->root = transform;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)UIDragDropRoot_TypeInfo->static_fields,
    (int32_t)transform,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}