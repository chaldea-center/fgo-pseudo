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
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  System_String_o *klass; // x23
  System_Nullable_float__o v17; // x0
  BgmPlayArgs_o *v18; // x0
  System_Nullable_float__o v19; // x2
  Il2CppObject *v20; // x22
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  System_Nullable_float__o p_volume; // x0
  BgmPlayArgs_o *v29; // x0
  System_Nullable_float__o v30; // x2
  Il2CppObject *v31; // x22
  const MethodInfo *v32; // x4
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  __int64 v41; // x9
  int *p_offset; // x10
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x21
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  System_String_o *v54; // x23
  System_Nullable_float__o v55; // x0
  BgmPlayArgs_o *v56; // x0
  System_Nullable_float__o v57; // x2
  Il2CppObject *v58; // x22
  const MethodInfo *v59; // x4
  __int64 v60; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C26939 & 1) == 0 )
  {
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Skip_string___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_1C2D490(&MainBgmPlayArgs_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_float___ctor__);
    sub_1C2D490(&Method_System_Nullable_float__get_HasValue__);
    sub_1C2D490(&SubBgmPlayArgs_TypeInfo);
    byte_4C26939 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
    v29 = (BgmPlayArgs_o *)sub_1C2D6DC(MainBgmPlayArgs_TypeInfo);
    v30 = volume;
    v31 = (Il2CppObject *)v29;
    BgmPlayArgs___ctor(v29, toAnalyze, v30, fadeTime, startTime, v32);
    if ( v9 )
    {
      items = v9->fields._items;
      v36 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v31,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v31;
          sub_1C2D434((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v31, v33, v34);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
      }
    }
LABEL_56:
    sub_1C2D6EC(v12, v13);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0);
  if ( !v12 )
    goto LABEL_56;
  v15 = v12;
  if ( !LODWORD(v12[1].monitor) )
    sub_1C2D6F4(v12, v13, v14);
  klass = (System_String_o *)v12[2].klass;
  v17 = (System_Nullable_float__o)&volume;
  volume = 0;
  System_Nullable_float____ctor(v17, value, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
  v18 = (BgmPlayArgs_o *)sub_1C2D6DC(MainBgmPlayArgs_TypeInfo);
  v19 = volume;
  v20 = (Il2CppObject *)v18;
  BgmPlayArgs___ctor(v18, klass, v19, fadeTime, startTime, v21);
  if ( !v9 )
    goto LABEL_56;
  v24 = v9->fields._items;
  v25 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v9->fields._version;
  if ( !v24 )
    goto LABEL_56;
  v26 = v9->fields._size;
  if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v20,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v9->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
  }
  v12 = System_Linq_Enumerable__Skip_object_(
          v15,
          1,
          (const MethodInfo_310C2A0 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v12 )
    goto LABEL_56;
  v39 = v12->klass;
  v40 = v12;
  v41 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &v39->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v41;
      p_offset += 4;
      if ( !v41 )
        goto LABEL_26;
    }
    v43 = (__int64)&v39->vtable[*p_offset];
  }
  else
  {
LABEL_26:
    v43 = sub_1C7DCA8(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v43)(
          v40,
          *(_QWORD *)(v43 + 8));
  if ( !v45 )
    sub_1C2D6EC(0, v44);
  while ( 1 )
  {
    v46 = *(_QWORD *)v45;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_33;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_33:
      v49 = sub_1C7DCA8(v45, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
      break;
    v50 = *(_QWORD *)v45;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v52 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_40;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_40:
      v53 = sub_1C7DCA8(v45, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v54 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v45, *(_QWORD *)(v53 + 8));
    volume = 0;
    v55 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v55, value, (const MethodInfo_38B1A04 *)Method_System_Nullable_float___ctor__);
    v56 = (BgmPlayArgs_o *)sub_1C2D6DC(SubBgmPlayArgs_TypeInfo);
    v57 = volume;
    v58 = (Il2CppObject *)v56;
    BgmPlayArgs___ctor(v56, v54, v57, fadeTime, startTime, v59);
    v64 = v9->fields._items;
    v65 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v64 )
      sub_1C2D6EC(v60, v61);
    v66 = v9->fields._size;
    if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v58,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v67 = &v64->obj.klass + v66;
      v9->fields._size = v66 + 1;
      v67[4] = (Il2CppClass *)v58;
      sub_1C2D434((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v58, v62, v63);
    }
  }
  v68 = *(_QWORD *)v45;
  v69 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
  {
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_50;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_50:
    v71 = sub_1C7DCA8(v45, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v45, *(_QWORD *)(v71 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}