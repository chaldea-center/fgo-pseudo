void __fastcall EventBoardGameCellMaster___ctor(EventBoardGameCellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B00F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
    byte_4A5B00F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    306,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
}


int32_t __fastcall EventBoardGameCellMaster__GetBoardSquareCount(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5B011 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_ObservableCollectionExtensions_FindAll_DataEntityBase___);
    sub_1B885B0(&System_Predicate_DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__);
    sub_1B885B0(&EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
    byte_4A5B011 = 1;
  }
  v5 = sub_1B887FC(EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = eventId,
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DataEntityBase__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__,
          0LL),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v9,
                        (const MethodInfo_2F04BAC *)Method_ObservableCollectionExtensions_FindAll_DataEntityBase___)) == 0LL) )
  {
    sub_1B8880C(All_object, v7);
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

  if ( (byte_4A5B00D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
    byte_4A5B00D = 1;
  }
  PK = (Il2CppObject *)EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&cellId);
  return (EventBoardGameCellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameCellEntity_o *__fastcall EventBoardGameCellMaster__GetEntityFromEventIdAndCellId(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  EventBoardGameCellEntity_o *v18; // x0
  __int64 v19; // x1
  EventBoardGameCellEntity_o *v20; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4A5B010 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventBoardGameCellEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B010 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventBoardGameCellEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                          Enumerator,
                                          *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(EventBoardGameCellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventBoardGameCellEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBoardGameCellEntity_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_33:
      sub_1B8880C(v18, v19);
    }
    if ( v18->fields.eventId == eventId && v18->fields.cellId == cellId )
      goto LABEL_25;
  }
  v20 = 0LL;
LABEL_25:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v20;
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

  if ( (byte_4A5B00E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
    byte_4A5B00E = 1;
  }
  PK = (Il2CppObject *)EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
}


void __fastcall EventBoardGameCellMaster___c__DisplayClass5_0___ctor(
        EventBoardGameCellMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventBoardGameCellMaster___c__DisplayClass5_0___GetBoardSquareCount_b__0(
        EventBoardGameCellMaster___c__DisplayClass5_0_o *this,
        DataEntityBase_o *ent,
        const MethodInfo *method)
{
  EventBoardGameCellMaster___c__DisplayClass5_0_o *v4; // x20
  __int64 methodPtr_low; // x10

  v4 = this;
  if ( (byte_4A5B012 & 1) == 0 )
  {
    this = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_1B885B0(&EventBoardGameCellEntity_TypeInfo);
    byte_4A5B012 = 1;
  }
  if ( !ent
    || (methodPtr_low = LOBYTE(EventBoardGameCellEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventBoardGameCellEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBoardGameCellEntity_TypeInfo )
  {
    sub_1B8880C(this, ent);
  }
  return LODWORD(ent[1].klass) == v4->fields.eventId;
}