void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFA38 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__, method);
    byte_49FFA38 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    221,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v16; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v22; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v23; // x20
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
  __int64 methodPtr_low; // x9
  __int64 v40; // x0
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( (byte_49FFA39 & 1) == 0 )
  {
    sub_1B64A00(&System_IDisposable_TypeInfo, *(_QWORD *)&voiceType);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, v5);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B64A00(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_1B64A00(&VoicePlayGroupEntity_TypeInfo, v13);
    byte_49FFA39 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_54;
  klass = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    p_method = sub_1BB69E0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 4LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v18,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_54;
  v22 = lookup->klass;
  v23 = lookup;
  v24 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo )
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
    v26 = sub_1BB69E0(lookup, System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v26)(
          v23,
          *(_QWORD *)(v26 + 8));
  if ( !v28 )
    sub_1B64C5C(0LL, v27);
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
      v32 = sub_1BB69E0(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v36 = sub_1BB69E0(v28, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    if ( !v37 )
      goto LABEL_50;
    methodPtr_low = LOBYTE(VoicePlayGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 304LL) < (unsigned int)methodPtr_low
      || *(VoicePlayGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * methodPtr_low - 8) != VoicePlayGroupEntity_TypeInfo )
    {
      sub_1B64F1C(v37);
LABEL_50:
      sub_1B64C5C(v37, v38);
    }
    if ( *(_DWORD *)(v37 + 24) == voiceType )
    {
      v40 = *(_QWORD *)(v37 + 16);
      if ( !v40 )
        sub_1B64C5C(0LL, VoicePlayGroupEntity_TypeInfo);
      v41 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 360LL))(
                              v40,
                              *(_QWORD *)(*(_QWORD *)v40 + 368LL));
      v44 = v41;
      if ( !v14 )
        sub_1B64C5C(v41, v41);
      items = v14->fields._items;
      v46 = Method_System_Collections_Generic_List_string__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B64C5C(v41, v41);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v41,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v44;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v44, v42, v43);
      }
    }
  }
  v49 = *(_QWORD *)v28;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_45;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_45:
    v52 = sub_1BB69E0(v28, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(
                                                                                         v28,
                                                                                         *(_QWORD *)(v52 + 8));
  if ( !v14 )
LABEL_54:
    sub_1B64C5C(lookup, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_string__ToArray__);
}