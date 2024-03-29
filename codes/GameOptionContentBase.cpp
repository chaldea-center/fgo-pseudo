void __fastcall GameOptionContentBase___ctor(GameOptionContentBase_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GameOptionContentBase__Init(GameOptionContentBase_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall GameOptionContentBase__IsAvailable(GameOptionContentBase_o *this, const MethodInfo *method)
{
  return 1;
}


void __fastcall GameOptionContentBase__Reflection(GameOptionContentBase_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall GameOptionContentBase__SetPosY(GameOptionContentBase_o *this, float posY, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  float x; // s10
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        x = localPosition.fields.x,
        z = localPosition.fields.z,
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B0D97C(transform);
  }
  v9.fields.y = posY;
  v9.fields.z = z;
  v9.fields.x = x;
  UnityEngine_Transform__set_localPosition(transform, v9, 0LL);
}


void __fastcall GameOptionContentBase__Show(GameOptionContentBase_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
}


int32_t __fastcall GameOptionContentBase__get_ContentHeight(GameOptionContentBase_o *this, const MethodInfo *method)
{
  return (int32_t)this[1].klass;
}