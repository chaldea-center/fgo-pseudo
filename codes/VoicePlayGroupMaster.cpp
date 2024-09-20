void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C097 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
    byte_4A5C097 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    221,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


System_String_array *__fastcall VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v7; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v9; // x20
  __int64 v10; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v13; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v14; // x20
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
  __int64 methodPtr_low; // x9
  __int64 v31; // x0
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4A5C098 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&VoicePlayGroupEntity_TypeInfo);
    byte_4A5C098 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_54;
  klass = lookup->klass;
  v9 = lookup;
  v10 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 4LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v9,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_54;
  v13 = lookup->klass;
  v14 = lookup;
  v15 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_15;
    }
    v17 = (__int64)&v13->vtable[*v16].method;
  }
  else
  {
LABEL_15:
    v17 = sub_1BDA590(lookup, System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v17)(
          v14,
          *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_1B8880C(0LL, v18);
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
      v23 = sub_1BDA590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v27 = sub_1BDA590(v19, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      goto LABEL_50;
    methodPtr_low = LOBYTE(VoicePlayGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) < (unsigned int)methodPtr_low
      || *(VoicePlayGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * methodPtr_low - 8) != VoicePlayGroupEntity_TypeInfo )
    {
      sub_1B88ACC(v28);
LABEL_50:
      sub_1B8880C(v28, v29);
    }
    if ( *(_DWORD *)(v28 + 24) == voiceType )
    {
      v31 = *(_QWORD *)(v28 + 16);
      if ( !v31 )
        sub_1B8880C(0LL, VoicePlayGroupEntity_TypeInfo);
      v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 360LL))(
                              v31,
                              *(_QWORD *)(*(_QWORD *)v31 + 368LL));
      v35 = v32;
      if ( !v5 )
        sub_1B8880C(v32, v32);
      items = v5->fields._items;
      v37 = Method_System_Collections_Generic_List_string__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v32, v32);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v32,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v35, v33, v34);
      }
    }
  }
  v40 = *(_QWORD *)v19;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_45;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_45:
    v43 = sub_1BDA590(v19, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(
                                                                                         v19,
                                                                                         *(_QWORD *)(v43 + 8));
  if ( !v5 )
LABEL_54:
    sub_1B8880C(lookup, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}