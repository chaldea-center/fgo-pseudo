void AlphaMaskTextureManager___ctor(AlphaMaskTextureManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UIAlphaMaskTexture_o *AlphaMaskTextureManager__Create(
        AlphaMaskTextureManager_o *this,
        UnityEngine_GameObject_o *root,
        System_String_o *loadName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *prefab; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v11; // x21
  UnityEngine_Transform_o *v12; // x23
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_Transform_o *v14; // x22

  if ( (byte_4C3AD8D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AD8D = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                           prefab,
                                           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
  if ( !transform )
    goto LABEL_15;
  v11 = transform;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
  if ( !root )
    goto LABEL_15;
  v12 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(root, 0);
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_Transform__SetParent(v12, (UnityEngine_Transform_o *)transform, 0);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v11, 0);
  v13 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C313D1 )
  {
    transform = (UnityEngine_Component_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v13 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v11, 0);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C313D6 )
  {
    transform = (UnityEngine_Component_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v14 )
LABEL_15:
    sub_1C32E7C(transform);
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v11, loadName, callback, 0);
  return (UIAlphaMaskTexture_o *)v11;
}