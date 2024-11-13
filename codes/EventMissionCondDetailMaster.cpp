void __fastcall EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16202 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__,
      method,
      v2);
    byte_4B16202 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionCondDetailEntity__o *__fastcall EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x19
  __int64 v25; // x1
  EventMissionConditionMaster_o *Master_object; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppClass *klass; // x25
  const char *namespaze; // x8
  unsigned __int64 v33; // x26
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B16204 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionConditionMaster___, *(_QWORD *)&missionId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v8,
      v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v22, v23);
    byte_4B16204 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  entity = 0LL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo,
                                                       *(_QWORD *)&missionId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Master_object = (EventMissionConditionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_object
    || (Master_object = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                           Master_object,
                                                           missionId,
                                                           4,
                                                           22,
                                                           v28)) == 0LL )
  {
    sub_1BCAA3C(Master_object, v27);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v48 = v46;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v29 )
      break;
    if ( !v48.fields._current )
      sub_1BCAA3C(v29, v30);
    klass = v48.fields._current[3].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( namespaze )
      {
        if ( (int)namespaze >= 1 )
        {
          v33 = 0LL;
          do
          {
            if ( v33 >= (unsigned int)namespaze )
              sub_1BCAA44(v29, v30);
            v29 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                    &entity,
                    *((_DWORD *)&klass->_1.byval_arg.data + v33),
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
            if ( v29 )
            {
              if ( !v24 )
                sub_1BCAA3C(v29, v30);
              v40 = entity;
              items = v24->fields._items;
              v42 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
              ++v24->fields._version;
              if ( !items )
                sub_1BCAA3C(v29, v40);
              size = v24->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v24,
                  v40,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &items->obj.klass + size;
                v24->fields._size = size + 1;
                v44[4] = (Il2CppClass *)v40;
                sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v40, v34, v35, v36, v37, v38, v39);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v33;
          }
          while ( (__int64)v33 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v24;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventMissionCondDetailEntity__o *__fastcall EventMissionCondDetailMaster__getEntitiesFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x8
  EventMissionCondDetailEntity_c *v41; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0

  if ( (byte_4B16203 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId,
      method);
    sub_1BCA7E0(&EventMissionCondDetailEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo, v18, v19);
    byte_4B16203 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo,
                                                       *(_QWORD *)&missionTargetId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v21);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        p_offset += 4;
        if ( !v26 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_16;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_16:
      v32 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v40 = v33;
    if ( v33 )
    {
      v41 = EventMissionCondDetailEntity_TypeInfo;
      methodPtr_low = LOBYTE(EventMissionCondDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 304LL) < (unsigned int)methodPtr_low
        || *(EventMissionCondDetailEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * methodPtr_low - 8) != EventMissionCondDetailEntity_TypeInfo )
      {
        sub_1BCACFC(v33);
LABEL_35:
        sub_1BCAA3C(v33, v41);
      }
      if ( *(_DWORD *)(v33 + 20) == missionTargetId )
      {
        if ( !v20 )
          goto LABEL_35;
        items = v20->fields._items;
        v44 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
        ++v20->fields._version;
        if ( !items )
          sub_1BCAA3C(v33, v41);
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            (Il2CppObject *)v33,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v40;
          sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v40, v34, v35, v36, v37, v38, v39);
        }
      }
    }
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_31;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_31:
    v50 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v20;
}