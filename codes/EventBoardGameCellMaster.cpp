void __fastcall EventBoardGameCellMaster___ctor(EventBoardGameCellMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2669 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
    byte_42B2669 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    305,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
}


int32_t __fastcall EventBoardGameCellMaster__GetBoardSquareCount(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventBoardGameCellMaster___c__DisplayClass5_0_o *v5; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42B266B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__);
    sub_B52984(&Method_ObservableCollectionExtensions_FindAll_DataEntityBase___);
    sub_B52984(&Method_System_Predicate_DataEntityBase___ctor__);
    sub_B52984(&System_Predicate_DataEntityBase__TypeInfo);
    sub_B52984(&Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__);
    sub_B52984(&EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
    byte_42B266B = 1;
  }
  v5 = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_B52A54(EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
  EventBoardGameCellMaster___c__DisplayClass5_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.eventId = eventId,
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_DataEntityBase__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_DataEntityBase___ctor__),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v9,
                        (const MethodInfo_1F71BF0 *)Method_ObservableCollectionExtensions_FindAll_DataEntityBase___)) == 0LL) )
  {
    sub_B52A5C(All_object, v7);
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

  if ( (byte_42B2667 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
    byte_42B2667 = 1;
  }
  PK = EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&cellId);
  return (EventBoardGameCellEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameCellEntity_o *__fastcall EventBoardGameCellMaster__GetEntityFromEventIdAndCellId(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  EventBoardGameCellEntity_o *v19; // x0
  __int64 v20; // x1
  EventBoardGameCellEntity_o *v21; // x22
  __int64 v22; // x9
  int v23; // w8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-50h]

  if ( (byte_42B266A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&EventBoardGameCellEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B266A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v9);
    }
    v19 = (EventBoardGameCellEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                          Enumerator,
                                          *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_35;
    v22 = *(&EventBoardGameCellEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (EventBoardGameCellEntity_c *)v19->klass->_2.typeHierarchy[v22 - 1] != EventBoardGameCellEntity_TypeInfo )
    {
      sub_B52D50(v19);
LABEL_35:
      sub_B52A5C(v19, v20);
    }
    if ( v19->fields.eventId == eventId && v19->fields.cellId == cellId )
    {
      v23 = 70;
      goto LABEL_25;
    }
  }
  v21 = 0LL;
  v23 = 68;
LABEL_25:
  v29 = v23;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v9);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 68 )
    return 0LL;
  return v21;
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

  if ( (byte_42B2668 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
    byte_42B2668 = 1;
  }
  PK = EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
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
  if ( (byte_42AD8AA & 1) == 0 )
  {
    this = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_B52984(&EventBoardGameCellEntity_TypeInfo);
    byte_42AD8AA = 1;
  }
  if ( !ent
    || (v5 = *(&EventBoardGameCellEntity_TypeInfo->_2.bitflags2 + 1), *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5)
    || (EventBoardGameCellEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] != EventBoardGameCellEntity_TypeInfo )
  {
    sub_B52A5C(this, ent);
  }
  return LODWORD(ent[1].klass) == v4->fields.eventId;
}