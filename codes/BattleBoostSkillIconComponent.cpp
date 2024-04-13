void __fastcall BattleBoostSkillIconComponent___ctor(BattleBoostSkillIconComponent_o *this, const MethodInfo *method)
{
  BattleServantSkillIConComponent___ctor((BattleServantSkillIConComponent_o *)this, 0LL);
}


void __fastcall BattleBoostSkillIconComponent__OnClickIcon(
        BattleBoostSkillIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *target; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0

  if ( (byte_42EC109 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EC109 = 1;
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
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattlePerformanceMaster___)) == 0LL )
    {
      sub_B5D69C(Component_srcLineSprite, v9);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *flashEffect; // x0
  UnityEngine_Object_o *v6; // x19

  if ( (byte_42EC10A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC10A = 1;
  }
  flashEffect = this->fields.flashEffect;
  if ( !flashEffect )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(flashEffect, 1, 0LL);
  v6 = (UnityEngine_Object_o *)this->fields.flashEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy(v6, 3.0, 0LL);
}