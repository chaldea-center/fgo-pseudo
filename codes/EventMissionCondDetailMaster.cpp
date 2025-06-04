void __fastcall EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02035 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__, method);
    byte_4B02035 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    140,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
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
  __int64 v20; // x2
  Il2CppClass *klass; // x25
  const char *namespaze; // x8
  unsigned __int64 v23; // x26
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B02037 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v13);
    byte_4B02037 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  entity = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMissionConditionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_object
    || (Master_object = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                           Master_object,
                                                           missionId,
                                                           4,
                                                           22,
                                                           v17)) == 0LL )
  {
    sub_1BC3264(Master_object, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v33 = v31;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v18 )
      break;
    if ( !v33.fields._current )
      sub_1BC3264(v18, v19);
    klass = v33.fields._current[3].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( namespaze )
      {
        if ( (int)namespaze >= 1 )
        {
          v23 = 0LL;
          do
          {
            if ( v23 >= (unsigned int)namespaze )
              sub_1BC326C(v18, v19, v20);
            v18 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    &entity,
                    *((_DWORD *)&klass->_1.byval_arg.data + v23),
                    (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
            if ( v18 )
            {
              if ( !v14 )
                sub_1BC3264(v18, v19);
              v25 = entity;
              items = v14->fields._items;
              v27 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1BC3264(v18, v25);
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  v25,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v29[4] = (Il2CppClass *)v25;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v25, v20, v24);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v23;
          }
          while ( (__int64)v23 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4B02036 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_EventMissionCondDetailEntity__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v10);
    byte_4B02036 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_EventMissionCondDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v27 = v24;
    if ( v24 && *(_DWORD *)(v24 + 20) == missionTargetId )
    {
      if ( !v11 )
        sub_1BC3264(v24, v24);
      items = v11->fields._items;
      v29 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(v24, v24);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v27;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v31 + 4), v27, v25, v26);
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
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_29:
    v35 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v11;
}