void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4388FA4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
    byte_4388FA4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    220,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


System_String_array *__fastcall VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v7; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v9; // x21
  unsigned __int64 v10; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v13; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v14; // x21
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x9
  __int64 v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x0
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0

  if ( (byte_4388FA5 & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&VoicePlayGroupEntity_TypeInfo);
    byte_4388FA5 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_50;
  klass = lookup->klass;
  v9 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 4LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v9,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_50;
  v13 = lookup->klass;
  v14 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v17 = (__int64)&v13->vtable[*v16].method;
  }
  else
  {
LABEL_15:
    v17 = sub_B0F4C0(lookup, System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v17)(
          v14,
          *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_B7769C(0LL, v18);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_B0F4C0(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_29;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_29:
      v27 = sub_B0F4C0(v19, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_47;
    v30 = *(&VoicePlayGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 300LL) < (unsigned int)v30
      || *(VoicePlayGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v30 - 8) != VoicePlayGroupEntity_TypeInfo )
    {
      v28 = sub_B77990(v28);
LABEL_47:
      sub_B7769C(v28, v29);
    }
    if ( *(_DWORD *)(v28 + 24) == voiceType )
    {
      v31 = *(_QWORD *)(v28 + 16);
      if ( !v31 )
        sub_B7769C(0LL, VoicePlayGroupEntity_TypeInfo);
      v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 360LL))(
                                                                     v31,
                                                                     *(_QWORD *)(*(_QWORD *)v31 + 368LL));
      if ( !v5 )
        sub_B7769C(v32, v32);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v32,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v33 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v34 = 0LL;
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_42;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_42:
    v36 = sub_B0F4C0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(
                                                                                         v19,
                                                                                         *(_QWORD *)(v36 + 8));
  if ( !v5 )
LABEL_50:
    sub_B7769C(lookup, v7);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
}