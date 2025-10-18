void VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C440D0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
    byte_4C440D0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    227,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


System_String_array *VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v8; // x20
  __int64 v9; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__c **p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v12; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v13; // x20
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x20
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x1
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_4C440D1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string__get_lookup__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C440D1 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33A394C *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_51;
  klass = lookup->klass;
  v8 = lookup;
  v9 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
  }
  else
  {
LABEL_8:
    v11 = sub_1C87870(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo, 4);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v11)(
                                                                                  v8,
                                                                                  *(_QWORD *)(v11 + 8));
  if ( !lookup )
    goto LABEL_51;
  v12 = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo )
    {
      --v14;
      v15 += 4;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)&v12->vtable[*v15];
  }
  else
  {
LABEL_15:
    v16 = sub_1C87870(lookup, System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v16)(
          v13,
          *(_QWORD *)(v16 + 8));
  if ( !v17 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_22;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_22:
      v21 = sub_1C87870(v17, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_29;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_29:
      v25 = sub_1C87870(v17, System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    if ( !v26 )
      sub_1C372B4(0);
    if ( *(_DWORD *)(v26 + 24) == voiceType )
    {
      v27 = *(_QWORD *)(v26 + 16);
      if ( !v27 )
        sub_1C372B4(0);
      v28 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 360LL))(
                              v27,
                              *(_QWORD *)(*(_QWORD *)v27 + 368LL));
      v31 = v28;
      if ( !v5 )
        sub_1C372B4(v28);
      items = v5->fields._items;
      v33 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C372B4(v28);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v28,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v31;
        sub_1C36FFC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v31, v29, v30);
      }
    }
  }
  v36 = *(_QWORD *)v17;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_43;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_43:
    v39 = sub_1C87870(v17, System_IDisposable_TypeInfo, 0);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(
                                                                                  v17,
                                                                                  *(_QWORD *)(v39 + 8));
  if ( !v5 )
LABEL_51:
    sub_1C372B4(lookup);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
}