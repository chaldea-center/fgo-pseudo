void __fastcall EventFortificationSvtMaster___ctor(EventFortificationSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE4C3 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__,
      method);
    byte_49FE4C3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    387,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationSvtEntity_o *__fastcall EventFortificationSvtMaster__GetEntity(
        EventFortificationSvtMaster_o *this,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE4C4 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FE4C4 = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationSvtEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30D64D8 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFortificationSvtMaster__TryGetEntity(
        EventFortificationSvtMaster_o *this,
        EventFortificationSvtEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE4C5 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__,
      entity);
    byte_49FE4C5 = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationSvtMaster__TryGetEntityList(
        EventFortificationSvtMaster_o *this,
        System_Collections_Generic_List_EventFortificationSvtEntity__o **eventFortificationSvtList,
        int32_t eventId,
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v20; // x21
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 IsOpen; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x24
  __int64 methodPtr_low; // x10
  __int64 v37; // x1
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3

  if ( (byte_49FE4C6 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventFortificationSvtList);
    sub_1B64870(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v7);
    sub_1B64870(&EventFortificationSvtEntity_TypeInfo, v8);
    sub_1B64870(&System_IDisposable_TypeInfo, v9);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v14);
    sub_1B64870(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v15);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49FE4C6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64ACC(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_17;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_17:
      v30 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
               Enumerator,
               *(_QWORD *)(v30 + 8));
    v35 = (Il2CppObject *)IsOpen;
    if ( !IsOpen
      || (methodPtr_low = LOBYTE(EventFortificationSvtEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)IsOpen + 304LL) < (unsigned int)methodPtr_low)
      || *(EventFortificationSvtEntity_c **)(*(_QWORD *)(*(_QWORD *)IsOpen + 200LL) + 8 * methodPtr_low - 8) != EventFortificationSvtEntity_TypeInfo )
    {
      sub_1B64ACC(IsOpen, v32);
    }
    if ( *(_DWORD *)(IsOpen + 16) == eventId )
    {
      v37 = *(unsigned int *)(IsOpen + 44);
      if ( !(_DWORD)v37 )
        goto LABEL_26;
      if ( !MasterData_object )
        sub_1B64ACC(IsOpen, v37);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, v37, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_26:
        if ( !v20 )
          sub_1B64ACC(IsOpen, v37);
        items = v20->fields._items;
        v39 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1B64ACC(IsOpen, v37);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v35,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v35;
          sub_1B64814((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v35, v33, v34);
        }
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_35;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_35:
    v45 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  *eventFortificationSvtList = (System_Collections_Generic_List_EventFortificationSvtEntity__o *)v20;
  sub_1B64814((ServantStatusBattleListViewItem_o *)eventFortificationSvtList, (int32_t)v20, v46, v47);
  if ( !*eventFortificationSvtList )
LABEL_43:
    sub_1B64ACC(Instance, v18);
  return (*eventFortificationSvtList)->fields._size > 0;
}