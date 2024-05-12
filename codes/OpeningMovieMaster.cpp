void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A26B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
    byte_438A26B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    310,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  bool v14; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  OpeningMovieEntity_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x24
  __int64 v27; // x9
  _BOOL8 IsEnable; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  struct OpeningMovieMaster___c_StaticFields *v44; // x0
  BattleServantConfConponent_o *p__9__2_0; // x0
  struct OpeningMovieMaster___c_StaticFields *v46; // x8
  Il2CppObject *v47; // x21
  struct OpeningMovieMaster___c_StaticFields *v48; // x0

  if ( (byte_438A26C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Comparison_OpeningMovieEntity___ctor__);
    sub_B775C4(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_B775C4(&OpeningMovieEntity_TypeInfo);
    sub_B775C4(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__);
    sub_B775C4(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__);
    sub_B775C4(&OpeningMovieMaster___c_TypeInfo);
    byte_438A26C = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v12);
  v14 = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
    if ( !v23 )
      goto LABEL_55;
    v27 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v23->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (OpeningMovieEntity_c *)v23->klass->_2.typeHierarchy[v27 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v23 = (OpeningMovieEntity_o *)sub_B77990(v23);
LABEL_55:
      sub_B7769C(v23, v24);
    }
    IsEnable = OpeningMovieEntity__IsEnable(v23, nowTime, v14, v25);
    if ( IsEnable )
    {
      if ( !v9 )
        sub_B7769C(IsEnable, v29);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        v26,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    }
  }
  v30 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_29:
    v33 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                   Enumerator,
                   *(_QWORD *)(v33 + 8));
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
        v36 = (Il2CppObject *)static_fields->__9;
        _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_OpeningMovieEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__2_0,
          v36,
          Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__,
          (const MethodInfo_2B42C0C *)Method_System_Comparison_OpeningMovieEntity___ctor__);
        v43 = (System_Int32_array **)_9__2_0;
        v44 = OpeningMovieMaster___c_TypeInfo->static_fields;
        v44->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
        p__9__2_0 = (BattleServantConfConponent_o *)&v44->__9__2_0;
