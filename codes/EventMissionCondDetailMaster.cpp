void __fastcall EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7AB4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__, method);
    byte_4BC7AB4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    140,
    (const MethodInfo_3246354 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC7AB6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMissionConditionMaster___, *(_QWORD *)&missionId);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v13);
    byte_4BC7AB6 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  entity = 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMissionConditionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_object
    || (Master_object = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                           Master_object,
                                                           missionId,
                                                           4,
                                                           22,
                                                           v17)) == 0LL )
  {
    sub_1C1AE30(Master_object, v16);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v37 = v35;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v18 )
      break;
    if ( !v37.fields._current )
      sub_1C1AE30(v18, v19);
    klass = v37.fields._current[3].klass;
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
              sub_1C1AE38(v18, v19);
            v18 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    &entity,
                    *((_DWORD *)&klass->_1.byval_arg.data + v22),
                    (const MethodInfo_32486C4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
            if ( v18 )
            {
              if ( !v14 )
                sub_1C1AE30(v18, v19);
              v29 = entity;
              items = v14->fields._items;
              v31 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1C1AE30(v18, v29);
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  v29,
                  *(const MethodInfo_363C890 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v33[4] = (Il2CppClass *)v29;
                sub_1C1AB78((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v29, v23, v24, v25, v26, v27, v28);
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
    &v37,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4BC7AB5 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventMissionCondDetailEntity__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v5);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v10);
    byte_4BC7AB5 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_EventMissionCondDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v14);
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
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v23 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_EventMissionCondDetailEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v31 = v24;
    if ( v24 && *(_DWORD *)(v24 + 20) == missionTargetId )
    {
      if ( !v11 )
        sub_1C1AE30(v24, v24);
      items = v11->fields._items;
      v33 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C1AE30(v24, v24);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v35 + 4), v31, v25, v26, v27, v28, v29, v30);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_29:
    v39 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v11;
}