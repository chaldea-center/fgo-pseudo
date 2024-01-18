void __fastcall EventBoardGameCellMaster___ctor(EventBoardGameCellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A1FB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__, method);
    byte_418A1FB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    304,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
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
  EventBoardGameCellMaster___c__DisplayClass5_0_o *v10; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_418A1FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_ObservableCollectionExtensions_FindAll_DataEntityBase___, v5);
    sub_B2C35C(&Method_System_Predicate_DataEntityBase___ctor__, v6);
    sub_B2C35C(&System_Predicate_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__, v8);
    sub_B2C35C(&EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo, v9);
    byte_418A1FD = 1;
  }
  v10 = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_B2C42C(EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
  EventBoardGameCellMaster___c__DisplayClass5_0___ctor(v10, 0LL);
  if ( !v10
    || (v10->fields.eventId = eventId,
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DataEntityBase__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v10,
          Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_DataEntityBase___ctor__),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v14,
                        (const MethodInfo_209682C *)Method_ObservableCollectionExtensions_FindAll_DataEntityBase___)) == 0LL) )
  {
    sub_B2C434(All_object, v12);
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
  System_String_o *PK; // x1

  if ( (byte_418A1F9 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A1F9 = 1;
  }
  PK = EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&cellId);
  return (EventBoardGameCellEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  EventBoardGameCellEntity_o *v23; // x0
  __int64 v24; // x1
  EventBoardGameCellEntity_o *v25; // x22
  __int64 v26; // x9
  int v27; // w8
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int v33; // [xsp+0h] [xbp-50h]

  if ( (byte_418A1FC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&EventBoardGameCellEntity_TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_418A1FC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v13);
    }
    v23 = (EventBoardGameCellEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                          Enumerator,
                                          *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( !v23 )
      goto LABEL_35;
    v26 = *(&EventBoardGameCellEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (EventBoardGameCellEntity_c *)v23->klass->_2.typeHierarchy[v26 - 1] != EventBoardGameCellEntity_TypeInfo )
    {
      sub_B2C728(v23);
LABEL_35:
      sub_B2C434(v23, v24);
    }
    if ( v23->fields.eventId == eventId && v23->fields.cellId == cellId )
    {
      v27 = 70;
      goto LABEL_25;
    }
  }
  v25 = 0LL;
  v27 = 68;
LABEL_25:
  v33 = v27;
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( v33 == 68 )
    return 0LL;
  return v25;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBoardGameCellMaster__TryGetEntity(
        EventBoardGameCellMaster_o *this,
        EventBoardGameCellEntity_o **entity,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A1FA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__,
      entity);
    byte_418A1FA = 1;
  }
  PK = EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
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
  __int64 v5; // x10

  v4 = this;
  if ( (byte_4184AB5 & 1) == 0 )
  {
    this = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_B2C35C(&EventBoardGameCellEntity_TypeInfo, ent);
    byte_4184AB5 = 1;
  }
  if ( !ent
    || (v5 = *(&EventBoardGameCellEntity_TypeInfo->_2.bitflags2 + 1), *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (EventBoardGameCellEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] != EventBoardGameCellEntity_TypeInfo )
  {
    sub_B2C434(this, ent);
  }
  return LODWORD(ent[1].klass) == v4->fields.eventId;
}