void __fastcall AlphaMaskTextureManager___ctor(AlphaMaskTextureManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UIAlphaMaskTexture_o *__fastcall AlphaMaskTextureManager__Create(
        AlphaMaskTextureManager_o *this,
        UnityEngine_GameObject_o *root,
        System_String_o *loadName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *prefab; // x21
  UnityEngine_Component_o *transform; // x0
  __int64 v11; // x1
  UnityEngine_Component_o *v12; // x21
  UnityEngine_Transform_o *v13; // x23
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x22

  if ( (byte_4BDF3C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3C4 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                           prefab,
                                           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
  if ( !transform )
    goto LABEL_15;
  v12 = transform;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !root )
    goto LABEL_15;
  v13 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(root, 0LL);
  if ( !v13 )
    goto LABEL_15;
  UnityEngine_Transform__SetParent(v13, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BD6BB1 )
  {
    transform = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v15 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BD6BB6 )
  {
    transform = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v15 )
LABEL_15:
    sub_1C22094(transform, v11);
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v12, loadName, callback, 0LL);
  return (UIAlphaMaskTexture_o *)v12;
}