void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB3D53 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v4);
    byte_4BB3D53 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v5,
    (const MethodInfo_333C5D8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.progressDictionary, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
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
  if ( (byte_4BB3D51 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      *(_QWORD *)&key.fields.missionTargetId);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v8);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v9);
    byte_4BB3D51 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v13.fields.missionTargetId = v6;
  *(_QWORD *)&v13.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v13, (const MethodInfo_333D1C8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
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
      (const MethodInfo_333CFA8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v11 = this->fields.progressDictionary;
  if ( !v11 )
LABEL_9:
    sub_1C13F80(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v15.fields.missionTargetId = v6;
  *(_QWORD *)&v15.fields.targetId = v5;
  v12 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v11,
          v15,
          (const MethodInfo_333CF10 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v16.fields.missionTargetId = v6;
  *(_QWORD *)&v16.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v11,
    v16,
    v12,
    (const MethodInfo_333CFA8 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_4BB3D52 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      method);
    byte_4BB3D52 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_333D15C *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
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
  __int64 v21; // x0
  int v22; // w8
  unsigned int v23; // w9
  char *v24; // x8
  __int64 v25; // x23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 current_low; // x24
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v33; // x22
  __int64 v34; // x26
  __int64 v35; // x24
  const MethodInfo *v36; // x4
  Il2CppClass *v37; // x29
  const char *v38; // x8
  unsigned __int64 v39; // x28
  __int64 v40; // x24
  int *v41; // [xsp+8h] [xbp-B8h]
  unsigned int v42; // [xsp+14h] [xbp-ACh]
  System_Collections_Generic_HashSet_Enumerator_T__o v43; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v45; // [xsp+40h] [xbp-80h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v46; // 0:x1.16

  if ( (byte_4BB3D4F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v6);
    sub_1C13D24(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v7);
    sub_1C13D24(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys_EventMissionConditionEntity___,
      v8);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Contains__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4BB3D4F = 1;
  }
  memset(&v45, 0, sizeof(v45));
  entity = 0LL;
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_45;
  Instance = (char *)UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_45;
  v18 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    Instance = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !MasterData_object )
      goto LABEL_45;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v21 = sub_1C13E58(MasterData_object->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys_EventMissionConditionEntity___
                                                       + 40)
                                                     + 1].methodPtr);
    Instance = (char *)(*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v21 + 8))(MasterData_object, v21);
    if ( !Instance )
      goto LABEL_45;
    v22 = *((_DWORD *)Instance + 6);
    if ( v22 >= 1 )
    {
      v23 = 0;
      v41 = (int *)Instance;
      while ( 1 )
      {
        if ( v23 >= v22 )
          sub_1C13F88(Instance, v17);
        v24 = &Instance[8 * v23];
        v25 = *((_QWORD *)v24 + 4);
        if ( !v25 )
          break;
        v42 = v23;
        Instance = (char *)EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                             *((EventMissionConditionEntity_o **)v24 + 4),
                             this->fields.deemedTime,
                             0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v43,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_34E0E60 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v45 = v43;
        while ( 1 )
        {
          v26 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v45,
                  (const MethodInfo_33BA8B4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v26 )
            break;
          if ( !v20 )
            sub_1C13F80(v26, v27);
          current_low = LODWORD(v45.fields._current);
          v29 = DataMasterBase_object__object__int___TryGetEntity(
                  v20,
                  &entity,
                  (int32_t)v45.fields._current,
                  (const MethodInfo_3238670 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v29 )
          {
            if ( !entity )
              sub_1C13F80(v29, v30);
            if ( LODWORD(entity[1].monitor) == 39 )
            {
              klass = entity[4].klass;
              if ( !klass )
                sub_1C13F80(v29, v30);
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze >= 1 )
              {
                v33 = 0LL;
                v34 = current_low << 32;
                do
                {
                  if ( v33 >= (unsigned int)namespaze )
                    sub_1C13F88(v29, v30);
                  v35 = *((unsigned int *)&klass->_1.byval_arg.data + v33);
                  v29 = System_Collections_Generic_HashSet_int___Contains(
                          v18,
                          v35,
                          (const MethodInfo_34E09CC *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v29 )
                  {
                    if ( !entity )
                      sub_1C13F80(v29, v30);
                    v37 = entity[2].klass;
                    if ( !v37 )
                      sub_1C13F80(v29, v30);
                    v38 = v37->_1.namespaze;
                    if ( (int)v38 >= 1 )
                    {
                      v39 = 0LL;
                      v40 = v35 << 32;
                      do
                      {
                        if ( v39 >= (unsigned int)v38 )
                          sub_1C13F88(v29, v30);
                        *(_QWORD *)&v46.fields.missionTargetId = v34 | *(unsigned int *)(v25 + 32);
                        *(_QWORD *)&v46.fields.targetId = v40 | *((unsigned int *)&v37->_1.byval_arg.data + v39);
                        ClientMissionManager__AddProgress(this, v46, 1, v36);
                        LODWORD(v38) = v37->_1.namespaze;
                        ++v39;
                      }
                      while ( (__int64)v39 < (int)v38 );
                    }
                  }
                  LODWORD(namespaze) = klass->_1.namespaze;
                  ++v33;
                }
                while ( (__int64)v33 < (int)namespaze );
              }
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v45,
          (const MethodInfo_33BA8B0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        Instance = (char *)v41;
        v22 = v41[6];
        v23 = v42 + 1;
        if ( (int)(v42 + 1) >= v22 )
          return;
      }
LABEL_45:
      sub_1C13F80(Instance, v17);
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
  __int64 isClearMission; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  int v30; // w8
  __int64 v31; // x26
  unsigned int v32; // w28
  EventMissionConditionEntity_o *v33; // x27
  _BOOL8 v34; // x0
  __int64 v35; // x1
  _BOOL8 v36; // x0
  __int64 v37; // x1
  __int64 current_low; // x24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v43; // x28
  __int64 v44; // x24
  const MethodInfo *v45; // x4
  int64_t userId; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *v48; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v51; // 0:x1.16

  if ( (byte_4BB3D50 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMaster_UserEventMissionMaster___, v8);
    sub_1C13D24(&DataManager_TypeInfo, v9);
    sub_1C13D24(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v10);
    sub_1C13D24(
      &Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys_EventMissionConditionEntity___,
      v11);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v12);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Add__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor__, v18);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_1C13D24(&NetworkManager_TypeInfo, v20);
    byte_4BB3D50 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v48 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v22 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v23);
    byte_4BAF1E5 = 1;
  }
  v25 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v25 = NetworkManager_TypeInfo;
  }
  userId = v25->static_fields->userIdNumber;
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !Master_object )
    goto LABEL_51;
  v29 = sub_1C13E58(Master_object->klass->vtable[*((unsigned __int16 *)Method_DataMasterBase_EventMissionConditionMaster__EventMissionConditionEntity__string__getEntitys_EventMissionConditionEntity___
                                                 + 40)
                                               + 1].methodPtr);
  isClearMission = (*(__int64 (__fastcall **)(Il2CppObject *, __int64))(v29 + 8))(Master_object, v29);
  if ( !isClearMission )
    goto LABEL_51;
  v30 = *(_DWORD *)(isClearMission + 24);
  v31 = isClearMission;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= v30 )
        sub_1C13F88(isClearMission, v28);
      v33 = *(EventMissionConditionEntity_o **)(v31 + 8LL * (int)v32 + 32);
      if ( !v33 || !v24 )
        break;
      if ( !UserEventMissionMaster__TryGetEntity(
              (UserEventMissionMaster_o *)v24,
              &entity,
              userId,
              v33->fields.missionId,
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
                                    v33,
                                    this->fields.deemedTime,
                                    0LL);
        if ( !isClearMission )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v47,
          (System_Collections_Generic_HashSet_int__o *)isClearMission,
          (const MethodInfo_34E0E60 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = v47;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v26,
                (int32_t)i.fields._current,
                (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v34 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_33BA8B4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v34 )
            break;
          if ( !v26 )
            sub_1C13F80(v34, v35);
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_33BA8B0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
      }
      v30 = *(_DWORD *)(v31 + 24);
      if ( (int)++v32 >= v30 )
        goto LABEL_30;
    }
