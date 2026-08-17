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
  System_Nullable_float__o v16; // x0
  System_String_o *klass; // x23
  BgmPlayArgs_o *v18; // x0
  System_Nullable_float__o v19; // x2
  Il2CppObject *v20; // x22
  const MethodInfo *v21; // x4
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  System_Nullable_float__o p_volume; // x0
  BgmPlayArgs_o *v33; // x0
  System_Nullable_float__o v34; // x2
  Il2CppObject *v35; // x22
  const MethodInfo *v36; // x4
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  __int64 v49; // x9
  int *p_offset; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x21
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x21
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  System_String_o *v66; // x22
  System_Nullable_float__o v67; // x0
  BgmPlayArgs_o *v68; // x21
  System_Nullable_float__o v69; // x2
  const MethodInfo *v70; // x4
  __int64 v71; // x0
  __int64 v72; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x21
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  System_Nullable_float__o v89; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o volume; // [xsp+8h] [xbp-78h] BYREF
  __int64 *v91; // [xsp+10h] [xbp-70h]
  __int64 v92; // [xsp+18h] [xbp-68h] BYREF

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
  v92 = 0;
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
    p_volume = (System_Nullable_float__o)&volume;
    volume = 0;
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v33 = (BgmPlayArgs_o *)sub_2213CCC(MainBgmPlayArgs_TypeInfo);
    v34 = volume;
    v35 = (Il2CppObject *)v33;
    BgmPlayArgs___ctor(v33, toAnalyze, v34, fadeTime, startTime, v36);
    if ( v9 )
    {
      items = v9->fields._items;
      v44 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            v35,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v35;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v35, v37, v38, v39, v40, v41, v42);
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
  v16 = (System_Nullable_float__o)&volume;
  klass = (System_String_o *)v15[2].klass;
  volume = 0;
  System_Nullable_float____ctor(v16, value, (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  v18 = (BgmPlayArgs_o *)sub_2213CCC(MainBgmPlayArgs_TypeInfo);
  v19 = volume;
  v20 = (Il2CppObject *)v18;
  BgmPlayArgs___ctor(v18, klass, v19, fadeTime, startTime, v21);
  if ( !v9 )
    goto LABEL_62;
  v28 = v9->fields._items;
  v29 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v9->fields._version;
  if ( !v28 )
    goto LABEL_62;
  v30 = v9->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      v20,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    v9->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v20;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v20, v22, v23, v24, v25, v26, v27);
  }
  v13 = System_Linq_Enumerable__Skip_object_(
          v15,
          1,
          (const MethodInfo_3899B4C *)Method_System_Linq_Enumerable_Skip_string___);
  if ( !v13 )
    goto LABEL_62;
  v47 = v13->klass;
  v48 = v13;
  v49 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    p_offset = &v47->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v49;
      p_offset += 4;
      if ( !v49 )
        goto LABEL_26;
    }
    v51 = (__int64)&v47->vtable[*p_offset];
  }
  else
  {
LABEL_26:
    v51 = sub_224BC3C(v13, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v51)(
          v48,
          *(_QWORD *)(v51 + 8));
  v92 = v52;
  volume = 0;
  v91 = &v92;
  if ( !v52 )
LABEL_49:
    sub_2213CDC(v52, v53);
  v54 = v52;
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
          goto LABEL_34;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_34:
      v58 = sub_224BC3C(v54, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8));
    if ( (v59 & 1) == 0 )
      break;
    v61 = v92;
    if ( !v92 )
      sub_2213CDC(v59, v60);
    v62 = *(_QWORD *)v92;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v64 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_42;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_42:
      v65 = sub_224BC3C(v92, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v66 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8));
    v89 = 0;
    v67 = (System_Nullable_float__o)&v89;
    System_Nullable_float____ctor(v67, value, (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v68 = (BgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgs_TypeInfo);
    v69 = v89;
    BgmPlayArgs___ctor(v68, v66, v69, fadeTime, startTime, v70);
    v79 = v9->fields._items;
    v80 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
    ++v9->fields._version;
    if ( !v79 )
      sub_2213CDC(v71, v72);
    v81 = v9->fields._size;
    if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v9,
        (Il2CppObject *)v68,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &v79->obj.klass + v81;
      v9->fields._size = v81 + 1;
      v82[4] = (Il2CppClass *)v68;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v82 + 4), (int32_t)v68, v73, v74, v75, v76, v77, v78);
    }
    v54 = v92;
    if ( !v92 )
      goto LABEL_49;
  }
  v83 = v92;
  if ( v92 )
  {
    v84 = *(_QWORD *)v92;
    v85 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
    {
      v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
      {
        --v85;
        v86 += 4;
        if ( !v85 )
          goto LABEL_55;
      }
      v87 = v84 + 16LL * *v86 + 312;
    }
    else
    {
LABEL_55:
      v87 = sub_224BC3C(v92, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v87)(v83, *(_QWORD *)(v87 + 8));
  }
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}