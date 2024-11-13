System_Collections_Generic_List_BgmPlayArgs__o *__fastcall Analyzer_FileNameToBgmPlayArgsGroup__Analyze(
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x19
  __int64 v36; // x1
  float value; // s9
  BgmManager_c *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  System_String_o *klass; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  BgmPlayArgs_o *v46; // x0
  Il2CppObject *v47; // x22
  const MethodInfo *v48; // x4
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  BgmPlayArgs_o *v62; // x0
  Il2CppObject *v63; // x22
  const MethodInfo *v64; // x4
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v75; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x21
  __int64 v77; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v80; // x1
  __int64 v81; // x21
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  System_String_o *v90; // x23
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  BgmPlayArgs_o *v94; // x0
  Il2CppObject *v95; // x22
  const MethodInfo *v96; // x4
  __int64 v97; // x0
  __int64 v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  __int64 v109; // x8
  __int64 v110; // x9
  int *v111; // x10
  __int64 v112; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o v115; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v117; // 0:x0.8
  System_Nullable_float__o v118; // 0:x2.8
  System_Nullable_float__o v119; // 0:x2.8
  System_Nullable_float__o v120; // 0:x2.8

  if ( (byte_4B15828 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, volumeNullable, startTime);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_string___, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_string__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_string__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v23, v24);
    sub_1BCA7E0(&MainBgmPlayArgs_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v27, v28);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v31, v32);
    sub_1BCA7E0(&SubBgmPlayArgs_TypeInfo, v33, v34);
    byte_4B15828 = 1;
  }
  v35 = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1BCAA2C)(
                                                       System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                       volumeNullable,
                                                       startTime,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !toAnalyze )
    return (System_Collections_Generic_List_BgmPlayArgs__o *)v35;
  if ( volumeNullable.fields.hasValue )
  {
    value = volumeNullable.fields.value;
  }
  else
  {
    v38 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v36);
      v38 = BgmManager_TypeInfo;
    }
    value = v38->static_fields->DEFAULT_VOLUME;
  }
  if ( (System_String__IndexOf(toAnalyze, 0x2Cu, 0LL) & 0x80000000) != 0 )
  {
    p_volume = (System_Nullable_float__o)&volume;
    volume = 0LL;
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    v62 = (BgmPlayArgs_o *)sub_1BCAA2C(MainBgmPlayArgs_TypeInfo, v59, v60, v61);
    v119 = volume;
    v63 = (Il2CppObject *)v62;
    BgmPlayArgs___ctor(v62, toAnalyze, v119, fadeTime, startTime, v64);
    if ( v35 )
    {
      items = v35->fields._items;
      v72 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v35->fields._version;
      if ( items )
      {
        size = v35->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            v63,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &items->obj.klass + size;
          v35->fields._size = size + 1;
          v74[4] = (Il2CppClass *)v63;
          sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v63, v65, v66, v67, v68, v69, v70);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v35;
      }
    }
LABEL_56:
    sub_1BCAA3C(v39, v40);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0LL);
  if ( !v39 )
    goto LABEL_56;
  v41 = v39;
  if ( !LODWORD(v39[1].monitor) )
    sub_1BCAA44(v39, v40);
  klass = (System_String_o *)v39[2].klass;
  v115 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v115, value, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  v46 = (BgmPlayArgs_o *)sub_1BCAA2C(MainBgmPlayArgs_TypeInfo, v43, v44, v45);
  v118 = volume;
  v47 = (Il2CppObject *)v46;
  BgmPlayArgs___ctor(v46, klass, v118, fadeTime, startTime, v48);
  if ( !v35 )
    goto LABEL_56;
  v55 = v35->fields._items;
  v56 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v35->fields._version;
  if ( !v55 )
    goto LABEL_56;
  v57 = v35->fields._size;
  if ( (unsigned int)v57 >= v55->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      v47,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->obj.klass + v57;
    v35->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v47;
    sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v47, v49, v50, v51, v52, v53, v54);
  }
  v39 = System_Linq_Enumerable__Skip_object_(
          v41,
          1,
          (const MethodInfo_2F4A184 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v39 )
    goto LABEL_56;
  v75 = v39->klass;
  v76 = v39;
  v77 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v75->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v77;
      p_offset += 4;
      if ( !v77 )
        goto LABEL_26;
    }
    p_method = (__int64)&v75->vtable[*p_offset].method;
  }
  else
  {
LABEL_26:
    p_method = sub_1C1C7C0(v39, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v81 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v76,
          *(_QWORD *)(p_method + 8));
  if ( !v81 )
    sub_1BCAA3C(0LL, v80);
  while ( 1 )
  {
    v82 = *(_QWORD *)v81;
    v83 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
    {
      v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v84 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v83;
        v84 += 4;
        if ( !v83 )
          goto LABEL_33;
      }
      v85 = v82 + 16LL * *v84 + 312;
    }
    else
    {
LABEL_33:
      v85 = sub_1C1C7C0(v81, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8)) & 1) == 0 )
      break;
    v86 = *(_QWORD *)v81;
    v87 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
    {
      v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v88 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v87;
        v88 += 4;
        if ( !v87 )
          goto LABEL_40;
      }
      v89 = v86 + 16LL * *v88 + 312;
    }
    else
    {
LABEL_40:
      v89 = sub_1C1C7C0(v81, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v90 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v81, *(_QWORD *)(v89 + 8));
    volume = 0LL;
    v117 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v117, value, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    v94 = (BgmPlayArgs_o *)sub_1BCAA2C(SubBgmPlayArgs_TypeInfo, v91, v92, v93);
    v120 = volume;
    v95 = (Il2CppObject *)v94;
    BgmPlayArgs___ctor(v94, v90, v120, fadeTime, startTime, v96);
    v105 = v35->fields._items;
    v106 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v35->fields._version;
    if ( !v105 )
      sub_1BCAA3C(v97, v98);
    v107 = v35->fields._size;
    if ( (unsigned int)v107 >= v105->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        v95,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    }
    else
    {
      v108 = &v105->obj.klass + v107;
      v35->fields._size = v107 + 1;
      v108[4] = (Il2CppClass *)v95;
      sub_1BCA784((PartyOrganizationUtility_o *)(v108 + 4), (int64_t)v95, v99, v100, v101, v102, v103, v104);
    }
  }
  v109 = *(_QWORD *)v81;
  v110 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
  {
    v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
    {
      --v110;
      v111 += 4;
      if ( !v110 )
        goto LABEL_50;
    }
    v112 = v109 + 16LL * *v111 + 312;
  }
  else
  {
LABEL_50:
    v112 = sub_1C1C7C0(v81, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v112)(v81, *(_QWORD *)(v112 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v35;
}