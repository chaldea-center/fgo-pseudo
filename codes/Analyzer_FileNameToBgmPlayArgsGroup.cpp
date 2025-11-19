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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  System_String_o *klass; // x23
  System_Nullable_float__o v16; // x0
  BgmPlayArgs_o *v17; // x0
  System_Nullable_float__o v18; // x2
  Il2CppObject *v19; // x22
  const MethodInfo *v20; // x4
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  System_Nullable_float__o p_volume; // x0
  BgmPlayArgs_o *v28; // x0
  System_Nullable_float__o v29; // x2
  Il2CppObject *v30; // x22
  const MethodInfo *v31; // x4
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  __int64 v40; // x9
  int *p_offset; // x10
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x21
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  System_String_o *v53; // x23
  System_Nullable_float__o v54; // x0
  BgmPlayArgs_o *v55; // x0
  System_Nullable_float__o v56; // x2
  Il2CppObject *v57; // x22
  const MethodInfo *v58; // x4
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4CB5910 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Skip_string___);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_1C6BA08(&MainBgmPlayArgs_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_float___ctor__);
    sub_1C6BA08(&Method_System_Nullable_float__get_HasValue__);
    sub_1C6BA08(&SubBgmPlayArgs_TypeInfo);
    byte_4CB5910 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_392B698 *)Method_System_Nullable_float___ctor__);
    v28 = (BgmPlayArgs_o *)sub_1C6BC54(MainBgmPlayArgs_TypeInfo);
    v29 = volume;
    v30 = (Il2CppObject *)v28;
    BgmPlayArgs___ctor(v28, toAnalyze, v29, fadeTime, startTime, v31);
    if ( v9 )
    {
      items = v9->fields._items;
      v35 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v30,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v30;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v30, v32, v33);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
      }
    }
LABEL_56:
    sub_1C6BC60(v12, v13);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0);
  if ( !v12 )
    goto LABEL_56;
  v14 = v12;
  if ( !LODWORD(v12[1].monitor) )
    sub_1C6BC68(v12);
  klass = (System_String_o *)v12[2].klass;
  v16 = (System_Nullable_float__o)&volume;
  volume = 0;
  System_Nullable_float____ctor(v16, value, (const MethodInfo_392B698 *)Method_System_Nullable_float___ctor__);
  v17 = (BgmPlayArgs_o *)sub_1C6BC54(MainBgmPlayArgs_TypeInfo);
  v18 = volume;
  v19 = (Il2CppObject *)v17;
  BgmPlayArgs___ctor(v17, klass, v18, fadeTime, startTime, v20);
  if ( !v9 )
    goto LABEL_56;
  v23 = v9->fields._items;
  v24 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v9->fields._version;
  if ( !v23 )
    goto LABEL_56;
  v25 = v9->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v19,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v9->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)v19;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
  }
  v12 = System_Linq_Enumerable__Skip_object_(
          v14,
          1,
          (const MethodInfo_31794B4 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v12 )
    goto LABEL_56;
  v38 = v12->klass;
  v39 = v12;
  v40 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &v38->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v40;
      p_offset += 4;
      if ( !v40 )
        goto LABEL_26;
    }
    v42 = (__int64)&v38->vtable[*p_offset];
  }
  else
  {
LABEL_26:
    v42 = sub_1C41D90(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v42)(
          v39,
          *(_QWORD *)(v42 + 8));
  if ( !v44 )
    sub_1C6BC60(0, v43);
  while ( 1 )
  {
    v45 = *(_QWORD *)v44;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_33;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_33:
      v48 = sub_1C41D90(v44, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
      break;
    v49 = *(_QWORD *)v44;
    v50 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v51 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_40;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_40:
      v52 = sub_1C41D90(v44, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v53 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
    volume = 0;
    v54 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v54, value, (const MethodInfo_392B698 *)Method_System_Nullable_float___ctor__);
    v55 = (BgmPlayArgs_o *)sub_1C6BC54(SubBgmPlayArgs_TypeInfo);
    v56 = volume;
    v57 = (Il2CppObject *)v55;
    BgmPlayArgs___ctor(v55, v53, v56, fadeTime, startTime, v58);
    v63 = v9->fields._items;
    v64 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v63 )
      sub_1C6BC60(v59, v60);
    v65 = v9->fields._size;
    if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v57,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
    }
    else
    {
      v66 = &v63->obj.klass + v65;
      v9->fields._size = v65 + 1;
      v66[4] = (Il2CppClass *)v57;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v57, v61, v62);
    }
  }
  v67 = *(_QWORD *)v44;
  v68 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
  {
    v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      --v68;
      v69 += 4;
      if ( !v68 )
        goto LABEL_50;
    }
    v70 = v67 + 16LL * *v69 + 312;
  }
  else
  {
LABEL_50:
    v70 = sub_1C41D90(v44, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v70)(v44, *(_QWORD *)(v70 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}