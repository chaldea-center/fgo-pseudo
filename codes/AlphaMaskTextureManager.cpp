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
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Component_o *v12; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v14; // x23
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x22
  int v17; // s0
  UnityEngine_Transform_o *v20; // x22
  int v21; // s0

  if ( (byte_40F7F03 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___, root);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F7F03 = 1;
  }
  prefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     prefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
  if ( !v11 )
    goto LABEL_12;
  v12 = v11;
  transform = UnityEngine_Component__get_transform(v11, 0LL);
  if ( !root )
    goto LABEL_12;
  v14 = transform;
  v15 = UnityEngine_GameObject__get_transform(root, 0LL);
  if ( !v14
    || (UnityEngine_Transform__SetParent(v14, v15, 0LL),
        v16 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL),
        !v16)
    || (UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL),
        v20 = UnityEngine_Component__get_transform(v12, 0LL),
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL),
        !v20) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v12, loadName, callback, 0LL);
  return (UIAlphaMaskTexture_o *)v12;
}