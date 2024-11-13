void __fastcall EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1629E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1629E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  if ( (byte_4B1629C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&termId, method);
    byte_4B1629C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRaceEntity__CreatePrimaryKey(EventRaceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRaceEntity__CreatePK(this->fields.eventId, this->fields.termId, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceEntity__GetGroupIdx(EventRaceEntity_o *this, int32_t groupId, const MethodInfo *method)
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
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v18; // x20

  if ( (byte_4B1629D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_int___, *(_QWORD *)&groupId, method);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__, v8, v9);
    sub_1BCA7E0(&EventRaceEntity___c__DisplayClass12_0_TypeInfo, v10, v11);
    byte_4B1629D = 1;
  }
  v12 = sub_1BCAA2C(EventRaceEntity___c__DisplayClass12_0_TypeInfo, *(_QWORD *)&groupId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = groupId;
  groupIds = this->fields.groupIds;
  v18 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v14, v15, v16);
  System_Predicate_int____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    0LL);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v18,
           (const MethodInfo_300D4DC *)Method_System_Array_FindIndex_int___);
}


void __fastcall EventRaceEntity___c__DisplayClass12_0___ctor(
        EventRaceEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRaceEntity___c__DisplayClass12_0___GetGroupIdx_b__0(
        EventRaceEntity___c__DisplayClass12_0_o *this,
        int32_t obj,
        const MethodInfo *method)
{
  return this->fields.groupId == obj;
}