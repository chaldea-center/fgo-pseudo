void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1BBF6 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      method);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v4);
    byte_4B1BBF6 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_1BCB244(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v5,
    (const MethodInfo_33CF8E0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.progressDictionary, (int32_t)v5, v6, v7);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  if ( (byte_4B1BBF4 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      *(_QWORD *)&key.fields.missionTargetId);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v9);
    byte_4B1BBF4 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v13, (const MethodInfo_33D04D0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_33D02B0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v11 = this->fields.progressDictionary;
  if ( !v11 )
LABEL_9:
    sub_1BCB254(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v15.fields.missionTargetId = v6;
  *(_QWORD *)&v15.fields.targetId = v5;
  v12 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v11,
          v15,
          (const MethodInfo_33D0218 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v16.fields.missionTargetId = v6;
  *(_QWORD *)&v16.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v11,
    v16,
    v12,
    (const MethodInfo_33D02B0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_4B1BBF5 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      method);
    byte_4B1BBF5 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_1BCB254(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_33D0464 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
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
  __int64 v21; // x2
  int v22; // w8
  unsigned int v23; // w9
  char *v24; // x8
  __int64 v25; // x23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 current_low; // x24
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v34; // x22
  __int64 v35; // x26
  __int64 v36; // x24
  const MethodInfo *v37; // x4
  Il2CppClass *v38; // x29
  const char *v39; // x8
  unsigned __int64 v40; // x28
  __int64 v41; // x24
  int *v42; // [xsp+8h] [xbp-B8h]
  unsigned int v43; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v44; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v46; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v47; // 0:x1.16

  if ( (byte_4B1BBF2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v6);
    sub_1BCAFF8(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v7);
    sub_1BCAFF8(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__,
      v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Contains__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1BBF2 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  entity = 0LL;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_45;
  v18 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (char *)DataMasterBase_object__object__object___getEntitys(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         (const MethodInfo_32CBB3C *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
    if ( !Instance )
      goto LABEL_45;
    v22 = *((_DWORD *)Instance + 6);
    if ( v22 >= 1 )
    {
      v23 = 0;
      v42 = (int *)Instance;
      while ( 1 )
      {
        if ( v23 >= v22 )
          sub_1BCB25C(Instance, v17, v21);
        v24 = &Instance[8 * v23];
        v25 = *((_QWORD *)v24 + 4);
        if ( !v25 )
          break;
        v43 = v23;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v24 + 4),
                             this->fields.deemedTime,
                             0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v44,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_35717A0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v46 = v44;
        while ( 1 )
        {
          v26 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v46,
                  (const MethodInfo_344B49C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v26 )
            break;
          if ( !v20 )
            sub_1BCB254(v26, v27);
          current_low = LODWORD(v46.fields._current);
          v29 = DataMasterBase_object__object__int___TryGetEntity(
                  v20,
                  &entity,
                  (int32_t)v46.fields._current,
                  (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v29 )
          {
            if ( !entity )
              sub_1BCB254(v29, v30);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_1BCB254(v29, v30);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v34 = 0LL;
                v35 = current_low << 32;
                do
                {
                  if ( v34 >= (unsigned int)namespaze )
                    sub_1BCB25C(v29, v30, v31);
                  v36 = *((unsigned int *)&klass->_1.byval_arg.data + v34);
                  v29 = System_Collections_Generic_HashSet_int___Contains(
                          v18,
                          v36,
                          (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v29 )
                  {
                    if ( !entity )
                      sub_1BCB254(v29, v30);
                    v38 = entity[2].klass;
                    if ( !v38 )
                      sub_1BCB254(v29, v30);
                    v39 = v38->_1.namespaze;
                    if ( (int)v39 >= 1 )
                    {
                      v40 = 0LL;
                      v41 = v36 << 32;
                      do
                      {
                        if ( v40 >= (unsigned int)v39 )
                          sub_1BCB25C(v29, v30, v31);
                        *(_QWORD *)&v47.fields.missionTargetId = v35 | *(unsigned int *)(v25 + 32);
                        *(_QWORD *)&v47.fields.targetId = v41 | *((unsigned int *)&v38->_1.byval_arg.data + v40);
                        ClientMissionManager__AddProgress(this, v47, 1, v37);
                        LODWORD(v39) = v38->_1.namespaze;
                        ++v40;
                      }
                      while ( (__int64)v40 < (int)v39 );
                    }
                  }
                  LODWORD(namespaze) = klass->_1.namespaze;
                  ++v34;
                }
                while ( (__int64)v34 < (int)namespaze );
              }
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v46,
          (const MethodInfo_344B498 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v42;
        v22 = v42[6];
        v23 = v43 + 1;
        if ( (int)(v43 + 1) >= v22 )
          return;
      }
LABEL_45:
      sub_1BCB254(Instance, v17);
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
  __int64 v23; // x1
  Il2CppObject *v24; // x23
  NetworkManager_c *v25; // x0
  System_Collections_Generic_HashSet_int__o *v26; // x24
  void *Entitys; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int v30; // w8
  void *v31; // x26
  unsigned int v32; // w28
  EventMissionConditionEntity_o *v33; // x27
  _BOOL8 v34; // x0
  __int64 v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 current_low; // x24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v44; // x28
  __int64 v45; // x24
  const MethodInfo *v46; // x4
  int64_t userId; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v48; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v49; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v52; // 0:x1.16

  if ( (byte_4B1BBF3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventMissionMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v10);
    sub_1BCAFF8(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__,
      v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v18);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v20);
    byte_4B1BBF3 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v49 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v23);
    byte_4B165D1 = 1;
  }
  v25 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v25 = NetworkManager_TypeInfo;
  }
  userId = v25->static_fields->userIdNumber;
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_51;
  Entitys = DataMasterBase_object__object__object___getEntitys(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              (const MethodInfo_32CBB3C *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys__);
  if ( !Entitys )
    goto LABEL_51;
  v30 = *((_DWORD *)Entitys + 6);
  v31 = Entitys;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= v30 )
        sub_1BCB25C(Entitys, v28, v29);
      v33 = (EventMissionConditionEntity_o *)*((_QWORD *)v31 + (int)v32 + 4);
      if ( !v33 || !v24 )
        break;
      if ( !UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)v24,
              &entity,
              userId,
              v33->fields.missionId,
              0LL) )
        goto LABEL_21;
      Entitys = entity;
      if ( !entity )
        break;
      Entitys = (void *)UserEventMissionEntity__isClearMission(entity, 0LL);
      if ( ((unsigned __int8)Entitys & 1) == 0 )
      {
LABEL_21:
        Entitys = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                    v33,
                    this->fields.deemedTime,
                    0LL);
        if ( !Entitys )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v48,
          (System_Collections_Generic_HashSet_int__o *)Entitys,
          (const MethodInfo_35717A0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = v48;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v26,
                (int32_t)i.fields._current,
                (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v34 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_344B49C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v34 )
            break;
          if ( !v26 )
            sub_1BCB254(v34, v35);
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_344B498 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      }
      v30 = *((_DWORD *)v31 + 6);
      if ( (int)++v32 >= v30 )
        goto LABEL_30;
    }
LABEL_51:
    sub_1BCB254(Entitys, v28);
  }
LABEL_30:
  if ( !v26 )
    goto LABEL_51;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v48,
    v26,
    (const MethodInfo_35717A0 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = v48;
  while ( 1 )
  {
    v36 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_344B49C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v36 )
      break;
    if ( !v22 )
      sub_1BCB254(v36, v37);
    current_low = LODWORD(i.fields._current);
    v39 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
            &v49,
            (int32_t)i.fields._current,
            (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v39 )
    {
      if ( !v49 )
        sub_1BCB254(v39, v40);
      if ( LODWORD(v49[1].monitor) == 40 )
      {
        klass = v49[4].klass;
        if ( !klass )
          sub_1BCB254(v39, v40);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v44 = 0LL;
          v45 = current_low << 32;
          do
          {
            if ( v44 >= (unsigned int)namespaze )
              sub_1BCB25C(v39, v40, v41);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v44) == eventId )
            {
              if ( !v49 )
                sub_1BCB254(v39, v40);
              v39 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v49[2].klass,
                      targetGimmickId,
                      (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v39 )
              {
                if ( !v49 )
                  sub_1BCB254(v39, v40);
                *(_QWORD *)&v52.fields.missionTargetId = v45 | HIDWORD(v49[1].klass);
                v52.fields.targetId = targetGimmickId;
                v52.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v52, 1, v46);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v44;
          }
          while ( (__int64)v44 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_344B498 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v35; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B1BBF0 & 1) == 0 )
  {
    sub_1BCAFF8(&EventMissionProgressRequest_Argument_TypeInfo, callback);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v9);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__, v12);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v13);
    sub_1BCAFF8(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v14);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v15);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v16);
    sub_1BCAFF8(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v17);
    byte_4B1BBF0 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v36,
    progressDictionary,
    (const MethodInfo_33D06EC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v37,
            (const MethodInfo_3493B24 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v37.fields._getEnumeratorRetType;
    if ( v37.fields._getEnumeratorRetType )
    {
      key = v37.fields._current.fields.key;
      value = v37.fields._current.fields.value;
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_1BCB244(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v25,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v19 )
        sub_1BCB254(v26, v27);
      items = v19->fields._items;
      v31 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1BCB254(v26, v27);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v25,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v25;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v25, v28, v29);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v37,
    (const MethodInfo_3493C58 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
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
    v35 = (EventMissionProgressRequest_Argument_o *)sub_1BCB244(EventMissionProgressRequest_Argument_TypeInfo);
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
    sub_1BCB254(progressDictionary, v20);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v20);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1BBF1 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    byte_4B1BBF1 = 1;
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
  if ( (byte_4B1BBF7 & 1) == 0 )
  {
    sub_1BCAFF8(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.targetId);
    byte_4B1BBF7 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_40424696(
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
  if ( (byte_4B1BBF8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, *(_QWORD *)&this.fields.targetId);
    sub_1BCAFF8(&Method_System_ValueTuple_int__int__int__int___ctor__, v3);
    byte_4B1BBF8 = 1;
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
    (const MethodInfo_3A1B4C4 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v9.fields.Item3 = *(_OWORD *)&v9.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v9.fields.Item3,
           (const MethodInfo_3A1C224 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
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
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  const MethodInfo *v27; // x3
  Il2CppObject *v28; // x20
  __int64 v30; // x0
  int v31; // [xsp+8h] [xbp-38h] BYREF
  int v32; // [xsp+Ch] [xbp-34h] BYREF
  int v33; // [xsp+18h] [xbp-28h] BYREF
  int v34; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4B1BBF9 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, *(_QWORD *)&this.fields.targetId);
    sub_1BCAFF8(&object___TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_21416/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v4);
    byte_4B1BBF9 = 1;
  }
  v5 = (System_Object_array *)sub_1BCB0A0(object___TypeInfo, 4LL);
  v34 = *v2;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v34, v6, v7, v8);
  if ( !v5 )
    sub_1BCB254(v9, v10);
  v13 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1BCB134(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( !v5->max_length )
    goto LABEL_17;
  v5->m_Items[0] = v13;
  sub_1BCAF9C((CGThumbnailListItem_o *)v5->m_Items, (int32_t)v13, v11, v12);
  v33 = v2[1];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v33, v14, v15, v16);
  v18 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1BCB134(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_17;
  v5->m_Items[1] = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v5->m_Items[1], (int32_t)v18, v11, v17);
  v32 = v2[2];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v32, v19, v20, v21);
  v23 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1BCB134(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_17;
  v5->m_Items[2] = v23;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v5->m_Items[2], (int32_t)v23, v11, v22);
  v31 = v2[3];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v31, v24, v25, v26);
  v28 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1BCB134(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_18:
      v30 = sub_1BCB278(v9);
      sub_1BCB120(v30, 0LL);
    }
  }
  if ( v5->max_length <= 3 )
LABEL_17:
    sub_1BCB25C(v9, v10, v11);
  v5->m_Items[3] = v28;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v5->m_Items[3], (int32_t)v28, v11, v27);
  return System_String__Format_62491852((System_String_o *)StringLiteral_21416/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v5, 0LL);
}