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
  __int64 v9; // x1
  Il2CppObject *prefab; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v12; // x21
  UnityEngine_Transform_o *v13; // x23
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x22
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x22

  if ( (byte_49FF0B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___, root);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FF0B5 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                           prefab,
                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
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
  v15 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7111 )
  {
    transform = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v14);
    byte_49F7111 = 1;
  }
  if ( !v15 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v12, 0LL);
  v17 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7116 )
  {
    transform = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_49F7116 = 1;
  }
  if ( !v17 )
LABEL_15:
    sub_1B64324(transform);
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v12, loadName, callback, 0LL);
  return (UIAlphaMaskTexture_o *)v12;
}