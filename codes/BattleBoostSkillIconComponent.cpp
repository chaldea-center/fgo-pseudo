void BattleBoostSkillIconComponent___ctor(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  BattleServantSkillIConComponent___ctor((BattleServantSkillIConComponent_o *)this, 0);
}


void BattleBoostSkillIconComponent__OnClickIcon(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_5973EDD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EDD = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    Component_object = this->fields.target;
    if ( !Component_object
      || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Component_object,
                                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___)) == 0 )
    {
      sub_2213CDC(Component_object, v4);
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
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19

  if ( (byte_5973EDE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EDE = 1;
  }
  flashEffect = this->fields.flashEffect;
  if ( !flashEffect )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(flashEffect, 1, 0);
  v5 = (UnityEngine_Object_o *)this->fields.flashEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy(v5, 3.0, 0);
}