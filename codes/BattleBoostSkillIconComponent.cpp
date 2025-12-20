void BattleBoostSkillIconComponent___ctor(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  BattleServantSkillIConComponent___ctor((BattleServantSkillIConComponent_o *)this, 0);
}


void BattleBoostSkillIconComponent__OnClickIcon(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4D2FD92 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FD92 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    Component_object = this->fields.target;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___)) == 0 )
    {
      sub_1C942F0(Component_object, v4);
    }
    BattlePerformanceMaster__clickBoostSkillIcon(
      (BattlePerformanceMaster_o *)Component_object,
      this->fields.skillInfo,
      0);
  }
}


void BattleBoostSkillIconComponent__procFlash(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *flashEffect; // x0
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4D2FD93 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FD93 = 1;
  }
  flashEffect = this->fields.flashEffect;
  if ( !flashEffect )
    sub_1C942F0(0, method);
  UnityEngine_GameObject__SetActive(flashEffect, 1, 0);
  v4 = (UnityEngine_Object_o *)this->fields.flashEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy(v4, 3.0, 0);
}