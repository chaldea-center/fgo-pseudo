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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *prefab; // x21
  UnityEngine_Component_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_Component_o *v15; // x21
  UnityEngine_Transform_o *v16; // x23
  UnityEngine_Transform_o *v17; // x22
  int v18; // s0
  UnityEngine_Transform_o *v21; // x22
  int v22; // s0

  if ( (byte_42E6880 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___, (_DWORD)root, (_DWORD)loadName, callback);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E6880 = 1;
  }
  prefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           prefab,
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_UIAlphaMaskTexture___);
  if ( !transform )
    goto LABEL_12;
  v15 = transform;
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
  if ( !root )
    goto LABEL_12;
  v16 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(root, 0LL);
  if ( !v16
    || (UnityEngine_Transform__SetParent(v16, (UnityEngine_Transform_o *)transform, 0LL),
        v17 = UnityEngine_Component__get_transform(v15, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL),
        !v17)
    || (UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v18, 0LL),
        v21 = UnityEngine_Component__get_transform(v15, 0LL),
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL),
        !v21) )
  {
LABEL_12:
    sub_B5D69C(transform, v14);
  }
  UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  UIAlphaMaskTexture__SetAlphaMaskTexture((UIAlphaMaskTexture_o *)v15, loadName, callback, 0LL);
  return (UIAlphaMaskTexture_o *)v15;
}