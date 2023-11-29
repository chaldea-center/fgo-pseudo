void __fastcall BattleBoostSkillIconComponent___ctor(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  BattleServantSkillIConComponent___ctor((BattleServantSkillIConComponent_o *)this, 0LL);
}


void __fastcall BattleBoostSkillIconComponent__OnClickIcon(
        BattleBoostSkillIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *target; // x20
  UnityEngine_GameObject_o *v5; // x0
  BattlePerformanceMaster_o *Component_srcLineSprite; // x0

  if ( (byte_40FD3AE & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FD3AE = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    v5 = this->fields.target;
    if ( !v5
      || (Component_srcLineSprite = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   v5,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    BattlePerformanceMaster__clickBoostSkillIcon(Component_srcLineSprite, this->fields.skillInfo, 0LL);
  }
}


void __fastcall BattleBoostSkillIconComponent__procFlash(
        BattleBoostSkillIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *flashEffect; // x0
  UnityEngine_Object_o *v4; // x19

  if ( (byte_40FD3AF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD3AF = 1;
  }
  flashEffect = this->fields.flashEffect;
  if ( !flashEffect )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(flashEffect, 1, 0LL);
  v4 = (UnityEngine_Object_o *)this->fields.flashEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy(v4, 3.0, 0LL);
}