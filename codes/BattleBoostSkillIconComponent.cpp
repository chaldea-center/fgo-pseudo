void __fastcall BattleBoostSkillIconComponent___ctor(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  BattleServantSkillIConComponent___ctor((BattleServantSkillIConComponent_o *)this, 0LL);
}


void __fastcall BattleBoostSkillIconComponent__OnClickIcon(
        BattleBoostSkillIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_438EB44 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EB44 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    Component_srcLineSprite = this->fields.target;
    if ( !Component_srcLineSprite
      || (Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___)) == 0LL )
    {
      sub_B7769C(Component_srcLineSprite, v4);
    }
    BattlePerformanceMaster__clickBoostSkillIcon(
      (BattlePerformanceMaster_o *)Component_srcLineSprite,
      this->fields.skillInfo,
      0LL);
  }
}


void __fastcall BattleBoostSkillIconComponent__procFlash(
        BattleBoostSkillIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *flashEffect; // x0
  UnityEngine_Object_o *v4; // x19

  if ( (byte_438EB45 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438EB45 = 1;
  }
  flashEffect = this->fields.flashEffect;
  if ( !flashEffect )
    sub_B7769C(0LL, method);
  UnityEngine_GameObject__SetActive(flashEffect, 1, 0LL);
  v4 = (UnityEngine_Object_o *)this->fields.flashEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy(v4, 3.0, 0LL);
}