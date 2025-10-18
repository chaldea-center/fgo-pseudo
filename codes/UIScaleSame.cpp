void UIScaleSame___ctor(UIScaleSame_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIScaleSame__SetCamera(UIScaleSame_o *this, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mCamera = cam;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mCamera, (int32_t)cam, (int32_t)method, v3);
}


void UIScaleSame__Update(UIScaleSame_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mCamera; // x20
  UnityEngine_Camera_o *v4; // x0
  float orthographicSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C3FA63 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3FA63 = 1;
  }
  mCamera = (UnityEngine_Object_o *)this->fields.mCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mCamera, 0, 0) )
  {
    v4 = this->fields.mCamera;
    if ( !v4 )
      sub_1C372B4(0);
    orthographicSize = UnityEngine_Camera__get_orthographicSize(v4, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalScale_36134460(gameObject, orthographicSize, orthographicSize, v7);
  }
}