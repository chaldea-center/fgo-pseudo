void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADB30 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
    byte_42ADB30 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    310,
    (const MethodInfo_23E223C *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        bool isMaterial,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  __int64 v10; // x1
  void *list; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  bool v15; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  OpeningMovieEntity_o *v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x24
  __int64 v29; // x9
  _BOOL8 IsEnable; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v38; // x21
  struct OpeningMovieMaster___c_StaticFields *v39; // x0
  struct System_Comparison_OpeningMovieEntity__o **p__9__2_0; // x0
  struct OpeningMovieMaster___c_StaticFields *v41; // x8
  Il2CppObject *v42; // x21
  struct OpeningMovieMaster___c_StaticFields *v43; // x0

  if ( (byte_42ADB31 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_OpeningMovieEntity___ctor__);
    sub_B52984(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_B52984(&OpeningMovieEntity_TypeInfo);
    sub_B52984(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__);
    sub_B52984(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__);
    sub_B52984(&OpeningMovieMaster___c_TypeInfo);
    byte_42ADB31 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v12);
  v15 = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_17:
      v24 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v25 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                    Enumerator,
                                    *(_QWORD *)(v24 + 8));
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)v25;
    if ( !v25 )
      goto LABEL_55;
    v29 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (OpeningMovieEntity_c *)v25->klass->_2.typeHierarchy[v29 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v25 = (OpeningMovieEntity_o *)sub_B52D50(v25);
LABEL_55:
      sub_B52A5C(v25, v26);
    }
    IsEnable = OpeningMovieEntity__IsEnable(v25, nowTime, v15, v27);
    if ( IsEnable )
    {
      if ( !v9 )
        sub_B52A5C(IsEnable, v31);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        v28,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_29:
    v35 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                   Enumerator,
                   *(_QWORD *)(v35 + 8));
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
        v38 = (Il2CppObject *)static_fields->__9;
        _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_OpeningMovieEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__2_0,
          v38,
          Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__,
          (const MethodInfo_2483370 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
        v39 = OpeningMovieMaster___c_TypeInfo->static_fields;
        v39->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
        p__9__2_0 = &v39->__9__2_0;
LABEL_49:
        sub_B52920(p__9__2_0);
        goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v9 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_57:
    sub_B52A5C(list, v10);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( (BYTE3(OpeningMovieMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v41 = (struct OpeningMovieMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v41->__9__2_1;
  if ( !_9__2_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v41 = OpeningMovieMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)v41->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v42,
      Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__,
      (const MethodInfo_2483370 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    v43 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v43->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
    p__9__2_0 = &v43->__9__2_1;
    goto LABEL_49;
  }
LABEL_50:
  if ( !v9 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMoviesAndMaterialPos(
        OpeningMovieMaster_o *this,
        int32_t type,
        int32_t value,
        int64_t nowTime,
        int32_t sortType,
        const MethodInfo *method)
{
  OpeningMovieMaster___c__DisplayClass4_0_o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  OpeningMovieEntity_o *v27; // x0
  OpeningMovieEntity_o *v28; // x25
  __int64 v29; // x10
  _BOOL8 IsEnable; // x0
  __int64 v31; // x1
  int32_t v32; // w8
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v37; // x0
  __int64 *v38; // x8
  System_Comparison_T__o *v39; // x19

  if ( (byte_42ADB33 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_OpeningMovieEntity___ctor__);
    sub_B52984(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_B52984(&OpeningMovieEntity_TypeInfo);
    sub_B52984(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__);
    sub_B52984(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__);
    sub_B52984(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
    byte_42ADB33 = 1;
  }
  v11 = (OpeningMovieMaster___c__DisplayClass4_0_o *)sub_B52A54(OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
  OpeningMovieMaster___c__DisplayClass4_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_45;
  v11->fields.type = type;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_17:
      v26 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                    Enumerator,
                                    *(_QWORD *)(v26 + 8));
    v28 = v27;
    if ( v27 )
    {
      v29 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v29
        && (OpeningMovieEntity_c *)v27->klass->_2.typeHierarchy[v29 - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v27, nowTime, 1, v16);
        if ( IsEnable )
        {
          v32 = v11->fields.type;
          if ( v32 == v28->fields.materialPosType )
          {
            if ( v32 == 2 )
            {
              if ( !v14 )
                sub_B52A5C(IsEnable, v31);
LABEL_28:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
            }
            else if ( v32 == 1 && v28->fields.materialPosValue == value )
            {
              if ( !v14 )
                sub_B52A5C(IsEnable, v31);
              goto LABEL_28;
            }
          }
        }
      }
    }
  }
  v33 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      v35 += 4;
      if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_35:
    v36 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v36 + 8));
  if ( sortType == 1 )
  {
    v37 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_OpeningMovieEntity__TypeInfo);
    v38 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
LABEL_41:
    v39 = (System_Comparison_T__o *)v37;
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v37,
      (Il2CppObject *)v11,
      *v38,
      (const MethodInfo_2483370 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    if ( v14 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v14,
        v39,
        (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_45:
    sub_B52A5C(list, v13);
  }
  if ( !sortType )
  {
    v37 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_OpeningMovieEntity__TypeInfo);
    v38 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
    goto LABEL_41;
  }
  if ( !v14 )
    goto LABEL_45;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                       (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_o *__fastcall OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  OpeningMovieEntity_o *v17; // x0
  __int64 v18; // x1
  OpeningMovieEntity_o *v19; // x21
  __int64 v20; // x9
  System_String_o *movieName; // x0
  int v22; // w8
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  int v28; // [xsp+0h] [xbp-40h]

  if ( (byte_42ADB32 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&OpeningMovieEntity_TypeInfo);
    byte_42ADB32 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v7);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v7);
    }
    v17 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                    Enumerator,
                                    *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      goto LABEL_35;
    v20 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (OpeningMovieEntity_c *)v17->klass->_2.typeHierarchy[v20 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v17 = (OpeningMovieEntity_o *)sub_B52D50(v17);
LABEL_35:
      sub_B52A5C(v17, v18);
    }
    movieName = v17->fields.movieName;
    if ( !movieName )
      sub_B52A5C(0LL, OpeningMovieEntity_TypeInfo);
    if ( System_String__Equals_44555656(movieName, movieFileName, 0LL) )
    {
      v22 = 66;
      goto LABEL_25;
    }
  }
  v19 = 0LL;
  v22 = 64;
LABEL_25:
  v28 = v22;
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v7);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  if ( v28 == 64 )
    return 0LL;
  return v19;
}


void __fastcall OpeningMovieMaster__SavePlayedOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  OpeningMovieEntity_o *OpeningMovie; // x0
  OpeningMovieEntity_o *v6; // x20
  TitleRootComponent_c *v7; // x0
  __int64 String_35644948; // x0
  __int64 v9; // x1
  System_String_o *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x21
  OpeningMovieEntity_Fields *p_fields; // x20
  unsigned __int64 v14; // x23
  int32_t id; // w25
  TitleRootComponent_c *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x1
  System_String_o *v20; // x0
  TitleRootComponent_c *v21; // x0
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x19
  __int64 v23; // x0

  if ( (byte_42ADB34 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&TitleRootComponent_TypeInfo);
    sub_B52984(&StringLiteral_709/*","*/);
    byte_42ADB34 = 1;
  }
  OpeningMovie = OpeningMovieMaster__GetOpeningMovie(this, movieFileName, method);
  if ( OpeningMovie )
  {
    v6 = OpeningMovie;
    v7 = TitleRootComponent_TypeInfo;
    if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v7 = TitleRootComponent_TypeInfo;
    }
    String_35644948 = (__int64)UnityEngine_PlayerPrefs__GetString_35644948(
                                 v7->static_fields->SAVE_KEY_PLAYED_MOVIE,
                                 0LL);
    if ( String_35644948 )
    {
      v10 = (System_String_o *)String_35644948;
      if ( *(int *)(String_35644948 + 16) < 1 )
      {
        v21 = TitleRootComponent_TypeInfo;
        if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
          v21 = TitleRootComponent_TypeInfo;
        }
        SAVE_KEY_PLAYED_MOVIE = v21->static_fields->SAVE_KEY_PLAYED_MOVIE;
        v19 = System_Int32__ToString((int)v6 + 16, 0LL);
        v20 = SAVE_KEY_PLAYED_MOVIE;
LABEL_26:
        UnityEngine_PlayerPrefs__SetString(v20, v19, 0LL);
        return;
      }
      String_35644948 = sub_B5299C(char___TypeInfo, 1LL);
      if ( String_35644948 )
      {
        if ( !*(_DWORD *)(String_35644948 + 24) )
          goto LABEL_27;
        *(_WORD *)(String_35644948 + 32) = 44;
        String_35644948 = (__int64)System_String__Split(v10, (System_Char_array *)String_35644948, 0LL);
        if ( String_35644948 )
        {
          v11 = *(_QWORD *)(String_35644948 + 24);
          v12 = String_35644948;
          p_fields = &v6->fields;
          if ( (int)v11 >= 1 )
          {
            v14 = 0LL;
            while ( v14 < (unsigned int)v11 )
            {
              id = p_fields->id;
              String_35644948 = System_Int32__Parse(*(System_String_o **)(v12 + 32 + 8 * v14), 0LL);
              if ( id == (_DWORD)String_35644948 )
                return;
              LODWORD(v11) = *(_DWORD *)(v12 + 24);
              if ( (__int64)++v14 >= (int)v11 )
                goto LABEL_17;
            }
LABEL_27:
            v23 = sub_B52A88(String_35644948);
            sub_B52A28(v23, 0LL);
          }
LABEL_17:
          v16 = TitleRootComponent_TypeInfo;
          if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
            v16 = TitleRootComponent_TypeInfo;
          }
          v17 = v16->static_fields->SAVE_KEY_PLAYED_MOVIE;
          v18 = System_Int32__ToString((int32_t)p_fields, 0LL);
          v19 = System_String__Concat_44570600(v10, (System_String_o *)StringLiteral_709/*","*/, v18, 0LL);
          v20 = v17;
          goto LABEL_26;
        }
      }
    }
    sub_B52A5C(String_35644948, v9);
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD3F8 & 1) == 0 )
  {
    sub_B52984(&OpeningMovieMaster___c_TypeInfo);
    byte_42AD3F8 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct OpeningMovieMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, a);
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