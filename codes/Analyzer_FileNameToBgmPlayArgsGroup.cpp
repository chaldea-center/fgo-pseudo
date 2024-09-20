System_Collections_Generic_List_BgmPlayArgs__o *__fastcall Analyzer_FileNameToBgmPlayArgsGroup__Analyze(
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
  BgmPlayArgs_o *v16; // x0
  Il2CppObject *v17; // x22
  const MethodInfo *v18; // x4
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  BgmPlayArgs_o *v25; // x0
  Il2CppObject *v26; // x22
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  __int64 v36; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v39; // x1
  __int64 v40; // x21
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  System_String_o *v49; // x23
  BgmPlayArgs_o *v50; // x0
  Il2CppObject *v51; // x22
  const MethodInfo *v52; // x4
  __int64 v53; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o v67; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v69; // 0:x0.8
  System_Nullable_float__o v70; // 0:x2.8
  System_Nullable_float__o v71; // 0:x2.8
  System_Nullable_float__o v72; // 0:x2.8

  if ( (byte_4A5A7BF & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Skip_string___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_1B885B0(&MainBgmPlayArgs_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&Method_System_Nullable_float__get_HasValue__);
    sub_1B885B0(&SubBgmPlayArgs_TypeInfo);
    byte_4A5A7BF = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
  if ( (System_String__IndexOf(toAnalyze, 0x2Cu, 0LL) & 0x80000000) != 0 )
  {
    p_volume = (System_Nullable_float__o)&volume;
    volume = 0LL;
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
    v25 = (BgmPlayArgs_o *)sub_1B887FC(MainBgmPlayArgs_TypeInfo);
    v71 = volume;
    v26 = (Il2CppObject *)v25;
    BgmPlayArgs___ctor(v25, toAnalyze, v71, fadeTime, startTime, v27);
    if ( v9 )
    {
      items = v9->fields._items;
      v31 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v26,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
      }
    }
LABEL_56:
    sub_1B8880C(v12, v13);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0LL);
  if ( !v12 )
    goto LABEL_56;
  v14 = v12;
  if ( !LODWORD(v12[1].monitor) )
    sub_1B88814(v12, v13);
  klass = (System_String_o *)v12[2].klass;
  v67 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v67, value, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  v16 = (BgmPlayArgs_o *)sub_1B887FC(MainBgmPlayArgs_TypeInfo);
  v70 = volume;
  v17 = (Il2CppObject *)v16;
  BgmPlayArgs___ctor(v16, klass, v70, fadeTime, startTime, v18);
  if ( !v9 )
    goto LABEL_56;
  v21 = v9->fields._items;
  v22 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v9->fields._version;
  if ( !v21 )
    goto LABEL_56;
  v23 = v9->fields._size;
  if ( (unsigned int)v23 >= v21->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v17,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    v9->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
  }
  v12 = System_Linq_Enumerable__Skip_object_(
          v14,
          1,
          (const MethodInfo_2EB6E60 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v12 )
    goto LABEL_56;
  v34 = v12->klass;
  v35 = v12;
  v36 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v34->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_26;
    }
    p_method = (__int64)&v34->vtable[*p_offset].method;
  }
  else
  {
LABEL_26:
    p_method = sub_1BDA590(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v35,
          *(_QWORD *)(p_method + 8));
  if ( !v40 )
    sub_1B8880C(0LL, v39);
  while ( 1 )
  {
    v41 = *(_QWORD *)v40;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_33;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_33:
      v44 = sub_1BDA590(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v40;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v47 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_40;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_40:
      v48 = sub_1BDA590(v40, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v49 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
    volume = 0LL;
    v69 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v69, value, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
    v50 = (BgmPlayArgs_o *)sub_1B887FC(SubBgmPlayArgs_TypeInfo);
    v72 = volume;
    v51 = (Il2CppObject *)v50;
    BgmPlayArgs___ctor(v50, v49, v72, fadeTime, startTime, v52);
    v57 = v9->fields._items;
    v58 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v57 )
      sub_1B8880C(v53, v54);
    v59 = v9->fields._size;
    if ( (unsigned int)v59 >= v57->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v51,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = &v57->obj.klass + v59;
      v9->fields._size = v59 + 1;
      v60[4] = (Il2CppClass *)v51;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v51, v55, v56);
    }
  }
  v61 = *(_QWORD *)v40;
  v62 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
  {
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_50;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_50:
    v64 = sub_1BDA590(v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v64)(v40, *(_QWORD *)(v64 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}