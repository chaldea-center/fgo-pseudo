void UIDragDropRoot___ctor(UIDragDropRoot_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropRoot__OnDisable(UIDragDropRoot_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *root; // x19
  __int64 v4; // x1
  UnityEngine_Object_o *transform; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593CCE6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIDragDropRoot_TypeInfo);
    byte_593CCE6 = 1;
  }
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  transform = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(root, transform, 0) )
  {
    UIDragDropRoot_TypeInfo->static_fields->root = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)UIDragDropRoot_TypeInfo->static_fields, 0, v6, v7, v8, v9, v10, v11);
  }
}


void UIDragDropRoot__OnEnable(UIDragDropRoot_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593CCE5 & 1) == 0 )
  {
    sub_21FFC50(&UIDragDropRoot_TypeInfo);
    byte_593CCE5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  UIDragDropRoot_TypeInfo->static_fields->root = transform;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UIDragDropRoot_TypeInfo->static_fields,
    (int32_t)transform,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}