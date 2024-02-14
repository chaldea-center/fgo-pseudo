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
  __int64 v22; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x19
  float value; // s9
  BgmManager_c *v25; // x0
  System_Char_array *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_String_o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  MainBgmPlayArgs_o *v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x22
  Il2CppClass *klass; // x8
  System_Char_array *v34; // x21
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  MainBgmPlayArgs_o *v40; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x22
  __int64 v42; // x21
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  System_String_o *v51; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  SubBgmPlayArgs_o *v54; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x23
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v61; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  __int64 v63; // [xsp+8h] [xbp-68h]
  System_Nullable_float__o v64; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v66; // 0:x0.8
  System_Nullable_float__o v67; // 0:x2.8
  System_Nullable_float__o v68; // 0:x2.8
  System_Nullable_float__o v69; // 0:x2.8

  if ( (byte_421299A & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, volumeNullable);
    sub_B0D8A4(&char___TypeInfo, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Skip_string___, v10);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_string__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_string__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v17);
    sub_B0D8A4(&MainBgmPlayArgs_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Nullable_float__GetValueOrDefault__, v19);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v20);
    sub_B0D8A4(&Method_System_Nullable_float__get_HasValue__, v21);
    sub_B0D8A4(&SubBgmPlayArgs_TypeInfo, v22);
    byte_421299A = 1;
  }
  HIDWORD(v63) = 0;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_B0D974)(
                                                                                                  System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                                                                  volumeNullable,
                                                                                                  startTime);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !toAnalyze )
    return (System_Collections_Generic_List_BgmPlayArgs__o *)v23;
  if ( (*(_QWORD *)&volumeNullable & 0xFF00000000LL) != 0 )
  {
    value = volumeNullable.fields.value;
  }
  else
  {
    v25 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v25 = BgmManager_TypeInfo;
    }
    value = v25->static_fields->DEFAULT_VOLUME;
  }
  if ( (System_String__IndexOf(toAnalyze, 0x2Cu, 0LL) & 0x80000000) != 0 )
  {
    p_volume = (System_Nullable_float__o)&volume;
    volume = 0LL;
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
    v40 = (MainBgmPlayArgs_o *)sub_B0D974(MainBgmPlayArgs_TypeInfo, v38, v39);
    v68 = volume;
    v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)v40;
    MainBgmPlayArgs___ctor(v40, toAnalyze, v68, fadeTime, startTime, 0LL);
    if ( v23 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        v41,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
      return (System_Collections_Generic_List_BgmPlayArgs__o *)v23;
    }
    goto LABEL_51;
  }
  v26 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_51;
  if ( !v26->max_length )
    goto LABEL_52;
  v26->m_Items[2] = 44;
  v26 = (System_Char_array *)System_String__Split(toAnalyze, v26, 0LL);
  if ( !v26 )
    goto LABEL_51;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !v26->max_length )
  {
LABEL_52:
    v61 = sub_B0D9A8(v26);
    sub_B0D948(v61, 0LL);
  }
  v28 = *(System_String_o **)&v26->m_Items[2];
  v64 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v64, value, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  v31 = (MainBgmPlayArgs_o *)sub_B0D974(MainBgmPlayArgs_TypeInfo, v29, v30);
  v67 = volume;
  v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)v31;
  MainBgmPlayArgs___ctor(v31, v28, v67, fadeTime, startTime, 0LL);
  if ( !v23
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          v32,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__),
        (v26 = (System_Char_array *)System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
                                      v27,
                                      1,
                                      (const MethodInfo_1B555BC *)Method_System_Linq_Enumerable_Skip_string___)) == 0LL) )
  {
LABEL_51:
    sub_B0D97C(v26);
  }
  klass = v26->obj.klass;
  v34 = v26;
  if ( *(_WORD *)&v26->obj.klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&v26->obj.klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AA67A0(v26, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(System_Char_array *, _QWORD))p_method)(v34, *(_QWORD *)(p_method + 8));
  if ( !v42 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v43 = *(_QWORD *)v42;
    if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
          goto LABEL_30;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_30:
      v46 = sub_AA67A0(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v42;
    if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v49 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
          goto LABEL_37;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_37:
      v50 = sub_AA67A0(v42, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v51 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
    volume = 0LL;
    v66 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v66, value, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
    v54 = (SubBgmPlayArgs_o *)sub_B0D974(SubBgmPlayArgs_TypeInfo, v52, v53);
    v69 = volume;
    v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)v54;
    SubBgmPlayArgs___ctor(v54, v51, v69, fadeTime, startTime, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v23,
      v55,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  }
  v63 = 0x1000000B3LL;
  v56 = *(_QWORD *)v42;
  if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
  {
    v57 = 0LL;
    v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      v58 += 4;
      if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
        goto LABEL_45;
    }
    v59 = v56 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_45:
    v59 = sub_AA67A0(v42, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v59)(v42, *(_QWORD *)(v59 + 8));
  if ( (_DWORD)v63 == 179 )
    v63 = 179LL;
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v23;
}