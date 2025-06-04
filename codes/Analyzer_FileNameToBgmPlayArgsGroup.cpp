System_Collections_Generic_List_BgmPlayArgs__o *__fastcall Analyzer_FileNameToBgmPlayArgsGroup__Analyze(
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x19
  float value; // s9
  BgmManager_c *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_String_o *klass; // x23
  BgmPlayArgs_o *v30; // x0
  Il2CppObject *v31; // x22
  const MethodInfo *v32; // x4
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  BgmPlayArgs_o *v39; // x0
  Il2CppObject *v40; // x22
  const MethodInfo *v41; // x4
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x21
  __int64 v50; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v53; // x1
  __int64 v54; // x21
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  System_String_o *v63; // x23
  BgmPlayArgs_o *v64; // x0
  Il2CppObject *v65; // x22
  const MethodInfo *v66; // x4
  __int64 v67; // x0
  __int64 v68; // x1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o v81; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v83; // 0:x0.8
  System_Nullable_float__o v84; // 0:x2.8
  System_Nullable_float__o v85; // 0:x2.8
  System_Nullable_float__o v86; // 0:x2.8

  if ( (byte_4B016AC & 1) == 0 )
  {
    sub_1BC3008(&BgmManager_TypeInfo, volumeNullable);
    sub_1BC3008(&Method_System_Linq_Enumerable_Skip_string___, v9);
    sub_1BC3008(&System_IDisposable_TypeInfo, v10);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_string__TypeInfo, v11);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_string__TypeInfo, v12);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v15);
    sub_1BC3008(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v16);
    sub_1BC3008(&MainBgmPlayArgs_TypeInfo, v17);
    sub_1BC3008(&Method_System_Nullable_float__GetValueOrDefault__, v18);
    sub_1BC3008(&Method_System_Nullable_float___ctor__, v19);
    sub_1BC3008(&Method_System_Nullable_float__get_HasValue__, v20);
    sub_1BC3008(&SubBgmPlayArgs_TypeInfo, v21);
    byte_4B016AC = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !toAnalyze )
    return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
  if ( volumeNullable.fields.hasValue )
  {
    value = volumeNullable.fields.value;
  }
  else
  {
    v24 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v24 = BgmManager_TypeInfo;
    }
    value = v24->static_fields->DEFAULT_VOLUME;
  }
  if ( (System_String__IndexOf(toAnalyze, 0x2Cu, 0LL) & 0x80000000) != 0 )
  {
    p_volume = (System_Nullable_float__o)&volume;
    volume = 0LL;
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_37C22BC *)Method_System_Nullable_float___ctor__);
    v39 = (BgmPlayArgs_o *)sub_1BC3254(MainBgmPlayArgs_TypeInfo);
    v85 = volume;
    v40 = (Il2CppObject *)v39;
    BgmPlayArgs___ctor(v39, toAnalyze, v85, fadeTime, startTime, v41);
    if ( v22 )
    {
      items = v22->fields._items;
      v45 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v22->fields._version;
      if ( items )
      {
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v40,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v40;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v40, v42, v43);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
      }
    }
LABEL_56:
    sub_1BC3264(v25, v26);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0LL);
  if ( !v25 )
    goto LABEL_56;
  v28 = v25;
  if ( !LODWORD(v25[1].monitor) )
    sub_1BC326C(v25, v26, v27);
  klass = (System_String_o *)v25[2].klass;
  v81 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v81, value, (const MethodInfo_37C22BC *)Method_System_Nullable_float___ctor__);
  v30 = (BgmPlayArgs_o *)sub_1BC3254(MainBgmPlayArgs_TypeInfo);
  v84 = volume;
  v31 = (Il2CppObject *)v30;
  BgmPlayArgs___ctor(v30, klass, v84, fadeTime, startTime, v32);
  if ( !v22 )
    goto LABEL_56;
  v35 = v22->fields._items;
  v36 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v22->fields._version;
  if ( !v35 )
    goto LABEL_56;
  v37 = v22->fields._size;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v31,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v35->obj.klass + v37;
    v22->fields._size = v37 + 1;
    v38[4] = (Il2CppClass *)v31;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v31, v33, v34);
  }
  v25 = System_Linq_Enumerable__Skip_object_(
          v28,
          1,
          (const MethodInfo_303CCC8 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v25 )
    goto LABEL_56;
  v48 = v25->klass;
  v49 = v25;
  v50 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v48->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v50;
      p_offset += 4;
      if ( !v50 )
        goto LABEL_26;
    }
    p_method = (__int64)&v48->vtable[*p_offset].method;
  }
  else
  {
LABEL_26:
    p_method = sub_1C13570(v25, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v54 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v49,
          *(_QWORD *)(p_method + 8));
  if ( !v54 )
    sub_1BC3264(0LL, v53);
  while ( 1 )
  {
    v55 = *(_QWORD *)v54;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_33;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_33:
      v58 = sub_1C13570(v54, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8)) & 1) == 0 )
      break;
    v59 = *(_QWORD *)v54;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v61 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_40;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_40:
      v62 = sub_1C13570(v54, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v63 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v54, *(_QWORD *)(v62 + 8));
    volume = 0LL;
    v83 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v83, value, (const MethodInfo_37C22BC *)Method_System_Nullable_float___ctor__);
    v64 = (BgmPlayArgs_o *)sub_1BC3254(SubBgmPlayArgs_TypeInfo);
    v86 = volume;
    v65 = (Il2CppObject *)v64;
    BgmPlayArgs___ctor(v64, v63, v86, fadeTime, startTime, v66);
    v71 = v22->fields._items;
    v72 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v22->fields._version;
    if ( !v71 )
      sub_1BC3264(v67, v68);
    v73 = v22->fields._size;
    if ( (unsigned int)v73 >= v71->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        v65,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = &v71->obj.klass + v73;
      v22->fields._size = v73 + 1;
      v74[4] = (Il2CppClass *)v65;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v65, v69, v70);
    }
  }
  v75 = *(_QWORD *)v54;
  v76 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
  {
    v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      --v76;
      v77 += 4;
      if ( !v76 )
        goto LABEL_50;
    }
    v78 = v75 + 16LL * *v77 + 312;
  }
  else
  {
LABEL_50:
    v78 = sub_1C13570(v54, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v78)(v54, *(_QWORD *)(v78 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
}