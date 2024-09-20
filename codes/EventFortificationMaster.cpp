void __fastcall EventFortificationMaster___ctor(EventFortificationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B113 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
    byte_4A5B113 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    385,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationEntity_o *__fastcall EventFortificationMaster__GetEntity(
        EventFortificationMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B114 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
    byte_4A5B114 = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventFortificationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationMaster__IsFortificationEvent(
        EventFortificationMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  _DWORD *v17; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4A5B117 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventFortificationEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B117 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&eventId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                      Enumerator,
                      *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      methodPtr_low = LOBYTE(EventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventFortificationEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * methodPtr_low - 8) == EventFortificationEntity_TypeInfo
        && v17[4] == eventId )
      {
        goto LABEL_24;
      }
    }
  }
  v12 = 0;
LABEL_24:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_28;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_28:
    v22 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v12 & 1;
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

  if ( (byte_4A5B115 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
    byte_4A5B115 = 1;
  }
  PK = (Il2CppObject *)EventFortificationEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventFortificationMaster__EventFortificationEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationMaster__TryGetEntityList(
        EventFortificationMaster_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o **entities,
        int32_t evenId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x22
  __int64 methodPtr_low; // x10
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_object__o *v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4A5B116 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventFortificationEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B116 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationEntity___ctor__);
  *entities = (System_Collections_Generic_List_EventFortificationEntity__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)entities, (int32_t)v7, v8, v9);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v12);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v21 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                            Enumerator,
                            *(_QWORD *)(v21 + 8));
    v26 = v22;
    if ( !v22
      || (methodPtr_low = LOBYTE(EventFortificationEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (EventFortificationEntity_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFortificationEntity_TypeInfo )
    {
      sub_1B8880C(v22, v23);
    }
    if ( LODWORD(v22[1].klass) == evenId )
    {
      if ( !HIDWORD(v22[3].monitor) )
        goto LABEL_26;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v29);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !MasterData_object )
        sub_1B8880C(0LL, v31);
      if ( CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, HIDWORD(v26[3].monitor), 0LL, 0, 0LL) )
      {
LABEL_26:
        v32 = (System_Collections_Generic_List_object__o *)*entities;
        if ( !*entities )
          sub_1B8880C(0LL, v23);
        items = v32->fields._items;
        v34 = Method_System_Collections_Generic_List_EventFortificationEntity__Add__;
        ++v32->fields._version;
        if ( !items )
          sub_1B8880C(v32, v23);
        size = v32->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            v26,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v32->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v26, v24, v25);
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_35;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_35:
    v40 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                             Enumerator,
                                                             *(_QWORD *)(v40 + 8));
  if ( !*entities )
LABEL_44:
    sub_1B8880C(list, v10);
  return (*entities)->fields._size > 0;
}