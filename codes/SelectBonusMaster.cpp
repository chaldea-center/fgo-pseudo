void __fastcall SelectBonusMaster___ctor(SelectBonusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4EC48 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string___ctor__, method);
    byte_4A4EC48 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    526,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SelectBonusEntity_o *__fastcall SelectBonusMaster__GetEntity(
        SelectBonusMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4EC49 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4A4EC49 = 1;
  }
  PK = (Il2CppObject *)SelectBonusEntity__CreatePK(eventId, idx, 0LL);
  return (SelectBonusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_3218D38 *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SelectBonusEntity__o *__fastcall SelectBonusMaster__GetSelectBonusEntitiesByEventId(
        SelectBonusMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4A4EC47 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_OfType_SelectBonusEntity___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_SelectBonusEntity___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_SelectBonusEntity___, v6);
    sub_1B863B8(&System_Func_SelectBonusEntity__bool__TypeInfo, v7);
    sub_1B863B8(&Method_SelectBonusMaster___c__DisplayClass0_0__GetSelectBonusEntitiesByEventId_b__0__, v8);
    sub_1B863B8(&SelectBonusMaster___c__DisplayClass0_0_TypeInfo, v9);
    byte_4A4EC47 = 1;
  }
  v10 = sub_1B86604(SelectBonusMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B86614(v11, v12);
  *(_DWORD *)(v10 + 16) = eventId;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F9A6B0 *)Method_System_Linq_Enumerable_OfType_SelectBonusEntity___);
  v14 = (System_Func_object__bool__o *)sub_1B86604(System_Func_SelectBonusEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_SelectBonusMaster___c__DisplayClass0_0__GetSelectBonusEntitiesByEventId_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_SelectBonusEntity___);
  return (System_Collections_Generic_List_SelectBonusEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v15,
                                                                   (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_SelectBonusEntity___);
}


bool __fastcall SelectBonusMaster__TryGetEntity(
        SelectBonusMaster_o *this,
        SelectBonusEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4EC4A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__TryGetEntity__, entity);
    byte_4A4EC4A = 1;
  }
  PK = (Il2CppObject *)SelectBonusEntity__CreatePK(eventId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__TryGetEntity__);
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
    sub_1B86614(this, 0LL);
  return e->fields.eventId == this->fields.eventId;
}