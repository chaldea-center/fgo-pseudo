void __fastcall EventFortificationMaster___ctor(EventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21F07 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__, method);
    byte_4C21F07 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    391,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationEntity_o *__fastcall EventFortificationMaster__GetEntity(
        EventFortificationMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C21F08 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4C21F08 = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_329F900 *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationMaster__IsFortificationEvent(
        EventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v15; // w21
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4C21F0B & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4C21F0B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v15 & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    if ( v20 && *(_DWORD *)(v20 + 16) == eventId )
      goto LABEL_22;
  }
  v15 = 0;
LABEL_22:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_26;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_26:
    v24 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v15 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationMaster__TryGetEntity(
        EventFortificationMaster_o *this,
        EventFortificationEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C21F09 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__,
      entity);
    byte_4C21F09 = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationMaster__TryGetEntityList(
        EventFortificationMaster_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o **entities,
        int32_t evenId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x22
  Il2CppObject *Instance; // x0
  __int64 v45; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v47; // x1
  System_Collections_Generic_List_object__o *v48; // x0
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0

  if ( (byte_4C21F0A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__, entities);
    sub_1C3B764(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v7);
    sub_1C3B764(&System_IDisposable_TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo, v9);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationEntity__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationEntity___ctor__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v13);
    sub_1C3B764(&System_Collections_Generic_List_EventFortificationEntity__TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4C21F0A = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationEntity__o *)v16;
  sub_1C3B708((PartyOrganizationUtility_o *)entities, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_EventFortificationEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_EventFortificationEntity__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
            Enumerator,
            *(_QWORD *)(v34 + 8));
    v43 = v35;
    if ( !v35 )
      sub_1C3B9C0(0LL, v36);
    if ( *(_DWORD *)(v35 + 16) == evenId )
    {
      if ( !*(_DWORD *)(v35 + 60) )
        goto LABEL_24;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C3B9C0(0LL, v45);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !MasterData_object )
        sub_1C3B9C0(0LL, v47);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, *(_DWORD *)(v43 + 60), 0LL, 0, 0LL) )
      {
LABEL_24:
        v48 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1C3B9C0(0LL, v36);
        items = v48->fields._items;
        v50 = Method_System_Collections_Generic_List_EventFortificationEntity__Add__;
        ++v48->fields._version;
        if ( !items )
          sub_1C3B9C0(v48, v36);
        size = v48->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v48,
            (Il2CppObject *)v43,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &items->obj.klass + size;
          v48->fields._size = size + 1;
          v52[4] = (Il2CppClass *)v43;
          sub_1C3B708((PartyOrganizationUtility_o *)(v52 + 4), v43, v37, v38, v39, v40, v41, v42);
        }
      }
    }
  }
  v53 = Enumerator->klass;
  v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_33;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_33:
    v56 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                             Enumerator,
                                                             *(_QWORD *)(v56 + 8));
  if ( !*entities )
LABEL_42:
    sub_1C3B9C0(list, v23);
  return (*entities)->fields._size > 0;
}