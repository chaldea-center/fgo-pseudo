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
  BgmPlayArgs_o *v16; // x22
  const MethodInfo *v17; // x4
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  BgmPlayArgs_o *v28; // x22
  const MethodInfo *v29; // x4
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  __int64 v42; // x9
  int *p_offset; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x21
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_String_o *v55; // x23
  BgmPlayArgs_o *v56; // x22
  const MethodInfo *v57; // x4
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4D3004B & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Skip_string___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_1C93AD4(&MainBgmPlayArgs_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float__get_HasValue__);
    sub_1C93AD4(&SubBgmPlayArgs_TypeInfo);
    byte_4D3004B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    volume = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&volume,
      value,
      (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
    v28 = (BgmPlayArgs_o *)sub_1C93D20(MainBgmPlayArgs_TypeInfo);
    BgmPlayArgs___ctor(v28, toAnalyze, volume, fadeTime, startTime, v29);
    if ( v9 )
    {
      items = v9->fields._items;
      v37 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v28,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v28;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v28, v30, v31, v32, v33, v34, v35);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
      }
    }
LABEL_56:
    sub_1C93D2C(v12, v13);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0);
  if ( !v12 )
    goto LABEL_56;
  v14 = v12;
  if ( !LODWORD(v12[1].monitor) )
    sub_1C93D34(v12);
  klass = (System_String_o *)v12[2].klass;
  volume = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volume,
    value,
    (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
  v16 = (BgmPlayArgs_o *)sub_1C93D20(MainBgmPlayArgs_TypeInfo);
  BgmPlayArgs___ctor(v16, klass, volume, fadeTime, startTime, v17);
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
      (Il2CppObject *)v16,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v9->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v16, v18, v19, v20, v21, v22, v23);
  }
  v12 = System_Linq_Enumerable__Skip_object_(
          v14,
          1,
          (const MethodInfo_31E1F84 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v12 )
    goto LABEL_56;
  v40 = v12->klass;
  v41 = v12;
  v42 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &v40->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_26;
    }
    v44 = (__int64)&v40->vtable[*p_offset];
  }
  else
  {
LABEL_26:
    v44 = sub_1C69E5C(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v44)(
          v41,
          *(_QWORD *)(v44 + 8));
  if ( !v46 )
    sub_1C93D2C(0, v45);
  while ( 1 )
  {
    v47 = *(_QWORD *)v46;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_33;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_33:
      v50 = sub_1C69E5C(v46, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v51 = *(_QWORD *)v46;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v53 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_40;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_40:
      v54 = sub_1C69E5C(v46, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v55 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
    volume = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&volume,
      value,
      (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
    v56 = (BgmPlayArgs_o *)sub_1C93D20(SubBgmPlayArgs_TypeInfo);
    BgmPlayArgs___ctor(v56, v55, volume, fadeTime, startTime, v57);
    v66 = v9->fields._items;
    v67 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v66 )
      sub_1C93D2C(v58, v59);
    v68 = v9->fields._size;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        (Il2CppObject *)v56,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v69 = &v66->obj.klass + v68;
      v9->fields._size = v68 + 1;
      v69[4] = (Il2CppClass *)v56;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)v56, v60, v61, v62, v63, v64, v65);
    }
  }
  v70 = *(_QWORD *)v46;
  v71 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
  {
    v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_50;
    }
    v73 = v70 + 16LL * *v72 + 312;
  }
  else
  {
LABEL_50:
    v73 = sub_1C69E5C(v46, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v73)(v46, *(_QWORD *)(v73 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}