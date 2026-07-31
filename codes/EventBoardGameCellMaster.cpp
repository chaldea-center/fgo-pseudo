void EventBoardGameCellMaster___ctor(EventBoardGameCellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938512 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
    byte_5938512 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    314,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
}


int32_t EventBoardGameCellMaster__GetBoardSquareCount(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5938514 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__getEntityList__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBoardGameCellEntity__get_Count__);
    sub_21FFC50(&Method_ObservableCollectionExtensions_FindAll_EventBoardGameCellEntity___);
    sub_21FFC50(&System_Predicate_EventBoardGameCellEntity__TypeInfo);
    sub_21FFC50(&Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__);
    sub_21FFC50(&EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
    byte_5938514 = 1;
  }
  v5 = sub_21FFEBC(EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        *(_DWORD *)(v5 + 16) = eventId,
        v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventBoardGameCellEntity__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__,
          0),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v9,
                        (const MethodInfo_38C1308 *)Method_ObservableCollectionExtensions_FindAll_EventBoardGameCellEntity___)) == 0) )
  {
    sub_21FFECC(All_object, v7);
  }
  return All_object->fields._size;
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameCellEntity_o *EventBoardGameCellMaster__GetEntity(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938510 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
    byte_5938510 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&cellId);
  return (EventBoardGameCellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameCellEntity_o *EventBoardGameCellMaster__GetEntityFromEventIdAndCellId(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  EventBoardGameCellEntity_o *v23; // x21
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-38h]

  if ( (byte_5938513 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventBoardGameCellEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__getEntityList__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventBoardGameCellEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938513 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_EventBoardGameCellEntity__GetEnumerator__);
  v29 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v29 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v29 )
      sub_21FFECC(v15, v16);
    v17 = v29->klass;
    v18 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventBoardGameCellEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_EventBoardGameCellEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v29, System_Collections_Generic_IEnumerator_EventBoardGameCellEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v29,
            *(_QWORD *)(v20 + 8));
    v23 = (EventBoardGameCellEntity_o *)v21;
    if ( !v21 )
      sub_21FFECC(0, v22);
    if ( *(_DWORD *)(v21 + 16) == eventId && *(_DWORD *)(v21 + 20) == cellId )
      goto LABEL_26;
  }
  v23 = 0;
LABEL_26:
  if ( v29 )
  {
    v24 = v29->klass;
    v25 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_31;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_31:
      v27 = sub_2237E2C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v29, *(_QWORD *)(v27 + 8));
  }
  return v23;
}


// local variable allocation has failed, the output may be wrong!
bool EventBoardGameCellMaster__TryGetEntity(
        EventBoardGameCellMaster_o *this,
        EventBoardGameCellEntity_o **entity,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938511 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
    byte_5938511 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
}


void EventBoardGameCellMaster___c__DisplayClass5_0___ctor(
        EventBoardGameCellMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventBoardGameCellMaster___c__DisplayClass5_0___GetBoardSquareCount_b__0(
        EventBoardGameCellMaster___c__DisplayClass5_0_o *this,
        EventBoardGameCellEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.eventId == this->fields.eventId;
}