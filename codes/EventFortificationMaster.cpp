void __fastcall EventFortificationMaster___ctor(EventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B6B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__, method);
    byte_4B66B6B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    389,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationEntity_o *__fastcall EventFortificationMaster__GetEntity(
        EventFortificationMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66B6C & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66B6C = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
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
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v16; // w21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  _DWORD *v21; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4B66B6F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&EventFortificationEntity_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4B66B6F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v16 & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      methodPtr_low = LOBYTE(EventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) == EventFortificationEntity_TypeInfo
        && v21[4] == eventId )
      {
        goto LABEL_24;
      }
    }
  }
  v16 = 0;
LABEL_24:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v16 & 1;
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

  if ( (byte_4B66B6D & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__,
      entity);
    byte_4B66B6D = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
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
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  _DWORD *v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x22
  __int64 methodPtr_low; // x10
  Il2CppObject *Instance; // x0
  __int64 v47; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_object__o *v50; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0

  if ( (byte_4B66B6E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entities);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v7);
    sub_1BE4ACC(&EventFortificationEntity_TypeInfo, v8);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventFortificationEntity__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventFortificationEntity___ctor__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_EventFortificationEntity__TypeInfo, v15);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B66B6E = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationEntity__o *)v17;
  sub_1BE4A70((PartyOrganizationUtility_o *)entities, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v36 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                      Enumerator,
                      *(_QWORD *)(v35 + 8));
    v44 = (int64_t)v36;
    if ( !v36
      || (methodPtr_low = LOBYTE(EventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v36 + 304LL) < (unsigned int)methodPtr_low)
      || *(EventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * methodPtr_low - 8) != EventFortificationEntity_TypeInfo )
    {
      sub_1BE4D28(v36, v37);
    }
    if ( v36[4] == evenId )
    {
      if ( !v36[15] )
        goto LABEL_26;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1BE4D28(0LL, v47);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !MasterData_object )
        sub_1BE4D28(0LL, v49);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, *(_DWORD *)(v44 + 60), 0LL, 0, 0LL) )
      {
LABEL_26:
        v50 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1BE4D28(0LL, v37);
        items = v50->fields._items;
        v52 = Method_System_Collections_Generic_List_EventFortificationEntity__Add__;
        ++v50->fields._version;
        if ( !items )
          sub_1BE4D28(v50, v37);
        size = v50->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v50,
            (Il2CppObject *)v44,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v50->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v44;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v54 + 4), v44, v38, v39, v40, v41, v42, v43);
        }
      }
    }
  }
  v55 = Enumerator->klass;
  v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_35;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_35:
    v58 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                             Enumerator,
                                                             *(_QWORD *)(v58 + 8));
  if ( !*entities )
LABEL_44:
    sub_1BE4D28(list, v24);
  return (*entities)->fields._size > 0;
}