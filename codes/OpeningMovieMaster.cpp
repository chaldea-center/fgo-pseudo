void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185140 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, method);
    byte_4185140 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    309,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


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
  __int64 v24; // x1
  void *list; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  bool v29; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  OpeningMovieEntity_o *v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x24
  __int64 v43; // x9
  _BOOL8 IsEnable; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v52; // x21
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v53; // x1
  struct OpeningMovieMaster___c_StaticFields *v54; // x0
  struct System_Comparison_OpeningMovieEntity__o **p__9__2_0; // x0
  struct OpeningMovieMaster___c_StaticFields *v56; // x8
  Il2CppObject *v57; // x21
  struct OpeningMovieMaster___c_StaticFields *v58; // x0

  if ( (byte_4185141 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, nowTime);
    sub_B2C35C(&Method_System_Comparison_OpeningMovieEntity___ctor__, v9);
    sub_B2C35C(&System_Comparison_OpeningMovieEntity__TypeInfo, v10);
    sub_B2C35C(&System_IDisposable_TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v18);
    sub_B2C35C(&OpeningMovieEntity_TypeInfo, v19);
    sub_B2C35C(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, v20);
    sub_B2C35C(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, v21);
    sub_B2C35C(&OpeningMovieMaster___c_TypeInfo, v22);
    byte_4185141 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v26);
  v29 = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
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
      v38 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v39 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                    Enumerator,
                                    *(_QWORD *)(v38 + 8));
    v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
    if ( !v39 )
      goto LABEL_55;
    v43 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v43
      || (OpeningMovieEntity_c *)v39->klass->_2.typeHierarchy[v43 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v39 = (OpeningMovieEntity_o *)sub_B2C728(v39);
LABEL_55:
      sub_B2C434(v39, v40);
    }
    IsEnable = OpeningMovieEntity__IsEnable(v39, nowTime, v29, v41);
    if ( IsEnable )
    {
      if ( !v23 )
        sub_B2C434(IsEnable, v45);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        v42,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_29:
    v49 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                   Enumerator,
                   *(_QWORD *)(v49 + 8));
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
        v52 = (Il2CppObject *)static_fields->__9;
        _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_OpeningMovieEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__2_0,
          v52,
          Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
        v53 = _9__2_0;
        v54 = OpeningMovieMaster___c_TypeInfo->static_fields;
        v54->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
        p__9__2_0 = &v54->__9__2_0;
LABEL_49:
        sub_B2C2F8(p__9__2_0, v53);
        goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v23 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_57:
    sub_B2C434(list, v24);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( (BYTE3(OpeningMovieMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v56 = (struct OpeningMovieMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v56->__9__2_1;
  if ( !_9__2_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v56 = OpeningMovieMaster___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)v56->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v57,
      Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    v53 = _9__2_0;
    v58 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v58->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
    p__9__2_0 = &v58->__9__2_1;
    goto LABEL_49;
  }
LABEL_50:
  if ( !v23 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x3
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  OpeningMovieEntity_o *v41; // x0
  OpeningMovieEntity_o *v42; // x25
  __int64 v43; // x10
  _BOOL8 IsEnable; // x0
  __int64 v45; // x1
  int32_t v46; // w8
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v51; // x0
  __int64 *v52; // x8
  System_Comparison_T__o *v53; // x19

  if ( (byte_4185143 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Comparison_OpeningMovieEntity___ctor__, v11);
    sub_B2C35C(&System_Comparison_OpeningMovieEntity__TypeInfo, v12);
    sub_B2C35C(&System_IDisposable_TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v20);
    sub_B2C35C(&OpeningMovieEntity_TypeInfo, v21);
    sub_B2C35C(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__, v22);
    sub_B2C35C(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__, v23);
    sub_B2C35C(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo, v24);
    byte_4185143 = 1;
  }
  v25 = (OpeningMovieMaster___c__DisplayClass4_0_o *)sub_B2C42C(OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
  OpeningMovieMaster___c__DisplayClass4_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_45;
  v25->fields.type = type;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v30);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v36);
    }
    v41 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                    Enumerator,
                                    *(_QWORD *)(v40 + 8));
    v42 = v41;
    if ( v41 )
    {
      v43 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v43
        && (OpeningMovieEntity_c *)v41->klass->_2.typeHierarchy[v43 - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v41, nowTime, 1, v30);
        if ( IsEnable )
        {
          v46 = v25->fields.type;
          if ( v46 == v42->fields.materialPosType )
          {
            if ( v46 == 2 )
            {
              if ( !v28 )
                sub_B2C434(IsEnable, v45);
LABEL_28:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v28,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
            }
            else if ( v46 == 1 && v42->fields.materialPosValue == value )
            {
              if ( !v28 )
                sub_B2C434(IsEnable, v45);
              goto LABEL_28;
            }
          }
        }
      }
    }
  }
  v47 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v50 = (__int64)&v47->vtable[*v49].method;
  }
  else
  {
LABEL_35:
    v50 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v36);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v50 + 8));
  if ( sortType == 1 )
  {
    v51 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_OpeningMovieEntity__TypeInfo);
    v52 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
