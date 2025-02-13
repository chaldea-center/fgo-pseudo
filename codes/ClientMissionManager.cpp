void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDBBB7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
    byte_4BDBBB7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v3,
    (const MethodInfo_33602A8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.progressDictionary, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  if ( (byte_4BDBBB5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
    byte_4BDBBB5 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v11.fields.missionTargetId = v6;
  *(_QWORD *)&v11.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v11, (const MethodInfo_3360E98 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_3360C78 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v9 = this->fields.progressDictionary;
  if ( !v9 )
LABEL_9:
    sub_1C22094(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  v10 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v9,
          v13,
          (const MethodInfo_3360BE0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v14.fields.missionTargetId = v6;
  *(_QWORD *)&v14.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v9,
    v14,
    v10,
    (const MethodInfo_3360C78 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_4BDBBB6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
    byte_4BDBBB6 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_1C22094(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_3360E2C *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
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
  __int64 v10; // x0
  int v11; // w8
  unsigned int v12; // w9
  char *v13; // x8
  __int64 v14; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 current_low; // x24
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v22; // x22
  __int64 v23; // x26
  __int64 v24; // x24
  const MethodInfo *v25; // x4
  Il2CppClass *v26; // x29
  const char *v27; // x8
  unsigned __int64 v28; // x28
  __int64 v29; // x24
  int *v30; // [xsp+8h] [xbp-B8h]
  unsigned int v31; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v32; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v35; // 0:x1.16

  if ( (byte_4BDBBB3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys_EventMissionConditionEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDBBB3 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  entity = 0LL;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_45;
  v7 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v10 = sub_1C21F6C(MasterData_object->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys_EventMissionConditionEntity___
                                                       + 40)
                                                     + 1].methodPtr);
    Instance = (char *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v10 + 8))(MasterData_object, v10);
    if ( !Instance )
      goto LABEL_45;
    v11 = *((_DWORD *)Instance + 6);
    if ( v11 >= 1 )
    {
      v12 = 0;
      v30 = (int *)Instance;
      while ( 1 )
      {
        if ( v12 >= v11 )
          sub_1C2209C(Instance, v6);
        v13 = &Instance[8 * v12];
        v14 = *((_QWORD *)v13 + 4);
        if ( !v14 )
          break;
        v31 = v12;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v13 + 4),
                             this->fields.deemedTime,
                             0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v32,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v34 = v32;
        while ( 1 )
        {
          v15 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v34,
                  (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v15 )
            break;
          if ( !v9 )
            sub_1C22094(v15, v16);
          current_low = LODWORD(v34.fields._current);
          v18 = DataMasterBase_object__object__int___TryGetEntity(
                  v9,
                  &entity,
                  (int32_t)v34.fields._current,
                  (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v18 )
          {
            if ( !entity )
              sub_1C22094(v18, v19);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_1C22094(v18, v19);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v22 = 0LL;
                v23 = current_low << 32;
                do
                {
                  if ( v22 >= (unsigned int)namespaze )
                    sub_1C2209C(v18, v19);
                  v24 = *((unsigned int *)&klass->_1.byval_arg.data + v22);
                  v18 = System_Collections_Generic_HashSet_int___Contains(
                          v7,
                          v24,
                          (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v18 )
                  {
                    if ( !entity )
                      sub_1C22094(v18, v19);
                    v26 = entity[2].klass;
                    if ( !v26 )
                      sub_1C22094(v18, v19);
                    v27 = v26->_1.namespaze;
                    if ( (int)v27 >= 1 )
                    {
                      v28 = 0LL;
                      v29 = v24 << 32;
                      do
                      {
                        if ( v28 >= (unsigned int)v27 )
                          sub_1C2209C(v18, v19);
                        *(_QWORD *)&v35.fields.missionTargetId = v23 | *(unsigned int *)(v14 + 32);
                        *(_QWORD *)&v35.fields.targetId = v29 | *((unsigned int *)&v26->_1.byval_arg.data + v28);
                        ClientMissionManager__AddProgress(this, v35, 1, v25);
                        LODWORD(v27) = v26->_1.namespaze;
                        ++v28;
                      }
                      while ( (__int64)v28 < (int)v27 );
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
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v34,
          (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v30;
        v11 = v30[6];
        v12 = v31 + 1;
        if ( (int)(v31 + 1) >= v11 )
          return;
      }
LABEL_45:
      sub_1C22094(Instance, v6);
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
  NetworkManager_c *v10; // x0
  System_Collections_Generic_HashSet_int__o *v11; // x24
  __int64 isClearMission; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  int v15; // w8
  __int64 v16; // x26
  unsigned int v17; // w28
  EventMissionConditionEntity_o *v18; // x27
  _BOOL8 v19; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 current_low; // x24
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v28; // x28
  __int64 v29; // x24
  const MethodInfo *v30; // x4
  int64_t userId; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v32; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v33; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v36; // 0:x1.16

  if ( (byte_4BDBBB4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys_EventMissionConditionEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDBBB4 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v33 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager_TypeInfo;
  }
  userId = v10->static_fields->userIdNumber;
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_51;
  v14 = sub_1C21F6C(Master_object->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys_EventMissionConditionEntity___
                                                 + 40)
                                               + 1].methodPtr);
  isClearMission = (*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v14 + 8))(Master_object, v14);
  if ( !isClearMission )
    goto LABEL_51;
  v15 = *(_DWORD *)(isClearMission + 24);
  v16 = isClearMission;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= v15 )
        sub_1C2209C(isClearMission, v13);
      v18 = *(EventMissionConditionEntity_o **)(v16 + 8LL * (int)v17 + 32);
      if ( !v18 || !v9 )
        break;
      if ( !UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)v9,
              &entity,
              userId,
              v18->fields.missionId,
              0LL) )
        goto LABEL_21;
      isClearMission = (__int64)entity;
      if ( !entity )
        break;
      isClearMission = UserEventMissionEntity__isClearMission(entity, 0LL);
      if ( (isClearMission & 1) == 0 )
      {
LABEL_21:
        isClearMission = (__int64)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                                    v18,
                                    this->fields.deemedTime,
                                    0LL);
        if ( !isClearMission )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v32,
          (System_Collections_Generic_HashSet_int__o *)isClearMission,
          (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = v32;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v11,
                (int32_t)i.fields._current,
                (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v19 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v19 )
            break;
          if ( !v11 )
            sub_1C22094(v19, v20);
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      }
      v15 = *(_DWORD *)(v16 + 24);
      if ( (int)++v17 >= v15 )
        goto LABEL_30;
    }
LABEL_51:
    sub_1C22094(isClearMission, v13);
  }
LABEL_30:
  if ( !v11 )
    goto LABEL_51;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v32,
    v11,
    (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = v32;
  while ( 1 )
  {
    v21 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v21 )
      break;
    if ( !v8 )
      sub_1C22094(v21, v22);
    current_low = LODWORD(i.fields._current);
    v24 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
            &v33,
            (int32_t)i.fields._current,
            (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v24 )
    {
      if ( !v33 )
        sub_1C22094(v24, v25);
      if ( LODWORD(v33[1].monitor) == 40 )
      {
        klass = v33[4].klass;
        if ( !klass )
          sub_1C22094(v24, v25);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v28 = 0LL;
          v29 = current_low << 32;
          do
          {
            if ( v28 >= (unsigned int)namespaze )
              sub_1C2209C(v24, v25);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v28) == eventId )
            {
              if ( !v33 )
                sub_1C22094(v24, v25);
              v24 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v33[2].klass,
                      targetGimmickId,
                      (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v24 )
              {
                if ( !v33 )
                  sub_1C22094(v24, v25);
                *(_QWORD *)&v36.fields.missionTargetId = v29 | HIDWORD(v33[1].klass);
                v36.fields.targetId = targetGimmickId;
                v36.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v36, 1, v30);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v28;
          }
          while ( (__int64)v28 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v26; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BDBBB1 & 1) == 0 )
  {
    sub_1C21E38(&EventMissionProgressRequest_Argument_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_EventMissionProgressRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
    byte_4BDBBB1 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v27,
    progressDictionary,
    (const MethodInfo_33610B4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v28,
            (const MethodInfo_3425174 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v28.fields._getEnumeratorRetType;
    if ( v28.fields._getEnumeratorRetType )
    {
      key = v28.fields._current.fields.key;
      value = v28.fields._current.fields.value;
      v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_1C22084(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v12,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v6 )
        sub_1C22094(v13, v14);
      items = v6->fields._items;
      v22 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C22094(v13, v14);
      size = v6->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v12,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v12;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v12, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v28,
    (const MethodInfo_34252A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
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
    v26 = (EventMissionProgressRequest_Argument_o *)sub_1C22084(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v26,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v6,
      0LL);
    if ( Request_object )
    {
      EventMissionProgressRequest__beginRequest((EventMissionProgressRequest_o *)Request_object, v26, 0LL);
      goto LABEL_22;
    }
LABEL_25:
    sub_1C22094(progressDictionary, v7);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v7);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDBBB2 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDBBB2 = 1;
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
  if ( (byte_4BDBBB8 & 1) == 0 )
  {
    sub_1C21E38(&ClientMissionManager_ProgressDictionaryKey_TypeInfo);
    byte_4BDBBB8 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_39614112(
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
  if ( (byte_4BDBBB9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_ValueTuple_int__int__int__int__GetHashCode__);
    sub_1C21E38(&Method_System_ValueTuple_int__int__int__int___ctor__);
    byte_4BDBBB9 = 1;
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
    (const MethodInfo_39B7778 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v8.fields.Item3 = *(_OWORD *)&v8.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v8.fields.Item3,
           (const MethodInfo_39B84D8 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x20
  __int64 v47; // x0
  int v48; // [xsp+8h] [xbp-38h] BYREF
  int v49; // [xsp+Ch] [xbp-34h] BYREF
  int v50; // [xsp+18h] [xbp-28h] BYREF
  int v51; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4BDBBBA & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&StringLiteral_21853/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/);
    byte_4BDBBBA = 1;
  }
  v3 = (System_Object_array *)sub_1C21EE0(object___TypeInfo, 4LL);
  v51 = *v2;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v51, v4, v5, v6);
  if ( !v3 )
    sub_1C22094(v7, v8);
  v15 = v7;
  if ( v7 )
  {
    v7 = sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_18;
  }
  if ( !v3->max_length )
    goto LABEL_17;
  v3->m_Items[0] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)v3->m_Items, v15, v9, v10, v11, v12, v13, v14);
  v50 = v2[1];
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v50, v16, v17, v18);
  v25 = v7;
  if ( v7 )
  {
    v7 = sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_18;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_17;
  v3->m_Items[1] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v49 = v2[2];
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v49, v26, v27, v28);
  v35 = v7;
  if ( v7 )
  {
    v7 = sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
      goto LABEL_18;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = (Il2CppObject *)v35;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
  v48 = v2[3];
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v48, v36, v37, v38);
  v45 = v7;
  if ( v7 )
  {
    v7 = sub_1C21F74(v7, v3->obj.klass->_1.element_class);
    if ( !v7 )
    {
LABEL_18:
      v47 = sub_1C220B8(v7);
      sub_1C21F60(v47, 0LL);
    }
  }
  if ( v3->max_length <= 3 )
LABEL_17:
    sub_1C2209C(v7, v8);
  v3->m_Items[3] = (Il2CppObject *)v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
  return System_String__Format_63129984((System_String_o *)StringLiteral_21853/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v3, 0LL);
}