void ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596FE70 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
    byte_596FE70 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v3,
    (const MethodInfo_406BDFC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.progressDictionary, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  if ( (byte_596FE6E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
    byte_596FE6E = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v11.fields.missionTargetId = v6;
  *(_QWORD *)&v11.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v11, (const MethodInfo_406C9CC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_406C7A4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v9 = this->fields.progressDictionary;
  if ( !v9 )
LABEL_9:
    sub_2213CDC(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  v10 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v9,
          v13,
          (const MethodInfo_406C70C *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v14.fields.missionTargetId = v6;
  *(_QWORD *)&v14.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v9,
    v14,
    v10,
    (const MethodInfo_406C7A4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_596FE6F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
    byte_596FE6F = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0;
  if ( !progressDictionary )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_406C960 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
}


void ClientMissionManager__MyRoomPlayVoice(ClientMissionManager_o *this, int32_t svtId, const MethodInfo *method)
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
  Il2CppClass *klass; // x26
  const char *namespaze; // x8
  __int64 v21; // x25
  unsigned __int64 v22; // x22
  __int64 v23; // x24
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  Il2CppClass *v26; // x28
  const char *v27; // x8
  __int64 v28; // x24
  unsigned __int64 v29; // x27
  int *v30; // [xsp+8h] [xbp-B8h]
  unsigned int v31; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v32; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v35; // 0:x1.16

  if ( (byte_596FE6C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596FE6C = 1;
  }
  memset(&v34, 0, sizeof(v34));
  entity = 0;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0);
  if ( !Instance )
    goto LABEL_45;
  v7 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (char *)DataMasterBase_object__object__object___getEntitys(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         (const MethodInfo_3F14B68 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
    if ( !Instance )
      goto LABEL_45;
    v10 = *((_DWORD *)Instance + 6);
    if ( v10 >= 1 )
    {
      v11 = 0;
      v30 = (int *)Instance;
      while ( 1 )
      {
        if ( v11 >= v10 )
          sub_2213CE4(Instance);
        v12 = &Instance[8 * v11];
        v31 = v11;
        v13 = *((_QWORD *)v12 + 4);
        if ( !v13 )
          break;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v12 + 4),
                             this->fields.deemedTime,
                             0);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v32,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v34 = v32;
        v32.fields._set = 0;
        *(_QWORD *)&v32.fields._index = &v34;
        while ( 1 )
        {
          v14 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v34,
                  (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v14 )
            break;
          if ( !v9 )
            sub_2213CDC(v14, v15);
          current_low = LODWORD(v34.fields._current);
          v17 = DataMasterBase_object__object__int___TryGetEntity(
                  v9,
                  &entity,
                  (int32_t)v34.fields._current,
                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v17 )
          {
            if ( !entity )
              sub_2213CDC(v17, v18);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_2213CDC(v17, v18);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v21 = current_low << 32;
                v22 = 0;
                do
                {
                  if ( v22 >= (unsigned int)namespaze )
                    sub_2213CE4(v17);
                  v23 = *((unsigned int *)&klass->_1.byval_arg.data + v22);
                  v17 = System_Collections_Generic_HashSet_int___Contains(
                          v7,
                          v23,
                          (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v17 )
                  {
                    if ( !entity )
                      sub_2213CDC(v17, v24);
                    v26 = entity[2].klass;
                    if ( !v26 )
                      sub_2213CDC(v17, v24);
                    v27 = v26->_1.namespaze;
                    if ( (int)v27 >= 1 )
                    {
                      v28 = v23 << 32;
                      v29 = 0;
                      do
                      {
                        if ( v29 >= (unsigned int)v27 )
                          sub_2213CE4(v17);
                        *(_QWORD *)&v35.fields.missionTargetId = v21 | *(unsigned int *)(v13 + 32);
                        *(_QWORD *)&v35.fields.targetId = v28 | *((unsigned int *)&v26->_1.byval_arg.data + v29);
                        ClientMissionManager__AddProgress(this, v35, 1, v25);
                        LODWORD(v27) = v26->_1.namespaze;
                        ++v29;
                      }
                      while ( (__int64)v29 < (int)v27 );
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
          (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v30;
        v10 = v30[6];
        v11 = v31 + 1;
        if ( (int)(v31 + 1) >= v10 )
          return;
      }
LABEL_45:
      sub_2213CDC(Instance, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ClientMissionManager__OnClickMapGimmick(
        ClientMissionManager_o *this,
        int32_t eventId,
        int32_t targetGimmickId,
        const MethodInfo *method)
{
  int v6; // w8
  Il2CppObject *Master_object; // x26
  Il2CppObject *v8; // x22
  __int64 v9; // x1
  NetworkManager_c *v10; // x0
  System_Collections_Generic_HashSet_int__o *v11; // x24
  _DWORD *Entitys; // x0
  __int64 v13; // x1
  _DWORD *v14; // x26
  int v15; // w8
  unsigned int v16; // w25
  EventMissionConditionEntity_o *v17; // x27
  _BOOL4 isClearMission; // w21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  int32_t current; // w27
  _BOOL8 v22; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 current_low; // x24
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppClass *klass; // x21
  const char *namespaze; // x8
  __int64 v31; // x24
  unsigned __int64 v32; // x26
  const MethodInfo *v33; // x4
  int64_t userId; // [xsp+0h] [xbp-C0h]
  UserEventMissionMaster_o *v35; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v37; // [xsp+18h] [xbp-A8h] BYREF
  Il2CppObject *v38; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *v39; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v40; // [xsp+40h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v42; // 0:x1.16

  if ( (byte_596FE6D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596FE6D = 1;
  }
  entity = 0;
  memset(&v40, 0, sizeof(v40));
  v6 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v38 = 0;
  v39 = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v8 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v35 = (UserEventMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
    v10 = NetworkManager_TypeInfo;
  }
  userId = v10->static_fields->userIdNumber;
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_58;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (const MethodInfo_3F14B68 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
  if ( !Entitys )
    goto LABEL_58;
  v14 = Entitys;
  v15 = Entitys[6];
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v15 )
        sub_2213CE4(Entitys);
      v17 = *(EventMissionConditionEntity_o **)&v14[2 * v16 + 8];
      if ( !v17 )
        break;
      Entitys = v35;
      if ( !v35 )
        break;
      if ( UserEventMissionMaster__TryGetEntity(v35, &entity, userId, v17->fields.missionId, 0) )
      {
        Entitys = entity;
        if ( !entity )
          break;
        isClearMission = UserEventMissionEntity__isClearMission(entity, 0);
      }
      else
      {
        isClearMission = 0;
      }
      Entitys = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                  v17,
                  this->fields.deemedTime,
                  0);
      if ( !Entitys )
        break;
      System_Collections_Generic_HashSet_int___GetEnumerator(
        &v37,
        (System_Collections_Generic_HashSet_int__o *)Entitys,
        (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
      v40 = v37;
      v37.fields._set = 0;
      *(_QWORD *)&v37.fields._index = &v40;
      while ( 1 )
      {
        v19 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                &v40,
                (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
        if ( !v19 )
          break;
        if ( !v8 )
          sub_2213CDC(v19, v20);
        current = (int32_t)v40.fields._current;
        v22 = DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                &v39,
                (int32_t)v40.fields._current,
                (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( v22 )
        {
          if ( !isClearMission )
            goto LABEL_30;
          if ( !v39 )
            sub_2213CDC(v22, v23);
          if ( LODWORD(v39[1].monitor) == 44 )
          {
LABEL_30:
            if ( !v11 )
              sub_2213CDC(v22, v23);
            System_Collections_Generic_HashSet_int___Add(
              v11,
              current,
              (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
        &v40,
        (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      v15 = v14[6];
      if ( (int)++v16 >= v15 )
        goto LABEL_37;
    }
LABEL_58:
    sub_2213CDC(Entitys, v13);
  }
LABEL_37:
  if ( !v11 )
    goto LABEL_58;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v37,
    v11,
    (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v40 = v37;
  v37.fields._set = 0;
  *(_QWORD *)&v37.fields._index = &v40;
  while ( 1 )
  {
    v24 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v40,
            (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v24 )
      break;
    if ( !v8 )
      sub_2213CDC(v24, v25);
    current_low = LODWORD(v40.fields._current);
    v27 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
            &v38,
            (int32_t)v40.fields._current,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v27 )
    {
      if ( !v38 )
        sub_2213CDC(v27, v28);
      if ( (LODWORD(v38[1].monitor) | 4) == 0x2C )
      {
        klass = v38[4].klass;
        if ( !klass )
          sub_2213CDC(v27, v28);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v31 = current_low << 32;
          v32 = 0;
          do
          {
            if ( v32 >= (unsigned int)namespaze )
              sub_2213CE4(v27);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v32) == eventId )
            {
              if ( !v38 )
                sub_2213CDC(v27, v28);
              v27 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v38[2].klass,
                      targetGimmickId,
                      (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v27 )
              {
                if ( !v38 )
                  sub_2213CDC(v27, v28);
                *(_QWORD *)&v42.fields.missionTargetId = v31 | HIDWORD(v38[1].klass);
                v42.fields.targetId = targetGimmickId;
                v42.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v42, 1, v33);
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
    &v40,
    (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void ClientMissionManager__SendRequest(
        ClientMissionManager_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Request_object; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  const MethodInfo *v8; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  int32_t getEnumeratorRetType; // w23
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v26; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_596FE6A & 1) == 0 )
  {
    sub_2213A60(&EventMissionProgressRequest_Argument_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_EventMissionProgressRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
    byte_596FE6A = 1;
  }
  v5 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v28, 0, sizeof(v28));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, callback);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v27,
    progressDictionary,
    (const MethodInfo_406CBD4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v28 = v27;
  v27.fields._dictionary = 0;
  *(_QWORD *)&v27.fields._version = &v28;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v28,
            (const MethodInfo_417DCB8 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v28.fields._getEnumeratorRetType;
    if ( v28.fields._getEnumeratorRetType )
    {
      current = v28.fields._current;
      v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_2213CCC(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v12,
        (int32_t)current.fields.key,
        SHIDWORD(current.fields.key),
        (int32_t)current.fields.value,
        SHIDWORD(current.fields.value),
        getEnumeratorRetType,
        0);
      if ( !v7
        || (items = v7->fields._items,
            v22 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_2213CDC(v13, v14);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v12,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v12;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v12, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v28,
    (const MethodInfo_417DDF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v7 )
    goto LABEL_24;
  if ( v7->fields._size >= 1 )
  {
    deemedTime = this->fields.deemedTime;
    if ( !deemedTime )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
      deemedTime = NetworkManager__getTime(0);
    }
    v26 = (EventMissionProgressRequest_Argument_o *)sub_2213CCC(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v26,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v7,
      0);
    if ( Request_object )
    {
      EventMissionProgressRequest__beginRequest((EventMissionProgressRequest_o *)Request_object, v26, 0);
      goto LABEL_22;
    }
LABEL_24:
    sub_2213CDC(progressDictionary, v8);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v8);
}


void ClientMissionManager__SetCurrentTimeAsDeemedTime(ClientMissionManager_o *this, const MethodInfo *method)
{
  if ( (byte_596FE6B & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596FE6B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  if ( (byte_596FE71 & 1) == 0 )
  {
    sub_2213A60(&ClientMissionManager_ProgressDictionaryKey_TypeInfo);
    byte_596FE71 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool ClientMissionManager_ProgressDictionaryKey__Equals_48217144(
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
  if ( (byte_596FE72 & 1) == 0 )
  {
    sub_2213A60(&Method_System_ValueTuple_int__int__int__int__GetHashCode__);
    sub_2213A60(&Method_System_ValueTuple_int__int__int__int___ctor__);
    byte_596FE72 = 1;
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
    (const MethodInfo_3D178B0 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v8.fields.Item3 = *(_OWORD *)&v8.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v8.fields.Item3,
           (const MethodInfo_3D18634 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}


System_String_o *ClientMissionManager_ProgressDictionaryKey__ToString(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  int *v2; // x20
  System_Object_array *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *v12; // x21
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  Il2CppObject *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  Il2CppObject *v34; // x20
  __int64 v36; // x0
  int v37; // [xsp+8h] [xbp-38h] BYREF
  int v38; // [xsp+Ch] [xbp-34h] BYREF
  int v39; // [xsp+18h] [xbp-28h] BYREF
  int v40; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_596FE73 & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&StringLiteral_22713/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/);
    byte_596FE73 = 1;
  }
  v3 = (System_Object_array *)sub_2213B20(object___TypeInfo, 4);
  v40 = *v2;
  v4 = j_il2cpp_value_box_0(qword_5984348, &v40);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  v12 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_17;
  v3->m_Items[0] = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v3->m_Items, (int32_t)v12, v6, v7, v8, v9, v10, v11);
  v39 = v2[1];
  v4 = j_il2cpp_value_box_0(qword_5984348, &v39);
  v20 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( (v3->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  v3->m_Items[1] = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[1], (int32_t)v20, v14, v15, v16, v17, v18, v19);
  v38 = v2[2];
  v4 = j_il2cpp_value_box_0(qword_5984348, &v38);
  v27 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[2], (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v37 = v2[3];
  v4 = j_il2cpp_value_box_0(qword_5984348, &v37);
  v34 = (Il2CppObject *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_18:
      v36 = sub_2213D00(v4, v13);
      sub_2213BA0(v36, 0);
    }
  }
  if ( (v3->max_length & 0xFFFFFFFC) == 0 )
LABEL_17:
    sub_2213CE4(v4);
  v3->m_Items[3] = v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[3], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  return System_String__Format_75698016((System_String_o *)StringLiteral_22713/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v3, 0);
}