void UIScaleSame___ctor(UIScaleSame_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIScaleSame__SetCamera(UIScaleSame_o *this, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mCamera = cam;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCamera, (int32_t)cam, (int32_t)method, v3);
}


void UIScaleSame__Update(UIScaleSame_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mCamera; // x20
  __int64 v4; // x1
  UnityEngine_Camera_o *v5; // x0
  float orthographicSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C537FE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C537FE = 1;
  }
  mCamera = (UnityEngine_Object_o *)this->fields.mCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mCamera, 0, 0) )
  {
    v5 = this->fields.mCamera;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    orthographicSize = UnityEngine_Camera__get_orthographicSize(v5, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalScale_36178360(gameObject, orthographicSize, orthographicSize, v8);
  }
}