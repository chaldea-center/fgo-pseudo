void __fastcall VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17150 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__, method, v2);
    byte_4B17150 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    221,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v26; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v28; // x20
  __int64 v29; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v32; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v33; // x20
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x20
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 methodPtr_low; // x9
  __int64 v50; // x0
  Il2CppObject *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0

  if ( (byte_4B17151 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, *(_QWORD *)&voiceType, method);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v20, v21);
    sub_1BCA7E0(&VoicePlayGroupEntity_TypeInfo, v22, v23);
    byte_4B17151 = 1;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       *(_QWORD *)&voiceType,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_54;
  klass = lookup->klass;
  v28 = lookup;
  v29 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v29;
      p_offset += 2;
      if ( !v29 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 4LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))p_method)(
                                                                                         v28,
                                                                                         *(_QWORD *)(p_method + 8));
  if ( !lookup )
    goto LABEL_54;
  v32 = lookup->klass;
  v33 = lookup;
  v34 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v35 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_15;
    }
    v36 = (__int64)&v32->vtable[*v35].method;
  }
  else
  {
LABEL_15:
    v36 = sub_1C1C7C0(lookup, System_Collections_Generic_IEnumerable_DataEntityBase__TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, _QWORD))v36)(
          v33,
          *(_QWORD *)(v36 + 8));
  if ( !v38 )
    sub_1BCAA3C(0LL, v37);
  while ( 1 )
  {
    v39 = *(_QWORD *)v38;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_22;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_22:
      v42 = sub_1C1C7C0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v38;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_29;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_29:
      v46 = sub_1C1C7C0(v38, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
    if ( !v47 )
      goto LABEL_50;
    methodPtr_low = LOBYTE(VoicePlayGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v47 + 304LL) < (unsigned int)methodPtr_low
      || *(VoicePlayGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * methodPtr_low - 8) != VoicePlayGroupEntity_TypeInfo )
    {
      sub_1BCACFC(v47);
LABEL_50:
      sub_1BCAA3C(v47, v48);
    }
    if ( *(_DWORD *)(v47 + 24) == voiceType )
    {
      v50 = *(_QWORD *)(v47 + 16);
      if ( !v50 )
        sub_1BCAA3C(0LL, VoicePlayGroupEntity_TypeInfo);
      v51 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v50 + 360LL))(
                              v50,
                              *(_QWORD *)(*(_QWORD *)v50 + 368LL));
      v58 = (int64_t)v51;
      if ( !v24 )
        sub_1BCAA3C(v51, v51);
      items = v24->fields._items;
      v60 = Method_System_Collections_Generic_List_string__Add__;
      ++v24->fields._version;
      if ( !items )
        sub_1BCAA3C(v51, v51);
      size = v24->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          v51,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v62[4] = (Il2CppClass *)v58;
        sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), v58, v52, v53, v54, v55, v56, v57);
      }
    }
  }
  v63 = *(_QWORD *)v38;
  v64 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
  {
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_45;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_45:
    v66 = sub_1C1C7C0(v38, System_IDisposable_TypeInfo, 0LL);
  }
  lookup = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v66)(
                                                                                         v38,
                                                                                         *(_QWORD *)(v66 + 8));
  if ( !v24 )
LABEL_54:
    sub_1BCAA3C(lookup, v26);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v24,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}