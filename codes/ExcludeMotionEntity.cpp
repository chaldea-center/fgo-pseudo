void ExcludeMotionEntity___ctor(ExcludeMotionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59389FF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59389FF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ExcludeMotionEntity__CreatePK(
        int32_t targetIdType,
        int32_t targetId,
        int32_t targetSvtType,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  if ( (byte_59389FD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___);
    byte_59389FD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__object__int_(
           targetIdType,
           targetId,
           targetSvtType,
           (Il2CppObject *)stateName,
           weaponGroup,
           (const MethodInfo_3821F70 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___);
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
    sub_21FFECC(0, method);
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

  if ( (byte_59389FE & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__);
    sub_21FFC50(&ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo);
    byte_59389FE = 1;
  }
  v5 = sub_21FFEBC(ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo);
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
      v10 = (System_Func_int__bool__o *)sub_21FFEBC(v9);
      System_Func_int__bool____ctor(
        v10,
        (Il2CppObject *)v5,
        Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__,
        0);
      return BasicHelper__Any_int__58574768(
               phases,
               (System_Func_T__bool__o *)v10,
               (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
    }
LABEL_8:
    sub_21FFECC(v6, v7);
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