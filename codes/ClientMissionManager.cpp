void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F99ED & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v7);
    byte_40F99ED = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo,
                                                                                                     method,
                                                                                                     v2,
                                                                                                     v3,
                                                                                                     v4);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v8,
    (const MethodInfo_2D744DC *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.progressDictionary,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_40F99EC & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      method);
    byte_40F99EC = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_B170D4();
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_2D75280 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  WebViewManager_o *Instance; // x0
  UserExchangeSvtMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_HashSet_int__o *EventIdHashSetBySvtId; // x0
  System_Collections_Generic_HashSet_int__o *v22; // x20
  WebViewManager_o *v23; // x0
  DataMasterBase_o *v24; // x22
  WebViewManager_o *v25; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  int max_length; // w8
  WarQuestSelectionEntity_array *v30; // x19
  unsigned int v31; // w21
  int v32; // w10
  EventMissionConditionEntity_o *v33; // x23
  System_Collections_Generic_HashSet_int__o *PossibleClientProgressMissionCondDetailIdHashSet; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x21
  int32_t v37; // w25
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  const MethodInfo *v41; // x6
  struct System_String_o *name; // x20
  System_String_c *klass; // x8
  unsigned __int64 v44; // x22
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  bool v46; // w0
  ClientMissionManager_o *v47; // x21
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v48; // x28
  __int64 v49; // x26
  __int64 v50; // x27
  int32_t v51; // w3
  __int64 v52; // x19
  int32_t current; // w24
  int v54; // w22
  WarQuestSelectionEntity_array *v55; // [xsp+8h] [xbp-D8h]
  int v56; // [xsp+10h] [xbp-D0h]
  unsigned int v57; // [xsp+14h] [xbp-CCh]
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // [xsp+18h] [xbp-C8h]
  System_Collections_Generic_HashSet_int__o *v59; // [xsp+20h] [xbp-C0h]
  __int64 v60; // [xsp+28h] [xbp-B8h]
  unsigned __int64 v61; // [xsp+30h] [xbp-B0h]
  _BYTE v62[28]; // [xsp+38h] [xbp-A8h] BYREF
  int v63; // [xsp+54h] [xbp-8Ch]
  ClientMissionManager_ProgressDictionaryKey_o v64; // [xsp+58h] [xbp-88h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v66; // [xsp+70h] [xbp-70h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v67; // 0:x0.16
  ClientMissionManager_ProgressDictionaryKey_o v68; // 0:x1.16

  if ( (byte_40F99EB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v6);
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v7);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40F99EB = 1;
  }
  memset(&v66, 0, sizeof(v66));
  entity = 0LL;
  *(_QWORD *)&v64.fields.missionTargetId = 0LL;
  *(_QWORD *)&v64.fields.targetId = 0LL;
  v63 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (UserExchangeSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_56;
  EventIdHashSetBySvtId = UserExchangeSvtMaster__GetEventIdHashSetBySvtId(
                            MasterData_WarQuestSelectionMaster,
                            svtId,
                            0LL);
  if ( !EventIdHashSetBySvtId )
    goto LABEL_56;
  v22 = EventIdHashSetBySvtId;
  if ( EventIdHashSetBySvtId->fields._count )
  {
    v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v23 )
      goto LABEL_56;
    v24 = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v23,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v25 )
      goto LABEL_56;
    v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v25,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    if ( !v24 )
      goto LABEL_56;
    Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                        v24,
                                        (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Entitys_WarQuestSelectionEntity )
      goto LABEL_56;
    max_length = Entitys_WarQuestSelectionEntity->max_length;
    v30 = Entitys_WarQuestSelectionEntity;
    if ( max_length >= 1 )
    {
      v31 = 0;
      v32 = 0;
      v59 = v22;
      v55 = Entitys_WarQuestSelectionEntity;
      while ( 1 )
      {
        if ( v31 >= max_length )
        {
          sub_B17100(Entitys_WarQuestSelectionEntity, v27, v28);
          sub_B170A0();
        }
        v33 = (EventMissionConditionEntity_o *)v30->m_Items[v31];
        v56 = v32;
        if ( !v33 )
          break;
        v57 = v31;
        PossibleClientProgressMissionCondDetailIdHashSet = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                                                             v33,
                                                             this->fields.deemedTime,
                                                             0LL);
        if ( !PossibleClientProgressMissionCondDetailIdHashSet )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v62,
          PossibleClientProgressMissionCondDetailIdHashSet,
          (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v66 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v62;
        while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v66,
                  (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
        {
          if ( !v58 )
            sub_B170D4();
          current = (int32_t)v66.fields._current;
          v38 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v58,
                  &entity,
                  (int32_t)v66.fields._current,
                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v38 )
          {
            if ( !entity )
              sub_B170D4();
            if ( LODWORD(entity->fields.age) == 39 )
            {
              v52 = *(_QWORD *)&entity->fields.flag;
              if ( !v52 )
                sub_B170D4();
              v35 = *(_QWORD *)(v52 + 24);
              if ( (int)v35 >= 1 )
              {
                v36 = 0LL;
                v60 = *(_QWORD *)&entity->fields.flag;
                do
                {
                  if ( v36 >= (unsigned int)v35 )
                  {
                    sub_B17100(v38, v39, v40);
                    sub_B170A0();
                  }
                  v37 = *(_DWORD *)(v52 + 4 * v36 + 32);
                  v38 = System_Collections_Generic_HashSet_int___Contains(
                          v22,
                          v37,
                          (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  v61 = v36;
                  if ( v38 )
                  {
                    if ( !entity )
                      sub_B170D4();
                    name = entity->fields.name;
                    if ( !name )
                      sub_B170D4();
                    klass = name[1].klass;
                    if ( (int)klass >= 1 )
                    {
                      v44 = 0LL;
                      do
                      {
                        if ( v44 >= (unsigned int)klass )
                        {
                          sub_B17100(v38, v39, v40);
                          sub_B170A0();
                        }
                        *(_QWORD *)&v67.fields.targetId = (unsigned int)v33->fields.missionTargetId;
                        *(_QWORD *)&v67.fields.missionTargetId = &v64;
                        ClientMissionManager_ProgressDictionaryKey___ctor(
                          v67,
                          current,
                          *((_DWORD *)&name[1].monitor + v44),
                          v37,
                          0,
                          v41);
                        progressDictionary = this->fields.progressDictionary;
                        if ( !progressDictionary )
                          sub_B170D4();
                        v46 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(
                                progressDictionary,
                                v64,
                                (const MethodInfo_2D75318 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
                        v47 = this;
                        v48 = this->fields.progressDictionary;
                        v49 = *(_QWORD *)&v64.fields.missionTargetId;
                        v50 = *(_QWORD *)&v64.fields.targetId;
                        if ( v46 )
                        {
                          if ( !v48 )
                            sub_B170D4();
                          v51 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
                                  v48,
                                  v64,
                                  (const MethodInfo_2D74FD0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
                              + 1;
                          *(_QWORD *)&v68.fields.missionTargetId = v49;
                          *(_QWORD *)&v68.fields.targetId = v50;
                          System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
                            v48,
                            v68,
                            v51,
                            (const MethodInfo_2D7506C *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
                        }
                        else
                        {
                          if ( !v48 )
                            sub_B170D4();
                          System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
                            v48,
                            v64,
                            1,
                            (const MethodInfo_2D7506C *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
                        }
                        LODWORD(klass) = name[1].klass;
                        ++v44;
                        this = v47;
                      }
                      while ( (__int64)v44 < (int)klass );
                    }
                  }
                  v52 = v60;
                  v22 = v59;
                  LODWORD(v35) = *(_DWORD *)(v60 + 24);
                  v36 = v61 + 1;
                }
                while ( (__int64)(v61 + 1) < (int)v35 );
              }
            }
          }
        }
        *(_DWORD *)&v62[4 * v56 + 24] = 324;
        v54 = ++v63;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v66,
          (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        v30 = v55;
        v32 = v54;
        if ( v54 && *(_DWORD *)&v62[4 * v54 + 20] == 324 )
        {
          v32 = v54 - 1;
          v63 = v54 - 1;
        }
        max_length = v55->max_length;
        v31 = v57 + 1;
        if ( (int)(v57 + 1) >= max_length )
          return;
      }
LABEL_56:
      sub_B170D4();
    }
  }
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
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x22
  const MethodInfo *v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v38; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40F99E9 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionProgressRequest_Argument_TypeInfo, callback);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v13);
    sub_B16FFC(&System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo, v14);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v17);
    byte_40F99E9 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionProgressRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                         callback,
                                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v39,
    progressDictionary,
    (const MethodInfo_2D75650 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v40,
            (const MethodInfo_2972F74 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v40.fields.getEnumeratorRetType;
    if ( v40.fields.getEnumeratorRetType )
    {
      key = v40.fields.current.fields.key;
      value = v40.fields.current.fields.value;
      v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B170CC(
                                                                     EventMissionProgressRequest_Argument_ProgressData_TypeInfo,
                                                                     v25,
                                                                     v26,
                                                                     v27,
                                                                     v28);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v32,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v23 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        v32,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v40,
    (const MethodInfo_29730F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v23 )
    goto LABEL_23;
  if ( v23->fields._size >= 1 )
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
    v38 = (EventMissionProgressRequest_Argument_o *)sub_B170CC(
                                                      EventMissionProgressRequest_Argument_TypeInfo,
                                                      v33,
                                                      v34,
                                                      v35,
                                                      v36);
    EventMissionProgressRequest_Argument___ctor(
      v38,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v23,
      0LL);
    if ( Request_WarBoardWallAttackRequest )
    {
      EventMissionProgressRequest__beginRequest(Request_WarBoardWallAttackRequest, v38, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_21:
  ClientMissionManager__ClearData(this, v33);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F99EA & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40F99EA = 1;
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
  if ( (byte_40F70FA & 1) == 0 )
  {
    sub_B16FFC(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, *(_QWORD *)&this.fields.targetId);
    byte_40F70FA = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_19452428(
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
  if ( (byte_40F70FB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, *(_QWORD *)&this.fields.targetId);
    sub_B16FFC(&Method_System_ValueTuple_int__int__int__int___ctor__, v3);
    byte_40F70FB = 1;
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
    (const MethodInfo_2AD66C4 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v9.fields.Item3 = *(_OWORD *)&v9.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v9.fields.Item3,
           (const MethodInfo_2AD7794 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}