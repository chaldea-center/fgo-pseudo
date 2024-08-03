void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD31E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__, method);
    byte_49FD31E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    221,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v17; // x20
  __int64 v18; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v21; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v22; // x20
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x20
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 methodPtr_low; // x9
  __int64 v37; // x0
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x1
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0

  if ( (byte_49FD31F & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, *(_QWORD *)&voiceType);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_1B640C8(&VoicePlayGroupEntity_TypeInfo, v13);
    byte_49FD31F = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&voiceType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_54;
  klass = lookup->klass;
  v17 = lookup;
  v18 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v18;
      p_offset += 2;
      if ( !v18 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 4LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v17,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_54;
  v21 = lookup->klass;
  v22 = lookup;
  v23 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v24 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_15;
    }
    v25 = (__int64)&v21->vtable[*v24].method;
  }
  else
  {
LABEL_15:
    v25 = sub_1BB60A8(lookup, System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v25)(
          v22,
          *(_QWORD *)(v25 + 8));
  if ( !v26 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_22;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_22:
      v30 = sub_1BB60A8(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_29;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_29:
      v34 = sub_1BB60A8(v26, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    if ( !v35 )
      goto LABEL_50;
    methodPtr_low = LOBYTE(VoicePlayGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v35 + 304LL) < (unsigned int)methodPtr_low
      || *(VoicePlayGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v35 + 200LL) + 8 * methodPtr_low - 8) != VoicePlayGroupEntity_TypeInfo )
    {
      sub_1B645E4(v35);
LABEL_50:
      sub_1B64324(v35);
    }
    if ( *(_DWORD *)(v35 + 24) == voiceType )
    {
      v37 = *(_QWORD *)(v35 + 16);
      if ( !v37 )
        sub_1B64324(0LL);
      v38 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 360LL))(
                              v37,
                              *(_QWORD *)(*(_QWORD *)v37 + 368LL));
      v41 = v38;
      if ( !v14 )
        sub_1B64324(v38);
      items = v14->fields._items;
      v43 = Method_System_Collections_Generic_List_string__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B64324(v38);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          v38,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v41;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v41, v39, v40);
      }
    }
  }
  v46 = *(_QWORD *)v26;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_45;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_45:
    v49 = sub_1BB60A8(v26, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(
                                                                                         v26,
                                                                                         *(_QWORD *)(v49 + 8));
  if ( !v14 )
LABEL_54:
    sub_1B64324(lookup);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}