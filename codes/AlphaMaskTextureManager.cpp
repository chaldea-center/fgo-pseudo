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
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x21
  UnityEngine_Transform_o *v14; // x23
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x22

  if ( (byte_4A011B7 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___, root);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    byte_4A011B7 = 1;
  }
  prefab = (Il2CppObject *)this->fields.prefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                           prefab,
                                           (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
  if ( !transform )
    goto LABEL_15;
  v13 = transform;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !root )
    goto LABEL_15;
  v14 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(root, 0LL);
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Transform__SetParent(v14, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v13, 0LL);
  v15 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F9201 )
  {
    transform = (UnityEngine_Component_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v12);
    byte_49F9201 = 1;
  }
  if ( !v15 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v13, 0LL);
  v16 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F9206 )
  {
    transform = (UnityEngine_Component_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, v12);
    byte_49F9206 = 1;
  }
  if ( !v16 )
LABEL_15:
    sub_1B64ACC(transform, v12);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v13, loadName, callback, 0LL);
  return (UIAlphaMaskTexture_o *)v13;
}