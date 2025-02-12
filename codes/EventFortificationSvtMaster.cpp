void __fastcall EventFortificationSvtMaster___ctor(EventFortificationSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7A5B & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__,
      method);
    byte_4BC7A5B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    391,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
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

  if ( (byte_4BC7A5C & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BC7A5C = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationSvtEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_324D130 *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
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

  if ( (byte_4BC7A5D & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__,
      entity);
    byte_4BC7A5D = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v19; // x21
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 IsOpen; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x24
  __int64 v39; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4BC7A5E & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventFortificationSvtEntity__GetEnumerator__,
      eventFortificationSvtList);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v7);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo, v9);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BC7A5E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_41;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_EventFortificationSvtEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_17;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_17:
      v29 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_EventFortificationSvtEntity__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
               Enumerator,
               *(_QWORD *)(v29 + 8));
    v38 = (Il2CppObject *)IsOpen;
    if ( !IsOpen )
      sub_1C1AE30(0LL, v31);
    if ( *(_DWORD *)(IsOpen + 16) == eventId )
    {
      v39 = *(unsigned int *)(IsOpen + 44);
      if ( !(_DWORD)v39 )
        goto LABEL_24;
      if ( !MasterData_object )
        sub_1C1AE30(IsOpen, v39);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, v39, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_24:
        if ( !v19 )
          sub_1C1AE30(IsOpen, v39);
        items = v19->fields._items;
        v41 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
        ++v19->fields._version;
        if ( !items )
          sub_1C1AE30(IsOpen, v39);
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            v38,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v43[4] = (Il2CppClass *)v38;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v38, v32, v33, v34, v35, v36, v37);
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
        goto LABEL_33;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_33:
    v47 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  *eventFortificationSvtList = (System_Collections_Generic_List_EventFortificationSvtEntity__o *)v19;
  sub_1C1AB78((PartyOrganizationUtility_o *)eventFortificationSvtList, (int64_t)v19, v48, v49, v50, v51, v52, v53);
  if ( !*eventFortificationSvtList )
LABEL_41:
    sub_1C1AE30(Instance, v17);
  return (*eventFortificationSvtList)->fields._size > 0;
}