void __fastcall AiMaster___ctor(AiMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6860 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_AiMaster__AiEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6860 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    104,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_AiMaster__AiEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AiEntity_o *__fastcall AiMaster__GetEntity(AiMaster_o *this, int32_t id, int32_t idx, const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E685E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__, id, idx, method);
    byte_42E685E = 1;
  }
  PK = AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (AiEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                         PK,
                         (const MethodInfo_23FB260 *)Method_DataMasterBase_AiMaster__AiEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiMaster__TryGetEntity(
        AiMaster_o *this,
        AiEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E685F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__, (_DWORD)entity, id, *(_QWORD *)&idx);
    byte_42E685F = 1;
  }
  PK = AiBaseEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_AiMaster__AiEntity__string__TryGetEntity__);
}


AiEntity_array *__fastcall AiMaster__getListFormGroupId(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x19
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v45; // x3
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x10
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0

  if ( (byte_42E6861 & 1) == 0 )
  {
    sub_B5D5C4(&AiEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_AiMaster___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiEntity__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiEntity___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_AiEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    byte_42E6861 = 1;
  }
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AiEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AiEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AiMaster___);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)Instance->fields.lookup;
  if ( !Instance )
    goto LABEL_37;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v38);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v42;
        p_offset += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v39);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v46 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v49 = (__int64)&v46->vtable[*v48].method;
    }
    else
    {
LABEL_18:
      v49 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v45);
    }
    v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v49 + 8));
    if ( !v50 )
      goto LABEL_35;
    v52 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v50->klass->_2.bitflags2 + 1) < (unsigned int)v52
      || (AiEntity_c *)v50->klass->_2.typeHierarchy[v52 - 1] != AiEntity_TypeInfo )
    {
      v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v50);
LABEL_35:
      sub_B5D69C(v50, v51);
    }
    if ( v50->fields.missionTargetId == id )
    {
      if ( !v35 )
        sub_B5D69C(v50, AiEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v35,
        v50,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AiEntity__Add__);
    }
  }
  v53 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_30:
    v56 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v45);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                Enumerator,
                                *(_QWORD *)(v56 + 8));
  if ( !v35 )
LABEL_37:
    sub_B5D69C(Instance, v37);
  return (AiEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_AiEntity__ToArray__);
}