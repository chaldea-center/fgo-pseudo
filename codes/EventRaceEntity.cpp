void __fastcall EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42149AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_42149AE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  if ( (byte_42149AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&termId);
    byte_42149AC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v8; // x1
  EventRaceEntity___c__DisplayClass12_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v14; // x20

  if ( (byte_42149AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_int___, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v5);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v6);
    sub_B0D8A4(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__, v7);
    sub_B0D8A4(&EventRaceEntity___c__DisplayClass12_0_TypeInfo, v8);
    byte_42149AD = 1;
  }
  v9 = (EventRaceEntity___c__DisplayClass12_0_o *)sub_B0D974(
                                                    EventRaceEntity___c__DisplayClass12_0_TypeInfo,
                                                    *(_QWORD *)&groupId,
                                                    method);
  EventRaceEntity___c__DisplayClass12_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.groupId = groupId;
  groupIds = this->fields.groupIds;
  v14 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v11, v12);
  System_Predicate_int____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v14,
           (const MethodInfo_1F68D08 *)Method_System_Array_FindIndex_int___);
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