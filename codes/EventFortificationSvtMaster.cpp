void __fastcall EventFortificationSvtMaster___ctor(EventFortificationSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B11A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
    byte_4A5B11A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    387,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string___ctor__);
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

  if ( (byte_4A5B11B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
    byte_4A5B11B = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&position);
  return (EventFortificationSvtEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__GetEntity__);
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

  if ( (byte_4A5B11C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
    byte_4A5B11C = 1;
  }
  PK = (Il2CppObject *)EventFortificationSvtEntity__CreatePK(eventId, idx, position, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventFortificationSvtMaster__EventFortificationSvtEntity__string__TryGetEntity__);
}


bool __fastcall EventFortificationSvtMaster__TryGetEntityList(
        EventFortificationSvtMaster_o *this,
        System_Collections_Generic_List_EventFortificationSvtEntity__o **eventFortificationSvtList,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 IsOpen; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x24
  __int64 methodPtr_low; // x10
  __int64 v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3

  if ( (byte_4A5B11D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventFortificationSvtEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationSvtEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B11D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationSvtEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationSvtEntity___ctor__);
  Instance = (DataManager_o *)this->fields.list;
  if ( !Instance )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
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
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_17:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
               Enumerator,
               *(_QWORD *)(v20 + 8));
    v25 = (Il2CppObject *)IsOpen;
    if ( !IsOpen
      || (methodPtr_low = LOBYTE(EventFortificationSvtEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)IsOpen + 304LL) < (unsigned int)methodPtr_low)
      || *(EventFortificationSvtEntity_c **)(*(_QWORD *)(*(_QWORD *)IsOpen + 200LL) + 8 * methodPtr_low - 8) != EventFortificationSvtEntity_TypeInfo )
    {
      sub_1B8880C(IsOpen, v22);
    }
    if ( *(_DWORD *)(IsOpen + 16) == eventId )
    {
      v27 = *(unsigned int *)(IsOpen + 44);
      if ( !(_DWORD)v27 )
        goto LABEL_26;
      if ( !MasterData_object )
        sub_1B8880C(IsOpen, v27);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)MasterData_object, v27, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_26:
        if ( !v10 )
          sub_1B8880C(IsOpen, v27);
        items = v10->fields._items;
        v29 = Method_System_Collections_Generic_List_EventFortificationSvtEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          sub_1B8880C(IsOpen, v27);
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v25,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v25;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v25, v23, v24);
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_35;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_35:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  *eventFortificationSvtList = (System_Collections_Generic_List_EventFortificationSvtEntity__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)eventFortificationSvtList, (int32_t)v10, v36, v37);
  if ( !*eventFortificationSvtList )
LABEL_43:
    sub_1B8880C(Instance, v8);
  return (*eventFortificationSvtList)->fields._size > 0;
}