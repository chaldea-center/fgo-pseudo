void __fastcall EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B173 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
    byte_4A5B173 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
}


System_Collections_Generic_List_EventMissionCondDetailEntity__o *__fastcall EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  EventMissionConditionMaster_o *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x25
  const char *namespaze; // x8
  unsigned __int64 v13; // x26
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5B175 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
    byte_4A5B175 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  entity = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMissionConditionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_object
    || (Master_object = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                           Master_object,
                                                           missionId,
                                                           4,
                                                           22,
                                                           v8)) == 0LL )
  {
    sub_1B8880C(Master_object, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v24 = v22;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v9 )
      break;
    if ( !v24.fields._current )
      sub_1B8880C(v9, v10);
    klass = v24.fields._current[3].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( namespaze )
      {
        if ( (int)namespaze >= 1 )
        {
          v13 = 0LL;
          do
          {
            if ( v13 >= (unsigned int)namespaze )
              sub_1B88814(v9, v10);
            v9 = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &entity,
                   *((_DWORD *)&klass->_1.byval_arg.data + v13),
                   (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
            if ( v9 )
            {
              if ( !v5 )
                sub_1B8880C(v9, v10);
              v16 = entity;
              items = v5->fields._items;
              v18 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                sub_1B8880C(v9, v16);
              size = v5->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  v16,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v20 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v20[4] = (Il2CppClass *)v16;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v16, v14, v15);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v13;
          }
          while ( (__int64)v13 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v5;
}


System_Collections_Generic_List_EventMissionCondDetailEntity__o *__fastcall EventMissionCondDetailMaster__getEntitiesFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  EventMissionCondDetailEntity_c *v22; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A5B174 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventMissionCondDetailEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
    byte_4A5B174 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
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
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( v18 )
    {
      v22 = EventMissionCondDetailEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventMissionCondDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
        || *(EventMissionCondDetailEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != EventMissionCondDetailEntity_TypeInfo )
      {
        sub_1B88ACC(v18);
LABEL_35:
        sub_1B8880C(v18, v22);
      }
      if ( *(_DWORD *)(v18 + 20) == missionTargetId )
      {
        if ( !v5 )
          goto LABEL_35;
        items = v5->fields._items;
        v25 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1B8880C(v18, v22);
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), v21, v19, v20);
        }
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v5;
}