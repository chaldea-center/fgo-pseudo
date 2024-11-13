void __fastcall EventBoardGameCellMaster___ctor(EventBoardGameCellMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1609C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__, method, v2);
    byte_4B1609C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    306,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventBoardGameCellMaster__GetBoardSquareCount(
        EventBoardGameCellMaster_o *this,
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
  EventBoardGameCellMaster___c__DisplayClass5_0_o *v14; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_object__o *v20; // x20

  if ( (byte_4B1609E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_FindAll_DataEntityBase___, v6, v7);
    sub_1BCA7E0(&System_Predicate_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__, v10, v11);
    sub_1BCA7E0(&EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo, v12, v13);
    byte_4B1609E = 1;
  }
  v14 = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_1BCAA2C(
                                                             EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo,
                                                             *(_QWORD *)&eventId,
                                                             method,
                                                             v3);
  EventBoardGameCellMaster___c__DisplayClass5_0___ctor(v14, 0LL);
  if ( !v14
    || (v14->fields.eventId = eventId,
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v20 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_DataEntityBase__TypeInfo, v16, v17, v18),
        System_Predicate_object____ctor(
          v20,
          (Il2CppObject *)v14,
          Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__,
          0LL),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v20,
                        (const MethodInfo_2F98AEC *)Method_ObservableCollectionExtensions_FindAll_DataEntityBase___)) == 0LL) )
  {
    sub_1BCAA3C(All_object, v16);
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

  if ( (byte_4B1609A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&cellId);
    byte_4B1609A = 1;
  }
  PK = (Il2CppObject *)EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&cellId);
  return (EventBoardGameCellEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameCellEntity_o *__fastcall EventBoardGameCellMaster__GetEntityFromEventIdAndCellId(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  EventBoardGameCellEntity_o *v26; // x0
  __int64 v27; // x1
  EventBoardGameCellEntity_o *v28; // x22
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B1609D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&cellId);
    sub_1BCA7E0(&EventBoardGameCellEntity_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    byte_4B1609D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (EventBoardGameCellEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                          Enumerator,
                                          *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(EventBoardGameCellEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v26->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventBoardGameCellEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBoardGameCellEntity_TypeInfo )
    {
      sub_1BCACFC(v26);
LABEL_33:
      sub_1BCAA3C(v26, v27);
    }
    if ( v26->fields.eventId == eventId && v26->fields.cellId == cellId )
      goto LABEL_25;
  }
  v28 = 0LL;
LABEL_25:
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_29;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_29:
    v33 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v28;
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

  if ( (byte_4B1609B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B1609B = 1;
  }
  PK = (Il2CppObject *)EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
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
  if ( (byte_4B1609F & 1) == 0 )
  {
    this = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_1BCA7E0(
                                                                &EventBoardGameCellEntity_TypeInfo,
                                                                ent,
                                                                method);
    byte_4B1609F = 1;
  }
  if ( !ent
    || (methodPtr_low = LOBYTE(EventBoardGameCellEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventBoardGameCellEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBoardGameCellEntity_TypeInfo )
  {
    sub_1BCAA3C(this, ent);
  }
  return LODWORD(ent[1].klass) == v4->fields.eventId;
}