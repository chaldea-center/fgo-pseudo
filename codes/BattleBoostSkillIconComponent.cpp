void BattleBoostSkillIconComponent___ctor(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  BattleServantSkillIConComponent___ctor((BattleServantSkillIConComponent_o *)this, 0);
}


void BattleBoostSkillIconComponent__OnClickIcon(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4C3ADBB & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADBB = 1;
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
                                                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___)) == 0 )
    {
      sub_1C32E7C(Component_object);
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

  if ( (byte_4C3ADBC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ADBC = 1;
  }
  flashEffect = this->fields.flashEffect;
  if ( !flashEffect )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(flashEffect, 1, 0);
  v4 = (UnityEngine_Object_o *)this->fields.flashEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy(v4, 3.0, 0);
}