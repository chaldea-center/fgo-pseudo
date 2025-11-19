void EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6385 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6385 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  if ( (byte_4CB6383 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CB6383 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_31394F0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v7; // x1
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v9; // x20

  if ( (byte_4CB6384 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_FindIndex_int___);
    sub_1C6BA08(&System_Predicate_int__TypeInfo);
    sub_1C6BA08(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__);
    sub_1C6BA08(&EventRaceEntity___c__DisplayClass12_0_TypeInfo);
    byte_4CB6384 = 1;
  }
  v5 = sub_1C6BC54(EventRaceEntity___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = groupId;
  groupIds = this->fields.groupIds;
  v9 = (System_Predicate_int__o *)sub_1C6BC54(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    0);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v9,
           (const MethodInfo_3241CB8 *)Method_System_Array_FindIndex_int___);
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