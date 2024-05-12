System_Collections_Generic_List_BgmPlayArgs__o *__fastcall Analyzer_FileNameToBgmPlayArgsGroup__Analyze(
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  float value; // s9
  BgmManager_c *v11; // x0
  System_Char_array *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  System_String_o *v15; // x23
  MainBgmPlayArgs_o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x22
  Il2CppClass *klass; // x8
  System_Char_array *v19; // x21
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  MainBgmPlayArgs_o *v23; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  System_String_o *v35; // x22
  SubBgmPlayArgs_o *v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x23
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v43; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  __int64 v45; // [xsp+8h] [xbp-68h]
  System_Nullable_float__o v46; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v48; // 0:x0.8
  System_Nullable_float__o v49; // 0:x2.8
  System_Nullable_float__o v50; // 0:x2.8
  System_Nullable_float__o v51; // 0:x2.8

  if ( (byte_438A4B9 & 1) == 0 )
  {
    sub_B775C4(&BgmManager_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Skip_string___);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_B775C4(&MainBgmPlayArgs_TypeInfo);
    sub_B775C4(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    sub_B775C4(&Method_System_Nullable_float__get_HasValue__);
    sub_B775C4(&SubBgmPlayArgs_TypeInfo);
    byte_438A4B9 = 1;
  }
  HIDWORD(v45) = 0;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !toAnalyze )
    return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
  if ( (*(_QWORD *)&volumeNullable & 0xFF00000000LL) != 0 )
  {
    value = volumeNullable.fields.value;
  }
  else
  {
    v11 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
    v23 = (MainBgmPlayArgs_o *)sub_B77694(MainBgmPlayArgs_TypeInfo);
    v50 = volume;
    v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
    MainBgmPlayArgs___ctor(v23, toAnalyze, v50, fadeTime, startTime, 0LL);
    if ( v9 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        v24,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
      return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
    }
    goto LABEL_51;
  }
  v12 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v12 )
    goto LABEL_51;
  if ( !v12->max_length )
    goto LABEL_52;
  v12->m_Items[2] = 44;
  v12 = (System_Char_array *)System_String__Split(toAnalyze, v12, 0LL);
  if ( !v12 )
    goto LABEL_51;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  if ( !v12->max_length )
  {
LABEL_52:
    v43 = sub_B776C8(v12);
    sub_B77668(v43, 0LL);
  }
  v15 = *(System_String_o **)&v12->m_Items[2];
  v46 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v46, value, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
  v16 = (MainBgmPlayArgs_o *)sub_B77694(MainBgmPlayArgs_TypeInfo);
  v49 = volume;
  v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16;
  MainBgmPlayArgs___ctor(v16, v15, v49, fadeTime, startTime, 0LL);
  if ( !v9
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          v17,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__),
        (v12 = (System_Char_array *)System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
                                      v14,
                                      1,
                                      (const MethodInfo_1D3C7A0 *)Method_System_Linq_Enumerable_Skip_string___)) == 0LL) )
  {
LABEL_51:
    sub_B7769C(v12, v13);
  }
  klass = v12->obj.klass;
  v19 = v12;
  if ( *(_WORD *)&v12->obj.klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v12->obj.klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_B0F4C0(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(System_Char_array *, _QWORD))p_method)(v19, *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_B7769C(0LL, v25);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_30;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_30:
      v30 = sub_B0F4C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v33 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_37;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_37:
      v34 = sub_B0F4C0(v26, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    volume = 0LL;
    v48 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v48, value, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
    v36 = (SubBgmPlayArgs_o *)sub_B77694(SubBgmPlayArgs_TypeInfo);
    v51 = volume;
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v36;
    SubBgmPlayArgs___ctor(v36, v35, v51, fadeTime, startTime, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v9,
      v37,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  }
  v45 = 0x1000000B3LL;
  v38 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v39 = 0LL;
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_45;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_45:
    v41 = sub_B0F4C0(v26, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v26, *(_QWORD *)(v41 + 8));
  if ( (_DWORD)v45 == 179 )
    v45 = 179LL;
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}