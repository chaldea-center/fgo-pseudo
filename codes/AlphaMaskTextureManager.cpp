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
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x21
  UnityEngine_Transform_o *v14; // x23
  UnityEngine_Transform_o *v15; // x22
  int v16; // s0
  UnityEngine_Transform_o *v19; // x22
  int v20; // s0

  if ( (byte_4185AA1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___, root);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4185AA1 = 1;
  }
  prefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           prefab,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
  if ( !transform )
    goto LABEL_12;
  v13 = transform;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !root )
    goto LABEL_12;
  v14 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(root, 0LL);
  if ( !v14
    || (UnityEngine_Transform__SetParent(v14, (UnityEngine_Transform_o *)transform, 0LL),
        v15 = UnityEngine_Component__get_transform(v13, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL),
        !v15)
    || (UnityEngine_Transform__set_localPosition(v15, *(UnityEngine_Vector3_o *)&v16, 0LL),
        v19 = UnityEngine_Component__get_transform(v13, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL),
        !v19) )
  {
LABEL_12:
    sub_B2C434(transform, v12);
  }
  UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v13, loadName, callback, 0LL);
  return (UIAlphaMaskTexture_o *)v13;
}