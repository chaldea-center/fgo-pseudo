System_Collections_Generic_List_BgmPlayArgs__o *Analyzer_FileNameToBgmPlayArgsGroup__Analyze(
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  float value; // s9
  BgmManager_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  System_String_o *klass; // x23
  BgmPlayArgs_o *v17; // x22
  const MethodInfo *v18; // x4
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  BgmPlayArgs_o *v29; // x22
  const MethodInfo *v30; // x4
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  __int64 v43; // x9
  int *p_offset; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x21
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x21
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  System_String_o *v60; // x22
  BgmPlayArgs_o *v61; // x21
  const MethodInfo *v62; // x4
  __int64 v63; // x0
  __int64 v64; // x1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  __int64 v75; // x21
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  System_Nullable_float__o v81; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o volume; // [xsp+8h] [xbp-78h] BYREF
  __int64 *v83; // [xsp+10h] [xbp-70h]
  __int64 v84; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596FE19 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Skip_string___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_2213A60(&MainBgmPlayArgs_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_System_Nullable_float__get_HasValue__);
    sub_2213A60(&SubBgmPlayArgs_TypeInfo);
    byte_596FE19 = 1;
  }
  v84 = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !toAnalyze )
    return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
  if ( volumeNullable.fields.hasValue )
  {
    value = volumeNullable.fields.value;
  }
  else
  {
    v12 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v10);
      v12 = BgmManager_TypeInfo;
    }
    value = v12->static_fields->DEFAULT_VOLUME;
  }
  if ( System_String__IndexOf(toAnalyze, 0x2Cu, 0) < 0 )
  {
    volume = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&volume,
      value,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v29 = (BgmPlayArgs_o *)sub_2213CCC(MainBgmPlayArgs_TypeInfo);
    BgmPlayArgs___ctor(v29, toAnalyze, volume, fadeTime, startTime, v30);
    if ( v9 )
    {
      items = v9->fields._items;
      v38 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v29,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v29;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), (int32_t)v29, v31, v32, v33, v34, v35, v36);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
      }
    }
LABEL_62:
    sub_2213CDC(v13, v14);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0);
  if ( !v13 )
    goto LABEL_62;
  v15 = v13;
  if ( !LODWORD(v13[1].monitor) )
    sub_2213CE4(v13);
  klass = (System_String_o *)v13[2].klass;
  volume = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volume,
    value,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  v17 = (BgmPlayArgs_o *)sub_2213CCC(MainBgmPlayArgs_TypeInfo);
  BgmPlayArgs___ctor(v17, klass, volume, fadeTime, startTime, v18);
  if ( !v9 )
    goto LABEL_62;
  v25 = v9->fields._items;
  v26 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v9->fields._version;
  if ( !v25 )
    goto LABEL_62;
  v27 = v9->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v17,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v9->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v17;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v17, v19, v20, v21, v22, v23, v24);
  }
  v13 = System_Linq_Enumerable__Skip_object_(
          v15,
          1,
          (const MethodInfo_3899B4C *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v13 )
    goto LABEL_62;
  v41 = v13->klass;
  v42 = v13;
  v43 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    p_offset = &v41->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_26;
    }
    v45 = (__int64)&v41->vtable[*p_offset];
  }
  else
  {
LABEL_26:
    v45 = sub_224BC3C(v13, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v45)(
          v42,
          *(_QWORD *)(v45 + 8));
  v84 = v46;
  volume = 0;
  v83 = &v84;
  if ( !v46 )
LABEL_49:
    sub_2213CDC(v46, v47);
  v48 = v46;
  while ( 1 )
  {
    v49 = *(_QWORD *)v48;
    v50 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_34;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_34:
      v52 = sub_224BC3C(v48, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8));
    if ( (v53 & 1) == 0 )
      break;
    v55 = v84;
    if ( !v84 )
      sub_2213CDC(v53, v54);
    v56 = *(_QWORD *)v84;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v58 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_42;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_42:
      v59 = sub_224BC3C(v84, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v60 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8));
    v81 = 0;
    System_Nullable_float____ctor(
      (System_Nullable_float__o)&v81,
      value,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v61 = (BgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgs_TypeInfo);
    BgmPlayArgs___ctor(v61, v60, v81, fadeTime, startTime, v62);
    v71 = v9->fields._items;
    v72 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v71 )
      sub_2213CDC(v63, v64);
    v73 = v9->fields._size;
    if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        (Il2CppObject *)v61,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
    }
    else
    {
      v74 = &v71->obj.klass + v73;
      v9->fields._size = v73 + 1;
      v74[4] = (Il2CppClass *)v61;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v74 + 4), (int32_t)v61, v65, v66, v67, v68, v69, v70);
    }
    v48 = v84;
    if ( !v84 )
      goto LABEL_49;
  }
  v75 = v84;
  if ( v84 )
  {
    v76 = *(_QWORD *)v84;
    v77 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_55;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_55:
      v79 = sub_224BC3C(v84, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v79)(v75, *(_QWORD *)(v79 + 8));
  }
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}