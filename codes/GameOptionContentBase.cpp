void GameOptionContentBase___ctor(GameOptionContentBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GameOptionContentBase__Init(GameOptionContentBase_o *this, const MethodInfo *method)
{
  ;
}


bool GameOptionContentBase__IsAvailable(GameOptionContentBase_o *this, const MethodInfo *method)
{
  return 1;
}


void GameOptionContentBase__Reflection(GameOptionContentBase_o *this, const MethodInfo *method)
{
  ;
}


void GameOptionContentBase__SetPosY(GameOptionContentBase_o *this, float posY, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  float x; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0),
        x = localPosition.fields.x,
        z = localPosition.fields.z,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C3E7C0(transform, v6);
  }
  v10.fields.y = posY;
  v10.fields.z = z;
  v10.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v10, 0);
}


void GameOptionContentBase__Show(GameOptionContentBase_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, value, 0);
}


int32_t GameOptionContentBase__get_ContentHeight(GameOptionContentBase_o *this, const MethodInfo *method)
{
  return this->fields.contentHeight;
}