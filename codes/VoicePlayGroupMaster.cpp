void VoicePlayGroupMaster___ctor(VoicePlayGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59719DA & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
    byte_59719DA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    229,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string___ctor__);
}


System_String_array *VoicePlayGroupMaster__getVoiceIDList(
        VoicePlayGroupMaster_o *this,
        int32_t voiceType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 lookup; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  __int64 v9; // x21
  __int64 v10; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__c **v11; // x10
  __int64 v12; // x0
  __int64 v13; // x8
  __int64 v14; // x21
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 i; // x21
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *v39; // x1
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v49; // [xsp+18h] [xbp-38h]

  if ( (byte_59719DB & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string__get_lookup__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_59719DB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  lookup = (__int64)DataMasterBase_object__object__object___get_lookup(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                      (const MethodInfo_3F134B8 *)Method_DataMasterBase_VoicePlayGroupMaster__VoicePlayGroupEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_57;
  v8 = *(_QWORD *)lookup;
  v9 = lookup;
  v10 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
  if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
  {
    v11 = (System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__c **)(*(_QWORD *)(v8 + 176) + 8LL);
    while ( *(v11 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo )
    {
      --v10;
      v11 += 2;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = v8 + 16LL * (*(_DWORD *)v11 + 4) + 312;
  }
  else
  {
LABEL_8:
    v12 = sub_224BC3C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__VoicePlayGroupEntity__TypeInfo, 4);
  }
  lookup = (*(__int64 (__fastcall **)(__int64, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
  if ( !lookup )
    goto LABEL_57;
  v13 = *(_QWORD *)lookup;
  v14 = lookup;
  v15 = *(unsigned __int16 *)(*(_QWORD *)lookup + 302LL);
  if ( *(_WORD *)(*(_QWORD *)lookup + 302LL) )
  {
    v16 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_15;
    }
    v17 = v13 + 16LL * *v16 + 312;
  }
  else
  {
LABEL_15:
    v17 = sub_224BC3C(lookup, System_Collections_Generic_IEnumerable_VoicePlayGroupEntity__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
  v49 = v18;
  if ( !v18 )
    sub_2213CDC(v18, v19);
  for ( i = v18; ; i = v49 )
  {
    v21 = *(_QWORD *)i;
    v22 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_23:
      v24 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    lookup = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(i, *(_QWORD *)(v24 + 8));
    if ( (lookup & 1) == 0 )
      break;
    if ( !v49 )
      sub_2213CDC(lookup, v7);
    v25 = *(_QWORD *)v49;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_31;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_31:
      v28 = sub_224BC3C(v49, System_Collections_Generic_IEnumerator_VoicePlayGroupEntity__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v49, *(_QWORD *)(v28 + 8));
    if ( !v29 )
      sub_2213CDC(0, v30);
    if ( *(_DWORD *)(v29 + 24) == voiceType )
    {
      v31 = *(_QWORD *)(v29 + 16);
      if ( !v31 )
        sub_2213CDC(0, v30);
      v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 360LL))(
                              v31,
                              *(_QWORD *)(*(_QWORD *)v31 + 368LL));
      v39 = v32;
      if ( !v5
        || (items = v5->fields._items,
            v41 = Method_System_Collections_Generic_List_string__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_2213CDC(v32, v32);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          v32,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v39;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v39, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  if ( v49 )
  {
    v44 = *(_QWORD *)v49;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_48;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_48:
      v47 = sub_224BC3C(v49, System_IDisposable_TypeInfo, 0);
    }
    lookup = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v49, *(_QWORD *)(v47 + 8));
  }
  if ( !v5 )
LABEL_57:
    sub_2213CDC(lookup, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}