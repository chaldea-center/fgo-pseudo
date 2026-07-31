void UIScaleSame___ctor(UIScaleSame_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIScaleSame__SetCamera(UIScaleSame_o *this, UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mCamera = cam;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mCamera,
    (int32_t)cam,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UIScaleSame__Update(UIScaleSame_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mCamera; // x20
  __int64 v5; // x1
  UnityEngine_Camera_o *v6; // x0
  float orthographicSize; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1

  if ( (byte_5934F51 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934F51 = 1;
  }
  mCamera = (UnityEngine_Object_o *)this->fields.mCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(mCamera, 0, 0) )
  {
    v6 = this->fields.mCamera;
    if ( !v6 )
      sub_21FFECC(0, v5);
    orthographicSize = UnityEngine_Camera__get_orthographicSize(v6, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalScale_42878188(gameObject, orthographicSize, orthographicSize, v9);
  }
}