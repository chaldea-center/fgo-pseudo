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
  __int64 v27; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_String_o *v29; // x23
  MainBgmPlayArgs_o *v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x22
  __int64 v32; // x3
  Il2CppClass *klass; // x8
  System_Char_array *v34; // x21
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  MainBgmPlayArgs_o *v38; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x3
  __int64 v42; // x21
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x3
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  System_String_o *v52; // x22
  SubBgmPlayArgs_o *v53; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x23
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v60; // x0
  System_Nullable_float__o volume; // [xsp+0h] [xbp-70h] BYREF
  __int64 v62; // [xsp+8h] [xbp-68h]
  System_Nullable_float__o v63; // 0:x0.8
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v65; // 0:x0.8
  System_Nullable_float__o v66; // 0:x2.8
  System_Nullable_float__o v67; // 0:x2.8
  System_Nullable_float__o v68; // 0:x2.8

  if ( (byte_4185AA9 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, volumeNullable);
    sub_B2C35C(&char___TypeInfo, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Skip_string___, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_string__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_string__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v17);
    sub_B2C35C(&MainBgmPlayArgs_TypeInfo, v18);
    sub_B2C35C(&Method_System_Nullable_float__GetValueOrDefault__, v19);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v20);
    sub_B2C35C(&Method_System_Nullable_float__get_HasValue__, v21);
    sub_B2C35C(&SubBgmPlayArgs_TypeInfo, v22);
    byte_4185AA9 = 1;
  }
  HIDWORD(v62) = 0;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
    System_Nullable_float____ctor(p_volume, value, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
    v38 = (MainBgmPlayArgs_o *)sub_B2C42C(MainBgmPlayArgs_TypeInfo);
    v67 = volume;
    v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)v38;
    MainBgmPlayArgs___ctor(v38, toAnalyze, v67, fadeTime, startTime, 0LL);
    if ( v23 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        v39,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
      return (System_Collections_Generic_List_BgmPlayArgs__o *)v23;
    }
    goto LABEL_51;
  }
  v26 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v26 )
    goto LABEL_51;
  if ( !v26->max_length )
    goto LABEL_52;
  v26->m_Items[2] = 44;
  v26 = (System_Char_array *)System_String__Split(toAnalyze, v26, 0LL);
  if ( !v26 )
    goto LABEL_51;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !v26->max_length )
  {
LABEL_52:
    v60 = sub_B2C460(v26);
    sub_B2C400(v60, 0LL);
  }
  v29 = *(System_String_o **)&v26->m_Items[2];
  v63 = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(v63, value, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
  v30 = (MainBgmPlayArgs_o *)sub_B2C42C(MainBgmPlayArgs_TypeInfo);
  v66 = volume;
  v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v30;
  MainBgmPlayArgs___ctor(v30, v29, v66, fadeTime, startTime, 0LL);
  if ( !v23
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          v31,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__),
        (v26 = (System_Char_array *)System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
                                      v28,
                                      1,
                                      (const MethodInfo_1A9A2F0 *)Method_System_Linq_Enumerable_Skip_string___)) == 0LL) )
  {
LABEL_51:
    sub_B2C434(v26, v27);
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
    p_method = sub_AC5258(v26, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL, v32);
  }
  v42 = (*(__int64 (__fastcall **)(System_Char_array *, _QWORD))p_method)(v34, *(_QWORD *)(p_method + 8));
  if ( !v42 )
    sub_B2C434(0LL, v40);
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
      v46 = sub_AC5258(v42, System_Collections_IEnumerator_TypeInfo, 0LL, v41);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v42;
    if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
    {
      v49 = 0LL;
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v50 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
          goto LABEL_37;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_37:
      v51 = sub_AC5258(v42, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL, v47);
    }
    v52 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v42, *(_QWORD *)(v51 + 8));
    volume = 0LL;
    v65 = (System_Nullable_float__o)&volume;
    System_Nullable_float____ctor(v65, value, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
    v53 = (SubBgmPlayArgs_o *)sub_B2C42C(SubBgmPlayArgs_TypeInfo);
    v68 = volume;
    v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)v53;
    SubBgmPlayArgs___ctor(v53, v52, v68, fadeTime, startTime, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v23,
      v54,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
  }
  v62 = 0x1000000B3LL;
  v55 = *(_QWORD *)v42;
  if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
  {
    v56 = 0LL;
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
        goto LABEL_45;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_45:
    v58 = sub_AC5258(v42, System_IDisposable_TypeInfo, 0LL, v47);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v58)(v42, *(_QWORD *)(v58 + 8));
  if ( (_DWORD)v62 == 179 )
    v62 = 179LL;
  return (System_Collections_Generic_List_BgmPlayArgs__o *)v23;
}