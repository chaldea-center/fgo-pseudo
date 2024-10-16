void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB53E0 & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      method);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v4);
    byte_4AB53E0 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_1BAB668(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v5,
    (const MethodInfo_325D174 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.progressDictionary, (int32_t)v5, v6, v7);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_378A644 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
}


void __fastcall ClientMissionManager__AddProgress(
        ClientMissionManager_o *this,
        ClientMissionManager_ProgressDictionaryKey_o key,
        int32_t valueToAdd,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x21
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v11; // x22
  int32_t v12; // w3
  ClientMissionManager_ProgressDictionaryKey_o v13; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v14; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v15; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v16; // 0:x1.16

  v5 = *(_QWORD *)&key.fields.targetId;
  v6 = *(_QWORD *)&key.fields.missionTargetId;
  if ( (byte_4AB53DE & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      *(_QWORD *)&key.fields.missionTargetId);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v8);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v9);
    byte_4AB53DE = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v13, (const MethodInfo_325DD64 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
  if ( ((unsigned __int8)progressDictionary & 1) == 0 )
  {
    progressDictionary = this->fields.progressDictionary;
    if ( !progressDictionary )
      goto LABEL_9;
    *(_QWORD *)&v14.fields.missionTargetId = v6;
    *(_QWORD *)&v14.fields.targetId = v5;
    System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
      progressDictionary,
      v14,
      0,
      (const MethodInfo_325DB44 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v11 = this->fields.progressDictionary;
  if ( !v11 )
LABEL_9:
    sub_1BAB678(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v15.fields.missionTargetId = v6;
  *(_QWORD *)&v15.fields.targetId = v5;
  v12 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v11,
          v15,
          (const MethodInfo_325DAAC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v16.fields.missionTargetId = v6;
  *(_QWORD *)&v16.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v11,
    v16,
    v12,
    (const MethodInfo_325DB44 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_4AB53DF & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      method);
    byte_4AB53DF = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_1BAB678(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_325DCF8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClientMissionManager__MyRoomPlayVoice(
        ClientMissionManager_o *this,
        int32_t svtId,
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
  __int64 v14; // x1
  __int64 v15; // x1
  char *Instance; // x0
  __int64 v17; // x1
  System_Collections_Generic_HashSet_int__o *v18; // x20
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  int v21; // w8
  unsigned int v22; // w9
  char *v23; // x8
  __int64 v24; // x23
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 current_low; // x24
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v32; // x22
  __int64 v33; // x26
  __int64 v34; // x24
  const MethodInfo *v35; // x4
  Il2CppClass *v36; // x29
  const char *v37; // x8
  unsigned __int64 v38; // x28
  __int64 v39; // x24
  int *v40; // [xsp+8h] [xbp-B8h]
  unsigned int v41; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v42; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v44; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v45; // 0:x1.16

  if ( (byte_4AB53DC & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&svtId);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v6);
    sub_1BAB41C(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v7);
    sub_1BAB41C(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__Contains__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4AB53DC = 1;
  }
  memset(&v44, 0, sizeof(v44));
  entity = 0LL;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_45;
  v18 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (char *)DataMasterBase__getEntitys_object_(
                         (DataMasterBase_o *)MasterData_object,
                         (const MethodInfo_2EC5E5C *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_45;
    v21 = *((_DWORD *)Instance + 6);
    if ( v21 >= 1 )
    {
      v22 = 0;
      v40 = (int *)Instance;
      while ( 1 )
      {
        if ( v22 >= v21 )
          sub_1BAB680(Instance, v17);
        v23 = &Instance[8 * v22];
        v24 = *((_QWORD *)v23 + 4);
        if ( !v24 )
          break;
        v41 = v22;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v23 + 4),
                             this->fields.deemedTime,
                             0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v42,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_34021C0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v44 = v42;
        while ( 1 )
        {
          v25 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v44,
                  (const MethodInfo_32C0944 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v25 )
            break;
          if ( !v20 )
            sub_1BAB678(v25, v26);
          current_low = LODWORD(v44.fields._current);
          v28 = DataMasterBase_object__object__int___TryGetEntity(
                  v20,
                  &entity,
                  (int32_t)v44.fields._current,
                  (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v28 )
          {
            if ( !entity )
              sub_1BAB678(v28, v29);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_1BAB678(v28, v29);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v32 = 0LL;
                v33 = current_low << 32;
                do
                {
                  if ( v32 >= (unsigned int)namespaze )
                    sub_1BAB680(v28, v29);
                  v34 = *((unsigned int *)&klass->_1.byval_arg.data + v32);
                  v28 = System_Collections_Generic_HashSet_int___Contains(
                          v18,
                          v34,
                          (const MethodInfo_3401D2C *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v28 )
                  {
                    if ( !entity )
                      sub_1BAB678(v28, v29);
                    v36 = entity[2].klass;
                    if ( !v36 )
                      sub_1BAB678(v28, v29);
                    v37 = v36->_1.namespaze;
                    if ( (int)v37 >= 1 )
                    {
                      v38 = 0LL;
                      v39 = v34 << 32;
                      do
                      {
                        if ( v38 >= (unsigned int)v37 )
                          sub_1BAB680(v28, v29);
                        *(_QWORD *)&v45.fields.missionTargetId = v33 | *(unsigned int *)(v24 + 32);
                        *(_QWORD *)&v45.fields.targetId = v39 | *((unsigned int *)&v36->_1.byval_arg.data + v38);
                        ClientMissionManager__AddProgress(this, v45, 1, v35);
                        LODWORD(v37) = v36->_1.namespaze;
                        ++v38;
                      }
                      while ( (__int64)v38 < (int)v37 );
                    }
                  }
                  LODWORD(namespaze) = klass->_1.namespaze;
                  ++v32;
                }
                while ( (__int64)v32 < (int)namespaze );
              }
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v44,
          (const MethodInfo_32C0940 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v40;
        v21 = v40[6];
        v22 = v41 + 1;
        if ( (int)(v41 + 1) >= v21 )
          return;
      }
LABEL_45:
      sub_1BAB678(Instance, v17);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClientMissionManager__OnClickMapGimmick(
        ClientMissionManager_o *this,
        int32_t eventId,
        int32_t targetGimmickId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *Master_object; // x26
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x23
  System_Collections_Generic_HashSet_int__o *v24; // x24
  void *Entitys_object; // x0
  __int64 v26; // x1
  int v27; // w8
  void *v28; // x26
  unsigned int v29; // w28
  EventMissionConditionEntity_o *v30; // x27
  _BOOL8 v31; // x0
  __int64 v32; // x1
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 current_low; // x24
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v40; // x28
  __int64 v41; // x24
  const MethodInfo *v42; // x4
  int64_t userId; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v44; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v45; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v48; // 0:x1.16

  if ( (byte_4AB53DD & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___, *(_QWORD *)&eventId);
    sub_1BAB41C(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserEventMissionMaster___, v8);
    sub_1BAB41C(&DataManager_TypeInfo, v9);
    sub_1BAB41C(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v10);
    sub_1BAB41C(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v11);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__Add__, v16);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int___ctor__, v18);
    sub_1BAB41C(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_1BAB41C(&NetworkManager_TypeInfo, v20);
    byte_4AB53DD = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v45 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v23 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  userId = NetworkManager__get_UserId(0LL);
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_1BAB668(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_3401638 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_47;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Master_object,
                     (const MethodInfo_2EC5E5C *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
  if ( !Entitys_object )
    goto LABEL_47;
  v27 = *((_DWORD *)Entitys_object + 6);
  v28 = Entitys_object;
  if ( v27 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= v27 )
        sub_1BAB680(Entitys_object, v26);
      v30 = (EventMissionConditionEntity_o *)*((_QWORD *)v28 + (int)v29 + 4);
      if ( !v30 || !v23 )
        break;
      if ( !UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)v23,
              &entity,
              userId,
              v30->fields.missionId,
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
                           v30,
                           this->fields.deemedTime,
                           0LL);
        if ( !Entitys_object )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v44,
          (System_Collections_Generic_HashSet_int__o *)Entitys_object,
          (const MethodInfo_34021C0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = v44;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v24,
                (int32_t)i.fields._current,
                (const MethodInfo_340283C *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v31 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_32C0944 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v31 )
            break;
          if ( !v24 )
            sub_1BAB678(v31, v32);
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_32C0940 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      }
      v27 = *((_DWORD *)v28 + 6);
      if ( (int)++v29 >= v27 )
        goto LABEL_26;
    }
LABEL_47:
    sub_1BAB678(Entitys_object, v26);
  }
LABEL_26:
  if ( !v24 )
    goto LABEL_47;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v44,
    v24,
    (const MethodInfo_34021C0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = v44;
  while ( 1 )
  {
    v33 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_32C0944 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v33 )
      break;
    if ( !v22 )
      sub_1BAB678(v33, v34);
    current_low = LODWORD(i.fields._current);
    v36 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
            &v45,
            (int32_t)i.fields._current,
            (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v36 )
    {
      if ( !v45 )
        sub_1BAB678(v36, v37);
      if ( LODWORD(v45[1].monitor) == 40 )
      {
        klass = v45[4].klass;
        if ( !klass )
          sub_1BAB678(v36, v37);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v40 = 0LL;
          v41 = current_low << 32;
          do
          {
            if ( v40 >= (unsigned int)namespaze )
              sub_1BAB680(v36, v37);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v40) == eventId )
            {
              if ( !v45 )
                sub_1BAB678(v36, v37);
              v36 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v45[2].klass,
                      targetGimmickId,
                      (const MethodInfo_2EDD8B4 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v36 )
              {
                if ( !v45 )
                  sub_1BAB678(v36, v37);
                *(_QWORD *)&v48.fields.missionTargetId = v41 | HIDWORD(v45[1].klass);
                v48.fields.targetId = targetGimmickId;
                v48.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v48, 1, v42);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v40;
          }
          while ( (__int64)v40 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_32C0940 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void __fastcall ClientMissionManager__SendRequest(
        ClientMissionManager_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Request_object; // x20
  System_Collections_Generic_List_object__o *v19; // x21
  const MethodInfo *v20; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v35; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4AB53DA & 1) == 0 )
  {
    sub_1BAB41C(&EventMissionProgressRequest_Argument_TypeInfo, callback);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v5);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v6);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v7);
    sub_1BAB41C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v8);
    sub_1BAB41C(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v9);
    sub_1BAB41C(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__, v12);
    sub_1BAB41C(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v13);
    sub_1BAB41C(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v14);
    sub_1BAB41C(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v15);
    sub_1BAB41C(&NetworkManager_TypeInfo, v16);
    sub_1BAB41C(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v17);
    byte_4AB53DA = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v36,
    progressDictionary,
    (const MethodInfo_325DF80 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v37,
            (const MethodInfo_332462C *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v37.fields._getEnumeratorRetType;
    if ( v37.fields._getEnumeratorRetType )
    {
      key = v37.fields._current.fields.key;
      value = v37.fields._current.fields.value;
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_1BAB668(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v25,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v19 )
        sub_1BAB678(v26, v27);
      items = v19->fields._items;
      v31 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1BAB678(v26, v27);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v25,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v25;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v25, v28, v29);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v37,
    (const MethodInfo_3324760 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v19 )
    goto LABEL_25;
  if ( v19->fields._size >= 1 )
  {
    deemedTime = this->fields.deemedTime;
    if ( !deemedTime )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      deemedTime = NetworkManager__getTime(0LL);
    }
    v35 = (EventMissionProgressRequest_Argument_o *)sub_1BAB668(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v35,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v19,
      0LL);
    if ( Request_object )
    {
      EventMissionProgressRequest__beginRequest((EventMissionProgressRequest_o *)Request_object, v35, 0LL);
      goto LABEL_22;
    }
LABEL_25:
    sub_1BAB678(progressDictionary, v20);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v20);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB53DB & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, method);
    byte_4AB53DB = 1;
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
  if ( (byte_4AB53E1 & 1) == 0 )
  {
    sub_1BAB41C(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.targetId);
    byte_4AB53E1 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_38748372(
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
  __int64 v3; // x1
  int32_t v4; // w1
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w4
  System_ValueTuple_T1__T2__T3__T4__o v9; // [xsp+0h] [xbp-50h] BYREF

  v2 = *(int32_t **)&this.fields.missionTargetId;
  if ( (byte_4AB53E2 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, *(_QWORD *)&this.fields.targetId);
    sub_1BAB41C(&Method_System_ValueTuple_int__int__int__int___ctor__, v3);
    byte_4AB53E2 = 1;
  }
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  v7 = v2[3];
  memset(&v9, 0, sizeof(v9));
  System_ValueTuple_int__int__int__int____ctor(
    &v9,
    v4,
    v5,
    v6,
    v7,
    (const MethodInfo_38B091C *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v9.fields.Item3 = *(_OWORD *)&v9.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v9.fields.Item3,
           (const MethodInfo_38B167C *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}


System_String_o *__fastcall ClientMissionManager_ProgressDictionaryKey__ToString(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  int *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  System_Object_array *v5; // x19
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x20
  __int64 v33; // x0
  int v34; // [xsp+8h] [xbp-38h] BYREF
  int v35; // [xsp+Ch] [xbp-34h] BYREF
  int v36; // [xsp+18h] [xbp-28h] BYREF
  int v37; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4AB53E3 & 1) == 0 )
  {
    sub_1BAB41C(&int_TypeInfo, *(_QWORD *)&this.fields.targetId);
    sub_1BAB41C(&object___TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_21498/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v4);
    byte_4AB53E3 = 1;
  }
  v5 = (System_Object_array *)sub_1BAB4C4(object___TypeInfo, 4LL);
  v37 = *v2;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v37, v6, v7, v8);
  if ( !v5 )
    sub_1BAB678(v9, v10);
  v13 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1BAB558(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( !v5->max_length )
    goto LABEL_17;
  v5->m_Items[0] = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)v5->m_Items, (int32_t)v13, v11, v12);
  v36 = v2[1];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v36, v14, v15, v16);
  v19 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1BAB558(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_17;
  v5->m_Items[1] = v19;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->m_Items[1], (int32_t)v19, v17, v18);
  v35 = v2[2];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v35, v20, v21, v22);
  v25 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1BAB558(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_17;
  v5->m_Items[2] = v25;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->m_Items[2], (int32_t)v25, v23, v24);
  v34 = v2[3];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v34, v26, v27, v28);
  v31 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1BAB558(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_18:
      v33 = sub_1BAB69C(v9);
      sub_1BAB544(v33, 0LL);
    }
  }
  if ( v5->max_length <= 3 )
LABEL_17:
    sub_1BAB680(v9, v10);
  v5->m_Items[3] = v31;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->m_Items[3], (int32_t)v31, v29, v30);
  return System_String__Format_62062636((System_String_o *)StringLiteral_21498/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v5, 0LL);
}