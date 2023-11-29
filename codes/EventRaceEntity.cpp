void __fastcall EventRaceEntity___ctor(EventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FACA5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FACA5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventRaceEntity__CreatePK(int32_t eventId, int32_t termId, const MethodInfo *method)
{
  if ( (byte_40FACA3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&termId);
    byte_40FACA3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           termId,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventRaceEntity___c__DisplayClass12_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Int32_array *groupIds; // x19
  System_Predicate_int__o *v17; // x20

  if ( (byte_40FACA4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindIndex_int___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v7);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v8);
    sub_B16FFC(&Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__, v9);
    sub_B16FFC(&EventRaceEntity___c__DisplayClass12_0_TypeInfo, v10);
    byte_40FACA4 = 1;
  }
  v11 = (EventRaceEntity___c__DisplayClass12_0_o *)sub_B170CC(
                                                     EventRaceEntity___c__DisplayClass12_0_TypeInfo,
                                                     *(_QWORD *)&groupId,
                                                     method,
                                                     v3,
                                                     v4);
  EventRaceEntity___c__DisplayClass12_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.groupId = groupId;
  groupIds = this->fields.groupIds;
  v17 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v12, v13, v14, v15);
  System_Predicate_int____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_EventRaceEntity___c__DisplayClass12_0__GetGroupIdx_b__0__,
    (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
  return System_Array__FindIndex_int_(
           groupIds,
           (System_Predicate_T__o *)v17,
           (const MethodInfo_2044748 *)Method_System_Array_FindIndex_int___);
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