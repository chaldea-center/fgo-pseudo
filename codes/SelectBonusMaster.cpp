void SelectBonusMaster___ctor(SelectBonusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57588 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string___ctor__);
    byte_4C57588 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    526,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string___ctor__);
}


SelectBonusEntity_o *SelectBonusMaster__GetEntity(
        SelectBonusMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C57589 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__GetEntity__);
    byte_4C57589 = 1;
  }
  PK = (Il2CppObject *)SelectBonusEntity__CreatePK(eventId, idx, 0);
  return (SelectBonusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_33B7A10 *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__GetEntity__);
}


System_Collections_Generic_List_SelectBonusEntity__o *SelectBonusMaster__GetSelectBonusEntitiesByEventId(
        SelectBonusMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C57587 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_OfType_SelectBonusEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_SelectBonusEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_SelectBonusEntity___);
    sub_1C3E564(&System_Func_SelectBonusEntity__bool__TypeInfo);
    sub_1C3E564(&Method_SelectBonusMaster___c__DisplayClass0_0__GetSelectBonusEntitiesByEventId_b__0__);
    sub_1C3E564(&SelectBonusMaster___c__DisplayClass0_0_TypeInfo);
    byte_4C57587 = 1;
  }
  v5 = sub_1C3E7B0(SelectBonusMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_DWORD *)(v5 + 16) = eventId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_3128D28 *)Method_System_Linq_Enumerable_OfType_SelectBonusEntity___);
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_SelectBonusEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SelectBonusMaster___c__DisplayClass0_0__GetSelectBonusEntitiesByEventId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_SelectBonusEntity___);
  return (System_Collections_Generic_List_SelectBonusEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v10,
                                                                   (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_SelectBonusEntity___);
}


bool SelectBonusMaster__TryGetEntity(
        SelectBonusMaster_o *this,
        SelectBonusEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C5758A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__TryGetEntity__);
    byte_4C5758A = 1;
  }
  PK = (Il2CppObject *)SelectBonusEntity__CreatePK(eventId, idx, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__TryGetEntity__);
}


void SelectBonusMaster___c__DisplayClass0_0___ctor(
        SelectBonusMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectBonusMaster___c__DisplayClass0_0___GetSelectBonusEntitiesByEventId_b__0(
        SelectBonusMaster___c__DisplayClass0_0_o *this,
        SelectBonusEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3E7C0(this, 0);
  return e->fields.eventId == this->fields.eventId;
}