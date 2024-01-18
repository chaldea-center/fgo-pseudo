void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__, method);
    byte_418D2F2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    219,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  DataManager_c *klass; // x8
  DataManager_o *v21; // x21
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 v24; // x0
  __int64 v25; // x3
  DataManager_c *v26; // x8
  DataManager_o *v27; // x21
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x21
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x3
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x9
  __int64 v46; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0

  if ( (byte_418D2F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayGroupMaster___, *(_QWORD *)&voiceType);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v12);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&VoicePlayGroupEntity_TypeInfo, v15);
    byte_418D2F3 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayGroupMaster___);
  Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_51;
  klass = Instance->klass;
  v21 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      p_offset += 2;
      if ( v22 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v24 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v24 = sub_AC5258(
            Instance,
            System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
            4LL,
            v19);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  if ( !Instance )
    goto LABEL_51;
  v26 = Instance->klass;
  v27 = Instance;
  if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v30 = (__int64)(&v26->vtable._0_Equals.method + 2 * *v29);
  }
  else
  {
LABEL_16:
    v30 = sub_AC5258(Instance, System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, 0LL, v25);
  }
  v33 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v33 )
    sub_B2C434(0LL, v31);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_23;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_23:
      v37 = sub_AC5258(v33, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v40 = 0LL;
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_30;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_30:
      v42 = sub_AC5258(v33, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v38);
    }
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v33, *(_QWORD *)(v42 + 8));
    if ( !v43 )
      goto LABEL_48;
    v45 = *(&VoicePlayGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 300LL) < (unsigned int)v45
      || *(VoicePlayGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v45 - 8) != VoicePlayGroupEntity_TypeInfo )
    {
      sub_B2C728(v43);
LABEL_48:
      sub_B2C434(v43, v44);
    }
    if ( *(_DWORD *)(v43 + 24) == voiceType )
    {
      v46 = *(_QWORD *)(v43 + 16);
      if ( !v46 )
        sub_B2C434(0LL, VoicePlayGroupEntity_TypeInfo);
      v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 360LL))(
                                                                     v46,
                                                                     *(_QWORD *)(*(_QWORD *)v46 + 368LL));
      if ( !v16 )
        sub_B2C434(v47, v47);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        v47,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v48 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v49 = 0LL;
    v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_43;
    }
    v51 = v48 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_43:
    v51 = sub_AC5258(v33, System_IDisposable_TypeInfo, 0LL, v38);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v33, *(_QWORD *)(v51 + 8));
  if ( !v16 )
LABEL_51:
    sub_B2C434(Instance, v18);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}