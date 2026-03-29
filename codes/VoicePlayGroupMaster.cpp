void VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31AE4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
    byte_4D31AE4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    227,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


System_String_array *VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v7; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v9; // x20
  __int64 v10; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__c **p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v13; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v14; // x20
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x0
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4D31AE5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string__get_lookup__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D31AE5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3465D74 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_51;
  klass = lookup->klass;
  v9 = lookup;
  v10 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4];
  }
  else
  {
LABEL_8:
    v12 = sub_1C69E5C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo, 4);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v12)(
                                                                                  v9,
                                                                                  *(_QWORD *)(v12 + 8));
  if ( !lookup )
    goto LABEL_51;
  v13 = lookup->klass;
  v14 = lookup;
  v15 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_15;
    }
    v17 = (__int64)&v13->vtable[*v16];
  }
  else
  {
LABEL_15:
    v17 = sub_1C69E5C(lookup, System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v17)(
          v14,
          *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_1C93D2C(0, v18);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_1C69E5C(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_29;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_29:
      v27 = sub_1C69E5C(v19, System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_1C93D2C(0, v29);
    if ( *(_DWORD *)(v28 + 24) == voiceType )
    {
      v30 = *(_QWORD *)(v28 + 16);
      if ( !v30 )
        sub_1C93D2C(0, v29);
      v31 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 360LL))(
                              v30,
                              *(_QWORD *)(*(_QWORD *)v30 + 368LL));
      v38 = v31;
      if ( !v5 )
        sub_1C93D2C(v31, v31);
      items = v5->fields._items;
      v40 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C93D2C(v31, v31);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v31,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v38;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 4), (int32_t)v38, v32, v33, v34, v35, v36, v37);
      }
    }
  }
  v43 = *(_QWORD *)v19;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_43;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_43:
    v46 = sub_1C69E5C(v19, System_IDisposable_TypeInfo, 0);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(
                                                                                  v19,
                                                                                  *(_QWORD *)(v46 + 8));
  if ( !v5 )
LABEL_51:
    sub_1C93D2C(lookup, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
}