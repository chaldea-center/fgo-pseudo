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
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1
  UnityEngine_Transform_o *v4; // x19

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v4 = transform;
  if ( !byte_5969AE6 )
  {
    transform = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  if ( !v4 )
    sub_2213CDC(transform, v3);
  UnityEngine_Transform__set_rotation(v4, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
}