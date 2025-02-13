void __fastcall ExcludeMotionEntity___ctor(ExcludeMotionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC767 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDC767 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ExcludeMotionEntity__CreatePK(
        int32_t targetIdType,
        int32_t targetId,
        int32_t targetSvtType,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  if ( (byte_4BDC765 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___);
    byte_4BDC765 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__object__int_(
           targetIdType,
           targetId,
           targetSvtType,
           (Il2CppObject *)stateName,
           weaponGroup,
           (const MethodInfo_2FAEF78 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___);
}


System_String_o *__fastcall ExcludeMotionEntity__CreatePrimaryKey(
        ExcludeMotionEntity_o *this,
        const MethodInfo *method)
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


int32_t __fastcall ExcludeMotionEntity__GetTargetSvtType(BattleServantData_o *svtData, const MethodInfo *method)
{
  if ( !svtData )
    sub_1C22094(0LL, method);
  if ( svtData->fields.isEnemy )
    return (unsigned int)&dword_0 + 1;
  if ( BattleServantData__IsNpc(svtData, 0LL) )
    return 2;
  return 3;
}


bool __fastcall ExcludeMotionEntity__IsSatisfyPhaseCond(
        ExcludeMotionEntity_o *this,
        int32_t currentPhase,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *phases; // x20
  System_Func_int__bool__o *v9; // x19

  if ( (byte_4BDC766 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__);
    sub_1C21E38(&ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo);
    byte_4BDC766 = 1;
  }
  v5 = sub_1C22084(ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  phases = this->fields.phases;
  if ( !phases )
    goto LABEL_8;
  if ( *(_QWORD *)&phases->max_length )
  {
    if ( v5 )
    {
      *(_DWORD *)(v5 + 16) = currentPhase + 1;
      v9 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v9,
        (Il2CppObject *)v5,
        Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__,
        0LL);
      return BasicHelper__Any_int__49916656(
               phases,
               (System_Func_T__bool__o *)v9,
               (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760);
    }
LABEL_8:
    sub_1C22094(v6, v7);
  }
  return 1;
}


void __fastcall ExcludeMotionEntity___c__DisplayClass12_0___ctor(
        ExcludeMotionEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ExcludeMotionEntity___c__DisplayClass12_0___IsSatisfyPhaseCond_b__0(
        ExcludeMotionEntity___c__DisplayClass12_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.currentPhaseOffset == x;
}