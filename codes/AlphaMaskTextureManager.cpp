void __fastcall AlphaMaskTextureManager___ctor(AlphaMaskTextureManager_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UIAlphaMaskTexture_o *__fastcall AlphaMaskTextureManager__Create(
        AlphaMaskTextureManager_o *this,
        UnityEngine_GameObject_o *root,
        System_String_o *loadName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *prefab; // x21
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Component_o *v12; // x21
  UnityEngine_Transform_o *v13; // x23
  UnityEngine_Transform_o *v14; // x22
  int v15; // s0
  UnityEngine_Transform_o *v18; // x22
  int v19; // s0

  if ( (byte_4212992 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___, root);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4212992 = 1;
  }
  prefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           prefab,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
  if ( !transform )
    goto LABEL_12;
  v12 = transform;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !root )
    goto LABEL_12;
  v13 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(root, 0LL);
  if ( !v13
    || (UnityEngine_Transform__SetParent(v13, (UnityEngine_Transform_o *)transform, 0LL),
        v14 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL),
        !v14)
    || (UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        v18 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
        !v18) )
  {
LABEL_12:
    sub_B0D97C(transform);
  }
  UnityEngine_Transform__set_localScale(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v12, loadName, callback, 0LL);
  return (UIAlphaMaskTexture_o *)v12;
}