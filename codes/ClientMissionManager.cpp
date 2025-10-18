void ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C42654 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
    byte_4C42654 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v3,
    (const MethodInfo_34AD338 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.progressDictionary, (int32_t)v3, v4, v5);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
}


void ClientMissionManager__AddProgress(
        ClientMissionManager_o *this,
        ClientMissionManager_ProgressDictionaryKey_o key,
        int32_t valueToAdd,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x21
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v9; // x22
  int32_t v10; // w3
  ClientMissionManager_ProgressDictionaryKey_o v11; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v12; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v13; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v14; // 0:x1.16

  v5 = *(_QWORD *)&key.fields.targetId;
  v6 = *(_QWORD *)&key.fields.missionTargetId;
  if ( (byte_4C42652 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
    byte_4C42652 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v11.fields.missionTargetId = v6;
  *(_QWORD *)&v11.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v11, (const MethodInfo_34ADF28 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
  if ( ((unsigned __int8)progressDictionary & 1) == 0 )
  {
    progressDictionary = this->fields.progressDictionary;
    if ( !progressDictionary )
      goto LABEL_9;
    *(_QWORD *)&v12.fields.missionTargetId = v6;
    *(_QWORD *)&v12.fields.targetId = v5;
    System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
      progressDictionary,
      v12,
      0,
      (const MethodInfo_34ADD08 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v9 = this->fields.progressDictionary;
  if ( !v9 )
LABEL_9:
    sub_1C372B4(progressDictionary);
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  v10 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v9,
          v13,
          (const MethodInfo_34ADC70 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v14.fields.missionTargetId = v6;
  *(_QWORD *)&v14.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v9,
    v14,
    v10,
    (const MethodInfo_34ADD08 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_4C42653 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
    byte_4C42653 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0;
  if ( !progressDictionary )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_34ADEBC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
}


void ClientMissionManager__MyRoomPlayVoice(ClientMissionManager_o *this, int32_t svtId, const MethodInfo *method)
{
  char *Instance; // x0
  System_Collections_Generic_HashSet_int__o *v6; // x20
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  int v9; // w8
  unsigned int v10; // w9
  char *v11; // x8
  __int64 v12; // x23
  _BOOL8 v13; // x0
  __int64 current_low; // x24
  _BOOL8 v15; // x0
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v18; // x22
  __int64 v19; // x26
  __int64 v20; // x24
  const MethodInfo *v21; // x4
  Il2CppClass *v22; // x29
  const char *v23; // x8
  unsigned __int64 v24; // x28
  __int64 v25; // x24
  int *v26; // [xsp+8h] [xbp-B8h]
  unsigned int v27; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v28; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v30; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v31; // 0:x1.16

  if ( (byte_4C42650 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42650 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  entity = 0;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0);
  if ( !Instance )
    goto LABEL_45;
  v6 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (char *)DataMasterBase_object__object__object___getEntitys(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         (const MethodInfo_33A4DDC *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
    if ( !Instance )
      goto LABEL_45;
    v9 = *((_DWORD *)Instance + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      v26 = (int *)Instance;
      while ( 1 )
      {
        if ( v10 >= v9 )
          sub_1C372BC(Instance);
        v11 = &Instance[8 * v10];
        v12 = *((_QWORD *)v11 + 4);
        if ( !v12 )
          break;
        v27 = v10;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v11 + 4),
                             this->fields.deemedTime,
                             0);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v28,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v30 = v28;
        while ( 1 )
        {
          v13 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v30,
                  (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v13 )
            break;
          if ( !v8 )
            sub_1C372B4(v13);
          current_low = LODWORD(v30.fields._current);
          v15 = DataMasterBase_object__object__int___TryGetEntity(
                  v8,
                  &entity,
                  (int32_t)v30.fields._current,
                  (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v15 )
          {
            if ( !entity )
              sub_1C372B4(v15);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_1C372B4(v15);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v18 = 0;
                v19 = current_low << 32;
                do
                {
                  if ( v18 >= (unsigned int)namespaze )
                    sub_1C372BC(v15);
                  v20 = *((unsigned int *)&klass->_1.byval_arg.data + v18);
                  v15 = System_Collections_Generic_HashSet_int___Contains(
                          v6,
                          v20,
                          (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v15 )
                  {
                    if ( !entity )
                      sub_1C372B4(v15);
                    v22 = entity[2].klass;
                    if ( !v22 )
                      sub_1C372B4(v15);
                    v23 = v22->_1.namespaze;
                    if ( (int)v23 >= 1 )
                    {
                      v24 = 0;
                      v25 = v20 << 32;
                      do
                      {
                        if ( v24 >= (unsigned int)v23 )
                          sub_1C372BC(v15);
                        *(_QWORD *)&v31.fields.missionTargetId = v19 | *(unsigned int *)(v12 + 32);
                        *(_QWORD *)&v31.fields.targetId = v25 | *((unsigned int *)&v22->_1.byval_arg.data + v24);
                        ClientMissionManager__AddProgress(this, v31, 1, v21);
                        LODWORD(v23) = v22->_1.namespaze;
                        ++v24;
                      }
                      while ( (__int64)v24 < (int)v23 );
                    }
                  }
                  LODWORD(namespaze) = klass->_1.namespaze;
                  ++v18;
                }
                while ( (__int64)v18 < (int)namespaze );
              }
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v30,
          (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v26;
        v9 = v26[6];
        v10 = v27 + 1;
        if ( (int)(v27 + 1) >= v9 )
          return;
      }
LABEL_45:
      sub_1C372B4(Instance);
    }
  }
}


void ClientMissionManager__OnClickMapGimmick(
        ClientMissionManager_o *this,
        int32_t eventId,
        int32_t targetGimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x26
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x23
  NetworkManager_c *v10; // x0
  System_Collections_Generic_HashSet_int__o *v11; // x24
  void *Entitys; // x0
  int v13; // w8
  void *v14; // x26
  unsigned int v15; // w28
  EventMissionConditionEntity_o *v16; // x27
  _BOOL8 v17; // x0
  _BOOL8 v18; // x0
  __int64 current_low; // x24
  _BOOL8 v20; // x0
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v23; // x28
  __int64 v24; // x24
  const MethodInfo *v25; // x4
  int64_t userId; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v27; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v28; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v31; // 0:x1.16

  if ( (byte_4C42651 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C42651 = 1;
  }
  entity = 0;
  memset(&i, 0, sizeof(i));
  v28 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  userId = v10->static_fields->userIdNumber;
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_51;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (const MethodInfo_33A4DDC *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
  if ( !Entitys )
    goto LABEL_51;
  v13 = *((_DWORD *)Entitys + 6);
  v14 = Entitys;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        sub_1C372BC(Entitys);
      v16 = (EventMissionConditionEntity_o *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !v16 || !v9 )
        break;
      if ( !UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)v9,
              &entity,
              userId,
              v16->fields.missionId,
              0) )
        goto LABEL_21;
      Entitys = entity;
      if ( !entity )
        break;
      Entitys = (void *)UserEventMissionEntity__isClearMission(entity, 0);
      if ( ((unsigned __int8)Entitys & 1) == 0 )
      {
LABEL_21:
        Entitys = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                    v16,
                    this->fields.deemedTime,
                    0);
        if ( !Entitys )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v27,
          (System_Collections_Generic_HashSet_int__o *)Entitys,
          (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = v27;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v11,
                (int32_t)i.fields._current,
                (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v17 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v17 )
            break;
          if ( !v11 )
            sub_1C372B4(v17);
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_30;
    }
LABEL_51:
    sub_1C372B4(Entitys);
  }
LABEL_30:
  if ( !v11 )
    goto LABEL_51;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v27,
    v11,
    (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = v27;
  while ( 1 )
  {
    v18 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v18 )
      break;
    if ( !v8 )
      sub_1C372B4(v18);
    current_low = LODWORD(i.fields._current);
    v20 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
            &v28,
            (int32_t)i.fields._current,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v20 )
    {
      if ( !v28 )
        sub_1C372B4(v20);
      if ( LODWORD(v28[1].monitor) == 40 )
      {
        klass = v28[4].klass;
        if ( !klass )
          sub_1C372B4(v20);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v23 = 0;
          v24 = current_low << 32;
          do
          {
            if ( v23 >= (unsigned int)namespaze )
              sub_1C372BC(v20);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v23) == eventId )
            {
              if ( !v28 )
                sub_1C372B4(v20);
              v20 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v28[2].klass,
                      targetGimmickId,
                      (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v20 )
              {
                if ( !v28 )
                  sub_1C372B4(v20);
                *(_QWORD *)&v31.fields.missionTargetId = v24 | HIDWORD(v28[1].klass);
                v31.fields.targetId = targetGimmickId;
                v31.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v31, 1, v25);
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
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void ClientMissionManager__SendRequest(
        ClientMissionManager_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x20
  System_Collections_Generic_List_object__o *v6; // x21
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  int32_t getEnumeratorRetType; // w23
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x22
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  const MethodInfo *v18; // x1
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v20; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C4264E & 1) == 0 )
  {
    sub_1C37058(&EventMissionProgressRequest_Argument_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C37058(&Method_NetworkManager_getRequest_EventMissionProgressRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
    byte_4C4264E = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v21,
    progressDictionary,
    (const MethodInfo_34AE144 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v22,
            (const MethodInfo_3572814 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v22.fields._getEnumeratorRetType;
    if ( v22.fields._getEnumeratorRetType )
    {
      current = v22.fields._current;
      v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_1C372A4(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v10,
        (int32_t)current.fields.key,
        SHIDWORD(current.fields.key),
        (int32_t)current.fields.value,
        SHIDWORD(current.fields.value),
        getEnumeratorRetType,
        0);
      if ( !v6 )
        sub_1C372B4(v11);
      items = v6->fields._items;
      v15 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C372B4(v11);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v10,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v22,
    (const MethodInfo_3572948 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v6 )
    goto LABEL_25;
  if ( v6->fields._size >= 1 )
  {
    deemedTime = this->fields.deemedTime;
    if ( !deemedTime )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      deemedTime = NetworkManager__getTime(0);
    }
    v20 = (EventMissionProgressRequest_Argument_o *)sub_1C372A4(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v20,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v6,
      0);
    if ( Request_object )
    {
      EventMissionProgressRequest__beginRequest((EventMissionProgressRequest_o *)Request_object, v20, 0);
      goto LABEL_22;
    }
LABEL_25:
    sub_1C372B4(progressDictionary);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v18);
}


void ClientMissionManager__SetCurrentTimeAsDeemedTime(ClientMissionManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C4264F & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C4264F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.deemedTime = NetworkManager__getTime(0);
}


void ClientMissionManager_ProgressDictionaryKey___ctor(
        ClientMissionManager_ProgressDictionaryKey_o this,
        int32_t missionTargetId,
        int32_t missionConditionDetailId,
        int32_t targetId,
        int32_t eventId,
        const MethodInfo *method)
{
  **(_DWORD **)&this.fields.missionTargetId = this.fields.targetId;
  *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 4LL) = missionTargetId;
  *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 8LL) = missionConditionDetailId;
  *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 12LL) = targetId;
}


bool ClientMissionManager_ProgressDictionaryKey__Equals(
        ClientMissionManager_ProgressDictionaryKey_o this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  ClientMissionManager_ProgressDictionaryKey_c **v3; // x20
  __int64 v4; // x19
  _QWORD *v5; // x0
  __int64 v6; // x8
  bool result; // w0

  v3 = *(ClientMissionManager_ProgressDictionaryKey_c ***)&this.fields.targetId;
  v4 = *(_QWORD *)&this.fields.missionTargetId;
  if ( (byte_4C42655 & 1) == 0 )
  {
    sub_1C37058(&ClientMissionManager_ProgressDictionaryKey_TypeInfo);
    byte_4C42655 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool ClientMissionManager_ProgressDictionaryKey__Equals_41245028(
        ClientMissionManager_ProgressDictionaryKey_o this,
        ClientMissionManager_ProgressDictionaryKey_o other,
        const MethodInfo *method)
{
  return **(_DWORD **)&this.fields.missionTargetId == this.fields.targetId
      && *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 4LL) == this.fields.eventId
      && *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 8LL) == other.fields.missionTargetId
      && *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 12LL) == other.fields.missionConditionDetailId;
}


int32_t ClientMissionManager_ProgressDictionaryKey__GetHashCode(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  int32_t *v2; // x19
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w4
  System_ValueTuple_T1__T2__T3__T4__o v8; // [xsp+0h] [xbp-50h] BYREF

  v2 = *(int32_t **)&this.fields.missionTargetId;
  if ( (byte_4C42656 & 1) == 0 )
  {
    sub_1C37058(&Method_System_ValueTuple_int__int__int__int__GetHashCode__);
    sub_1C37058(&Method_System_ValueTuple_int__int__int__int___ctor__);
    byte_4C42656 = 1;
  }
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  memset(&v8, 0, sizeof(v8));
  System_ValueTuple_int__int__int__int____ctor(
    &v8,
    v3,
    v4,
    v5,
    v6,
    (const MethodInfo_3B15494 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v8.fields.Item3 = *(_OWORD *)&v8.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v8.fields.Item3,
           (const MethodInfo_3B161F4 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}


System_String_o *ClientMissionManager_ProgressDictionaryKey__ToString(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  int *v2; // x20
  System_Object_array *v3; // x19
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x20
  __int64 v42; // x0
  int v43; // [xsp+8h] [xbp-38h] BYREF
  int v44; // [xsp+Ch] [xbp-34h] BYREF
  int v45; // [xsp+18h] [xbp-28h] BYREF
  int v46; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4C42657 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&object___TypeInfo);
    sub_1C37058(&StringLiteral_21612/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/);
    byte_4C42657 = 1;
  }
  v3 = (System_Object_array *)sub_1C37100(object___TypeInfo, 4);
  v46 = *v2;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v46, v4, v5, v6, v7, v8, v9);
  if ( !v3 )
    sub_1C372B4(v10);
  v13 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_18;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_17;
  v3->m_Items[0] = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v13, v11, v12);
  v45 = v2[1];
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v45, v14, v15, v16, v17, v18, v19);
  v22 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_17;
  v3->m_Items[1] = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v22, v20, v21);
  v44 = v2[2];
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v44, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v31, v29, v30);
  v43 = v2[3];
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &v43, v32, v33, v34, v35, v36, v37);
  v40 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C37194(v10, v3->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_18:
      v42 = sub_1C372D8(v10);
      sub_1C37180(v42, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 3 )
LABEL_17:
    sub_1C372BC(v10);
  v3->m_Items[3] = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v40, v38, v39);
  return System_String__Format_63603084((System_String_o *)StringLiteral_21612/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v3, 0);
}