LABEL_51:
    sub_1C13F80(isClearMission, v28);
  }
LABEL_30:
  if ( !v26 )
    goto LABEL_51;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v47,
    v26,
    (const MethodInfo_34E0E60 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = v47;
  while ( 1 )
  {
    v36 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_33BA8B4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v36 )
      break;
    if ( !v22 )
      sub_1C13F80(v36, v37);
    current_low = LODWORD(i.fields._current);
    v39 = DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
            &v48,
            (int32_t)i.fields._current,
            (const MethodInfo_3238670 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v39 )
    {
      if ( !v48 )
        sub_1C13F80(v39, v40);
      if ( LODWORD(v48[1].monitor) == 40 )
      {
        klass = v48[4].klass;
        if ( !klass )
          sub_1C13F80(v39, v40);
        namespaze = klass->_1.namespaze;
        if ( (int)namespaze >= 1 )
        {
          v43 = 0LL;
          v44 = current_low << 32;
          do
          {
            if ( v43 >= (unsigned int)namespaze )
              sub_1C13F88(v39, v40);
            if ( *((_DWORD *)&klass->_1.byval_arg.data + v43) == eventId )
            {
              if ( !v48 )
                sub_1C13F80(v39, v40);
              v39 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v48[2].klass,
                      targetGimmickId,
                      (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v39 )
              {
                if ( !v48 )
                  sub_1C13F80(v39, v40);
                *(_QWORD *)&v51.fields.missionTargetId = v44 | HIDWORD(v48[1].klass);
                v51.fields.targetId = targetGimmickId;
                v51.fields.eventId = eventId;
                ClientMissionManager__AddProgress(this, v51, 1, v45);
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
    &i,
    (const MethodInfo_33BA8B0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v39; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BB3D4D & 1) == 0 )
  {
    sub_1C13D24(&EventMissionProgressRequest_Argument_TypeInfo, callback);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v5);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v6);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v7);
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v8);
    sub_1C13D24(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v9);
    sub_1C13D24(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__, v12);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v13);
    sub_1C13D24(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v14);
    sub_1C13D24(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v15);
    sub_1C13D24(&NetworkManager_TypeInfo, v16);
    sub_1C13D24(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v17);
    byte_4BB3D4D = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     callback,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v40,
    progressDictionary,
    (const MethodInfo_333D3E4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v41,
            (const MethodInfo_3402AC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v41.fields._getEnumeratorRetType;
    if ( v41.fields._getEnumeratorRetType )
    {
      key = v41.fields._current.fields.key;
      value = v41.fields._current.fields.value;
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_1C13F70(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v25,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v19 )
        sub_1C13F80(v26, v27);
      items = v19->fields._items;
      v35 = Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__;
      ++v19->fields._version;
      if ( !items )
        sub_1C13F80(v26, v27);
      size = v19->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v25,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v25;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v25, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v41,
    (const MethodInfo_3402BF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
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
    v39 = (EventMissionProgressRequest_Argument_o *)sub_1C13F70(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v39,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v19,
      0LL);
    if ( Request_object )
    {
      EventMissionProgressRequest__beginRequest((EventMissionProgressRequest_o *)Request_object, v39, 0LL);
      goto LABEL_22;
    }
LABEL_25:
    sub_1C13F80(progressDictionary, v20);
  }
LABEL_22:
  ClientMissionManager__ClearData(this, v20);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB3D4E & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    byte_4BB3D4E = 1;
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
  if ( (byte_4BB3D54 & 1) == 0 )
  {
    sub_1C13D24(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.targetId);
    byte_4BB3D54 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3, *(_QWORD *)&this.fields.targetId, obj, method),
            *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_39513868(
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
  if ( (byte_4BB3D55 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, *(_QWORD *)&this.fields.targetId);
    sub_1C13D24(&Method_System_ValueTuple_int__int__int__int___ctor__, v3);
    byte_4BB3D55 = 1;
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
    (const MethodInfo_3992238 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v9.fields.Item3 = *(_OWORD *)&v9.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v9.fields.Item3,
           (const MethodInfo_3992F98 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x20
  __int64 v49; // x0
  int v50; // [xsp+8h] [xbp-38h] BYREF
  int v51; // [xsp+Ch] [xbp-34h] BYREF
  int v52; // [xsp+18h] [xbp-28h] BYREF
  int v53; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = *(int **)&this.fields.missionTargetId;
  if ( (byte_4BB3D56 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&this.fields.targetId);
    sub_1C13D24(&object___TypeInfo, v3);
    sub_1C13D24(&StringLiteral_21821/*"missText"*/, v4);
    byte_4BB3D56 = 1;
  }
  v5 = (System_Object_array *)sub_1C13DCC(object___TypeInfo, 4LL);
  v53 = *v2;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v53, v6, v7, v8);
  if ( !v5 )
    sub_1C13F80(v9, v10);
  v17 = v9;
  if ( v9 )
  {
    v9 = sub_1C13E60(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( !v5->max_length )
    goto LABEL_17;
  v5->m_Items[0] = (Il2CppObject *)v17;
  sub_1C13CC8((PartyOrganizationUtility_o *)v5->m_Items, v17, v11, v12, v13, v14, v15, v16);
  v52 = v2[1];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v52, v18, v19, v20);
  v27 = v9;
  if ( v9 )
  {
    v9 = sub_1C13E60(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 1 )
    goto LABEL_17;
  v5->m_Items[1] = (Il2CppObject *)v27;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v5->m_Items[1], v27, v21, v22, v23, v24, v25, v26);
  v51 = v2[2];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v51, v28, v29, v30);
  v37 = v9;
  if ( v9 )
  {
    v9 = sub_1C13E60(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_18;
  }
  if ( v5->max_length <= 2 )
    goto LABEL_17;
  v5->m_Items[2] = (Il2CppObject *)v37;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v5->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
  v50 = v2[3];
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v50, v38, v39, v40);
  v47 = v9;
  if ( v9 )
  {
    v9 = sub_1C13E60(v9, v5->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_18:
      v49 = sub_1C13FA4(v9);
      sub_1C13E4C(v49, 0LL);
    }
  }
  if ( v5->max_length <= 3 )
LABEL_17:
    sub_1C13F88(v9, v10);
  v5->m_Items[3] = (Il2CppObject *)v47;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v5->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  return System_String__Format_62982452((System_String_o *)StringLiteral_21821/*"missText"*/, v5, 0LL);
}