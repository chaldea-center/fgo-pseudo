void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D5D0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__, method);
    byte_4B1D5D0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    227,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *v14; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v22; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v23; // x20
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x20
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x0
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0

  if ( (byte_4B1D5D1 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string__get_lookup__,
      *(_QWORD *)&voiceType);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v13);
    byte_4B1D5D1 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32CA6AC *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_51;
  klass = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo )
    {
      --v19;
      p_offset += 2;
      if ( !v19 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1B560(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo,
                 4LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))p_method)(
                                                                                  v18,
                                                                                  *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_51;
  v22 = lookup->klass;
  v23 = lookup;
  v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_15;
    }
    v26 = (__int64)&v22->vtable[*v25].method;
  }
  else
  {
LABEL_15:
    v26 = sub_1C1B560(lookup, System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, _QWORD))v26)(
          v23,
          *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_1BCB254(0LL, v27);
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_22;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_22:
      v32 = sub_1C1B560(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__c **)v35 - 1) != System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_29;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_29:
      v36 = sub_1C1B560(v28, System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    if ( !v37 )
      sub_1BCB254(0LL, v38);
    if ( *(_DWORD *)(v37 + 24) == voiceType )
    {
      v39 = *(_QWORD *)(v37 + 16);
      if ( !v39 )
        sub_1BCB254(0LL, v38);
      v40 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 360LL))(
                              v39,
                              *(_QWORD *)(*(_QWORD *)v39 + 368LL));
      v43 = v40;
      if ( !v14 )
        sub_1BCB254(v40, v40);
      items = v14->fields._items;
      v45 = Method_System_Collections_Generic_List_string__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1BCB254(v40, v40);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v40,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v43;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v43, v41, v42);
      }
    }
  }
  v48 = *(_QWORD *)v28;
  v49 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_43;
    }
    v51 = v48 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_43:
    v51 = sub_1C1B560(v28, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(
                                                                                  v28,
                                                                                  *(_QWORD *)(v51 + 8));
  if ( !v14 )
LABEL_51:
    sub_1BCB254(lookup, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
}