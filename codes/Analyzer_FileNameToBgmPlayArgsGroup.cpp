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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  BgmPlayArgs_o *v29; // x0
  Il2CppObject *v30; // x22
  const MethodInfo *v31; // x4
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  __int64 v44; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v47; // x1
  __int64 v48; // x21
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  System_String_o *v57; // x23
  BgmPlayArgs_o *v58; // x0
  Il2CppObject *v59; // x22
  const MethodInfo *v60; // x4
  __int64 v61; // x0
  __int64 v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o v79; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v81; // 0:x0.8
  System_Nullable_float__o v82; // 0:x2.8
  System_Nullable_float__o v83; // 0:x2.8
  System_Nullable_float__o v84; // 0:x2.8

  if ( (byte_4BDBB63 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Skip_string___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_1C21E38(&MainBgmPlayArgs_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&Method_System_Nullable_float__get_HasValue__);
    sub_1C21E38(&SubBgmPlayArgs_TypeInfo);
    byte_4BDBB63 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
    v29 = (BgmPlayArgs_o *)sub_1C22084(MainBgmPlayArgs_TypeInfo);
    v83 = volume;
    v30 = (Il2CppObject *)v29;
    BgmPlayArgs___ctor(v29, toAnalyze, v83, fadeTime, startTime, v31);
    if ( v9 )
    {
      items = v9->fields._items;
      v39 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v30,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v41[4] = (Il2CppClass *)v30;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v30, v32, v33, v34, v35, v36, v37);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
      }
    }
LABEL_56:
    sub_1C22094(v12, v13);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0LL);
  if ( !v12 )
    goto LABEL_56;
  v14 = v12;
  if ( !LODWORD(v12[1].monitor) )
    sub_1C2209C(v12, v13);
  klass = (System_String_o *)v12[2].klass;
  v79 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v79, value, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
  v16 = (BgmPlayArgs_o *)sub_1C22084(MainBgmPlayArgs_TypeInfo);
  v82 = volume;
  v17 = (Il2CppObject *)v16;
  BgmPlayArgs___ctor(v16, klass, v82, fadeTime, startTime, v18);
  if ( !v9 )
    goto LABEL_56;
  v25 = v9->fields._items;
  v26 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v9->fields._version;
  if ( !v25 )
    goto LABEL_56;
  v27 = v9->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v17,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v9->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v17;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v17, v19, v20, v21, v22, v23, v24);
  }
  v12 = System_Linq_Enumerable__Skip_object_(
          v14,
          1,
          (const MethodInfo_2FE7F60 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v12 )
    goto LABEL_56;
  v42 = v12->klass;
  v43 = v12;
  v44 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v42->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v44;
      p_offset += 4;
      if ( !v44 )
        goto LABEL_26;
    }
    p_method = (__int64)&v42->vtable[*p_offset].method;
  }
  else
  {
LABEL_26:
    p_method = sub_1C73E18(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v43,
          *(_QWORD *)(p_method + 8));
  if ( !v48 )
    sub_1C22094(0LL, v47);
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
          goto LABEL_33;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_33:
      v52 = sub_1C73E18(v48, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
      break;
    v53 = *(_QWORD *)v48;
    v54 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v55 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_40;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_40:
      v56 = sub_1C73E18(v48, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v57 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
    volume = 0LL;
    v81 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v81, value, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
    v58 = (BgmPlayArgs_o *)sub_1C22084(SubBgmPlayArgs_TypeInfo);
    v84 = volume;
    v59 = (Il2CppObject *)v58;
    BgmPlayArgs___ctor(v58, v57, v84, fadeTime, startTime, v60);
    v69 = v9->fields._items;
    v70 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v69 )
      sub_1C22094(v61, v62);
    v71 = v9->fields._size;
    if ( (unsigned int)v71 >= v69->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        v59,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v72 = &v69->obj.klass + v71;
      v9->fields._size = v71 + 1;
      v72[4] = (Il2CppClass *)v59;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v72 + 4), (int64_t)v59, v63, v64, v65, v66, v67, v68);
    }
  }
  v73 = *(_QWORD *)v48;
  v74 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
  {
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      --v74;
      v75 += 4;
      if ( !v74 )
        goto LABEL_50;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_50:
    v76 = sub_1C73E18(v48, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v48, *(_QWORD *)(v76 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}