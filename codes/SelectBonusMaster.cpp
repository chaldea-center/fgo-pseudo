void __fastcall SelectBonusMaster___ctor(SelectBonusMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1683A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string___ctor__, method, v2);
    byte_4B1683A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    519,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SelectBonusEntity_o *__fastcall SelectBonusMaster__GetEntity(
        SelectBonusMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1683B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&idx);
    byte_4B1683B = 1;
  }
  PK = (Il2CppObject *)SelectBonusEntity__CreatePK(eventId, idx, 0LL);
  return (SelectBonusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31B3198 *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SelectBonusEntity__o *__fastcall SelectBonusMaster__GetSelectBonusEntitiesByEventId(
        SelectBonusMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Func_object__bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B16839 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_SelectBonusEntity___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_SelectBonusEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_SelectBonusEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_SelectBonusEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SelectBonusMaster___c__DisplayClass0_0__GetSelectBonusEntitiesByEventId_b__0__, v12, v13);
    sub_1BCA7E0(&SelectBonusMaster___c__DisplayClass0_0_TypeInfo, v14, v15);
    byte_4B16839 = 1;
  }
  v16 = sub_1BCAA2C(SelectBonusMaster___c__DisplayClass0_0_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  *(_DWORD *)(v16 + 16) = eventId;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_SelectBonusEntity___);
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_SelectBonusEntity__bool__TypeInfo, v20, v21, v22);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_SelectBonusMaster___c__DisplayClass0_0__GetSelectBonusEntitiesByEventId_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_SelectBonusEntity___);
  return (System_Collections_Generic_List_SelectBonusEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v24,
                                                                   (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_SelectBonusEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SelectBonusMaster__TryGetEntity(
        SelectBonusMaster_o *this,
        SelectBonusEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1683C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B1683C = 1;
  }
  PK = (Il2CppObject *)SelectBonusEntity__CreatePK(eventId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__TryGetEntity__);
}


void __fastcall SelectBonusMaster___c__DisplayClass0_0___ctor(
        SelectBonusMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SelectBonusMaster___c__DisplayClass0_0___GetSelectBonusEntitiesByEventId_b__0(
        SelectBonusMaster___c__DisplayClass0_0_o *this,
        SelectBonusEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.eventId == this->fields.eventId;
}