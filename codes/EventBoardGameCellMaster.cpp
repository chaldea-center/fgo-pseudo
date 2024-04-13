void __fastcall EventBoardGameCellMaster___ctor(EventBoardGameCellMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB888 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB888 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    305,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string___ctor__);
}


int32_t __fastcall EventBoardGameCellMaster__GetBoardSquareCount(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  EventBoardGameCellMaster___c__DisplayClass5_0_o *v21; // x21
  System_Collections_Generic_List_T__o *All_object; // x0
  __int64 v23; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x20

  if ( (byte_42EB88A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_DataEntityBase__get_Count__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ObservableCollectionExtensions_FindAll_DataEntityBase___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_DataEntityBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo, v18, v19, v20);
    byte_42EB88A = 1;
  }
  v21 = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_B5D694(EventBoardGameCellMaster___c__DisplayClass5_0_TypeInfo);
  EventBoardGameCellMaster___c__DisplayClass5_0___ctor(v21, 0LL);
  if ( !v21
    || (v21->fields.eventId = eventId,
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DataEntityBase__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v25,
          (Il2CppObject *)v21,
          Method_EventBoardGameCellMaster___c__DisplayClass5_0__GetBoardSquareCount_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_DataEntityBase___ctor__),
        (All_object = ObservableCollectionExtensions__FindAll_object_(
                        list,
                        (System_Predicate_T__o *)v25,
                        (const MethodInfo_1E66D10 *)Method_ObservableCollectionExtensions_FindAll_DataEntityBase___)) == 0LL) )
  {
    sub_B5D69C(All_object, v23);
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

  if ( (byte_42EB886 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__,
      eventId,
      cellId,
      method);
    byte_42EB886 = 1;
  }
  PK = EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&cellId);
  return (EventBoardGameCellEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameCellEntity_o *__fastcall EventBoardGameCellMaster__GetEntityFromEventIdAndCellId(
        EventBoardGameCellMaster_o *this,
        int32_t eventId,
        int32_t cellId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  EventBoardGameCellEntity_o *v31; // x0
  __int64 v32; // x1
  EventBoardGameCellEntity_o *v33; // x22
  __int64 v34; // x9
  int v35; // w8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+0h] [xbp-50h]

  if ( (byte_42EB889 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      cellId,
      method);
    sub_B5D5C4(&EventBoardGameCellEntity_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    byte_42EB889 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v31 = (EventBoardGameCellEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                                          Enumerator,
                                          *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      goto LABEL_35;
    v34 = *(&EventBoardGameCellEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v31->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (EventBoardGameCellEntity_c *)v31->klass->_2.typeHierarchy[v34 - 1] != EventBoardGameCellEntity_TypeInfo )
    {
      sub_B5D990(v31);
LABEL_35:
      sub_B5D69C(v31, v32);
    }
    if ( v31->fields.eventId == eventId && v31->fields.cellId == cellId )
    {
      v35 = 70;
      goto LABEL_25;
    }
  }
  v33 = 0LL;
  v35 = 68;
LABEL_25:
  v41 = v35;
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_29:
    v39 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  if ( v41 == 68 )
    return 0LL;
  return v33;
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

  if ( (byte_42EB887 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&cellId);
    byte_42EB887 = 1;
  }
  PK = EventBoardGameCellEntity__CreatePK(eventId, cellId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventBoardGameCellMaster__EventBoardGameCellEntity__string__TryGetEntity__);
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
  __int64 v3; // x3
  EventBoardGameCellMaster___c__DisplayClass5_0_o *v5; // x20
  __int64 v6; // x10

  v5 = this;
  if ( (byte_42E64E8 & 1) == 0 )
  {
    this = (EventBoardGameCellMaster___c__DisplayClass5_0_o *)sub_B5D5C4(
                                                                &EventBoardGameCellEntity_TypeInfo,
                                                                (_DWORD)ent,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E64E8 = 1;
  }
  if ( !ent
    || (v6 = *(&EventBoardGameCellEntity_TypeInfo->_2.bitflags2 + 1), *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventBoardGameCellEntity_c *)ent->klass->_2.typeHierarchy[v6 - 1] != EventBoardGameCellEntity_TypeInfo )
  {
    sub_B5D69C(this, ent);
  }
  return LODWORD(ent[1].klass) == v5->fields.eventId;
}