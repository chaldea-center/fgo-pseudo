void __fastcall EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41886F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41886F2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  if ( (byte_41886F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&termId);
    byte_41886F0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v13; // x20

  if ( (byte_41886F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_int___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v5);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v6);
    sub_B2C35C(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__, v7);
    sub_B2C35C(&EventRaceEntity___c__DisplayClass12_0_TypeInfo, v8);
    byte_41886F1 = 1;
  }
  v9 = (EventRaceEntity___c__DisplayClass12_0_o *)sub_B2C42C(EventRaceEntity___c__DisplayClass12_0_TypeInfo);
  EventRaceEntity___c__DisplayClass12_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.groupId = groupId;
  groupIds = this->fields.groupIds;
  v13 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_1FFC714 *)Method_System_Array_FindIndex_int___);
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