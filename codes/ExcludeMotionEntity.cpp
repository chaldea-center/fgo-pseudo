void __fastcall ExcludeMotionEntity___ctor(ExcludeMotionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16416 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16416 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_4B16414 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___,
      *(_QWORD *)&targetId,
      *(_QWORD *)&targetSvtType);
    byte_4B16414 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__object__int_(
           targetIdType,
           targetId,
           targetSvtType,
           (Il2CppObject *)stateName,
           weaponGroup,
           (const MethodInfo_2F11E04 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__string__int___);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Int32_array *phases; // x20
  System_Func_int__bool__o *v18; // x19

  if ( (byte_4B16415 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&currentPhase, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__, v8, v9);
    sub_1BCA7E0(&ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo, v10, v11);
    byte_4B16415 = 1;
  }
  v12 = sub_1BCAA2C(ExcludeMotionEntity___c__DisplayClass12_0_TypeInfo, *(_QWORD *)&currentPhase, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  phases = this->fields.phases;
  if ( !phases )
    goto LABEL_8;
  if ( *(_QWORD *)&phases->max_length )
  {
    if ( v12 )
    {
      *(_DWORD *)(v12 + 16) = currentPhase + 1;
      v18 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v14, v15, v16);
      System_Func_int__bool____ctor(
        v18,
        (Il2CppObject *)v12,
        Method_ExcludeMotionEntity___c__DisplayClass12_0__IsSatisfyPhaseCond_b__0__,
        0LL);
      return BasicHelper__Any_int__49273364(
               phases,
               (System_Func_T__bool__o *)v18,
               (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
    }
LABEL_8:
    sub_1BCAA3C(v13, v14);
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