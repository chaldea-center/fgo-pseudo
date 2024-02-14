void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421202A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, method);
    byte_421202A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    309,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        bool isMaterial,
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
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  bool v26; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  OpeningMovieEntity_o *v35; // x0
  const MethodInfo *v36; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x24
  __int64 v38; // x9
  _BOOL8 IsEnable; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v48; // x21
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v49; // x1
  struct OpeningMovieMaster___c_StaticFields *v50; // x0
  struct System_Comparison_OpeningMovieEntity__o **p__9__2_0; // x0
  struct OpeningMovieMaster___c_StaticFields *v52; // x8
  Il2CppObject *v53; // x21
  struct OpeningMovieMaster___c_StaticFields *v54; // x0

  if ( (byte_421202B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, nowTime);
    sub_B0D8A4(&Method_System_Comparison_OpeningMovieEntity___ctor__, v9);
    sub_B0D8A4(&System_Comparison_OpeningMovieEntity__TypeInfo, v10);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v18);
    sub_B0D8A4(&OpeningMovieEntity_TypeInfo, v19);
    sub_B0D8A4(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, v20);
    sub_B0D8A4(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, v21);
    sub_B0D8A4(&OpeningMovieMaster___c_TypeInfo, v22);
    byte_421202B = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_OpeningMovieEntity__TypeInfo,
                                                                                                  nowTime,
                                                                                                  *(_QWORD *)&sortType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  v26 = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_17:
      v34 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                    Enumerator,
                                    *(_QWORD *)(v34 + 8));
    v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v35;
    if ( !v35 )
      goto LABEL_55;
    v38 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v38
      || (OpeningMovieEntity_c *)v35->klass->_2.typeHierarchy[v38 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v35 = (OpeningMovieEntity_o *)sub_B0DC70(v35);
LABEL_55:
      sub_B0D97C(v35);
    }
    IsEnable = OpeningMovieEntity__IsEnable(v35, nowTime, v26, v36);
    if ( IsEnable )
    {
      if ( !v23 )
        sub_B0D97C(IsEnable);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        v37,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    }
  }
  v40 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_29:
    v43 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
                   Enumerator,
                   *(_QWORD *)(v43 + 8));
  if ( sortType != 1 )
  {
    if ( !sortType )
    {
      list = OpeningMovieMaster___c_TypeInfo;
      if ( (BYTE3(OpeningMovieMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      static_fields = (struct OpeningMovieMaster___c_StaticFields *)*((_QWORD *)list + 23);
      _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
      if ( !_9__2_0 )
      {
        if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
        {
          j_il2cpp_runtime_class_init_0(list);
          static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
        }
        v48 = (Il2CppObject *)static_fields->__9;
        _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                              System_Comparison_OpeningMovieEntity__TypeInfo,
                                                                              v44,
                                                                              v45);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__2_0,
          v48,
          Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
        v49 = _9__2_0;
        v50 = OpeningMovieMaster___c_TypeInfo->static_fields;
        v50->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
        p__9__2_0 = &v50->__9__2_0;
LABEL_49:
        sub_B0D840(p__9__2_0, v49);
        goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v23 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_57:
    sub_B0D97C(list);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( (BYTE3(OpeningMovieMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v52 = (struct OpeningMovieMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v52->__9__2_1;
  if ( !_9__2_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v52 = OpeningMovieMaster___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)v52->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_OpeningMovieEntity__TypeInfo,
                                                                          v44,
                                                                          v45);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v53,
      Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    v49 = _9__2_0;
    v54 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v54->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
    p__9__2_0 = &v54->__9__2_1;
    goto LABEL_49;
  }
LABEL_50:
  if ( !v23 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMoviesAndMaterialPos(
        OpeningMovieMaster_o *this,
        int32_t type,
        int32_t value,
        int64_t nowTime,
        int32_t sortType,
        const MethodInfo *method)
{
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
  __int64 v24; // x1
  OpeningMovieMaster___c__DisplayClass4_0_o *v25; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  OpeningMovieEntity_o *v39; // x0
  const MethodInfo *v40; // x3
  OpeningMovieEntity_o *v41; // x25
  __int64 v42; // x10
  _BOOL8 IsEnable; // x0
  int32_t v44; // w8
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v51; // x0
  __int64 *v52; // x8
  System_Comparison_T__o *v53; // x19

  if ( (byte_421202D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Comparison_OpeningMovieEntity___ctor__, v11);
    sub_B0D8A4(&System_Comparison_OpeningMovieEntity__TypeInfo, v12);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v20);
    sub_B0D8A4(&OpeningMovieEntity_TypeInfo, v21);
    sub_B0D8A4(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__, v22);
    sub_B0D8A4(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__, v23);
    sub_B0D8A4(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo, v24);
    byte_421202D = 1;
  }
  v25 = (OpeningMovieMaster___c__DisplayClass4_0_o *)sub_B0D974(
                                                       OpeningMovieMaster___c__DisplayClass4_0_TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&value);
  OpeningMovieMaster___c__DisplayClass4_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_45;
  v25->fields.type = type;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_OpeningMovieEntity__TypeInfo,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_17:
      v38 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v39 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                    Enumerator,
                                    *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( v39 )
    {
      v42 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v39->klass->_2.bitflags2 + 1) >= (unsigned int)v42
        && (OpeningMovieEntity_c *)v39->klass->_2.typeHierarchy[v42 - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v39, nowTime, 1, v40);
        if ( IsEnable )
        {
          v44 = v25->fields.type;
          if ( v44 == v41->fields.materialPosType )
          {
            if ( v44 == 2 )
            {
              if ( !v29 )
                sub_B0D97C(IsEnable);
LABEL_28:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v29,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
            }
            else if ( v44 == 1 && v41->fields.materialPosValue == value )
            {
              if ( !v29 )
                sub_B0D97C(IsEnable);
              goto LABEL_28;
            }
          }
        }
      }
    }
  }
  v45 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_35:
    v48 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v48 + 8));
  if ( sortType == 1 )
  {
    v51 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                      System_Comparison_OpeningMovieEntity__TypeInfo,
                                                                      v49,
                                                                      v50);
    v52 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
LABEL_41:
    v53 = (System_Comparison_T__o *)v51;
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v51,
      (Il2CppObject *)v25,
      *v52,
      (const MethodInfo_2412E90 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    if ( v29 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v29,
        v53,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_45:
    sub_B0D97C(list);
  }
  if ( !sortType )
  {
    v51 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                      System_Comparison_OpeningMovieEntity__TypeInfo,
                                                                      v49,
                                                                      v50);
    v52 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
    goto LABEL_41;
  }
  if ( !v29 )
    goto LABEL_45;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_o *__fastcall OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  OpeningMovieEntity_o *v19; // x0
  OpeningMovieEntity_o *v20; // x21
  __int64 v21; // x9
  System_String_o *movieName; // x0
  int v23; // w8
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  int v29; // [xsp+0h] [xbp-40h]

  if ( (byte_421202C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, movieFileName);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&OpeningMovieEntity_TypeInfo, v8);
    byte_421202C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                    Enumerator,
                                    *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( !v19 )
      goto LABEL_35;
    v21 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (OpeningMovieEntity_c *)v19->klass->_2.typeHierarchy[v21 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v19 = (OpeningMovieEntity_o *)sub_B0DC70(v19);
LABEL_35:
      sub_B0D97C(v19);
    }
    movieName = v19->fields.movieName;
    if ( !movieName )
      sub_B0D97C(0LL);
    if ( System_String__Equals_43837244(movieName, movieFileName, 0LL) )
    {
      v23 = 66;
      goto LABEL_25;
    }
  }
  v20 = 0LL;
  v23 = 64;
LABEL_25:
  v29 = v23;
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_29:
    v27 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  if ( v29 == 64 )
    return 0LL;
  return v20;
}


void __fastcall OpeningMovieMaster__SavePlayedOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  OpeningMovieEntity_o *OpeningMovie; // x0
  OpeningMovieEntity_o *v8; // x20
  TitleRootComponent_c *v9; // x0
  __int64 String_34963268; // x0
  System_String_o *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x21
  OpeningMovieEntity_Fields *p_fields; // x20
  unsigned __int64 v15; // x23
  int32_t id; // w25
  TitleRootComponent_c *v17; // x0
  System_String_o *v18; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x1
  System_String_o *v21; // x0
  TitleRootComponent_c *v22; // x0
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x19
  __int64 v24; // x0

  if ( (byte_421202E & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, movieFileName);
    sub_B0D8A4(&TitleRootComponent_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_705/*","*/, v6);
    byte_421202E = 1;
  }
  OpeningMovie = OpeningMovieMaster__GetOpeningMovie(this, movieFileName, method);
  if ( OpeningMovie )
  {
    v8 = OpeningMovie;
    v9 = TitleRootComponent_TypeInfo;
    if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v9 = TitleRootComponent_TypeInfo;
    }
    String_34963268 = (__int64)UnityEngine_PlayerPrefs__GetString_34963268(
                                 v9->static_fields->SAVE_KEY_PLAYED_MOVIE,
                                 0LL);
    if ( String_34963268 )
    {
      v11 = (System_String_o *)String_34963268;
      if ( *(int *)(String_34963268 + 16) < 1 )
      {
        v22 = TitleRootComponent_TypeInfo;
        if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
          v22 = TitleRootComponent_TypeInfo;
        }
        SAVE_KEY_PLAYED_MOVIE = v22->static_fields->SAVE_KEY_PLAYED_MOVIE;
        v20 = System_Int32__ToString((int)v8 + 16, 0LL);
        v21 = SAVE_KEY_PLAYED_MOVIE;
LABEL_26:
        UnityEngine_PlayerPrefs__SetString(v21, v20, 0LL);
        return;
      }
      String_34963268 = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( String_34963268 )
      {
        if ( !*(_DWORD *)(String_34963268 + 24) )
          goto LABEL_27;
        *(_WORD *)(String_34963268 + 32) = 44;
        String_34963268 = (__int64)System_String__Split(v11, (System_Char_array *)String_34963268, 0LL);
        if ( String_34963268 )
        {
          v12 = *(_QWORD *)(String_34963268 + 24);
          v13 = String_34963268;
          p_fields = &v8->fields;
          if ( (int)v12 >= 1 )
          {
            v15 = 0LL;
            while ( v15 < (unsigned int)v12 )
            {
              id = p_fields->id;
              String_34963268 = System_Int32__Parse(*(System_String_o **)(v13 + 32 + 8 * v15), 0LL);
              if ( id == (_DWORD)String_34963268 )
                return;
              LODWORD(v12) = *(_DWORD *)(v13 + 24);
              if ( (__int64)++v15 >= (int)v12 )
                goto LABEL_17;
            }
LABEL_27:
            v24 = sub_B0D9A8(String_34963268);
            sub_B0D948(v24, 0LL);
          }
LABEL_17:
          v17 = TitleRootComponent_TypeInfo;
          if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
            v17 = TitleRootComponent_TypeInfo;
          }
          v18 = v17->static_fields->SAVE_KEY_PLAYED_MOVIE;
          v19 = System_Int32__ToString((int32_t)p_fields, 0LL);
          v20 = System_String__Concat_43852188(v11, (System_String_o *)StringLiteral_705/*","*/, v19, 0LL);
          v21 = v18;
          goto LABEL_26;
        }
      }
    }
    sub_B0D97C(String_34963268);
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212164 & 1) == 0 )
  {
    sub_B0D8A4(&OpeningMovieMaster___c_TypeInfo, v1);
    byte_4212164 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(OpeningMovieMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct OpeningMovieMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall OpeningMovieMaster___c___ctor(OpeningMovieMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall OpeningMovieMaster___c___GetEnableOpeningMovies_b__2_0(
        OpeningMovieMaster___c_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall OpeningMovieMaster___c___GetEnableOpeningMovies_b__2_1(
        OpeningMovieMaster___c_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  int32_t priority; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !b || !a )
    sub_B0D97C(this);
  priority = b->fields.priority;
  v5 = a->fields.priority;
  result = priority - v5;
  if ( priority == v5 )
    return a->fields.id - b->fields.id;
  return result;
}


void __fastcall OpeningMovieMaster___c__DisplayClass4_0___ctor(
        OpeningMovieMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall OpeningMovieMaster___c__DisplayClass4_0___GetEnableOpeningMoviesAndMaterialPos_b__0(
        OpeningMovieMaster___c__DisplayClass4_0_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  int32_t materialPosValue; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a )
    goto LABEL_9;
  if ( this->fields.type == 2 )
  {
    if ( b )
    {
      materialPosValue = a->fields.materialPosValue;
      v5 = b->fields.materialPosValue;
      result = materialPosValue - v5;
      if ( materialPosValue != v5 )
        return result;
      return a->fields.id - b->fields.id;
    }
LABEL_9:
    sub_B0D97C(this);
  }
  if ( !b )
    goto LABEL_9;
  return a->fields.id - b->fields.id;
}


int32_t __fastcall OpeningMovieMaster___c__DisplayClass4_0___GetEnableOpeningMoviesAndMaterialPos_b__1(
        OpeningMovieMaster___c__DisplayClass4_0_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  int32_t materialPosValue; // w8
  int32_t v5; // w9
  int32_t result; // w0
  int32_t priority; // w8
  int32_t v8; // w9

  if ( this->fields.type == 2 )
  {
    if ( a && b )
    {
      materialPosValue = a->fields.materialPosValue;
      v5 = b->fields.materialPosValue;
      result = materialPosValue - v5;
      if ( materialPosValue != v5 )
        return result;
      goto LABEL_8;
    }
LABEL_11:
    sub_B0D97C(this);
  }
  if ( !b || !a )
    goto LABEL_11;
LABEL_8:
  priority = b->fields.priority;
  v8 = a->fields.priority;
  result = priority - v8;
  if ( priority == v8 )
    return a->fields.id - b->fields.id;
  return result;
}