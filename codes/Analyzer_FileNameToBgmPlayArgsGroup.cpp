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
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_String_o *klass; // x23
  BgmPlayArgs_o *v29; // x0
  Il2CppObject *v30; // x22
  const MethodInfo *v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  BgmPlayArgs_o *v38; // x0
  Il2CppObject *v39; // x22
  const MethodInfo *v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  __int64 v49; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v52; // x1
  __int64 v53; // x21
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  System_String_o *v62; // x23
  BgmPlayArgs_o *v63; // x0
  Il2CppObject *v64; // x22
  const MethodInfo *v65; // x4
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o v80; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v82; // 0:x0.8
  System_Nullable_float__o v83; // 0:x2.8
  System_Nullable_float__o v84; // 0:x2.8
  System_Nullable_float__o v85; // 0:x2.8

  if ( (byte_4AB538C & 1) == 0 )
  {
    sub_1BAB41C(&BgmManager_TypeInfo, volumeNullable);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Skip_string___, v9);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v10);
    sub_1BAB41C(&System_Collections_Generic_IEnumerable_string__TypeInfo, v11);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_string__TypeInfo, v12);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v14);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v15);
    sub_1BAB41C(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v16);
    sub_1BAB41C(&MainBgmPlayArgs_TypeInfo, v17);
    sub_1BAB41C(&Method_System_Nullable_float__GetValueOrDefault__, v18);
    sub_1BAB41C(&Method_System_Nullable_float___ctor__, v19);
    sub_1BAB41C(&Method_System_Nullable_float__get_HasValue__, v20);
    sub_1BAB41C(&SubBgmPlayArgs_TypeInfo, v21);
    byte_4AB538C = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
    v38 = (BgmPlayArgs_o *)sub_1BAB668(MainBgmPlayArgs_TypeInfo);
    v84 = volume;
    v39 = (Il2CppObject *)v38;
    BgmPlayArgs___ctor(v38, toAnalyze, v84, fadeTime, startTime, v40);
    if ( v22 )
    {
      items = v22->fields._items;
      v44 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v22->fields._version;
      if ( items )
      {
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v39,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v39;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v39, v41, v42);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
      }
    }
LABEL_56:
    sub_1BAB678(v25, v26);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0LL);
  if ( !v25 )
    goto LABEL_56;
  v27 = v25;
  if ( !LODWORD(v25[1].monitor) )
    sub_1BAB680(v25, v26);
  klass = (System_String_o *)v25[2].klass;
  v80 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v80, value, (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
  v29 = (BgmPlayArgs_o *)sub_1BAB668(MainBgmPlayArgs_TypeInfo);
  v83 = volume;
  v30 = (Il2CppObject *)v29;
  BgmPlayArgs___ctor(v29, klass, v83, fadeTime, startTime, v31);
  if ( !v22 )
    goto LABEL_56;
  v34 = v22->fields._items;
  v35 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v22->fields._version;
  if ( !v34 )
    goto LABEL_56;
  v36 = v22->fields._size;
  if ( (unsigned int)v36 >= v34->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v30,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj.klass + v36;
    v22->fields._size = v36 + 1;
    v37[4] = (Il2CppClass *)v30;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v30, v32, v33);
  }
  v25 = System_Linq_Enumerable__Skip_object_(
          v27,
          1,
          (const MethodInfo_2EFB868 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v25 )
    goto LABEL_56;
  v47 = v25->klass;
  v48 = v25;
  v49 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v47->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v49;
      p_offset += 4;
      if ( !v49 )
        goto LABEL_26;
    }
    p_method = (__int64)&v47->vtable[*p_offset].method;
  }
  else
  {
LABEL_26:
    p_method = sub_1BFD3FC(v25, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v53 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v48,
          *(_QWORD *)(p_method + 8));
  if ( !v53 )
    sub_1BAB678(0LL, v52);
  while ( 1 )
  {
    v54 = *(_QWORD *)v53;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v56 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_33;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_33:
      v57 = sub_1BFD3FC(v53, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8)) & 1) == 0 )
      break;
    v58 = *(_QWORD *)v53;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v60 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_40;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_40:
      v61 = sub_1BFD3FC(v53, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v62 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
    volume = 0LL;
    v82 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v82, value, (const MethodInfo_366C7F8 *)Method_System_Nullable_float___ctor__);
    v63 = (BgmPlayArgs_o *)sub_1BAB668(SubBgmPlayArgs_TypeInfo);
    v85 = volume;
    v64 = (Il2CppObject *)v63;
    BgmPlayArgs___ctor(v63, v62, v85, fadeTime, startTime, v65);
    v70 = v22->fields._items;
    v71 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v22->fields._version;
    if ( !v70 )
      sub_1BAB678(v66, v67);
    v72 = v22->fields._size;
    if ( (unsigned int)v72 >= v70->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        v64,
        *(const MethodInfo_354D8BC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &v70->obj.klass + v72;
      v22->fields._size = v72 + 1;
      v73[4] = (Il2CppClass *)v64;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v73 + 4), (int32_t)v64, v68, v69);
    }
  }
  v74 = *(_QWORD *)v53;
  v75 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
  {
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_50;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_50:
    v77 = sub_1BFD3FC(v53, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v77)(v53, *(_QWORD *)(v77 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
}