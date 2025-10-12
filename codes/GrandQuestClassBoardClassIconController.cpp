void GrandQuestClassBoardClassIconController___ctor(
        GrandQuestClassBoardClassIconController_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandQuestClassBoardClassIconController__LateUpdate(
        GrandQuestClassBoardClassIconController_o *this,
        const MethodInfo *method)
{
  __int64 transform; // x0
  UnityEngine_Transform_o *v3; // x19

  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v3 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C313D7 )
  {
    transform = sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
    byte_4C313D7 = 1;
  }
  if ( !v3 )
    sub_1C32E7C(transform);
  UnityEngine_Transform__set_rotation(v3, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
}