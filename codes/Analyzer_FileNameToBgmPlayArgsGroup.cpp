System_Collections_Generic_List_BgmPlayArgs__o *Analyzer_FileNameToBgmPlayArgsGroup__Analyze(
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  float value; // s9
  BgmManager_c *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  System_String_o *klass; // x23
  System_Nullable_float__o v15; // x0
  BgmPlayArgs_o *v16; // x0
  System_Nullable_float__o v17; // x2
  Il2CppObject *v18; // x22
  const MethodInfo *v19; // x4
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  System_Nullable_float__o p_volume; // x0
  BgmPlayArgs_o *v27; // x0
  System_Nullable_float__o v28; // x2
  Il2CppObject *v29; // x22
  const MethodInfo *v30; // x4
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  __int64 v39; // x9
  int *p_offset; // x10
  __int64 v41; // x0
  __int64 v42; // x21
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  System_String_o *v51; // x23
  System_Nullable_float__o v52; // x0
  BgmPlayArgs_o *v53; // x0
  System_Nullable_float__o v54; // x2
  Il2CppObject *v55; // x22
  const MethodInfo *v56; // x4
  __int64 v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C42600 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Skip_string___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_1C37058(&MainBgmPlayArgs_TypeInfo);
    sub_1C37058(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&Method_System_Nullable_float__get_HasValue__);
    sub_1C37058(&SubBgmPlayArgs_TypeInfo);
    byte_4C42600 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !toAnalyze )
    return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
  if ( volumeNullable.fields.hasValue )
  {
    value = volumeNullable.fields.value;
  }
  else
  {
    v11 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v11 = BgmManager_TypeInfo;
    }
    value = v11->static_fields->DEFAULT_VOLUME;
  }
  if ( System_String__IndexOf(toAnalyze, 0x2Cu, 0) < 0 )
  {
    p_volume = (System_Nullable_float__o)&volume;
    volume = 0;
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
    v27 = (BgmPlayArgs_o *)sub_1C372A4(MainBgmPlayArgs_TypeInfo);
    v28 = volume;
    v29 = (Il2CppObject *)v27;
    BgmPlayArgs___ctor(v27, toAnalyze, v28, fadeTime, startTime, v30);
    if ( v9 )
    {
      items = v9->fields._items;
      v34 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v29,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v29;
          sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v29, v31, v32);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
      }
    }
LABEL_56:
    sub_1C372B4(v12);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0);
  if ( !v12 )
    goto LABEL_56;
  v13 = v12;
  if ( !LODWORD(v12[1].monitor) )
    sub_1C372BC(v12);
  klass = (System_String_o *)v12[2].klass;
  v15 = (System_Nullable_float__o)&volume;
  volume = 0;
  System_Nullable_float____ctor(v15, value, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
  v16 = (BgmPlayArgs_o *)sub_1C372A4(MainBgmPlayArgs_TypeInfo);
  v17 = volume;
  v18 = (Il2CppObject *)v16;
  BgmPlayArgs___ctor(v16, klass, v17, fadeTime, startTime, v19);
  if ( !v9 )
    goto LABEL_56;
  v22 = v9->fields._items;
  v23 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v9->fields._version;
  if ( !v22 )
    goto LABEL_56;
  v24 = v9->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v18,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v9->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)v18;
    sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
  }
  v12 = System_Linq_Enumerable__Skip_object_(
          v13,
          1,
          (const MethodInfo_31255A8 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v12 )
    goto LABEL_56;
  v37 = v12->klass;
  v38 = v12;
  v39 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &v37->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v39;
      p_offset += 4;
      if ( !v39 )
        goto LABEL_26;
    }
    v41 = (__int64)&v37->vtable[*p_offset];
  }
  else
  {
LABEL_26:
    v41 = sub_1C87870(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v41)(
          v38,
          *(_QWORD *)(v41 + 8));
  if ( !v42 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v43 = *(_QWORD *)v42;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_33;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_33:
      v46 = sub_1C87870(v42, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v42;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v49 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_40;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_40:
      v50 = sub_1C87870(v42, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v51 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
    volume = 0;
    v52 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v52, value, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
    v53 = (BgmPlayArgs_o *)sub_1C372A4(SubBgmPlayArgs_TypeInfo);
    v54 = volume;
    v55 = (Il2CppObject *)v53;
    BgmPlayArgs___ctor(v53, v51, v54, fadeTime, startTime, v56);
    v60 = v9->fields._items;
    v61 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v60 )
      sub_1C372B4(v57);
    v62 = v9->fields._size;
    if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v55,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &v60->obj.klass + v62;
      v9->fields._size = v62 + 1;
      v63[4] = (Il2CppClass *)v55;
      sub_1C36FFC((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v55, v58, v59);
    }
  }
  v64 = *(_QWORD *)v42;
  v65 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_50;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_50:
    v67 = sub_1C87870(v42, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v67)(v42, *(_QWORD *)(v67 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}