void ExcludeMotionEntity___ctor(ExcludeMotionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970BB2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970BB2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ExcludeMotionEntity__CreatePK(
        int32_t targetIdType,
        int32_t targetId,
        int32_t targetSvtType,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  if ( (byte_5970BB0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___);
    byte_5970BB0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__object__int_(
           targetIdType,
           targetId,
           targetSvtType,
           (Il2CppObject *)stateName,
           weaponGroup,
           (const MethodInfo_3855438 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___);
}


System_String_o *ExcludeMotionEntity__CreatePrimaryKey(ExcludeMotionEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5

  return ExcludeMotionEntity__CreatePK(
           this->fields.targetIdType,
           this->fields.targetId,
           this->fields.targetSvtType,
           this->fields.stateName,
           this->fields.weaponGroup,
           v2);
}


int32_t ExcludeMotionEntity__GetTargetSvtType(BattleServantData_o *svtData, const MethodInfo *method)
{
  __int64 v2; // x0

  if ( !svtData )
    sub_2213CDC(0, method);
  if ( svtData->fields.isEnemy )
  {
    return (int)&dword_0 + 1;
  }
  else if ( BattleServantData__IsNpc(svtData, 0) )
  {
    LODWORD(v2) = 2;
  }
  else
  {
    LODWORD(v2) = 3;
  }
  return v2;
}


bool ExcludeMotionEntity__IsSatisfyPhaseCond(
        ExcludeMotionEntity_o *this,
        int32_t currentPhase,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *phases; // x20
  System_Func_int__bool__c *v9; // x0
  System_Func_int__bool__o *v10; // x19

  if ( (byte_5970BB1 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_int____91711248);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__);
    sub_2213A60(&ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo);
    byte_5970BB1 = 1;
  }
  v5 = sub_2213CCC(ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  phases = this->fields.phases;
  if ( !phases )
    goto LABEL_8;
  if ( phases->max_length )
  {
    if ( v5 )
    {
      v9 = System_Func_int__bool__TypeInfo;
      *(_DWORD *)(v5 + 16) = currentPhase + 1;
      v10 = (System_Func_int__bool__o *)sub_2213CCC(v9);
      System_Func_int__bool____ctor(
        v10,
        (Il2CppObject *)v5,
        Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__,
        0);
      return BasicHelper__Any_int__58784608(
               phases,
               (System_Func_T__bool__o *)v10,
               (const MethodInfo_380FB60 *)Method_BasicHelper_Any_int____91711248);
    }
LABEL_8:
    sub_2213CDC(v6, v7);
  }
  return 1;
}


void ExcludeMotionEntity___c__DisplayClass12_0___ctor(
        ExcludeMotionEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExcludeMotionEntity___c__DisplayClass12_0___IsSatisfyPhaseCond_b__0(
        ExcludeMotionEntity___c__DisplayClass12_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.currentPhaseOffset == x;
}