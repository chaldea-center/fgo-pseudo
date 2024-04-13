System_Collections_Generic_List_BgmPlayArgs__o *__fastcall Analyzer_FileNameToBgmPlayArgsGroup__Analyze(
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x19
  float value; // s9
  BgmManager_c *v53; // x0
  System_Char_array *v54; // x0
  __int64 v55; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  System_String_o *v57; // x23
  MainBgmPlayArgs_o *v58; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x22
  __int64 v60; // x3
  Il2CppClass *klass; // x8
  System_Char_array *v62; // x21
  unsigned __int64 v63; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  MainBgmPlayArgs_o *v66; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v67; // x22
  __int64 v68; // x1
  __int64 v69; // x3
  __int64 v70; // x21
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x3
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  System_String_o *v80; // x22
  SubBgmPlayArgs_o *v81; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v82; // x23
  __int64 v83; // x8
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  __int64 v88; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  __int64 v90; // [xsp+8h] [xbp-68h]
  System_Nullable_float__o v91; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v93; // 0:x0.8
  System_Nullable_float__o v94; // 0:x2.8
  System_Nullable_float__o v95; // 0:x2.8
  System_Nullable_float__o v96; // 0:x2.8

  if ( (byte_42E6888 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, LODWORD(volumeNullable.fields.value), startTime, method);
    sub_B5D5C4(&char___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_string___, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_string__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_string__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&MainBgmPlayArgs_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_System_Nullable_float__GetValueOrDefault__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Nullable_float__get_HasValue__, v45, v46, v47);
    sub_B5D5C4(&SubBgmPlayArgs_TypeInfo, v48, v49, v50);
    byte_42E6888 = 1;
  }
  HIDWORD(v90) = 0;
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !toAnalyze )
    return (System_Collections_Generic_List_BgmPlayArgs__o *)v51;
  if ( (*(_QWORD *)&volumeNullable & 0xFF00000000LL) != 0 )
  {
    value = volumeNullable.fields.value;
  }
  else
  {
    v53 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v53 = BgmManager_TypeInfo;
    }
    value = v53->static_fields->DEFAULT_VOLUME;
  }
  if ( (System_String__IndexOf(toAnalyze, 0x2Cu, 0LL) & 0x80000000) != 0 )
  {
    p_volume = (System_Nullable_float__o)&volume;
    volume = 0LL;
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    v66 = (MainBgmPlayArgs_o *)sub_B5D694(MainBgmPlayArgs_TypeInfo);
    v95 = volume;
    v67 = (EventMissionProgressRequest_Argument_ProgressData_o *)v66;
    MainBgmPlayArgs___ctor(v66, toAnalyze, v95, fadeTime, startTime, 0LL);
    if ( v51 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        v67,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
      return (System_Collections_Generic_List_BgmPlayArgs__o *)v51;
    }
    goto LABEL_51;
  }
  v54 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v54 )
    goto LABEL_51;
  if ( !v54->max_length )
    goto LABEL_52;
  v54->m_Items[2] = 44;
  v54 = (System_Char_array *)System_String__Split(toAnalyze, v54, 0LL);
  if ( !v54 )
    goto LABEL_51;
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)v54;
  if ( !v54->max_length )
  {
LABEL_52:
    v88 = sub_B5D6C8(v54);
    sub_B5D668(v88, 0LL);
  }
  v57 = *(System_String_o **)&v54->m_Items[2];
  v91 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v91, value, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  v58 = (MainBgmPlayArgs_o *)sub_B5D694(MainBgmPlayArgs_TypeInfo);
  v94 = volume;
  v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)v58;
  MainBgmPlayArgs___ctor(v58, v57, v94, fadeTime, startTime, 0LL);
  if ( !v51
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v51,
          v59,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__),
        (v54 = (System_Char_array *)System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
                                      v56,
                                      1,
                                      (const MethodInfo_1CB6AFC *)Method_System_Linq_Enumerable_Skip_string___)) == 0LL) )
  {
LABEL_51:
    sub_B5D69C(v54, v55);
  }
  klass = v54->obj.klass;
  v62 = v54;
  if ( *(_WORD *)&v54->obj.klass->_2.bitflags1 )
  {
    v63 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v63;
      p_offset += 4;
      if ( v63 >= *(unsigned __int16 *)&v54->obj.klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AF54C0(v54, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL, v60);
  }
  v70 = (*(__int64 (__fastcall **)(System_Char_array *, _QWORD))p_method)(v62, *(_QWORD *)(p_method + 8));
  if ( !v70 )
    sub_B5D69C(0LL, v68);
  while ( 1 )
  {
    v71 = *(_QWORD *)v70;
    if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
    {
      v72 = 0LL;
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v73 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v72;
        v73 += 4;
        if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
          goto LABEL_30;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_30:
      v74 = sub_AF54C0(v70, System_Collections_IEnumerator_TypeInfo, 0LL, v69);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v70, *(_QWORD *)(v74 + 8)) & 1) == 0 )
      break;
    v76 = *(_QWORD *)v70;
    if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
    {
      v77 = 0LL;
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v78 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v77;
        v78 += 4;
        if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
          goto LABEL_37;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_37:
      v79 = sub_AF54C0(v70, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL, v75);
    }
    v80 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v70, *(_QWORD *)(v79 + 8));
    volume = 0LL;
    v93 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v93, value, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    v81 = (SubBgmPlayArgs_o *)sub_B5D694(SubBgmPlayArgs_TypeInfo);
    v96 = volume;
    v82 = (EventMissionProgressRequest_Argument_ProgressData_o *)v81;
    SubBgmPlayArgs___ctor(v81, v80, v96, fadeTime, startTime, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v51,
      v82,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  }
  v90 = 0x1000000B3LL;
  v83 = *(_QWORD *)v70;
  if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
  {
    v84 = 0LL;
    v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      ++v84;
      v85 += 4;
      if ( v84 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
        goto LABEL_45;
    }
    v86 = v83 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_45:
    v86 = sub_AF54C0(v70, System_IDisposable_TypeInfo, 0LL, v75);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v86)(v70, *(_QWORD *)(v86 + 8));
  if ( (_DWORD)v90 == 179 )
    v90 = 179LL;
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v51;
}