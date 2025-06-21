void __fastcall EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C5D0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1C5D0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  if ( (byte_4B1C5CE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&termId);
    byte_4B1C5CE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRaceEntity__CreatePrimaryKey(EventRaceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRaceEntity__CreatePK(this->fields.eventId, this->fields.termId, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventRaceEntity__GetGroupIdx(EventRaceEntity_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v12; // x20

  if ( (byte_4B1C5CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_FindIndex_int___, *(_QWORD *)&groupId);
    sub_1BCAFF8(&System_Predicate_int__TypeInfo, v5);
    sub_1BCAFF8(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__, v6);
    sub_1BCAFF8(&EventRaceEntity___c__DisplayClass12_0_TypeInfo, v7);
    byte_4B1C5CF = 1;
  }
  v8 = sub_1BCB244(EventRaceEntity___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_DWORD *)(v8 + 16) = groupId;
  groupIds = this->fields.groupIds;
  v12 = (System_Predicate_int__o *)sub_1BCB244(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    0LL);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_3117B74 *)Method_System_Array_FindIndex_int___);
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