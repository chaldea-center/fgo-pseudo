void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438B6AF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
    byte_438B6AF = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_B77694(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v3,
    (const MethodInfo_2343934 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.progressDictionary,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  if ( (byte_438B6AD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
    byte_438B6AD = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v11.fields.missionTargetId = v6;
  *(_QWORD *)&v11.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v11, (const MethodInfo_2344770 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_23444C4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v9 = this->fields.progressDictionary;
  if ( !v9 )
LABEL_9:
    sub_B7769C(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  v10 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v9,
          v13,
          (const MethodInfo_2344428 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v14.fields.missionTargetId = v6;
  *(_QWORD *)&v14.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v9,
    v14,
    v10,
    (const MethodInfo_23444C4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_438B6AE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
    byte_438B6AE = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_B7769C(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_23446D8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
}


void __fastcall ClientMissionManager__MyRoomPlayVoice(
        ClientMissionManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x20
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x22
  int v9; // w8
  int *v10; // x21
  unsigned int v11; // w22
  int v12; // w10
  EventMissionConditionEntity_o *v13; // x23
  __int64 v14; // x8
  unsigned __int64 v15; // x27
  int32_t v16; // w25
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x6
  struct System_String_o *name; // x28
  System_String_c *klass; // x8
  unsigned __int64 v22; // x21
  const MethodInfo *v23; // x4
  __int64 v24; // x1
  int32_t current; // w24
  __int64 v26; // x1
  __int64 v27; // x26
  int v28; // w24
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  int *v32; // [xsp+0h] [xbp-C0h]
  int v33; // [xsp+8h] [xbp-B8h]
  unsigned int v34; // [xsp+Ch] [xbp-B4h]
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // [xsp+10h] [xbp-B0h]
  _BYTE v36[28]; // [xsp+18h] [xbp-A8h] BYREF
  int v37; // [xsp+34h] [xbp-8Ch]
  ClientMissionManager_ProgressDictionaryKey_o v38; // [xsp+38h] [xbp-88h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v40; // [xsp+50h] [xbp-70h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v41; // 0:x0.16

  if ( (byte_438B6AB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B6AB = 1;
  }
  memset(&v40, 0, sizeof(v40));
  entity = 0LL;
  *(_QWORD *)&v38.fields.missionTargetId = 0LL;
  *(_QWORD *)&v38.fields.targetId = 0LL;
  v37 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v7 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_47;
    Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                 MasterData_WarQuestSelectionMaster,
                 (const MethodInfo_1D18CC4 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_47;
    v9 = *((_DWORD *)Instance + 6);
    v10 = (int *)Instance;
    if ( v9 >= 1 )
    {
      v11 = 0;
      v12 = 0;
      v32 = (int *)Instance;
      while ( 1 )
      {
        if ( v11 >= v9 )
        {
          v31 = sub_B776C8(Instance);
          sub_B77668(v31, 0LL);
        }
        v13 = *(EventMissionConditionEntity_o **)&v10[2 * v11 + 8];
        v33 = v12;
        if ( !v13 )
          break;
        v34 = v11;
        Instance = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                     v13,
                     this->fields.deemedTime,
                     0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v36,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_2EDC58C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v40 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v36;
        while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v40,
                  (const MethodInfo_2259EF8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
        {
          if ( !v35 )
            sub_B7769C(0LL, v24);
          current = (int32_t)v40.fields._current;
          v17 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v35,
                  &entity,
                  (int32_t)v40.fields._current,
                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v17 )
          {
            if ( !entity )
              sub_B7769C(v17, v26);
            if ( LODWORD(entity->fields.age) == 39 )
            {
              v27 = *(_QWORD *)&entity->fields.flag;
              if ( !v27 )
                sub_B7769C(v17, v26);
              v14 = *(_QWORD *)(v27 + 24);
              if ( (int)v14 >= 1 )
              {
                v15 = 0LL;
                do
                {
                  if ( v15 >= (unsigned int)v14 )
                  {
                    v30 = sub_B776C8(v17);
                    sub_B77668(v30, 0LL);
                  }
                  v16 = *(_DWORD *)(v27 + 4 * v15 + 32);
                  v17 = System_Collections_Generic_HashSet_int___Contains(
                          v7,
                          v16,
                          (const MethodInfo_2EDC108 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v17 )
                  {
                    if ( !entity )
                      sub_B7769C(v17, v18);
                    name = entity->fields.name;
                    if ( !name )
                      sub_B7769C(v17, v18);
                    klass = name[1].klass;
                    if ( (int)klass >= 1 )
                    {
                      v22 = 0LL;
                      do
                      {
                        if ( v22 >= (unsigned int)klass )
                        {
                          v29 = sub_B776C8(v17);
                          sub_B77668(v29, 0LL);
                        }
                        *(_QWORD *)&v41.fields.targetId = (unsigned int)v13->fields.missionTargetId;
                        *(_QWORD *)&v41.fields.missionTargetId = &v38;
                        ClientMissionManager_ProgressDictionaryKey___ctor(
                          v41,
                          current,
                          *((_DWORD *)&name[1].monitor + v22),
                          v16,
                          0,
                          v19);
                        ClientMissionManager__AddProgress(this, v38, 1, v23);
                        LODWORD(klass) = name[1].klass;
                        ++v22;
                      }
                      while ( (__int64)v22 < (int)klass );
                    }
                  }
                  LODWORD(v14) = *(_DWORD *)(v27 + 24);
                  ++v15;
                }
                while ( (__int64)v15 < (int)v14 );
              }
            }
          }
        }
        *(_DWORD *)&v36[4 * v33 + 24] = 259;
        v28 = ++v37;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v40,
          (const MethodInfo_2259EF4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        v10 = v32;
        v12 = v28;
        if ( v28 && *(_DWORD *)&v36[4 * v28 + 20] == 259 )
        {
          v12 = v28 - 1;
          v37 = v28 - 1;
        }
        v9 = v32[6];
        ++v11;
        if ( (int)(v34 + 1) >= v9 )
          return;
      }
LABEL_47:
      sub_B7769C(Instance, v6);
    }
  }
}


void __fastcall ClientMissionManager__OnClickMapGimmick(
        ClientMissionManager_o *this,
        int32_t eventId,
        int32_t targetGimmickId,
        const MethodInfo *method)
{
  DataMasterBase_o *Master_WarQuestSelectionMaster; // x26
  UserEventMissionMaster_o *v8; // x23
  System_Collections_Generic_HashSet_int__o *v9; // x24
  void *Entitys_WarQuestSelectionEntity; // x0
  __int64 v11; // x1
  int v12; // w8
  void *v13; // x26
  unsigned int v14; // w25
  EventMissionConditionEntity_o *v15; // x27
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int v18; // w22
  int32_t current; // w23
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x25
  __int64 v23; // x8
  unsigned __int64 v24; // x26
  const MethodInfo *v25; // x6
  const MethodInfo *v26; // x4
  __int64 v27; // x1
  int v28; // w20
  __int64 v29; // x0
  __int64 v30; // x0
  ClientMissionManager_o *v31; // [xsp+0h] [xbp-D0h]
  int64_t userId; // [xsp+8h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // [xsp+10h] [xbp-C0h]
  int v34; // [xsp+1Ch] [xbp-B4h]
  _BYTE v35[32]; // [xsp+20h] [xbp-B0h] BYREF
  int v36; // [xsp+40h] [xbp-90h]
  ClientMissionManager_ProgressDictionaryKey_o v37; // [xsp+48h] [xbp-88h] BYREF
  WarEntity_o *v38; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+60h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v41; // 0:x0.16

  if ( (byte_438B6AC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventMissionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438B6AC = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v38 = 0LL;
  *(_QWORD *)&v37.fields.missionTargetId = 0LL;
  *(_QWORD *)&v37.fields.targetId = 0LL;
  v36 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v8 = (UserEventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  userId = NetworkManager__get_UserId(0LL);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      Master_WarQuestSelectionMaster,
                                      (const MethodInfo_1D18CC4 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_54;
  v12 = *((_DWORD *)Entitys_WarQuestSelectionEntity + 6);
  v13 = Entitys_WarQuestSelectionEntity;
  v31 = this;
  if ( v12 >= 1 )
  {
    v34 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v30 = sub_B776C8(Entitys_WarQuestSelectionEntity);
        sub_B77668(v30, 0LL);
      }
      v15 = (EventMissionConditionEntity_o *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !v15 || !v8 )
        goto LABEL_54;
      if ( !UserEventMissionMaster__TryGetEntity(v8, &entity, userId, v15->fields.missionId, 0LL) )
        goto LABEL_19;
      Entitys_WarQuestSelectionEntity = entity;
      if ( !entity )
        goto LABEL_54;
      Entitys_WarQuestSelectionEntity = (void *)UserEventMissionEntity__isClearMission(entity, 0LL);
      if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) == 0 )
      {
LABEL_19:
        Entitys_WarQuestSelectionEntity = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                                            v15,
                                            v31->fields.deemedTime,
                                            0LL);
        if ( !Entitys_WarQuestSelectionEntity )
          goto LABEL_54;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v35,
          (System_Collections_Generic_HashSet_int__o *)Entitys_WarQuestSelectionEntity,
          (const MethodInfo_2EDC58C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v35;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v9,
                (int32_t)i.fields._current,
                (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v16 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_2259EF8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v16 )
            break;
          if ( !v9 )
            sub_B7769C(v16, v17);
        }
        *(_DWORD *)&v35[4 * v34 + 24] = 140;
        v18 = ++v36;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_2259EF4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v18 )
        {
          v34 = v18;
          if ( *(_DWORD *)&v35[4 * v18 + 20] == 140 )
          {
            v36 = v18 - 1;
            v34 = v18 - 1;
          }
        }
        else
        {
          v34 = 0;
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_32;
    }
  }
  v34 = 0;
LABEL_32:
  if ( !v9 )
LABEL_54:
    sub_B7769C(Entitys_WarQuestSelectionEntity, v11);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)v35,
    v9,
    (const MethodInfo_2EDC58C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v35;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_2259EF8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    if ( !v33 )
      sub_B7769C(0LL, v27);
    current = (int32_t)i.fields._current;
    v20 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v33,
            &v38,
            (int32_t)i.fields._current,
            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v20 )
    {
      if ( !v38 )
        sub_B7769C(v20, v21);
      if ( LODWORD(v38->fields.age) == 40 )
      {
        v22 = *(_QWORD *)&v38->fields.flag;
        if ( !v22 )
          sub_B7769C(v20, v21);
        v23 = *(_QWORD *)(v22 + 24);
        if ( (int)v23 >= 1 )
        {
          v24 = 0LL;
          do
          {
            if ( v24 >= (unsigned int)v23 )
            {
              v29 = sub_B776C8(v20);
              sub_B77668(v29, 0LL);
            }
            if ( *(_DWORD *)(v22 + 32 + 4 * v24) == eventId )
            {
              if ( !v38 )
                sub_B7769C(v20, v21);
              v20 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v38->fields.name,
                      targetGimmickId,
                      (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v20 )
              {
                if ( !v38 )
                  sub_B7769C(v20, v21);
                *(_QWORD *)&v41.fields.targetId = *((unsigned int *)&v38->fields.id + 1);
                *(_QWORD *)&v41.fields.missionTargetId = &v37;
                ClientMissionManager_ProgressDictionaryKey___ctor(v41, current, targetGimmickId, eventId, 0, v25);
                ClientMissionManager__AddProgress(v31, v37, 1, v26);
              }
            }
            LODWORD(v23) = *(_DWORD *)(v22 + 24);
            ++v24;
          }
          while ( (__int64)v24 < (int)v23 );
        }
      }
    }
  }
  *(_DWORD *)&v35[4 * v34 + 24] = 304;
  v28 = ++v36;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_2259EF4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v28 && *(_DWORD *)&v35[4 * v28 + 20] == 304 )
    v36 = v28 - 1;
}


void __fastcall ClientMissionManager__SendRequest(
        ClientMissionManager_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  EventMissionProgressRequest_o *Request_WarBoardWallAttackRequest; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x21
  const MethodInfo *v7; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v16; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_438B6A9 & 1) == 0 )
  {
    sub_B775C4(&EventMissionProgressRequest_Argument_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_EventMissionProgressRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
    byte_438B6A9 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionProgressRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                         callback,
                                                                         (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v17,
    progressDictionary,
    (const MethodInfo_2344AA8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v18,
            (const MethodInfo_2AC0304 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v18.fields.getEnumeratorRetType;
    if ( v18.fields.getEnumeratorRetType )
    {
      key = v18.fields.current.fields.key;
      value = v18.fields.current.fields.value;
      v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77694(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v12,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v6 )
        sub_B7769C(v13, v14);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        v12,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v18,
    (const MethodInfo_2AC0488 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v6 )
    goto LABEL_23;
  if ( v6->fields._size >= 1 )
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
    v16 = (EventMissionProgressRequest_Argument_o *)sub_B77694(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v16,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v6,
      0LL);
    if ( Request_WarBoardWallAttackRequest )
    {
      EventMissionProgressRequest__beginRequest(Request_WarBoardWallAttackRequest, v16, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B7769C(progressDictionary, v7);
  }
LABEL_21:
  ClientMissionManager__ClearData(this, v7);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_438B6AA & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438B6AA = 1;
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
  if ( (byte_43885A2 & 1) == 0 )
  {
    sub_B775C4(&ClientMissionManager_ProgressDictionaryKey_TypeInfo);
    byte_43885A2 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_20028704(
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
  System_ValueTuple_T1__T2__T3__T4__o v8; // [xsp+0h] [xbp-30h] BYREF

  v2 = *(int32_t **)&this.fields.missionTargetId;
  if ( (byte_43885A3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_ValueTuple_int__int__int__int__GetHashCode__);
    sub_B775C4(&Method_System_ValueTuple_int__int__int__int___ctor__);
    byte_43885A3 = 1;
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
    (const MethodInfo_2CE1A2C *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v8.fields.Item3 = *(_OWORD *)&v8.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v8.fields.Item3,
           (const MethodInfo_2CE2AFC *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}


System_String_o *__fastcall ClientMissionManager_ProgressDictionaryKey__ToString(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  int *v2; // x20
  System_Object_array *v3; // x19
  __int64 v4; // x2
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x20
  __int64 v15; // x0
  __int64 v16; // x0
  int v17; // [xsp+0h] [xbp-30h] BYREF
  int v18; // [xsp+4h] [xbp-2Ch] BYREF
  int v19; // [xsp+8h] [xbp-28h] BYREF
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_43885A4 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&StringLiteral_20950/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/);
    byte_43885A4 = 1;
  }
  v3 = (System_Object_array *)sub_B775DC(object___TypeInfo, 4LL);
  v20 = *v2;
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v4);
  if ( !v3 )
    sub_B7769C(v5, v6);
  v7 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_18;
  }
  if ( !v3->max_length )
    goto LABEL_17;
  v3->m_Items[0] = v7;
  sub_B77560(v3->m_Items);
  v19 = v2[1];
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v8);
  v9 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_18;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_17;
  v3->m_Items[1] = v9;
  sub_B77560(&v3->m_Items[1]);
  v18 = v2[2];
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &v18, v10);
  v11 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_18;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = v11;
  sub_B77560(&v3->m_Items[2]);
  v17 = v2[3];
  v5 = j_il2cpp_value_box_0(int_TypeInfo, &v17, v12);
  v13 = (Il2CppObject *)v5;
  if ( v5 )
  {
    v5 = sub_B77684(v5, v3->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_18:
      v16 = sub_B776BC();
      sub_B77668(v16, 0LL);
    }
  }
  if ( v3->max_length <= 3 )
  {
LABEL_17:
    v15 = sub_B776C8(v5);
    sub_B77668(v15, 0LL);
  }
  v3->m_Items[3] = v13;
  sub_B77560(&v3->m_Items[3]);
  return System_String__Format_44980660((System_String_o *)StringLiteral_20950/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v3, 0LL);
}