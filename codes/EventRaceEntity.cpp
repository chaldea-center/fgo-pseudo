void __fastcall EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8E1D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8E1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, termId, (_DWORD)method, v3);
    byte_42E8E1B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventRaceEntity__CreatePrimaryKey(EventRaceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventRaceEntity__CreatePK(this->fields.eventId, this->fields.termId, v2);
}


int32_t __fastcall EventRaceEntity__GetGroupIdx(EventRaceEntity_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  EventRaceEntity___c__DisplayClass12_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v22; // x20

  if ( (byte_42E8E1C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_int___, groupId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventRaceEntity___c__DisplayClass12_0_TypeInfo, v15, v16, v17);
    byte_42E8E1C = 1;
  }
  v18 = (EventRaceEntity___c__DisplayClass12_0_o *)sub_B5D694(EventRaceEntity___c__DisplayClass12_0_TypeInfo);
  EventRaceEntity___c__DisplayClass12_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.groupId = groupId;
  groupIds = this->fields.groupIds;
  v22 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v22,
           (const MethodInfo_1FC0954 *)Method_System_Array_FindIndex_int___);
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