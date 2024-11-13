void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B1587C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      method,
      v2);
    sub_1BCA7E0(
      &System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo,
      v5,
      v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v7, v8);
    byte_4B1587C = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_1BCAA2C(
                                                                                                     System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo,
                                                                                                     method,
                                                                                                     v2,
                                                                                                     v3);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v9,
    (const MethodInfo_32AF028 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.progressDictionary, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v13; // x22
  int32_t v14; // w3
  ClientMissionManager_ProgressDictionaryKey_o v15; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v16; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v17; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v18; // 0:x1.16

  v5 = *(_QWORD *)&key.fields.targetId;
  v6 = *(_QWORD *)&key.fields.missionTargetId;
  if ( (byte_4B1587A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      *(_QWORD *)&key.fields.missionTargetId,
      *(_QWORD *)&key.fields.targetId);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v10,
      v11);
    byte_4B1587A = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v15.fields.missionTargetId = v6;
  *(_QWORD *)&v15.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v15, (const MethodInfo_32AFC18 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
  if ( ((unsigned __int8)progressDictionary & 1) == 0 )
  {
    progressDictionary = this->fields.progressDictionary;
    if ( !progressDictionary )
      goto LABEL_9;
    *(_QWORD *)&v16.fields.missionTargetId = v6;
    *(_QWORD *)&v16.fields.targetId = v5;
    System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
      progressDictionary,
      v16,
      0,
      (const MethodInfo_32AF9F8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v13 = this->fields.progressDictionary;
  if ( !v13 )
LABEL_9:
    sub_1BCAA3C(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v17.fields.missionTargetId = v6;
  *(_QWORD *)&v17.fields.targetId = v5;
  v14 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v13,
          v17,
          (const MethodInfo_32AF960 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v18.fields.missionTargetId = v6;
  *(_QWORD *)&v18.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v13,
    v18,
    v14,
    (const MethodInfo_32AF9F8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_4B1587B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      method,
      v2);
    byte_4B1587B = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_32AFBAC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClientMissionManager__MyRoomPlayVoice(
        ClientMissionManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  char *Instance; // x0
  __int64 v28; // x1
  System_Collections_Generic_HashSet_int__o *v29; // x20
  Il2CppObject *MasterData_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x21
  int v32; // w8
  unsigned int v33; // w9
  char *v34; // x8
  __int64 v35; // x23
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 current_low; // x24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v43; // x22
  __int64 v44; // x26
  __int64 v45; // x24
  const MethodInfo *v46; // x4
  Il2CppClass *v47; // x29
  const char *v48; // x8
  unsigned __int64 v49; // x28
  __int64 v50; // x24
  int *v51; // [xsp+8h] [xbp-B8h]
  unsigned int v52; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v53; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v55; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v56; // 0:x1.16

  if ( (byte_4B15878 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v7, v8);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v9,
      v10);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B15878 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  entity = 0LL;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_45;
  v29 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    Instance = (char *)DataMasterBase__getEntitys_object_(
                         (DataMasterBase_o *)MasterData_object,
                         (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_45;
    v32 = *((_DWORD *)Instance + 6);
    if ( v32 >= 1 )
    {
      v33 = 0;
      v51 = (int *)Instance;
      while ( 1 )
      {
        if ( v33 >= v32 )
          sub_1BCAA44(Instance, v28);
        v34 = &Instance[8 * v33];
        v35 = *((_QWORD *)v34 + 4);
        if ( !v35 )
          break;
        v52 = v33;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v34 + 4),
                             this->fields.deemedTime,
                             0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v53,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v55 = v53;
        while ( 1 )
        {
          v36 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v55,
                  (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v36 )
            break;
          if ( !v31 )
            sub_1BCAA3C(v36, v37);
          current_low = LODWORD(v55.fields._current);
          v39 = DataMasterBase_object__object__int___TryGetEntity(
                  v31,
                  &entity,
                  (int32_t)v55.fields._current,
                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v39 )
          {
            if ( !entity )
              sub_1BCAA3C(v39, v40);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_1BCAA3C(v39, v40);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v43 = 0LL;
                v44 = current_low << 32;
                do
                {
                  if ( v43 >= (unsigned int)namespaze )
                    sub_1BCAA44(v39, v40);
                  v45 = *((unsigned int *)&klass->_1.byval_arg.data + v43);
                  v39 = System_Collections_Generic_HashSet_int___Contains(
                          v29,
                          v45,
                          (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v39 )
                  {
                    if ( !entity )
                      sub_1BCAA3C(v39, v40);
                    v47 = entity[2].klass;
                    if ( !v47 )
                      sub_1BCAA3C(v39, v40);
                    v48 = v47->_1.namespaze;
                    if ( (int)v48 >= 1 )
                    {
                      v49 = 0LL;
                      v50 = v45 << 32;
                      do
                      {
                        if ( v49 >= (unsigned int)v48 )
                          sub_1BCAA44(v39, v40);
                        *(_QWORD *)&v56.fields.missionTargetId = v44 | *(unsigned int *)(v35 + 32);
                        *(_QWORD *)&v56.fields.targetId = v50 | *((unsigned int *)&v47->_1.byval_arg.data + v49);
                        ClientMissionManager__AddProgress(this, v56, 1, v46);
                        LODWORD(v48) = v47->_1.namespaze;
                        ++v49;
                      }
                      while ( (__int64)v49 < (int)v48 );
                    }
                  }
                  LODWORD(namespaze) = klass->_1.namespaze;
                  ++v43;
                }
                while ( (__int64)v43 < (int)namespaze );
              }
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v55,
          (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v51;
        v32 = v51[6];
        v33 = v52 + 1;
        if ( (int)(v52 + 1) >= v32 )
          return;
      }
LABEL_45:
      sub_1BCAA3C(Instance, v28);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *Master_object; // x26
  Il2CppObject *v36; // x22
  __int64 v37; // x1
  Il2CppObject *v38; // x23
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_HashSet_int__o *v42; // x24
  void *Entitys_object; // x0
  __int64 v44; // x1
  int v45; // w8
  void *v46; // x26
  unsigned int v47; // w28
  EventMissionConditionEntity_o *v48; // x27
  _BOOL8 v49; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  __int64 current_low; // x24
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v58; // x28
  __int64 v59; // x24
  const MethodInfo *v60; // x4
  int64_t userId; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v62; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v63; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v66; // 0:x1.16

  if ( (byte_4B15879 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_EventMissionCondDetailMaster___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&targetGimmickId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventMissionMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v13,
      v14);
    sub_1BCA7E0(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    byte_4B15879 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v63 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v38 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
  userId = NetworkManager__get_UserId(0LL);
  v42 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
  System_Collections_Generic_HashSet_int____ctor(
    v42,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_47;
  Entitys_object = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Master_object,
                     (const MethodInfo_2F13524 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
  if ( !Entitys_object )
    goto LABEL_47;
  v45 = *((_DWORD *)Entitys_object + 6);
  v46 = Entitys_object;
  if ( v45 >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      if ( v47 >= v45 )
        sub_1BCAA44(Entitys_object, v44);
      v48 = (EventMissionConditionEntity_o *)*((_QWORD *)v46 + (int)v47 + 4);
      if ( !v48 || !v38 )
        break;
      if ( !UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)v38,
              &entity,
              userId,
              v48->fields.missionId,
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
                           v48,
                           this->fields.deemedTime,
                           0LL);
        if ( !Entitys_object )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v62,
          (System_Collections_Generic_HashSet_int__o *)Entitys_object,
          (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = v62;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v42,
                (int32_t)i.fields._current,
                (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v49 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v49 )
            break;
          if ( !v42 )
            sub_1BCAA3C(v49, v50);
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      }
      v45 = *((_DWORD *)v46 + 6);
      if ( (int)++v47 >= v45 )
        goto LABEL_26;
    }
LABEL_47:
    sub_1BCAA3C(Entitys_object, v44);
  }
LABEL_26:
  if ( !v42 )
    goto LABEL_47;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v62,
    v42,
    (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = v62;
  while ( 1 )
  {
    v51 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v51 )
      break;
    if ( !v36 )
      sub_1BCAA3C(v51, v52);
    current_low = LODWORD(i.fields._current);
    v54 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v36,
            &v63,
            (int32_t)i.fields._current,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v54 )
    {
      if ( !v63 )
        sub_1BCAA3C(v54, v55);
      if ( LODWORD(v63[1].monitor) == 40 )
      {
        klass = v63[4].klass;
        if ( !klass )
          sub_1BCAA3C(v54, v55);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v58 = 0LL;
          v59 = current_low << 32;
          do
          {
            if ( v58 >= (unsigned int)namespaze )
              sub_1BCAA44(v54, v55);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v58) == eventId )
            {
              if ( !v63 )
                sub_1BCAA3C(v54, v55);
              v54 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v63[2].klass,
                      targetGimmickId,
                      (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v54 )
              {
                if ( !v63 )
                  sub_1BCAA3C(v54, v55);
                *(_QWORD *)&v66.fields.missionTargetId = v59 | HIDWORD(v63[1].klass);
                v66.fields.targetId = targetGimmickId;
                v66.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v66, 1, v60);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v58;
          }
          while ( (__int64)v58 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void __fastcall ClientMissionManager__SendRequest(
        ClientMissionManager_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *Request_object; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x21
  const MethodInfo *v36; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  __int64 v57; // x2
  __int64 v58; // x3
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v60; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B15876 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionProgressRequest_Argument_TypeInfo, callback, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__,
      v17,
      v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v21,
      v22);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v25, v26);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v29, v30);
    byte_4B15876 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, callback);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v61,
    progressDictionary,
    (const MethodInfo_32AFE34 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v62 = v61;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v62,
            (const MethodInfo_3377050 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v62.fields._getEnumeratorRetType;
    if ( v62.fields._getEnumeratorRetType )
    {
      key = v62.fields._current.fields.key;
      value = v62.fields._current.fields.value;
      v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_1BCAA2C(
                                                                     EventMissionProgressRequest_Argument_ProgressData_TypeInfo,
                                                                     v38,
                                                                     v39,
                                                                     v40);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v44,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v35 )
        sub_1BCAA3C(v45, v46);
      items = v35->fields._items;
      v54 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__;
      ++v35->fields._version;
      if ( !items )
        sub_1BCAA3C(v45, v46);
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          (Il2CppObject *)v44,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v44;
        sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)v44, v47, v48, v49, v50, v51, v52);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v62,
    (const MethodInfo_3377184 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v35 )
    goto LABEL_25;
  if ( v35->fields._size >= 1 )
  {
    deemedTime = this->fields.deemedTime;
    if ( !deemedTime )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
      deemedTime = NetworkManager__getTime(0LL);
    }
    v60 = (EventMissionProgressRequest_Argument_o *)sub_1BCAA2C(
                                                      EventMissionProgressRequest_Argument_TypeInfo,
                                                      v36,
                                                      v57,
                                                      v58);
    EventMissionProgressRequest_Argument___ctor(
      v60,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v35,
      0LL);
    if ( Request_object )
    {
      EventMissionProgressRequest__beginRequest((EventMissionProgressRequest_o *)Request_object, v60, 0LL);
      goto LABEL_22;
    }
LABEL_25:
    sub_1BCAA3C(progressDictionary, v36);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v36);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15877 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B15877 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  if ( (byte_4B1587D & 1) == 0 )
  {
    sub_1BCA7E0(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.targetId, obj);
    byte_4B1587D = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_39079864(
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
  __int64 v4; // x2
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w4
  System_ValueTuple_T1__T2__T3__T4__o v10; // [xsp+0h] [xbp-50h] BYREF

  v2 = *(int32_t **)&this.fields.missionTargetId;
  if ( (byte_4B1587E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, *(_QWORD *)&this.fields.targetId, method);
    sub_1BCA7E0(&Method_System_ValueTuple_int__int__int__int___ctor__, v3, v4);
    byte_4B1587E = 1;
  }
  v5 = *v2;
  v6 = v2[1];
  v7 = v2[2];
  v8 = v2[3];
  memset(&v10, 0, sizeof(v10));
  System_ValueTuple_int__int__int__int____ctor(
    &v10,
    v5,
    v6,
    v7,
    v8,
    (const MethodInfo_3906C60 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v10.fields.Item3 = *(_OWORD *)&v10.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v10.fields.Item3,
           (const MethodInfo_39079C0 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}


System_String_o *__fastcall ClientMissionManager_ProgressDictionaryKey__ToString(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  int *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Object_array *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x20
  __int64 v39; // x0
  int v40; // [xsp+8h] [xbp-38h] BYREF
  int v41; // [xsp+Ch] [xbp-34h] BYREF
  int v42; // [xsp+18h] [xbp-28h] BYREF
  int v43; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4B1587F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&this.fields.targetId, method);
    sub_1BCA7E0(&object___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_21699/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v5, v6);
    byte_4B1587F = 1;
  }
  v7 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 4LL);
  v43 = *v2;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v43);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  v16 = v8;
  if ( v8 )
  {
    v8 = sub_1BCA91C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_18;
  }
  if ( !v7->max_length )
    goto LABEL_17;
  v7->m_Items[0] = (Il2CppObject *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)v7->m_Items, v16, v10, v11, v12, v13, v14, v15);
  v42 = v2[1];
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v23 = v8;
  if ( v8 )
  {
    v8 = sub_1BCA91C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_18;
  }
  if ( v7->max_length <= 1 )
    goto LABEL_17;
  v7->m_Items[1] = (Il2CppObject *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&v7->m_Items[1], v23, v17, v18, v19, v20, v21, v22);
  v41 = v2[2];
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v41);
  v30 = v8;
  if ( v8 )
  {
    v8 = sub_1BCA91C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
      goto LABEL_18;
  }
  if ( v7->max_length <= 2 )
    goto LABEL_17;
  v7->m_Items[2] = (Il2CppObject *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&v7->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v40 = v2[3];
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v37 = v8;
  if ( v8 )
  {
    v8 = sub_1BCA91C(v8, v7->obj.klass->_1.element_class);
    if ( !v8 )
    {
LABEL_18:
      v39 = sub_1BCAA60(v8);
      sub_1BCA908(v39, 0LL);
    }
  }
  if ( v7->max_length <= 3 )
LABEL_17:
    sub_1BCAA44(v8, v9);
  v7->m_Items[3] = (Il2CppObject *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v7->m_Items[3], v37, v31, v32, v33, v34, v35, v36);
  return System_String__Format_62415728((System_String_o *)StringLiteral_21699/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v7, 0LL);
}