void EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37A74 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37A74 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  if ( (byte_4C37A72 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C37A72 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventRaceEntity__CreatePrimaryKey(EventRaceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRaceEntity__CreatePK(this->fields.eventId, this->fields.termId, v2);
}


int32_t EventRaceEntity__GetGroupIdx(EventRaceEntity_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v8; // x20

  if ( (byte_4C37A73 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindIndex_int___);
    sub_1C32C20(&System_Predicate_int__TypeInfo);
    sub_1C32C20(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__);
    sub_1C32C20(&EventRaceEntity___c__DisplayClass12_0_TypeInfo);
    byte_4C37A73 = 1;
  }
  v5 = sub_1C32E6C(EventRaceEntity___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = groupId;
  groupIds = this->fields.groupIds;
  v8 = (System_Predicate_int__o *)sub_1C32E6C(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    0);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v8,
           (const MethodInfo_31E2FAC *)Method_System_Array_FindIndex_int___);
}


void EventRaceEntity___c__DisplayClass12_0___ctor(
        EventRaceEntity___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRaceEntity___c__DisplayClass12_0___GetGroupIdx_b__0(
        EventRaceEntity___c__DisplayClass12_0_o *this,
        int32_t obj,
        const MethodInfo *method)
{
  return this->fields.groupId == obj;
}