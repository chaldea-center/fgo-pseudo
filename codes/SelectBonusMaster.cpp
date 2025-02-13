void __fastcall SelectBonusMaster___ctor(SelectBonusMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCBBE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string___ctor__);
    byte_4BDCBBE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    523,
    (const MethodInfo_325E55C *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string___ctor__);
}


SelectBonusEntity_o *__fastcall SelectBonusMaster__GetEntity(
        SelectBonusMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDCBBF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__GetEntity__);
    byte_4BDCBBF = 1;
  }
  PK = (Il2CppObject *)SelectBonusEntity__CreatePK(eventId, idx, 0LL);
  return (SelectBonusEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_3260880 *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__GetEntity__);
}


System_Collections_Generic_List_SelectBonusEntity__o *__fastcall SelectBonusMaster__GetSelectBonusEntitiesByEventId(
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

  if ( (byte_4BDCBBD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_SelectBonusEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_SelectBonusEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_SelectBonusEntity___);
    sub_1C21E38(&System_Func_SelectBonusEntity__bool__TypeInfo);
    sub_1C21E38(&Method_SelectBonusMaster___c__DisplayClass0_0__GetSelectBonusEntitiesByEventId_b__0__);
    sub_1C21E38(&SelectBonusMaster___c__DisplayClass0_0_TypeInfo);
    byte_4BDCBBD = 1;
  }
  v5 = sub_1C22084(SelectBonusMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_DWORD *)(v5 + 16) = eventId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_SelectBonusEntity___);
  v9 = (System_Func_object__bool__o *)sub_1C22084(System_Func_SelectBonusEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SelectBonusMaster___c__DisplayClass0_0__GetSelectBonusEntitiesByEventId_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_SelectBonusEntity___);
  return (System_Collections_Generic_List_SelectBonusEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v10,
                                                                   (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_SelectBonusEntity___);
}


bool __fastcall SelectBonusMaster__TryGetEntity(
        SelectBonusMaster_o *this,
        SelectBonusEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDCBC0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__TryGetEntity__);
    byte_4BDCBC0 = 1;
  }
  PK = (Il2CppObject *)SelectBonusEntity__CreatePK(eventId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_SelectBonusMaster__SelectBonusEntity__string__TryGetEntity__);
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
    sub_1C22094(this, 0LL);
  return e->fields.eventId == this->fields.eventId;
}