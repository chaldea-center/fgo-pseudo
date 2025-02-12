void __fastcall EventDataLostBattleResetMaster___ctor(EventDataLostBattleResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4610 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__,
      method);
    byte_4BB4610 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    441,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventDataLostBattleResetEntity__o *__fastcall EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
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
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x24
  _BOOL8 IsOpen; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0

  if ( (byte_4BB460F & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventDataLostBattleResetEntity__GetEnumerator__,
      *(_QWORD *)&dataLostBattleId);
    sub_1C13D24(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7);
    sub_1C13D24(&DataManager_TypeInfo, v8);
    sub_1C13D24(&System_IDisposable_TypeInfo, v9);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo, v10);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__, v13);
    sub_1C13D24(&System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo, v14);
    byte_4BB460F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, v17);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_EventDataLostBattleResetEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_18;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_18:
      v28 = sub_1C65D04(
              Enumerator,
              System_Collections_Generic_IEnumerator_EventDataLostBattleResetEntity__TypeInfo,
              0LL);
    }
    v29 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
                            Enumerator,
                            *(_QWORD *)(v28 + 8));
    v31 = v29;
    if ( v29 && LODWORD(v29[1].klass) == dataLostBattleId && LODWORD(v29[1].monitor) == eventId )
    {
      if ( !Master_object )
        sub_1C13F80(v29, v30);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, HIDWORD(v29[1].monitor), 0LL, 0, 0LL);
      if ( IsOpen )
      {
        if ( !v16 )
          sub_1C13F80(IsOpen, v33);
        items = v16->fields._items;
        v41 = Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          sub_1C13F80(IsOpen, v33);
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            v31,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v31;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v31, v34, v35, v36, v37, v38, v39);
        }
      }
    }
  }
  v44 = Enumerator->klass;
  v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_34;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_34:
    v47 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  return (System_Collections_Generic_List_EventDataLostBattleResetEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
EventDataLostBattleResetEntity_o *__fastcall EventDataLostBattleResetMaster__GetEntity(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4611 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__,
      *(_QWORD *)&dataLostBattleId);
    byte_4BB4611 = 1;
  }
  PK = (Il2CppObject *)EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, 0LL);
  return (EventDataLostBattleResetEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_323D0DC *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
}


bool __fastcall EventDataLostBattleResetMaster__TryGetEntity(
        EventDataLostBattleResetMaster_o *this,
        EventDataLostBattleResetEntity_o **entity,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB4612 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__,
      entity);
    byte_4BB4612 = 1;
  }
  PK = (Il2CppObject *)EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
}