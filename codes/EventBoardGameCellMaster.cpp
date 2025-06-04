void __fastcall EventBoardGameCellMaster___ctor(EventBoardGameCellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01EB3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__, method);
    byte_4B01EB3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    312,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventBoardGameCellMaster__GetBoardSquareCount(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_4B01EB5 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__getEntityList__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBoardGameCellEntity__get_Count__, v5);
    sub_1BC3008(&Method_ObservableCollectionExtensions_FindAll_EventBoardGameCellEntity___, v6);
    sub_1BC3008(&System_Predicate_EventBoardGameCellEntity__TypeInfo, v7);
    sub_1BC3008(&Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__, v8);
    sub_1BC3008(&EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo, v9);
    byte_4B01EB5 = 1;
  }
  v10 = sub_1BC3254(EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = eventId,
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v14 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_EventBoardGameCellEntity__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v10,
          Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__,
          0LL),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v14,
                        (const MethodInfo_308C174 *)Method_ObservableCollectionExtensions_FindAll_EventBoardGameCellEntity___)) == 0LL) )
  {
    sub_1BC3264(All_object, v12);
  }
  return All_object->fields._size;
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameCellEntity_o *__fastcall EventBoardGameCellMaster__GetEntity(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B01EB1 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B01EB1 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&cellId);
  return (EventBoardGameCellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_32B3B28 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameCellEntity_o *__fastcall EventBoardGameCellMaster__GetEntityFromEventIdAndCellId(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  EventBoardGameCellEntity_o *v24; // x22
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4B01EB4 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_EventBoardGameCellEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__getEntityList__, v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_EventBoardGameCellEntity__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4B01EB4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_EventBoardGameCellEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventBoardGameCellEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EventBoardGameCellEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_EventBoardGameCellEntity__TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v24 = (EventBoardGameCellEntity_o *)v22;
    if ( !v22 )
      sub_1BC3264(0LL, v23);
    if ( *(_DWORD *)(v22 + 16) == eventId && *(_DWORD *)(v22 + 20) == cellId )
      goto LABEL_23;
  }
  v24 = 0LL;
LABEL_23:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_27;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_27:
    v28 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v24;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBoardGameCellMaster__TryGetEntity(
        EventBoardGameCellMaster_o *this,
        EventBoardGameCellEntity_o **entity,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B01EB2 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__,
      entity);
    byte_4B01EB2 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
}


void __fastcall EventBoardGameCellMaster___c__DisplayClass5_0___ctor(
        EventBoardGameCellMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBoardGameCellMaster___c__DisplayClass5_0___GetBoardSquareCount_b__0(
        EventBoardGameCellMaster___c__DisplayClass5_0_o *this,
        EventBoardGameCellEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return ent->fields.eventId == this->fields.eventId;
}