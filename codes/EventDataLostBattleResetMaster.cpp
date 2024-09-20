void __fastcall EventDataLostBattleResetMaster___ctor(EventDataLostBattleResetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B0A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
    byte_4A5B0A4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    437,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string___ctor__);
}


System_Collections_Generic_List_EventDataLostBattleResetEntity__o *__fastcall EventDataLostBattleResetMaster__GetDataLostBattleResetEntities(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  int32_t *v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x24
  __int64 methodPtr_low; // x10
  _BOOL8 IsOpen; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4A5B0A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventDataLostBattleResetEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
    byte_4A5B0A3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDataLostBattleResetEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDataLostBattleResetEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
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
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
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
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_18:
      v20 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (int32_t *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                       Enumerator,
                       *(_QWORD *)(v20 + 8));
    v23 = (Il2CppObject *)v21;
    if ( v21 )
    {
      methodPtr_low = LOBYTE(EventDataLostBattleResetEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v21 + 304LL) >= (unsigned int)methodPtr_low
        && *(EventDataLostBattleResetEntity_c **)(*(_QWORD *)(*(_QWORD *)v21 + 200LL) + 8 * methodPtr_low - 8) == EventDataLostBattleResetEntity_TypeInfo
        && v21[4] == dataLostBattleId
        && v21[6] == eventId )
      {
        if ( !Master_object )
          sub_1B8880C(v21, v22);
        IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v21[7], 0LL, 0, 0LL);
        if ( IsOpen )
        {
          if ( !v8 )
            sub_1B8880C(IsOpen, v26);
          items = v8->fields._items;
          v30 = Method_System_Collections_Generic_List_EventDataLostBattleResetEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1B8880C(IsOpen, v26);
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              v23,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v23;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v23, v27, v28);
          }
        }
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_36;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_36:
    v36 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_EventDataLostBattleResetEntity__o *)v8;
}


EventDataLostBattleResetEntity_o *__fastcall EventDataLostBattleResetMaster__GetEntity(
        EventDataLostBattleResetMaster_o *this,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B0A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
    byte_4A5B0A5 = 1;
  }
  PK = (Il2CppObject *)EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, 0LL);
  return (EventDataLostBattleResetEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               PK,
                                               (const MethodInfo_311DC8C *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__GetEntity__);
}


bool __fastcall EventDataLostBattleResetMaster__TryGetEntity(
        EventDataLostBattleResetMaster_o *this,
        EventDataLostBattleResetEntity_o **entity,
        int32_t dataLostBattleId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B0A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
    byte_4A5B0A6 = 1;
  }
  PK = (Il2CppObject *)EventDataLostBattleResetEntity__CreatePK(dataLostBattleId, idx, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventDataLostBattleResetMaster__EventDataLostBattleResetEntity__string__TryGetEntity__);
}