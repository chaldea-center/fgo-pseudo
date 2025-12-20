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
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  System_Nullable_float__o p_volume; // x0
  BgmPlayArgs_o *v32; // x0
  System_Nullable_float__o v33; // x2
  Il2CppObject *v34; // x22
  const MethodInfo *v35; // x4
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x21
  __int64 v48; // x9
  int *p_offset; // x10
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x21
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  System_String_o *v61; // x23
  System_Nullable_float__o v62; // x0
  BgmPlayArgs_o *v63; // x0
  System_Nullable_float__o v64; // x2
  Il2CppObject *v65; // x22
  const MethodInfo *v66; // x4
  __int64 v67; // x0
  __int64 v68; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4D2BE99 & 1) == 0 )
  {
    sub_1C94098(&BgmManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Skip_string___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_1C94098(&MainBgmPlayArgs_TypeInfo);
    sub_1C94098(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    sub_1C94098(&Method_System_Nullable_float__get_HasValue__);
    sub_1C94098(&SubBgmPlayArgs_TypeInfo);
    byte_4D2BE99 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
    v32 = (BgmPlayArgs_o *)sub_1C942E4(MainBgmPlayArgs_TypeInfo);
    v33 = volume;
    v34 = (Il2CppObject *)v32;
    BgmPlayArgs___ctor(v32, toAnalyze, v33, fadeTime, startTime, v35);
    if ( v9 )
    {
      items = v9->fields._items;
      v43 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v34,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v34;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v34, v36, v37, v38, v39, v40, v41);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
      }
    }
LABEL_56:
    sub_1C942F0(v12, v13);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0);
  if ( !v12 )
    goto LABEL_56;
  v14 = v12;
  if ( !LODWORD(v12[1].monitor) )
    sub_1C942F8(v12);
  klass = (System_String_o *)v12[2].klass;
  v16 = (System_Nullable_float__o)&volume;
  volume = 0;
  System_Nullable_float____ctor(v16, value, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
  v17 = (BgmPlayArgs_o *)sub_1C942E4(MainBgmPlayArgs_TypeInfo);
  v18 = volume;
  v19 = (Il2CppObject *)v17;
  BgmPlayArgs___ctor(v17, klass, v18, fadeTime, startTime, v20);
  if ( !v9 )
    goto LABEL_56;
  v27 = v9->fields._items;
  v28 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v9->fields._version;
  if ( !v27 )
    goto LABEL_56;
  v29 = v9->fields._size;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v19,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v27->obj.klass + v29;
    v9->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)v19;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v19, v21, v22, v23, v24, v25, v26);
  }
  v12 = System_Linq_Enumerable__Skip_object_(
          v14,
          1,
          (const MethodInfo_31DAB18 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v12 )
    goto LABEL_56;
  v46 = v12->klass;
  v47 = v12;
  v48 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &v46->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v48;
      p_offset += 4;
      if ( !v48 )
        goto LABEL_26;
    }
    v50 = (__int64)&v46->vtable[*p_offset];
  }
  else
  {
LABEL_26:
    v50 = sub_1C6A420(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v50)(
          v47,
          *(_QWORD *)(v50 + 8));
  if ( !v52 )
    sub_1C942F0(0, v51);
  while ( 1 )
  {
    v53 = *(_QWORD *)v52;
    v54 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
    {
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_33;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_33:
      v56 = sub_1C6A420(v52, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
      break;
    v57 = *(_QWORD *)v52;
    v58 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
    {
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v59 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v58;
        v59 += 4;
        if ( !v58 )
          goto LABEL_40;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_40:
      v60 = sub_1C6A420(v52, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v61 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v52, *(_QWORD *)(v60 + 8));
    volume = 0;
    v62 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v62, value, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
    v63 = (BgmPlayArgs_o *)sub_1C942E4(SubBgmPlayArgs_TypeInfo);
    v64 = volume;
    v65 = (Il2CppObject *)v63;
    BgmPlayArgs___ctor(v63, v61, v64, fadeTime, startTime, v66);
    v75 = v9->fields._items;
    v76 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v75 )
      sub_1C942F0(v67, v68);
    v77 = v9->fields._size;
    if ( (unsigned int)v77 >= LODWORD(v75->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v65,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = &v75->obj.klass + v77;
      v9->fields._size = v77 + 1;
      v78[4] = (Il2CppClass *)v65;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v78 + 4), (int32_t)v65, v69, v70, v71, v72, v73, v74);
    }
  }
  v79 = *(_QWORD *)v52;
  v80 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
  {
    v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
    {
      --v80;
      v81 += 4;
      if ( !v80 )
        goto LABEL_50;
    }
    v82 = v79 + 16LL * *v81 + 312;
  }
  else
  {
LABEL_50:
    v82 = sub_1C6A420(v52, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v82)(v52, *(_QWORD *)(v82 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}