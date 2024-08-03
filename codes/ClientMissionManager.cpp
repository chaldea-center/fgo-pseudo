void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FBADA & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v5);
    byte_49FBADA = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_1B64314(
                                                                                                     System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo,
                                                                                                     method,
                                                                                                     v2);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v6,
    (const MethodInfo_31C31C0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progressDictionary, (int32_t)v6, v7, v8);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  if ( (byte_49FBAD8 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      *(_QWORD *)&key.fields.missionTargetId);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v9);
    byte_49FBAD8 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v13, (const MethodInfo_31C3DB0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_31C3B90 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v11 = this->fields.progressDictionary;
  if ( !v11 )
LABEL_9:
    sub_1B64324(progressDictionary);
  *(_QWORD *)&v15.fields.missionTargetId = v6;
  *(_QWORD *)&v15.fields.targetId = v5;
  v12 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v11,
          v15,
          (const MethodInfo_31C3AF8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v16.fields.missionTargetId = v6;
  *(_QWORD *)&v16.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v11,
    v16,
    v12,
    (const MethodInfo_31C3B90 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_49FBAD9 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      method);
    byte_49FBAD9 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_31C3D44 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
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
  System_Collections_Generic_HashSet_int__o *v17; // x20
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x1
  int v21; // w8
  unsigned int v22; // w9
  char *v23; // x8
  __int64 v24; // x23
  _BOOL8 v25; // x0
  __int64 current_low; // x24
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v31; // x22
  __int64 v32; // x26
  __int64 v33; // x24
  const MethodInfo *v34; // x4
  Il2CppClass *v35; // x29
  const char *v36; // x8
  unsigned __int64 v37; // x28
  __int64 v38; // x24
  int *v39; // [xsp+8h] [xbp-B8h]
  unsigned int v40; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v41; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v43; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v44; // 0:x1.16

  if ( (byte_49FBAD6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v6);
    sub_1B640C8(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v7);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FBAD6 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  entity = 0LL;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_45;
  v17 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (char *)DataMasterBase__getEntitys_object_(
                         (DataMasterBase_o *)MasterData_object,
                         (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_45;
    v21 = *((_DWORD *)Instance + 6);
    if ( v21 >= 1 )
    {
      v22 = 0;
      v39 = (int *)Instance;
      while ( 1 )
      {
        if ( v22 >= v21 )
          sub_1B6432C(Instance, v20);
        v23 = &Instance[8 * v22];
        v24 = *((_QWORD *)v23 + 4);
        if ( !v24 )
          break;
        v40 = v22;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v23 + 4),
                             this->fields.deemedTime,
                             0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v41,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v43 = v41;
        while ( 1 )
        {
          v25 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v43,
                  (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v25 )
            break;
          if ( !v19 )
            sub_1B64324(v25);
          current_low = LODWORD(v43.fields._current);
          v27 = DataMasterBase_object__object__int___TryGetEntity(
                  v19,
                  &entity,
                  (int32_t)v43.fields._current,
                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v27 )
          {
            if ( !entity )
              sub_1B64324(v27);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_1B64324(v27);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v31 = 0LL;
                v32 = current_low << 32;
                do
                {
                  if ( v31 >= (unsigned int)namespaze )
                    sub_1B6432C(v27, v28);
                  v33 = *((unsigned int *)&klass->_1.byval_arg.data + v31);
                  v27 = System_Collections_Generic_HashSet_int___Contains(
                          v17,
                          v33,
                          (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v27 )
                  {
                    if ( !entity )
                      sub_1B64324(v27);
                    v35 = entity[2].klass;
                    if ( !v35 )
                      sub_1B64324(v27);
                    v36 = v35->_1.namespaze;
                    if ( (int)v36 >= 1 )
                    {
                      v37 = 0LL;
                      v38 = v33 << 32;
                      do
                      {
                        if ( v37 >= (unsigned int)v36 )
                          sub_1B6432C(v27, v28);
                        *(_QWORD *)&v44.fields.missionTargetId = v32 | *(unsigned int *)(v24 + 32);
                        *(_QWORD *)&v44.fields.targetId = v38 | *((unsigned int *)&v35->_1.byval_arg.data + v37);
                        ClientMissionManager__AddProgress(this, v44, 1, v34);
                        LODWORD(v36) = v35->_1.namespaze;
                        ++v37;
                      }
                      while ( (__int64)v37 < (int)v36 );
                    }
                  }
                  LODWORD(namespaze) = klass->_1.namespaze;
                  ++v31;
                }
                while ( (__int64)v31 < (int)namespaze );
              }
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v43,
          (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v39;
        v21 = v39[6];
        v22 = v40 + 1;
        if ( (int)(v40 + 1) >= v21 )
          return;
      }
LABEL_45:
      sub_1B64324(Instance);
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
  Il2CppObject *v23; // x0
  UserEventMissionMaster_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_HashSet_int__o *v27; // x24
  void *Entitys_object; // x0
  __int64 v29; // x1
  int v30; // w8
  void *v31; // x26
  unsigned int v32; // w28
  EventMissionConditionEntity_o *v33; // x27
  _BOOL8 v34; // x0
  _BOOL8 v35; // x0
  __int64 current_low; // x24
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v41; // x28
  __int64 v42; // x24
  const MethodInfo *v43; // x4
  int64_t userId; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v45; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v46; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v49; // 0:x1.16

  if ( (byte_49FBAD7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventMissionMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v10);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_1B640C8(&NetworkManager_TypeInfo, v20);
    byte_49FBAD7 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v46 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v23 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  v24 = (UserEventMissionMaster_o *)v23;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  userId = NetworkManager__get_UserId((const MethodInfo *)v23);
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_47;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Master_object,
                     (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
  if ( !Entitys_object )
    goto LABEL_47;
  v30 = *((_DWORD *)Entitys_object + 6);
  v31 = Entitys_object;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= v30 )
        sub_1B6432C(Entitys_object, v29);
      v33 = (EventMissionConditionEntity_o *)*((_QWORD *)v31 + (int)v32 + 4);
      if ( !v33 || !v24 )
        break;
      if ( !UserEventMissionMaster__TryGetEntity(v24, &entity, userId, v33->fields.missionId, 0LL) )
        goto LABEL_17;
      Entitys_object = entity;
      if ( !entity )
        break;
      Entitys_object = (void *)UserEventMissionEntity__isClearMission(entity, 0LL);
      if ( ((unsigned __int8)Entitys_object & 1) == 0 )
      {
LABEL_17:
        Entitys_object = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                           v33,
                           this->fields.deemedTime,
                           0LL);
        if ( !Entitys_object )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v45,
          (System_Collections_Generic_HashSet_int__o *)Entitys_object,
          (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = v45;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v27,
                (int32_t)i.fields._current,
                (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v34 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v34 )
            break;
          if ( !v27 )
            sub_1B64324(v34);
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      }
      v30 = *((_DWORD *)v31 + 6);
      if ( (int)++v32 >= v30 )
        goto LABEL_26;
    }
LABEL_47:
    sub_1B64324(Entitys_object);
  }
LABEL_26:
  if ( !v27 )
    goto LABEL_47;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v45,
    v27,
    (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = v45;
  while ( 1 )
  {
    v35 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v35 )
      break;
    if ( !v22 )
      sub_1B64324(v35);
    current_low = LODWORD(i.fields._current);
    v37 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
            &v46,
            (int32_t)i.fields._current,
            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v37 )
    {
      if ( !v46 )
        sub_1B64324(v37);
      if ( LODWORD(v46[1].monitor) == 40 )
      {
        klass = v46[4].klass;
        if ( !klass )
          sub_1B64324(v37);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v41 = 0LL;
          v42 = current_low << 32;
          do
          {
            if ( v41 >= (unsigned int)namespaze )
              sub_1B6432C(v37, v38);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v41) == eventId )
            {
              if ( !v46 )
                sub_1B64324(v37);
              v37 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v46[2].klass,
                      targetGimmickId,
                      (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v37 )
              {
                if ( !v46 )
                  sub_1B64324(v37);
                *(_QWORD *)&v49.fields.missionTargetId = v42 | HIDWORD(v46[1].klass);
                v49.fields.targetId = targetGimmickId;
                v49.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v49, 1, v43);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v41;
          }
          while ( (__int64)v41 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x21
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x22
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  int64_t deemedTime; // x22
  NetworkManager_c *v39; // x0
  EventMissionProgressRequest_Argument_o *v40; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_49FBAD4 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionProgressRequest_Argument_TypeInfo, callback);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v7);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v9);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__, v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v13);
    sub_1B640C8(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v14);
    sub_1B640C8(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v17);
    byte_49FBAD4 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v41,
    progressDictionary,
    (const MethodInfo_31C3FCC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v42,
            (const MethodInfo_3288C80 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v42.fields._getEnumeratorRetType;
    if ( v42.fields._getEnumeratorRetType )
    {
      key = v42.fields._current.fields.key;
      value = v42.fields._current.fields.value;
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_1B64314(
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
        sub_1B64324(v29);
      items = v21->fields._items;
      v33 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1B64324(v29);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)v28,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v42,
    (const MethodInfo_3288DB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v21 )
    goto LABEL_25;
  if ( v21->fields._size >= 1 )
  {
    deemedTime = this->fields.deemedTime;
    if ( !deemedTime )
    {
      v39 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      deemedTime = NetworkManager__getTime((const MethodInfo *)v39);
    }
    v40 = (EventMissionProgressRequest_Argument_o *)sub_1B64314(EventMissionProgressRequest_Argument_TypeInfo, v36, v37);
    EventMissionProgressRequest_Argument___ctor(
      v40,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v21,
      0LL);
    if ( Request_object )
    {
      EventMissionProgressRequest__beginRequest((EventMissionProgressRequest_o *)Request_object, v40, 0LL);
      goto LABEL_22;
    }
LABEL_25:
    sub_1B64324(progressDictionary);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v36);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  NetworkManager_c *v3; // x0

  if ( (byte_49FBAD5 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FBAD5 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.deemedTime = NetworkManager__getTime((const MethodInfo *)v3);
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
  if ( (byte_49FBADB & 1) == 0 )
  {
    sub_1B640C8(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.targetId);
    byte_49FBADB = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_38054824(
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
  if ( (byte_49FBADC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, *(_QWORD *)&this.fields.targetId);
    sub_1B640C8(&Method_System_ValueTuple_int__int__int__int___ctor__, v3);
    byte_49FBADC = 1;
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
    (const MethodInfo_380ED08 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v9.fields.Item3 = *(_OWORD *)&v9.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v9.fields.Item3,
           (const MethodInfo_380FA68 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
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
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x20
  __int64 v21; // x0
  int v22; // [xsp+8h] [xbp-38h] BYREF
  int v23; // [xsp+Ch] [xbp-34h] BYREF
  int v24; // [xsp+18h] [xbp-28h] BYREF
  int v25; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_49FBADD & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&this.fields.targetId);
    sub_1B640C8(&object___TypeInfo, v3);
    sub_1B640C8(&StringLiteral_21385/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v4);
    byte_49FBADD = 1;
  }
  v5 = (System_Object_array *)sub_1B64170(object___TypeInfo, 4LL);
  v25 = *v2;
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v25);
  if ( !v5 )
    sub_1B64324(v6);
  v10 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_1B64204(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( !v5->max_length )
    goto LABEL_17;
  v5->m_Items[0] = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v5->m_Items, (int32_t)v10, v8, v9);
  v24 = v2[1];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v13 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_1B64204(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_17;
  v5->m_Items[1] = v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->m_Items[1], (int32_t)v13, v11, v12);
  v23 = v2[2];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v16 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_1B64204(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_17;
  v5->m_Items[2] = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->m_Items[2], (int32_t)v16, v14, v15);
  v22 = v2[3];
  v6 = j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v19 = (Il2CppObject *)v6;
  if ( v6 )
  {
    v6 = sub_1B64204(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_18:
      v21 = sub_1B64348(v6);
      sub_1B641F0(v21, 0LL);
    }
  }
  if ( v5->max_length <= 3 )
LABEL_17:
    sub_1B6432C(v6, v7);
  v5->m_Items[3] = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->m_Items[3], (int32_t)v19, v17, v18);
  return System_String__Format_61389904((System_String_o *)StringLiteral_21385/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v5, 0LL);
}