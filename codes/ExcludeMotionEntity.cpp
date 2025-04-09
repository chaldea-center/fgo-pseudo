void __fastcall ExcludeMotionEntity___ctor(ExcludeMotionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB098 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB098 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ExcludeMotionEntity__CreatePK(
        int32_t targetIdType,
        int32_t targetId,
        int32_t targetSvtType,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  if ( (byte_49BB096 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___, *(_QWORD *)&targetId);
    byte_49BB096 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__object__int_(
           targetIdType,
           targetId,
           targetSvtType,
           (Il2CppObject *)stateName,
           weaponGroup,
           (const MethodInfo_2F00C98 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___);
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
    sub_1B4D1EC(0LL, method);
  if ( svtData->fields.isEnemy )
    return (unsigned int)&dword_0 + 1;
  if ( BattleServantData__IsNpc(svtData, 0LL) )
    return 2;
  return 3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ExcludeMotionEntity__IsSatisfyPhaseCond(
        ExcludeMotionEntity_o *this,
        int32_t currentPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Int32_array *phases; // x20
  System_Func_int__bool__o *v12; // x19

  if ( (byte_49BB097 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_int____75494880, *(_QWORD *)&currentPhase);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__, v6);
    sub_1B4CF90(&ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo, v7);
    byte_49BB097 = 1;
  }
  v8 = sub_1B4D1DC(ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  phases = this->fields.phases;
  if ( !phases )
    goto LABEL_8;
  if ( *(_QWORD *)&phases->max_length )
  {
    if ( v8 )
    {
      *(_DWORD *)(v8 + 16) = currentPhase + 1;
      v12 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v12,
        (Il2CppObject *)v8,
        Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__,
        0LL);
      return BasicHelper__Any_int__49201684(
               phases,
               (System_Func_T__bool__o *)v12,
               (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880);
    }
LABEL_8:
    sub_1B4D1EC(v9, v10);
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