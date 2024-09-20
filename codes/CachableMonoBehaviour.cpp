void __fastcall CachableMonoBehaviour___ctor(CachableMonoBehaviour_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall CachableMonoBehaviour__get_renderer(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mRenderer; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A57F07 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57F07 = 1;
  }
  mRenderer = (UnityEngine_Object_o *)this->fields.mRenderer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mRenderer, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
    this->fields.mRenderer = (struct UnityEngine_Renderer_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mRenderer, (int32_t)Component_object, v5, v6);
  }
  return this->fields.mRenderer;
}


UnityEngine_Rigidbody_o *__fastcall CachableMonoBehaviour__get_rigidbody(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mRigidbody; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A57F08 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57F08 = 1;
  }
  mRigidbody = (UnityEngine_Object_o *)this->fields.mRigidbody;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mRigidbody, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
    this->fields.mRigidbody = (struct UnityEngine_Rigidbody_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mRigidbody, (int32_t)Component_object, v5, v6);
  }
  return this->fields.mRigidbody;
}


UnityEngine_Transform_o *__fastcall CachableMonoBehaviour__get_transform(
        CachableMonoBehaviour_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mTransform; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A57F09 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Transform___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57F09 = 1;
  }
  mTransform = (UnityEngine_Object_o *)this->fields.mTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTransform, 0LL, 0LL) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Transform___);
    this->fields.mTransform = (struct UnityEngine_Transform_o *)Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mTransform, (int32_t)Component_object, v5, v6);
  }
  return this->fields.mTransform;
}