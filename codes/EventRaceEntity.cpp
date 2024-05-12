void __fastcall EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BD1F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BD1F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  if ( (byte_438BD1D & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438BD1D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRaceEntity__CreatePrimaryKey(EventRaceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRaceEntity__CreatePK(this->fields.eventId, this->fields.termId, v2);
}


int32_t __fastcall EventRaceEntity__GetGroupIdx(EventRaceEntity_o *this, int32_t groupId, const MethodInfo *method)
{
  EventRaceEntity___c__DisplayClass12_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v9; // x20

  if ( (byte_438BD1E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_FindIndex_int___);
    sub_B775C4(&Method_System_Predicate_int___ctor__);
    sub_B775C4(&System_Predicate_int__TypeInfo);
    sub_B775C4(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__);
    sub_B775C4(&EventRaceEntity___c__DisplayClass12_0_TypeInfo);
    byte_438BD1E = 1;
  }
  v5 = (EventRaceEntity___c__DisplayClass12_0_o *)sub_B77694(EventRaceEntity___c__DisplayClass12_0_TypeInfo);
  EventRaceEntity___c__DisplayClass12_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.groupId = groupId;
  groupIds = this->fields.groupIds;
  v9 = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v9,
           (const MethodInfo_2004618 *)Method_System_Array_FindIndex_int___);
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