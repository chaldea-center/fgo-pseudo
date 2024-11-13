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
  __int64 v10; // x2
  Il2CppObject *prefab; // x21
  UnityEngine_Component_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_Component_o *v14; // x21
  UnityEngine_Transform_o *v15; // x23
  __int64 v16; // x2
  UnityEngine_Transform_o *v17; // x22
  __int64 v18; // x2
  UnityEngine_Transform_o *v19; // x22

  if ( (byte_4B18F99 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___, root, loadName);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B18F99 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, root);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                           prefab,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
  if ( !transform )
    goto LABEL_15;
  v14 = transform;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !root )
    goto LABEL_15;
  v15 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(root, 0LL);
  if ( !v15 )
    goto LABEL_15;
  UnityEngine_Transform__SetParent(v15, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v17 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C1 )
  {
    transform = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v16);
    byte_4B109C1 = 1;
  }
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v14, 0LL);
  v19 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C6 )
  {
    transform = (UnityEngine_Component_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v13, v18);
    byte_4B109C6 = 1;
  }
  if ( !v19 )
LABEL_15:
    sub_1BCAA3C(transform, v13);
  UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v14, loadName, callback, 0LL);
  return (UIAlphaMaskTexture_o *)v14;
}