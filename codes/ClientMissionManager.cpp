void __fastcall ClientMissionManager___ctor(ClientMissionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EA909 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ClientMissionManager___ctor__, v8, v9, v10);
    byte_42EA909 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__TypeInfo);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int____ctor(
    v11,
    (const MethodInfo_1A06CA4 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ctor__);
  this->fields.progressDictionary = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.progressDictionary,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_ClientMissionManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClientMissionManager__AddProgress(
        ClientMissionManager_o *this,
        ClientMissionManager_ProgressDictionaryKey_o key,
        int32_t valueToAdd,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x21
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *v15; // x22
  int32_t v16; // w3
  ClientMissionManager_ProgressDictionaryKey_o v17; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v18; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v19; // 0:x1.16
  ClientMissionManager_ProgressDictionaryKey_o v20; // 0:x1.16

  v5 = *(_QWORD *)&key.fields.targetId;
  v6 = *(_QWORD *)&key.fields.missionTargetId;
  if ( (byte_42EA907 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__,
      key.fields.missionTargetId,
      key.fields.targetId,
      *(_QWORD *)&valueToAdd);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__,
      v11,
      v12,
      v13);
    byte_42EA907 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_9;
  *(_QWORD *)&v17.fields.missionTargetId = v6;
  *(_QWORD *)&v17.fields.targetId = v5;
  progressDictionary = (System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *)System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___ContainsKey(progressDictionary, v17, (const MethodInfo_1A07AE0 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__ContainsKey__);
  if ( ((unsigned __int8)progressDictionary & 1) == 0 )
  {
    progressDictionary = this->fields.progressDictionary;
    if ( !progressDictionary )
      goto LABEL_9;
    *(_QWORD *)&v18.fields.missionTargetId = v6;
    *(_QWORD *)&v18.fields.targetId = v5;
    System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
      progressDictionary,
      v18,
      0,
      (const MethodInfo_1A07834 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
  }
  v15 = this->fields.progressDictionary;
  if ( !v15 )
LABEL_9:
    sub_B5D69C(progressDictionary, *(_QWORD *)&key.fields.missionTargetId);
  *(_QWORD *)&v19.fields.missionTargetId = v6;
  *(_QWORD *)&v19.fields.targetId = v5;
  v16 = System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___get_Item(
          v15,
          v19,
          (const MethodInfo_1A07798 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__get_Item__)
      + valueToAdd;
  *(_QWORD *)&v20.fields.missionTargetId = v6;
  *(_QWORD *)&v20.fields.targetId = v5;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___set_Item(
    v15,
    v20,
    v16,
    (const MethodInfo_1A07834 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__set_Item__);
}


void __fastcall ClientMissionManager__ClearData(ClientMissionManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0

  if ( (byte_42EA908 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA908 = 1;
  }
  progressDictionary = this->fields.progressDictionary;
  this->fields.deemedTime = 0LL;
  if ( !progressDictionary )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___Clear(
    progressDictionary,
    (const MethodInfo_1A07A48 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__Clear__);
}


void __fastcall ClientMissionManager__MyRoomPlayVoice(
        ClientMissionManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  void *Instance; // x0
  __int64 v40; // x1
  System_Collections_Generic_HashSet_int__o *v41; // x20
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x22
  int v43; // w8
  int *v44; // x21
  unsigned int v45; // w22
  int v46; // w10
  EventMissionConditionEntity_o *v47; // x23
  __int64 v48; // x8
  unsigned __int64 v49; // x27
  int32_t v50; // w25
  _BOOL8 v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x6
  struct System_String_o *name; // x28
  System_String_c *klass; // x8
  unsigned __int64 v56; // x21
  const MethodInfo *v57; // x4
  __int64 v58; // x1
  int32_t current; // w24
  __int64 v60; // x1
  __int64 v61; // x26
  int v62; // w24
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  int *v66; // [xsp+0h] [xbp-C0h]
  int v67; // [xsp+8h] [xbp-B8h]
  unsigned int v68; // [xsp+Ch] [xbp-B4h]
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // [xsp+10h] [xbp-B0h]
  _BYTE v70[28]; // [xsp+18h] [xbp-A8h] BYREF
  int v71; // [xsp+34h] [xbp-8Ch]
  ClientMissionManager_ProgressDictionaryKey_o v72; // [xsp+38h] [xbp-88h] BYREF
  WarEntity_o *entity; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v74; // [xsp+50h] [xbp-70h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v75; // 0:x0.16

  if ( (byte_42EA905 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserExchangeSvtMaster___, v9, v10, v11);
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    byte_42EA905 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  entity = 0LL;
  *(_QWORD *)&v72.fields.missionTargetId = 0LL;
  *(_QWORD *)&v72.fields.targetId = 0LL;
  v71 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserExchangeSvtMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = UserExchangeSvtMaster__GetEventIdHashSetBySvtId((UserExchangeSvtMaster_o *)Instance, svtId, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v41 = (System_Collections_Generic_HashSet_int__o *)Instance;
  if ( *((_DWORD *)Instance + 8) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_47;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_47;
    Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                 MasterData_WarQuestSelectionMaster,
                 (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_47;
    v43 = *((_DWORD *)Instance + 6);
    v44 = (int *)Instance;
    if ( v43 >= 1 )
    {
      v45 = 0;
      v46 = 0;
      v66 = (int *)Instance;
      while ( 1 )
      {
        if ( v45 >= v43 )
        {
          v65 = sub_B5D6C8(Instance);
          sub_B5D668(v65, 0LL);
        }
        v47 = *(EventMissionConditionEntity_o **)&v44[2 * v45 + 8];
        v67 = v46;
        if ( !v47 )
          break;
        v68 = v45;
        Instance = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                     v47,
                     this->fields.deemedTime,
                     0LL);
        if ( !Instance )
          break;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v70,
          (System_Collections_Generic_HashSet_int__o *)Instance,
          (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v74 = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v70;
        while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v74,
                  (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
        {
          if ( !v69 )
            sub_B5D69C(0LL, v58);
          current = (int32_t)v74.fields._current;
          v51 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v69,
                  &entity,
                  (int32_t)v74.fields._current,
                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v51 )
          {
            if ( !entity )
              sub_B5D69C(v51, v60);
            if ( LODWORD(entity->fields.age) == 39 )
            {
              v61 = *(_QWORD *)&entity->fields.flag;
              if ( !v61 )
                sub_B5D69C(v51, v60);
              v48 = *(_QWORD *)(v61 + 24);
              if ( (int)v48 >= 1 )
              {
                v49 = 0LL;
                do
                {
                  if ( v49 >= (unsigned int)v48 )
                  {
                    v64 = sub_B5D6C8(v51);
                    sub_B5D668(v64, 0LL);
                  }
                  v50 = *(_DWORD *)(v61 + 4 * v49 + 32);
                  v51 = System_Collections_Generic_HashSet_int___Contains(
                          v41,
                          v50,
                          (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( v51 )
                  {
                    if ( !entity )
                      sub_B5D69C(v51, v52);
                    name = entity->fields.name;
                    if ( !name )
                      sub_B5D69C(v51, v52);
                    klass = name[1].klass;
                    if ( (int)klass >= 1 )
                    {
                      v56 = 0LL;
                      do
                      {
                        if ( v56 >= (unsigned int)klass )
                        {
                          v63 = sub_B5D6C8(v51);
                          sub_B5D668(v63, 0LL);
                        }
                        *(_QWORD *)&v75.fields.targetId = (unsigned int)v47->fields.missionTargetId;
                        *(_QWORD *)&v75.fields.missionTargetId = &v72;
                        ClientMissionManager_ProgressDictionaryKey___ctor(
                          v75,
                          current,
                          *((_DWORD *)&name[1].monitor + v56),
                          v50,
                          0,
                          v53);
                        ClientMissionManager__AddProgress(this, v72, 1, v57);
                        LODWORD(klass) = name[1].klass;
                        ++v56;
                      }
                      while ( (__int64)v56 < (int)klass );
                    }
                  }
                  LODWORD(v48) = *(_DWORD *)(v61 + 24);
                  ++v49;
                }
                while ( (__int64)v49 < (int)v48 );
              }
            }
          }
        }
        *(_DWORD *)&v70[4 * v67 + 24] = 259;
        v62 = ++v71;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v74,
          (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        v44 = v66;
        v46 = v62;
        if ( v62 && *(_DWORD *)&v70[4 * v62 + 20] == 259 )
        {
          v46 = v62 - 1;
          v71 = v62 - 1;
        }
        v43 = v66[6];
        ++v45;
        if ( (int)(v68 + 1) >= v43 )
          return;
      }
LABEL_47:
      sub_B5D69C(Instance, v40);
    }
  }
}


void __fastcall ClientMissionManager__OnClickMapGimmick(
        ClientMissionManager_o *this,
        int32_t eventId,
        int32_t targetGimmickId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  DataMasterBase_o *Master_WarQuestSelectionMaster; // x26
  UserEventMissionMaster_o *v50; // x23
  System_Collections_Generic_HashSet_int__o *v51; // x24
  void *Entitys_WarQuestSelectionEntity; // x0
  __int64 v53; // x1
  int v54; // w8
  void *v55; // x26
  unsigned int v56; // w25
  EventMissionConditionEntity_o *v57; // x27
  _BOOL8 v58; // x0
  __int64 v59; // x1
  int v60; // w22
  int32_t current; // w23
  _BOOL8 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x25
  __int64 v65; // x8
  unsigned __int64 v66; // x26
  const MethodInfo *v67; // x6
  const MethodInfo *v68; // x4
  __int64 v69; // x1
  int v70; // w20
  __int64 v71; // x0
  __int64 v72; // x0
  ClientMissionManager_o *v73; // [xsp+0h] [xbp-D0h]
  int64_t userId; // [xsp+8h] [xbp-C8h]
  DataMasterBase_WarMaster__WarEntity__int__o *v75; // [xsp+10h] [xbp-C0h]
  int v76; // [xsp+1Ch] [xbp-B4h]
  _BYTE v77[32]; // [xsp+20h] [xbp-B0h] BYREF
  int v78; // [xsp+40h] [xbp-90h]
  ClientMissionManager_ProgressDictionaryKey_o v79; // [xsp+48h] [xbp-88h] BYREF
  WarEntity_o *v80; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+60h] [xbp-70h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF
  ClientMissionManager_ProgressDictionaryKey_o v83; // 0:x0.16

  if ( (byte_42EA906 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionCondDetailMaster___, eventId, targetGimmickId, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionConditionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventMissionMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v16,
      v17,
      v18);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_EventMissionConditionEntity___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v40, v41, v42);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&NetworkManager_TypeInfo, v46, v47, v48);
    byte_42EA906 = 1;
  }
  entity = 0LL;
  memset(&i, 0, sizeof(i));
  v80 = 0LL;
  *(_QWORD *)&v79.fields.missionTargetId = 0LL;
  *(_QWORD *)&v79.fields.targetId = 0LL;
  v78 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  v75 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionCondDetailMaster___);
  v50 = (UserEventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  userId = NetworkManager__get_UserId(0LL);
  v51 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v51,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_54;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      Master_WarQuestSelectionMaster,
                                      (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_EventMissionConditionEntity___);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_54;
  v54 = *((_DWORD *)Entitys_WarQuestSelectionEntity + 6);
  v55 = Entitys_WarQuestSelectionEntity;
  v73 = this;
  if ( v54 >= 1 )
  {
    v76 = 0;
    v56 = 0;
    while ( 1 )
    {
      if ( v56 >= v54 )
      {
        v72 = sub_B5D6C8(Entitys_WarQuestSelectionEntity);
        sub_B5D668(v72, 0LL);
      }
      v57 = (EventMissionConditionEntity_o *)*((_QWORD *)v55 + (int)v56 + 4);
      if ( !v57 || !v50 )
        goto LABEL_54;
      if ( !UserEventMissionMaster__TryGetEntity(v50, &entity, userId, v57->fields.missionId, 0LL) )
        goto LABEL_19;
      Entitys_WarQuestSelectionEntity = entity;
      if ( !entity )
        goto LABEL_54;
      Entitys_WarQuestSelectionEntity = (void *)UserEventMissionEntity__isClearMission(entity, 0LL);
      if ( ((unsigned __int8)Entitys_WarQuestSelectionEntity & 1) == 0 )
      {
LABEL_19:
        Entitys_WarQuestSelectionEntity = EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
                                            v57,
                                            v73->fields.deemedTime,
                                            0LL);
        if ( !Entitys_WarQuestSelectionEntity )
          goto LABEL_54;
        System_Collections_Generic_HashSet_int___GetEnumerator(
          (System_Collections_Generic_HashSet_Enumerator_T__o *)v77,
          (System_Collections_Generic_HashSet_int__o *)Entitys_WarQuestSelectionEntity,
          (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        for ( i = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v77;
              ;
              System_Collections_Generic_HashSet_int___Add(
                v51,
                (int32_t)i.fields._current,
                (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__) )
        {
          v58 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &i,
                  (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v58 )
            break;
          if ( !v51 )
            sub_B5D69C(v58, v59);
        }
        *(_DWORD *)&v77[4 * v76 + 24] = 140;
        v60 = ++v78;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &i,
          (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v60 )
        {
          v76 = v60;
          if ( *(_DWORD *)&v77[4 * v60 + 20] == 140 )
          {
            v78 = v60 - 1;
            v76 = v60 - 1;
          }
        }
        else
        {
          v76 = 0;
        }
      }
      v54 = *((_DWORD *)v55 + 6);
      if ( (int)++v56 >= v54 )
        goto LABEL_32;
    }
  }
  v76 = 0;
LABEL_32:
  if ( !v51 )
LABEL_54:
    sub_B5D69C(Entitys_WarQuestSelectionEntity, v53);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    (System_Collections_Generic_HashSet_Enumerator_T__o *)v77,
    v51,
    (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  i = *(System_Collections_Generic_HashSet_Enumerator_T__o *)v77;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &i,
            (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    if ( !v75 )
      sub_B5D69C(0LL, v69);
    current = (int32_t)i.fields._current;
    v62 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v75,
            &v80,
            (int32_t)i.fields._current,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    if ( v62 )
    {
      if ( !v80 )
        sub_B5D69C(v62, v63);
      if ( LODWORD(v80->fields.age) == 40 )
      {
        v64 = *(_QWORD *)&v80->fields.flag;
        if ( !v64 )
          sub_B5D69C(v62, v63);
        v65 = *(_QWORD *)(v64 + 24);
        if ( (int)v65 >= 1 )
        {
          v66 = 0LL;
          do
          {
            if ( v66 >= (unsigned int)v65 )
            {
              v71 = sub_B5D6C8(v62);
              sub_B5D668(v71, 0LL);
            }
            if ( *(_DWORD *)(v64 + 32 + 4 * v66) == eventId )
            {
              if ( !v80 )
                sub_B5D69C(v62, v63);
              v62 = System_Linq_Enumerable__Contains_int_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)v80->fields.name,
                      targetGimmickId,
                      (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
              if ( v62 )
              {
                if ( !v80 )
                  sub_B5D69C(v62, v63);
                *(_QWORD *)&v83.fields.targetId = *((unsigned int *)&v80->fields.id + 1);
                *(_QWORD *)&v83.fields.missionTargetId = &v79;
                ClientMissionManager_ProgressDictionaryKey___ctor(v83, current, targetGimmickId, eventId, 0, v67);
                ClientMissionManager__AddProgress(v73, v79, 1, v68);
              }
            }
            LODWORD(v65) = *(_DWORD *)(v64 + 24);
            ++v66;
          }
          while ( (__int64)v66 < (int)v65 );
        }
      }
    }
  }
  *(_DWORD *)&v77[4 * v76 + 24] = 304;
  v70 = ++v78;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v70 && *(_DWORD *)&v77[4 * v70 + 20] == 304 )
    v78 = v70 - 1;
}


void __fastcall ClientMissionManager__SendRequest(
        ClientMissionManager_o *this,
        NetworkManager_ResultCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  EventMissionProgressRequest_o *Request_WarBoardWallAttackRequest; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x21
  const MethodInfo *v47; // x1
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__o *progressDictionary; // x0
  int32_t getEnumeratorRetType; // w23
  Il2CppObject *value; // x24
  Il2CppObject *key; // x25
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x22
  __int64 v53; // x0
  __int64 v54; // x1
  int64_t deemedTime; // x22
  EventMissionProgressRequest_Argument_o *v56; // x23
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42EA903 & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionProgressRequest_Argument_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__get_Current__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Key__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_ClientMissionManager_ProgressDictionaryKey__int__get_Value__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__get_Count__,
      v30,
      v31,
      v32);
    sub_B5D5C4(
      &System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo,
      v33,
      v34,
      v35);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventMissionProgressRequest___, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&EventMissionProgressRequest_Argument_ProgressData_TypeInfo, v42, v43, v44);
    byte_42EA903 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionProgressRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                         callback,
                                                                         (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventMissionProgressRequest___);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___ctor__);
  progressDictionary = this->fields.progressDictionary;
  if ( !progressDictionary )
    goto LABEL_23;
  System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int___GetEnumerator(
    &v57,
    progressDictionary,
    (const MethodInfo_1A07E18 *)Method_System_Collections_Generic_Dictionary_ClientMissionManager_ProgressDictionaryKey__int__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___MoveNext(
            &v58,
            (const MethodInfo_2BC718C *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__MoveNext__) )
  {
    getEnumeratorRetType = v58.fields.getEnumeratorRetType;
    if ( v58.fields.getEnumeratorRetType )
    {
      key = v58.fields.current.fields.key;
      value = v58.fields.current.fields.value;
      v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D694(EventMissionProgressRequest_Argument_ProgressData_TypeInfo);
      EventMissionProgressRequest_Argument_ProgressData___ctor(
        v52,
        (int32_t)key,
        SHIDWORD(key),
        (int32_t)value,
        SHIDWORD(value),
        getEnumeratorRetType,
        0LL);
      if ( !v46 )
        sub_B5D69C(v53, v54);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v46,
        v52,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int___Dispose(
    &v58,
    (const MethodInfo_2BC7310 *)Method_System_Collections_Generic_Dictionary_Enumerator_ClientMissionManager_ProgressDictionaryKey__int__Dispose__);
  if ( !v46 )
    goto LABEL_23;
  if ( v46->fields._size >= 1 )
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
    v56 = (EventMissionProgressRequest_Argument_o *)sub_B5D694(EventMissionProgressRequest_Argument_TypeInfo);
    EventMissionProgressRequest_Argument___ctor(
      v56,
      deemedTime,
      (System_Collections_Generic_IReadOnlyList_EventMissionProgressRequest_Argument_ProgressData__o *)v46,
      0LL);
    if ( Request_WarBoardWallAttackRequest )
    {
      EventMissionProgressRequest__beginRequest(Request_WarBoardWallAttackRequest, v56, 0LL);
      goto LABEL_21;
    }
LABEL_23:
    sub_B5D69C(progressDictionary, v47);
  }
LABEL_21:
  ClientMissionManager__ClearData(this, v47);
}


void __fastcall ClientMissionManager__SetCurrentTimeAsDeemedTime(
        ClientMissionManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA904 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA904 = 1;
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
  if ( (byte_42E5E98 & 1) == 0 )
  {
    sub_B5D5C4(&ClientMissionManager_ProgressDictionaryKey_TypeInfo, this.fields.targetId, (_DWORD)obj, method);
    byte_42E5E98 = 1;
  }
  result = v3
        && *v3 == ClientMissionManager_ProgressDictionaryKey_TypeInfo
        && (v5 = (_QWORD *)j_il2cpp_object_unbox_0(v3), *(_QWORD *)v4 == *v5)
        && (v6 = v5[1], *(_DWORD *)(v4 + 8) == (_DWORD)v6)
        && *(_DWORD *)(v4 + 12) == HIDWORD(v6);
  return result;
}


bool __fastcall ClientMissionManager_ProgressDictionaryKey__Equals_20227300(
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
  __int64 v2; // x3
  int32_t *v3; // x19
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w4
  System_ValueTuple_T1__T2__T3__T4__o v12; // [xsp+0h] [xbp-30h] BYREF

  v3 = *(int32_t **)&this.fields.missionTargetId;
  if ( (byte_42E5E99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_ValueTuple_int__int__int__int__GetHashCode__, this.fields.targetId, (_DWORD)method, v2);
    sub_B5D5C4(&Method_System_ValueTuple_int__int__int__int___ctor__, v4, v5, v6);
    byte_42E5E99 = 1;
  }
  v7 = *v3;
  v8 = v3[1];
  v9 = v3[2];
  v10 = v3[3];
  memset(&v12, 0, sizeof(v12));
  System_ValueTuple_int__int__int__int____ctor(
    &v12,
    v7,
    v8,
    v9,
    v10,
    (const MethodInfo_2BF3068 *)Method_System_ValueTuple_int__int__int__int___ctor__);
  *(_OWORD *)&v12.fields.Item3 = *(_OWORD *)&v12.fields.Item1;
  return System_ValueTuple_int__int__int__int___GetHashCode(
           (System_ValueTuple_T1__T2__T3__T4__o *)&v12.fields.Item3,
           (const MethodInfo_2BF4138 *)Method_System_ValueTuple_int__int__int__int__GetHashCode__);
}


System_String_o *__fastcall ClientMissionManager_ProgressDictionaryKey__ToString(
        ClientMissionManager_ProgressDictionaryKey_o this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  int *v3; // x20
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Object_array *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x20
  __int64 v18; // x0
  __int64 v19; // x0
  int v20; // [xsp+0h] [xbp-30h] BYREF
  int v21; // [xsp+4h] [xbp-2Ch] BYREF
  int v22; // [xsp+8h] [xbp-28h] BYREF
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  v3 = *(int **)&this.fields.missionTargetId;
  if ( (byte_42E5E9A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, this.fields.targetId, (_DWORD)method, v2);
    sub_B5D5C4(&object___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_20794/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v7, v8, v9);
    byte_42E5E9A = 1;
  }
  v10 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 4LL);
  v23 = *v3;
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v23);
  if ( !v10 )
    sub_B5D69C(v11, v12);
  v13 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_B5D684(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_18;
  }
  if ( !v10->max_length )
    goto LABEL_17;
  v10->m_Items[0] = v13;
  sub_B5D560(v10->m_Items);
  v22 = v3[1];
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v14 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_B5D684(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_18;
  }
  if ( v10->max_length <= 1 )
    goto LABEL_17;
  v10->m_Items[1] = v14;
  sub_B5D560(&v10->m_Items[1]);
  v21 = v3[2];
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v15 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_B5D684(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
      goto LABEL_18;
  }
  if ( v10->max_length <= 2 )
    goto LABEL_17;
  v10->m_Items[2] = v15;
  sub_B5D560(&v10->m_Items[2]);
  v20 = v3[3];
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v16 = (Il2CppObject *)v11;
  if ( v11 )
  {
    v11 = sub_B5D684(v11, v10->obj.klass->_1.element_class);
    if ( !v11 )
    {
LABEL_18:
      v19 = sub_B5D6BC();
      sub_B5D668(v19, 0LL);
    }
  }
  if ( v10->max_length <= 3 )
  {
LABEL_17:
    v18 = sub_B5D6C8(v11);
    sub_B5D668(v18, 0LL);
  }
  v10->m_Items[3] = v16;
  sub_B5D560(&v10->m_Items[3]);
  return System_String__Format_44656512((System_String_o *)StringLiteral_20794/*"missionTargetId={0}, condDetailId={1}, targetId={2}, eventId={3}"*/, v10, 0LL);
}