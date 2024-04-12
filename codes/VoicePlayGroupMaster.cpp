void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE017 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
    byte_42AE017 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    220,
    (const MethodInfo_23E268C *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


System_String_array *__fastcall VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v10; // x21
  unsigned __int64 v11; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x21
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x21
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x9
  __int64 v35; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0

  if ( (byte_42AE018 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&VoicePlayGroupEntity_TypeInfo);
    byte_42AE018 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_50;
  klass = lookup->klass;
  v10 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 4LL,
                 v8);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v10,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_50;
  v15 = lookup->klass;
  v16 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo )
    {
      ++v17;
      v18 += 4;
      if ( v17 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v19 = (__int64)&v15->vtable[*v18].method;
  }
  else
  {
LABEL_15:
    v19 = sub_AEB880(lookup, System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, 0LL, v14);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v19)(
          v16,
          *(_QWORD *)(v19 + 8));
  if ( !v22 )
    sub_B52A5C(0LL, v20);
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_22;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_22:
      v26 = sub_AEB880(v22, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_29;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_29:
      v31 = sub_AEB880(v22, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v22, *(_QWORD *)(v31 + 8));
    if ( !v32 )
      goto LABEL_47;
    v34 = *(&VoicePlayGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) < (unsigned int)v34
      || *(VoicePlayGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v32 + 200LL) + 8 * v34 - 8) != VoicePlayGroupEntity_TypeInfo )
    {
      v32 = sub_B52D50(v32);
LABEL_47:
      sub_B52A5C(v32, v33);
    }
    if ( *(_DWORD *)(v32 + 24) == voiceType )
    {
      v35 = *(_QWORD *)(v32 + 16);
      if ( !v35 )
        sub_B52A5C(0LL, VoicePlayGroupEntity_TypeInfo);
      v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 360LL))(
                                                                     v35,
                                                                     *(_QWORD *)(*(_QWORD *)v35 + 368LL));
      if ( !v5 )
        sub_B52A5C(v36, v36);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v36,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v37 = *(_QWORD *)v22;
  if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
  {
    v38 = 0LL;
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
        goto LABEL_42;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_42:
    v40 = sub_AEB880(v22, System_IDisposable_TypeInfo, 0LL, v27);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(
                                                                                         v22,
                                                                                         *(_QWORD *)(v40 + 8));
  if ( !v5 )
LABEL_50:
    sub_B52A5C(lookup, v7);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
}