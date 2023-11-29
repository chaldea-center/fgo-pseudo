System_Collections_Generic_List_BgmPlayArgs__o *__fastcall Analyzer_FileNameToBgmPlayArgsGroup__Analyze(
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  __int64 v5; // x4
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
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  float value; // s9
  BgmManager_c *v26; // x0
  __int64 v27; // x2
  System_Char_array *v28; // x0
  __int64 v29; // x2
  System_Char_array *v30; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  System_String_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  MainBgmPlayArgs_o *v37; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  MainBgmPlayArgs_o *v49; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x22
  __int64 v51; // x21
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  System_String_o *v60; // x22
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  SubBgmPlayArgs_o *v65; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v66; // x23
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  __int64 v73; // [xsp+8h] [xbp-68h]
  System_Nullable_float__o v74; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v76; // 0:x0.8
  System_Nullable_float__o v77; // 0:x2.8
  System_Nullable_float__o v78; // 0:x2.8
  System_Nullable_float__o v79; // 0:x2.8

  if ( (byte_40F7F0B & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, volumeNullable);
    sub_B16FFC(&char___TypeInfo, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Skip_string___, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_string__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_string__TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v18);
    sub_B16FFC(&MainBgmPlayArgs_TypeInfo, v19);
    sub_B16FFC(&Method_System_Nullable_float__GetValueOrDefault__, v20);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v21);
    sub_B16FFC(&Method_System_Nullable_float__get_HasValue__, v22);
    sub_B16FFC(&SubBgmPlayArgs_TypeInfo, v23);
    byte_40F7F0B = 1;
  }
  HIDWORD(v73) = 0;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170CC)(
                                                                                                  System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                                                                  volumeNullable,
                                                                                                  startTime,
                                                                                                  method,
                                                                                                  v5);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !toAnalyze )
    return (System_Collections_Generic_List_BgmPlayArgs__o *)v24;
  if ( (*(_QWORD *)&volumeNullable & 0xFF00000000LL) != 0 )
  {
    value = volumeNullable.fields.value;
  }
  else
  {
    v26 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v26 = BgmManager_TypeInfo;
    }
    value = v26->static_fields->DEFAULT_VOLUME;
  }
  if ( (System_String__IndexOf(toAnalyze, 0x2Cu, 0LL) & 0x80000000) != 0 )
  {
    p_volume = (System_Nullable_float__o)&volume;
    volume = 0LL;
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
    v49 = (MainBgmPlayArgs_o *)sub_B170CC(MainBgmPlayArgs_TypeInfo, v45, v46, v47, v48);
    v78 = volume;
    v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)v49;
    MainBgmPlayArgs___ctor(v49, toAnalyze, v78, fadeTime, startTime, 0LL);
    if ( v24 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v24,
        v50,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
      return (System_Collections_Generic_List_BgmPlayArgs__o *)v24;
    }
    goto LABEL_51;
  }
  v28 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v27);
  if ( !v28 )
    goto LABEL_51;
  v30 = v28;
  if ( !v28->max_length )
    goto LABEL_52;
  v28->m_Items[2] = 44;
  v28 = (System_Char_array *)System_String__Split(toAnalyze, v28, 0LL);
  if ( !v28 )
    goto LABEL_51;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
  if ( !v28->max_length )
  {
LABEL_52:
    sub_B17100(v28, v30, v29);
    sub_B170A0();
  }
  v32 = *(System_String_o **)&v28->m_Items[2];
  v74 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v74, value, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  v37 = (MainBgmPlayArgs_o *)sub_B170CC(MainBgmPlayArgs_TypeInfo, v33, v34, v35, v36);
  v77 = volume;
  v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)v37;
  MainBgmPlayArgs___ctor(v37, v32, v77, fadeTime, startTime, 0LL);
  if ( !v24
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          v38,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__),
        (v39 = System_Linq_Enumerable__Skip_Transform_(
                 v31,
                 1,
                 (const MethodInfo_19C3FD4 *)Method_System_Linq_Enumerable_Skip_string___)) == 0LL) )
  {
LABEL_51:
    sub_B170D4();
  }
  klass = v39->klass;
  v41 = v39;
  if ( *(_WORD *)&v39->klass->_2.bitflags1 )
  {
    v42 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v42;
      p_offset += 4;
      if ( v42 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AAFEF8(v39, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v51 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v41,
          *(_QWORD *)(p_method + 8));
  if ( !v51 )
    sub_B170D4();
  while ( 1 )
  {
    v52 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_30;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_30:
      v55 = sub_AAFEF8(v51, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      break;
    v56 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v57 = 0LL;
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v58 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_37;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_37:
      v59 = sub_AAFEF8(v51, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v60 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
    volume = 0LL;
    v76 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v76, value, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
    v65 = (SubBgmPlayArgs_o *)sub_B170CC(SubBgmPlayArgs_TypeInfo, v61, v62, v63, v64);
    v79 = volume;
    v66 = (EventMissionProgressRequest_Argument_ProgressData_o *)v65;
    SubBgmPlayArgs___ctor(v65, v60, v79, fadeTime, startTime, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v24,
      v66,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  }
  v73 = 0x1000000B3LL;
  v67 = *(_QWORD *)v51;
  if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
  {
    v68 = 0LL;
    v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
    {
      ++v68;
      v69 += 4;
      if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
        goto LABEL_45;
    }
    v70 = v67 + 16LL * *v69 + 312;
  }
  else
  {
LABEL_45:
    v70 = sub_AAFEF8(v51, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v70)(v51, *(_QWORD *)(v70 + 8));
  if ( (_DWORD)v73 == 179 )
    v73 = 179LL;
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v24;
}