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
  __int64 v18; // x3
  Il2CppClass *klass; // x8
  System_Char_array *v20; // x21
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  MainBgmPlayArgs_o *v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x3
  __int64 v28; // x21
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x3
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  System_String_o *v38; // x22
  SubBgmPlayArgs_o *v39; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x23
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v46; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  __int64 v48; // [xsp+8h] [xbp-68h]
  System_Nullable_float__o v49; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v51; // 0:x0.8
  System_Nullable_float__o v52; // 0:x2.8
  System_Nullable_float__o v53; // 0:x2.8
  System_Nullable_float__o v54; // 0:x2.8

  if ( (byte_42ADFFC & 1) == 0 )
  {
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Skip_string___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_B52984(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    sub_B52984(&MainBgmPlayArgs_TypeInfo);
    sub_B52984(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_B52984(&Method_System_Nullable_float___ctor__);
    sub_B52984(&Method_System_Nullable_float__get_HasValue__);
    sub_B52984(&SubBgmPlayArgs_TypeInfo);
    byte_42ADFFC = 1;
  }
  HIDWORD(v48) = 0;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
    v24 = (MainBgmPlayArgs_o *)sub_B52A54(MainBgmPlayArgs_TypeInfo);
    v53 = volume;
    v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v24;
    MainBgmPlayArgs___ctor(v24, toAnalyze, v53, fadeTime, startTime, 0LL);
    if ( v9 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        v25,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
      return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
    }
    goto LABEL_51;
  }
  v12 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
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
    v46 = sub_B52A88(v12);
    sub_B52A28(v46, 0LL);
  }
  v15 = *(System_String_o **)&v12->m_Items[2];
  v49 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v49, value, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
  v16 = (MainBgmPlayArgs_o *)sub_B52A54(MainBgmPlayArgs_TypeInfo);
  v52 = volume;
  v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16;
  MainBgmPlayArgs___ctor(v16, v15, v52, fadeTime, startTime, 0LL);
  if ( !v9
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          v17,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__),
        (v12 = (System_Char_array *)System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
                                      v14,
                                      1,
                                      (const MethodInfo_1B6D8AC *)Method_System_Linq_Enumerable_Skip_string___)) == 0LL) )
  {
LABEL_51:
    sub_B52A5C(v12, v13);
  }
  klass = v12->obj.klass;
  v20 = v12;
  if ( *(_WORD *)&v12->obj.klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_string__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&v12->obj.klass->_2.bitflags1 )
        goto LABEL_21;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_21:
    p_method = sub_AEB880(v12, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL, v18);
  }
  v28 = (*(__int64 (__fastcall **)(System_Char_array *, _QWORD))p_method)(v20, *(_QWORD *)(p_method + 8));
  if ( !v28 )
    sub_B52A5C(0LL, v26);
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_30;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_30:
      v32 = sub_AEB880(v28, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v36 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_37;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_37:
      v37 = sub_AEB880(v28, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL, v33);
    }
    v38 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v28, *(_QWORD *)(v37 + 8));
    volume = 0LL;
    v51 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v51, value, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
    v39 = (SubBgmPlayArgs_o *)sub_B52A54(SubBgmPlayArgs_TypeInfo);
    v54 = volume;
    v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
    SubBgmPlayArgs___ctor(v39, v38, v54, fadeTime, startTime, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v9,
      v40,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  }
  v48 = 0x1000000B3LL;
  v41 = *(_QWORD *)v28;
  if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
        goto LABEL_45;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_45:
    v44 = sub_AEB880(v28, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v28, *(_QWORD *)(v44 + 8));
  if ( (_DWORD)v48 == 179 )
    v48 = 179LL;
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v9;
}