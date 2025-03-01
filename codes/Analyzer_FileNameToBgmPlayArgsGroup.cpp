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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  BgmPlayArgs_o *v42; // x0
  Il2CppObject *v43; // x22
  const MethodInfo *v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  __int64 v57; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v60; // x1
  __int64 v61; // x21
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  System_String_o *v70; // x23
  BgmPlayArgs_o *v71; // x0
  Il2CppObject *v72; // x22
  const MethodInfo *v73; // x4
  __int64 v74; // x0
  __int64 v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o v92; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v94; // 0:x0.8
  System_Nullable_float__o v95; // 0:x2.8
  System_Nullable_float__o v96; // 0:x2.8
  System_Nullable_float__o v97; // 0:x2.8

  if ( (byte_4BFCD68 & 1) == 0 )
  {
    sub_1C2E12C(&BgmManager_TypeInfo, volumeNullable);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Skip_string___, v9);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v10);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_string__TypeInfo, v11);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_string__TypeInfo, v12);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v15);
    sub_1C2E12C(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v16);
    sub_1C2E12C(&MainBgmPlayArgs_TypeInfo, v17);
    sub_1C2E12C(&Method_System_Nullable_float__GetValueOrDefault__, v18);
    sub_1C2E12C(&Method_System_Nullable_float___ctor__, v19);
    sub_1C2E12C(&Method_System_Nullable_float__get_HasValue__, v20);
    sub_1C2E12C(&SubBgmPlayArgs_TypeInfo, v21);
    byte_4BFCD68 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_378A18C *)Method_System_Nullable_float___ctor__);
    v42 = (BgmPlayArgs_o *)sub_1C2E378(MainBgmPlayArgs_TypeInfo);
    v96 = volume;
    v43 = (Il2CppObject *)v42;
    BgmPlayArgs___ctor(v42, toAnalyze, v96, fadeTime, startTime, v44);
    if ( v22 )
    {
      items = v22->fields._items;
      v52 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v22->fields._version;
      if ( items )
      {
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v43,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v43;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v43, v45, v46, v47, v48, v49, v50);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
      }
    }
LABEL_56:
    sub_1C2E388(v25, v26);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0LL);
  if ( !v25 )
    goto LABEL_56;
  v27 = v25;
  if ( !LODWORD(v25[1].monitor) )
    sub_1C2E390(v25, v26);
  klass = (System_String_o *)v25[2].klass;
  v92 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v92, value, (const MethodInfo_378A18C *)Method_System_Nullable_float___ctor__);
  v29 = (BgmPlayArgs_o *)sub_1C2E378(MainBgmPlayArgs_TypeInfo);
  v95 = volume;
  v30 = (Il2CppObject *)v29;
  BgmPlayArgs___ctor(v29, klass, v95, fadeTime, startTime, v31);
  if ( !v22 )
    goto LABEL_56;
  v38 = v22->fields._items;
  v39 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v22->fields._version;
  if ( !v38 )
    goto LABEL_56;
  v40 = v22->fields._size;
  if ( (unsigned int)v40 >= v38->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v30,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v38->obj.klass + v40;
    v22->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)v30;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v30, v32, v33, v34, v35, v36, v37);
  }
  v25 = System_Linq_Enumerable__Skip_object_(
          v27,
          1,
          (const MethodInfo_300A538 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v25 )
    goto LABEL_56;
  v55 = v25->klass;
  v56 = v25;
  v57 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v55->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v57;
      p_offset += 4;
      if ( !v57 )
        goto LABEL_26;
    }
    p_method = (__int64)&v55->vtable[*p_offset].method;
  }
  else
  {
LABEL_26:
    p_method = sub_1C8010C(v25, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v61 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v56,
          *(_QWORD *)(p_method + 8));
  if ( !v61 )
    sub_1C2E388(0LL, v60);
  while ( 1 )
  {
    v62 = *(_QWORD *)v61;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_33;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_33:
      v65 = sub_1C8010C(v61, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8)) & 1) == 0 )
      break;
    v66 = *(_QWORD *)v61;
    v67 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
    {
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v68 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_40;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_40:
      v69 = sub_1C8010C(v61, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v70 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v61, *(_QWORD *)(v69 + 8));
    volume = 0LL;
    v94 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v94, value, (const MethodInfo_378A18C *)Method_System_Nullable_float___ctor__);
    v71 = (BgmPlayArgs_o *)sub_1C2E378(SubBgmPlayArgs_TypeInfo);
    v97 = volume;
    v72 = (Il2CppObject *)v71;
    BgmPlayArgs___ctor(v71, v70, v97, fadeTime, startTime, v73);
    v82 = v22->fields._items;
    v83 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v22->fields._version;
    if ( !v82 )
      sub_1C2E388(v74, v75);
    v84 = v22->fields._size;
    if ( (unsigned int)v84 >= v82->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        v72,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
    }
    else
    {
      v85 = &v82->obj.klass + v84;
      v22->fields._size = v84 + 1;
      v85[4] = (Il2CppClass *)v72;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v85 + 4), (int64_t)v72, v76, v77, v78, v79, v80, v81);
    }
  }
  v86 = *(_QWORD *)v61;
  v87 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
  {
    v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
    {
      --v87;
      v88 += 4;
      if ( !v87 )
        goto LABEL_50;
    }
    v89 = v86 + 16LL * *v88 + 312;
  }
  else
  {
LABEL_50:
    v89 = sub_1C8010C(v61, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v89)(v61, *(_QWORD *)(v89 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
}