void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418880A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v4);
    byte_418880A = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v5,
    (const MethodInfo_2DD3620 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.progressDictionary,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  if ( (byte_4188808 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      *(_QWORD *)&key.fields.missionTargetId);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v9);
    byte_4188808 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v13, (const MethodInfo_2DD445C *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_2DD41B0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v11 = this->fields.progressDictionary;
  if ( !v11 )
LABEL_9:
    sub_B2C434(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v15.fields.missionTargetId = v6;
  *(_QWORD *)&v15.fields.targetId = v5;
  v12 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v11,
          v15,
          (const MethodInfo_2DD4114 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v16.fields.missionTargetId = v6;
  *(_QWORD *)&v16.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v11,
    v16,
    v12,
    (const MethodInfo_2DD41B0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_4188809 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      method);
    byte_4188809 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_2DD43C4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
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
  __int64 v17; // x1
  System_Collections_Generic_HashSet_int__o *v18; // x20
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x22
  int v20; // w8
  int *v21; // x21
  unsigned int v22; // w22
  int v23; // w10
  EventMissionConditionEntity_o *v24; // x23
  __int64 v25; // x8
  unsigned __int64 v26; // x27
  int32_t v27; // w25
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x6
  struct System_String_o *name; // x28
  System_String_c *klass; // x8
  unsigned __int64 v33; // x21
  const MethodInfo *v34; // x4
  __int64 v35; // x1
  int32_t current; // w24
  __int64 v37; // x1
  __int64 v38; // x26
  int v39; // w24
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  int *v43; // [xsp+0h] [xbp-C0h]
  int v44; // [xsp+8h] [xbp-B8h]
  unsigned int v45; // [xsp+Ch] [xbp-B4h]
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // [xsp+10h] [xbp-B0h]
  _BYTE v47[28]; // [xsp+18h] [xbp-A8h] BYREF
  int v48; // [xsp+34h] [xbp-8Ch]
  ClientMissionManager_ProgressDictionaryKey_o v49; // [xsp+38h] [xbp-88h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v51; // [xsp+50h] [xbp-70h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v52; // 0:x0.16

  if ( (byte_4188806 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v6);
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v7);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4188806 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  entity = 0LL;
  *(_QWORD *)&v49.fields.missionTargetId = 0LL;
  *(_QWORD *)&v49.fields.targetId = 0LL;
  v48 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v18 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_47;
    Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                 MasterData_WarQuestSelectionMaster,
                 (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_47;
    v20 = *((_DWORD *)Instance + 6);
    v21 = (int *)Instance;
    if ( v20 >= 1 )
    {
      v22 = 0;
      v23 = 0;
      v43 = (int *)Instance;
      while ( 1 )
      {
        if ( v22 >= v20 )
        {
          v42 = sub_B2C460(Instance);
          sub_B2C400(v42, 0LL);
        }
        v24 = *(EventMissionConditionEntity_o **)&v21[2 * v22 + 8];
        v44 = v23;
        if ( !v24 )
          break;
        v45 = v22;
        Instance = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                     v24,
                     this->fields.deemedTime,
                     0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v47,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v51 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v47;
        while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v51,
                  (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
        {
          if ( !v46 )
            sub_B2C434(0LL, v35);
          current = (int32_t)v51.fields._current;
          v28 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v46,
                  &entity,
                  (int32_t)v51.fields._current,
                  (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v28 )
          {
            if ( !entity )
              sub_B2C434(v28, v37);
            if ( LODWORD(entity->fields.age) == 39 )
            {
              v38 = *(_QWORD *)&entity->fields.flag;
              if ( !v38 )
                sub_B2C434(v28, v37);
              v25 = *(_QWORD *)(v38 + 24);
              if ( (int)v25 >= 1 )
              {
                v26 = 0LL;
                do
                {
                  if ( v26 >= (unsigned int)v25 )
                  {
                    v41 = sub_B2C460(v28);
                    sub_B2C400(v41, 0LL);
                  }
                  v27 = *(_DWORD *)(v38 + 4 * v26 + 32);
                  v28 = System_Collections_Generic_HashSet_int___Contains(
                          v18,
                          v27,
                          (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v28 )
                  {
                    if ( !entity )
                      sub_B2C434(v28, v29);
                    name = entity->fields.name;
                    if ( !name )
                      sub_B2C434(v28, v29);
                    klass = name[1].klass;
                    if ( (int)klass >= 1 )
                    {
                      v33 = 0LL;
                      do
                      {
                        if ( v33 >= (unsigned int)klass )
                        {
                          v40 = sub_B2C460(v28);
                          sub_B2C400(v40, 0LL);
                        }
                        *(_QWORD *)&v52.fields.targetId = (unsigned int)v24->fields.missionTargetId;
                        *(_QWORD *)&v52.fields.missionTargetId = &v49;
                        ClientMissionManager_ProgressDictionaryKey___ctor(
                          v52,
                          current,
                          *((_DWORD *)&name[1].monitor + v33),
                          v27,
                          0,
                          v30);
                        ClientMissionManager__AddProgress(this, v49, 1, v34);
                        LODWORD(klass) = name[1].klass;
                        ++v33;
                      }
                      while ( (__int64)v33 < (int)klass );
                    }
                  }
                  LODWORD(v25) = *(_DWORD *)(v38 + 24);
                  ++v26;
                }
                while ( (__int64)v26 < (int)v25 );
              }
            }
          }
        }
        *(_DWORD *)&v47[4 * v44 + 24] = 259;
        v39 = ++v48;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v51,
          (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        v21 = v43;
        v23 = v39;
        if ( v39 && *(_DWORD *)&v47[4 * v39 + 20] == 259 )
        {
          v23 = v39 - 1;
          v48 = v39 - 1;
        }
        v20 = v43[6];
        ++v22;
        if ( (int)(v45 + 1) >= v20 )
          return;
      }
LABEL_47:
      sub_B2C434(Instance, v17);
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
  System_Collections_Generic_HashSet_int__o *v23; // x24
  void *Entitys_WarQuestSelectionEntity; // x0
  __int64 v25; // x1
  int v26; // w8
  void *v27; // x26
  unsigned int v28; // w25
  EventMissionConditionEntity_o *v29; // x27
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int v32; // w22
  int32_t current; // w23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x25
  __int64 v37; // x8
  unsigned __int64 v38; // x26
  const MethodInfo *v39; // x6
  const MethodInfo *v40; // x4
  __int64 v41; // x1
  int v42; // w20
  __int64 v43; // x0
  __int64 v44; // x0
  ClientMissionManager_o *v45; // [xsp+0h] [xbp-D0h]
  int64_t userId; // [xsp+8h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // [xsp+10h] [xbp-C0h]
  int v48; // [xsp+1Ch] [xbp-B4h]
  _BYTE v49[32]; // [xsp+20h] [xbp-B0h] BYREF
  int v50; // [xsp+40h] [xbp-90h]
  ClientMissionManager_ProgressDictionaryKey_o v51; // [xsp+48h] [xbp-88h] BYREF
  WarEntity_o *v52; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+60h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v55; // 0:x0.16

  if ( (byte_4188807 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventMissionMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v10);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v18);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_B2C35C(&NetworkManager_TypeInfo, v20);
    byte_4188807 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v52 = 0LL;
  *(_QWORD *)&v51.fields.missionTargetId = 0LL;
  *(_QWORD *)&v51.fields.targetId = 0LL;
  v50 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v22 = (UserEventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  userId = NetworkManager__get_UserId(0LL);
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      Master_WarQuestSelectionMaster,
                                      (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_54;
  v26 = *((_DWORD *)Entitys_WarQuestSelectionEntity + 6);
  v27 = Entitys_WarQuestSelectionEntity;
  v45 = this;
  if ( v26 >= 1 )
  {
    v48 = 0;
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v26 )
      {
        v44 = sub_B2C460(Entitys_WarQuestSelectionEntity);
        sub_B2C400(v44, 0LL);
      }
      v29 = (EventMissionConditionEntity_o *)*((_QWORD *)v27 + (int)v28 + 4);
      if ( !v29 || !v22 )
        goto LABEL_54;
      if ( !UserEventMissionMaster__TryGetEntity(v22, &entity, userId, v29->fields.missionId, 0LL) )
        goto LABEL_19;
      Entitys_WarQuestSelectionEntity = entity;
      if ( !entity )
        goto LABEL_54;
      Entitys_WarQuestSelectionEntity = (void *)UserEventMissionEntity__isClearMission(entity, 0LL);
      if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) == 0 )
      {
LABEL_19:
        Entitys_WarQuestSelectionEntity = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                                            v29,
                                            v45->fields.deemedTime,
                                            0LL);
        if ( !Entitys_WarQuestSelectionEntity )
          goto LABEL_54;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v49,
          (System_Collections_Generic_HashSet_int__o *)Entitys_WarQuestSelectionEntity,
          (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v49;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v23,
                (int32_t)i.fields._current,
                (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v30 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v30 )
            break;
          if ( !v23 )
            sub_B2C434(v30, v31);
        }
        *(_DWORD *)&v49[4 * v48 + 24] = 140;
        v32 = ++v50;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v32 )
        {
          v48 = v32;
          if ( *(_DWORD *)&v49[4 * v32 + 20] == 140 )
          {
            v50 = v32 - 1;
            v48 = v32 - 1;
          }
        }
        else
        {
          v48 = 0;
        }
      }
      v26 = *((_DWORD *)v27 + 6);
      if ( (int)++v28 >= v26 )
        goto LABEL_32;
    }
  }
  v48 = 0;
LABEL_32:
  if ( !v23 )
LABEL_54:
    sub_B2C434(Entitys_WarQuestSelectionEntity, v25);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)v49,
    v23,
    (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v49;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    if ( !v47 )
      sub_B2C434(0LL, v41);
    current = (int32_t)i.fields._current;
    v34 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v47,
            &v52,
            (int32_t)i.fields._current,
            (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v34 )
    {
      if ( !v52 )
        sub_B2C434(v34, v35);
      if ( LODWORD(v52->fields.age) == 40 )
      {
        v36 = *(_QWORD *)&v52->fields.flag;
        if ( !v36 )
          sub_B2C434(v34, v35);
        v37 = *(_QWORD *)(v36 + 24);
        if ( (int)v37 >= 1 )
        {
          v38 = 0LL;
          do
          {
            if ( v38 >= (unsigned int)v37 )
            {
              v43 = sub_B2C460(v34);
              sub_B2C400(v43, 0LL);
            }
            if ( *(_DWORD *)(v36 + 32 + 4 * v38) == eventId )
            {
              if ( !v52 )
                sub_B2C434(v34, v35);
              v34 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v52->fields.name,
                      targetGimmickId,
                      (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v34 )
              {
                if ( !v52 )
                  sub_B2C434(v34, v35);
                *(_QWORD *)&v55.fields.targetId = *((unsigned int *)&v52->fields.id + 1);
                *(_QWORD *)&v55.fields.missionTargetId = &v51;
                ClientMissionManager_ProgressDictionaryKey___ctor(v55, current, targetGimmickId, eventId, 0, v39);
                ClientMissionManager__AddProgress(v45, v51, 1, v40);
              }
            }
            LODWORD(v37) = *(_DWORD *)(v36 + 24);
            ++v38;
          }
          while ( (__int64)v38 < (int)v37 );
        }
      }
    }
  }
  *(_DWORD *)&v49[4 * v48 + 24] = 304;
  v42 = ++v50;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v42 && *(_DWORD *)&v49[4 * v42 + 20] == 304 )
    v50 = v42 - 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  const MethodInfo *v20; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v29; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4188804 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionProgressRequest_Argument_TypeInfo, callback);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v13);
    sub_B2C35C(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v14);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v15);
    sub_B2C35C(&NetworkManager_TypeInfo, v16);
    sub_B2C35C(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v17);
    byte_4188804 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionProgressRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                         callback,
                                                                         (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v30,
    progressDictionary,
    (const MethodInfo_2DD4794 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v31,
            (const MethodInfo_275FEDC *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v31.fields.getEnumeratorRetType;
    if ( v31.fields.getEnumeratorRetType )
    {
      key = v31.fields.current.fields.key;
      value = v31.fields.current.fields.value;
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C42C(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v25,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v19 )
        sub_B2C434(v26, v27);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        v25,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v31,
    (const MethodInfo_2760060 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v19 )
    goto LABEL_23;
  if ( v19->fields._size >= 1 )
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
    v29 = (EventMissionProgressRequest_Argument_o *)sub_B2C42C(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v29,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v19,
      0LL);
    if ( Request_WarBoardWallAttackRequest )
    {
      EventMissionProgressRequest__beginRequest(Request_WarBoardWallAttackRequest, v29, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B2C434(progressDictionary, v20);
  }
LABEL_21:
  ClientMissionManager__ClearData(this, v20);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188805 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    byte_4188805 = 1;
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
  if ( (byte_4184F02 & 1) == 0 )
  {
    sub_B2C35C(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.targetId);
    byte_4184F02 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_19814604(
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
  if ( (byte_4184F03 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, *(_QWORD *)&this.fields.targetId);
    sub_B2C35C(&Method_System_ValueTuple_int__int__int__int___ctor__, v3);
    byte_4184F03 = 1;
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
    (const MethodInfo_29DD568 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v9.fields.Item3 = *(_OWORD *)&v9.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v9.fields.Item3,
           (const MethodInfo_29DE638 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
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
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x20
  __int64 v13; // x0
  __int64 v14; // x0
  int v15; // [xsp+0h] [xbp-30h] BYREF
  int v16; // [xsp+4h] [xbp-2Ch] BYREF
  int v17; // [xsp+8h] [xbp-28h] BYREF
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4184F04 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&this.fields.targetId);
    sub_B2C35C(&object___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_20531/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v4);
    byte_4184F04 = 1;
  }
  v5 = (System_Object_array *)sub_B2C374(object___TypeInfo, 4LL);
  v18 = *v2;
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v8 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( !v5->max_length )
    goto LABEL_17;
  v5->m_Items[0] = v8;
  sub_B2C2F8(v5->m_Items, v8);
  v17 = v2[1];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v9 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_17;
  v5->m_Items[1] = v9;
  sub_B2C2F8(&v5->m_Items[1], v9);
  v16 = v2[2];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v10 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_17;
  v5->m_Items[2] = v10;
  sub_B2C2F8(&v5->m_Items[2], v10);
  v15 = v2[3];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v11 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_18:
      v14 = sub_B2C454();
      sub_B2C400(v14, 0LL);
    }
  }
  if ( v5->max_length <= 3 )
  {
LABEL_17:
    v13 = sub_B2C460(v6);
    sub_B2C400(v13, 0LL);
  }
  v5->m_Items[3] = v11;
  sub_B2C2F8(&v5->m_Items[3], v11);
  return System_String__Format_44384256((System_String_o *)StringLiteral_20531/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v5, 0LL);
}