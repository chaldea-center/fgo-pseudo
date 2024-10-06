void __fastcall EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FE7E & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__, method);
    byte_4A6FE7E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_312C568 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionCondDetailEntity__o *__fastcall EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  EventMissionConditionMaster_o *Master_object; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppClass *klass; // x25
  const char *namespaze; // x8
  unsigned __int64 v22; // x26
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A6FE80 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v12);
    sub_1B90010(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v13);
    byte_4A6FE80 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  entity = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMissionConditionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_object
    || (Master_object = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                           Master_object,
                                                           missionId,
                                                           4,
                                                           22,
                                                           v17)) == 0LL )
  {
    sub_1B9026C(Master_object, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v33 = v31;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v18 )
      break;
    if ( !v33.fields._current )
      sub_1B9026C(v18, v19);
    klass = v33.fields._current[3].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( namespaze )
      {
        if ( (int)namespaze >= 1 )
        {
          v22 = 0LL;
          do
          {
            if ( v22 >= (unsigned int)namespaze )
              sub_1B90274(v18, v19);
            v18 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    &entity,
                    *((_DWORD *)&klass->_1.byval_arg.data + v22),
                    (const MethodInfo_312C5FC *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
            if ( v18 )
            {
              if ( !v14 )
                sub_1B9026C(v18, v19);
              v25 = entity;
              items = v14->fields._items;
              v27 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1B9026C(v18, v25);
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  v25,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v29[4] = (Il2CppClass *)v25;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v25, v23, v24);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v22;
          }
          while ( (__int64)v22 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionCondDetailEntity__o *__fastcall EventMissionCondDetailMaster__getEntitiesFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x8
  EventMissionCondDetailEntity_c *v29; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0

  if ( (byte_4A6FE7F & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_1B90010(&EventMissionCondDetailEntity_TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v10);
    sub_1B90010(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v11);
    byte_4A6FE7F = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v28 = v25;
    if ( v25 )
    {
      v29 = EventMissionCondDetailEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventMissionCondDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
        || *(EventMissionCondDetailEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != EventMissionCondDetailEntity_TypeInfo )
      {
        sub_1B9052C(v25);
LABEL_35:
        sub_1B9026C(v25, v29);
      }
      if ( *(_DWORD *)(v25 + 20) == missionTargetId )
      {
        if ( !v12 )
          goto LABEL_35;
        items = v12->fields._items;
        v32 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B9026C(v25, v29);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v25,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v28;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v34 + 4), v28, v26, v27);
        }
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_31;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_31:
    v38 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v12;
}