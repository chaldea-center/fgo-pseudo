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
  __int64 v29; // x1
  __int64 v30; // x2
  BgmPlayArgs_o *v31; // x0
  Il2CppObject *v32; // x22
  const MethodInfo *v33; // x4
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  BgmPlayArgs_o *v42; // x0
  Il2CppObject *v43; // x22
  const MethodInfo *v44; // x4
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  __int64 v53; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v56; // x21
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  System_String_o *v65; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  BgmPlayArgs_o *v68; // x0
  Il2CppObject *v69; // x22
  const MethodInfo *v70; // x4
  __int64 v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  System_Nullable_float__o volume; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o v84; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v86; // 0:x0.8
  System_Nullable_float__o v87; // 0:x2.8
  System_Nullable_float__o v88; // 0:x2.8
  System_Nullable_float__o v89; // 0:x2.8

  if ( (byte_49FBA83 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, volumeNullable);
    sub_1B640C8(&Method_System_Linq_Enumerable_Skip_string___, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_string__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_string__TypeInfo, v12);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v16);
    sub_1B640C8(&MainBgmPlayArgs_TypeInfo, v17);
    sub_1B640C8(&Method_System_Nullable_float__GetValueOrDefault__, v18);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v19);
    sub_1B640C8(&Method_System_Nullable_float__get_HasValue__, v20);
    sub_1B640C8(&SubBgmPlayArgs_TypeInfo, v21);
    byte_49FBA83 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_1B64314)(
                                                       System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                       volumeNullable,
                                                       startTime);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
    v42 = (BgmPlayArgs_o *)sub_1B64314(MainBgmPlayArgs_TypeInfo, v40, v41);
    v88 = volume;
    v43 = (Il2CppObject *)v42;
    BgmPlayArgs___ctor(v42, toAnalyze, v88, fadeTime, startTime, v44);
    if ( v22 )
    {
      items = v22->fields._items;
      v48 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v22->fields._version;
      if ( items )
      {
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v43,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v50[4] = (Il2CppClass *)v43;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v43, v45, v46);
        }
        return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
      }
    }
LABEL_56:
    sub_1B64324(v25);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(toAnalyze, 0x2Cu, 0, 0LL);
  if ( !v25 )
    goto LABEL_56;
  v27 = v25;
  if ( !LODWORD(v25[1].monitor) )
    sub_1B6432C(v25, v26);
  klass = (System_String_o *)v25[2].klass;
  v84 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v84, value, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
  v31 = (BgmPlayArgs_o *)sub_1B64314(MainBgmPlayArgs_TypeInfo, v29, v30);
  v87 = volume;
  v32 = (Il2CppObject *)v31;
  BgmPlayArgs___ctor(v31, klass, v87, fadeTime, startTime, v33);
  if ( !v22 )
    goto LABEL_56;
  v36 = v22->fields._items;
  v37 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v22->fields._version;
  if ( !v36 )
    goto LABEL_56;
  v38 = v22->fields._size;
  if ( (unsigned int)v38 >= v36->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      v32,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v36->obj.klass + v38;
    v22->fields._size = v38 + 1;
    v39[4] = (Il2CppClass *)v32;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
  }
  v25 = System_Linq_Enumerable__Skip_object_(
          v27,
          1,
          (const MethodInfo_2E6FAC0 *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v25 )
    goto LABEL_56;
  v51 = v25->klass;
  v52 = v25;
  v53 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v51->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v53;
      p_offset += 4;
      if ( !v53 )
        goto LABEL_26;
    }
    p_method = (__int64)&v51->vtable[*p_offset].method;
  }
  else
  {
LABEL_26:
    p_method = sub_1BB60A8(v25, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v56 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v52,
          *(_QWORD *)(p_method + 8));
  if ( !v56 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v57 = *(_QWORD *)v56;
    v58 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v58;
        v59 += 4;
        if ( !v58 )
          goto LABEL_33;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_33:
      v60 = sub_1BB60A8(v56, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8)) & 1) == 0 )
      break;
    v61 = *(_QWORD *)v56;
    v62 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v63 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_40;
      }
      v64 = v61 + 16LL * *v63 + 312;
    }
    else
    {
LABEL_40:
      v64 = sub_1BB60A8(v56, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v65 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v56, *(_QWORD *)(v64 + 8));
    volume = 0LL;
    v86 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v86, value, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
    v68 = (BgmPlayArgs_o *)sub_1B64314(SubBgmPlayArgs_TypeInfo, v66, v67);
    v89 = volume;
    v69 = (Il2CppObject *)v68;
    BgmPlayArgs___ctor(v68, v65, v89, fadeTime, startTime, v70);
    v74 = v22->fields._items;
    v75 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v22->fields._version;
    if ( !v74 )
      sub_1B64324(v71);
    v76 = v22->fields._size;
    if ( (unsigned int)v76 >= v74->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        v69,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &v74->obj.klass + v76;
      v22->fields._size = v76 + 1;
      v77[4] = (Il2CppClass *)v69;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 4), (int32_t)v69, v72, v73);
    }
  }
  v78 = *(_QWORD *)v56;
  v79 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
  {
    v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
    {
      --v79;
      v80 += 4;
      if ( !v79 )
        goto LABEL_50;
    }
    v81 = v78 + 16LL * *v80 + 312;
  }
  else
  {
LABEL_50:
    v81 = sub_1BB60A8(v56, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v81)(v56, *(_QWORD *)(v81 + 8));
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v22;
}