void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_421471B & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v5);
    byte_421471B = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo,
                                                                                                     method,
                                                                                                     v2);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v6,
    (const MethodInfo_163A8C8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.progressDictionary,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  if ( (byte_4214719 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      *(_QWORD *)&key.fields.missionTargetId);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v9);
    byte_4214719 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v13, (const MethodInfo_163B704 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_163B458 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v11 = this->fields.progressDictionary;
  if ( !v11 )
LABEL_9:
    sub_B0D97C(progressDictionary);
  *(_QWORD *)&v15.fields.missionTargetId = v6;
  *(_QWORD *)&v15.fields.targetId = v5;
  v12 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v11,
          v15,
          (const MethodInfo_163B3BC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v16.fields.missionTargetId = v6;
  *(_QWORD *)&v16.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v11,
    v16,
    v12,
    (const MethodInfo_163B458 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_421471A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      method);
    byte_421471A = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_163B66C *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
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
  void *Instance; // x0
  System_Collections_Generic_HashSet_int__o *v17; // x20
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x22
  int v19; // w8
  int *v20; // x21
  unsigned int v21; // w22
  int v22; // w10
  EventMissionConditionEntity_o *v23; // x23
  __int64 v24; // x8
  unsigned __int64 v25; // x27
  int32_t v26; // w25
  _BOOL8 v27; // x0
  const MethodInfo *v28; // x6
  struct System_String_o *name; // x28
  System_String_c *klass; // x8
  unsigned __int64 v31; // x21
  const MethodInfo *v32; // x4
  int32_t current; // w24
  __int64 v34; // x26
  int v35; // w24
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  int *v39; // [xsp+0h] [xbp-C0h]
  int v40; // [xsp+8h] [xbp-B8h]
  unsigned int v41; // [xsp+Ch] [xbp-B4h]
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // [xsp+10h] [xbp-B0h]
  _BYTE v43[28]; // [xsp+18h] [xbp-A8h] BYREF
  int v44; // [xsp+34h] [xbp-8Ch]
  ClientMissionManager_ProgressDictionaryKey_o v45; // [xsp+38h] [xbp-88h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+50h] [xbp-70h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v48; // 0:x0.16

  if ( (byte_4214717 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v6);
    sub_B0D8A4(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v7);
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4214717 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  entity = 0LL;
  *(_QWORD *)&v45.fields.missionTargetId = 0LL;
  *(_QWORD *)&v45.fields.targetId = 0LL;
  v44 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v17 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_47;
    Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                 MasterData_WarQuestSelectionMaster,
                 (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_47;
    v19 = *((_DWORD *)Instance + 6);
    v20 = (int *)Instance;
    if ( v19 >= 1 )
    {
      v21 = 0;
      v22 = 0;
      v39 = (int *)Instance;
      while ( 1 )
      {
        if ( v21 >= v19 )
        {
          v38 = sub_B0D9A8(Instance);
          sub_B0D948(v38, 0LL);
        }
        v23 = *(EventMissionConditionEntity_o **)&v20[2 * v21 + 8];
        v40 = v22;
        if ( !v23 )
          break;
        v41 = v21;
        Instance = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                     v23,
                     this->fields.deemedTime,
                     0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v43,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v47 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v43;
        while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v47,
                  (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
        {
          if ( !v42 )
            sub_B0D97C(0LL);
          current = (int32_t)v47.fields._current;
          v27 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v42,
                  &entity,
                  (int32_t)v47.fields._current,
                  (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v27 )
          {
            if ( !entity )
              sub_B0D97C(v27);
            if ( LODWORD(entity->fields.age) == 39 )
            {
              v34 = *(_QWORD *)&entity->fields.flag;
              if ( !v34 )
                sub_B0D97C(v27);
              v24 = *(_QWORD *)(v34 + 24);
              if ( (int)v24 >= 1 )
              {
                v25 = 0LL;
                do
                {
                  if ( v25 >= (unsigned int)v24 )
                  {
                    v37 = sub_B0D9A8(v27);
                    sub_B0D948(v37, 0LL);
                  }
                  v26 = *(_DWORD *)(v34 + 4 * v25 + 32);
                  v27 = System_Collections_Generic_HashSet_int___Contains(
                          v17,
                          v26,
                          (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v27 )
                  {
                    if ( !entity )
                      sub_B0D97C(v27);
                    name = entity->fields.name;
                    if ( !name )
                      sub_B0D97C(v27);
                    klass = name[1].klass;
                    if ( (int)klass >= 1 )
                    {
                      v31 = 0LL;
                      do
                      {
                        if ( v31 >= (unsigned int)klass )
                        {
                          v36 = sub_B0D9A8(v27);
                          sub_B0D948(v36, 0LL);
                        }
                        *(_QWORD *)&v48.fields.targetId = (unsigned int)v23->fields.missionTargetId;
                        *(_QWORD *)&v48.fields.missionTargetId = &v45;
                        ClientMissionManager_ProgressDictionaryKey___ctor(
                          v48,
                          current,
                          *((_DWORD *)&name[1].monitor + v31),
                          v26,
                          0,
                          v28);
                        ClientMissionManager__AddProgress(this, v45, 1, v32);
                        LODWORD(klass) = name[1].klass;
                        ++v31;
                      }
                      while ( (__int64)v31 < (int)klass );
                    }
                  }
                  LODWORD(v24) = *(_DWORD *)(v34 + 24);
                  ++v25;
                }
                while ( (__int64)v25 < (int)v24 );
              }
            }
          }
        }
        *(_DWORD *)&v43[4 * v40 + 24] = 259;
        v35 = ++v44;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v47,
          (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        v20 = v39;
        v22 = v35;
        if ( v35 && *(_DWORD *)&v43[4 * v35 + 20] == 259 )
        {
          v22 = v35 - 1;
          v44 = v35 - 1;
        }
        v19 = v39[6];
        ++v21;
        if ( (int)(v41 + 1) >= v19 )
          return;
      }
LABEL_47:
      sub_B0D97C(Instance);
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
  DataMasterBase_o *Master_WarQuestSelectionMaster; // x26
  UserEventMissionMaster_o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_HashSet_int__o *v25; // x24
  void *Entitys_WarQuestSelectionEntity; // x0
  int v27; // w8
  void *v28; // x26
  unsigned int v29; // w25
  EventMissionConditionEntity_o *v30; // x27
  _BOOL8 v31; // x0
  int v32; // w22
  int32_t current; // w23
  _BOOL8 v34; // x0
  __int64 v35; // x25
  __int64 v36; // x8
  unsigned __int64 v37; // x26
  const MethodInfo *v38; // x6
  const MethodInfo *v39; // x4
  int v40; // w20
  __int64 v41; // x0
  __int64 v42; // x0
  ClientMissionManager_o *v43; // [xsp+0h] [xbp-D0h]
  int64_t userId; // [xsp+8h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // [xsp+10h] [xbp-C0h]
  int v46; // [xsp+1Ch] [xbp-B4h]
  _BYTE v47[32]; // [xsp+20h] [xbp-B0h] BYREF
  int v48; // [xsp+40h] [xbp-90h]
  ClientMissionManager_ProgressDictionaryKey_o v49; // [xsp+48h] [xbp-88h] BYREF
  WarEntity_o *v50; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+60h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v53; // 0:x0.16

  if ( (byte_4214718 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventMissionMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v10);
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v18);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_B0D8A4(&NetworkManager_TypeInfo, v20);
    byte_4214718 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v50 = 0LL;
  *(_QWORD *)&v49.fields.missionTargetId = 0LL;
  *(_QWORD *)&v49.fields.targetId = 0LL;
  v48 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v22 = (UserEventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  userId = NetworkManager__get_UserId(0LL);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      Master_WarQuestSelectionMaster,
                                      (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_54;
  v27 = *((_DWORD *)Entitys_WarQuestSelectionEntity + 6);
  v28 = Entitys_WarQuestSelectionEntity;
  v43 = this;
  if ( v27 >= 1 )
  {
    v46 = 0;
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= v27 )
      {
        v42 = sub_B0D9A8(Entitys_WarQuestSelectionEntity);
        sub_B0D948(v42, 0LL);
      }
      v30 = (EventMissionConditionEntity_o *)*((_QWORD *)v28 + (int)v29 + 4);
      if ( !v30 || !v22 )
        goto LABEL_54;
      if ( !UserEventMissionMaster__TryGetEntity(v22, &entity, userId, v30->fields.missionId, 0LL) )
        goto LABEL_19;
      Entitys_WarQuestSelectionEntity = entity;
      if ( !entity )
        goto LABEL_54;
      Entitys_WarQuestSelectionEntity = (void *)UserEventMissionEntity__isClearMission(entity, 0LL);
      if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) == 0 )
      {
LABEL_19:
        Entitys_WarQuestSelectionEntity = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                                            v30,
                                            v43->fields.deemedTime,
                                            0LL);
        if ( !Entitys_WarQuestSelectionEntity )
          goto LABEL_54;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v47,
          (System_Collections_Generic_HashSet_int__o *)Entitys_WarQuestSelectionEntity,
          (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v47;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v25,
                (int32_t)i.fields._current,
                (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v31 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v31 )
            break;
          if ( !v25 )
            sub_B0D97C(v31);
        }
        *(_DWORD *)&v47[4 * v46 + 24] = 140;
        v32 = ++v48;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v32 )
        {
          v46 = v32;
          if ( *(_DWORD *)&v47[4 * v32 + 20] == 140 )
          {
            v48 = v32 - 1;
            v46 = v32 - 1;
          }
        }
        else
        {
          v46 = 0;
        }
      }
      v27 = *((_DWORD *)v28 + 6);
      if ( (int)++v29 >= v27 )
        goto LABEL_32;
    }
  }
  v46 = 0;
LABEL_32:
  if ( !v25 )
LABEL_54:
    sub_B0D97C(Entitys_WarQuestSelectionEntity);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)v47,
    v25,
    (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v47;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    if ( !v45 )
      sub_B0D97C(0LL);
    current = (int32_t)i.fields._current;
    v34 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v45,
            &v50,
            (int32_t)i.fields._current,
            (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v34 )
    {
      if ( !v50 )
        sub_B0D97C(v34);
      if ( LODWORD(v50->fields.age) == 40 )
      {
        v35 = *(_QWORD *)&v50->fields.flag;
        if ( !v35 )
          sub_B0D97C(v34);
        v36 = *(_QWORD *)(v35 + 24);
        if ( (int)v36 >= 1 )
        {
          v37 = 0LL;
          do
          {
            if ( v37 >= (unsigned int)v36 )
            {
              v41 = sub_B0D9A8(v34);
              sub_B0D948(v41, 0LL);
            }
            if ( *(_DWORD *)(v35 + 32 + 4 * v37) == eventId )
            {
              if ( !v50 )
                sub_B0D97C(v34);
              v34 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v50->fields.name,
                      targetGimmickId,
                      (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v34 )
              {
                if ( !v50 )
                  sub_B0D97C(v34);
                *(_QWORD *)&v53.fields.targetId = *((unsigned int *)&v50->fields.id + 1);
                *(_QWORD *)&v53.fields.missionTargetId = &v49;
                ClientMissionManager_ProgressDictionaryKey___ctor(v53, current, targetGimmickId, eventId, 0, v38);
                ClientMissionManager__AddProgress(v43, v49, 1, v39);
              }
            }
            LODWORD(v36) = *(_DWORD *)(v35 + 24);
            ++v37;
          }
          while ( (__int64)v37 < (int)v36 );
        }
      }
    }
  }
  *(_DWORD *)&v47[4 * v46 + 24] = 304;
  v40 = ++v48;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v40 && *(_DWORD *)&v47[4 * v40 + 20] == 304 )
    v48 = v40 - 1;
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
  EventMissionProgressRequest_o *Request_WarBoardWallAttackRequest; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x22
  __int64 v29; // x0
  const MethodInfo *v30; // x1
  __int64 v31; // x2
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v33; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4214715 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionProgressRequest_Argument_TypeInfo, callback);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v9);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v13);
    sub_B0D8A4(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v14);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v17);
    byte_4214715 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionProgressRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                         callback,
                                                                         (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v34,
    progressDictionary,
    (const MethodInfo_163BA3C *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v35,
            (const MethodInfo_26D662C *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v35.fields.getEnumeratorRetType;
    if ( v35.fields.getEnumeratorRetType )
    {
      key = v35.fields.current.fields.key;
      value = v35.fields.current.fields.value;
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B0D974(
                                                                     EventMissionProgressRequest_Argument_ProgressData_TypeInfo,
                                                                     v23,
                                                                     v24);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v28,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v21 )
        sub_B0D97C(v29);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        v28,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v35,
    (const MethodInfo_26D67B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v21 )
    goto LABEL_23;
  if ( v21->fields._size >= 1 )
  {
    deemedTime = this->fields.deemedTime;
    if ( !deemedTime )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      deemedTime = NetworkManager__getTime(0LL);
    }
    v33 = (EventMissionProgressRequest_Argument_o *)sub_B0D974(EventMissionProgressRequest_Argument_TypeInfo, v30, v31);
    EventMissionProgressRequest_Argument___ctor(
      v33,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v21,
      0LL);
    if ( Request_WarBoardWallAttackRequest )
    {
      EventMissionProgressRequest__beginRequest(Request_WarBoardWallAttackRequest, v33, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B0D97C(progressDictionary);
  }
LABEL_21:
  ClientMissionManager__ClearData(this, v30);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214716 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4214716 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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
  if ( (byte_4211E3F & 1) == 0 )
  {
    sub_B0D8A4(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.targetId);
    byte_4211E3F = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_19587508(
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
  System_ValueTuple_T1__T2__T3__T4__o v9; // [xsp+0h] [xbp-30h] BYREF

  v2 = *(int32_t **)&this.fields.missionTargetId;
  if ( (byte_4211E40 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, *(_QWORD *)&this.fields.targetId);
    sub_B0D8A4(&Method_System_ValueTuple_int__int__int__int___ctor__, v3);
    byte_4211E40 = 1;
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
    (const MethodInfo_2AD84C8 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v9.fields.Item3 = *(_OWORD *)&v9.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v9.fields.Item3,
           (const MethodInfo_2AD9598 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}


System_String_o *__fastcall ClientMissionManager_ProgressDictionaryKey__ToString(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  int *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  System_Object_array *v5; // x19
  __int64 v6; // x0
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x20
  __int64 v12; // x0
  __int64 v13; // x0
  int v14; // [xsp+0h] [xbp-30h] BYREF
  int v15; // [xsp+4h] [xbp-2Ch] BYREF
  int v16; // [xsp+8h] [xbp-28h] BYREF
  int v17; // [xsp+Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4211E41 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&this.fields.targetId);
    sub_B0D8A4(&object___TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_20594/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v4);
    byte_4211E41 = 1;
  }
  v5 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 4LL);
  v17 = *v2;
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  if ( !v5 )
    sub_B0D97C(v6);
  v7 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( !v5->max_length )
    goto LABEL_17;
  v5->m_Items[0] = v7;
  sub_B0D840(v5->m_Items, v7);
  v16 = v2[1];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v8 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_17;
  v5->m_Items[1] = v8;
  sub_B0D840(&v5->m_Items[1], v8);
  v15 = v2[2];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v9 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_17;
  v5->m_Items[2] = v9;
  sub_B0D840(&v5->m_Items[2], v9);
  v14 = v2[3];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v10 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_18:
      v13 = sub_B0D99C();
      sub_B0D948(v13, 0LL);
    }
  }
  if ( v5->max_length <= 3 )
  {
LABEL_17:
    v12 = sub_B0D9A8(v6);
    sub_B0D948(v12, 0LL);
  }
  v5->m_Items[3] = v10;
  sub_B0D840(&v5->m_Items[3], v10);
  return System_String__Format_43928628((System_String_o *)StringLiteral_20594/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v5, 0LL);
}