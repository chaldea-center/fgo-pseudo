void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E68A3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E68A3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    220,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


System_String_array *__fastcall VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v35; // x1
  __int64 v36; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v38; // x21
  unsigned __int64 v39; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v43; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v44; // x21
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x3
  __int64 v50; // x21
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x9
  __int64 v63; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v64; // x0
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0

  if ( (byte_42E68A4 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, voiceType, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&VoicePlayGroupEntity_TypeInfo, v30, v31, v32);
    byte_42E68A4 = 1;
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_50;
  klass = lookup->klass;
  v38 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v39;
      p_offset += 2;
      if ( v39 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 4LL,
                 v36);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v38,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_50;
  v43 = lookup->klass;
  v44 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    v46 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v47 = (__int64)&v43->vtable[*v46].method;
  }
  else
  {
LABEL_15:
    v47 = sub_AF54C0(lookup, System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, 0LL, v42);
  }
  v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v47)(
          v44,
          *(_QWORD *)(v47 + 8));
  if ( !v50 )
    sub_B5D69C(0LL, v48);
  while ( 1 )
  {
    v51 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v52 = 0LL;
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_22;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_22:
      v54 = sub_AF54C0(v50, System_Collections_IEnumerator_TypeInfo, 0LL, v49);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
      break;
    v56 = *(_QWORD *)v50;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v57 = 0LL;
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v58 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_29;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_29:
      v59 = sub_AF54C0(v50, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v55);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v50, *(_QWORD *)(v59 + 8));
    if ( !v60 )
      goto LABEL_47;
    v62 = *(&VoicePlayGroupEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v60 + 300LL) < (unsigned int)v62
      || *(VoicePlayGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v60 + 200LL) + 8 * v62 - 8) != VoicePlayGroupEntity_TypeInfo )
    {
      v60 = sub_B5D990(v60);
LABEL_47:
      sub_B5D69C(v60, v61);
    }
    if ( *(_DWORD *)(v60 + 24) == voiceType )
    {
      v63 = *(_QWORD *)(v60 + 16);
      if ( !v63 )
        sub_B5D69C(0LL, VoicePlayGroupEntity_TypeInfo);
      v64 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v63 + 360LL))(
                                                                     v63,
                                                                     *(_QWORD *)(*(_QWORD *)v63 + 368LL));
      if ( !v33 )
        sub_B5D69C(v64, v64);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        v64,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    }
  }
  v65 = *(_QWORD *)v50;
  if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
  {
    v66 = 0LL;
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      ++v66;
      v67 += 4;
      if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
        goto LABEL_42;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_42:
    v68 = sub_AF54C0(v50, System_IDisposable_TypeInfo, 0LL, v55);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v68)(
                                                                                         v50,
                                                                                         *(_QWORD *)(v68 + 8));
  if ( !v33 )
LABEL_50:
    sub_B5D69C(lookup, v35);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}