LABEL_41:
    v53 = (System_Comparison_T__o *)v51;
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v51,
      (Il2CppObject *)v25,
      *v52,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    if ( v28 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v28,
        v53,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_45:
    sub_B2C434(list, v27);
  }
  if ( !sortType )
  {
    v51 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_OpeningMovieEntity__TypeInfo);
    v52 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
    goto LABEL_41;
  }
  if ( !v28 )
    goto LABEL_45;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  OpeningMovieEntity_o *v21; // x0
  __int64 v22; // x1
  OpeningMovieEntity_o *v23; // x21
  __int64 v24; // x9
  System_String_o *movieName; // x0
  int v26; // w8
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  int v32; // [xsp+0h] [xbp-40h]

  if ( (byte_4185142 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, movieFileName);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&OpeningMovieEntity_TypeInfo, v8);
    byte_4185142 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v21 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                    Enumerator,
                                    *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_35;
    v24 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (OpeningMovieEntity_c *)v21->klass->_2.typeHierarchy[v24 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v21 = (OpeningMovieEntity_o *)sub_B2C728(v21);
LABEL_35:
      sub_B2C434(v21, v22);
    }
    movieName = v21->fields.movieName;
    if ( !movieName )
      sub_B2C434(0LL, OpeningMovieEntity_TypeInfo);
    if ( System_String__Equals_44292872(movieName, movieFileName, 0LL) )
    {
      v26 = 66;
      goto LABEL_25;
    }
  }
  v23 = 0LL;
  v26 = 64;
LABEL_25:
  v32 = v26;
  v27 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_29:
    v30 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  if ( v32 == 64 )
    return 0LL;
  return v23;
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
  __int64 String_35342888; // x0
  __int64 v11; // x1
  System_String_o *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x21
  OpeningMovieEntity_Fields *p_fields; // x20
  unsigned __int64 v16; // x23
  int32_t id; // w25
  TitleRootComponent_c *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  System_String_o *v21; // x1
  System_String_o *v22; // x0
  TitleRootComponent_c *v23; // x0
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x19
  __int64 v25; // x0

  if ( (byte_4185144 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, movieFileName);
    sub_B2C35C(&TitleRootComponent_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_699/*","*/, v6);
    byte_4185144 = 1;
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
    String_35342888 = (__int64)UnityEngine_PlayerPrefs__GetString_35342888(
                                 v9->static_fields->SAVE_KEY_PLAYED_MOVIE,
                                 0LL);
    if ( String_35342888 )
    {
      v12 = (System_String_o *)String_35342888;
      if ( *(int *)(String_35342888 + 16) < 1 )
      {
        v23 = TitleRootComponent_TypeInfo;
        if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
          v23 = TitleRootComponent_TypeInfo;
        }
        SAVE_KEY_PLAYED_MOVIE = v23->static_fields->SAVE_KEY_PLAYED_MOVIE;
        v21 = System_Int32__ToString((int)v8 + 16, 0LL);
        v22 = SAVE_KEY_PLAYED_MOVIE;
LABEL_26:
        UnityEngine_PlayerPrefs__SetString(v22, v21, 0LL);
        return;
      }
      String_35342888 = sub_B2C374(char___TypeInfo, 1LL);
      if ( String_35342888 )
      {
        if ( !*(_DWORD *)(String_35342888 + 24) )
          goto LABEL_27;
        *(_WORD *)(String_35342888 + 32) = 44;
        String_35342888 = (__int64)System_String__Split(v12, (System_Char_array *)String_35342888, 0LL);
        if ( String_35342888 )
        {
          v13 = *(_QWORD *)(String_35342888 + 24);
          v14 = String_35342888;
          p_fields = &v8->fields;
          if ( (int)v13 >= 1 )
          {
            v16 = 0LL;
            while ( v16 < (unsigned int)v13 )
            {
              id = p_fields->id;
              String_35342888 = System_Int32__Parse(*(System_String_o **)(v14 + 32 + 8 * v16), 0LL);
              if ( id == (_DWORD)String_35342888 )
                return;
              LODWORD(v13) = *(_DWORD *)(v14 + 24);
              if ( (__int64)++v16 >= (int)v13 )
                goto LABEL_17;
            }
LABEL_27:
            v25 = sub_B2C460(String_35342888);
            sub_B2C400(v25, 0LL);
          }
LABEL_17:
          v18 = TitleRootComponent_TypeInfo;
          if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
            v18 = TitleRootComponent_TypeInfo;
          }
          v19 = v18->static_fields->SAVE_KEY_PLAYED_MOVIE;
          v20 = System_Int32__ToString((int32_t)p_fields, 0LL);
          v21 = System_String__Concat_44307816(v12, (System_String_o *)StringLiteral_699/*","*/, v20, 0LL);
          v22 = v19;
          goto LABEL_26;
        }
      }
    }
    sub_B2C434(String_35342888, v11);
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185276 & 1) == 0 )
  {
    sub_B2C35C(&OpeningMovieMaster___c_TypeInfo, v1);
    byte_4185276 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct OpeningMovieMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
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
    sub_B2C434(this, a);
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