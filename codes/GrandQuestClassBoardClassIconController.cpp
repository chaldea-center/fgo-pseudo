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
  if ( !byte_4D25F1F )
  {
    transform = (UnityEngine_Transform_o *)sub_1C94098(&UnityEngine_Quaternion_TypeInfo);
    byte_4D25F1F = 1;
  }
  if ( !v4 )
    sub_1C942F0(transform, v3);
  UnityEngine_Transform__set_rotation(v4, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0);
}