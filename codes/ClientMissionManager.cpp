void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A813 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
    byte_4A5A813 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v3,
    (const MethodInfo_3210DF0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.progressDictionary, (int32_t)v3, v4, v5);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
}


void __fastcall ClientMissionManager__AddProgress(
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
  if ( (byte_4A5A811 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
    byte_4A5A811 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v11.fields.missionTargetId = v6;
  *(_QWORD *)&v11.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v11, (const MethodInfo_32119E0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_32117C0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v9 = this->fields.progressDictionary;
  if ( !v9 )
LABEL_9:
    sub_1B8880C(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  v10 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v9,
          v13,
          (const MethodInfo_3211728 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v14.fields.missionTargetId = v6;
  *(_QWORD *)&v14.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v9,
    v14,
    v10,
    (const MethodInfo_32117C0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_4A5A812 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
    byte_4A5A812 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_3211974 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
}


void __fastcall ClientMissionManager__MyRoomPlayVoice(
        ClientMissionManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x20
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  int v10; // w8
  unsigned int v11; // w9
  char *v12; // x8
  __int64 v13; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 current_low; // x24
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v21; // x22
  __int64 v22; // x26
  __int64 v23; // x24
  const MethodInfo *v24; // x4
  Il2CppClass *v25; // x29
  const char *v26; // x8
  unsigned __int64 v27; // x28
  __int64 v28; // x24
  int *v29; // [xsp+8h] [xbp-B8h]
  unsigned int v30; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v31; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v33; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v34; // 0:x1.16

  if ( (byte_4A5A80F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A80F = 1;
  }
  memset(&v33, 0, sizeof(v33));
  entity = 0LL;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_45;
  v7 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (char *)DataMasterBase__getEntitys_object_(
                         (DataMasterBase_o *)MasterData_object,
                         (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_45;
    v10 = *((_DWORD *)Instance + 6);
    if ( v10 >= 1 )
    {
      v11 = 0;
      v29 = (int *)Instance;
      while ( 1 )
      {
        if ( v11 >= v10 )
          sub_1B88814(Instance, v6);
        v12 = &Instance[8 * v11];
        v13 = *((_QWORD *)v12 + 4);
        if ( !v13 )
          break;
        v30 = v11;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v12 + 4),
                             this->fields.deemedTime,
                             0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v31,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v33 = v31;
        while ( 1 )
        {
          v14 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v33,
                  (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v14 )
            break;
          if ( !v9 )
            sub_1B8880C(v14, v15);
          current_low = LODWORD(v33.fields._current);
          v17 = DataMasterBase_object__object__int___TryGetEntity(
                  v9,
                  &entity,
                  (int32_t)v33.fields._current,
                  (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v17 )
          {
            if ( !entity )
              sub_1B8880C(v17, v18);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_1B8880C(v17, v18);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v21 = 0LL;
                v22 = current_low << 32;
                do
                {
                  if ( v21 >= (unsigned int)namespaze )
                    sub_1B88814(v17, v18);
                  v23 = *((unsigned int *)&klass->_1.byval_arg.data + v21);
                  v17 = System_Collections_Generic_HashSet_int___Contains(
                          v7,
                          v23,
                          (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v17 )
                  {
                    if ( !entity )
                      sub_1B8880C(v17, v18);
                    v25 = entity[2].klass;
                    if ( !v25 )
                      sub_1B8880C(v17, v18);
                    v26 = v25->_1.namespaze;
                    if ( (int)v26 >= 1 )
                    {
                      v27 = 0LL;
                      v28 = v23 << 32;
                      do
                      {
                        if ( v27 >= (unsigned int)v26 )
                          sub_1B88814(v17, v18);
                        *(_QWORD *)&v34.fields.missionTargetId = v22 | *(unsigned int *)(v13 + 32);
                        *(_QWORD *)&v34.fields.targetId = v28 | *((unsigned int *)&v25->_1.byval_arg.data + v27);
                        ClientMissionManager__AddProgress(this, v34, 1, v24);
                        LODWORD(v26) = v25->_1.namespaze;
                        ++v27;
                      }
                      while ( (__int64)v27 < (int)v26 );
                    }
                  }
                  LODWORD(namespaze) = klass->_1.namespaze;
                  ++v21;
                }
                while ( (__int64)v21 < (int)namespaze );
              }
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v33,
          (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v29;
        v10 = v29[6];
        v11 = v30 + 1;
        if ( (int)(v30 + 1) >= v10 )
          return;
      }
LABEL_45:
      sub_1B8880C(Instance, v6);
    }
  }
}


void __fastcall ClientMissionManager__OnClickMapGimmick(
        ClientMissionManager_o *this,
        int32_t eventId,
        int32_t targetGimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x26
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x23
  System_Collections_Generic_HashSet_int__o *v10; // x24
  void *Entitys_object; // x0
  __int64 v12; // x1
  int v13; // w8
  void *v14; // x26
  unsigned int v15; // w28
  EventMissionConditionEntity_o *v16; // x27
  _BOOL8 v17; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 current_low; // x24
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v26; // x28
  __int64 v27; // x24
  const MethodInfo *v28; // x4
  int64_t userId; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v30; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v31; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v34; // 0:x1.16

  if ( (byte_4A5A810 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A810 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v31 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  userId = NetworkManager__get_UserId(0LL);
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_47;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Master_object,
                     (const MethodInfo_2E8019C *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
  if ( !Entitys_object )
    goto LABEL_47;
  v13 = *((_DWORD *)Entitys_object + 6);
  v14 = Entitys_object;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        sub_1B88814(Entitys_object, v12);
      v16 = (EventMissionConditionEntity_o *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !v16 || !v9 )
        break;
      if ( !UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)v9,
              &entity,
              userId,
              v16->fields.missionId,
              0LL) )
        goto LABEL_17;
      Entitys_object = entity;
      if ( !entity )
        break;
      Entitys_object = (void *)UserEventMissionEntity__isClearMission(entity, 0LL);
      if ( ((unsigned __int8)Entitys_object & 1) == 0 )
      {
LABEL_17:
        Entitys_object = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                           v16,
                           this->fields.deemedTime,
                           0LL);
        if ( !Entitys_object )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v30,
          (System_Collections_Generic_HashSet_int__o *)Entitys_object,
          (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = v30;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v10,
                (int32_t)i.fields._current,
                (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v17 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v17 )
            break;
          if ( !v10 )
            sub_1B8880C(v17, v18);
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      }
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_26;
    }
LABEL_47:
    sub_1B8880C(Entitys_object, v12);
  }
LABEL_26:
  if ( !v10 )
    goto LABEL_47;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v30,
    v10,
    (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = v30;
  while ( 1 )
  {
    v19 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !v8 )
      sub_1B8880C(v19, v20);
    current_low = LODWORD(i.fields._current);
    v22 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
            &v31,
            (int32_t)i.fields._current,
            (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v22 )
    {
      if ( !v31 )
        sub_1B8880C(v22, v23);
      if ( LODWORD(v31[1].monitor) == 40 )
      {
        klass = v31[4].klass;
        if ( !klass )
          sub_1B8880C(v22, v23);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v26 = 0LL;
          v27 = current_low << 32;
          do
          {
            if ( v26 >= (unsigned int)namespaze )
              sub_1B88814(v22, v23);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v26) == eventId )
            {
              if ( !v31 )
                sub_1B8880C(v22, v23);
              v22 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v31[2].klass,
                      targetGimmickId,
                      (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v22 )
              {
                if ( !v31 )
                  sub_1B8880C(v22, v23);
                *(_QWORD *)&v34.fields.missionTargetId = v27 | HIDWORD(v31[1].klass);
                v34.fields.targetId = targetGimmickId;
                v34.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v34, 1, v28);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v26;
          }
          while ( (__int64)v26 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void __fastcall ClientMissionManager__SendRequest(
        ClientMissionManager_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Request_object; // x20
  System_Collections_Generic_List_object__o *v6; // x21
  const MethodInfo *v7; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v22; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A5A80D & 1) == 0 )
  {
    sub_1B885B0(&EventMissionProgressRequest_Argument_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_EventMissionProgressRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
    byte_4A5A80D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v23,
    progressDictionary,
    (const MethodInfo_3211BFC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v24,
            (const MethodInfo_32D6CA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v24.fields._getEnumeratorRetType;
    if ( v24.fields._getEnumeratorRetType )
    {
      key = v24.fields._current.fields.key;
      value = v24.fields._current.fields.value;
      v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_1B887FC(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v12,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v6 )
        sub_1B8880C(v13, v14);
      items = v6->fields._items;
      v18 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1B8880C(v13, v14);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v12,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v24,
    (const MethodInfo_32D6DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v6 )
    goto LABEL_25;
  if ( v6->fields._size >= 1 )
  {
    deemedTime = this->fields.deemedTime;
    if ( !deemedTime )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      deemedTime = NetworkManager__getTime(0LL);
    }
    v22 = (EventMissionProgressRequest_Argument_o *)sub_1B887FC(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v22,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v6,
      0LL);
    if ( Request_object )
    {
      EventMissionProgressRequest__beginRequest((EventMissionProgressRequest_o *)Request_object, v22, 0LL);
      goto LABEL_22;
    }
LABEL_25:
    sub_1B8880C(progressDictionary, v7);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v7);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5A80E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5A80E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.deemedTime = NetworkManager__getTime(0LL);
}


void __fastcall ClientMissionManager_ProgressDictionaryKey___ctor(
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


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals(
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
  if ( (byte_4A5A814 & 1) == 0 )
  {
    sub_1B885B0(&ClientMissionManager_ProgressDictionaryKey_TypeInfo);
    byte_4A5A814 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_38369324(
        ClientMissionManager_ProgressDictionaryKey_o this,
        ClientMissionManager_ProgressDictionaryKey_o other,
        const MethodInfo *method)
{
  return **(_DWORD **)&this.fields.missionTargetId == this.fields.targetId
      && *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 4LL) == this.fields.eventId
      && *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 8LL) == other.fields.missionTargetId
      && *(_DWORD *)(*(_QWORD *)&this.fields.missionTargetId + 12LL) == other.fields.missionConditionDetailId;
}


int32_t __fastcall ClientMissionManager_ProgressDictionaryKey__GetHashCode(
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
  if ( (byte_4A5A815 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_ValueTuple_int__int__int__int__GetHashCode__);
    sub_1B885B0(&Method_System_ValueTuple_int__int__int__int___ctor__);
    byte_4A5A815 = 1;
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
    (const MethodInfo_385D4B4 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v8.fields.Item3 = *(_OWORD *)&v8.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v8.fields.Item3,
           (const MethodInfo_385E214 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}


System_String_o *__fastcall ClientMissionManager_ProgressDictionaryKey__ToString(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  int *v2; // x20
  System_Object_array *v3; // x19
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x20
  __int64 v31; // x0
  int v32; // [xsp+8h] [xbp-38h] BYREF
  int v33; // [xsp+Ch] [xbp-34h] BYREF
  int v34; // [xsp+18h] [xbp-28h] BYREF
  int v35; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4A5A816 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_21467/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/);
    byte_4A5A816 = 1;
  }
  v3 = (System_Object_array *)sub_1B88658(object___TypeInfo, 4LL);
  v35 = *v2;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v35, v4, v5, v6);
  if ( !v3 )
    sub_1B8880C(v7, v8);
  v11 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_18;
  }
  if ( !v3->max_length )
    goto LABEL_17;
  v3->m_Items[0] = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v3->m_Items, (int32_t)v11, v9, v10);
  v34 = v2[1];
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v34, v12, v13, v14);
  v17 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_18;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_17;
  v3->m_Items[1] = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[1], (int32_t)v17, v15, v16);
  v33 = v2[2];
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v33, v18, v19, v20);
  v23 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_18;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[2], (int32_t)v23, v21, v22);
  v32 = v2[3];
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v32, v24, v25, v26);
  v29 = (Il2CppObject *)v7;
  if ( v7 )
  {
    v7 = sub_1B886EC(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_18:
      v31 = sub_1B88830(v7);
      sub_1B886D8(v31, 0LL);
    }
  }
  if ( v3->max_length <= 3 )
LABEL_17:
    sub_1B88814(v7, v8);
  v3->m_Items[3] = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->m_Items[3], (int32_t)v29, v27, v28);
  return System_String__Format_61721540((System_String_o *)StringLiteral_21467/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v3, 0LL);
}