LABEL_49:
        sub_B77560(p__9__2_0, v43, v37, v38, v39, v40, v41, v42);
        goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v9 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                           (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_57:
    sub_B7769C(list, v10);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( (BYTE3(OpeningMovieMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v46 = (struct OpeningMovieMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v46->__9__2_1;
  if ( !_9__2_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v46 = OpeningMovieMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v46->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v47,
      Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    v43 = (System_Int32_array **)_9__2_0;
    v48 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v48->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
    p__9__2_0 = (BattleServantConfConponent_o *)&v48->__9__2_1;
    goto LABEL_49;
  }
LABEL_50:
  if ( !v9 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  OpeningMovieEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  OpeningMovieEntity_o *v27; // x25
  __int64 v28; // x10
  _BOOL8 IsEnable; // x0
  __int64 v30; // x1
  int32_t v31; // w8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v36; // x0
  __int64 *v37; // x8
  System_Comparison_T__o *v38; // x19

  if ( (byte_438A26E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_System_Comparison_OpeningMovieEntity___ctor__);
    sub_B775C4(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_B775C4(&OpeningMovieEntity_TypeInfo);
    sub_B775C4(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__);
    sub_B775C4(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__);
    sub_B775C4(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
    byte_438A26E = 1;
  }
  v11 = (OpeningMovieMaster___c__DisplayClass4_0_o *)sub_B77694(OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
  OpeningMovieMaster___c__DisplayClass4_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_45;
  v11->fields.type = type;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v24 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                    Enumerator,
                                    *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( v25 )
    {
      v28 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (OpeningMovieEntity_c *)v25->klass->_2.typeHierarchy[v28 - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v25, nowTime, 1, v26);
        if ( IsEnable )
        {
          v31 = v11->fields.type;
          if ( v31 == v27->fields.materialPosType )
          {
            if ( v31 == 2 )
            {
              if ( !v14 )
                sub_B7769C(IsEnable, v30);
LABEL_28:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v14,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
            }
            else if ( v31 == 1 && v27->fields.materialPosValue == value )
            {
              if ( !v14 )
                sub_B7769C(IsEnable, v30);
              goto LABEL_28;
            }
          }
        }
      }
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
        goto LABEL_35;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_35:
    v35 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v35 + 8));
  if ( sortType == 1 )
  {
    v36 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_OpeningMovieEntity__TypeInfo);
    v37 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
LABEL_41:
    v38 = (System_Comparison_T__o *)v36;
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v36,
      (Il2CppObject *)v11,
      *v37,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    if ( v14 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v14,
        v38,
        (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                           (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_45:
    sub_B7769C(list, v13);
  }
  if ( !sortType )
  {
    v36 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_OpeningMovieEntity__TypeInfo);
    v37 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
    goto LABEL_41;
  }
  if ( !v14 )
    goto LABEL_45;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_o *__fastcall OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  OpeningMovieEntity_o *v16; // x0
  __int64 v17; // x1
  OpeningMovieEntity_o *v18; // x21
  __int64 v19; // x9
  System_String_o *movieName; // x0
  int v21; // w8
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  int v27; // [xsp+0h] [xbp-40h]

  if ( (byte_438A26D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&OpeningMovieEntity_TypeInfo);
    byte_438A26D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7769C(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                    Enumerator,
                                    *(_QWORD *)(v15 + 8));
    v18 = v16;
    if ( !v16 )
      goto LABEL_35;
    v19 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (OpeningMovieEntity_c *)v16->klass->_2.typeHierarchy[v19 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v16 = (OpeningMovieEntity_o *)sub_B77990(v16);
LABEL_35:
      sub_B7769C(v16, v17);
    }
    movieName = v16->fields.movieName;
    if ( !movieName )
      sub_B7769C(0LL, OpeningMovieEntity_TypeInfo);
    if ( System_String__Equals_44889276(movieName, movieFileName, 0LL) )
    {
      v21 = 66;
      goto LABEL_25;
    }
  }
  v18 = 0LL;
  v21 = 64;
LABEL_25:
  v27 = v21;
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_29:
    v25 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v27 == 64 )
    return 0LL;
  return v18;
}


void __fastcall OpeningMovieMaster__SavePlayedOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  OpeningMovieEntity_o *OpeningMovie; // x0
  OpeningMovieEntity_o *v6; // x20
  TitleRootComponent_c *v7; // x0
  __int64 String_36337972; // x0
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

  if ( (byte_438A26F & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&TitleRootComponent_TypeInfo);
    sub_B775C4(&StringLiteral_714/*","*/);
    byte_438A26F = 1;
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
    String_36337972 = (__int64)UnityEngine_PlayerPrefs__GetString_36337972(
                                 v7->static_fields->SAVE_KEY_PLAYED_MOVIE,
                                 0LL);
    if ( String_36337972 )
    {
      v10 = (System_String_o *)String_36337972;
      if ( *(int *)(String_36337972 + 16) < 1 )
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
      String_36337972 = sub_B775DC(char___TypeInfo, 1LL);
      if ( String_36337972 )
      {
        if ( !*(_DWORD *)(String_36337972 + 24) )
          goto LABEL_27;
        *(_WORD *)(String_36337972 + 32) = 44;
        String_36337972 = (__int64)System_String__Split(v10, (System_Char_array *)String_36337972, 0LL);
        if ( String_36337972 )
        {
          v11 = *(_QWORD *)(String_36337972 + 24);
          v12 = String_36337972;
          p_fields = &v6->fields;
          if ( (int)v11 >= 1 )
          {
            v14 = 0LL;
            while ( v14 < (unsigned int)v11 )
            {
              id = p_fields->id;
              String_36337972 = System_Int32__Parse(*(System_String_o **)(v12 + 32 + 8 * v14), 0LL);
              if ( id == (_DWORD)String_36337972 )
                return;
              LODWORD(v11) = *(_DWORD *)(v12 + 24);
              if ( (__int64)++v14 >= (int)v11 )
                goto LABEL_17;
            }
LABEL_27:
            v23 = sub_B776C8(String_36337972);
            sub_B77668(v23, 0LL);
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
          v19 = System_String__Concat_44904220(v10, (System_String_o *)StringLiteral_714/*","*/, v18, 0LL);
          v20 = v17;
          goto LABEL_26;
        }
      }
    }
    sub_B7769C(String_36337972, v9);
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438A09F & 1) == 0 )
  {
    sub_B775C4(&OpeningMovieMaster___c_TypeInfo);
    byte_438A09F = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)OpeningMovieMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, a);
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
    sub_B7769C(this, a);
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
    sub_B7769C(this, a);
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
    sub_B7769C(this, a);
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